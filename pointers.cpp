#include<bits/stdc++.h>
using namespace std;
void update(int **p)
{
	// p = p + 1;

	// *p = *p + 1;

	**p = **p + 1;
}
int main()
{
	// int a = 10;
	// int *p = &a;
	// cout<<"Value in variable a is "<<a<<"\n";
	// cout<<"The Address of variable a is "<<*p<<"\n";
	// int arr[10]={23,55,67,36, 58};
	// cout<<"Address of first element of array is "<<arr<<"\n";
	// cout<<arr[0]<<"\n";
	// cout<<"Address of first memeory block id "<<&arr[0]<<"\n";
	// cout<<"4th "<<*arr<<"\n";
	// cout<<"5th "<<*arr+1<<"\n";
	// cout<<"6th "<<*(arr+1)<<"\n";
	// cout<<"7th "<<*(arr) + 1<<"\n";
	// cout<<"8th "<<arr[2]<<"\n";
	// cout<<"9th "<<*(arr + 2)<<"\n";
	// int temp[10] = {1,2};
	// cout<<sizeof(temp)<<"\n";
	// cout<<"1st "<<sizeof(*temp)<<"\n";
	// cout<<"2nd "<<sizeof(&temp)<<"\n";
	// int *ptr = &temp[0];
	// cout<<sizeof(ptr)<<"\n";
	// cout<<sizeof(*ptr)<<"\n";
	// cout<<sizeof(&ptr)<<"\n";
	// int a[20]  = {1,2,3,4};
	// cout<<&a[0]<<"\n";
	// cout<<&a<<"\n";
	// cout<<a<<"\n";

	// int *p = &a[0];
	// cout<<p<<"\n";
	// cout<<*p<<"\n";
	// cout<<&p<<"\n";
	// int arr[10];
	// int *ptr = &arr[0];
	// ptr = ptr+1;
	// cout<<ptr<<"\n";

	//Double Pointers

	int i = 5;
	int* ptr = &i;
	int** ptr2 = &ptr;

	// cout<<"Address of "<<i<<" is "<<&i<<"\n";
	// cout<<"Address of "<<ptr<<" is "<<&ptr<<"\n";
	// cout<<**ptr2<<"\n";
	// cout<<*ptr<<"\n";
	// cout<<i<<"\n";

	cout<<"Before "<<i<<"\n";
	cout<<"Before "<<ptr<<"\n";
	cout<<"Before "<<ptr2<<"\n";
	update(ptr2);
	cout<<"After "<<i<<"\n";
	cout<<"After "<<ptr<<"\n";
	cout<<"After "<<ptr2<<"\n";
	return 0;
} 	