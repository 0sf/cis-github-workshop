#include<iostream>

using namespace std;

int main()
{
	int *arr;
	int n;
	cout<<"Enter size";
	cin>>n;
	arr=new int[n];
	cout<<"Enter array";
	for(int k=0;k<n;k++)
		cin>>arr[k];
	cout<<"Array is: ";
	for(int k=0;k<n;k++)
		cout<<arr[k]<<"   ";
	int value;
	cout<<"Enter value to be searched :";
	cin>>value;
	bool flag=false;
	int f=0,l=n-1,mid;
	while(f<=l)
	{
		mid=(f+l)/2;
		if(value==arr[mid])
		{
			cout<<"Value "<<value<<" found at "<<mid+1<<" position";
			flag=true;
			break;
		}
		else if(value<arr[mid])
			l=mid-1;
		else
			f=mid+1;
	}
	if(flag==false)
		cout<<value<<" is not in array";
	delete arr;
}
