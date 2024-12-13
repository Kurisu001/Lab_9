#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{
	int year = 1;
	double load, interest, payment, Cinter, total, newbalance;
	cout << "Enter initial loan: ";
	cin >> load;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	for(;;)
	{

		Cinter = load * (interest / 100.0);
		total = load + Cinter;
		if (total < payment)
			payment = total;
		newbalance = total - payment;
		cout << fixed << setprecision(2);
		cout << setw(13) << left << year;
		cout << setw(13) << left << load;
		cout << setw(13) << left << Cinter;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << newbalance;
		cout << "\n";
		year++;
		load = newbalance;
		if (load == 0) break;
	}

	return 0;
}
