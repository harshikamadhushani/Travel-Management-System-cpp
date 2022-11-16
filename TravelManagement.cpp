#include <iostream>
#include <fstream> // Handle of The File
#include <iomanip> // Show Floating Point Value
#include <windows.h>

using namespace std;

void Menu();

class ManageMenu
{
    public:
     ManageMenu()
     {
        Menu();
     }

     ~ManageMenu()
     {

     }

};

class Customers
{ public:
     string gender,address;
     int age,number;
     static int cID;
     static string name;
     char all[999];

     void getDetails()
     { 
        ofstream out("Old-Customer.txt",ios::app);
        {

        cout<<"\n\t Enter Customer ID: ";
        cin>>cID;

        cout<<"\t Enter Name: ";
        cin>>name;

        cout<<"\t Enter Age: ";
        cin>>age;

        cout<<"\t Enter Gender: ";
        cin>>gender;

        cout<<"\t Enter Phone Number: ";
        cin>>number;

        cout<<"\t Enter Address: ";
        cin>>address;
        }

        out<< "\n Customer ID: "<<cID<<"\n Name: "<< name<< "\n Age: "<<age
        <<"\n Gender: "<<gender<<"\n Phone Number: "<<number<<"\n Address: "<<address<<endl;
        out.close();

        cout<<"\n\t Successfull Save Your Details\n";
     }

     void shoDetails()
     {
        ifstream in("Old-Customer.txt");
        {
            if(!in)
            {
                cout<<"\n\t File Error!\n";
            }
            while(!(in.eof()))
            {
                in.getline(all,999);
                cout<<all<<endl;
            }
            in.close();
        }
     }

};

int Customers::cID;
string Customers::name;
class Cabs
{
  public:
    int cabChoice, km;
    float cost;
    int count;
    static float lastCost;


    void CabDetails()
    {
        cout<<"\n\t       Welcome To HM Cabs Service ";
        cout<<"\n\t -------------------------------------------\n";
        cout<<"\n\t 1. Rent A Stabdard Cab - Rs. 150 For 1 KM ";
        cout<<"\n\t 2. Rent A Luxury Cab   - Rs. 350 For 1 KM "<<endl;

        cout<<"\n\t To Calculate The Cost For Your Jurney.\n";
        cout<<"\n\t Enter Which Kind Of Cab You Need: ";
        cin>>cabChoice;

       

        int hireCab;
        
        if(cabChoice==1)
        {
             cout<<"\t Enter Kilometers You Have To Travel: ";
             cin>>km;
            cost=150*km;
            cout<<"\n\t Your Tour Cost is: "<<cost<<" Rupees for a Standard Cab\n";
            cout<<" \n\t Please Press 1 to  Hire This Cabs:";
            cout<<" \n\t Please Press 2 to  Select Another Cabs: ";
            cin>>hireCab;

            system("cls");
            if(hireCab==1)
            {
              lastCost=cost;
              cout<<"\n\t You Have Succesfull Hired Standard Cab.";
              cout<<"\n\t Go To Menu And Take The Reciept "<<endl;
            }
            else if (hireCab==2)
            {
                CabDetails();
            }
            else
            {
             
             CabDetails();
            }
        }

        else if (cabChoice==2)
         {
             cout<<"\t Enter Kilometers You Have To Travel: ";
             cin>>km;
            cost=350*km;
            cout<<"\n\t Your Tour Cost is: "<<cost<<" Rupees for a Luxury Cab\n";
            cout<<" \n\t Please Press 1 to  Hire This Cabs.";
            cout<<" \n\t Please Press 2 to  Select Another Cabs.";
            cin>>hireCab;

            system("cls");
            if(hireCab==1)
            {
              lastCost=cost;
              cout<<"\n\t You Have Succesfull Hired Luxury Cab.";
              cout<<"\n\t Go To Menu And Take The Reciept."<<endl;
            }
            else if (hireCab==2)
            {
                CabDetails();
            }
            else
            {
        
             CabDetails();
            }
       }

       else
       {
        cout<<"\n\t Invalid Input!.Please Choice Again.\n\n";
        Menu();
       }
       
        cout<<"\n\t Press 1 To Redirect Main Menu: ";
        cin>>hireCab;
        if(hireCab==1)
        {
            Menu();
        }
        else
        {
            Menu();
        }
        
       
    }

};
float Cabs:: lastCost; 


