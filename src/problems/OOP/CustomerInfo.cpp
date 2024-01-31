#include <iostream>
#include <list>
#include <string>

using namespace std;

class Account {
private:
    double accountBalance;
    string accountId;
    string accountType;

public:
    Account(string accountId, string type) : accountId(accountId), accountType(type), accountBalance(0) {}

    string getAccountId() {
        return accountId;
    }

    string getAccountType() {
        return accountType;
    }

    void deposit(double depositAmount) {
        accountBalance += depositAmount;
    }

    void withdraw(double withdrawalAmount) {
        if (withdrawalAmount <= accountBalance) {
            accountBalance -= withdrawalAmount;
        } else {
            cout << "You cannot withdraw more than the available balance" << endl;
        }
    }

    double getBalance() {
        return accountBalance;
    }
};

class Customer {
private:
    string firstName;
    string lastName;
    Account& mainAccount;
   

public:  
    list<Account> additionalAccounts;

    Customer(string firstName, string lastName, Account& mainAccount)
        : firstName(firstName), lastName(lastName), mainAccount(mainAccount) {}

    string getFirstName() {
        return firstName;
    }

    string getLastName() {
        return lastName;
    }

    string getMainAccountId() {
        return mainAccount.getAccountId();
    }

    void addAccount(Account account) {
        additionalAccounts.push_back(account);
    }

    string getAccountIds() {
        string accountIds;
        for (auto& account : additionalAccounts) {
            accountIds += account.getAccountId() + " ";
        }
        return accountIds;
    }

    string getAccountTypes() {
        string accountTypes;
        for (auto& account : additionalAccounts) {
            accountTypes += account.getAccountType() + " and ";
        }
        return accountTypes;
    }

    void deposit(double amount, string accountId) {
        for (auto& account : additionalAccounts) {
            if (account.getAccountId() == accountId) {
                account.deposit(amount);
                return;
            }
        }
        cout << "Account not found" << endl;
    } 

    double getBalance(string accountId) {
        for (auto& account : additionalAccounts) {
            if (account.getAccountId() == accountId) {
                return account.getBalance();
            }
        }
        cout << "Account not found" << endl;
        return 0.0;
    }

    void deposit(double amount) {
        mainAccount.deposit(amount);
    }

    double getBalance() {
        return mainAccount.getBalance();
    }

    void checkBalance() {
        double balance = mainAccount.getBalance();
        cout << "Customer: " << firstName << ", " << lastName << " has a balance of $" << balance << endl;
    }

    bool operator==(const Customer& other) const {
        return firstName == other.firstName && lastName == other.lastName;
    }
};

class Bank {
private:
    string bankName;
    list<Customer> customers;

public:
    Bank(string bankName) : bankName(bankName) {
        cout << "Bank " << bankName << " is ready." << endl;
    }

    void registerCustomer(Customer& customer) {
        customers.push_back(customer);
        cout<<"customer has registered sucsessfully"<<endl;
    }

    void getAllBankBalance() {
        double totalBalance = 0;
        for (auto& customer : customers) {
            totalBalance += customer.getBalance(customer.getMainAccountId());
            for (auto& account : customer.additionalAccounts) {
                totalBalance += account.getBalance();
            }
        }

        cout << "Bank " << bankName << " has a total balance of $" << totalBalance << " at the moment." << endl;
    }

     Customer getCustomer(string firstName) {
        for (auto& customer : customers) {
            if (customer.getFirstName() == firstName) {
                return customer;
            }
        }
       
        return Customer("", "", *(new Account("", "")));
    }

    void getNumberOfCustomers() {
        int numberOfCustomers = customers.size();
        cout << "Bank " << bankName << " has " << numberOfCustomers << " customers" << endl;
    }

    void PrintAllCustomersInfo() {
        for (auto& customer : customers) {
            cout << "First Name: " << customer.getFirstName() << endl;
            cout << "Last Name: " << customer.getLastName() << endl;
            cout << "Main Account Number: " << customer.getMainAccountId() << " (Type: " << customer.getMainAccountId() << ")" << endl;
            cout << "Additional Account Numbers: " << customer.getAccountIds() << " (Types: " << customer.getAccountTypes() << ")" << endl;
            cout << "Main Account Balance: " << customer.getBalance(customer.getMainAccountId()) << endl;
            for (auto& account : customer.additionalAccounts) {
                cout << "Additional Account Balance (ID: " << account.getAccountId() << " Type: " << account.getAccountType() << "): " << account.getBalance() << endl;
            }
            cout << endl;
        }
    }

    bool UnregisterCustomer(string firstName) {
        for (auto& customer : customers) {
            if (customer.getFirstName() == firstName) {
                customers.remove(customer);
                return true;
            }
        }
        return false; 
    }
};

int main() {
    Bank anorBank("Anor");

    

    Account farruhMainAccount("887873", "checking");
    Customer farruh("Farruh", "Habibullaev", farruhMainAccount);
    
    anorBank.registerCustomer(farruh);

    
    Account account1("12345", "saving");
    Account account2("54321", "income");

    farruh.addAccount(account1);
    farruh.addAccount(account2);
    

    Customer customer = anorBank.getCustomer("Farruh");
    farruh.deposit(100.0, "887873");
    farruh.deposit(200.0, "12345");
    farruh.deposit(300.0, "54321");
    cout<<"================================="<<endl;
    farruh.checkBalance();

    cout << "Customer: " << farruh.getFirstName() << "'s accounts are: " << farruh.getAccountIds() << " (Types of Account: " << farruh.getAccountTypes() << ")" << endl;



    Account nodirMainAccount("123456", "credit");
    Customer nodir("Nodir", "Habibullaev", nodirMainAccount);
    anorBank.registerCustomer(nodir);
    
    

    anorBank.getNumberOfCustomers();

   
    anorBank.getAllBankBalance();
    

    anorBank.PrintAllCustomersInfo();

    return 0;
}
