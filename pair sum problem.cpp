/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;


// Note the array should always be sorted in ascending order.

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    
    int start=0;
    int key;
    cin>>key;
    int end= n-1;
    
    while(start<end)
    {
        if ((arr[start]+arr[end])==key)
        {
            cout<<start<<" "<<end;
            return true;
        }
        
        else if ((arr[start]+ arr[end])> key)
        {
            end--;
        }
        
        else
        {
            start++;
        }
    }
    
    return false; 
    return 0;
}
