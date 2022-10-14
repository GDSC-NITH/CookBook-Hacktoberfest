# Rock-Paper-Scissor

Below written is a code of a rock-paper-scissor game using functions in javascript.
```javascript
const initGame = () => {
    const startGame = confirm("Shall we play rock, paper, or scissors?");
    // Conditional Operator
    startGame ? playGame() : alert("Ok, maybe next time.");
  };
  // Use of arrow functions
  // Game flow function
  const playGame = () => {
    while (true) {
      let playerChoice = getPlayerChoice();
      playerChoice = updatePlayerChoice(playerChoice);
      if (playerChoice === "") {
        invalidChoice();
        continue;
      }
      if (!playerChoice) {
        decidedNotToPlay();
        break;
      }
      playerChoice = evaluatePlayerChoice(playerChoice);
      if (!playerChoice) {
        invalidChoice();
        continue;
      }
      const computerChoice = getComputerChoice();
      const result = determineWinner(playerChoice, computerChoice);
      displayResult(result);
      if (askToPlayAgain()) {
        continue;
      } else {
        thanksForPlaying();
        break;
      }
    }
  };
  
  const getPlayerChoice = () => {
    return prompt("Please enter rock, paper, or scissors.");
  };
  
  const updatePlayerChoice = (playerChoice) => {
    if (playerChoice || playerChoice === "") {
      // Use of predefined functions
      return playerChoice.trim().toLowerCase();
    } else {
      return false;
    }
  };
  // trim() removes all the extra spaces in a string.
  // toLowerCase converts the string into lowercase string.
  
  const decidedNotToPlay = () => {
    alert("I guess you changed your mind. Maybe next time.");
  };
  
  const evaluatePlayerChoice = (playerChoice) => {
    if (
      playerChoice === "rock" ||
      playerChoice === "paper" ||
      playerChoice === "scissors"
    ) {
      return playerChoice;
    } else {
      return false;
    }
  };
  
  const invalidChoice = () => {
    alert("You didn't enter rock, paper, or scissors.");
  };
  
  const getComputerChoice = () => { 
    const randomNumber = Math.floor(Math.random() * 3);
    const rpsArray = ["rock", "paper", "scissors"];
    return rpsArray[randomNumber];
  };
   
    // The Math.floor() function always rounds down and returns the largest integer less than or equal to a given number.

    // The Math.random() function returns a number that's greater than or equal to 0 and less than 1.
  
  const determineWinner = (player, computer) => {
    const winner =
      player === computer
        ? "Tie game!"
        : player === "rock" && computer === "paper"
        ? `playerOne: ${player}\nComputer: ${computer}\nComputer wins!`
        : player === "paper" && computer === "scissors"
        ? `playerOne: ${player}\nComputer: ${computer}\nComputer wins!`
        : player === "scissors" && computer === "rock"
        ? `playerOne: ${player}\nComputer: ${computer}\nComputer wins!`
        : `playerOne: ${player}\nComputer: ${computer}\nplayerOne wins!`;
  
    return winner;
  };
  
  const displayResult = (result) => {
    alert(result);
  };
  
  const askToPlayAgain = () => {
    return confirm("Play Again?");
  };
  
  const thanksForPlaying = () => {
    alert("Ok, thanks for playing.");
  };
  
  initGame();
  ```
  This is how we use functions in javascript to make our code simple and easy to understand.


