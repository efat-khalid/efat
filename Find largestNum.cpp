#include<iostream>
using namespace std;
int main()
{


    int a[5]={1,2,3,4,5};
    int i,large=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>large)
        {


            large=a[i];
        }
    }
    cout<<large;

    return 0;
}
