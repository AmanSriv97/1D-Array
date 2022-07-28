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
    
    int sum=0;
    int maxsum= INT_MIN;
    
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];;
        
        if (sum<0)
        {
            sum=0;
        }
        
        maxsum= max(maxsum,sum);
    }
    
    cout<<maxsum;
    

    return 0;
}
