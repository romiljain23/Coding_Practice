//sum of array
//min and max

#include <iostream>

using namespace std;

int main()
{
    int a[5],sum=0;
    //cout<<"Enter the size of array : ";
    //cin>>n;
    cout<<"Enter elements in array : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[0]<a[i])
            a[0]=a[i];
    }

    cout<<"Sum of elements of array : "<<sum<<endl;
    cout<<"max is : "<<a[0];
}
