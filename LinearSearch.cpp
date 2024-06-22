#include<iostream>
using namespace std;
int main()
{
    int A[10],i,n;

    cout<<"input n"<<endl;
    cin>>n;
    cout<<"input Arr\n";

    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" " ;
    }
    cout<<endl;

   /* while(i<n)
    {
        cout<<"h"<<" ";
        i++;
    }*/
    cout<<"number u search"<<endl;
    int s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s==A[i])
            break;

    }
    cout<<"index"<<i ;


    return 0;
}
