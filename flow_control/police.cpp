#include <iostream>

int main(){

	bool red {false};
	bool green {true};
	bool yellow {false};
	bool police_stop {true};

	/* PRINCIPAL LOGIC
	 * IF RED , YELLOW -> STOP
	 * IF GREEN AND POLICE_STOP -> STOP
	 * IFF GREEN -> GO
	 */

	if(green && !police_stop){
		std::cout<<"GO!"<<std::endl;
	} else
		std::cout<<"STOP!"<<std::endl;

	return 0;
}

