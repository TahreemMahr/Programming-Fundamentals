using System;

namespace CafeOrderingSystem.Cart
{
    public class CartModel
    {
        private string foodname;

        private int foodprice;

        private int foodstock;


        // Constructor
        public CartModel(string name, int price, int stock)
        {
            foodname = name;
            foodprice = price;
            foodstock = stock;
        }

        // Food Name
        public string FOODNAME
        {
            get
            {

                return foodname;
            }
            set
            {

                foodname = value;
            }
        }

        // Food Price
        public int FOODPRICE
        {

            get
            {

                return foodprice;
            }
            set
            {

                foodprice = value;
            }
        }

        // Food Stock
        public int FOODSTOCK
        {
            get
            {

                return foodstock;
            }
            set
            {

                foodstock = value;
            }
        }

        // Calculate Subtotal
        public int SUBTOTAL
        {
            get
            {


                return foodprice * foodstock;
            }
        }
    }
}