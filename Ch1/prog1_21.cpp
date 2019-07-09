#include <iostream>
#include "Sales_item.h"

/*Loop through a set of book sales transactions, reading each transaction and writing that 
transcation to the standard output */

int main()
{
    Sales_item book;  //unitialized
    //read in as long as available
    std::cout << "Enter books in the example format: 0-201-70353-X 4 24.99" << std::endl;
    while(std::cin >> book){
        //write out
        std::cout << book << std::endl;
    }
    return 0;
}