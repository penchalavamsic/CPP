//Smart Inventory System with DMA and Inheritance
#include<iostream>
using namespace std;
class Item{
    private:
        string name;
        int id;
        float price;
    protected:
        int quantity;
    public:
        Item(string n, int i, float p, int q){
            name=n;
            id=i;
            price=p;
            quantity=q;
        }
        void display(){
            cout<<"**Items**"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Quantity: "<<quantity<<endl;
        }
        float getValue(){
            return quantity*price;
        }

        string getName(){
            return name;
        }
        int getId(){
            return id;
        }
        float getPrice(){
            return price;
        }
        //destructor
    ~Item(){
        cout<<"Item deleted"<<endl;
    }
};
class Electronics: public Item{
    public:
    int WarrantyYears;
    float powerUsage;
    Electronics(string n, int i, float p, int q, int w, float pu):Item(n, i, p, q){  //intializer list
        WarrantyYears=w;
        powerUsage=pu;
    } 
    void displayDetails(){
        display(); //calling base class function
            cout<<"WarrantyYears: "<<WarrantyYears<<endl;
            cout<<"PowerUsage: "<<powerUsage<<endl;

    }
    ~Electronics(){
        cout<<"Electronics item deleted"<<endl;
    }
};
class Grocery:public Item{
    string expiryDate;
    float weight;
    Grocery(string n, int i, float p, int q, string ed, float w):Item(n, i, p, q){
        expiryDate=ed;
        weight=w;
    }
    void displayDetails(){
        display();
        cout<<"Expiry date: "<<expiryDate<<endl;
        cout<<"Weight: "<<weight<<endl;
    }
    ~Grocery(){
        cout<<"Grocery deleted";
    }

};


int main(){
    Item item1=Item("Dal",101, 50.25, 2);
    item1.display();
    cin.get();
    return 0;
}
