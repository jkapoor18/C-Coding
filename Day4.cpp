#include<iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;
    
    cout << "Enter dividend number: ";
    cin >> dividend;
    
    cout << "Enter divisor number: ";
    cin >> divisor;

    quotient = dividend / divisor;
    cout << "Quotient: " << quotient<<"\n";

    remainder = dividend % divisor;  
    cout << "Remainder: " << remainder;

    return 0;
}


#include<iostream>
using namespace std;

int main() {
    int i;
    for(i=1;i<=5;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}



#include<iostream>
using namespace std;

int main() {
    int i;
    for(i=1;i<=10;i++)
    {
      if(i%2==0)
      {
      cout<<i<<endl;
      }
    }
    return 0;
}

#include<iostream>
using namespace std;

int main() {
    int i;
    for(i=1;i<=10;i++)
    {
      cout<<4<<"*"<<i<<"="<<4*i<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

int main() {
    int i,num;
    cout<<"enter number: ";
    cin>>num;
    for(i=1;i<=10;i++)
    {
      cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    return 0;
}


#include<iostream>
using namespace std;

int main() {
    int i,sum=0;
    for(i=5;i<=30;i++)
    {
      if(i%2 != 0)
      {
      sum = sum+i;
      }
    }
    cout<<"Sum is:"<<sum;
    return 0;
}


#include<iostream>
using namespace std;

int main() {
    int i=5,sum=0;
    while(i<=30)
    {
      if(i%2 != 0)
      {
      sum = sum+i;
      }
      i++;
    }
    cout<<"Sum is:"<<sum;
    return 0;
}
