#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

class Laptop
{
private:
    string Model;
    string Brand;
    int Year;
    int Memory;
    int RamSize;

public:
    Laptop(string model = "", string brand = "", int year = 0, int memory = 0, int ram = 0);
    void about();
    void softwareUpdate();
    bool operator==(const Laptop &other) const;
};

Laptop::Laptop(string model, string brand, int year, int memory, int ram)
    : Model(model), Brand(brand), Year(year), Memory(memory), RamSize(ram) {}

void Laptop::about()
{
    cout << "Brand: " << Brand << endl;
    cout << "Model: " << Model << endl;
    cout << "Year: " << Year << endl;
    cout << "Memory: " << Memory << " GB" << endl;
    cout << "RAM Size: " << RamSize << " GB" << endl;
}

void Laptop::softwareUpdate()
{
    cout << "Checking for software updates for " << Brand << " laptops...\n";
    cout << "Updating software...\n";
    cout << "Software update completed successfully.\n";
}

bool getUserPromptString(string prompt, string *input)
{
    cout << "Enter " << prompt << ": ";
    cin >> *input;
    return true;
}

bool getUserPromptInt(string prompt, int *input)
{
    cout << "Enter " << prompt << ": ";
    cin >> *input;
    return true;
}

void mainPrompt(int *choice)
{
    cout << "==========General=============\n";
    cout << "1. About\n";
    cout << "2. Software Update\n";
    cout << "0. Exit\n";
    cout << "===============================\n";
    cin >> *choice;
}

int main()
{
    string model, brand;
    int year, memory, ram;

    getUserPromptString("Model", &model);
    getUserPromptString("Brand", &brand);
    getUserPromptInt("Year", &year);
    getUserPromptInt("Memory", &memory);
    getUserPromptInt("RamSize", &ram);

    Laptop myLaptop(model, brand, year, memory, ram);

    int choice;
    int *pChoice = &choice;

    do
    {
        mainPrompt(pChoice);

        switch (choice)
        {
        case 1:
            cout << "=====About=====" << endl;
            myLaptop.about();
            break;

        case 2:
            cout << "=====Software update=====" << endl;
            myLaptop.softwareUpdate();
            break;
        }

    } while (choice != 0);

    return 0;
}
