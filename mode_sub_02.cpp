// mode_sub_02.cpp 

#include <iostream>


#define SUB(a, b)((a)-(b))   // a-b-c * c 6-5-2  -1*2 =-2    (-4?)


int main()
{
	int a = 6;
	int b = 5;
	int c = 2;

  
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
  
		
		return 0;
}



