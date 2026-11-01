using System;
using System.Collections.Generic;

namespace CafeOrderingSystem.Orders
{

    public class OrderService
    {

        private OrderRepository repository = new OrderRepository();


        private List<OrderModel> orders = new List<OrderModel>();


        // Load Orders
        public void LoadOrders()
        {
            orders = repository.LoadOrders();

        }

        // Get All Orders
        public List<OrderModel> GetOrders()
        {
            return orders;

        }

        // Add Order
        public bool AddOrder(OrderModel order)
        {
            if (order == null)
            {
                return false;

            }

            if (order.ProductName == "")
            {
                return false;

            }

            if (order.Quantity <= 0)
            {
                return false;

            }

            orders.Add(order);

            repository.SaveOrders(orders);


            return true;
        }

        // Delete Order
        public bool DeleteOrder(int orderId)
        {
            bool found = false;

            for (int i = 0; i < orders.Count; i++)
            {
                if (orders[i].OrderId == orderId)
                {

                    orders.RemoveAt(i);

                    repository.SaveOrders(orders);


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