#include <iostream>
using namespace std;

void input(int len, int wth);
void print(int len, int wth);


// Do not change the main() function
int main() {
    int length = 10, width = 5;
    input(length, width);
    print(length, width);
    return 0;
}

// Do not change the print() function
void print(int len, int wth) {
    cout << "Length : " << len
        << ", Width  : " << wth << endl;
}

// Implement the Input Function here
void input(int length, int width) {
   cout << "Enter the length :- ";
    cin >> length;
   cout << "Enter the width :- ";
    cin >> width;
    {
        cout << "Length : " << length
            << ", Width  : " << width << endl;
    }
}