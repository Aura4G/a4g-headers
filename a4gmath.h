//A collection (to be grown) of subroutines and classes to take certain mathematical conundrums.

//Finding the factorial of a number.
int factorial(int x)
{
    int factX = x;
    //if the number is positive
    if (factX > 0)
    {
        for (int i = x; i >= 2; i--)
        {
            factX = factX * (i - 1);
        }
    }
    //if the number is negative
    else
    {
        for (int i = x; i <= -2; i++)
        {
            factX = factX * (i + 1);
        }
    }
    return factX;
}