#include <string>
//#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;
using std::endl;
using std::cout;
using std::cin;
using std::string;



class magazin
{

public:

   

    void setUser() 
    {

        cout << "Введите свое имя: "; cin >> user_name;
        cout << "Введите свою фамилию: "; cin >> user_surname;
        user User(user_name, user_surname);
        
    }

    void getUser()
    {
        user User(user_name, user_surname);
        User.getUser();
    }

    void setTovars()
    {

        cout << "Сколько вещей вы хотите заказать?" << endl;
        cin >> size;

        tovar tvr;
        tovar_zakaz = tvr.setTovar(size);
        
    }

    void getTovars()
    {
        tovar tvr;
        tvr.getTovar(tovar_zakaz, size);
    }

    void setAdres()
    {
        adres adr;
        Adr = adr.setAdres();
    }

    void getAdres()
    {
        adres adr;
        adr.getAdres(Adr);

    }

    void setDate()
    {
        date dt;
        data = dt.setData();
    }

    void getDate()
    {
        date dt;
        dt.getData(data);

    }

    private:
    
// User
        string user_name;
        string user_surname;
// Tovar
        string* tovar_zakaz;
        int size;
// Adres
        string Adr;
// Data
        string data;
// Class
        class user
        {
        private:
            string name;
            string surname;

        public:
            user(string name, string surname):name(name),surname(surname){}
            
         //   void setUser()
         //   {
         //       cout << "Введите свое имя: "; cin >> name;

         //       cout << "Введите свою фамилию: "; cin >> surname;

         //   }

            void getUser()
            {
                cout << name << " " << surname << ",  по адресу ";
            }
        };

        class tovar
        {
        private:
            string name;
            int kolich;
            string* zakaz;
            int size;
        public:
            //tovar(){}
            
            string *setTovar(int size)
            {
                
                zakaz = new string[size];
                for (int i = 0; i < size; i++) {
                    cout << "Название товара: ";  cin >> name;
                    cout << "Сколько вы хотите товара: "; cin >> kolich;
                    ostringstream ost;
                    ost << kolich;
                    zakaz[i] = name + " " + ost.str() + " штук, ";
                }

                return (zakaz);
            }
            

            void getTovar(string* zakaz, int size)
            {
                cout << ": {";
                for (int i = 0; i < size; i++) {
                    cout << zakaz[i];
                }
                cout << "} " ;
                delete[] zakaz;

            }


        };

        class adres
        {
        private:
            string country;
            string city;
        public:

            string setAdres()
            {
                string adrees;
                cout << "Введите свою страну: ";  cin >> country;
                cout << "Введите свой город: "; cin >> city;
                adrees = country + " " + city;

                return(adrees);
            }

            void getAdres(string adrees)
            {
                cout << adrees << " будет доставлено ";
            }

        };

        class date
        {
        private:
            string data;
        public:
           
            string setData()
            {

                cout << "Введите дату доставки: ";  cin >> data;

                return(data);
            }

            void getData(string data)
            {
                cout << data << " ";
            }
        };
};


    

    

  


int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    
    magazin mag;



    int gg;
    gg = 0;

    string tovar;

    mag.setUser();
    mag.setTovars();
    mag.setAdres();
    mag.setDate();

    mag.getUser(); mag.getAdres(); mag.getTovars(); mag.getDate();
    
    
 
    return 0;
}