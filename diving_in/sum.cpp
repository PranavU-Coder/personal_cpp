#include<iostream>

int addNumbers(int a,int b){
    return a+b;
}

int main(){
    
    int number1,number2;
    std::cin>>number1>>number2;
    int sum = addNumbers(number1,number2);
    std::cout<<sum<<std::endl;

}