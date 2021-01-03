#include<iostream.h>
#include<conio.h>
void main()
	{
	clrscr();
	int n=0;
	cout<<"Enter the Number of elements to be enterd: ";
	cin>>n;
	int i = 0;
	int arr[10];
	cout<<"Enter Elements: ";
	for (i=0; i<n; i++)
		{
		cin>>arr[i];
		}
	int reverse[10];
	int k=0;
	for (int j=n-1; j>=0; j--)
		{
		reverse[k]=arr[j];
		k++;
		}
	cout<<"\nThe original Array: \n";
	for (i=0; i<n; i++)
		{
		cout<<arr[i];
		}
	cout<<"\n";
	cout<<"\nReversed Array: \n";
	for (i=0; i<n; i++)
		{
		cout<<reverse[i];
		}
	getch();
	}