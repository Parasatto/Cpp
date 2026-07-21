#include <iostream>
#include <vector>

int main(){
    std::vector<int> dynamicArray = {1,2,3};
    dynamicArray.push_back(6);

    std::cout << dynamicArray.size()<<'\n';
    return 0;
};