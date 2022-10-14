import React, { useState } from "react";
import axios from "axios";

function App() {
const [data, setData] = useState([])
const getNews = function () {
    axios.get("https://newsapi.org/v2/top-headlines?country=in&apiKey=b8b72af9f4904ee193c03e55360090bd&q=india")
        .then((response) => {
            console.log(response);
            setData(response.data.articles)
        })
}


    return (
        <>
            <div className="container my-3" >
                <button className="btn btn-primary" onClick={getNews} >Fetch News</button>
            </div>

            <div className="container">
                <div className="row">
                    {
                        data.map((value) =>{
                            return(

                                <div className="col-3">
                        <div className= "card" style={{width: "18rem"}}>
                            <img src={value.urlToImage} className="card-img-top" alt="..." />
                                <div className="card-body">
                                    <h5 className="card-title">{value.title}</h5>
                                    <p className="card-text">{value.description}</p>
                                    <a href="#" class="btn btn-primary">Main News</a>
                                </div>
                        </div>
                    </div>

                            );
                        })
                    }
                </div>
            </div>
        </>
    );
}

export default App;