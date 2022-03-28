#include <iostream>

int main()
{
    int n1 = 0;
    int somma = 0;
    int i = 0;
    std::cout << "inseriscimi un numero da tastiera ";
    std::cin >> n1;
    while (i < n1)
    {
        somma = somma + n1;
        i++;
    }
}