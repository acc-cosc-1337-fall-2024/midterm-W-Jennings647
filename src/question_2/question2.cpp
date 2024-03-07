#include "question2.h"
#include <iostream>
using std::cout;

bool test_config()
{
    return true;
}

bool verify(int num)
{
    if(num >= 1 && num <= 512)
    {
        return true;
    }
    return false;
}

string decimal_to_hex(int num)
{
    string result = "";
    do
    {
        int remainder = 0;
        
        remainder = num % 16;
        num = num / 16;
        switch(remainder)
        {
            case 0:
                result.push_back('0'); //cant do 'result.push_back(remainder)', doing this converts the remainder into a char
                break;
            case 1:
                result.push_back('1');
                break;
            case 2:
                result.push_back('2');
                break;
            case 3:
                result.push_back('3');
                break;
            case 4:
                result.push_back('4');
                break;
            case 5:
                result.push_back('5');
                break;
            case 6:
                result.push_back('6');
                break;
            case 7:
                result.push_back('7');
                break;
            case 8:
                result.push_back('8');
                break;
            case 10:
                result.push_back('A');
                break;
            case 11:
                result.push_back('B');
                break;
            case 12:
                result.push_back('C');
                break;
            case 13:
                result.push_back('D');
                break;
            case 14:
                result.push_back('E');
                break;
            case 15:
                result.push_back('F');
                break;
        }

    } while (!(num == 0));

    string reverse = "";
    if(result.length() > 1) //manually reverses the hex string
    {
        int i = result.length() - 1;

        while(i >= 0)
        {
            reverse.push_back(result[i]);

            i--;
        }
        return reverse;
    }
    return result;
    
}