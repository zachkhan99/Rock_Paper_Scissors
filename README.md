Rock_Paper_Scissors
# Rock, Paper, Scissors Game
This C++ program implements a simple console-based Rock, Paper, Scissors game where the user plays against the computer. 
The game continues until the user decides to quit by entering "q". The user's and computer's choices are compared in each round to determine the winner.

## How to Play
1. Compile the C++ code using a C++ compiler.
2. Run the compiled executable to start the game.

## Rules
* The user is prompted to enter their choice (rock, paper, or scissors) in each round.
* To quit the game, enter "q" when prompted for a choice.
* The computer's choice is randomly generated.
* The winner of each round is determined based on the classic Rock, Paper, Scissors rules:
  - Rock crushes Scissors
  - Scissors cuts Paper
  - Paper covers Rock

## Example Usage

```
Round 1 - Please enter your choice (rock, paper, scissors, or q to quit):
rock
Your choice: rock
The computer's choice: scissors
Result: You win!
Score: 1/0

Round 2 - Please enter your choice (rock, paper, scissors, or q to quit):
paper
Your choice: paper
The computer's choice: rock
Result: You win!
Score: 2/0

...

Thanks for playing! Final score: 3/1
```

## Notes
* The random number generator is seeded with the current time to ensure different outcomes in each run.
* Invalid responses prompt the user to try again.
* The final score is displayed when the user decides to quit the game.
