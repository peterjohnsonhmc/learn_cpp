#include <iostream>

//Header appears above the main function
/*Simple main function, takes input from the styandard input stream and then writes to the  
 * output stream 
 */
int main(){
    //Prompt user input
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;     //Uninitialized
    std::cin >> v1 >> v2; //read input

    //use smaller number as the lower bound for summation
    // and larger number as the upper bound
    int lower, upper;
    if (v1 <= v2){
        lower = v1;
        upper = v2;
    }else{
        lower = v2;
        upper = v1;
    }
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1+v2 <<std::endl;

    return 0;
}