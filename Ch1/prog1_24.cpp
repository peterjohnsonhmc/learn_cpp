#include <iostream>
#include "Sales_item.h"

/*Checks if ISB are the same, and combines records of consecutive books
 * assumption is that all transactions for a given ISNB will appear one after another
 */

int main()
{
    std::cout << "Enter books in the example format: 0-201-70353-X 4 24.99" << std::endl;
    
    Sales_item prev, book;  //unitialized

    if(std::cin >> prev){
        //read in as long as available
        while(std::cin >> book){
            if (compareIsbn(book,prev)){
                prev += book;
            }else{ //Last of consecutive ISBN, so cout, and update to next ISBN 
                std::cout << prev << std::endl;
                prev = book;
            }
        }
        //Print last record
        std::cout << prev << std::endl;
    }else{
        //write out
        std::cout << "No input" << std::endl;
        return -1;
    }
    return 0;
}