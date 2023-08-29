#include<iostream>
using namespace std;

int main() {
    char a[] = "aaerosppace";
    int H[26] = {0};

    for (int i = 0; a[i] != '\0'; i++) {
        H[a[i] - 97] += 1;
    }

    for (int i = 0; a[i] != '\0'; i++) {
        if (H[a[i] - 97] > 1) {
            cout << "Duplicate found for character '" << a[i] << "' at position(s): ";
            for (int j = i; a[j] != '\0'; j++) {
                if (a[j] == a[i]) {
                    cout << j << " ";
                }
            }
            cout << endl;

            // Reset the count to avoid duplicates
            H[a[i] - 97] = 0;
        }
    }

    return 0;
}
