#include "problem5.h"
 void transpose(int matrix[10][10], int rows, int cols);


void printPascal(int n)
{

	for (int line = 1; line <= n; line++)
	{

		int C = 1;

		for (int i = 1; i < (n - line + 1); i++){
			std::cout << " ";
		}

		for (int i = 1; i <= line; i++)
		{


			std::cout << C << " ";
			C = C * (line - i) / i;
		}

		std::cout << "\n";
	}
}
