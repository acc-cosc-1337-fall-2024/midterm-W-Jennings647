//
#include "question4.h"
bool test_config()
{
    return true;
}

bool verify(int num)
{
    if(num >= 1 && num <= 255)
    {
        return true;
    }
    return false;
}

string decimal_to_binary(int decimal)
{
    string binary = "";
    int i = 128;
    do
    {

        if(decimal >= i)
        {
            binary.push_back('1');
            decimal = decimal - i;
        }
        else
        {
            binary.push_back('0');
        }

        if(i == 1)
        {
            i--;
        }
        else
        {
            i = i / 2;
        }
    }while(i > 0);

    return binary;
}