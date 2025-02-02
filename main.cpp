#include <iostream>

using namespace std;

int main() {
    int score = 0;
    char answer;

    // Question 1
    cout << "What is the capital of France?" << endl;
    cout << "A) Berlin" << endl;
    cout << "B) Paris" << endl;
    cout << "C) London" << endl;
    cout << "D) Rome" << endl;
    cin >> answer;
    if (answer == 'B' || answer == 'b') {
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is B) Paris." << endl;
    }

    // Question 2
    cout << "What is the largest planet in our solar system?" << endl;
    cout << "A) Earth" << endl;
    cout << "B) Saturn" << endl;
    cout << "C) Jupiter" << endl;
    cout << "D) Uranus" << endl;
    cin >> answer;
    if (answer == 'C' || answer == 'c') {
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is C) Jupiter." << endl;
    }

    // Question 3
    cout << "Who painted the famous painting 'The Starry Night'?" << endl;
    cout << "A) Leonardo da Vinci" << endl;
    cout << "B) Vincent van Gogh" << endl;
    cout << "C) Claude Monet" << endl;
    cout << "D) Pablo Picasso" << endl;
    cin >> answer;
    if (answer == 'B' || answer == 'b') {
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is B) Vincent van Gogh." << endl;
    }

    cout << "Your final score is " << score << " out of 3." << endl;

    return 0;
}