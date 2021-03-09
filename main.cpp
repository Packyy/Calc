#include "main.h"

int main() {
	std::cout << "Paste act: ";
	std::cin >> de;
	std::cout << "Paste X: ";
	std::cin >> a;
	std::cout << "Paste Y: ";
	std::cin >> b;
	
	switch (de)
	{
		case '+':
			result = sum(a, b);
			break;
		case '-':
			result = min(a, b);
			break;
		case '/':
			result = del(a, b);
			break;
		case '*':
			result = umn(a, b);
			break;
	}
	
	std::cout << "Result: " << result << std::endl;
	return 0;
}

inline float sum(float a, float b)
{
	return a + b;	
}
inline float min(float a, float b)
{
	return a - b;
}
inline float del(float a, float b)
{
	return a / b;
}
inline float umn(float a, float b)
{
	return a * b;
}
