#include<iostream.h>
#include<conio.h>

void main()
	{
	clrscr();
	int n;
	int i=0;
	int arr[100];
	cout<<"Number of elements to be enterted: ";
	cin>>n;
	cout<<"Enter "<<n<<" Elements: ";

	for (i; i<n; i++)
		{
		cin>>arr[i];
		}

// Sorting of the elements in acending order

	for(i=0; i<n; i++)
		{
		int t=arr[i];
		int pos=i;
		for (int j=i+1; j<n; j++)
			{
			if (t>arr[j])
				{
				t = arr[j];
				pos = j;
				}
			}
		int temp = arr[i];
		arr[i] = t;
		arr[pos] = temp;
		}
	int rev[100];
	int l=0;

// Contains Reversed elements

	for(i=n-1; i>=0; i--)
		{
		rev[l] = arr[i];
		l++;
		}
	int k;
	cout<<"Enter value of 'K' to find the Kth Max and Min terms: ";
	cin>>k;
	if (k>n)
		{
		cout<<"Value of K is larger than the no. of elements";
		}
	else
		{
		cout<<"The Kth Max term is: "<<rev[k]<<endl;
		cout<<"The Kth Min term is: "<<arr[k];
		}
	getch();
	}