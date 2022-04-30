/*Q.1 Given an array, cyclically rotate the array clockwise by one.

Examples:

Input:  arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}*/

/*Q.2
 1
 0  1
 1  0  1
 0  1  0  1
 1  0  1  0  1
 0  1  0  1  0  1
 */

 /*Q.3
 * * * * *
 *       *
 *       *
 *       *
 * * * * *
 */





#include <iostream>

using namespace std;

int main()
{
    //Sol.1
    /*int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) /
            sizeof(arr[0]);

    cout << "Given array is \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';

    int x = arr[n - 1];
    for (i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
    arr[0] = x;

    cout << "\nRotated array is\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';*/


    //Sol.2
   /* int a,b;
    for(int i=0;i<6;i++)
    {
        if(i%2==0)
        {
            a=1;
            b=0;
        }
        else
        {
            a=0;
            b=1;
        }
        for(int j=0;j<=i;j++)
        {
            if(j%2==0)
                cout<<a;
            else
                cout<<b;
        }
        cout<<"\n";
    }*/

    //Sol.3
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout<<"*"<<" ";
            else
                cout<<" "<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
