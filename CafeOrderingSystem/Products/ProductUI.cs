using System;
using System.Collections.Generic;

namespace CafeOrderingSystem.Products
{
    public class ProductUI
    {
        private ProductService service;

        // Constructor
        public ProductUI(ProductService productService)
        {

            service = productService;
        }

        // Main Product Menu
        public void ShowProductMenu()
        {

            while (true)
            {

                Console.Clear();

                Console.WriteLine("-----------------------------------");
                Console.WriteLine("       PRODUCT MANAGEMENT");
                Console.WriteLine("-----------------------------------");

                Console.WriteLine("1. Add Product");
                Console.WriteLine("2. View All Products");
                Console.WriteLine("3. Search Product");
                Console.WriteLine("4. Update Product");
                Console.WriteLine("5. Delete Product");
                Console.WriteLine("6. Back to Main Menu");


                Console.Write("\nEnter Your Choice: ");

                string choice = Console.ReadLine();


                if (choice == "1")
                {

                    AddProductUI();
                }
                else if (choice == "2")
                {

                    ViewProductsUI();
                }
                else if (choice == "3")
                {

                    SearchProductUI();
                }
                else if (choice == "4")
                {

                    UpdateProductUI();
                }
                else if (choice == "5")
                {

                    DeleteProductUI();
                }
                else if (choice == "6")
                {

                    break;
                }
                else
                {

                    Console.WriteLine("Invalid Choice!");
                    Pause();
                }
            }
        }

        // 1. Add Product UI
        public void AddProductUI()
        {
            Console.Clear();


            Console.WriteLine("--------- ADD PRODUCT ---------");

            Console.Write("Enter Food Name: ");
            string name = Console.ReadLine();


            Console.Write("Enter Food Price: ");
            int price = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter Food Category: ");
            string category = Console.ReadLine();


            Console.Write("Enter Food Stock: ");
            int stock = Convert.ToInt32(Console.ReadLine());


            ProductModel product = new ProductModel(

                name,
                price,
                category,
                stock
            );

            bool result = service.AddProduct(product);

            if (result == true)
            {

                Console.WriteLine("\nProduct Added Successfully!");
            }
            else
            {
                Console.WriteLine("\nProduct Already Exists!");
            }

            Pause();
        }

        // 2. View All Products UI
        public void ViewProductsUI()
        {
            Console.Clear();

            Console.WriteLine("--------- ALL PRODUCTS ---------");

            List<ProductModel> products = service.ViewProducts();

            if (products.Count == 0)
            {

                Console.WriteLine("\nNo Products Available!");
            }
            else
            {
                foreach (ProductModel product in products)
                {
                    Console.WriteLine("--------------------------------");
                    Console.WriteLine("Food Name: " + product.FOODNAME);
                    Console.WriteLine("Food Price: " + product.FOODPRICE);
                    Console.WriteLine("Food Category: " + product.FOODCATEGORY);
                    Console.WriteLine("Food Stock: " + product.FOODSTOCK);
                }

                Console.WriteLine("--------------------------------");
            }

            Pause();
        }

        // 3. Search Product UI
        public void SearchProductUI()
        {
            Console.Clear();


            Console.WriteLine("--------- SEARCH PRODUCT ---------");

            Console.Write("Enter Food Name: ");

            string name = Console.ReadLine();

            ProductModel product = service.SearchProduct(name);

            if (product != null)
            {
                Console.WriteLine("\nProduct Found!");


                Console.WriteLine("Food Name: " + product.FOODNAME);
                Console.WriteLine("Food Price: " + product.FOODPRICE);
                Console.WriteLine("Food Category: " + product.FOODCATEGORY);
                Console.WriteLine("Food Stock: " + product.FOODSTOCK);

            }
            else
            {
                Console.WriteLine("\nProduct Not Available!");

            }

            Pause();
        }

        // 4. Update Product UI
        public void UpdateProductUI()
        {

            Console.Clear();

            Console.WriteLine("--------- UPDATE PRODUCT ---------");

            Console.Write("Enter Food Name You Want to Update: ");
            string name = Console.ReadLine();

            Console.Write("Enter New Food Price: ");
            int price = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter New Food Stock: ");
            int stock = Convert.ToInt32(Console.ReadLine());

            bool result = service.UpdateProduct(name, price, stock);

            if (result == true)
            {
                Console.WriteLine("\nProduct Updated Successfully!");
            }
            else
            {
                Console.WriteLine("\nProduct Not Found or Invalid Price/Stock!");
            }

            Pause();
        }

        // 5. Delete Product UI
        public void DeleteProductUI()
        {
            Console.Clear();

            Console.WriteLine("--------- DELETE PRODUCT ---------");

            Console.Write("Enter Food Name You Want to Delete: ");
            string name = Console.ReadLine();

            bool result = service.DeleteProduct(name);

            if (result == true)
            {
                Console.WriteLine("\nProduct Deleted Successfully!");
            }
            else
            {
                Console.WriteLine("\nProduct Not Available!");
            }

            Pause();
        }

        // Pause Screen
        private void Pause()
        {
            Console.WriteLine("\nPress any key to continue...");
            Console.ReadKey();
        }
    }
}