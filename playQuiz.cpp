#include <bits/stdc++.h>

using namespace std;

int main()
{
    int finalResult = 0;
    char playagain;

    int playQuiz(void);

    finalResult = playQuiz();
    cout << "Your Total Score is: " << finalResult << endl;
    if (finalResult >= 6)
    {
        cout << " You are Pass" << endl;
        cout << "Do you want to play Quiz again y or n ?" << endl;
        cin >> playagain;
        if (playagain == 'y' || playagain == 'Y')
        {
            playQuiz();
        }
        else
        {
            cout << "Thankyou to play Quiz" << endl;
        }
    }
    else
    {
        cout << "You are Fail" << endl;
        cout << "Do you want to play Quiz again y or n ?" << endl;
        cin >> playagain;
        if (playagain == 'y' || playagain == 'Y')
        {
            playQuiz();
        }

        else
        {
            cout << "Thankyou to play Quiz" << endl;
        }
    }
    return 0;
}
int playQuiz()
{
    char c;
    char option;
    int score = 0;
    cout << "---------Welcome to Quiz Game" << endl;
    cout << "Please follow the instruction " << endl;
    cout << "step 1  : Quiz  contains total 10 question " << endl;
    cout << "Step 2 : You wil given 1 marks for each right ans" << endl;
    cout << "Step 3 : There will be no negative marking " << endl;
    cout << "step 4 : please Press s to start the Quiz" << endl;
    cout << "Step 5 : Please Select option a, b, c, d" << endl;
    cout << "Step 6 : If you score >=6 , you will pass the Quiz" << endl;

    cin >> c;
    if (c == 's' || c == 'S')
    {
        cout << "Q1. What is the capitil of India " << endl;
        cout << "(a) Delhi (b) Mumbai (c)Kolkata (d)channai" << endl;

        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q2. Who is the Prime Minister of India " << endl;
        cout << "(a) Amit Saha (b) Narendra Modi (c)Kejriwal  (d)Nitin" << endl;

        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q3. Who is the First President of India " << endl;
        cout << "(a)Fakhruddin Ali Ahmed(b) Droupadi Murmu (c) Rajendra Prasad  (d)Zakir Husain" << endl;

        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q4. What is the National Animal of India  " << endl;
        cout << "(a)Elephent(b) Cat (c) Dog  (d)Tiger" << endl;

        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q5. Who is First Prime Minister Of India " << endl;
        cout << "(a)Fakhruddin Ali Ahmed(b)Jawaharlal Nehru (c) Rajendra Prasad  (d)Zakir Husain" << endl;

        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q6. Who is  Chif Minister Of West Bengal " << endl;
        cout << "(a)mamata banerjee(b)Jawaharlal Nehru (c) Rajendra Prasad  (d)yogi adityanath" << endl;

        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q7. What is the Population Of India " << endl;
        cout << "(a)123.CR(b)190.CR (c) 160.CR (d)140.CR" << endl;

        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q8. What is the Population Of India " << endl;
        cout << "(a)123.CR(b)190.CR (c) 160.CR (d)140.CR" << endl;

        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q9. What is the Population Of India " << endl;
        cout << "(a)123.CR(b)190.CR (c) 160.CR (d)140.CR" << endl;

        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q10. What is the Population Of India " << endl;
        cout << "(a)123.CR(b)190.CR (c) 160.CR (d)140.CR" << endl;

        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
    }
    else
    {
        cout << "You have enterd Wrong value, Please enter -->s" << endl;
        playQuiz();
    }
    return score;
}