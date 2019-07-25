#include<iostream>
#include<string>

//Read in an unkown number of strings, concatenate them with a space in between 
//and then print them all out
//Push ctrl-D to send an end of file character and end the cin while loop
int main()
{
    std::string s, output;
    std::cout << "Enter any number of words" << std::endl;
    while (std::cin >> s){
        output += s;
        output += " ";
    }
    std::cout << output <<std::endl;
    return 0;
}
