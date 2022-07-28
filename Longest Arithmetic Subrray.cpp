/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void Longestsubarray(int arr[], int n)
{
    int ans=2;
    int pd= arr[1]-arr[0];
    int count=2;
    int j=2;
    
    while(j<n)
    {
        if (pd==arr[j]- arr[j-1])
        {
            count+=1;
            
        }
        else
        {
            pd= arr[j]-arr[j-1];
            count=2;
        }
        
        ans= max(ans, count);
        
        j++;
    }
        
    cout<<ans;
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
    
    Longestsubarray(arr,n);
    
    
    
    return 0;
}
