#include <iostream>

int main()
{
    int a = 1, b = 2, R = 0, Total = 2;
    
    std::cout << a << ", " << b << ", ";

    while( (a + b) < 4000000 )
    {
        R = a + b;
        a = b;
        b = R;

        //std::cout << R << ", ";

        if(R % 2 == 0)
        {
            std::cout << R << ", ";
            Total = Total + R;
        } 
    }
    std::cout << "\n" << Total;
}