using System;
using System.Collections.Generic;
using CafeOrderingSystem.Orders;

namespace CafeOrderingSystem.Orders
{

    public class OrderUI
    {

        private OrderService service = new OrderService();


        // Order Menu
        public void OrderMenu()
        {

            service.LoadOrders();


            while (true)
            {

                Console.WriteLine("\n===== ORDER MENU =====");
                Console.WriteLine("1. Add Order");
                Console.WriteLine("2. View Orders");
                Console.WriteLine("3. Delete Order");
                Console.WriteLine("4. Exit");

                Console.Write("Enter Choice: ");
                int choice = int.Parse(Console.ReadLine());


                if (choice == 1)
                {

                    AddOrder();
                }
                else if (choice == 2)
                {

                    ViewOrders();
                }
                else if (choice == 3)
                {

                    DeleteOrder();
                }
                else if (choice == 4)
                {

                    Console.WriteLine("Exiting Order Menu...");
                    break;
                }
                else
                {

                    Console.WriteLine("Invalid Choice!");
                }
            }
        }

        // Add Order
        public void AddOrder()
        {
            OrderModel order = new OrderModel();


            Console.Write("Enter Order ID: ");
            order.OrderId = int.Parse(Console.ReadLine());


            Console.Write("Enter Customer ID: ");
            order.CustomerId = int.Parse(Console.ReadLine());


            Console.Write("Enter Product Name: ");
            order.ProductName = Console.ReadLine();


            Console.Write("Enter Quantity: ");
            order.Quantity = int.Parse(Console.ReadLine());


            Console.Write("Enter Total Amount: ");
            order.TotalAmount = decimal.Parse(Console.ReadLine());


           

            bool result = service.AddOrder(order);

            if (result == true)
            {

                Console.WriteLine("Order Added Successfully!");
            }
            else
            {

                Console.WriteLine("Order Not Added!");
            }
        }

        // View Orders
        public void ViewOrders()
        {
            List<OrderModel> orders = service.GetOrders();

            if (orders.Count == 0)
            {

                Console.WriteLine("No Orders Available!");
            }
            else
            {

                for (int i = 0; i < orders.Count; i++)
                {
                    Console.WriteLine("\nOrder ID: " + orders[i].OrderId);
                    Console.WriteLine("Customer ID: " + orders[i].CustomerId);
                    Console.WriteLine("Product Name: " + orders[i].ProductName);
                    Console.WriteLine("Quantity: " + orders[i].Quantity);
                    Console.WriteLine("Total Amount: " + orders[i].TotalAmount);
                    

                    Console.WriteLine("-------------------------");
                }
            }
        }

        // Delete Order
        public void DeleteOrder()
        {
            Console.Write("Enter Order ID to Delete: ");
            int id = int.Parse(Console.ReadLine());

            bool result = service.DeleteOrder(id);

            if (result == true)
            {
                Console.WriteLine("Order Deleted Successfully!");

            }
            else
            {
                Console.WriteLine("Order Not Found!");

            }
        }
    }
}