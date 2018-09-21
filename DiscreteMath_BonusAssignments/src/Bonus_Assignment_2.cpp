//============================================================================
// Name        : Bonus_Assignment_2.cpp
// Author      : Jeremy Taylor
// Version     : 1.0
// Description : Discrete Math Bonus Assignment 2
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	//Size of set
	int m;

	//Size of Powerset
	int P;

	cout << "Enter size of SetA: " << endl;
	cin >> m;

	//Elements for SetA
	int setA[m];
	int elementsA;

	//Powerset for SetA
	P = (m * m);
	int powerset[P];

	//Populate SetA
	cout << "Enter elements for SetA: " << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> elementsA;
		setA[i] = elementsA;
	}

	//Function to determine P(A)
	for (int i = 0; i < P; i++)
	{
		int size;
		int allSets[size];
		powerset[i] = 0;
	}











	//Print formatted powerset array
	cout << "P(A): { ";
	for (int i = 0; i < P; i++)
	{
		cout << "{ " << powerset[i] << " } ";
	}
	cout << "}" << endl;

	return 0;
}
