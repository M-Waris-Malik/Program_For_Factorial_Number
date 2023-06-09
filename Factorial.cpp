#include <iostream>
using namespace std;

 int fact(int n){
 	if(n==0){
 		return 1;
	 }
	 return n* fact(n-1);
 }

int main(){
	cout<<"<<<<< C++ Program For Factorial >>>>>"<<endl;
	cout<<"-------------------------------------"<<endl;
	while(true){
		int choice;
		cout<<"Enter 1 for factorial or 0 for exit "; cin>>choice;
		
		if(choice==1){
			system("cls");
			int num;
		cout<<"Enter Positive Integer: "; cin>>num;
		if(num < 0){
			cout<<"Error! Enter positive integer"<<endl<<endl;
		}
		else{
			int x= fact(num);
		cout<<"Factorial of No: "<<num<<" = "<<x<<endl<<endl;
		}
		}
		else if(choice==0){
			exit(0);
		}
		
	}//while
}//main
