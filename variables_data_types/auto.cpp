#include <iostream>

int main(){

	auto var1 {10};
	auto var2 {10.0};
	auto var3 {10.0f};
	auto var4 {10.0l};
	auto var5 {'e'};

	std::cout<< "var1 occupies : "<<sizeof(var1)<<" bytes"<<std::endl;
	std::cout<< "var2 occupies : "<<sizeof(var2)<<" bytes"<<std::endl;
	std::cout<< "var3 occupies : "<<sizeof(var3)<<" bytes"<<std::endl;
	std::cout<< "var4 occupies : "<<sizeof(var4)<<" bytes"<<std::endl;
	std::cout<< "var5 occupies : "<<sizeof(var5)<<" bytes"<<std::endl;

	return 0;
}
