#include<iostream>
using namespace std;
int main(){
	int a[5];
	cout<<"Enter the Elements:"<<"\n";
	for(int i=0;i<5;i++)
	cin>>a[i];
	cout<<"The Elements are:"<<"\n";
	for(int i=0;i<5;i++)
	cout<<"\n"<<*(a+i);
	
	
	return 0;
}
