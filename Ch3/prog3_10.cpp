#include<iostream>
#include<string>

using std::string;

//A program to strip punctuation from a string
//Take in a string and then return the string without punctuation

int main()
{
    string s,output;

    std::cout<<"enter a single string with punctuation" <<std::endl;
    std::cin >> s;
    //Sort of not relevenat, but remember the size of a string is of type string::size_type

    //Noted that in c++ often better to call size each time since vectors can change size, 
    //also better to use != for generic reasons defined later in book
    for (string::size_type i =0; i != s.size(); i++){
        if (!(ispunct(s[i]))){
            output += s[i];
        }
    }
    std::cout << output <<std::endl;
    return 0;
}