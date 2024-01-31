#include <iostream>
#include <string>
#include <list>

using namespace std;

class Contact
{
private:
    string name;
    string phoneNumber;

public:
    Contact(string name, string phoneNumber) : name(name), phoneNumber(phoneNumber) {}

    string getName()
    {
        return name;
    }

    string getPhoneNumber()
    {
        return phoneNumber;
    }

    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }
};

class PhoneBook
{
private:
    Contact contact;

public:
    list<Contact> contacts;

    void addContact(Contact &contact)
    {
        contacts.push_back(contact);
    }

    bool removeContact(string name)
    {
        for (auto &contact : contacts)
        {
            if (contact.getName() == name)
            {
                contacts.remove(contact);
                return true;
            }
        }
        return false;
    }

    void showContacts()
    {
        cout << "all contact:" << endl;
        for (auto &contact : contacts)
        {
            cout << "Name: " << contact.getName() << ", Phone Number: " << contact.getPhoneNumber() << endl;
        }
    }

    void FindContact(string name)
    {
        cout << "I find the contact" << endl;
        for (auto &contact : contacts)
        {
            if (contact.getName() == name)
            {
                cout << contact.getName() << " " << contact.getPhoneNumber() << endl;
            }
            else
            {
                cout << "Contact does not exist " << endl;
            }
        }
    }
};

int main()
{
    Contact myContact = Contact("Nodir", "+998933766674");
    Contact Ilhomjon = Contact("Ilhomjon", "+998943766674");
    PhoneBook myPhoneContact;
    myPhoneContact.addContact(myContact);
    myPhoneContact.addContact(Ilhomjon);

    myPhoneContact.FindContact("Ilhomjon");

    cout << "==========================" << endl;

    phoneBook.removeContact("Nodir");

    cout << "The otherer contacts numbers:" << endl;
    phoneBook.showContacts();

    return 0;
}
