#include <iostream> 

int main()
{
	int n1; 
	int n2; 
	std::cout << "inserisci il primo numero "; 
	std::cin >> n1; 
	std::cout << "inserisci il secondo numero ";  
	std::cin >> n2; 
	if (n1 > n2 + 10)
	{
		bool isBigger;
		isBigger = true; 
		std::cout << isBigger ; 
	}
	
}