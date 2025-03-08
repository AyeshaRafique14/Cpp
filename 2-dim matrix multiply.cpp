#include<iostream>
using namespace std;
int main()
{
	int arr1[2][2]={{2,1},{1,2}};
	int arr2[2][2]={{4,5},{1,8}};
	int arr3[2][2]={{0,0},{0,0}};
	int k=1,m=2;
	for(int i=0;i<=1;i++)  
	{
	for(int j=0;j<=1;j++)
	{
		for(int k=0;k < m;k++)
		{
		arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
	}
	}
	}
	for(int i=0;i<=1;i++)  
	{
	for(int j=0;j<=1;j++)
	{
		cout<<arr1[i][j];
		cout<<"\t";
	}
}
cout<<endl;
  for(int i=0;i<=1;i++)  
	{
	for(int j=0;j<=1;j++)
	{
		cout<<arr2[i][j];
		cout<<"\t";
	}
	}
	cout<<endl;
	  for(int i=0;i<=1;i++)  
	{
	for(int j=0;j<=1;j++)
	{
		cout<<arr3[i][j];
		cout<<"\t";
	}
	}
	cout<<endl;
}

