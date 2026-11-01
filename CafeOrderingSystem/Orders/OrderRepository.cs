using System;
using System.Collections.Generic;
using System.IO;

namespace CafeOrderingSystem.Orders
{
    public class OrderRepository
    {
        private string filePath = "orders.txt";


        // Save Orders
        public void SaveOrders(List<OrderModel> orders)
        {

            using (StreamWriter writer = new StreamWriter(filePath))
            {

                foreach (OrderModel order in orders)
                {

                    writer.WriteLine(
                        order.OrderId + "|" +
                        order.CustomerId + "|" +
                        order.ProductName + "|" +
                        order.Quantity + "|" +
                        order.TotalAmount 
                        

                    );
                }
            }
        }

        // Load Orders
        public List<OrderModel> LoadOrders()
        {

            List<OrderModel> orders = new List<OrderModel>();


            if (File.Exists(filePath))
            {

                using (StreamReader reader = new StreamReader(filePath))
                {

                    string line;


                    while ((line = reader.ReadLine()) != null)
                    {

                        string[] data = line.Split('|');


                        OrderModel order = new OrderModel();


                        order.OrderId = int.Parse(data[0]);
                        order.CustomerId = int.Parse(data[1]);
                        order.ProductName = data[2];
                        order.Quantity = int.Parse(data[3]);
                        order.TotalAmount = decimal.Parse(data[4]);
                       


                        orders.Add(order);

                    }
                }
            }

            return orders;
        }
    }
}