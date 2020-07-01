#include <iostream>
#include <conio.h>
#include <string>
#include <bits/stdc++.h>

#define FactorOne 999
#define FactorTwo 999

void FindPalindrome();
int verify(int);

int main()
{   
    FindPalindrome();
}

void FindPalindrome()
{
    int V, Largest = 0;

    for(int x = FactorOne; x > 99; x--)
    {
        for(int y = FactorTwo; y > 99; y--)
        {
            V = x * y;
            if( V == verify(V) ) 
            {
                if(V > Largest) Largest = V;
            }
        }
    }

    std::cout << std::endl << "This is the largest Palindromic number : " << Largest << " !" << std::endl;
}

int verify( int V )
{
    int reverse = 0, rem;

    while(V != 0)    
    {    
        rem = V % 10;     
        reverse = ( reverse * 10 ) + rem;    
        
        V /= 10;    
    }
    return reverse;
}