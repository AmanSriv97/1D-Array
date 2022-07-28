/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void SumSubarray(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {   
        int sum=0;
        
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            cout<<sum<< endl;
        }
    }
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
    
    SumSubarray(arr,n);
    
    
    
    return 0;
}
