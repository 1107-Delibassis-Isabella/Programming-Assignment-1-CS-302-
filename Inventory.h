#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
using namespace std;

template <class T>

class Inventory {
    private: 
        T items[20];

    public: 
        void add(const T& item) {
            //int count = 0;
            int size = findSize();
            if (size <= 19) {
                items[size] = item;
            }
            //items[count] = item;
            
        }
        void removeLast() {
            int count = 0;
            if (items[0] == nullptr) {
                cout << "There are no items in the list to remove" << endl;
            } else {
            for (int i = 0; i < 20; i++) {
                if (items[i] != nullptr) {
                    count++;
                }
            }   
            }
        }
        int findSize() const {
            for (int i = 0; i < 20; i++) {
                if (!items[i]) {
                    return i;
                }
            }
            return 0;
        }
        void displayAll() const {
            for (int i = 0; i < 20; i++) {

            }
        }


};
#endif
