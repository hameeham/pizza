#include <iostream>
#include <string>
#include <vector>

using namespace std;

const char DeepDish = 'D';
const char HandTossed = 'H';
const char Pan = 'P';
const char ThinCrispy = 'T';
const char Small = 'S';
const char Medium = 'M';
const char Large = 'L';

class Pizza{
    private:
        char pizzaType = 'D';
        char pizzaSize = 'S';
        vector<string> toppings;
        int toppingAmount = 0;
    public:
        Pizza(){}

        void setPizzaType(char type){
            pizzaType = type;
        }

        char getPizzaType(){
            return pizzaType;
        }

        void setPizzaSize(char size){
            pizzaSize = size;
        }

        char getPizzaSize(){
            return pizzaSize;
        }

        void setToppings(string toppingToAdd){
            toppings.push_back(toppingToAdd);
        }

        vector<string> getToppings(){
            return toppings;
        }

        void description(){
            cout<<"Here is your order: ";
            if(pizzaType == DeepDish){
                cout<<"Deep-Dish pizza"<<endl;
            }else if(pizzaType == HandTossed){
                cout<<"Hand-Tossed pizza"<<endl;
            }
            else if(pizzaType == Pan){
                cout<<"Original Pan pizza"<<endl;
            }
            else if(pizzaType == ThinCrispy){
                cout<<"Thin N' Crispy pizza"<<endl;
            }
            cout<<"Toppings: "<<endl;
            for(int i = 0; i < toppings.size(); i++){
                cout<<toppings[i]<<endl;
            }

            cout<<"The total is: "<<"$"<<price()<<endl;
        }

        double price(){
            double totalPrice = 0;
            if(pizzaSize == 'S'){
                totalPrice += 10;
            }else if(pizzaSize == 'M'){
                totalPrice += 14;
            }else if(pizzaSize == 'L'){
                totalPrice += 17;
            }

            totalPrice += (toppings.size() * 2);

            return totalPrice;

        }
};

int main()
{
    char pizzaType;
    char pizzaSize;
    char addTopping;

    Pizza newPizzaOrder;

    cout<<"Greetings Customer and Welcome to the Pizza Shop!"<<endl;
    cout<<"Here are the different pizza's size price: \n The Small: $10, The Medium: $14, The Large: $17"<<endl;

    cout<<"What size of pizza would you like to have(Small, Medium, or Large)?"<<endl;
    cout<<"Please type only a letter (S/M/L):";
    cin>>pizzaSize;
    cout<<endl;

    if(pizzaSize == Small){
        newPizzaOrder.setPizzaSize(Small);
    }else if(pizzaSize == Medium){
        newPizzaOrder.setPizzaSize(Medium);
    }else if(pizzaSize == Large){
        newPizzaOrder.setPizzaSize(Large);
    }

    cout<<"Which method of pizza would you like (Deepdish, Hand-Tossed, Original Pan, Thin N' Crispy)?"<<endl;
    cout<<"Please enter (D/H/P/T): ";
    cin>>pizzaType;
    cout<<endl;

    if(pizzaType == DeepDish){
        newPizzaOrder.setPizzaType(DeepDish);
    }else if(pizzaType == HandTossed){
        newPizzaOrder.setPizzaType(HandTossed);
    }else if(pizzaType == Pan){
        newPizzaOrder.setPizzaType(Pan);
    }else if(pizzaType == ThinCrispy){
        newPizzaOrder.setPizzaType(ThinCrispy);
    }

    cout<<"Each topping is $2"<<endl;
    cout<<"Would you like to add Pepperoni to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Pepperoni");
    }

    cout<<"Would you like to add Italian Sausage to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Italian Sausage");
    }

    cout<<"Would you like to add Bacon to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Bacon");
    }

    cout<<"Would you like to add Ham to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Ham");
    }

    cout<<"Would you like to add Grilled Chicken to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Grilled Chicken");
    }

    cout<<"Would you like to add Beef to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Beef");
    }

    cout<<"Would you like to add Pork to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Pork");
    }

    cout<<"Would you like to add Mushroom to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Mushroom");
    }

    cout<<"Would you like to add Red Onions to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Red Onions");
    }

    cout<<"Would you like to add Black Olives to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Black Olives");
    }

    cout<<"Would you like to add Green Peppers to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Green Peppers");
    }

    cout<<"Would you like to add Tomatos to your pizza?"<<endl;
    cout<<"Please enter Yes(y) / No(n): ";
    cin>>addTopping;
    if(addTopping == 'Y' || addTopping == 'y'){
        newPizzaOrder.setToppings("Tomatos");
    }

    newPizzaOrder.description();

    cout<<"Thank you and Enjoy your Meal!"<<endl;

    return 0;
}
