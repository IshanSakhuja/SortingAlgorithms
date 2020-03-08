#include<iostream>
using namespace std;
int main()
{
	int a,b,c,temp,size,num;
	cin >> size;
	int arr[size];
	for(a=0;a<size;a++)
		cin >> arr[a];
	for(a=0;a<size-1;a++)
	{
		for(c=b=a;b<size;b++)
		{
			if(arr[c] > arr[b])
				c = b;
		}
		temp = arr[c];
		arr[c] = arr[a];
		arr[a] = temp;
	}	
	for(a=0;a<size;a++)
		cout << arr[a] << " ";
	cout << endl;	
	return 0;	
}
