#include <iostream>

void resetArr(long long *ptrArr);
long check_Prime( long long A );
long calculated_NewNumber( long long A, long long B );
void checkinsideArray(long long *ptrArr);

int main()
{
    long long Primes[100];
    long long* ptr = &Primes[0];
    long long A = 600851475143, checkPrimeResult, newA = 0;

    //resetArr(ptr);

    checkPrimeResult = check_Prime( A );
    check_Prime( checkPrimeResult );
    newA = calculated_NewNumber( A, checkPrimeResult );

    checkPrimeResult = check_Prime( newA );
    newA = calculated_NewNumber( newA, checkPrimeResult );

    checkPrimeResult = check_Prime( newA );
    newA = calculated_NewNumber( newA, checkPrimeResult );

    std::cout << std::endl;
}

long calculated_NewNumber( long long A, long long B )
{   
    long long Result;
    Result = A / B;
    std::cout << " " << Result << " ";

    return Result;
}

long check_Prime( long long A )
{
    long long Result;

    for(int i = 2; i < A; i++)
    {
        if( A % i == 0 )
        {   
            std::cout << " " << i << " ";
            Result = i;
            break;            
        }
    }

    return Result;
}

void resetArr(long long *ptrArr)
{
    for(int i = 0; i < 100; i++)
    {
        *ptrArr = 0;
        ++ptrArr;
    }
}

void checkinsideArray(long long *ptrArr)
{
    for(int i = 0; i < 100; i++)
    {
        std::cout << *ptrArr;
        ++ptrArr;
    }
}