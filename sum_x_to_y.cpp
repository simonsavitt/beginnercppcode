// sum numbers from x to y, with y>x
#include <iostream>

int main()
{
    int x, y, sum = 0;
    std::cout<<"enter x: ";
    std::cin>>x;
    std::cout<<"enter y: ";
    std::cin>>y;
    while (y<=x) {
        std::cout<<"y<=x, please re-enter"<<std::endl;
        std::cout<<"enter y: ";
        std::cin>>y;
    }
    for(int i = x; i<=y; i++) {
        sum+=i;
    }
    std::cout<<sum;
    
    return 0;
}
