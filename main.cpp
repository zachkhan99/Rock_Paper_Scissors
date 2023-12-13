#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    int userScore = 0;                                                                                                  // Intialize variables
    int computerScore = 0;
    int round = 0;

    string options[] = {"rock", "paper", "scissors"};                                                                   // Array of options for the game

    
    srand(time(NULL));                                                                                                  // seed random number generator based on time

    
    while (true) {                                                                                                      // Set up game loop
        round++;                                                                                                        // Increase round by 1 after every turn
        cout << "Round " << round << " - Please enter your choice (rock, paper, scissor, or q to quit): " << endl;      // Display game and user input options

        string userChoice;                                                                                              // User inputs their decision
        cin >> userChoice;

        if (userChoice == "q") {                                                                                        // Breaks the loop, ending the game if user inputs "q"
            cout << "Thanks for playing! Final score: " << userScore << "/" << computerScore << endl;                   // Display final message
            break;
        }

        int computerChoicePossibility = rand() % 3;                                                                     // Generate random choice for the computer between 0 and 2
        string computerChoice = options[computerChoicePossibility];                                                     // Selects choice from the options array

        cout << "Your choice: " << userChoice << endl;                                                                  // Display the user's and computer's choice
        cout << "The computer's Choice: " << computerChoice << endl;

        if (userChoice == computerChoice) {                                                                             // Determine the winner of the round
            cout << "Result: It's a draw" << endl;

        } else if ((userChoice == "rock" && computerChoice == "scissors") ||                                            // Determines if user won the round
                   (userChoice == "paper" && computerChoice == "rock") ||
                   (userChoice == "scissors" && computerChoice == "paper")) {
            cout << "Result: You win!" << endl;
            userScore++;                                                                                                // Adds 1 point to the user 
                                                                                          
        } else if ((userChoice == "rock" && computerChoice == "paper") ||                                               // Determines if computer won the round
                   (userChoice == "paper" && computerChoice == "scissors") ||
                   (userChoice == "scissors" && computerChoice == "rock")) {
            cout << "Result: You lose!" << endl;
            computerScore++;                                                                                            // adds one point to the copmuter
        
        } else
            cout << "Invalid response, try again." << endl;                                                             // Tells the user to try again if anything else is inputted
                

    cout << "Score: " << userScore << "/" << computerScore << endl << endl;                                             // Display current scores
    }

    return 0;
}