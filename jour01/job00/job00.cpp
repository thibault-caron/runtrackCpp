#include <iostream>

int one()
{
	int x = 3;
	int a = x + 5;
   	std::cout << a << std::endl;
    return 0;
}

int two()
{
	int x;
	int y = 3;
	int a = x=y + 2;
   	std::cout << a << std::endl;
    return 0;
}

int three()
{
	int x = 5;
	int y = 5;
	int a = x==y;
   	std::cout << a << std::endl;
    return 0;
}

int four()
{
	int a = 9;
	int b = 5;
	int c = 6;
	int d = 8;
	a = a<b && c<d;
   	std::cout << a << std::endl;
    return 0;
}

int five()
{
	int i = 9;
	int n = 5;
	int p = 6;
	int a = i++ * (n+p);
   	std::cout << a << std::endl;
    return 0;
}

int main()
{
    one();
    two();
    three();
    four();
    five();
    return 0;
}