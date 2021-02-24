#include <iostream>
using namespace std;
int main()
{
    int usersPin = 1234, pin, errorCounter = 0;

    do
    {
        if (errorCounter)//when errorCounter is not equal to zero. 0 stands for false in computing.
            cout << "Incorrect. Try again." << endl << (3 - errorCounter) << " attempts left" << endl;
        cout << "PIN: ";
        cin >> pin;
        if (pin != usersPin)//counts number of times the user entered rubbish
            errorCounter++;
        system("cls");


    } while (errorCounter<3 && pin != usersPin);

    (errorCounter < 3) ?//entered correct password
        cout << "Application Loading...." << endl :
        cout << "Access Denied!" << endl;




    system("pause>0");
}

