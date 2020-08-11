

#include <iostream>
#include<limits>

int main()
{

    char repeat;

    do {
        std::cout << "======================================================\n "
            << "Enter a number and we will perform the Collatz conjecture on it!\n"
            << "======================================================" << std::endl;

        std::cout << "Please enter a positive integer: ";
        float seed;
        std::cin >> seed;
        
        //Checks to see that the input is a positive integer, if not prompts user for another entry
       int test = seed * 10;
       while (seed < 1 || test % 10 != 0) {

            std::cout << "This number is not valid, please enter a POSITIVE INTEGER: ";
            std::cin >> seed;
            test = seed * 10;
        }
 

        int processNum = seed;

        std::cout << "You chose " << seed << "." << std::endl;

        int counter = 0;
        //Performing the conjecture
        while (processNum != 1) {
            if (processNum % 2 == 0) {
                processNum = processNum / 2;
            }
            else if (processNum % 2 == 1) {
                processNum = 3 * processNum + 1;
            }
            counter++;
            std::cout << processNum << std::endl;
        }

        std::cout << "It took " << counter << " iterations to get " << seed << " to 1 via the Collatz conjeture!" << std::endl;

        std::cout << "Would you like to go again? (y/n): ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;

}
