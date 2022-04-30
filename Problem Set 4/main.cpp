//Q.1 Check the number is of form power of 2
//Q.2 Check for pallendrome
//Q.3 Swapping adjecent

#include <iostream>
#include<math.h>


using namespace std;

//Sol.1
int main()
{
    int n,sn,newn,c=0;
    cin>>n;
    for(int i=0;i<(8*sizeof(int));i++)
    {
        sn=n>>i;
        newn=sn & 1;
}

//Sol.2
/*int main()
{
    int arr[]={10,20,30,30,20,10};
    int flag=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Pallindrome";
    }
    else
        cout<<"Not Pallindrome";


}*/


//Sol.3
/*int main()
{
    int a[]={10,20,30,50,60,70};
    cout<<"Before Swapping"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<6;i=i+2)
    {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    cout<<"\nAfter Swapping"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
}*/