class Booking 
{
    public:
     int choiceHotel,packege;
     static float hotelCost;
     
     
     int hireCab;

     void Hotels()
     {
        string HotelNo[]={"Avendra","Light House","Sea Line"};
        for(int a=0; a<3; a++)
        {
            cout<<"\t\t"<<(a+1)<<". Hotel "<<HotelNo[a]<<endl;
        }

        cout<<"\n\t Currently We Collabarated With Above Hotel!\n";
        cout<<"\n\t Enter  Number Of The Hotel You Want To Book: ";
        cin>>choiceHotel;
        system("cls");

        if(choiceHotel==1)
        {
            cout<<"\n\t --------------WELCOME TO HOTEL AVENDRA---------------\n";
            cout<<"\n\t Stay Cool And Get Chilled in The Summer Sun"<<endl;

             cout<<"\n\t Packages Offered By Avendra\n";

              cout<<"\n\t 1. Standard Pack\n";
              cout<<"\t\t All Basic Facilities Need Just For     Rs: 5000.00\n";
              cout<<"\n\t 2. Premium Pack\n";
              cout<<"\t\t All Enjoy Premium Packege              Rs: 10000.00\n";
              cout<<"\n\t 3. luxury Pack\n";
              cout<<"\t\t Live a Luxury at Avendra               Rs: 15000.00\n";

              cout<<"\n\t Enter A Package Number You Want To Book: ";
              cin>>packege;
              
              if(packege==1)
              {
                hotelCost=5000;
                cout<<"\n\t Your Hotel Package Value is: "<<hotelCost;
                cout<<"\n\t You Have Successfully Book Standard Package At Avendra.";
                cout<<"\n\t Go To Menu And Take The Reciept\n";
              }
              else if(packege==2)
              {
                hotelCost=10000;
                cout<<"\n\t Your Hotel Package Value is: "<<hotelCost;
                cout<<"\n\n\t You Have Successfully Book Premium Package At Avendra.";
                cout<<"\n\t Go To Menu And Take The Reciept\n";
              }
              else if(packege==3)
              {
                hotelCost=15000;
                cout<<"\n\t Your Hotel Package Value is: "<<hotelCost;
                cout<<"\n\n\t You Have Successfully Book Luxury Package At Avendra.";
                cout<<"\n\t Go To Menu And Take The Reciept\n";
              }
              else
              {
                cout<<"\n\t Invalid Input!.Please Choice Again.\n\n";
                 Hotels();
              }

            cout<<"\n\t Press 1 To Redirect Main Menu: ";
            cin>>hireCab;
            system("cls");
            if(hireCab==1)
            {
              Menu();
            }
            else
            {
             Menu();
            }


        }

        else if(choiceHotel==2)
        {
            cout<<"\n\t --------------WELCOME TO HOTEL LIGHT HOUSE---------------\n";
            cout<<"\n\t Stay Cool And Get Chilled in The Summer Sun\n";

             cout<<"\n\t Packages Offered By Light House\n";

              cout<<"\n\t 1. Standard Pack\n";
              cout<<"\t\t All Basic Facilities Need Just For     Rs: 5000.00\n";
              cout<<"\n\t 2. Premium Pack\n";
              cout<<"\t\t All Enjoy Premium Packege              Rs: 10000.00\n";
              cout<<"\n\t 3. luxury Pack\n";
              cout<<"\t\t Live a Luxury at Avendra               Rs: 15000.00\n";

              cout<<"\n\t Enter A Package Number You Want To Book: ";
              cin>>packege;
              
              if(packege==1)
              {
                hotelCost=5000;
                cout<<"\n\t Your Hotel Package Value is: "<<hotelCost;
                cout<<"\n\n\t You Have Successfully Book Standard Package At Light House.";
                cout<<"\n\t Go To Menu And Take The Reciept\n";
              }
              else if(packege==2)
              {
                hotelCost=10000;
                cout<<"\n\t Your Hotel Package Value is: "<<hotelCost;
                cout<<"\n\n\t You Have Successfully Book Premium Package At Light House.";
                cout<<"\n\t Go To Menu And Take The Reciept\n";
              }
              else if(packege==3)
              {
                hotelCost=15000;
                cout<<"\n\t Your Hotel Package Value is: "<<hotelCost;
                cout<<"\n\n\t You Have Successfully Book Luxury Package At Light House.";
                cout<<"\n\t Go To Menu And Take The Reciept\n";
              }
              else
              {
                cout<<"\n\t Invalid Input!.Please Choice Again.\n\n";
                Hotels();
              }

            cout<<"\n\t Press 1 To Redirect Main Menu: ";
            cin>>hireCab;
            system("cls");
            if(hireCab==1)
            {
              Menu();
            }
            else
            {
             Menu();
            }

        }

        else if (choiceHotel==3)
        {
            cout<<"\n\t --------------WELCOME TO HOTEL SEA LINE---------------\n";
            cout<<"\n\t  Stay Cool And Get Chilled in The Summer Sun\n";

             cout<<"\n\t Packages Offered By Sea Line\n";

              cout<<"\n\t 1. Standard Pack\n";
              cout<<"\t \tAll Basic Facilities Need Just For      Rs: 5000.00\n";
              cout<<"\n\t 2. Premium Pack\n";
              cout<<"\t\t All Enjoy Premium Packege               Rs: 10000.00\n";
              cout<<"\n\t 3. luxury Pack\n";
              cout<<"\t\t Live a Luxury at Avendra                Rs: 15000.00\n";

              cout<<"\n\t Enter A Package Number You Want To Book: ";
              cin>>packege;
              
              if(packege==1)
              {
                hotelCost=5000;
                cout<<"\n\t Your Hotel Package Value is: "<<hotelCost;
                cout<<"\n\n\t You Have Successfully Book Standard Package At Sea Line.";
                cout<<"\n\t Go To Menu And Take The Reciept\n";
              }
              else if(packege==2)
              {
                hotelCost=10000;
                cout<<"\n\t Your Hotel Package Value is: "<<hotelCost;
                cout<<"\n\n\t You Have Successfully Book Premium Package At Sea Line.";
                cout<<"\n\t Go To Menu And Take The Reciept\n";
              }
              else if(packege==3)
              {
                hotelCost=15000;
                cout<<"\n\t Your Hotel Package Value is: "<<hotelCost;
                cout<<"\n\n\t You Have Successfully Book Luxury Package At Sea Line.";
                cout<<"\n\t Go To Menu And Take The Reciept\n";
              }
              else
              {
            
                cout<<"\n\t Invalid Input!.Please Choice Again.\n\n";
                Hotels();
              }

            cout<<"\n\t Press 1 To Redirect Main Menu: ";
            cin>>hireCab;
            system("cls");
            if(hireCab==1)
            {
              Menu();
            }
            else
            {
             Menu();
            }

        }

        else
        {

            Menu();
        }

        
    }


};

