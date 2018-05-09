// Find the missing number by XOR.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int getMissingNo(int a[], int n) {
	int i;
	int x1 = a[0];
	int x2 = 1;

	for (i = 1; i < n; i++)
		x1 = x1 ^ a[i];

	for (i = 2; i <= n + 1; i++)
		x2 = x2 ^ i;

	return (x1^x2);
}

int main()
{
	int a[] = { 1,2,4,5,6 };
	int miss = getMissingNo(a, 5);
	cout << miss;
	getchar();

    return 0;
}

