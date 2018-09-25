////============================================================================
//// Name        : Bonus_Assignment_2.cpp
//// Author      : Jeremy Taylor
//// Version     : 1.0
//// Description : Discrete Math Bonus Assignment 2
////============================================================================
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//	//Size of set
//	int m;
//
//	cout << "Enter size of SetA: " << endl;
//	cin >> m;
//
//	//Elements for SetA
//	int setA[m];
//	int elementsA;
//
//	//Size of Powerset
//	int P;
//
//	//Powerset for SetA (equal to 2^m)
//	P = pow(2, m);
//	int powerset[P];
//
//	//Populate SetA
//	cout << "Enter elements for SetA: " << endl;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> elementsA;
//		setA[i] = elementsA;
//	}
//
//	//Function to determine P(A)
//	for (int i = 0; i < P; i++)
//	{
//		//int size = 0;
//		//int allSets[size];
//		powerset[i] = NULL;
//	}
//
//	//Print formatted powerset array
//	cout << "P(A): { ";
//	for (int i = 0; i < P; i++)
//	{
//		cout << "{ " << powerset[i] << " } ";
//	}
//	cout << "}" << endl;
//
//	return 0;
//}



#include <stdio.h>
#include <math.h>

void printPowerSet(char *set, int set_size)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;

    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
            printf("%c", set[j]);
       }
       printf("\n");
    }
}

/*Driver program to test printPowerSet*/
int main()
{
    char set[] = {'7','8','9', '1', '2', '3'};
    printPowerSet(set, 6);
    return 0;
}
