using System;
using System.Collections.Generic;

namespace CafeOrderingSystem.Products
{
    public class ProductService
    {
        private List<ProductModel> products = new List<ProductModel>();

        private ProductRepository repository = new ProductRepository();

        // 1. Load Products
        public void LoadProducts()
        {
            products = repository.LoadProducts();
        }

        // 2. Add Product
        public bool AddProduct(ProductModel product)
        {
            foreach (ProductModel p in products)
            {
                if (p.FOODNAME == product.FOODNAME)
                {
                    return false;
                }
            }

            products.Add(product);

            repository.SaveProducts(products);

            return true;
        }

        // 3. Search Product
        public ProductModel SearchProduct(string productName)
        {
            foreach (ProductModel product in products)
            {
                if (product.FOODNAME == productName)
                {
                    return product;
                }
            }

            return null;
        }

        // 4. Update Product
        public bool UpdateProduct(
            string productName,
            int newPrice,
            int newStock)
        {
            foreach (ProductModel product in products)
            {
                if (product.FOODNAME == productName)
                {
                    if (newPrice < 0 || newStock < 0)
                    {
                        return false;
                    }

                    product.FOODPRICE = newPrice;
                    product.FOODSTOCK = newStock;


                    repository.SaveProducts(products);

                    return true;
                }
            }

            return false;
        }

        // 5. Delete Product
        public bool DeleteProduct(string productName)
        {
            ProductModel productToDelete = null;

            foreach (ProductModel product in products)
            {
                if (product.FOODNAME == productName)
                {
                    productToDelete = product;
                    break;
                }
            }

            if (productToDelete != null)
            {
                products.Remove(productToDelete);

                repository.SaveProducts(products);

                return true;
            }

            return false;
        }

        // 6. Save Stock
        public void SaveStock()
        {
            repository.SaveProducts(products);
        }

        // 7. View All Products
        public List<ProductModel> ViewProducts()
        {
            return products;
        }
    }
}