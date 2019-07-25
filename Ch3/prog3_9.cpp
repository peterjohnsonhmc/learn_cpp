#include<iostream>
#include<string>

//Program to test validity
//Since s is an empty string, this is not valid
//But c++ will not throw an error, because it lets you access out of bounds elements
int main()
{
    std::string s;
    std::cout << s[1] <<std::endl;
    return 0;
}