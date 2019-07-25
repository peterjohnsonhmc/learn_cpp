#include<iostream>
#include<vector>

//Notes:
//Vector elements must exist to subscript them, same thing for strings
//Since vectors are built to resize ffeciently, better to not allcoate the full size, 
//and just add on elements

//Read a set opf integers into a vector
//Print the sum of the first and last elements moving inwards
//If odd, tell user and just print middle number

int main()
{
    std::vector<int> v;
    int input;
    
    std::cout << "Provide integers" << std::endl;
    while(std::cin >> input){
        v.push_back(input);
    }
    for(std::vector<int>::size_type i=0; i != v.size()/2; i++){
        std::cout << v[i] + v[v.size()-1-i] << std::endl;
    }
    if (v.size()%2 == 1){
        //Odd so print middle
        std::cout << v[v.size()/2+1] << std::endl;
    }
    return 0;
}