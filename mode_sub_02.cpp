// mode_sub_02.cpp 

#include <iostream>





int main()
{
	int a = 6;
	int b = 5;
	int c = 2;

   #define SUB(a, b) (a-b)
	std::cout << SUB(a, b) << std::endl;
   #undef SUB

    #define SUB(a, b, c) ((a - b) * c)     //a-b = 1 * 2 = 2  (4?)
	std::cout << SUB(a, b, c) * c << std::endl;
   #undef SUB

    #define SUB(a, b, c) (((a)-(b)-(c)) *(c))      // a-b-c * c 6-5-2  -1*2 =-2    (-4?)
	std::cout << SUB(a, b, c ) * c << std::endl; 
   #undef SUB
		
		return 0;
}



