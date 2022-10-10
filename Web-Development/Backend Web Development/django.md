# Django

Django is a high-level Python web framework that encourages rapid development and clean, pragmatic design. Built by experienced developers, it takes care of much of the hassle of web development, so you can focus on writing your app without needing to reinvent the wheel. It’s free and open source.
<br>

## **How does Django work?**

Django follows the MVT design pattern (Model View Template).

* **Model** - The data you want to present, usually data from a database.
* **View** - A request handler that returns the relevant template and content - based on the request from the user.
* **Template** - A text file (like an HTML file) containing the layout of the web page, with logic on how to display the data.

<br>

# Model
> The model provides data from the database.
In Django, the data is delivered as an `Object Relational Mapping (ORM)`, which is a technique designed to make it easier to work with databases.
The most common way to extract data from a database is SQL. One problem with SQL is that you have to have a pretty good understanding of the database structure to be able to work with it.
Django, with ORM, makes it easier to communicate with the database, without having to write complex SQL statements.<br>
The models are usually located in a file called `models.py`

<br>

# View
>A view is a function or method that takes http requests as arguments, imports the relevant model(s), and finds out what data to send to the template, and returns the final result.<br>
The views are usually located in a file called `views.py`

<br>

# Template
>A template is a file where you describe how the result should be represented.
Templates are often .html files, with HTML code describing the layout of a web page, but it can also be in other file formats to present other results, but we will concentrate on .html files.<br>
The templates of an application is located in a `folder named templates`

<br>

# URLs
>Django also provides a way to navigate around the different pages in a website.
When a user requests a URL, Django decides which view it will send it to. <br>
This is done in a file called `urls.py`

<br><br>

# Setting up a Django Project

Most developers prefer to create a virtual environment in order to run their development server and other stuff but to keep this documentation as simple as possible let's get straight to creating a django project.
<br>

## 1. Installing Django 

```bash
  python -m pip install Django
```

## 2. Setting Up Django Project 

```bash
  django-admin startproject my_project
```
A project folder will be created with the name  `my_project`. 

