#include<iostream>
#include<cstring>
const char str1[] = "Hello";
const char str2[] = "World !";

int main(){
//	constexpr size_t new_size = strlen(str1) + strlen(" ") + strlen(str2) + 1;
	constexpr size_t new_size = 100;
	char str3[new_size];
	strcpy(str3, str1);
	strcat(str3, " ");
	strcat(str3, str2);
	std::cout << str3 << std::endl;
	return 0;
}
