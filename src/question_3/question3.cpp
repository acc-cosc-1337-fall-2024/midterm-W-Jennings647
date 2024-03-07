#include "question3.h"

bool test_config()
{
    return true;
}

bool verify(int num)
{
    if(num >= 0 && num <= 200) //hopefully this is what you meant by in range 1 to 200...
    {
        return true;
    }
    return false;
}

int find_gcd(int num1, int num2)
{
    int i = 0;
    int gcd = 0;
    if(num1 >= num2)
    {
        i = num1;
    }
    else
    {
        i = num2;
    }

    do
    {
       if(num1 % i == 0 && num2 % i == 0)
       {
            gcd = i;
       }
       i--;
    } while (gcd == 0);
    
    return gcd;
}