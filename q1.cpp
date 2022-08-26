// Name            : Tushar Mittal
// Roll No.        : 2010990739
// Set No.         : 3
// Question Number : 1

#include <bits/stdc++.h>
using namespace std;

void alternateSwap(int *arr, int n) {
    // First sorting the array using STL sort():
    sort(arr, arr + n);

    if (n > 2){
        // We'll be swapping every alternate element (starting with the third) with its previous element
        // so that every alternative element of array becomes greater than its left and right
        for (int i = 2; i < n; i += 2) {
            swap(arr[i], arr[i - 1]);
        }
    }
}

int main(){
    // n: size of input array, target = pair to find
    int n, target;
    cout << "Please input size of input array: ";
    cin >> n;
    // taking array input
    cout << "Please input space separated array elements: ";
    int arr[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // generate the updated array ↓
    alternateSwap(arr, n);

    // printing the updated array:
    cout << "{";
    for(int i = 0; i < n; i++){
        cout << arr[i];
        if (i < n - 1){
            cout << ", ";
        }
    }
    cout << "}" << endl;
    return 0;
}
