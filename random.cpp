#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    srand(time(0));
    
    // Generate random number between 0 and RAND_MAX
    int randomNumber = rand();
    
    std::cout << "Random number: " << randomNumber << std::endl;
    
    return 0;
}
