#include <iostream>
#include "Sales_item.h"

/*Read two sales items iwth same isbn and produces sum */

int main()
{
    std::cout << "Enter two books in the example format: 0-201-70353-X 4 24.99" << std::endl;
    
    Sales_item b1, b2, book;  //unitialized
    //read in as long as available
    std::cin >> b1 >> b2; 
    //write out
    std::cout << b1+b2 << std::endl;
    
    return 0;
}