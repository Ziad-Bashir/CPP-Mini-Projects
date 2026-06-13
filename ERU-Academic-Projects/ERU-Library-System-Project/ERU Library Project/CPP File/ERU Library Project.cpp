#include <iostream>
using namespace std;

int main()
{
string bookTitles[100];
bool isAvailable[100];
int bookCount = 0;
int choice;
do
{

    cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Borrow Book\n";
        cout << "4. Exit\n";
    cout << "Enter the Number Of Your Choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter The Name of Book : ";
        cin.ignore();
        getline(cin, bookTitles[bookCount]);
        isAvailable[bookCount] = true;
        bookCount++;
        cout << "Book Added Successfully!\n";
        break;
    case 2:
        cout << "===== Library Books =====\n";

        for(int i = 0; i < bookCount; i++)
        {
            cout << "- Book Name: " << bookTitles[i] << "\n";
            if(isAvailable[i] == true)
            {
                cout << " (Available)\n";
            } else
            {
                cout << "- (Borrowed)\n";
            }
        }
    break;
    case 3:
        {
        string searchName;
        bool isFound = false;
        cout << "Enter Book Name To Borrow\n";
        cin.ignore();
        getline(cin, searchName);

            for(int i = 0; i < bookCount; i++)
        {
            if(searchName == bookTitles[i])
            {
                isFound = true;
                if(isAvailable[i] == true)
                {
                    isAvailable[i] = false;
                    cout << " The Book Borrowed Successfully\n";

                } else
                {
                    cout << "- (Borrowed)\n";
                }
                break;
            } 
        }
        if(isFound == false)
        {
            cout << "Book is not found in The Library.\n";
        }
    }
    break;

    case 4:
        cout << "Thank You For Using The Library System, Goodbye\n";
    break;
    // default:
        break;
    }
} while (choice != 4);




    return 0;
}