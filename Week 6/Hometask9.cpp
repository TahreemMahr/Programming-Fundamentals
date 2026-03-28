#include <iostream>
using namespace std;

int main()
{
    string books[100];
    bool borrowed[100];
    int count = 0;
    int choice = 0;

    while (choice != 5)
    {

        cout << "\n===== Library Menu =====" << endl;
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. View Available Books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int n;
            cout << "How many books to add: ";
            cin >> n;
            cin.ignore();

            for (int i = 0; i < n; i++)
            {
                cout << "Enter book name: ";
                getline(cin, books[count]);
                borrowed[count] = false;
                count++;
            }
        }
        else if (choice == 2)
        {
            cout << "\nAll Books:" << endl;
            for (int i = 0; i < count; i++)
            {
                cout << i + 1 << ". " << books[i];
                if (borrowed[i] == true)
                    cout << " (Borrowed)";
                cout << endl;
            }
        }
        else if (choice == 3)
        {
            int num;
            cout << "Enter book number to borrow: ";
            cin >> num;

            if (num > 0 && num <= count)
            {
                if (borrowed[num - 1] == false)
                {
                    borrowed[num - 1] = true;
                    cout << "Book borrowed!" << endl;
                }
                else
                {
                    cout << "Already borrowed!" << endl;
                }
            }
            else
            {
                cout << "Invalid number!" << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "\nAvailable Books:" << endl;
            for (int i = 0; i < count; i++)
            {
                if (borrowed[i] == false)
                {
                    cout << i + 1 << ". " << books[i] << endl;
                }
            }
        }
        else if (choice == 5)
        {
            cout << "Exit..." << endl;
        }
        else
        {
            cout << "Wrong choice!" << endl;
        }
    }

    return 0;
}