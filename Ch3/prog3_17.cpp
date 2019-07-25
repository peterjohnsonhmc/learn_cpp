#include<iostream>
#include<string>

//Will be redoing exercises 13 and 14 using iterators isntead of subscripts
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
    //First redo 3_13, but the version where you just print adjacent
    // vector<int> v;
    // int in;
    
    // cout << "Provide integers" << endl;
    // while(cin >> in){
    //     v.push_back(in);
    // }
    // vector<int>::iterator it = v.begin();
    // it++;
    // for(vector<int>::iterator i=v.begin(); i != v.end(); i++){
    //     if (it != v.end()){
    //         cout << *i + *it << endl;
    //     }else{
    //         cout << *i;
    //     }
    //     it++;
       
    // }

    //Now redo 3_14
    cout << "enter words" <<endl;

    string input;
    vector<string> words;

    while (cin >> input){
        for (string::iterator i =input.begin(); i != input.end(); i++){
            *i = toupper(*i);
        }
        words.push_back(input);
    }
    //Now that all words are received, print them out
    size_t count =0;
    for (vector<string>::iterator i =words.begin(); i != words.end(); i++){
        cout << *i << " ";
        count++;
        if (count % 8 ==0){
            //Only 8 words per line, so start new line
            cout << endl;
        }
    }
    return 0;
}