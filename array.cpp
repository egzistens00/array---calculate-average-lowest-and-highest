#include <iostream>
using namespace std;
#define SIZE 4
int main()
{

	int marks[SIZE], i, min, max, avg, sum = 0;
	string sub[] = { "Mathematics", "Chemistry", "Biology", "Physics" };
	char answer;

	do {

		int i = 0;

		cout << "Enter Marks Of Students" << endl;
		cout << "-----------------------" << endl;
		cout << "\nMathematics     : ";
		cin >> marks[0];
		cout << "\nChemistry       : ";
		cin >> marks[1];
		cout << "\nBiology         : ";
		cin >> marks[2];
		cout << "\nPhysics         : ";
		cin >> marks[3];


		for (i = 0; i < SIZE; i++) {

			sum = sum + marks[i];
		}

		avg = sum / SIZE;
		cout << "\nThe Average is : " << avg << endl;

		max = 0;
		for (i = 0; i < SIZE; i++) 
		{
			if (marks[max] < marks[i])
				max = i;
		}
		cout << "\nThe highest mark is : " << sub[max] << endl;

		min = 0;
		for (i = 0; i < SIZE; i++) {
			if (marks[min] > marks[i])
				min = i;

		}

		cout << "\nThe lowest mark is : " << sub[min] << endl;

		cout << "\nDo you want to continue (Y-yes /N-No):";
		cin >> answer;
		i++;

	}

	while (answer == 'Y' || answer == 'y');

	return 0;

}
