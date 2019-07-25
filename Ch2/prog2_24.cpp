#include <iostream>

int main()
{
    //invalid defintions
    int ival = 1.01; //is ok, will just convert it
    std::cout << ival << std::endl;

    //int &rval1 = 1.01; //Non constant reference cannot be to an rval or different type since we need to modify
    //std::cout << rval1 < std::endl;

    int &rval2 = ival;  //valid
    std::cout << rval2 << std::endl;

    const int &rval3 = 1; //const reference can be to an rvalue or a different type
    std::cout << rval3 << std::endl;

    //Invalid assignemnts
    rval2 = 3.14159; //valid since is just updating the original value

    rval2 = rval3; //valid, the reference is assigned the value of the const reference

    ival = rval3; //valid, ival is updated to get the value of rval3

    //rval3 = ival; //invalid since const ref cannot be assigned a new value

    int i, &ri = i;
    i=5, ri=10;
    std::cout << i << " " << ri << std::endl;

    return 0;

}