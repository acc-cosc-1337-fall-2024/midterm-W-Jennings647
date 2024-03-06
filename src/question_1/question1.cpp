#include "question1.h"

bool test_config()
{
    return true;
}

bool verify(double input)
{
    if(input >= 0.0 && input <= 4.0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

char letter_grade(double gpa)
{
    if(gpa < 1.0)
    {
        return 'F';
    }
    else if(gpa < 2.0)
    {
        return 'D';
    }
    else if(gpa < 3.0)
    {
        return 'C';
    }
    else if(gpa < 3.5)
    {
        return 'B';
    }
    else if(gpa <= 4.0)
    {
        return 'A';
    }

    return 'Z'; //error, should never happen
}