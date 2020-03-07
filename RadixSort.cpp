#include<iostream>
#include<cmath>
using namespace std;
struct node{
	int data;
	node *next;
}*temp,*pp;
int main()
{
	int a,b,c,size,max=INT_MIN,i=0,kk,l;
	cin >> size;
	int arr[size];
	node **ishan = new node *[10];
	for(a=0;a<10;a++)
		ishan[a] = NULL;
	for(a=0;a<size;a++)
		cin >> arr[a];
	for(a=0;a<size;a++)
	{
		if(arr[a] > max)
			max = arr[a];
	}
	while(max != 0)
	{
		max = max / 10;
		++i;
	}
	for(a=0;a<i;a++)
	{
		for(b=0;b<size;b++)
		{
			kk = pow(10,a+1);
			c = arr[b] % kk;
			temp = new node();
			temp->next = NULL;
			temp->data = arr[b];
			if(ishan[c] == NULL)
				ishan[c] = temp;
			else
			{
				pp = ishan[c];
				while(pp->next != NULL)
					pp = pp->next;
				pp->next = temp;	
			}	
		}
		l = 0;
		for(b=0;b<10;a++)
		{
			if(ishan[b] == NULL)
				continue;
			else
			{
				pp = ishan[b];
				while(pp!=NULL)
				{
					arr[l++] = pp->data;
					pp=pp->next;
				}
			}	
		}
		for(b=0;b<10;b++)
			ishan[b] = NULL;
	}
	for(a=0;a<size;a++)
		cout << arr[a] << " ";
	cout << endl;
	return 0;	
}
