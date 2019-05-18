// sum odd numbers between 1-100
#include <iostream>

int main()
{
    int sum = 0;
    for(int i = 1; i <=100; i++) {
        if(i%2==1) sum+=i; 
    }
    std::cout<<sum<<std::endl;
    
    return 0;
}
