// Name            : Tushar Mittal
// Roll No.        : 2010990739
// Set No.         : 3
// Question Number : 2

#include <bits/stdc++.h>
using namespace std;

void checkPairSum(int *arr, int n, int target)
{
    // Using Brute-force solution
    // Running i from 0 to n - 1
    for (int i = 0; i < n; i++)
    {
        // Running j from i to n - 1
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Pair found (" << arr[i] << ", " << arr[j] << ")" << endl;
                return;
            }
        }
    }
    cout << "Pair not found" << endl;
    return;
}

int main()
{
    // n: size of input array, target = pair to find
    int n, target;
    cout << "Please input size of input array: ";
    cin >> n;
    cout << "Please input target sum value: ";
    cin >> target;
    // taking array input
    cout << "Please input space separated array elements: ";
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // find the pair:
    checkPairSum(arr, n, target);
    return 0;
}
