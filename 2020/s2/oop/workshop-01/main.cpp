#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    int array2[5] = {1,2,3,4,5};
    std::cout << "The number is: " << count(array2, 5) << std::endl;
    return 0;
}
