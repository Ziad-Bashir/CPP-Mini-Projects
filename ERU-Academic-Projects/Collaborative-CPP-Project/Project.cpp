#include <iostream>
#include <iomanip>
using namespace std;

// ===== Functions =====

// Show The Menu
    void showMenu(string items[], float prices[], int size) {

        cout << "\n========== RESTAURANT MENU ==========\n";

        for (int i = 0; i < size; i++) {

            cout << i + 1 << ". "
                << left << setw(10) << items[i] 
                << " : " << prices[i] << " EGP\n";
        }

        cout << size + 1 << ". Finish Order\n";
    }

    // Calculate The Price of The Product
    float calculateItemTotal(float price, int quantity) {
        return price * quantity;
    }

    // Printing The Bill
    void printBill(
        string items[],
        float prices[],
        int quantities[],
        int size,
        float total
    ) {

        cout << "\n\n========== FINAL BILL ==========\n";

        cout << left
            << setw(15) << "Item"
            << setw(10) << "Qty"
            << setw(10) << "Price"
            << setw(10) << "Total"
            << endl;

        cout << "-----------------------------------------\n";

        for (int i = 0; i < size; i++) {

            if (quantities[i] > 0) {

                cout << left
                    << setw(15) << items[i]
                    << setw(10) << quantities[i]
                    << setw(10) << prices[i]
                    << setw(10) << prices[i] * quantities[i]
                    << endl;
            }
        }

        cout << "-----------------------------------------\n";
        cout << "Grand Total = " << total << " EGP\n";
    }

    // ===== Main Program =====

    int main() {

        // Arrays
        string items[] = {
            "Burger",
            "Pizza",
            "Fries",
            "Cola"
        };

        float prices[] = {
            80,
            120,
            40,
            25
        };

        int quantities[4] = {0};

        int size = 4;

        int choice, quantity;

        float total = 0;

        cout << "===== Welcome To Our Restaurant =====\n";

        while (true) {

            showMenu(items, prices, size);

            cout << "\nEnter your choice: ";
            cin >> choice;

            if (choice == size + 1) {
                break;
            }

            if (choice < 1 || choice > size) {

                cout << "Invalid choice!\n";
                continue;
            }

            cout << "Enter quantity: ";
            cin >> quantity;

            quantities[choice - 1] += quantity;

            total += calculateItemTotal(
                prices[choice - 1],
                quantity
            );

            cout << quantity << " "
                << items[choice - 1]
                << "(s) added successfully!"<<endl  ;
        }

        printBill(
            items,
            prices,
            quantities,
            size,
            total
        );

        cout << "\nThank You For Visiting Us\n";

        return 0;
    }