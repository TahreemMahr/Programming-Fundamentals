#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int TOTAL_STUDENTS = 1000; // total size
    int index = 2;

    // data structures
    string nameArray[TOTAL_STUDENTS] = {"ali", "ammar"};
    int ageArray[TOTAL_STUDENTS] = {19, 20};
    float matricArray[TOTAL_STUDENTS] = {1050, 890};
    float interArray[TOTAL_STUDENTS] = {980, 850};
    float ecatArray[TOTAL_STUDENTS] = {350, 280};
    string pref1Array[TOTAL_STUDENTS] = {"CE", "CS"};
    string pref2Array[TOTAL_STUDENTS] = {"CS", "CE"};
    string pref3Array[TOTAL_STUDENTS] = {"EE", "CS"};
    float aggriArray[TOTAL_STUDENTS];
    // CRUD Create,Read,Update,Delete

    while (true)
    { // main header of ums
        system("cls");
        cout << "----------------------------------------------------" << endl;
        cout << "-------University Admission Management System-------" << endl;
        cout << "----------------------------------------------------" << endl;

        cout << "User menu " << endl;
        cout << "1 Admin " << endl;
        cout << "2 Student" << endl;
        cout << "3 to Exit " << endl;
        cout << "Choose option: ";
        int userOption;
        cin >> userOption;

        cout << "You choose " << userOption << endl;
      
                if (username == "admin" && password == "123")
                {  if (userOption == 1)
        {
            // write here the admin code

            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin menu: Login attempt " << i + 1 << endl;

                cout << "Enter username: ";

                string username;
                cin >> username;
                cout << "Enter password: ";
                string password;
                cin >> password;
                    cout << "Login Success" << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "1 Show all students " << endl;
                        cout << "2 Search Student " << endl;
                        cout << "3 Update student record " << endl;
                        cout << "4 Generate Merit list " << endl;
                        cout << "5 Delete Record by Name " << endl;
                        cout << "6 Logout" << endl;
                        cout << "Choose the option: ";
                        int adminoption;
                        cin >> adminoption;
                        if (adminoption == 1)
                        {
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;

                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t" << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }

                        else if (adminoption == 2)
                        {
                            // find student by name ;
                            cout << "Enter the name you want to search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < index; i = i + 1)
                            {

                                if (nameArray[i] == name)
                                {
                                    foundindex = i;

                                    found = true;
                                    break;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found  against name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminoption == 3)
                        {
                            // update reccord
                            cout << "Enter the name you want to update recorde of  : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < index; i = i + 1)
                            {

                                if (nameArray[i] == name)
                                {
                                    foundindex = i;

                                    found = true;
                                    break;
                                }
                            }
                            if (found == true)

                            {
                                cout << "-----Old Record-----" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;

                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                                cout << "Enter new record for update " << endl;
                                cout << "Enter your name: ";
                                string name;
                                cin >> name;
                                int age;

                                cout << "Enter age: ";

                                cin >> age;
                                float matric;
                                cout << "Enter Matric Marks: ";

                                cin >> matric;
                                cout << "Enter FSC marks: ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter ECAT marks: ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS,CE,EE as your preferences" << endl;
                                cout << "Enter your Ist pref: " << endl;
                                string pref1;
                                cin >> pref1;

                                cout << "Enter your 2nd pref: " << endl;
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd pref: " << endl;
                                string pref3;
                                cin >> pref3;
                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminoption == 4)
                        {

                            // generate merit list
                            for (int i = 0; i < index; i = i + 1)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100 + 0.4 + ecatArray[i] / 400.0 * 100 * 0.3;
                                aggriArray[i] =aggri; 
                            }
                            // code to display all data with aggregate{
                            cout << "Name\tAge" << endl;

                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] != "")
                                {

                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" <<aggriArray[i] << endl;
                                }
                            }
                        }

                        else if (adminoption == 5)
                        {

                            // delete student record
                            cout << "Enter the name you want to delete of  : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < index; i = i + 1)
                            {

                                if (nameArray[i] == name)
                                {
                                    foundindex = i;

                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of " << name << " Deleted " << endl;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminoption == 6)
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected" << endl;
                        }
                        cout << "Press any key to contine..";
                        getch();

                    } // end of admin while(true)

                }
                else
                {
                    cout << "Username or password invalid " << endl;
                }
                cout << "Press anykey to continue..";
                getch();
                break;

            } // end of login for loop
        }
        else if (userOption == 2)
        {

            // write here the student code
            cout << "Welcome to UMS Student Menu" << endl;
            cout << "Enter your name: ";
            string name;
            cin >> name;
            cout << "Enter age: ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks: ";
            float matric;
            cin >> matric;
            cout << "Enter FSC marks: ";

            float fsc;
            cin >> fsc;
            cout << "Enter ECAT marks: ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS,CE,EE as your preferences" << endl;
            cout << "Enter your Ist pref: " << endl;
            string pref1;
            cin >> pref1;

            cout << "Enter your 2nd pref: " << endl;
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd pref: " << endl;
            string pref3;
            cin >> pref3;
            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;

            cout << "Your data has been saved ";
            cout << "Press anykey to continue..";

            getch();
        }
        else if (userOption == 3)
        {
            break;
        }
        else
        {
            cout << "You entered wrong option " << endl;
        }

    } // end of main while(true)

    // end of our main while loop
    cout << endl
         << "Thanks for using this software";
}