float Booking:: hotelCost;


class Chargers: public Booking, Cabs,Customers
{
   public:
     void printBill()
        {
         ofstream bill("Reciept.txt");
         {
            bill<<"\n\t -------------- HM Travel Agency ---------------\n";
            bill<<"\n\t\t\t    RECIEPT \n";
            
            bill<<"\n\t _______________________________________________\n";
            
            bill<<"\n\t\t   Customer ID:   "<<Customers::cID;
            bill<<"\n\t\t   Customer Name: "<<Customers::name<<endl;
            bill<<"\n\t\t   DESCRIPTION TOTAL"<<endl;
            bill<<"\n\t\t   Hotel Cost:       "<<fixed<< setprecision(2)<<Booking::hotelCost;
            bill<<"\n\t\t   Travel Cab Cost:  "<<fixed<< setprecision(2)<<Cabs::lastCost<<endl;

            bill<<"\n\t _______________________________________________\n";
            bill<<"\n\t\t  Total Charge: "<<fixed<< setprecision(2)<<Booking::hotelCost+Cabs::lastCost<<endl;
            bill<<"\n\t _______________________________________________\n";
            bill<<"\n\t   -------------- THANK YOU! --------------\n";



         }
           bill.close();
        }

       void showBill()
       {
        ifstream in("Reciept.txt");
        {
            if(!in)
            {
                cout<<"\n\t File Opening Error!\n";
            }

            while(!(in.eof()))
            {
                in.getline(all,999);
                cout<<all<<endl;
            }
        }
        in.close();
       }
     
};

