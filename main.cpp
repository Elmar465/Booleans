#include <iostream>

int main()
{
    bool red_light{false};
    bool green_light{true};

    if (red_light == true)
    {
        /* code */ std::cout << "Stop" << std::endl;
    }
    else
    {
        /* code */ std::cout << "Go through" << std::endl;
    }
    if (green_light)
    {
        std::cout << "The light is green" << std::endl;
    }
    else
    {
        std::cout<<"The light is not green" << std::endl;
    }
    //Printing out of bool
    //1 --> true
    //0 --> false
    std::cout<<std::endl;
    std::cout<<"red light "<< red_light << std::endl;
    std::cout<<"green light " << green_light << std::endl;
    //Print out true and false 
    std::cout<<std::endl;
    std::cout<<std::boolalpha; // Forces the output format to true/false
    std::cout<< "red light " << red_light << std::endl;
    std::cout << "green light " << green_light << std::endl;

    //sizeof boolean 
    std::cout << "Size of  Boolean : " << sizeof(bool) << std::endl;
}