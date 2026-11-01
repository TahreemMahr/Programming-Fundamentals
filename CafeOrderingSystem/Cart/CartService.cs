using System;
using System.Collections.Generic;
using CafeOrderingSystem.Products;

namespace CafeOrderingSystem.Cart
{
    public class CartService
    {
        private List<CartModel> cart = new List<CartModel>();

        private CartRepository repository = new CartRepository();

        private ProductService productService;

        // Constructor
        public CartService(ProductService service)
        {
            productService = service;
        }

    
   

        // 1. Load Cart
        public void LoadCart()
        {
            cart = repository.LoadCart();
        }

        // 2. Add Product to Cart
        public bool AddToCart(string productName, int quantity)
        {
            if (quantity <= 0)
            {

                return false;
            }

            ProductModel product = productService.SearchProduct(productName);

            if (product == null)
            {
                return false;
            }

            if (product.FOODSTOCK < quantity)
            {
                return false;
            }

            // Check if product already exists in cart
            foreach (CartModel item in cart)
            {
                if (item.FOODNAME == productName)
                {
                    item.FOODSTOCK += quantity;

                    product.FOODSTOCK -= quantity;

                    productService.SaveStock();

                    repository.SaveCart(cart);

                    return true;
                }
            }

            // Add new product
            CartModel newItem = new CartModel(
                product.FOODNAME,
                product.FOODPRICE,
                quantity
            );

            cart.Add(newItem);

            // Decrease product stock
            product.FOODSTOCK -= quantity;

            productService.SaveStock();

            repository.SaveCart(cart);

            return true;
        }

        // 3. Remove Product from Cart
        public bool RemoveFromCart(string productName)
        {
            CartModel itemToRemove = null;

            foreach (CartModel item in cart)
            {
                if (item.FOODNAME == productName)
                {
                    itemToRemove = item;
                    break;
                }
            }

            if (itemToRemove != null)
            {
                // Restore product stock
                ProductModel product =
                    productService.SearchProduct(productName);

                if (product != null)
                {
                    product.FOODSTOCK += itemToRemove.FOODSTOCK;

                    productService.SaveStock();
                }

                cart.Remove(itemToRemove);

                repository.SaveCart(cart);

                return true;
            }

            return false;
        }

        // 4. Update Cart Quantity
        public bool UpdateCartQuantity(
            string productName,
            int newQuantity)
        {
            if (newQuantity <= 0)
            {
                return false;
            }

            foreach (CartModel item in cart)
            {
                if (item.FOODNAME == productName)
                {
                    ProductModel product =
                        productService.SearchProduct(productName);

                    if (product == null)
                    {
                        return false;
                    }

                    int difference = newQuantity - item.FOODSTOCK;

                    // Check stock if quantity is increasing
                    if (difference > 0 && product.FOODSTOCK < difference)
                    {
                        return false;
                    }

                    // Update product stock
                    product.FOODSTOCK -= difference;

                    item.FOODSTOCK = newQuantity;

                    productService.SaveStock();

                    repository.SaveCart(cart);

                    return true;
                }
            }

            return false;
        }

        // 5. View Cart
        public List<CartModel> ViewCart()
        {
            return cart;
        }

        // 6. Calculate Total Bill
        public int CalculateTotal()
        {
            int total = 0;

            foreach (CartModel item in cart)
            {
                total += item.SUBTOTAL;
            }

            return total;
        }

        // 7. Clear Cart and Restore Stock
        public void ClearCart()
        {
            foreach (CartModel item in cart)
            {
                ProductModel product =
                    productService.SearchProduct(item.FOODNAME);

                if (product != null)
                {
                    product.FOODSTOCK += item.FOODSTOCK;
                }
            }

            productService.SaveStock();

            cart.Clear();

            repository.SaveCart(cart);
        }

        // 8. Clear Cart After Successful Checkout
        // Do not restore stock because products are sold.
        public void CompleteCheckout()

        {
            cart.Clear();


            repository.SaveCart(cart);
        }
    }
}