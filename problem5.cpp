#include <iostream>
using namespace std;

int main() {
    int X[] = {1, 4, 3, 5, 2};
    int n = sizeof(X) / sizeof(X[0]);

    int min = X[0];
    int max = X[0];

    for (int i = 1; i < n; i++) {
        if (X[i] > max)
            max = X[i];
        else if (X[i] < min)
            min = X[i];
    }

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}