#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
     
    string nid, trainNumber, from, to;
    int ticketQuantity;
    const int ticketPrice = 695; 

   
    cout << "Welcome to Bangladesh Railway Ticketing System" << endl;
    cout << "Enter your NID number: ";
    cin >> nid;

    cout << "Enter train number: ";
    cin >> trainNumber;

    cout << "Enter starting station (From): ";
    cin.ignore();  
    getline(cin, from);

    cout << "Enter destination station (To): ";
    getline(cin, to);

    cout << "Enter ticket quantity: ";
    cin >> ticketQuantity;

  
    int totalBill = ticketQuantity * ticketPrice;

   
    cout << "\n--- Ticket Details ---" << endl;
    cout << "Passenger NID: " << nid << endl;
    cout << "Train Number: " << trainNumber << endl;
    cout << "From: " << from << endl;
    cout << "To: " << to << endl;
    cout << "Ticket Quantity: " << ticketQuantity << endl;
    cout << "Total Bill: " << totalBill << " BDT" << endl;

    cout << "\nThank you for using Bangladesh Railway Ticketing System!" << endl;

    return 0;
}
