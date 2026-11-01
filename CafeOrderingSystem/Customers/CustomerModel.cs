using System;
using System.Collections.Generic;
using System.Text;

namespace CafeOrderingSystem.Customers
{
    public class CustomerModel
    {
         private int CUSTOMERID;
        private string CUSTOMERPHONENO;
        private string CUSTOMERNAME;
        private string CUSTOMERADDRESS;
        public void CustomerData(string name,string phoneno,int id,string address)
        {
            CUSTOMERID = id;
            CUSTOMERNAME= name;
            CUSTOMERADDRESS = address;
            CUSTOMERPHONENO = phoneno;



        }
        public int Customerid
        {
            get
            {
                return CUSTOMERID;

            }
            set
            {
                CUSTOMERID = value;

            }
        }
        public string CustomerPhoneNo
        {
            get
            {
                return CUSTOMERPHONENO;

            }
            set
            {
                CUSTOMERPHONENO = value;

            }
        }
        public string CustomerName
        {
            get
            {
                return CUSTOMERNAME;

            }
            set
            {
                CUSTOMERNAME = value;

            }
        }
        public string CustomerAddress
        {
            get
            {
                return CUSTOMERADDRESS;

            }
            set
            {
                CUSTOMERADDRESS= value;

            }
        }


    }
}
