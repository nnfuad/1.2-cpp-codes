#include <iostream>
#include <string>
using namespace std;

class Cars{
private:

    int milage;
    string model;
    string color;
    string brand;

public:

    void setmodel(string _model){
        model = _model;
    }
    void setmilage(int _milage){
        milage = _milage;
    }
    void setcolor(string _color){
        color = _color;
    }
    void setbrand(string _brand){
        brand = _brand;
    }

    string getmodel(){
        return model;
    }
    string getbrand(){
        return brand;
    }
    string getcolor(){
        return color;
    }
    int getmilage()
    {
        return milage;
    }
};

int main()
{
    Cars cars[10];
    for (int i = 0; i < 10; i++) {
        string brand, model, color;
        double mileage;

        cout << "Enter information for car " << (i + 1) << ":\n";
        cout << "Brand: ";
        getline(cin, brand);
        cars[i].setbrand(brand);

        cout << "Model: ";
        getline(cin, model);
        cars[i].setmodel(model);

        cout << "Color: ";
        getline(cin, color);
        cars[i].setcolor(color);

        cout << "Mileage: ";
        cin >> mileage;
        cin.ignore();
        cars[i].setmilage(mileage);
    }

    cout << "\nDisplaying car information:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Car " << (i + 1) << ":\n";
        cout<<"Mileage: "<<cars[i].getmilage()<<endl;
        cout<<"Color: "<<cars[i].getcolor()<<endl;
        cout<<"Model: "<<cars[i].getmodel()<<endl;
        cout<<"Brand: "<<cars[i].getbrand()<<endl;
    }

}
