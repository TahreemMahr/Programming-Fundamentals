using System;
using System.Collections.Generic;
using CafeOrderingSystem.Products;

namespace CafeOrderingSystem.Cart
{
    public class CartUI
    {
        private CartService service;

        // Constructor
        public CartUI(CartService cartService)
        {

            service = cartService;
        }

        // Main Cart Menu
        public void ShowCartMenu()
        {

            while (true)
            {

                Console.Clear();

                Console.WriteLine("--------------------------------");
                Console.WriteLine("          CART MENU");
                Console.WriteLine("--------------------------------");

                Console.WriteLine("1. Add Product to Cart");
                Console.WriteLine("2. View Cart");
                Console.WriteLine("3. Update Cart Stock");
                Console.WriteLine("4. Remove Product from Cart");
                Console.WriteLine("5. View Total Bill");
                Console.WriteLine("6. Clear Cart");
                Console.WriteLine("7. Back to Customer Menu");

                Console.Write("\nEnter Your Choice: ");


                string choice = Console.ReadLine();

                if (choice == "1")
                {
                    AddToCartUI();
                }
                else if (choice == "2")
                {
                    ViewCartUI();
                }
                else if (choice == "3")
                {
                    UpdateCartUI();
                }
                else if (choice == "4")
                {
                    RemoveFromCartUI();
                }
                else if (choice == "5")
                {
                    ViewBillUI();
                }
                else if (choice == "6")
                {
                    ClearCartUI();
                }
                else if (choice == "7")
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

        // 1. Add Product to Cart UI
        public void AddToCartUI()
        {
            Console.Clear();

            Console.WriteLine("--------- ADD TO CART ---------");


            Console.Write("Enter Food Name: ");
            string name = Console.ReadLine();


            Console.Write("Enter Stock: ");

            int stock;

            if (!int.TryParse(Console.ReadLine(), out stock))
            {
                Console.WriteLine("Invalid Stock!");
                Pause();
                return;
            }

            bool result = service.AddToCart(name, stock);

            if (result == true)
            {
                Console.WriteLine("\nProduct Added to Cart Successfully!");
            }
            else
            {
                Console.WriteLine(
                    "\nProduct Not Available or Insufficient Stock!"
                );
            }

            Pause();
        }

        // 2. View Cart UI
        public void ViewCartUI()
        {
            Console.Clear();

            Console.WriteLine("--------- YOUR CART ---------");

            List<CartModel> items = service.ViewCart();

            if (items.Count == 0)
            {

                Console.WriteLine("\nYour Cart is Empty!");
            }
            else
            {
                foreach (CartModel item in items)
                {
                    Console.WriteLine("----------------------------");

                    Console.WriteLine(

                        "Food Name: " + item.FOODNAME
                    );

                    Console.WriteLine(

                        "Food Price: " + item.FOODPRICE
                    );

                    Console.WriteLine(

                        "Quantity: " + item.FOODSTOCK

                    );

                    Console.WriteLine(

                        "Subtotal: " + item.SUBTOTAL

                    );
                }

                Console.WriteLine("----------------------------");

                Console.WriteLine(

                    "Total Bill: " + service.CalculateTotal()

                );
            }

            Pause();
        }

        // 3. Update Cart Quantity UI
        public void UpdateCartUI()
        {
            Console.Clear();

            Console.WriteLine("--------- UPDATE CART ---------");

            Console.Write("Enter Food Name: ");

            string name = Console.ReadLine();

            Console.Write("Enter New Stock: ");

            int stock;


            if (!int.TryParse(Console.ReadLine(), out stock))
            {
                Console.WriteLine("Invalid Stock!");
                Pause();
                return;

            }

            bool result = service.UpdateCartQuantity(
                name,
                stock

            );

            if (result == true)
            {
                Console.WriteLine(
                    "\nCart Stock Updated Successfully!"
                );
            }
            else
            {
                Console.WriteLine(

                    "\nProduct Not Found or Insufficient Stock!"

                );
            }

            Pause();

        }

        // 4. Remove Product from Cart UI
        public void RemoveFromCartUI()
        {
            Console.Clear();


            Console.WriteLine("--------- REMOVE FROM CART ---------");


            Console.Write("Enter Food Name: ");

            string name = Console.ReadLine();

            bool result = service.RemoveFromCart(name);


            if (result == true)
            {

                Console.WriteLine(
                    "\nProduct Removed from Cart Successfully!"

                );
            }
            else
            {
                Console.WriteLine("\nProduct Not Found in Cart!");

            }

            Pause();
        }

        // 5. View Bill UI
        public void ViewBillUI()
        {

            Console.Clear();


            Console.WriteLine("========== CUSTOMER BILL ==========");


            List<CartModel> items = service.ViewCart();


            if (items.Count == 0)
            {
                Console.WriteLine("\nYour Cart is Empty!");

            }
            else
            {
                foreach (CartModel item in items)
                {

                    Console.WriteLine("----------------------------");


                    Console.WriteLine(

                        "Food Name: " + item.FOODNAME
                    );

                    Console.WriteLine(

                        "Quantity: " + item.FOODSTOCK
                    );

                    Console.WriteLine(

                        "Price: " + item.FOODPRICE
                    );

                    Console.WriteLine(

                        "Subtotal: " + item.SUBTOTAL
                    );

                }

                Console.WriteLine("----------------------------");


                Console.WriteLine(

                    "Total Bill: " + service.CalculateTotal()

                );

            }


            Pause();
        }

        // 6. Clear Cart UI
        public void ClearCartUI()
        {
            Console.Clear();


            Console.WriteLine("--------- CLEAR CART ---------");


            List<CartModel> items = service.ViewCart();


            if (items.Count == 0)
            {
                Console.WriteLine("Your Cart is Already Empty!");

            }
            else
            {
                service.ClearCart();

                Console.WriteLine(

                    "\nCart Cleared Successfully!"
                );

                Console.WriteLine(

                    "Product Stock Has Been Restored!"
                );
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