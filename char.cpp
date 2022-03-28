#include <iostream>

int main()
{
    char c1, c2;
    std::cout << "inserisci due caratteri";
    std::cin >> c1;
    std::cin >> c2;
    int sum = int(c1) + int(c2);
    std::cout << sum;
}