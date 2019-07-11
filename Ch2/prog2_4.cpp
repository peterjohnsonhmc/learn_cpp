#include <iostream>

int main()
{

    //What happens when we assign 100,000 to 16 bit unsignsed short
    //It will just wrap around or more accurately be assigned the remainder due to a modulo of the total number of values held
    //100000 % 65536 = 34464

    //When 100000 is assigned to plain 16 bit short
    //Compilers are not guranteed to perform a certain way with a plain signed type
    //May implement in the same way
    //Will wrap around to a negative value or use module of the max?
    //100000 % 65535 = 34465

    unsigned short us = 100000;
    short s = 100000;
    std::cout << us << std::endl;
    std::cout << s << std::endl;
    return 0;
}