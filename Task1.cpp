#include<iostream>
#include<string>

using namespace std;

int main()
{
    int book_counter = 0;
    string user_name, book_name;
    bool check = false;
    cout << "Enter Your Name: ";
    getline(cin, user_name);


    while (check == false)
    {
        cout << "\nBooks\n";
        cout << "\nBorrow 0";
        cout << "\nReturn 1";
        cout << "\nFine 2";
        cout << "\nQuit 3";

        int choice;
        cin >> choice;
        if (choice == 0)
        {
            if (book_counter <= 3)
            {
                cout << "\nbook name: ";
                cin.ignore();
                getline(cin, book_name);
                cout << "\nThe Book "" << book_name << "" has been issued" << endl;
                book_counter++;

            }
        }
        else if (choice == 1)
        {
            cout << "\nReturn Section";
        }
        else if (choice == 2)
        {
            cout << "Fine Check";
        }
        else if (choice == 3)
        {
            return 0;
        }
        else
        {
            cout << "You Entered A Wrong Choice\n\n";
            check = false;
        }
    }
    return 0;
}