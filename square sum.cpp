#include <iostream> 

int main()
{
	float n1; 
	float n2; 
	std::cout << "inserisci il valore del lato del primo quadrato "; 
	std::cin >> n1; 
	std::cout << "insersci il valore del lato del secondo quadrato "; 
	std::cin >> n2; 
	float area = n1 * n1; 
	std::cout << area << std::endl; 
	float perimetro = n2 * 4; 
	std::cout << perimetro << std::endl; 
	std::cout << "la somma del periemtro dell'area e' " << perimetro + area ;
	return 0; 
}