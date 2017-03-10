#include<iostream>
int main(){
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; 
	std::cout << i - i2 << std::endl; // -32 -> 2^32-32=4,294,967,264 
					  // int 4 byte 32bits
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
	
    
	return 0;
} 

