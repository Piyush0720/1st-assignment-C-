#include<iostream>
using namespace std;
int main(){

int a ,b ;
cout<<"Enter two numbers : "<<endl;
cin>>a>>b;
if(a>b){
	cout<<"First number is greater than second."<<endl;
}
else if(b>a){
	cout<<"Second number is greater than first number ."<<endl;
}
else{
	cout<<"Please Enter again...";
}
return 0;
}

