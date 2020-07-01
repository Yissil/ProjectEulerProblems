#include <iostream>

int main()
{
    int Total = 0;
    
    for(int i = 1; i < 1000; i++)
    {
        if( i % 3 == 0 ){
            Total = Total + i;

            std::cout << i << ", ";

        } else if( i % 5 == 0 ){
            Total = Total + i;

            if(i == 1000) {
                std::cout << i;
                break;
            } else {
                std::cout << i << ", ";
            }
        }
    }

    std::cout << "\n";

    std::cout << Total;
}