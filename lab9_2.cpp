#include <iostream>
using namespace std;

void printO(int row, int colum)
{
	if (row <= 0 or colum <= 0)
	{
		cout << "Invalid input";
	}
	else
	{
		for (int u = row; u > 0; --u)
		{
			for (int i = colum; i > 0; --i)
			{
				cout << "O";
			}
			cout << endl;
		}
	}
}

int main()
{

	printO(2, 2);
	cout << "\n";

	printO(3,5);
	cout << "\n";

	printO(5,3);
	cout << "\n";

	printO(0,3);
	cout << "\n";

	printO(7,-1);
	cout << "\n";

	return 0;
}
