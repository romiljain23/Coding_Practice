//Q.1 given an array containing 0s 1s and 2s. U have to sort the given array without using any sort function
//Q.2 accept a string from the user and count the number of vowels and consonant
//Q.3 accept the string from user . Convert lowercase to upper and vice versa considering string has any digits
//Q.4 accept the string from user and count the presence of vowel+consonant

#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    //Sol.1
    int arr[100],n,temp;
    cout<<"Enter the number of elements in array :";
    cin>>n;
    cout<<"Unsorted Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sorted array"<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>=arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    //Sol.2
    /*string nm;
    int v=0,c=0;
    cout<<"Enter any string :";
    cin>>nm;
    for(int i=0;i<nm.length();i++)
    {
        if(nm[i]=='A'||nm[i]=='E'||nm[i]=='I'||
           nm[i]=='O'||nm[i]=='U'||nm[i]=='a'||
           nm[i]=='e'||nm[i]=='i'||nm[i]=='o'||
           nm[i]=='U')
        {
         v++;
        }
        else
            c++;
    }
    cout<<"Total Vowels are : "<<v<<endl;
    cout<<"Total Consonants are : "<<c<<endl;
    return 0;*/

    //Sol.3
    /*string nm;
    cout<<"Enter string : ";
    cin>>nm;
    for(int i=0;i<nm.length();i++)
    {
        if(nm[i]>='A' && nm[i]<='Z')
        {
            nm[i]=nm[i]+32;
        }
        else if(nm[i]>='a' && nm[i]<='z')
        {
         nm[i]=nm[i]-32;
        }

    }
    cout<<"After toggling : "<<nm;*/

    //Sol.4
    /*string nm;
    int count=0;
    cout<<"Enter string : ";
    cin>>nm;
    for(int i=0;i<nm.length()-1;i++)
    {
        if(nm[i]=='A'||nm[i]=='E'||nm[i]=='I'||
           nm[i]=='O'||nm[i]=='U'||nm[i]=='a'||
           nm[i]=='e'||nm[i]=='i'||nm[i]=='o'||
           nm[i]=='u')
           {
               if(nm[i+1]!='A'||nm[i+1]!='E'||nm[i+1]!='I'||
                  nm[i+1]!='O'||nm[i+1]!='U'||nm[i+1]!='a'||
                  nm[i+1]!='e'||nm[i+1]!='i'||nm[i+1]!='o'||
                  nm[i]+1!='u')
                  {
                      count++;
                  }
           }
    }
    cout<<"Total adjacent vowels and consonants are : "<<count;*/


}
