#include<iostream>
using namespace std;
int main()
{
	int a,b,c,temp,size;
	cin >> size;
	int arr[size];
	for(a=0;a<size;a++)
		cin >> arr[a];
	for(b=size/2;b>0;b=b/2)
	{
		for(a=0;a<size;a=a+b)
		{
			if(a+b >= size)
				break;
			if(arr[a] <= arr[a+b])	
				continue;
			else if(arr[a] > arr[a+b])
			{
				for(c=a+b;c>=0;c=c-b)
				{
					if(arr[c] < arr[c-b] && c-b >=0 )
					{
						temp = arr[c];
						arr[c] = arr[c-b];
						arr[c-b] = temp;
					}
					else
						break;
				}
			}	
		}
	}
	for(a=0;a<size;a++)
		cout << arr[a] << " ";
	cout << endl;
	return 0;		
}
