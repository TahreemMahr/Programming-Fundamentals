using System;
using System.Collections.Generic;
using CafeOrderingSystem.Customers;

namespace CafeOrderingSystem.Customers
{
    public class CustomerService
    {
        private CustomerRepository repository = new CustomerRepository();


        private List<CustomerModel> customers = new List<CustomerModel>();


        // Load Customers
        public void LoadCustomers()
        {
            customers = repository.LoadCustomers();
        }

        // Get All Customers
        public List<CustomerModel> GetCustomers()
        {
            return customers;
        }

        // Add Customer
        public bool AddCustomer(CustomerModel customer)
        {
            if (customer == null)
            {
                return false;
            }

            if (customer.CustomerName == "")
            {
                return false;
            }

            customers.Add(customer);

            repository.SaveCustomers(customers);

            return true;
        }

        // Delete Customer
        public bool DeleteCustomer(int customerId)
        {
            bool found = false;


            for (int i = 0; i < customers.Count; i++)
            {
                if (customers[i].Customerid == customerId)
                {
                    customers.RemoveAt(i);


                    repository.SaveCustomers(customers);


                    found = true;
                    break;

                }
            }

            if (found == true)
            {
                return true;

            }
            else
            {
                return false;

            }
        }
    }
}