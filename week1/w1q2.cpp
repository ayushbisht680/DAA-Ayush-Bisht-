//Ayush Bisht
//binary search: searching the sorted array by repeatedly dividing the search interval in half.

#include <bits/stdc++.h>
using namespace std;

int searchEle(vector<int>arr ,int low, int high, int key)
{
    while (low <= high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==key) return mid;

        else if(arr[mid] > key) high=mid-1;

        else low=mid+1;  
    }
    
    return -1;
}

int main()
{
    int n;
    cout << "enter the  size of sorted array ";
    cin>>n;

    vector<int>arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key; 

    cout << "enter the no. to be searched";
    cin >> key;
     
     int ans=searchEle(arr,0,n-1, key);

    if (ans== -1)
    {
        cout << key << "is not present in the array";
    }
    else
    {
        cout << key << "is present at loaction" << ans;
    }
    return 0;
}