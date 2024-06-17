#include <bits/stdc++.h>
using namespace std ;

void generateBinarySequences(int n,vector<char>& sequence, int index) {
    if (index == n) {
        for (char c : sequence)
        cout << c;
        cout <<endl;
        return;
    }

    // G?i d? quy v?i '0' va '1' ? v? tri index
    sequence[index] = '0';
    generateBinarySequences(n, sequence, index + 1);

    sequence[index] = '1';
    generateBinarySequences(n, sequence, index + 1);
}

void generateBinarySequences(int n) {
    vector<char> sequence(n);
    generateBinarySequences(n, sequence, 0);
}

int main() {
    int n; // D? dai day nh? phan
    cout<< " Nhap do dai day nhi phan : ";
    cin >> n ; 
    generateBinarySequences(n);
    return 0;
}