#include <iostream>

void checkDivisibility(int);

int main()
{
    int Number = 0;

    for (int i = 1; i < 1000000000; i++)
    {
        checkDivisibility( i );
    }
}

void checkDivisibility( int Number )
{
    bool check = false;
    for(int i = 1; i < 21; i++)
    {
        if( Number % i != 0 )
        {
            //std::cout << "This number : " << Number << " is not divisible with the numbers from 1 to 20 evenly." << std::endl;
            check = false;
            break;
        } else {
            check = true;
        }
    }

    if(check == true)
    {
        std::cout << "This number : " << Number << " is in fact divisible evenly with the numbers from 1 to 20." << std::endl;
    }
}
