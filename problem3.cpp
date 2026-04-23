#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char **list = new char*[5];

    const char* words[5] = {"alpha", "bravo", "charlie", "delta", "echo"};

    for (int i = 0; i < 5; i++) {
        list[i] = new char[strlen(words[i]) + 1];
        strcpy(list[i], words[i]);
    }

    for (int i = 0; i < 5; i++) {
        cout << list[i] << endl;
    }

    for (int i = 0; i < 5; i++) {
        if (strcmp(list[i], "delta") == 0) {
            cout << "Found at index: " << i << endl;
        }
    }

    delete[] list[1];
    list[1] = new char[strlen("blueberry") + 1];
    strcpy(list[1], "blueberry");

    for (int i = 0; i < 5; i++) {
        cout << list[i] << endl;
    }

    int index = 2;

    delete[] list[index];
    for (int i = index; i < 4; i++) {
        list[i] = list[i + 1];
    }

    for (int i = 0; i < 4; i++) {
        cout << list[i] << endl;
    }

    for (int i = 0; i < 4; i++) {
        delete[] list[i];
    }
    delete[] list;

    return 0;
}