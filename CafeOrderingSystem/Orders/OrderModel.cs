using System;
using System.Collections.Generic;
using System.Text;

namespace CafeOrderingSystem.Orders
{
    public class OrderModel
    {
        private int orderId;

        private int customerId;

        private string productName = "";

        private int quantity;

        private decimal totalAmount;

       

        

        public int OrderId
        {
            get {
                return orderId;
            }
            set { 
                orderId = value; 
            }
        }

        public int CustomerId
        {
            get {
                return customerId; 
            }
            set {
                customerId = value;
            }
        }

        public string ProductName
        {
            get {
                return productName; 
            }
            set {
                productName = value; 
            }
        }

        public int Quantity
        {
            get { 
                return quantity; 
            }
            set { 
                quantity = value;
            }
        }

        public decimal TotalAmount
        {
            get {
                return totalAmount; 
            }
            set {
                totalAmount = value;
            }
        }

        

      
    }
}