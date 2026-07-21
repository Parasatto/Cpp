#include <iostream>


int main(){
    int maxSpeed = 80;

    if (maxSpeed < 60 || maxSpeed == 60){
        std::cout << "u fine" << std::endl;
    }
    else if (maxSpeed == 80) {
        std::cout << "u overspeeding the limits" << std::endl;
    }else{
        std::cout << "nothing to say" << std::endl;
    }

    std::string result = (maxSpeed > 60) ? "overspeeding" : "it`s ok";

    std::cout << result << std::endl;

    return 0;
}