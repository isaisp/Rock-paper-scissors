#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNumber;
string robotChoice;

void scissors() {
    if (robotChoice == "Rock") {
        cout << " You lose LOL";
    }
    else if (robotChoice == "Paper") {
        cout << " You win!";
    }
    else {
        cout << " Tie";
    }
}

void paper() {
    if (robotChoice == "Rock") {
        cout << " You win!";
    }
    else if (robotChoice == "Paper") {
        cout << " Tie";
    }
    else {
        cout << " You lose LOL";
    }
}

void rock() {;
    if (robotChoice == "Rock") {
        cout << " Tie";
    }
    else if (robotChoice == "Paper") {
        cout << " You win!";
    }
    else {
        cout << " Your lose LOL";
    }
}

int main() {
    srand(time(0));
    randomNumber = (rand() % 3) + 1;
    string choice;
    cout << "Rock, Paper, Scissors, Shoot!" << endl;
    cin >> choice;
    if (randomNumber == 1) {
        robotChoice = "Rock";
    }
    else if (randomNumber == 2) {
        robotChoice = "Paper";
    }
    else if (randomNumber == 3) {
        robotChoice = "Scissors";
    }
    else {
        cout << "Error getting robot choice";
    }
    cout << robotChoice;
    if (choice == "Rock" xor choice == "rock") {
        rock();
    }
    else if (choice == "Paper" xor choice == "paper") {
        paper();
    }
    else if (choice == "Scissors" xor choice == "scissors") {
        scissors();
    }
    else {
        cout << "please enter a correct choice";
    }

    return 0;
}
