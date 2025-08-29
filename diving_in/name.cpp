#include<iostream>
#include<string>

int main(){

    int age;
    std::string name;

    std::cout<<"Please Enter Your Age : "<<std::endl;
    std::cin>>age;

    std::cin.ignore(); // this is to ignore the leftover newline

    std::cout<<"Please Enter Your Name : "<<std::endl;
    std::getline(std::cin,name);

    std::cout<<"NAME : "<<name<<std::endl;
    std::cout<<"AGE : "<<age<<std::endl;

    return 0;
}