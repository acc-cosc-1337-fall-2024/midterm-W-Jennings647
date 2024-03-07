#include "question4.h"

int main()
{
    char confirm = ' ';
    do
    {
        int choice = 0;
        int input = 1;
        cout<<"   MAIN MENU\n";
        cout<<"1 - Convert decimal to hex string\n";
        cout<<"2 - Exit\n";
        cin>>choice;
        if(choice == 1)
        {
            cout<<"Please enter the decimal (Must be between 1 and 255): \n";
            cin>>input;
        }
        if(verify(input) == false)
        {
            choice = 0;
        }
        switch(choice)
        {
            case 1:
                cout<<"The binary version of "<<input<<" is "<<decimal_to_binary(input)<<". \n";
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