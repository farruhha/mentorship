#include <iostream>
#include <string>

using namespace std;

class Laptop {
private:
    string Model;
    string Brand;
    int Price;
    int MemoryCapacity;
    int RAMSize;

public:
    Laptop(string model, string brand, int price, int storage, int ram) 
        : Model(model),Brand(brand), Price(price), MemoryCapacity(storage), RAMSize(ram) {}

        string getModel(){
            return Model;
        }

    string getBrand() const {
        return Brand;
    }

    int getPrice() const {
        return Price;
    }

    int getStorageCapacity() const {
        return MemoryCapacity;
    }

    int getRAMSize() const {
        return RAMSize;
    }

    void displayInfo() const {
        cout << "Laptop Information:" << endl;
        cout << "Brand: " << Brand << endl;
        cout << "Model: " << Model << endl;
        cout << "Price $: " << Price << endl;
        cout << "Memory Capacity: " << MemoryCapacity << " GB" << endl;
        cout << "RAM Size: " << RAMSize << " GB" << endl;
    }
};

int main() {
    Laptop myFirstLaptop("Apple","Mackintosh", 200, 128, 8);

    myFirstLaptop.displayInfo();

    return 0;
}
