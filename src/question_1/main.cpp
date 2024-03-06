#include <iostream>
#include "question1.h"

using std::cout;
using std::cin;
int main()
{
    char confirm = ' ';
    do
    {
        int choice = 0;
        double input = 0.0;
        cout<<"   MAIN MENU\n";
        cout<<"1 - Find GPA letter grade\n";
        cout<<"2 - Exit\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Please enter the GPA you would like to find the letter grade of: ";
            cin>>input; //note - inputting a letter breaks this, and causes infinite recursion
            if(verify(input) == true)
            {
                cout<<"A GPA of "<<input<<" is a letter grade of "<<letter_grade(input)<<".\n";
            }
            else
            {
                cout<<"Invalid input\n";
            }

            break;
        case 2:
            cout<<"If you would like to exit, enter Y\n";
            cin>>confirm;
            break;
        default:
            cout<<"Invalid input.";
            break;
        }
    } while (!(confirm == 'Y' || confirm == 'y'));
    
    return 0;
}