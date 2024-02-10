//Class structure:
#include<iostream>
using namespace std;

class fruit
{
 public:            //access specifier
 string name;       //Data mumber
 int n;
 void print()     //member function
 {

    cout<<"fruit name:"<<name;
 }
};
int main()
{
  fruit obj;
  obj.name = "Apple";
  obj.print();
  return 0;
}