void Menu()
{
    int mainChoice,inChoice;
    int get;

    cout<<"\t\t      HM Travel Agency\n";
    cout<<"\n\t -------------- MAIN MENU --------------\n";
    cout<<"\n\t _______________________________________\n";
    cout<<"\n\t| \t Customer Management -> 1\t|";
    cout<<"\n\t| \t Cabs Management     -> 2\t|";
    cout<<"\n\t| \t Booking Management  -> 3\t|";
    cout<<"\n\t| \t Charge & Bill       -> 4\t|";
    cout<<"\n\t| \t Exit                -> 5\t|\n";
    cout<<"\n\t _______________________________________\n";

    cout<<"\n\t Please Enter Your Choice: ";
    cin>>mainChoice;
    system("cls");

    Customers Cus;
    Cabs cabs;
    Booking booking;
    Chargers chargers;

    if(mainChoice==1)
    {
        cout<<"\n\t ----------------Customers---------------\n";
        cout<<"\n\t 1. New Customer\n";
        cout<<"\n\t 2. See Old Customer\n";
        cout<<"\n\t Enter Choice: ";
        cin>>inChoice;

        system("cls");
        if(inChoice==1)
        {
            Cus.getDetails();
        }
        else if (inChoice==2)
        {
           Cus.shoDetails();
        }
        else
        {
        
            Menu();

        }

        cout<<"\n\t Press 1 to Redirect Main Menu: ";
        cin>>get;
        system("cls");
         if(get==1)
         {
            Menu();
         }
         else
         {
            Menu();
         }


    
    }

    else if (mainChoice==2)
    {
        cabs.CabDetails();
    }
    else if (mainChoice==3)
    {
        cout<<"\n\t------- Booking A Luxury Hotel Using System ------\n\n";
        booking.Hotels();
    }
    else if(mainChoice==4)
    {
        cout<<"\n\t------- Get Your Reciept ------\n";
        chargers.printBill();

        cout<<"\n\t Your Reciept is Alreay Printed.";
        cout<<"\n\t Enter Another Key To Back Main Menu: ";
        cin>>get;
        if(get==1)
        {
            system("cls");
            chargers.showBill();
            cout<<"\n\t Press 1 to Redirect Main Menu: ";
            cin>>get;
            system("cls");
            if(get==1)
            {
                Menu();
            }
            else
            {
                Menu();
            }
        }
        else
        {
            system("cls");
            Menu();

        }
    }

    else if(mainChoice==5)
    {
        cout<<"\n\t----- GOOD BYE -----\n\n";
        system("cls");
        Menu();
    }

    else
    {
           
            Menu();

    }


}

int main()
{
        ManageMenu startObj;
        return 0;
}