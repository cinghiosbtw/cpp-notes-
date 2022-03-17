#include <iostream> 

int main()
{
	int n;
	std::cout << "inserisci un numero ";
	std::cin >> n;
	if (n > 10)
		for (int n = 0; n < 100; n++)
			std::cout << n; 
	if (n < 10)
		std::cout << "ciao"; 
	return 0; 
}