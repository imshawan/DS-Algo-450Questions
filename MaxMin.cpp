#include<iostream.h>
#include<conio.h>
void main()
	{
	clrscr();
	int n=5;
	int i=0;
	int arr[5];
	cout<<"Enter 5 Elements: ";
	for (i; i<n; i++)
		{
		cin>>arr[i];
		}
	int min = arr[0];
	int max = arr[0];

	for (i=0; i<n; i++)
		{
		if (arr[i]>max)
			{
			max = arr[i];
			}
		if (arr[i]<min)
			{
			min = arr[i];
			}

		}

	cout<<"The Maxiumum Term: "<<max<<endl;
	cout<<"The Minimum Term: "<<min;
	getch();


	}