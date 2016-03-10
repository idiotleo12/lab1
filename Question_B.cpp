#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main(){

	int input_num;
	cout<<"Please input number:"<< endl ;
	cin>>input_num;
	cout<<input_num;

	float temp = input_num;

	while(temp != 1)
	{
		float num = temp/2;
		if (num -(int)num == 0)
			temp = temp/2;      //even
	    else
	        temp = temp*3+1;    //odd

	    cout<<setw(3)<<temp;
	    //system("pause");
	}
	
	cout<<"\nfinished."<<endl;
	return 0;
}

