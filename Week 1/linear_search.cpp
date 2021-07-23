#include <iostream>

using namespace std;

int linear(int *arr, int n, int key)
{
    int cmp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            cout << "Present " << cmp;

        cmp++;
    }

    return 0;
}

int main()
{
    int t, n;

    cin >> t;

    while (t)
    {
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];
        int key;

        cin >> key;

        linear(arr, n, key);

        t--;
    }

    return 0;
}