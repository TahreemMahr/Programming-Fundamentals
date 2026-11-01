using System;
using System.Collections.Generic;
using System.IO;

namespace CafeOrderingSystem.Cart
{

    public class CartRepository
    {
        private string filepath = "cart.txt";

        // Save Cart
        public void SaveCart(List<CartModel> cart)
        {

            using (StreamWriter writer = new StreamWriter(filepath))
            {

                foreach (CartModel item in cart)
                {

                    writer.WriteLine(
                        item.FOODNAME + "|" +
                        item.FOODPRICE + "|" +
                        item.FOODSTOCK
                    );
                }
            }
        }

        // Load Cart
        public List<CartModel> LoadCart()
        {
            List<CartModel> cart = new List<CartModel>();

            if (File.Exists(filepath))
            {
                using (StreamReader reader = new StreamReader(filepath))
                {
                    string line;

                    while ((line = reader.ReadLine()) != null)
                    {
                        string[] data = line.Split('|');


                        string name = data[0];

                        int price = int.Parse(data[1]);

                        int stock = int.Parse(data[2]);

                        CartModel item = new CartModel(
                            name,
                            price,
                            stock

                        );


                        cart.Add(item);
                    }
                }
            }

            return cart;
        }

        
    }
}