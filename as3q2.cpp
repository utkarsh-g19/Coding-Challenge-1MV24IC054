#include <iostream>
using namespace std;

void reverseString(char s[], int length) {
    int left = 0;
    int right = length - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char s[100];

    cout << "Enter a string: ";
    cin.getline(s, 100);
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    reverseString(s, length);

    cout << "Reversed string: " << s << endl;

}
