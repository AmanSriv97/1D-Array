/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

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
    
    int maxsum= -199999;
    
    for(int i=0; i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            
            for(int k=i; k<=j;k++)
            {
                sum+=arr[k];
            }
            
            maxsum= max(maxsum,sum);
        }
    }
    
    cout<<maxsum<<endl;

    return 0;
}
