#include <iostream>

int main(){
    for (int i = 0; i < 5; i++){
        std::cout << i << std::endl;
    }

    int counter = 0;
    std::cout << "   " << std::endl;

    while (counter != 5){
        std::cout << counter << std::endl;
        counter++;
    }

    std::cout << "   " << std::endl;
    int nums[] = {10, 20, 30, 40};

    for (int num : nums){
        std::cout << num << std::endl;
    }
    return 0;
}