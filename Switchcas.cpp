// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a values from 1 to 7: ";
    cin>>n;
    switch(n)
    {
        case 1: if(n==1)
        {
            cout<<"Monday";
        }
        break;
        case 2: if(n==2)
        {
            cout<<"Tuesday";
        }
        break;
        case 3: if(n==3)
        {
            cout<<"wednesday";
        }
        break;
        case 4: if(n==4)
        {
            cout<<"Thursday";
        }
        break;
        case 5: if(n==5)
        {
            cout<<"Friday";
        }
        break;
        case 6: if(n==6)
        {
            cout<<"Saturday";
        }
        break;
        case 7: if(n==7)
        {
            cout<<"Sunday";
        }
        break;
        
        default:
        cout<<"Wromg Input....";                //by default use if we enter wrong number it save us to give error in output
        break;
    }

    return 0;
}

//combination of while with switch
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
   
    while(n!=10)
    {
    cout<<"\nEnter a values from 1 to 7: "<<endl;
    cin>>n;
    switch(n)
    {
        case 1: if(n==1)
        {
            cout<<"Monday";
        }
        break;
        case 2: if(n==2)
        {
            cout<<"Tuesday";
        }
        break;
        case 3: if(n==3)
        {
            cout<<"wednesday";
        }
        break;
        case 4: if(n==4)
        {
            cout<<"Thursday";
        }
        break;
        case 5: if(n==5)
        {
            cout<<"Friday";
        }
        break;
        case 6: if(n==6)
        {
            cout<<"Saturday";
        }
        break;
        case 7: if(n==7)
        {
            cout<<"Sunday";
        }
        break;
        
        default:
        cout<<"Wromg Input....";
        break;
    }
}
    return 0;
}