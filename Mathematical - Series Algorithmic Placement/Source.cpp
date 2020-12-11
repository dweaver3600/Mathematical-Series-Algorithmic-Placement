//Prompt
//Given the first 2 terms A1 and A2 of an Arithmetic Series.Find the Nth term of the series. 

#include <iostream>

#define PAUSE std::cout << "\n\n"; system("pause");


int main() {

	std::cout << "Given the first 2 terms A1 and A2 of an Arithmetic Series.Find the Nth term of the series.\n\n\n";

	int A1;
	int A2;
	int N;

	std::cout << "A1: ";
	std::cin >> A1;
	
	std::cout << "A2: ";
	std::cin >> A2;
	
	std::cout << "Nth Term (N): ";
	std::cin >> N;

	int difference = A2 - A1;

	//base case - N = 1 or 2
	std::cout << "Series: ";

	if (N == 1) std::cout << A1;
	
	else if (N == 2) {
		std::cout << A1 << " " << A2;
	}

	else
	{
		int integer = A1;

		for (; N > 0; N--) {
			std::cout << integer << " ";
			integer += difference;
		}
	}

	PAUSE
	return 0;
}