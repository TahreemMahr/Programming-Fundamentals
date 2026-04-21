#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    cout << "----------------------------------" << endl;
    cout << "-------CAFE ORDERING SYSTEM-------" << endl;
    cout << "----------------------------------" << endl;

    // cout << "User menu " << endl;
    // cout << "1.Admin Dashboard " << endl;
    // cout << "2.Customer Dashboard " << endl;
    // cout << "3.Exit " << endl;
    // cout << "Enter Choice: ";
    // string choice;
    // cin >> choice;

    // cout << "You Choose " << choice << endl;
    int count = 100;
    string food_item[count] = {"burger", "pizza"};
    int food_price[count] = {150, 1500};
    int food_stock[count] = {10, 15};
    string order_name[count] = {"burger", "pizza"};
    int order_quantity[count] = {15, 20};
    int order_price[count] = {1500, 2000};

    string customer_choice;
    string order_category[count];

    while (true)
    {
        system("cls");
        cout << "User menu " << endl;
        cout << "1.Admin Dashboard " << endl;
        cout << "2.Customer Dashboard " << endl;
        cout << "3.Exit " << endl;
        cout << "Enter Choice: ";
        string choice;
        cin >> choice;
        //================= ADMIN =================

        if (choice == "1")
        {
            cout << "\n=====ADMIN DASHBOARD=====\n";
            cout << "1.Add Food Item \n";
            cout << "2.View Menu \n";
            cout << "3.Update Item \n ";
            cout << "4.Delete Item \n ";
            cout << "5.Search Item \n ";
            cout << "6.View All Orders \n ";
            cout << "7.View Order History \n ";
            cout << "8.Sales Report \n ";
            cout << "9.Clear All Orders \n ";
            cout << "10.Logout \n ";
            string admin_choice;
            cin >> admin_choice;
            // Add Food Item
            if (admin_choice == "1")
            {
                cout << "\n---ADD FOOD ITEM ---\n";
                cout << "How many food items you want to store: ";
                int total_food_items;
                cin >> total_food_items;
                for (int i = 0; i < total_food_items; i++)
                {
                    cout << "Enter the names: ";
                    cin >> food_item[i];
                    cout << "Enter the prices: ";
                    cin >> food_price[i];
                    cout << "Enter food stock: ";
                    cin >> food_stock[i];
                }
                getch();
                // View Menu
            }
            else if (admin_choice == "2")
            {
                cout << "\n------ MENU ------\n";
                for (int i = 0; i < count; i++)
                {
                    if (food_item[i] != "")
                    {
                        cout << food_item[i] << " " << food_price[i] << " " << food_stock[i] << " " << endl;
                    }
                }
                getch();
            }

            // Update Item
            else if (admin_choice == "3")
            {
                cout << "\n------ UPDATE FOOD ITEM ------\n";
                cout << "Enter the names of food items you want to upate: ";
                string update_item;
                cin >> update_item;
                for (int i = 0; i < count; i++)
                {

                    if (update_item == food_item[i])
                    {
                        cout << "Enter the food_price: ";
                        cin >> food_price[i];
                        cout << "Enter the food_stock: ";
                        cin >> food_stock[i];
                    }
                }
                getch();
            }

            else if (admin_choice == "4")
            { // Delete Item
                cout << "\n------ DELETE ITEM ------\n";
                cout
                    << "Enter the food_item you want to delete: ";
                string delete_item;
                cin >> delete_item;
                for (int i = 0; i < count; i++)
                {
                    if (delete_item == food_item[i])
                    {
                        food_item[i] = "";
                        food_stock[i] = 0;
                        food_price[i] = 0;
                    }
                }
                getch();
            }
            // Search Items
            else if (admin_choice == "5")
            {
                cout << "\n------ SEARCH ITEM ------\n";
                cout << "Enter the food_item you want to search: ";
                string search_item;
                cin >> search_item;
                for (int i = 0; i < count; i++)
                {
                    if (search_item == food_item[i])
                    {
                        cout << food_item[i] << " " << food_price[i] << " " << food_stock[i] << " " << endl;
                    }
                }
                getch();
            }
            // View All Order
            else if (admin_choice == "6")
            {
                cout << "\n------ VIEW ALL ORDER ------\n";
                else if (admin_choice == "6")
                {
                    cout << "\n------ ALL CURRENT ORDERS ------\n";

                    for (int i = 0; i < count; i++)
                    {
                        if (order_quantity[i] > 0)
                        {
                            cout << order_name[i] << " | Qty: "
                                 << order_quantity[i] << endl;
                        }
                    }

                    getch();
                }
            }
            // Order History
            else if (admin_choice == "7")
            {
                else if (admin_choice == "7")
                {
                    cout << "\n------ ORDER HISTORY ------\n";

                    for (int i = 0; i < history_count; i++)
                    {
                        cout << history_name[i] << " | Qty: "
                             << history_quantity[i] << endl;
                    }

                    getch();
                }
            }
            // Sales Report
            else if (admin_choice == "8")
            {
                else if (admin_choice == "8")
                {
                    cout << "\n------ SALES REPORT ------\n";
                    int total_sales = 0;

                    for (int i = 0; i < history_count; i++)
                    {
                        total_sales += history_price[i] * history_quantity[i];
                    }

                    cout << "Total Sales = " << total_sales << endl;
                    getch();
                }
            }
            // Clear All Orders
            else if (admin_choice == "9")
            {
                else if (admin_choice == "9")
                {
                    for (int i = 0; i < count; i++)
                    {
                        order_name[i] = "";
                        order_quantity[i] = 0;
                        order_price[i] = 0;
                    }

                    cout << "All current orders cleared!\n";
                    getch();
                }
            }
            // Logout
            else if (admin_choice == "10")
            {
                break;
            }
            //================= CUSTOMER =================
        }
        else if (choice == "2")
        {
            cout << "\n===== CUSTOMER DASHBOARD=====\n";
            cout << "1.View Menu \n ";
            cout << "2.Search Item \n ";
            cout << "3.Filtet by Category \n ";
            cout << "4.Add to Cart \n ";
            cout << "5.Remove from Cart \n ";
            cout << "6.Update quantity \n ";
            cout << "7.View Cart \n ";
            cout << "8.View Bill \n ";
            cout << "9.Checkout/Place Order \n ";
            cout << "10.Order History \n ";

            cin >> customer_choice;
            // View Menu
            if (customer_choice == "1")
            {
                cout << "\n------ MENU ------\n";
                cout << "Enter the order_name you want to view in menu: ";
                string view_name;
                cin >> view_name;

                for (int i = 0; i < count; i++)
                {

                    if (order_name[i] == view_name)
                    {

                        cout << "item Found: " << order_name[i] << "\n";
                        cout << "price: " << order_price[i] << "\n";
                        cout << "quantity: " << order_quantity[i] << "\n";
                    }
                }
                getch();
            }
            // Search Item
            else if (customer_choice == "2")
            {
                cout << "\n------ SEARCH ITEM ------\n";
                cout << "Enter the food item you want to search: ";
                string search_item;
                cin >> search_item;
                cin.ignore();
                getline(cin, search_item);
                bool found = false;

                for (int i = 0; i < count; i++)
                {
                    if (order_name[i] == search_item)
                    {
                        cout << "\nItem Found!" << endl;
                        cout << "Name: " << order_name[i] << endl;
                        cout << "Price: " << order_price[i] << endl;
                        cout << "Quantity: " << order_quantity[i] << endl;
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    cout << "\nSorry,item not found." << endl;
                }
                getch();
            }
        }
        // Filter Category
        else if (customer_choice == "3")

        {

            string filter_cat;
            bool found = false;

            cout << "\n------ FILTER BY CATEGORY ------\n";
            cout << "Enter category to filter: ";

            cin >> filter_cat;

            for (int i = 0; i < count; i++)
            {
                if (order_category[i] == filter_cat)
                {
                    cout << "\nItem: " << order_name[i]
                         << "\tPrice: " << order_price[i]
                         << "\tquantity: " << order_quantity[i] << endl;
                    found = true;
                }
            }

            if (!found)
            {
                cout << "No items found in category: " << filter_cat << endl;
            }
            getch();
            // Add to Cart
        }
        else if (customer_choice == "4")
        {
            cout << "Enter the food_item you want to add: ";
            string add_item;
            cin >> add_item;
            for (int i = 0; i < count; i++)
            {
                if (add_item == food_item[i])
                {
                    order_name[i] = food_item[i];
                    order_price[i] = food_price[i];

                    cout << "Enter how many " << food_item[i] << " you want to buy: ";
                    cin >> order_quantity[i];
                    cout << order_name[i] << " " << order_quantity[i] << " " << endl;
                }
            }
            getch();
        }
        // Remove Item
        else if (customer_choice == "5")
        {
            cout << "\n------ REMOVE ITEM ------\n";
            cout << "Enter the food item you want to remove: ";
            string remove_item;
            cin >> remove_item;
            for (int i = 0; i < count; i++)
            {

                if (remove_item == food_item[i])

                {

                    order_name[i] = "";
                    order_quantity[i] = 0;
                    order_price[i] = 0;
                    cout << "Item removed from cart!" << endl;
                }
            }
            getch();
        }
        // Check out
        else if (customer_choice == "6")
        {
            cout << "\n------ UPDATE QUANTITY ------\n";
            cout << "Enter the orders_item you want to update: ";
            string update_item;

            cin >> update_item;
            for (int i = 0; i < count; i++)
            {
                if (update_item == order_name[i])
                {
                    cout << "update quantity: ";
                    cin >> order_quantity[i];
                }
            }
            getch();
        }

        // Order History
        else if (customer_choice == "7")
        {
            else if (customer_choice == "7")
            {
                cout << "\n------ YOUR CART ------\n";
                for (int i = 0; i < count; i++)
                {
                    if (order_quantity[i] > 0)
                    {
                        cout << order_name[i] << " \tQty: " << order_quantity[i]
                             << " \tPrice: " << order_price[i] << endl;
                    }
                }
                getch();
            }
        }
        // View Bill
        else if (customer_choice == "8")
        {
            {
                cout << "\n------ BILL DETAILS ------\n";
                int total = 0;

                for (int i = 0; i < count; i++)
                {
                    if (order_quantity[i] > 0)
                    {
                        int item_total = order_price[i] * order_quantity[i];
                        cout << order_name[i] << " x " << order_quantity[i]
                             << " = " << item_total << endl;

                        total += item_total;
                    }
                }

                cout << "----------------------\n";
                cout << "TOTAL BILL = " << total << endl;
                getch();
            }
        }
        // Update Quantity
        else if (customer_choice == "9")
        {
            int total = 0;

            for (int i = 0; i < count; i++)
            {
                if (order_quantity[i] > 0)
                {
                    total = total + (order_price[i] * order_quantity[i]);
                }
            }

            cout << "Your Total Bill = " << total << endl;
            getch();
        }
        // Back
        else if (customer_choice == "10")
        {
            else if (customer_choice == "10")
            {
                cout << "\n------ ORDER HISTORY ------\n";

                for (int i = 0; i < history_count; i++)
                {
                    cout << history_name[i] << " | Qty: " << history_quantity[i]
                         << " | Price: " << history_price[i] << endl;
                }

                getch();
            }
        }
        else if (choice == "3")
        {
            break;
        }
    }
}
