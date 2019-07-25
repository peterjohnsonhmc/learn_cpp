#include<vector>
#include<iostream>

//Create program to create a vector with 10 elements
//Assign an element a value twice its current value

int main()
{
    std::vector<int> vals(10,1); //10 copies of the int 1

    for (std::vector<int>::iterator i=vals.begin(); i!=vals.end(); i++){
        *i = *i*=2;
    }
    //Now print it, using a const iterator since its read only
    for (std::vector<int>::const_iterator i=vals.begin(); i!=vals.end(); i++){
        std::cout << *i << std::endl;
    }
    return 0;
}