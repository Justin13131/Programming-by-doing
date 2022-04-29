#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int player_card1, player_card2;
    int dealer_card1, dealer_card2;
    int new_card;
    int player_total, dealer_total;
    int wallet = 500, wager;
    string replay;
    string choice;

    cout << "Welcome to Nick's blackjack program!" << endl;

    do
    {
        // betting loop. player can bet a maximum of 100
        cout << "\n***********************************************" << endl;
        cout << "Now taking bets for the next hand of blackjack." << endl;
        cout << "You currently have $" << wallet << "." << endl;
        cout << "****************************6--6*******************" << endl;
        do
        {
            cout << "How much do you put down (Min: $5 Max: $100, increments of 5)? " << endl;
            cout << "> $" << endl;
            cin >> wager;
            if (wager < 1 || wager > 100 || wager > wallet || wager % 5 != 0){
                cout << "You cannot bet $" << wager << ". Please try again."<< endl;
            }
        } while (wager < 1 || wager > 100 || wager > wallet || wager % 5 != 0);

        player_card1 = 2 + rand() % 10;  
        player_card2 = 2 + rand() % 10;
        player_total = player_card1 + player_card2;
        dealer_card1 = 2 + rand() % 10;
        dealer_card2 = 2 + rand() % 10;
        dealer_total = dealer_card1 + dealer_card2;

        // Display initial dealing
        cout << "\nYou get a " <<  player_card1 <<  " and a " <<  player_card2 <<  "." << endl;
        cout << "Your total is "  << player_total <<  ".\n" << endl;
        cout << "The dealer has a " << dealer_card1 << " showing, and a hidden card." << endl;
        cout << "His total is hidden, too.\n" << endl;

        // Player's turn
        do
        {
            cout << "Would you like to \"hit\" or \"stay\"? " << endl;
            cin >> choice;

            if (choice == "hit")
            {
                new_card = 2 + rand() % 10;
                cout << "You drew a " << new_card << "." << endl;
                player_total += new_card;
                cout << "Your total is " << player_total << ".\n" << endl;
            }
        } while (player_total <= 21 && (choice != "stay"));

        // Dealer's turn does not play if Player busts
        if (player_total <= 21)
        {
            cout << "\n******************" << endl;
            cout << "Okay, dealer's turn." << endl;
            cout << "His hidden card was a " << dealer_card2 << "." << endl;
            cout << "His total was " << dealer_total << ".\n" << endl;

            do
            {
                // Dealer will hit until it has 17 or greater
                if (dealer_total < 17)
                {
                    choice = "hit";
                    cout << "Dealer chooses to hit." << endl;
                    new_card = 2 + rand() % 10;
                    cout << "He draws a " << new_card <<"." << endl;
                    dealer_total += new_card;
                    cout << "His total is " << dealer_total <<  ".\n" << endl;
                }
                else
                {
                    choice = "stay";
                    cout << "Dealer stays.\n" << endl;
                }
            } while (dealer_total <= 21 && (choice != "stay"));
        }
        cout << "Dealer's total is " << dealer_total << "." << endl;
        cout << "Your total is " << player_total << ".\n" << endl;;

        // Determines who wins

        if (player_total <= 21)
        {
            if (dealer_total <= 21)
            {
                if (player_total > dealer_total)
                {
                    cout << "YOU WIN!" << endl;
                    wallet += wager;
                }
                else if (player_total == dealer_total)
                {
                    cout << "You Drew." << endl;
                }
                else
                {
                    cout << "you lose" << endl;
                    wallet -= wager;
                }
            }
            else
            {
                cout << "YOU WIN!" << endl;
                wallet += wager;
            }
        }
        else
        {
            cout << "you lose" << endl;
            wallet -= wager;
        }

        // checks if user can play then if they want to continue
        if (wallet <= 0)
        {
            cout << "\nYou've run out of money. Better luck next time!" << endl;
            break;
        }

        cout << "\nYou now have $" << wallet << endl;
        cout << "Care to play again (y/n)? " << endl;
        cin >> replay;

    } while (replay != "n");
}