#include <iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int maxSum=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
        int sum=0;
          for(int k=i;k<=j; k++)
          {
              sum+=arr[k];
            // cout<<arr[k]<<" ";
          }
         // cout<<endl;
         maxSum=max(maxSum,sum);
        }

    cout<<maxSum<<endl;
    }
}
    return 0;
}

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
    if(arr[0]<arr[i]);
    arr[0]=arr[i];// array number sum
    }
    {
        cout<<arr[0]<<" ";
    }
  return 0;
}
5*/