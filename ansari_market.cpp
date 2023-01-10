//MD ARHAM KALAM ANSARI
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
class shopping
{
    private:
        int pcode;
        float price;
        float discount;
        string pname;
    public:
        void menu();
        void admin();
        void buyer();
        void add();
        void edit();
        void rem();
        void list();
        void recipt();
};

void shopping :: menu()
{
    m:
    int choice;
    string email;
    string password;
    cout<<"\t\t\t\t\t**********************************************\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t*        [ ANSARI SUPERMARKET MENU ]         *\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t**********************************************\n";
    cout<<"\t\t\t\t\t                                              \n";
    cout<<"\t\t\t\t\t                      |||||                   \n";
    cout<<"\t\t\t\t\t                       |||                    \n";
    cout<<"\t\t\t\t\t                        |                     \n";
    cout<<"\t\t\t\t\t                                              \n";
    cout<<"\t\t\t\t\t                  WELCOME |*_*|               \n";
    cout<<"\t\t\t\t\t                                              \n";
    cout<<"\t\t\t\t\t|--------------------------------------------|\n";
    cout<<"\t\t\t\t\t|                                            |\n";
    cout<<"\t\t\t\t\t|         Press  1  for  *ADMIN*             |\n";
    cout<<"\t\t\t\t\t|                                            |\n";
    cout<<"\t\t\t\t\t|         Press  2  for  *BUYER*             |\n";
    cout<<"\t\t\t\t\t|                                            |\n";
    cout<<"\t\t\t\t\t|         Press  3  for  *EXIT*              |\n";
    cout<<"\t\t\t\t\t|                                            |\n";
    cout<<"\t\t\t\t\t|--------------------------------------------|\n";
    cout<<endl;
    cout<<"\t\t\t\t\t        Please Select your choice-   ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"\t\t\t\t   Please Login       \n";
            cout<<endl;
            cout<<"\t\t\t\t   Enter the email-   ";
            cin>>email;
            cout<<endl;
            cout<<"\t\t\t\t   Enter the password-  ";
            cin>>password;
            cout<<endl;
            if(email=="ansari098@gmail.com" and password=="Ansari#231")
            {
                admin();
            }
            else
            {
                cout<<"\t\t\t\t  Inavlid Email/password!!  \n\n";
            }
            break;

        case 2:
            buyer();
            break;

        case 3:
            cout<<"\n\t\t\t\t             Thanks For Shopping, Come Again!!! \n\n\n\n";
            exit(0);
            break;

        default:
            cout<<"\n\t\t\t\t          Invalid choice!! Please choose right choice  \n\n";
    }
    goto m;
}
void shopping :: admin()
{
    m:
    int choice;
    cout<<"\t\t\t\t\t**********************************************\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t*             [ ADMIN MENU ]                 *\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t*           Press 1 to Add Item              *\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t*          Press 2 to Modify Item            *\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t*          Press 3 to Delete Item            *\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t*        Press 4 to go back to menu          *\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t**********************************************\n";
    cout<<"\t\t\t\t\t             Enter the choice-       ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        add();
        break;
    
    case 2:
        edit();
        break;

    case 3:
        rem();
        break;
    case 4:
        menu();
        break;

    default:
        cout<<"\n\t\t\t\t                 Invalid choice! Try Again \n\n";
        break;
    }
    goto m;
}
void shopping :: buyer()
{
    m:
    int choice;
    cout<<"\t\t\t\t\t**********************************************\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t*             [ BUYER MENU ]                 *\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t*           Press 1 to Buy Item              *\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t*        Press 2 to go back to menu          *\n";
    cout<<"\t\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t\t**********************************************\n";
    cout<<"\t\t\t\t\t             Enter the choice-         ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        recipt();
        break;
    
    case 2:
        menu();
        break;

    default:
        cout<<"\t\t\t\t          Invalid Option!!\n\n";
        break;
    }
    goto m;
}
void shopping :: add()
{
    m:
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;
    cout<<"\n\n\t\t\t\t   Add New Product         \n";
    cout<<endl;
    cout<<"\t\t\t\t     Product code-       ";
    cin>>pcode;
    cout<<endl;
    cout<<"\t\t\t\t    Name of product-     ";
    cin>>pname;
    cout<<endl;
    cout<<"\t\t\t\t    Price of product-    ";
    cin>>price;
    cout<<endl;
    cout<<"\t\t\t\t    Discount on product-  ";
    cin>>discount;

    data.open("database.txt",ios::in);

    if(!data)
    {
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<endl;
        data.close();
    }
    else
    {
        data>>c>>n>>p>>d;
        while (!data.eof())
        {
            if(c==pcode)
            {
                token++;
            }
            data>>c>>n>>p>>d;
        }
        data.close();
        if(token==1)
        {
            goto m;
        }
        else
        {
            data.open("database.txt",ios::app|ios::out);
            data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<endl;
            data.close();
        }
        cout<<"\n\n\t\t\t\t  Item Recorded Successfully!!\n\n";
    }
}
void shopping :: edit()
{
    fstream data,data1;
    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    string n;

    cout<<"\n\n\t\t\t\t  Modify the record\n";
    cout<<"\t\t\t\t     Product code-   ";
    cin>>pkey;
    
    data.open("database.txt",ios::in);
    if(!data)
    {
        cout<<"\n Error! No file exist    \n";
    }
    else
    {
        data1.open("database1.txt",ios::app|ios::out);
        data>>pcode>>pname>>price>>discount;
        while(!data.eof())
        {
            if(pkey==pcode)
            {
                cout<<"\n\t\t\t\t  Product new code- ";
                cin>>c;
                cout<<endl;
                cout<<"\t\t\t\t   Name of product-   ";
                cin>>n;
                cout<<endl;
                cout<<"\t\t\t\t   Price-         ";
                cin>>p;
                cout<<endl;
                cout<<"\t\t\t\t   Discount-       ";
                cin>>d;
                cout<<endl;
                data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<endl;
                cout<<"\t\t\t\t  Record Edited Successfully \n\n";
                token++;
            }
            else
            {
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<endl;
            }
            data>>pcode>>pname>>price>>discount;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt","database.txt");
        if(token==0)
        {
            cout<<"\n\n\t\t\t\t  Record Not found!! @@ Sorry @@ \n\n";
        }
    }
}
void shopping :: rem()
{
    fstream data,data1;
    int pkey;
    int token=0;
    cout<<"\n\n\t\t\t\t   Delete Item  \n";
    cout<<endl;
    cout<<"\t\t\t\t      Product code- ";
    cin>>pkey;
    cout<<endl;
    data.open("database.txt",ios::in);
    if(!data)
    {
        cout<<"Error!! File not Exist  \n";
    }
    else
    {
        data1.open("database1.txt",ios::app|ios::out);
        data>>pcode>>pname>>price>>discount;
        while(!data.eof())
        {
            if(pkey==pcode)
            {
                cout<<"\t\t\t\t  Product Deleted Successfully\n\n";
                token++;
            }
            else
            {
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<endl;
            }
            data>>pcode>>pname>>price>>discount;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt","database.txt");

        if(token==0)
        {
            cout<<"\n\t\t\t\t   Record Not found \n\n";
        }
    }
}
void shopping :: list()
{
    fstream data;
    data.open("database.txt",ios::in);
    cout<<"\n================================================================================================================================\n";
    cout<<"\t\t\tProduct_code\t  \tProduct_name\t   \tProduct_price\n";
    cout<<"\n================================================================================================================================\n";
    data>>pcode>>pname>>price>>discount;
    while(!data.eof())
    {
        cout<<"\t\t\t"<<pcode<<"\t\t  \t"<<pname<<"\t\t  \t"<<price<<"\n";
        data>>pcode>>pname>>price>>discount;
    }
    data.close();
}
void shopping :: recipt()
{
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c=0;
    float amt=0;
    float dist=0;
    float ttl=0;
    cout<<"\n\t\t\t\t ************RECEIPT************\n";
    data.open("database.txt",ios::in);
    if(!data)
    {
        cout<<"\n\n\t\t\t\t Empty Database\n";
    }
    else
    {
        data.close();
        list();
        cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        cout<<"\t\t\t\t^                                                             ^\n";
        cout<<"\t\t\t\t^                   Place you Order                           ^\n";
        cout<<"\t\t\t\t^                                                             ^\n";
        cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        do
        {
            m:
            cout<<"\n\t\t\t\t Enter the product-  ";
            cin>>arrc[c];
            cout<<"\n\t\t\t\t Enter the product quantity-   ";
            cin>>arrq[c];
            for(int i=0;i<c;i++)
            {
                if(arrc[i]==arrq[i])
                {
                    cout<<"\t\t\t\t  Duplicate product code! try again\n";
                    goto m;
                }
            }
            c++;
            cout<<"\n\n\t\t\t\t Do you want to buy another item then press y or else press any key to exit- ";
            cin>>choice;
        } while(choice=='y');
        cout<<"\n\n\t\t\t\t\t_________________________________RECEIPT_____________________________________\n";
        cout<<"\nProduct No\tProduct Name\tPoduct quantity\tPrice\t      Amount\t    Discounted Amount\n";

        for(int i=0;i<c;i++)
        {
            data.open("database.txt",ios::in);
            data>>pcode>>pname>>price>>discount;
            while(!data.eof())
            {
                if(pcode==arrc[i])
                {
                    amt=price*arrq[i];
                    dist=amt-(amt*discount/100);
                    ttl=ttl+dist;
                    cout<<"\n"<<pcode<<"\t      \t"<<pname<<"\t    \t"<<arrq[i]<<"\t  \t"<<price<<"\t \t"<<amt<<"\t  \t"<<dist;
                }
                data>>pcode>>pname>>price>>discount;
            }
            data.close();
        }
        cout<<"\n\n\t\t\t\t====================================================\n";
        cout<<"\n\t\t\t\t        Total Amount in Rs- "<<ttl;
        cout<<endl;
        cout<<endl;
        cout<<"\t------------------------------------------------------------------------------------\n\n";
    }
}
int main()
{
    shopping shop;
    shop.menu();
    //MD ARHAM KALAM ANSARI
}
