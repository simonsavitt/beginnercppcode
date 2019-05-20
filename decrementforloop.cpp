// count down from 700 to 200 in decrements of 13
#include <iostream>

int main()
{
    for(int i = 700; i >= 200; i-=13) {
        std::cout<<i<<std::endl;
    }
        
    return 0;
}