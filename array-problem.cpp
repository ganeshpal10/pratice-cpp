#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter array length";
    cout<<" "<<endl;
    cin>>n;
    int arr[n];
    
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        cout<<" ";
    }
    
    for (int i = 0; i < n ; i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                arr[j]=arr[j]+1;
            }
            
        }
               
    }
    
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}