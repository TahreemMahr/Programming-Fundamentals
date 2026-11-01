using System;
using CafeOrderingSystem.Products;
using CafeOrderingSystem.Customers;
using CafeOrderingSystem.Cart;
using CafeOrderingSystem.Orders;

namespace CafeOrderingSystem.MainMenu
{
    public class MainMenuUI
    {

        private ProductService productService = new ProductService();

        private CustomerUI customerUI = new CustomerUI();

        private OrderUI orderUI = new OrderUI();


        private ProductUI productUI;
        private CartUI cartUI;

        public MainMenuUI()
        {

            productUI = new ProductUI(productService);


            CartService cartService = new CartService(productService);
            cartUI = new CartUI(cartService);
        }

        public void ShowMainMenu()
        {
            while (true)
            {

                Console.WriteLine("\n================================");
                Console.WriteLine("      CAFE ORDERING SYSTEM");
                Console.WriteLine("================================");

                Console.WriteLine("1. Product Management");
                Console.WriteLine("2. Customer Management");
                Console.WriteLine("3. Cart Management");
                Console.WriteLine("4. Order Management");
                Console.WriteLine("5. Exit");

                Console.Write("\nEnter Your Choice: ");

                string choice = Console.ReadLine();


                if (choice == "1")
                {

                    productUI.ShowProductMenu();
                }
                else if (choice == "2")
                {

                    customerUI.CustomerMenu();
                }
                else if (choice == "3")
                {

                    cartUI.ShowCartMenu();
                }
                else if (choice == "4")
                {

                    orderUI.OrderMenu();
                }
                else if (choice == "5")
                {

                    Console.WriteLine("Thank You For Using Cafe Ordering System!");
                    break;
                }
                else
                {

                    Console.WriteLine("Invalid Choice!");
                }
            }
        }
    }
}