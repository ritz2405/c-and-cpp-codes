#include<bits/stdc++.h>
using namespace std;
int main()
{
	int trainee[3][3];
	int max=0;
	int average[3]={0};
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>trainee[i][j];
			if(trainee[i][j]<1 && trainee[i][j]>100)
			{
				trainee[i][j] = 0;
			}
		}
	}
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			average[i] = average[i]+trainee[j][i];
		}
		average[i] = average[i]/3;
	}
	for(int i=0; i<3; i++)
	{
		if(average[i] > max)
		{
			max = average[i];
		}
	}
	for(int i=0; i<3;i++)
	{
		if(average[i] == max)
		{
			cout<<"Trainee : "<<i+1<<"\n";
		}
		if(average[i] < 70)
		{
			cout<<"Trainee unfit";
		}
	}
}