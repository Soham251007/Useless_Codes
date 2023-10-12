#include <iostream>
using namespace std;

// made by Soham Singh Copy kiya to TMKC

int main()
{
    int a, b, c;
    // cout<<"Hello BOIs"<<endl;
    // cout<<"This is the line after the first line";

    // cout<<"Enter the first no. you wanna operate"<<endl;
    // cin>>a;

    // cout<<"Enter the second no. you wanna operate"<<endl;
    // cin>>b;

    // cout<<"The addition of these no. is "<<a + b<<endl;
    // cout<<"The subtraction of these no. is "<<a - b<<endl;
    // cout<<"The multiplication of these no. is "<<a * b<<endl;
    // cout<<"The division of these no. is "<<(float) a / b<<endl;

    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    int answer;

    float percentage;

    if (age >= 18)
    {
        cout << "Bhai tera 12th hua kya?? yes ke liye 1 no ke liye 2" << endl;
        cin >> answer;

        if (answer <= 1)
        {
            cout << "marks bata XD" << endl;
            cin >> percentage;

            if (percentage >= 85)
            {
                cout << "Mast bhai";
            }

            else
            {
                cout << "Accha kar sakta tha";
            }
        }

        else if (answer > 1)
        {
            cout << "thik hai bhai";
        }
    }

    else
    {
        cout << "Padhai kar BKL";
    }

    return 0;
}
