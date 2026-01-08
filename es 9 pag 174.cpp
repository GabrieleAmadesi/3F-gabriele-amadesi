#include <iostream>
    using namespace std;
    int main() {
        int N;
        cin >> N;
        if (N <= 0) {
            return 0; 
        }
        int valore = 1;
        for (int i = 0; i < N; i++) {
            cout << valore << " ";
            valore *= 2;
        }
        return 0;
}
    