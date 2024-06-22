#include<iostream>
using namespace std;
int main()
{


    int a[5]={1,2,3,4,5};
    int i,smallest=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]<smallest)
        {


            smallest=a[i];
        }
    }
    cout<<smallest;

    return 0;
}
