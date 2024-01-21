#include <iostream>
using namespace std;

int Highest_Value(int Number) {
    int A[10];
    int Count = 0;
    int max = 0;

    for (int i = 0; Number > 0; i++) {
        int dig = Number % 10;
        A[i] = dig;
        Number = Number / 10; // Update Number by dividing by 10
        Count++;
    }

    for (int i = 0; i < Count; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max; // Return the maximum value
}

int main() {
    int Number;
    cout << "Enter the Number:";
    cin >> Number;
    cout << "Highest digit is: " << Highest_Value(Number) << endl;
    return 0;
}
