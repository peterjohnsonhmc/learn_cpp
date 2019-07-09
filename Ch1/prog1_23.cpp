#include <iostream>
#include "Sales_item.h"

/*Read variable number of sales items iwth same isbn and produces sum */

int main()
{
    std::cout << "Enter books in the example format: 0-201-70353-X 4 24.99" << std::endl;
    
    Sales_item total, book;  //unitialized
    //read in as long as available
    while(std::cin >> book){
        total += book;
    }
    //write out
    std::cout << book << std::endl;
    return 0;
}