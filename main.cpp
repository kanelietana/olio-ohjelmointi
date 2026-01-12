#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxNum);

int main()
{
    // arvotaan maksimi luku peli funktiolle (1-100)
    srand(time(0));
    int maxNum = rand() % (100 - 1 + 1) + 1;

    cout << game(maxNum); cout << " times guessed" << endl;

    return 0;
}

int game(int maxNum) {
    // arvotaan arvattava luku
    srand(time(0));
    int randomNum = rand() % (maxNum - 1 + 1) + 1;

    int userGuess = 0;
    int guessesUsed = 0;

    // pyydetään käyttäjää arvaamaan  luku
    cout << "Guess a number between 1 and X" << endl;
    cin >> userGuess;

    // jos käyttäjä vastaa väärin
    while (userGuess != randomNum)
    {
        if (userGuess < randomNum) {
            cout << "Your number was too small" << endl;
        }

        else if (userGuess > randomNum) {
            cout << "Your number was too large" << endl;
        }
        cin >> userGuess;
        guessesUsed++;
    }

    // jos käyttäjä vastaa oikein
    cout << "You guessed right!" << endl;
    guessesUsed++;

    return guessesUsed;
}
