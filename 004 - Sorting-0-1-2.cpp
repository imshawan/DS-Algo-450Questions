// Problem 004

// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algorithm

#include <iostream.h>
#include <conio.h>

int main()
	{
	int n=5;    // Here N is the Nth term and N=5, therefore value 5 is used in the program
				// in some places instead of N
	int z = 0;
	int one = 0;
	int two = 0;
	int input[5];
	int i=0;
	cout<<"Enter "<<n<<" Elements of only 0s, 1s and 2s: \n";
	for (i=0; i<n; i++)
		{
		cin>>input[i];
		}
	// Array input by user contains elements that are not sorted

	// Sorting and storing of values begin without the use of any sorting algorithm
	for (i=0; i<n; i++)
	{
		if (input[i]==0)
		{
			z++;
		}
		else if (input[i]==1)
		{
			one++;
		}
		else if (input[i]==2)
		{
			two++;
		}
	}
	int pos = 0;
	int sorted[5];    // New array for storing the sorted elements
	for (int j=0; j<z; j++)
		{
		sorted[pos]=0;
		pos++;
		}
	for (j=0; j<one; j++)
		{
		sorted[pos]=1;
		pos++;
		}
	for (j=0; j<two; j++)
		{
		sorted[pos]=2;
		pos++;
		}
	for(j=0; j<5; j++)
		{
		cout<<sorted[j];
		}

	getch();
	}
