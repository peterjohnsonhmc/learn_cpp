#include<iostream>
#include<string>

using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;

//Program to read the standard input a line at a time
int main()
{
    string line;
    while(getline(cin,line))
        cout << line << endl;
    return 0;
}