// Ayush Bisht
// linear search used to find whether the given no. is present or not if present then at what location it occurs.
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int key, n;
    cout << "enter the size of array";
    cin >> n;
    vector<int> arr(n);
    bool flag = false;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == key)
        {
            cout << "Element Found at index"
                 << " " << i;
            flag = true;
            break;
        }
    }

    if (flag == false)
    {
        cout << "Elelemnt not found";
    }
}
