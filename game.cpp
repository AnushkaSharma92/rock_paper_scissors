#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(0));
    int mode;
    int player1;
    int player2;
    int computer;
    int opponent;
    cout << "Welcome to Rock Paper Scissors Game\n";
    cout << "-------------------------------\n";

    // choose mode
    cout << "1. Play with Computer\n";
    cout << "2. Play with Friend\n";
    cout << "Enter your choice: ";
    cin >> mode;
    cout<<"\n";

    // player 1 moves
    cout << "Choose your move:\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice: ";
    cin >> player1;

    if (mode == 1)
    {                                // Computer mode
        computer = (rand() % 3) + 1; 
        opponent = computer;
    }
    else if (mode == 2)
    {                  // Friend mode
        system("cls"); 
        cout << "Player 2, choose your move:\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Enter your choice: ";
        cin >> player2;
        opponent = player2;
    }
    else
    {
        cout << "Invalid mode selected!\n";
        return 0;
    }
    cout<<"\n";


    // Display Player 1 choice
    cout << "Player 1 chose: ";
    if (player1 == 1) cout << "Rock\n";
    else if (player1 == 2) cout << "Paper\n";
    else if (player1 == 3) cout << "Scissors\n";
    else { cout << "Invalid choice\n"; return 0; }

    // Display opponent choice
    if (mode == 1) cout << "Computer chose: ";
    else cout << "Player 2 chose: ";

    if (opponent == 1) cout << "Rock\n";
    else if (opponent == 2) cout << "Paper\n";
    else if (opponent == 3) cout << "Scissors\n";

    if (player1 == opponent) {
        cout << "\nResult: It's a Draw!\n";
    }
    else if (
        (player1 == 1 && opponent == 3) ||
        (player1 == 2 && opponent == 1) ||
        (player1 == 3 && opponent == 2)
    ) {
        cout << "\nResult: Player 1 Wins! \n";
    }
    else {
        if (mode == 1)
            cout << "\nResult: Computer Wins! \n";
        else
            cout << "\nResult: Player 2 Wins! \n";
    }

    return 0;
}
