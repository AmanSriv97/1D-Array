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
    
    cin>> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
         cin>> arr[i];
    }
    
    int N= 199;
    int idx[N];
    
    for(int i=0;i<N; i++)
    {
        idx[i]=-1;
    }
    
    int minindx= 1000;
    
    for(int i=0;i<n;i++)
    {
        if (idx[i]!= -1)
        {
            minindx= min(minindx, idx[i]);
        }
        
        else
        {
            idx[arr[i]]= arr[i];
        }
    }
    
    cout<<minindx+1<<endl;

    return 0;
}
