#include <iostream>
#include <vector>
#include <string>

// class B;

// class A {
//     private:
//         int x = 4;
//         friend B;
// };

// class B {
//     public:
//         void print_x(A a){
//             std::cout << a.x;
//         }
// };
class Bank;

class Account {
    private: 
        std::string name;
        int balance;

    public:
        std::string get_name(){
            return this->name;
        }
        int get_balance(){
            return this->balance;
        }
        friend Bank;
};

class Bank {
    private:
        std::vector<Account> account;
    public:
        void add_account(std::string name, int balance){
            Account new_account;
            new_account.name = name;
            new_account.balance = balance;

            this->account.push_back(new_account);
        }
        void get_account(std::string name){
            int index = -1;
            for(int i = 0; i < this->account.size(); i++){
                if(!name.compare(this->account[i].name)){
                    index = i;
                    break;
                }
            }

            if(index != -1){
                std::cout << "Name: " << this->account[index].name;
                std::cout << ", balance: " << this->account[index].balance << std::endl;
            }
            else{
                std::cout << "Not found!" << std::endl;
            }
        }

};

int main(){
    // B b;
    // b.print_x(A());

    
    Bank bank;
    bank.add_account("Long", 2000);
    bank.add_account("Duy", 3000);
    bank.add_account("Tuan", 4000);
    
    bank.get_account("Duy");
    return 0;
}