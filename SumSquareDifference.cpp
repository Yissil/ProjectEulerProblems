#include <iostream>

int sumSqre( int );
int sqrSum( int );

int main()
{
    int Quant = 10, sumSqr = 0, SqrSum = 0;

    sumSqr = sumSqre( Quant );
    
    //SqrSum = sqrSum( Quant );

    //std::cout << "The difference between the sum of the squares of the first " << Quantity << " natural numbers and the square of the sum is : " << SqrSum - sumSqr << "." << std::endl;
}

int sumSqre( int Quantity )
{
    int Result = 0;

    for(int i = 1; i = Quantity; i++)
    {
        Result = Result + (i*i);
    }
    std::cout << "The sum of the squares of the first "<< Quantity << " natural numbers is : " << Result << std::endl;
    
    return Result;
}

int sqrSum( int Quantity )
{
    int Result = 0;

    for(int i = 1; i = Quantity; i++)
    {
        Result += i;
    }
    Result = Result * Result;
    std::cout << "The square of the sum of the first "<< Quantity << " natural numbers is : " << Result << std::endl;

    return Result;
}