//Q.1 target=14 find the target from the array 4,2,3,5,8,6,10

//Q.2     *
//      * * *
//    * * * * *
//  * * * * * * *

//Q.3 *
//    * *
//    *   *
//    *     *
//    * * * * *

//Q.4 * * * * *
//      *     *
//        *   *
//          * *
//            *
#include <iostream>
#include<algorithm>
using namespace std;

//Sol.1
/*int main()
{

    int a[]={4,2,3,5,8,6,10};
    int n=sizeof(a)/sizeof(a[0]);
    int target=14,i=0,j=n-1;
    //Brute force approach
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==target)
                {
                    cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
                }
            }
    }

    //2-pointer approach
    sort(a,a+n);
    while(i<j)
    {
        if(a[i]+a[j]==target)
                {
                    cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
                }
        if(a[i]+a[j]<target)
            {
                i++;
            }
        else
            j--;

    }
    return 0;
}*/

//Sol.2
/*9int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=5-i-1;j>=0;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++)
            cout<<"*";
        for(int l=0;l<i;l++)
        {
            if(i==0)
                break;
            else
                cout<<"*";
        }
        cout<<"\n";
    }
}*/

//Sol.3
/*int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==0 || i==4 || i==j)
                cout<<"*"<<" ";
            else
                cout<<"  ";
        }
        cout<<"\n";
    }
}*/

//Sol.4
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==0 || j==4 || i==j)
                cout<<"*"<<" ";
            else
                cout<<"  ";
        }
        cout<<"\n";
    }
}

