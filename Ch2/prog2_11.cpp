#include <iostream>

int main()
{
    //Prompt user to input two numbers
    //base and exponent
    //print result of raising base to the exponent

    int base, exp, output = 1;

    //Prompt user input
    std::cout << "Enter a base and exponent integer" <<std::endl;

    if (std::cin >> base){
        std::cin >> exp;
        //SInce no math library calculate using a for loop
        for (int i=0; i<exp;i++){
            output *=base;
        }
        std::cout << output <<std::endl;
    }else{
        std::cout << "Did not enter values" <<std::endl;
    }
    return 0;
}