#include <iostream>

/* Exploring different for statements */
int main()
{
    //Sum for 50 to 100
    int sum = 0;
    for (int i=50; i <=100; ++i)
        sum += i;
    std::cout << sum << std::endl;

    //Rewrite using for loop

    int sum2=0;
    int i = 50;
    while(i <=100){
        sum2 += i;
        i++;
    }
    std::cout << sum2 << std::endl;

    return 0;
}

