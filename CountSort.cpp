#include<iostream>
using namespace std;
int main()
{
	int a,b,c,temp,max=INT_MIN,size;
	cout << "Enter the size of the array" << endl;
	cin >> size;
	int *arr = new int[size];
	cout << "Enter the elements in array" << endl;
	for(a=0;a<size;a++)
		cin >> arr[a];
	for(a=0;a<size;a++)
	{
		if(arr[a] > max)
			max = arr[a];
	}
	int *ishan = new int[max+1];
	for(a=0;a<=max;a++)
		ishan[a] = 0;
	for(a=0;a<size;a++)
		++ishan[arr[a]];
	b = 0;	
	for(a=0;a<=max;a++)
	{
		if(ishan[a] > 0)
		{
			arr[b++] = a;
		}
	}
	for(a=0;a<size;a++)
		cout << arr[a] << " ";
	cout << endl;
	return 0;	
}
