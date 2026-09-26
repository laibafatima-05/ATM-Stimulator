#include <iostream>
#include <string>
#include <chrono>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    string originalText = "C++ is easy to learn with practice.";
    string userText = "";

    cout << "========== TYPING SPEED TESTER ==========\n\n";

    cout << "Type the following sentence:\n\n";
    cout << originalText << "\n\n";

    cout << "Start typing:\n";

    // Wait for first key
    char ch = _getch();

    // Timer starts with first key
    auto startTime = chrono::steady_clock::now();

    if (ch != 13)
    {
        userText += ch;
        cout << ch;
    }

    while (true)
    {
        ch = _getch();

        // Enter
        if (ch == 13)
        {
            break;
        }

        // Backspace
        if (ch == 8)
        {
            if (!userText.empty())
            {
                userText.pop_back();
                cout << "\b \b";
            }
        }
        else
        {
            userText += ch;
            cout << ch;
        }
    }

    // Timer stops at Enter
    auto endTime = chrono::steady_clock::now();

    chrono::duration<double> elapsedTime = endTime - startTime;

    double timeTaken = elapsedTime.count();

    // ---------------- ACCURACY ----------------

    int correctCharacters = 0;

    int maxLength = max(originalText.length(), userText.length());

    for (int i = 0; i < maxLength; i++)
    {
        if (i < originalText.length() &&
            i < userText.length())
        {
            if (originalText[i] == userText[i])
            {
                correctCharacters++;
            }
        }
    }

    double accuracy = 0;

    if (maxLength > 0)
    {
        accuracy = (correctCharacters * 100.0) / maxLength;
    }

    // ---------------- WPM ----------------

    double minutes = timeTaken / 60.0;

    double wpm = 0;

    if (minutes > 0)
    {
        wpm = (userText.length() / 5.0) / minutes;
    }

    // ---------------- SCORE ----------------

    int score = (int)(wpm * accuracy / 100);

    // ---------------- RESULT ----------------

    cout << "\n\n========== RESULT ==========\n";

    cout << fixed << setprecision(2);

    cout << "Time Taken : " << timeTaken << " seconds\n";
    cout << "WPM        : " << wpm << "\n";
    cout << "Accuracy   : " << accuracy << "%\n";
    cout << "Score      : " << score << "\n";

    if (accuracy >= 90 && wpm >= 30)
    {
        cout << "Excellent!\n";
    }
    else if (accuracy >= 75)
    {
        cout << "Good Job!\n";
    }
    else
    {
        cout << "Keep Practicing!\n";
    }

    return 0;
}
// #include <iostream>
// #include <chrono>
// #include <conio.h>
// #include <iomanip>

// using namespace std;

// int main()
// {
//     cout << "Press any key to START...\n";

//     _getch();

//     auto startTime = chrono::steady_clock::now();

//     cout << "\nNow press ENTER as quickly as possible.\n";

//     _getch();

//     auto endTime = chrono::steady_clock::now();

//     chrono::duration<double> elapsedTime = endTime - startTime;

//     cout << fixed << setprecision(2);
//     cout << "\nTime Taken: " << elapsedTime.count() << " seconds\n";

//     return 0;
// }