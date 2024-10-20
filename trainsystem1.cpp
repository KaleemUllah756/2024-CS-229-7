#include <iostream>
using namespace std;

void show_trains();
void bookTicket(int trainchoice, int numseats);

int main() {
    int choice;
    do {
        cout << "   Train Ticketing System    " << endl;
        cout << "1. Show Available Tickets" << endl;
        cout << "2. Book Tickets" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                show_trains();
                break;
            case 2: {
                int trainchoice, numseats;
                show_trains();
                cout << "Enter train number to book seats: ";
                cin >> trainchoice;
                cout << "Enter the number of seats to book: ";
                cin >> numseats;
                bookTicket(trainchoice, numseats);
                break;
            }
            case 3:
                cout << "Exiting the system." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    } while (choice != 3);
    return 0;
}

void show_trains() {
    cout << "Available Trains:" << endl;
    cout << "1. Express 1 (Capacity: 100)" << endl;
    cout << "2. Express 2 (Capacity: 200)" << endl;
    cout << "3. Express 3 (Capacity: 150)" << endl;
}

void bookTicket(int trainchoice, int numseats) {
    const int capacities[] = {100, 200, 150};
    static int bookedseats[] = {0, 0, 0};

    if (trainchoice < 1 || trainchoice > 3) {
        cout << "Invalid train choice!" << endl;
        return;
    }

    int index = trainchoice - 1;
    if (bookedseats[index] + numseats <= capacities[index]) {
        bookedseats[index] += numseats;
        cout << "Successfully booked " << numseats << " seats on Express " << trainchoice << "." << endl;
    } else {
        cout << "Not enough seats available on Express " << trainchoice << "." << endl;
    }
}
