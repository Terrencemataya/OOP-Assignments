#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 10;

void displaySeats(bool seats[ROWS][COLS]) {
    cout << "Seating Arrangement:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << (seats[i][j] ? "[X]" : "[ ]") << " ";
        }
        cout << endl;
    }
}

bool bookSeat(bool seats[ROWS][COLS], int row, int col) {
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
        cout << "Invalid seat selection.";
        return false;
    }
    if (seats[row][col]) {
        cout << "Seat already booked!";
        return false;
    }
    seats[row][col] = true;
    cout << "Seat booked successfully!";
    return true;
}

int main() {
    bool seats[ROWS][COLS] = {false};
    int option, row, col;

    do {
        cout << "1. Display Seats\n2. Book Seat\n3. Exit\nEnter your option: ";
        cin >> option;
        switch (option) {
            case 1:
                displaySeats(seats);
                break;
            case 2:
                cout << "Enter row and column to book (0-4 for rows and 0-9 for columns): ";
                cin >> row >> col;
                bookSeat(seats, row, col);
                break;
            case 3:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid option. Please try again.";
        }
    } while (option != 3);

    return 0;
}