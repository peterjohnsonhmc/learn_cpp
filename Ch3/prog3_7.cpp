#include<iostream>
#include<string>

//Program to read two strings and report whether they are equal
//REturn equal or string that is longer

int main()
{
    std::string s1,s2;

    std::cout << "Enter two strings to be compared" << std::endl;
    std::cin >> s1 >> s2;
    if ( s1 == s2){
        std::cout << "They are equal";
    }else if (s1 > s2){
        std::cout << s1 << "is greater";
    }else{
        std::cout << s2 << "is greater";
    }
    return 0;
}