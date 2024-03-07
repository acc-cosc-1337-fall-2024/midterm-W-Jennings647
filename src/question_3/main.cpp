#include <iostream>
#include "question3.h"

using std::cout;
using std::cin;

int main()
{
    char confirm = ' ';
    do
    {
        int choice = 0;
        int input1 = 0;
        int input2 = 0;
        cout<<"   MAIN MENU\n";
        cout<<"1 - Find Greatest Common Denominator\n";
        cout<<"2 - Exit\n";
        cin>>choice;
        if(choice == 1)
        {
            cout<<"Please enter the first number (Must be under 200): \n";
            cin>>input1;
            cout<<"Please enter the second number (Must be under 200): \n";
            cin>>input2;
        }
        if(verify(input1) == false || verify(input2) == false)
        {
            choice = 0;
        }
        switch(choice)
        {
            case 1:
                cout<<"The GCD of "<<input1<<" and "<<input2<<" is "<<find_gcd(input1, input2)<<". \n";
                break;
            case 2:
                cout<<"If you would like to quit, enter Y\n";
                cin>>confirm;
                break;
            default:
                cout<<"Invalid input! \n";
                break;
        }

    } while (!(confirm == 'Y' || confirm == 'y'));
    
    return 0;
}