![Img1](https://lh3.googleusercontent.com/ZfIN21Wqvr-hXfPn-68ducJkrWxACCdx9-BztuxYO2g0eKI-0TZia9yosJZXU2cLfZElWMSF95nGD8HZoAExyiZXeGKtFwzAEhW9NVnVrqz4u53NOknFBvEGW7x8mPJzxulEIWI-wcAz0dasxcVmevYQYUk--vzeLxGbZROeqfP0sAIyon4SNpeXgp-_9GcO7pa7agFdxm2aNjmH9AxebrIvbb3_1eSsGzNfSKip3qz2qqwlqyxykKzp7grTLRuPr0vKrh3zhuLZhpzAHpl8hx4EkiNOCk-KP_MYFDIra0XSqSJJ-LL5O4yPY5qCHaZdV38BsGrRogEnpuU3MPy3IV43pH5CDYI3imTsWasV6EmVyGxpG0B2vvlKNvXlYjEk93T5gUuug8eEtEl0RSapaBZYg7gpMd6em010c0iIb27FL8AwSMF8pRsQBiHnwDisCE0harBwk7IQIV5giHrpgalSFseYJaHbJXQEzGY4d5UUzFu_BoMLPADtGy6PEXP3ZxrcpOc0-8YECcirqfuNv1FrmskzMM4LZCIn4JzW316VPb8TFuYnUDBHvipcsrzOwObBNTnZ2Mq29ytRsyB6zb-yhrJ-kuIqvs--z1v0W9PXYEuhK2IsLhzDiRUGUXAkTNK6YJNO5nr1UdmEHlmZUdJ36P71R0Xowng4_sgoL3NE7U3hqZGVd91t2YhpEJ1EJ1Akka4aDy3WO0ZejCRwz9WadDr0BCxqF8uwmO0jHbn6Np1NQyWsV4LlYVZSFXw_X6PUCUt8Bs176b6YJfbX8SEntJNZgsy9RVxsN9pbzY7dPBwCj4hz-GhXP0-8BB93U3NNXRknGyYr0H_YbSNdiCMGWgJuAN0Eah-EsYLex1Y7UvLotMRE8SXRRdy6GP2IXmyuC68e1noNYevfFHy46nFV-ZuXxboHRjqttw=w750-h386-no?authuser=0)

### Short-Trick: To open vs code with cmd prompt:

```bash
  code .
```

![img2](https://lh3.googleusercontent.com/mvyDrM-aKGhaOnKFsanOUWA4ksyWy4dLrHKu6VskmU_SVd3cyUcSeEv8xnDev1AbFt-9SJNRM2ZjgLrIz999d_AOrcnvfPhlvrnzeTJIvfqlSIB_YyNGR9UXt4ETDaBu_je8wkOKN_x3OmfIIbq3fLdRhz77k_e-Jkfxum2cDJKPYUAhFe1Rlnzfgo8U5c0MzEazewto0Zc9JGGz-oLx171OEUycQcbTqMFRcRH3-K3ydupnjPW_G4yitdRkqIB0ZnFDqiNI2NFmGG-V4brZ3-XA5zC2vpYx-MA7V0J5nS9CMjiq1uS6OAot89Yu3KmW21Radmb7V-SJMLFUxpVHc39kfSaSwoQHTew6HK0fzJ96YTs7ew_8A3DjhK1hiHdwUAOGDVNvd1lCEvSQnkAAFtorqIXF7BfayM-VOIQn_NiawtooMf5tAmdE6ldNMCSPOnDf65_HAY5k-JaPlDbofpsbDONmDonOvXjH8K440Fa_j-ZxkPwnb0sZUQ9b6kU5Wm_XXKfDwihU7RuWnsDe9PSHF9i3oQsKmGp6jllfv7vHy8BNkyMqv5yc2pM9J049j-5GxHRSOTRJgHesiUdyce6VzTwU_ynsU9tByJ5joEk_kZmTaBPIIluV8rzrfZ__3OLbXvtVgyoSlVRt4yJxSkoX7Y_YBIGmUPg36-TBYy2Li3E-z2N9YFmldzv5Jvd3pYB1R_mScqHha2HHNxu6b0W9eDx09-W0m9Fsm65KKLktuK4b9PwDKvzXWkzttL66S0w1dF2zbqEWExeoFBehafyK2d2Nxc_hrInaW5buCbXz-BcgJcWaqnZMuMUtdizrhpdFfd4QGqMowVhWWpgpj7SsxrwUi4PEO9TGJhmYSjlsa2NuMFtylSfBKj1sh-Ef3EaL8EF69rF-7nbhsqPFvi-s7bBbkAS-m41p8g=w1760-h990-no?authuser=0)

After setting up the project you will see your folder structure as: 
<br>
![img3](https://lh3.googleusercontent.com/q1QYXgpoIDsmg8kbOJpUszoaVvum8KxiLHQMC8idp0GgtTcEYiftuVRQ5jBYPPHm88sJ4luuGSJxkAMe3G8JgPgFZze3GoPzF3ugnA3UQTbGc0H4aDzg8fwy2FQlh-Z_gRpgkj0nYlErbGtb0Joybb48K0_iANuEfMBYf0ffCArnjNxxOpLWmdJhweR9NSIWI798spzIRANor_KPo5v_N97-R6KLGfNj7Dlh84u3uW2B02VzweWI-5ApAn-bM8dPCyW4hJzA8PXmrQryRCo_sQHGpv-IoDWbCTVG2SE_yZI2jswHgiyH9tUX_LYu-t59cMQNCbB0_fdBVNHfUGUbBE7CJ8XFkAIyqIDK6F81DfYaSijd2rBO83wrOerZCZGyQNQ_3dqKPCMX-5i_lcyhKPj2yjAvWxOaXnQF-V9gIZ4zgu1Bc-dNBa5gUyJPkKRN195R3iqIuLMvPABXhGNzH8MoocKdxe4fI23llCUaP1_weqgS-aqbV3lhnZoMPbUosRKkbh6LdiSAklhu2-OrzOYvbEknXHf5PTT5bxJLi_EC52ra6Q7zGYIb3FKKs6qpVgA2zbXuv0bGQjjIvTCU_WVNAJwZG74hIRh8SeNun4Yc0nbWGqNaa0eZ-XetmL08b9w9WvramPBqxH8SSXyUCTTXhdJ8CbghUGCWgrL4epbmFZz1Ttc9aP-O2AVpSyOgGRZsvmb4MObkOL1hZ5v3LdDWqtGCpp9cI8RDWDP74T9LQhHjlZKEElQODY-4S5rP7SS7tv9EmkHh22IDYHgbP-EK0WmNxYxUQeAWQMvGJGds6YVdqgvtFYOijKtij4TNzN7n9sgsKl0SeGA_08CozMhGyHIEvzGfhAQG73-ZjvpIM9y-bX1FtZhUyfb_9EYmMXHJggtVGeu7VaZ4vuopLE9VExVOahyoMtK4eg=w248-h338-no?authuser=0)

* `manage.py` : It is your tool for executing many Django-specific tasks -- starting a new app within a project, running the development server, running your tests. 
* `settings.py` : It holds all the configuration values that your web app needs to work; database settings, logging configuration, where to find static files, and a bunch of other stuff.
* `urls.py` : It is the file where you define the mapping between URLs and views. In simple terms giving url paths to the pages.
* `asgi.py` , `wsgi.py` : These files are used at the time of deploying your django application.They specify the interface and sit in between the web server and a Python web application or framework. One of their jobs is to handle incoming requests from the client, but they go about it in different ways.

## 3. Run django server
Change Directory into your my_project folder in your vscode terminal and then run: 
```bash
  python manage.py runserver
```

![img4](https://lh3.googleusercontent.com/UCEsH8XlO9_GaBEu3HJI-EP6rAuCQeyxhB0tnCjLKzpBKzY1nbDnXYzh3NnUtmqq_mZsJHjGAaFEpjn4GT0IjeRZ3xlmFBWT8LWd07Q84N0NXosTKOiHNdYsceaWyLpktXVGzkrpjoRvbVcS6C08howU77xudXlxLAcMQjcaUx2it7rt-6WaMhJnA5qz9_r7Hu2NwaCXK4929uw7NWCCKur2mTLqHSg165LPrCi-WfNNdWciSinmGEQnzy3Utzy8xRkrxc3P3Sk6DgPpuaKpdFsGcqqLyHUvOXXvJYzkWd0FMe-1r6AHaPrZnx5jKiGJ4eiPHAuWf8wLLwnFEh1GzqCl0ybTGfm_sS1rTvJfoL4Z3yDFcFSb1xdvxLamz508b73r-8of5lWgoV4cgqafNj7ACrmQKdB--cVTRqm5tTZk1_ThJV9zXUmcSmfkfrG4RDm5sBf0KlrVZXH5mj5ilQu4EikNSMCpYnOCUJ1M7wCMpC7zPjcWFgLE0bOaGBBufPqMQexw2SqfnF73B7vGZ62lrCEwYNVjyFQjp7b2qNEg_KGbI2PWSxEFLyV_muXzCeAIK_xEyDSGVRPOlt2C3FWDyoXiDGZHhcOuj7CAE35g4iDbDFUIjeQtdu8Tx8sDRRH2L00jZ-prZ0TFPuhGqNsRluo-R0yUdVTHA-LqbHsqOXjPZrv1kZjePVtUrpfuv1kfqwPx1PxqLiWJD4D0iCVLMtbxtay9lWm1BrTt8FJrbHU7dR83tog9OVInZx3unRxVpWhDCE9Eu_Pzp9_A7VkroF3DNeOlJSHEdhGNKBMzzkhSxrg9g3OgnynYLhIpkNf0fLLO4vZe0M0jUysiSNNJSNjsqzWUk-36mDJd4MrtByVNtQwc8U6PU-m6yqXR0WSIbVWfx-cztxr-clkmuUMoWf0V-ZRJF-rxYA=w1440-h322-no?authuser=0)

<br>

Go to the [http://127.0.0.1:8000/](http://127.0.0.1:8000/)
or [http://localhost:8000/](http://localhost:8000/)

![img5](https://lh3.googleusercontent.com/lJxygEowPTyMlRDeBia0lKLt3VXRK3_xSrr0rOmuFlo-0HzoS-QLNUhXjv5923oVsijvjw1QQVkjRqtpvRFVCsgE4WkZ4J9UcSySYLBJvvgREG5X61xHTNwUBQb7QIuuvxTeklXk94UYf3iNxcoDQR2hUtWqUi9oOYtjXM-xEIGP26evh5_EW3FZVlVzn-L5eGpwpub70E2s0QJ3lSEf0nFeycmydHbwvp_ZsTJbrcCnbxX3Gm8_94mLdJeQvVjzRBcNqs2NemMLj0ouxQd5543OcThOcW-Uy4luzZc3S1S7iLEPu6SjrFYzxN1npneA-GawRWk0BifrPdIKvn-vTVquxYczsZ_KsvPVnI_qzQW6Z7TbXPETknM0zZyfMplkN1DnjY6pkU6BDg8ub76a0HT27B9eIaIgCnLy4s12iEnRQePnDZUyw68y0itN5V-gzelWLeXzvYyXIke5-8c1s81T7tBtCMU3FUTTCWcUNGEojPsnB_ONDazCKFmRv7x2uVYAjtLh6f7uaJMmEi3NBAgkVoaN5S-7KLcFycRNKHxrXBpjegWMs2dB1wcQYgEu_WAP-yb6yo-65rJVMLbayUr_5glGYW-FghC27UxURVJ2NsqST3NMJuSLJekTUkplAusOBDkBEMQnRHbK_sV_FTi4P1r0lf_08D0FTv7CYpjmf5SM_mUVIeBRYxwaVsJtFFYvZqVnSdQcrqhaHK7tUOvVVRKYwVoDuTvEAN4gNTcBEZ5uhJVwFnObW4qZG-_A6Sy4py0yhm21XDk2x36Ac-08msXYuHJ9xoaPK3MIagoXuJdpuksraPLNsGAWkga6oo_5XonKDrohgMU7_778kj4D_rR8yWMetPTg96nuwQeUDRJK44pxw_XyX17_-KYYLj20I969eZZY0DX1j-E2YcCRMmSG8VteRAT9Lg=w1760-h990-no?authuser=0)

Voila! You have succesfully started your first django server!

## 4. Creating first app
```bash
  python manage.py startapp test123
```

![img6](https://lh3.googleusercontent.com/sP40ZeqshX0aUPBRTuNNcG1ww1KyvlX-e4z33t36zgaXAPRQEtU0StvQFd3bPCeH2f0Kn1E47T1xuorwbSmTAbF3xclcHE13h51s-lulR-cVQI-8wD4-EwlLz2F0ANoujf-jeDNkSyAw9dbFN8zH1v9gs8SwxaEbM3a2Hdyo10rRQY021oqI2VcnGvnmBcZooCWgSACPGthdnGedMjlR7wvPTsxP9PTSllnJgueWnASM0Hx6Tt3tzsfgg6alXJhUk4Qz0QzW9PFgNZr4JvfUNkdmscW53wscSxSf8XanE4V6sgqIF38e7xP_aVx0MNhZpcnjmyN9AhZGKJ_OWf3Qfx1KC1wtGRUce4-niihCXz43JuN9hxCwm0HeHrFzHyU1qB3aMlvCDMxHryAkOfce2M17ZIEJFilpZI2KiMnLyGLjwCD4bdaUlyGigwqMQdFDffn5B_T-xJn4jWoFHrUAIjhkyUQG0bExzyeLs_WHMW71F65ty0pMjTAmOILzDq_2bo9HgYXHuocgYKYdTaiv33sL88vswtgJKJjrHO3nGzYVgKD9uCYqDr8iuGokMrSiZ5X_5oynUKBN8205gva0NUmX5LFE3P0s6vYiHXSozZQjJll3xSMLE2SLQ2n2OEoRPN5fI2iRoLlk3C30nSLrfYHorBx0G6F66YWuzEVW18oZYq0r2541uvbsqIRyoMMEN8fN0fhcp_JQgtIsozHOrI157hrGuhvROTYGDPD8OHzOvsKFfpf6mfCMNZfh3R9ebvwxMm4QhxEp4wrmzmXpaJvqr2eD319TIP1lozEvILT-7EthFAIycp9TL91_pKucyV5Q3bUne2ORFwbkOc-uxb-yfuv0lkoJSQ_1gXOaR0IvV7ITsEngi9YGD0TylZ896Ykd03eEqYUHegJYECErO6ZSxfECggtHhqeLSQ=w252-h387-no?authuser=0)

* `views.py` is the file where you handle all the logic and handling web requests,responses and rendering templates.

<br>



**NOTICE: There is no urls.py in our app yet... we will add it later.**

After creating the app, we need to add our app in the settings.py file so that django is aware of the exsistence of our app.

* Go to settings.py and then under INSTALLED_APPS add 'test123'.
![img7](https://lh3.googleusercontent.com/MtaqhL6xrHDcCfwbkmKveie3CgqBtxY4hxGHFsgstpBktCnM84xXoJ-NKU3SRVj4tgJGunhvsTzIPghXSu2qbrm4scFuPY5B5iAOq9km2TPeUtbotPEGwumjnJikJS1b3QF3ZlvuaBzRurv-T9W64SWQynI5ZjmTOlTTugpQXpRRrrBNgozqx2Aj1s9N6imv9nipLmseQ1NNRq7i0s0xbDQTIGL9aaL2UcyN4KjyURbrG_EFIW72QLQwyq2g1vS34KIsTLGxMLt-mqhbth_2auC8C3oSJvIvAngVC0Gr8L9C5CS-OQF_eCR4tNBpSx_elJZyGqIif98XBNFgknJTOwJuulX-4SDbbMZ7DpuS7qiZ14V_HQot2WETgOuTCJ5H2Psjq2pd1Ce25QTqP8JpfINZJnxzyv7Lg8h6d-hRIX-PrgG-xXSeUZC92sGN6ot_9rbsOs8eZf36SOW84WkmAJM95eSFlK6Rh2sLeQG3ghAlpggQtcnAUEAeeXleeaXTi_qyQsOSB3Lyr1HtdUYP4r0DTXLTz2m76rLh-Gd41TdJHLUi76Bphp-7UF81tWV87zL8Dy7x6x-JQuKL9cnYWvwt911TRqZr8PhDeR7Vj_ZyG_91sgDoKhl3Jhm_ASxF48I9SGOCAQgb4m1e4GoHuDhxDBgaIWgGyjfUiJYytPZnzWwtb51rC3GhiluuH5Unz0ArvhNqcJDED6PufDo1HdmOKsW95yqWpz0FNx5cwgYCXPNkQfHAr402RvEyhwJf-CMPlfVxny85Y0w6LTpk4k_PnBOwUevo-9ynksZgOKrtkIwO7wP1B-fVO_6jaF5oW4ICwaG4jRPEWPuqNp1_8gyFzQ8uXdSdxY_bPNGsjFgnPu7vMpr2a1EUH_5zKzGoT2_A2ZYjMcJvDPriAcSYsk0hINGaBACXHGcsJQ=w1760-h990-no?authuser=0)


<br>



## 5. Creating templates

* Create a folder named ` "templates" `(exact name) in your app folder.  
* Create a subfolder in the "templates" named exactly as the app name, i.e. - `"test123"`.
* Create a file `"index.html"` in the folder and write some html code.

```html
<h1>You have succesfully rendered your first template</h1>
```
![img12](https://lh3.googleusercontent.com/Wq5Vaxiu-8Q27FKw9aWBEWrEldS5LrwfoZCSIbUjVA7dd9BgPKxWay_FqxwuVpflNMyPA9gFZ-4mR_QSwfyCT82Uf-rYNfdp8d6ybB4Md1ayYqAB2wW8gTPDo3QYJFx0yN4lJGMMO9H1_3NRdlawqmoc-N7DiOA50Wt_O4oB1XiRbMLYqeo2l4bR1csEpxsv8w0xvVuHJa9D202y0fv4RFaccCtd0m2dGfEayc1I6qVpH6EqtYykWwQwG6ImwPXMyDCyTfcpe0LeDXZ1crDzb5PJ_3ttuJQ7CYNcce-tN4tP2J-7YA_fVe5eXDbqdYZX6QicOWUTJyiJyCOr0uNoE3AhkRK0XbDrdity9WSKkhuVYqo1QduKrjdyxK8S0ohAGoiQpGWjUFxlRF7phZhZF4SgBrqgxCdBHksgl7Fun-1Det-NRZ-6-Nxiq0TjT1ZvZIt_pqKi7rEX7j03SnX33KWF7UFTf8308LiTOae_H_2LmEb1Uuzt9OaKhk5tRoSNCJwfFh776_hArYN84MjN9UZwM3hYKAX5Yr8fPsZGn6mlXPrxrpE-nXmCigymLzsLaBdPD4se028is3_-FibPMC0A-KUkPPV_Ukc-1VCfx3msgPs88Y5mZuCzRu9ZtrtctEdb3kZSJBefLERtTneel950Jkp6m5KjQONGigVCwbv0nGEUYytBO5LxiziJH500_dDXrLUk2-gVnzXJGh2qOiq2tIwXnRqGBgGGRGA1E5NlBssVwFLUcbYCyyqrl9io1tT25keiVzDp9T1kLZLnaY76tOQ7nWxn0ebWn7_JwbfjLXih905Xi_RXzyDtJYGytJhTe-eg4fu4AjDT-euFbp09EcC97mrG7ANwoffGdovaSaduDibIa9S831FqIJeUywCIEziLfTHk-NlQAE0EbnFOVS3jta0LBVGp_w=w1760-h990-no?authuser=0)

<br>

## 6. Linking template to our view

Go to views.py and then write:

```python
from django.shortcuts import render

# Create your views here.

def index(request):
    return render(request,"test123/index.html")
```
![img13](https://lh3.googleusercontent.com/PqZ-PQhINsN-67TF-V_LX30S5NtVdmhJzPFMWwBatq3vIOthS22kW1ecG_g2XIACngUThzbaluJYRcYiBJtgIrFh4XTuylKvCHumndPwLbJCr3f2M_m4-8vAXV00y_CFkFgNlD_bUTrkOQPPZ9I2fQeUQ_4X31QXE5gQDax2iu3iU04_dyQwmjehvZf7qeYu9vO3CfkOSPlWkjGbpfmPaXwFunZh_TcCADzH9DQ7mfC-BHmR6-r69KzuwRx5eFM9Gedfa-19ATeNeRdWcwibRRBkZRWIpz6isiofoyhsGcncgym6HgG9MI3w13z38eL5xN-hJQYk-SY_-JI_yra60RFkY8Wh4Y5prtAbXG6kRQ-7AuruPyDIDsYDyn9DrHNo94NORORSE3lW6pZNtNao-gY7CB3HR5AsEJZSAn2Lp77ZYZgUsKW7NCLP4_ZDLe2w9fH479IkVjLAK7mMs64rAmzOT89DLmzXzMwLNzDtGJZDfY_sFwNJpjoBnFCpJNGPuD9BXEd7rlT1vHfvUymRhAA7b52GWIcRceU-_OGLA9IsfPYoDKI54rXKing-4CXtQ6NoX0yWy6qkuhgj7zMmpLGeSu0nDIKJaVlIl34U6ohN9u3yc585Dg_Bp_Joq64MGidd3RBtiFxoGTLSXhtimFZR1WAT_uY3_5-7JMLA102C5e_5I2-s8C6NbSEbXZ73PwBLSjeXu5qiCaBBOLidfG39ivlM_zXkMlw66SZ6wMpvQYXtXgNNxZ8C6ZCGhRHNe3OOXli3oOlX3gyHwtKfS2HNCeiVf0FnUMQD1QgoiTSw1TfpLIiJOKlnYLsEwdpsNx38B4ZGxp23SgQdNlJwWloIKOYRgL2e7RBYYr1k6pduABrYM4aRZ1k9c2AszV3NjZOIoGM0DN-kOW0SA9KZqEPoRm_vNBeDYcjWxg=w1760-h990-no?authuser=0)

`request` :It is a HttpRequest object, which contains data about the request.

<br>


## 7. Mapping urls 
1. ### Mapping app urls
Create a file urls.py in your app folder and add the following code.

```python
from django.urls import path
from . import views

urlpatterns = [
    path('index',views.index,name ="index")
]

```

![img8](https://lh3.googleusercontent.com/1cC3HdYgztuPTDZ_m65irYT64YFtaYnO0L-5QpB70lKnmSLndK7chH7LSvr6b9MyUwb0TGUKtwGl9kS23FyANTf1mjLZwaobvEZm6745UzzNPHo1eBiNYl1wjxCIjT3mRNjo7Nuo5AZVCVxhGyuzrz2bVQxmMt9XRjFY6FrdoESXNldUmEvejNOHQRGc5sXdIg9thfa2LptOLaYPYy-Kjy3SVEroOD53IVPrlK9OFx9un-oG_x9HsmbJnYKJm_WkZAJJ44khLdKBV2oZR4aAMLnOv9zDxYbX599k5DCEvRmvgbWPdgTjb2f4g2EP7lgjRwsFRX60HsV0_1dmKe-BQEc5zP5TrbwSJ-4fIrC9Unz87E5row2dhQ4RZLnEDdzDXIdye2J5evHQg9EVMj9NsfDeTibBez1D0YVXDuHzEQ2JZi-osnN992ZvZR615i92psjisG3ai3dT0N-MdEhh0QU7jerPp-DZt1YkmYMevrYVtclVoudsdVL7namBQmAjV5L43ur8sOyk6kDDvUyoTCHKKpcmqK1B2ZNbxJasgpZm35V1pWyxDJFgrI-KYzrASssZxLRYoaWsF_XpoxWXSx5W_LmBD6SIMZKCyoX93kzQ4_yLYbEBREUv4Y0pCkgwsRy1MqaVkpx_6xNa0Kf50b-dSwspjacfxJfSLttAiVN7UebSu8kON5bQssW6gAjRANEkV8X9iLEoaqhk5YiQSSaqUPqljgExr74DSYs505UQrgUZHmVTc7yMa8xmBagzVDc_tHgAhEvV9Dttwu9hrE1rLn-LtG06CECWF5nfMU_Ot1TMw1lpX_cK8Rynzo3Pyb2N1qW2hto3cNxx8dAJ1wFs3NBvPW2YL61OfMiY2qLUS1zLjM3EnqOBjCNQzVL3GLkevu5PlctywjhjQBvuMol12_ClePs2MLkcug=w1760-h990-no?authuser=0)

**`path`** function takes the url name  i.e. by what name should the rendered template be visible in the urls, and the view as necessary parameters. The name of url is used when we have to reverse track any url during requests handling.

2. ### Mapping global urls
Go to you main folder `my_project` and go to urls.py .

```python
from django.contrib import admin
from django.urls import path,include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('',include('test123.urls'))
]
```

![img9](https://lh3.googleusercontent.com/wGqrrUi76LV3ecTI93SsI56R28ttizybthbgT-6sMYysbzMrksGsOcvOrpq5QKBJiMctX_ZbV75Aoj2v7qrtjpCxhG3reyrPz2NQ4uXx_MQb_WZhEPdFhK5C0IjMOv4B57ZYqe8PGsPhwzLG0lNcvvcZZ-Hf_Tsodfz2jKri7jkvtAUXt-rZ1_48NqurzguvDqIxdeR8tVgBuX00qDv40z0JHMdvrChG_HCmEEIwbfH13aEdYlYYT7IHOZxmiGUUO_STyEDXhWFq-pbB0D7hi7_vBpioZTvQ2vioknGABRMLbKScQsQ9wI1rcYrYboWjyPAt6OZeW-n0zmcKVJOceJJCM0XqF4STS5A4sZ6JCqQEULu3V2NuVX2v5-ONyCx65P2qFYLu9LZedzaooDZNCjR-cQJtj4AOOPplQMAPzjPhFT1GHDRxhz2BRYU-YoJku7FEtlWW62IaqY27sy3kAixK92_e77z-_rgbqvgvRcNVX2g6_LJTAVlLnH5w_9inE0EWUERKU4xVkLsVP-_vV8klZFLyZbqNFCih5o4bZMRa22_fyzykXQ1q_NSofKhNTslGFt0rcMZX687F3sODRtHfW2X7-zYmqlYt5d2WWVeshYlRvcMxG0pG9ErYrsdjpjxzC4G-Y23rOso6skgJCSnqUnfByMlFQoSdSNHvU72g8x0BzdhVSvTWV76Z-ewK7QyPaAUzLwfll6yPGs37gVLTZ6UtAryCSjEMhorwhQuFgkin5QygvRHdpJjC3QuobxgO02ihXasqHNDESh4jLHzP7dONCytIT4WMEhI5QxqDPD15snr2-LzJ6dPIsTX5TiOGnkZDK1Ec2x9EVDORZdCwH72X01QyA4ozqHo7_VNthB3No9n94sSdY_dt3AwQci1XzXfzgjo7W0E47SdESAnmy2Tunbs-i-M4aw=w1758-h990-no?authuser=0)

`include` : It is used to include the app urls into your global mapping urls.

Now see the path we have given to our app is `http://127.0.0.1:8000` and our index page will be visibile at `http://127.0.0.1:8000/index`

If have given path as :

```python 
  path('test',include('test123.urls'))
```
Then our index page will be visible at `http://127.0.0.1:8000/test/index`

<br>

## 8.Running our server again and checking our templates

Go to the [http://127.0.0.1:8000/](http://127.0.0.1:8000)

You will see:

![img10](https://lh3.googleusercontent.com/sqPvyTN2f_ScPBCw2ZsNXybVVzM1yisARdhcxfp8Pmk05lZXd4yc4U_VrARiiJZZG9DpZ2m2dok_KOTGKcsm2SZufxs_3QeaEGdsrH_lrXx7YPfi5x2uBkK02er5xbeen1YExQtEd3hzZqFKhq-AyQwGGyRZzn1YL1spbabJBughq1gngk_eIzfcY7Xn-jph8fI4fX_DyvN3-qgVTXzX9cEG1_96G7p0ktHycYoLuFRKNcg-Vje7DEg7vHKQMu8-gkoWOinWvERQRntUhfj_iIc1o_i15HirL2702dTQEZkpJKlIbpS9eFZ9LPdiH-hBv_GKZ2BNoedvT3QYWf_wLpoFT2lgClUyhN9I8mDnoSOufaeEtFjSIAR2yFS5SILaYNh8_G4JUfWV2AVOKl3nYVxU3QNI8QVqCZsYQoyObnG4JdQ1B2Z2GfSB8--vGk3mmLMLm71YHUyFXCiDU5l0f_S3p6Z0rd3az4KX1lOl-0Tk8w0Nxip_pUq55R-MVcY2l4txYuoGSGquV4l7h8ysLSw4XTn0NRU1a-gyKc3LEkdhDZGWVAUGxDqm4SBU_bKyRshcFLx5UGISXx-4Zv149n0hy2-OP-2MdUFY8bTw--s3xO6VpEFWQ8b-j6RO-f63qrpHotTYHQ85BRmFTHXJ3kuYiQ_42ucikWbQklKjghEqF5IQCvFfSptzzvd6VIth72O7dsswdoMDasnLjyNS4L4WrQkyQg931TWwJYnvVMmdoVog2rwqM0l1hZUTpIum4pUft3WrMzKvmbe16vtAUafmwqvekvQPv19IDWonMymnZgvsPLOi8qcrHBR0JNtEGa50Kay0MSXDeRYoHQOpkScveMQEK6l_ga-PYs8m7ZAsNgwo1LTqtDb56QV_oc4HaLP_zAJBymQdqv3CssiAfHn0yijzawcedu2Htg=w1920-h375-no?authuser=0)

It will show page not found as there is no view for the url for http://127.0.0.1:8000/

Go to http://127.0.0.1:8000/index

![img11](https://lh3.googleusercontent.com/Tji2u7FmhD1775ZOWlI1jE8VzoKdEBzK_ln7Ik_4tJa5buyUGqV_d0hvSpXRu2rWTFnzM2pnglMcvzaNegkn8m2cL6NbBPYlxP6DI-LHJ2zWTL-6L9lmpwUyDw91zxpXE-GEZdZDezO8iaHZdrzuSIx5uqi9u5umioZX_ZJdITm8bdOMBVBwIjQYc3Zw4qiFoqGnsetLXmWd_12uzOurMOfIsFGHM6sOOHoAKvzst7GLkiV3TVgAZEZgXXOBUDy3hVVOk_KP-IL-KFjmqjJhsJ8vQe9fDZ1L-b2_MQgKCT3RJ6gDsJQQbA2s-A6qZ9reyQRiKz_WkzVJs8iJRLPNVxLOwMLLL_dyu2Z07j0YLm45v-8_jJAlpP1PrhNdslPc1cZliO_j7LDnn-PKSLClkiSDsoLAG2wi93fLzWTfs59g7E4kMrwRNdrywb-x0x0FPV5-d0gud8UYPsLYWCt3fEG-rtK85in6bu-q-cfIKd-fy2Qj9La9qzu43-mAtXkpD2bZlnX3KpydCB_xYroZFIUdNc3Pi9OjzXo9wHrPxqF3hM7aIThzOJTgFAnh1OI58mWq7aLSIarNnONRnC1uSSOECHRfqvQysVkfDlUpDdux1fbOkmyL8q3o5-P4g_duNXJIaVun25ttlPZJJ_y9lz7ef1QdEyAtYLeOH4tGjWeRIGA03o2zPF98fyel1iEwrbT2bIc9Sn_CC66dCecrPpIyYbtdUwbu39hujUvTlEbP8CLqXPR_BYCLQFN4v7f8qC75Gp2ydrEae3fEkFb0tA6y-DOGT8tXylEgBwwn-y-rJaU8k22oR928EAwk0MGmtfW6lRFElM2QoD-iF-dbSh9pAuVZlUNp7BLHxufnJekCGZNdnefbofMCN_fhTlfGZWbBPPz8vc-K5rapBj7couaPTkB2_YNqVIEuCQ=w1920-h280-no?authuser=0)

Voila! You have created your first template,view and the url in django.

<br>

***

<br>

## **Resources:**
<br>

* [**W3Schools**](https://www.w3schools.com/django/)
* [**Django Documentation**](https://docs.djangoproject.com/en/4.1/)
