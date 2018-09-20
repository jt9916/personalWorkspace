////============================================================================
//// Name        : Bonus_Assignment_1.cpp
//// Author      : Jeremy Taylor
//// Version     : 1.0
//// Description : Discrete Math Bonus Assignment 1
////============================================================================
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//Sizes of each set
//	int m;
//	int n;
//
//	cout << "Enter size of SetA: " << endl;
//	cin >> m;
//	cout << "Enter size of SetB: " << endl;
//	cin >> n;
//
//	//Elements for SetA and SetB
//	int setA[m];
//	int setB[n];
//	int elementsA;
//	int elementsB;
//
//	//If SetA is a subset of SetB or not
//	bool isCompliment;
//
//	//Must be greater or equal to number of elements in SetA
//	int isThere = 0;
//
//	//Populate SetA
//	cout << "Enter elements for SetA: " << endl;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> elementsA;
//		setA[i] = elementsA;
//	}
//	cout << endl;
//
//	//Populate SetB
//	cout << "Enter elements for SetB: " << endl;
//	for (int j = 0; j < n; j++)
//	{
//		cin >> elementsB;
//		setB[j] = elementsB;
//	}
//	cout << endl;
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (setA[i] == setB[j])
//				isThere++;
//		}
//
//		if (isThere >= m)
//			isCompliment = true;
//		else
//			isCompliment = false;
//	}
//
//	if (isCompliment == true)
//		cout << "SetA is a subset of SetB!" << endl;
//	else
//		cout << "SetA is not a subset of SetB!" << endl;
//
//	return 0;
//}
