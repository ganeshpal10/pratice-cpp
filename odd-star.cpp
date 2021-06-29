#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a odd number from 3 to 99";
    cin>>n;
    cout<<endl;

    if(n>=3 && n<=99 && (n%2!=0))
    {
        for(int i = n;i>=1;i-=2)
        {
            for (int j = 1; j <= n-i; j++)
            {
                cout<<" ";
            }
            for (int k = 1; k <= i; k++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Enter a valid number";
    }

    return 0;
}