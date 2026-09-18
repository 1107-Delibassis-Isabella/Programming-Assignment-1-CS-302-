#include "Resource.h"
#include "Inventory.h"
#include "Book.h"
#include "Laptop.h"
#include "StudyRoom.h"


int main() {
    int choice, count; 
    Resource* resources[20];
    Inventory <int> IDs;
    Inventory <Book*> books;


    cout << "===== Resourge Manager =====" << endl; 
    cout << endl << "1. Add Book" << endl; 
    cout << "2. Add Laptop" << endl; 
    cout << "3. Add Study Room" << endl;
    cout << "4. Display Resources" << endl;
    cout << "5. Display Total Cost" << endl; 
    cout << "6. Template Demo" << endl; 
    cout << "7. Exit" << endl;

    cin >> choice; 

    while (choice > 7 || choice < 1) {
        cout << "Incorrect choice, please try again" << endl;
        cin >> choice;
    } 
    while (choice != 7) {
    if (choice == 1) {
        int id, numPages;
        string name, author;

        cout << "Enter id of book: " << endl;
        cin >> id;
        cout << "Enter name of book: " << endl;
        cin >> name;
        cout << "Enter author of book: " << endl;
        cin >> author;
        cout << "Enter number of pages: " << endl;
        cin >> numPages; 
        resources[count] = new Book(id, name, author, numPages);
        Book* b = new Book(id, name, author, numPages);
        IDs.add(id);
        books.add(b);
        count++;
    } else if (choice == 2) {
        int id, hoursUsed; 
        double hourlyRate;
        string name;
        
        cout << "Enter id of laptop: " << endl;
        cin >> id;
        cout << "Enter name of laptop: " << endl;
        cin >> name;
        cout << "Enter hourly rate of laptop: " << endl;
        cin >> hourlyRate;
        cout << "Enter number of hours laptop has been used: " << endl;
        cin >> hoursUsed; 
        resources[count] = new Laptop(id, name, hourlyRate, hoursUsed);
        IDs.add(id);
        count++;
    } else if (choice == 3) {
        int id, occupancy; 
        double reservationFee;
        string name;

        cout << "Enter id of study room: " << endl;
        cin >> id;
        cout << "Enter name of study room: " << endl;
        cin >> name;
        cout << "Enter the study room's reservation fee: " << endl;
        cin >> reservationFee;
        cout << "Enter occupancy of study room: " << endl;
        cin >> occupancy; 
        resources[count] = new StudyRoom(id, name, reservationFee, occupancy);
        IDs.add(id);
        count++;
    } else if (choice == 4) {
        cout << "Resource List" << endl;
        for (int i = 0; i < 20; i++) {
            if (resources[i] != NULL) {
                resources[i]->display();
                cout << endl;
            }
        }
    } else if (choice == 5) {
        double totalCost = 0;
        for (int i = 0; i < 20; i++) {
            if (resources[i]) {
                totalCost+=resources[i]->usageCost();
            }
        }
        cout << "Total Usage Cost: $" << totalCost << endl;
    } else if (choice == 6) {
        IDs.displayAll();
    }
    cout << "===== Resourge Manager =====" << endl; 
    cout << endl << "1. Add Book" << endl; 
    cout << "2. Add Laptop" << endl; 
    cout << "3. Add Study Room" << endl;
    cout << "4. Display Resources" << endl;
    cout << "5. Display Total Cost" << endl; 
    cout << "6. Template Demo" << endl; 
    cout << "7. Exit" << endl;
    cin >> choice;

    }

    return 0;
}
