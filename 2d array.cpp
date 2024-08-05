#include <iostream>
using namespace std;
int main ()
{
	int stu=2;
	int sub =5;
	int marks[stu][sub];
	int sum=0;
	for(int i=0;i<stu;i++)
	{
		for(int j=0;j<sub;j++)
		{
		
	    	cout<<"enter marks of student"<<i+1<<":";
		    cin>>marks[i][j];
        }

	}
	cout<<endl;
	
	for(int i=0;i<stu;i++)
	{
		cout<<"student id:"<<i+1<<":-->";
		for(int j=0;j<sub;j++)
		{
			cout<<marks[i][j]<<"\t";
			sum =sum+marks[i][j];
			
		}
		
	}
	cout<<"\t total marks:"<<sum<<"\t"<<float(sum)/5<<"%"<<"no of back log:"<<endl;
	sum =0;
	
}