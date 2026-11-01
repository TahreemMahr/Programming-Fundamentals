using System;
using System.Collections.Generic;
using System.Text;
using System.IO;

namespace CafeOrderingSystem.Products
{
    public class ProductRepository
    {
        private string filepath = "menu.txt";
        //save products into file
        public void SaveProducts(List<ProductModel> products)
        {
            using (StreamWriter writer = new StreamWriter(filepath))
            {
                foreach (ProductModel product in products)
                {

                    writer.WriteLine(
                        product.FOODNAME + "|" +
                        product.FOODPRICE + "|" +
                        product.FOODSTOCK + "|" +
                        product.FOODCATEGORY
                        );


                }
            }
        }
        // Load food from file
        public List<ProductModel> LoadProducts()
        {
            List<ProductModel> products = new List<ProductModel>();

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
                        string category = data[3];

                        ProductModel product = new ProductModel(
                            name,
                            price,
                            category,
                            stock
                        );

                        products.Add(product);
                    }
                }
            }

            return products;
        }

    }
}