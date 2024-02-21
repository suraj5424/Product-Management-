#include <iostream>
#include <string>

using namespace std;

// limit of 10 products only
int maxiproducts = 10;
string products[10];
int prices[10];
int item_count = 0; // current count of items in the list

// function to add a new product and its price to the list
void add() {
    if (item_count < maxiproducts) {
        cout << "enter the product name: ";
        cin >> products[item_count];
        cout << "enter the product price: ";
        cin >> prices[item_count];
        item_count++; // increase item count after adding
        cout << "product added successfully!" << endl;
    } else {
        cout << "maximum number of items reached!" << endl;
    }
}

// function to display the current list of items and their prices
void show() {
    if (item_count == 0) {
        cout << "no items found in the list." << endl;
        return;
    }

    cout << "current items in the list:" << endl;
    for (int i = 0; i < item_count; ++i) {
        cout << "product: " << products[i] << ", price: " << prices[i] << endl;
    }
}

// function to sort the items based on their prices
void sort(string arr1[], int arr2[], int item_count) {
    string tmp_str;
    int tmp_int;
    string sorted_arr1[10];
    int sorted_arr2[10];

    // copying original values to prevent overwriting in further process
    for (int i = 0; i < item_count; i++) {
        sorted_arr1[i] = arr1[i];
        sorted_arr2[i] = arr2[i];
    }

    // sorting items based on prices (using bubble sort algorithm)
    for (int i = 0; i < item_count; i++) {
        for (int j = i + 1; j < item_count; j++) {
            if (sorted_arr2[i] > sorted_arr2[j]) {
                // swapping product names and prices for sorting
                tmp_str = sorted_arr1[i];
                sorted_arr1[i] = sorted_arr1[j];
                sorted_arr1[j] = tmp_str;

                tmp_int = sorted_arr2[i];
                sorted_arr2[i] = sorted_arr2[j];
                sorted_arr2[j] = tmp_int;
            }
        }
    }

    // updating original arrays with sorted values and displaying the sorted list
    for (int i = 0; i < item_count; i++) {
        arr1[i] = sorted_arr1[i];
        arr2[i] = sorted_arr2[i];
    }
    int x = 0;
    while (x < item_count) {
        cout << arr1[x] << " is worth " << arr2[x] << " euro." << endl;
        x++;
    }
}

int main() {
    int choice = 0;

    while (choice != 5) {
        cout << "\nMenu:\n";
        cout << "1. Add item\n";
        cout << "2. Show items\n";
        cout << "3. Sort items\n";
        cout << "4. Display total items\n";
        cout << "5. Exit\n";
        cout << "enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                show();
                break;
            case 3:
                sort(products, prices, item_count);
                cout << "\nproducts sorted by price.\n";
                break;
            case 4:
                cout << "total items in the list: " << item_count << endl;
                break;
            case 5:
                cout << "have a nice day. see you soon." << endl;
                break;
            default:
                cout << "invalid choice. please enter a valid option." << endl;
                break;
        }
    }

    return 0;
}
