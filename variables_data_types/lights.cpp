#include<iostream>

int main(){

	bool red_light {false};
	bool green_light {true};

	if(green_light) std::cout<<"Move Ahead!"<<std::endl;
	else std:: cout<<"Stop!"<<std::endl;

	return 0;
}
