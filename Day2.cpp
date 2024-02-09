#include<iostream>
using namespace std;
int main()
{
  int a,b,c,average;
  cout<<"enter 1st number: ";
  cin>>a;
  cout<<"enter 2nd number: ";
  cin>>b;
  cout<<"enter 3rd number: ";
  cin>>c;
  average= (a+b+c)/2;
  cout<<average;
  
  
   return 0;
    
    
    
}

//increment & decrement

#include<iostream>
using namespace std;
int main()
{
   int a,b;
//   cin>>a>>b;
//   a++;
//   b--;
//   cout<<a<<b;
cout<<"enter value of a :";
cin>>a;
cout<<"enter value of b :";
cin>>b;
a++;
b--;
cout<<"output is :"<<a<<"\n "<<b;
   return 0;



//increment & decrement

#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<"enter your age: ";
  cin>>age;
  if(age>=18)
  {
      cout<<"you are eligible for voting";
     
  }
  else{
      cout<<"you are not eligible for voting";
  }
  
  
   return 0;


//increment & decrement

#include<iostream>
using namespace std;
int main()
{
  int number;
  cout<<"enter a number: ";
  cin>>number;
  if(number%2==0)
  {
      cout<<number<<" is even number";
     
  }
  else{
      cout<<number<<" is odd number";
  }
  
  
   return 0;
}