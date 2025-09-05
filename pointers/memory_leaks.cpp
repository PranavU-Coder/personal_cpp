#include <iostream>

int main(){

	int *ptr = new int{69};    
    ptr = new int{50};         // loses reference to first
   
	delete ptr;                // Only deletes the second allocation
    return 0;                  // Memory leak: first allocation (69) was never freed

}
