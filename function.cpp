#include<iostream>
using namespace std;
void sum()                      /*function defined here*/
{
    cout<<2+3;
}
int main()                       /*we define main function in middle*/
   {
    sum();
    
  
    return 0;
}



#include<iostream>
using namespace std;                        /*c++ me pehle function ko define kiya jata h then declare kiya jata*/

void sum();
int main() 
   {
    sum();
    
  
    return 0;
}
void sum()
{
    cout<<2+3;
}


#include<iostream>
using namespace std;
void avg();
int main() 
   {
    avg();
    return 0;
}
void avg()
{
  int i,sum=0,avg1;
  for(i=1;i<=10;i++)
  {
      sum+=i;
  }
  
      avg1=sum/10;
      cout<<avg1;
  
}
