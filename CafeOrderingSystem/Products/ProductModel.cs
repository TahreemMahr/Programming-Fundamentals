using System;
using System.Collections.Generic;
using System.Text;

namespace CafeOrderingSystem.Products
{
    public class ProductModel
    {
        private string foodname;
        private int foodprice;
        private string foodcategory;
        private int foodstock;


    
    public ProductModel(string name,int price,string category,int stock){
            foodname = name;
            foodprice = price;
            foodcategory = category;
            foodstock = stock;


        }
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
        public int FOODPRICE
        {
                get{
                    return foodprice;

                }
                set{
                    foodprice = value;
                    

                }


        }
        public string FOODCATEGORY{
            get {
                return foodcategory;
            }
            set
            {
                foodcategory = value;
            }
        }
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
    }
}
