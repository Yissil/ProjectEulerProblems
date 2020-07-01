#include <iostream>

int FindPrimes();
bool check_Prime( int );

int main()
{
    int OptimusPrime = 0;

    OptimusPrime = FindPrimes();
    //std::cout << OptimusPrime;
}

int FindPrimes()
{
    bool Result;
    int primeCount = 0, thePrime = 0;

    for(int i = 2; i < 100000000; i++)
    {
        Result = check_Prime( i );
        if(Result == true)
        {
            primeCount += 1;
        }

        if( primeCount == 10001)
        {
            thePrime = i;
            std::cout << "The " << primeCount << "th prime is : " << i << std::endl;
            break;
        }
    }
    return thePrime;
}

bool check_Prime( int Number )
{
    bool isPrime = true;

    for(int i = 2; i < Number; i++)
    {
        if(Number % i == 0)
        {
            //std::cout << Number << " is not a prime number." << std::endl;
            isPrime = false;
            break;
        }
    }

    return isPrime;
}