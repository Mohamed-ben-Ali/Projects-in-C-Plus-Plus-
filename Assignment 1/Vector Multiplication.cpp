#include<iostream>
using namespace std;

int main(void){

	int x[10];
	int i;
	long Products=1;
	for(int i=0; i<10; i++){

		cout<<"Please Enter X ["<<i<<"]: \n";
		cin>>x[i];

	}
	for(int i=0; i<10; i++){

		cout<<"X["<<i<<"] ="<<x[i]<<"\n";
	}

	for(int i=0; i<10; i++){
		Products*= x[i] ;
	}


	cout<<"The Vector Products ="<<Products<<"\n";

	return 0;
}