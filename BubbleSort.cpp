#include<iostream>
using namespace std;
int main()
{
	int a,b,c,temp,size;
	cout << "Enter the size of the array" << endl;
	cin >> size;
	int *arr = new int[size];
	cout << "Enter the elements of array" << endl;
	for(a=0;a<size;a++)
		cin >> arr[a];
	for(a=0;a<size-1;a++)
	{
		temp = 0;
		for(b=0;b<size-a-1;b++)
		{
			if(arr[b] > arr[b+1])
			{
				c = arr[b];
				arr[b] = arr[b+1];
				arr[b+1] = c;
				temp=1;
			}
		}
		if(temp == 0)
			break;
	}
	for(a=0;a<size;a++)
		cout << arr[a] << " ";
	cout << endl;
	return 0;	
}
