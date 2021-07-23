#include <iostream>

using namespace std;

int binary(int *arr, int n, int key)
{

    int s = 0, e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            s = mid + 1;

        else
            e = mid - 1;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }

        int key;

        cin >> key;

        int ans = binary(arr, n, key);

        if (ans == -1)
            cout << "NOt present" << endl;
        else
            cout << "Present" << endl;

        t--;
    }
}
