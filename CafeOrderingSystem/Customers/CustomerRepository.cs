using System;
using System.Collections.Generic;
using System.IO;

namespace CafeOrderingSystem.Customers
{

    public class CustomerRepository
    {

        private string filepath = "customers.txt";

        // Save customers into file

        public void SaveCustomers(List<CustomerModel> customers)
        {

            using (StreamWriter writer = new StreamWriter(filepath))
            {

                foreach (CustomerModel customer in customers)
                {


                    writer.WriteLine(

                        customer.Customerid + "|" +
                        customer.CustomerName + "|" +
                        customer.CustomerPhoneNo + "|" +
                        customer.CustomerAddress

                    );
                }
            }
        }

        // Load customers from file
        public List<CustomerModel> LoadCustomers()
        {

            List<CustomerModel> customers = new List<CustomerModel>();

            if (!File.Exists(filepath))
                return customers;

            using (StreamReader reader = new StreamReader(filepath))
            {
                string line;

                while ((line = reader.ReadLine()) != null)
                {

                    string[] data = line.Split('|');

              
                    CustomerModel customer = new CustomerModel
                    {
                        Customerid = int.Parse(data[0]),
                        CustomerName = data[1],
                        CustomerPhoneNo = data[2],
                        CustomerAddress = data[3]

                    };


                    customers.Add(customer);

                }
            }

            return customers;
        }
    }
}