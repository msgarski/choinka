#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int h=10;
	int p, s, g;
	for(p=1; p<=h; p++)
	{
		for(s=1; s<=h-p; s++)
		{
			std::cout<<" ";
		}
		std::cout<<p;
		for(g=1; g<=p*2-1; g++)
		{
			std::cout<<"*";
		}
		std::cout<<p<<std::endl;
	}
	
	
			
	
	
	std::cin.sync();
	std::cin.get();
	
	
	
	
	return 0;
}
