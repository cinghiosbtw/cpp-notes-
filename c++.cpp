#include <iostream> 

int main()
{
	int n1, n2; 
	int n3; 
	std::cout << "inserisci il primo numero";
	std::cin >> n1; 
	std::cout << "insersci il secondo numero";
	std::cin >> n2;	
	if (n1 + n2 == n2 * 2)
	{
		std::cin >> n3;
		if (n3 == n1)
			std::cout << "dio cane";
	}
	return 0; 
}