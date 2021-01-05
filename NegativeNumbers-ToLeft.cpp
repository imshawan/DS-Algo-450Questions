#include<iostream.h>
#include<conio.h>



void main()
	{
	clrscr();
	int n=5;
	int array[5];
	int arr[5];
	int pos = 0;
	int k=0;

	cout<<"Enter "<<n<<" Elements: ";
	for (int i=0; i<n; i++)
		{
		cin>>array[i];
		}
		
	//Moving all negative numbers to beginning and positive to end
	for (int j=0; j<n; j++)
		{
		if (array[j]<0)
			{
			arr[k]=array[j];
			pos++;
			k++;
			}
		}
	for (j=0; j<n; j++)
		{
		if (array[j]>0)
			{
			arr[pos] = array[j];
			pos++;
			}
		}
	// Display 
	for (j=0; j<n; j++)
		{
		cout<<arr[j];
		}
	getch();
	}