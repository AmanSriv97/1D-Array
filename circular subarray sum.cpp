/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;

int kadane(int arr[], int n)
{
    int sum=0;
    int maxsum=INT_MIN;
    
    for(int i=0; i<n;i++)
    {
        sum=sum+arr[i];
        
        if(sum<0)
        {
            sum=0;
        }
        
        maxsum=max(maxsum,sum);
    }
    
    return maxsum;
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    
    int nonwrapsum=0;
    
    nonwrapsum= kadane(arr,n);
    
    // find total sum of subarray
    
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=arr[i];
        arr[i]=-arr[i];
    }
    
    int final=0;
    
    final= total+kadane(arr,n);

    cout<<max(final,nonwrapsum);
    

    return 0;
}
