using System;
using System.Collections.Generic;
using CafeOrderingSystem.Customers;

namespace CafeOrderingSystem.Customers
{

    public class CustomerUI
    {

        private CustomerService service = new CustomerService();


        public void CustomerMenu()
        {

            service.LoadCustomers();


            int choice = 0;


            while (choice != 3)
            {
                Console.WriteLine("\n===== CUSTOMER MENU =====");
                Console.WriteLine("1. Add Customer");
                Console.WriteLine("2. View Customers");
                Console.WriteLine("3. Exit");
                Console.Write("Enter Choice: ");


                choice = int.Parse(Console.ReadLine());


                if (choice == 1)
                {
                    AddCustomer();

                }
                else if (choice == 2)
                {
                    ViewCustomers();

                }
                else if (choice == 3)
                {
                    Console.WriteLine("Exiting Customer Menu...");

                }
                else
                {
                    Console.WriteLine("Invalid Choice!");

                }
            }
        }

        public void AddCustomer()
        {

            Console.Write("Enter Customer ID: ");
            int id = int.Parse(Console.ReadLine());


            Console.Write("Enter Customer Name: ");
            string name = Console.ReadLine();


            Console.Write("Enter Customer Phone Number: ");
            string phone = Console.ReadLine();


            Console.Write("Enter Customer Address: ");
            string address = Console.ReadLine();


            CustomerModel customer = new CustomerModel();


            customer.Customerid = id;
            customer.CustomerName = name;
            customer.CustomerPhoneNo = phone;
            customer.CustomerAddress = address;

            bool result = service.AddCustomer(customer);


            if (result == true)
            {

                Console.WriteLine("Customer Added Successfully!");

            }
            else
            {

                Console.WriteLine("Customer Not Added!");

            }
        }

        public void ViewCustomers()
        {

            List<CustomerModel> customers = service.GetCustomers();


            if (customers.Count == 0)
            {

                Console.WriteLine("No Customers Available!");

            }
            else
            {
                

                for (int i=0; i < customers.Count;i++)
                {
                    Console.WriteLine("\nCustomer ID: " + customers[i].Customerid);
                    Console.WriteLine("Customer Name: " + customers[i].CustomerName);
                    Console.WriteLine("Customer Phone: " + customers[i].CustomerPhoneNo);
                    Console.WriteLine("Customer Address: " + customers[i].CustomerAddress);

                    Console.WriteLine("-------------------------");

                    
                }
            }
        }
    }
}