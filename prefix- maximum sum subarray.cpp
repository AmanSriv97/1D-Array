/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    
    int prefix[n+1];
    
    prefix[0]=0;
    
    for(int i=1;i<=n;i++)
    {
        prefix[i]= prefix[i-1]+arr[i-1];
        
    }
    
    int maxsum= INT_MIN;
    
    for(int i=0; i<n;i++)
    {
        int sum=0;
        
        maxsum= max(maxsum,prefix[i]);
        
        for(int j=1; j<=i;j++)
        {
            prefix[i]= prefix[i]- prefix[j-1];
            maxsum= max(maxsum,prefix[i]);
            
        }
        
    }
    
    cout<<maxsum;
    
    

    return 0;
}
