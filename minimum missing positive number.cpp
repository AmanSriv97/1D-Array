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
    
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int N= 1999;
    int check[N];
    
    for(int i =0; i<N; i++)
    {
        check[i]= 0;
    }
    
    for(int i=0; i<n;i++)
    {
        if (arr[i]>0)
        {
            check[arr[i]]= 1;
        }
    }
    
    
    
    for(int i=1; i<N; i++)
    {
        int ans=0;
        if (check[i]==0)
        {
            ans=i;
            cout<<ans;
            break;
            
        }
    }
     
    

    return 0;
}
