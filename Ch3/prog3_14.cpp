#include<iostream>
#include<string>
#include<vector>

//REad text into a vecotr, storing each word as an elemtn in vector
//TRansform each word into uppercase
//Print 8 words to a line

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "enter words" <<endl;

    string input;
    vector<string> words;

    while (cin >> input){
        for (string::size_type i =0; i != input.size(); i++){
            input[i] = toupper(input[i]);
        }
        words.push_back(input);
    }
    //Now that all words are received, print them out
    for (vector<string>::size_type i =0; i != words.size(); i++){
        cout << words[i] << " ";
        if ((i+1)%8 ==0){
            //Only 8 words per line, so start new line
            cout << endl;
        }
    }
    return 0;
}