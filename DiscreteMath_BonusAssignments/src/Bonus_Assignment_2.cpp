////============================================================================
//// Name        : Bonus_Assignment_2.cpp
//// Author      : Jeremy Taylor
//// Version     : 1.0
//// Description : Discrete Math Bonus Assignment 2
////============================================================================

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void get_powerset(char *set, int set_size)
{
    unsigned int powerset_size = pow(2, set_size);

    cout << "P(A): { ";
    for(int i = 0; i < powerset_size; i++)
    {
    	cout << "{";
    	for(int j = 0; j < set_size; j++)
    	{
    		if(i & (1 << j))
    		{
    			printf("%c", set[j]);
    		}
    	}
    	cout << "} ";
    }
    cout << "}" << endl;
}

int main()
{
	//Size of set
	int m;

	cout << "Enter size of SetA: " << endl;
	cin >> m;

	//Elements for SetA
	char setA[m];
	char elementsA;

	//Populate SetA
	cout << "Enter elements for SetA: " << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> elementsA;
		setA[i] = elementsA;
	}

    get_powerset(setA, m);
    return 0;
}