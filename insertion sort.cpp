#include<iostream>
using namespace std;
int main()
{
	int a,b,c,size,temp;
	cout << "Enter the size of the array" << endl;
	cin >> size;
	int arr[size];
	cout << "Enter the elements of array" << endl;
	for(a=0;a<size;a++)
		cin >> arr[a];
	for(a=0;a<size;a++)
	{
		for(b=a;b>0;b--)
		{
			if(arr[b] < arr[b-1])
			{
				temp = arr[b];
				arr[b] = arr[b-1];
				arr[b-1] = temp;
			}
		}
	}
	cout << "The sorted array is " << endl;
	for(a=0;a<size;a++)
		cout << arr[a] << endl;
	return 0;	
}
