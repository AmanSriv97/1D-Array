/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void MaxtillI(int arr[], int n)
{
    int mx=-19999999;
    
    int count =0;
    
    for(int i=0; i<n;i++)
    {   
        
        
        if (arr[i]>arr[i+1] && arr[i]>=mx)
        {
            count = count+1;
            mx=max(mx,arr[i]);
        }
        
        
    }
    
    cout<<count;
}


int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    MaxtillI(arr,n);
    
    
    
    return 0;
}
