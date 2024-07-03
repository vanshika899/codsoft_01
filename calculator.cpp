#include<iostream>

using namespace std;
double Add(double x,double y)
{
return x+y;
}
double Sub(double x,double y)
{
return x-y;
}
double Mul(double x,double y)
{
return x*y;
}
double Div(double x,double y)
{
if(y==0)
{
cout<<"value you entered is invalid. Please enter a valid input."<<endl;
return 0;
}
else
{
return x/y;
}
}
int main()
{
double num1,num2;
int choice;
cout<<"select the operation you want to perform:"<<endl;
cout<<"1.Addition.."<<endl;
cout<<"2.Subtraction.."<<endl;
cout<<"3.Multiplication.."<<endl;
cout<<"4.Division.."<<endl;
cout<<"Please choose  from the above  option for operation"<<endl;
cout<<"1/2/3/4"<<endl;
cin>>choice;
if(choice<=4&&choice>=1)
{
cout<<"Enter the first number:"<<endl;
cin>>num1;
cout<<"Enter the second number:"<<endl;
cin>>num2;
switch(choice)
{
case 1:
cout<<num1<<"+"<<num2<<"="<<Add(num1,num2)<<endl;
break;
case 2:
cout<<num1<<"-"<<num2<<"="<<Sub(num1,num2)<<endl;
break;
case 3:
cout<<num1<<"*"<<num2<<"="<<Mul(num1,num2)<<endl;
break;
case 4:
cout<<num1<<"/"<<num2<<"="<<Div(num1,num2)<<endl;
break;
}}
else
{
cout<<"Invaid Choice: Please enter again.."<<endl;
}
} 


