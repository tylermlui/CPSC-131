#include<iostream>
#include<string>
#include<vector>
#include<iomanip>

template <typename T> class Item{
    public:
        T name;
        T expiration;
        T category;
        int quantity;
        Item(T n, T e, T c, int q){
            name = n;
            expiration = e;
            category = c;
            quantity = q;
        }
};
template<typename T> class Inventory{
    public:
        std::vector<Item<T>> inventory;
        void addNewItem(Item<T> n){
            
            for(int i=0; i<inventory.size(); i++){
                if(inventory[i].name==n.name){
                    std::cout<< inventory[i].name;
                    std::cout<<"ITEM"<< i << "ALREADY EXISTS IN INVENTORY"<<std::endl;
                    inventory.push_back(n);

                }  
            }

        }
        void increaseQuantity(std::string itemName, int newquantity){
            for(int i=0; i<inventory.size();i++){
                if (inventory[i].name == itemName){
                    inventory[i].quantity = newquantity;
                }        
            }
        }
        void displayItems(){
            std::cout<<"-------Inventory-------"<<std::endl;       
            std::cout<<std::left<<std::setw(20)<<"Name"<<std::setw(15)<<"Expiration"<<std::setw(15)<<"Quantity"<<std::setw(10)<<"Category"<<std::endl;     
            for(int i=0; i<inventory.size();i++){
                std::cout<<std::left <<std::setw(20)<<inventory[i].name<<std::setw(15)<<inventory[i].expiration<<std::setw(15)<<inventory[i].quantity<<std::setw(15)<<inventory[i].category<<std::endl;                
            }
        }   

        void updateItem(std::string n, std::string e, std::string c, int q){
            for(int i=0; i<inventory.size();i++){
                if (inventory[i].name == n){
                    inventory[i].quantity = q;
                    inventory[i].expiration = e;
                    inventory[i].category = c;
                }
                else if( inventory[i]!=n){
                    std::cout<< "NOT IN INVENTORY";
                }
            }
        }

        void removeItem(Item<T> n){
            for(int i=0; i<inventory.size(); i++){
                if(inventory[i].name == n){
                    inventory.erase(n);
                }
            }
        }

};

template<typename T>class Appointment{
    public:
        T c_name;
        T ap_date;
        T ap_time;
        T CWID;
        Appointment(T n, T d, T t, T cw){
            c_name = n;
            ap_date = d;
            ap_time = t;
            CWID = cw;

        }
};
template<typename T>class AppointmentSystem{
    public:

    /*void display(){
        std::cout<<"-------Appointments-------"<<std::endl;
        std::cout<<std::left<<std::setw(20)<<"Name"<<std::setw(15)<<"Date"<<std::setw(15)<<"Time"<<std::setw(15)<<"CWID"<<std::endl;
        for(int i=0; i<ap.size();i++){
            std::cout<<std::left<<std::setw(20)<<ap[i].c_name<<std::setw(15)<<ap[i].ap_date<<std::setw(15)<<ap[i].ap_time<<std::setw(15)<<ap[i].CWID<<std::endl;
        }
    }*/

};

int main(){

    //Remove comments and run following test cases
    Inventory<std::string> i1;
    Item<std::string> I1("Protien Bar","05/09/2023","Snacks",4);
    i1.addNewItem(I1);
    Item<std::string> I2("Milk","05/12/2023","Regular",2);
    i1.addNewItem(I2);
    Item<std::string> I3("Cerels","09/12/2023","Snacks",5);
    i1.addNewItem(I3);
    i1.increaseQuantity("Cerels",10);
    i1.displayItems();
    i1.updateItem("Milk","09/24/2023","Regular",3);
    i1.displayItems();/*
    i1.increaseQuantity("Cerels",10);
    i1.displayItems();


    /*
    try{
        i1.updateItem("bar","09/12/2023","Snacks",3);
    }
    catch(const char* msg){
        std::cout <<msg << std::endl;
    }
    i1.displayItems();
    i1.updateItem("Cerels","09/27/2023","Regular",4);
    i1.displayItems();
    i1.Total();
    try{
        i1.removeItem("Bread");
    }
    catch(const char* msg){
        std::cout<<msg<<std::endl;
    }
    try{
        i1.removeItem("Milk");
    }
    catch(const char* msg){
        std::cout<<msg<<std::endl;
    }
    i1.displayItems();
    try{
        i1.searchItem("Cerels");
    }
    catch(const char* msg){
        std::cout<<msg<<std::endl;
    }
    Appointment<std::string> a1("John Bob","09/12/2023","9:30AM","889456723");
    Appointment<std::string> a2("Jim Lee","09/12/2023","10:30AM","883476923");
    Appointment<std::string> a3("Chris Lynn","09/12/2023","12:00PM","879455714");
    Appointment<std::string> a4("Arnav Shah","09/12/2023","12:00PM","879459583");
    AppointmentSystem<std::string> s1;
    s1.schedule(a1);
    s1.schedule(a2);
    s1.schedule(a3);
    s1.schedule(a4);
    s1.display();
    s1.Total_appointments("09/12/2023","12:00PM");
    Appointment<std::string> a5("Chris Lynn","09/12/2023","12:00PM","879455714");
    s1.schedule(a4);
    s1.removeRecent();
    s1.display();*/

}
