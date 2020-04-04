#include<iostream>
using namespace std;
void createheap(int *arr,int size);
void sort(int *arr,int size);
int main()
{
	int a,b,c,temp,size;
	cout << "Enter the number of elements in heap" << endl;
	cin >> size;
	int arr[size+1];
	for(a=1;a<=size;a++)
		cin >> arr[a];
	createheap(arr,size);
	sort(arr,size);
	for(a=1;a<=size;a++)
		cout << arr[a] << " ";
	cout << endl;	
	return 0;	
}
void createheap(int *arr,int size)
{
	int a,b,c,temp,ishan;
	for(a=2;a<=size;a++)
	{
		temp = a;
		while(temp/2 > 0 && arr[temp/2] < arr[temp])
		{
			b = arr[temp/2];
			arr[temp/2] = arr[temp];
			arr[temp] = b;
			temp = temp / 2;
		}
	}
}
void sort(int *arr,int size)
{
	int a,b,c,temp,ishan,size1;
	size1 = size;
	while(size1 > 0)
	{
		temp = arr[1];
		arr[1] = arr[size1--];
		ishan = 1;
		while(1)
		{
			if(arr[ishan*2] > arr[ishan*2+1] && arr[ishan*2] > arr[ishan] && 2*ishan <= size1)
			{
				b = arr[ishan*2];
				arr[ishan*2] = arr[ishan];
				arr[ishan] = b;
				ishan = ishan*2;
			}
			else if(arr[ishan*2+1] > arr[ishan*2] &&  arr[ishan*2+1] > arr[ishan] && 2*ishan+1 <= size1)
			{
				b = arr[ishan*2+1];
				arr[ishan*2+1] = arr[ishan];
				arr[ishan] = b;
				ishan = ishan*2+1;
			}
			else if(arr[ishan*2] > arr[ishan] && 2*ishan <= size1)
			{
				b = arr[ishan*2];
				arr[ishan*2] = arr[ishan];
				arr[ishan] = b;
				ishan = ishan*2;
			}
			else
				break;
		}
		arr[size1+1] = temp;
	}
}

