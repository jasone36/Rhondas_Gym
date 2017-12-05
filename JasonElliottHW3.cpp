#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void introRhondas();

int main()
{
	introRhondas();
	int userInput;
	cin >> userInput;

	const float BASE_FEE = 1200;
	const float GOLD_APR = 0.01;
	const float SILVER_APR = 0.02;
	const float BRONZE_APR = 0.04;

	cout << fixed << setprecision(2) << endl;

	float gold_apr, silver_apr, bronze_apr;

	const int MIN_YEAR = 1;
	const int MAX_YEAR = 10;
	int year = MIN_YEAR;
	for (year = 1; year <= 10; year++)

		switch (userInput)
		{
		case 1:
			gold_apr = BASE_FEE * pow(1.0 + GOLD_APR, year);
			cout << "Year\t" << year << "\t$" << gold_apr << endl;
			break;
		case 2:
			silver_apr = BASE_FEE * pow(1.0 + SILVER_APR, year);
			cout << "Year\t" << year << "\t$" << silver_apr << endl;
			break;
		case 3:
			bronze_apr = BASE_FEE * pow(1.0 + BRONZE_APR, year);
			cout << "Year\t" << year << "\t$" << bronze_apr << endl;
			break;
		case 4:
			cout << "Thank you for using Rhonda's fee calculator!" << endl;
			break;
		default:
			cout << "Invalid entry. Please enter 1-4" << endl;
		}

	return 0;
}

void introRhondas()
{
	//Rhonda's Strikeforce Gym
	cout << "Welcome to Rhonda's Strikeforce Gym!!       \n";
	cout << "x—————————————————--------------------x     \n";
	cout << "       Membership Fee Calculator            \n";
	cout << "1. Gold                                     \n";
	cout << "2. Silver                                   \n";
	cout << "3. Bronze                                   \n";
	cout << "4. Quit                                     \n";

	cout << "Please enter a membership level (1-3 Enter 4 to Quit) > " << endl;
}