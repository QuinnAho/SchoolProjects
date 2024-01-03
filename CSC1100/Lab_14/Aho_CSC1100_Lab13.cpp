//Quinn Aho

#include <iostream>
#include <vector>
#include <iomanip>  // For std::fixed and std::setprecision

class cashRegister {
private:
    int cashOnHand;  // In cents

public:
    cashRegister() {
        cashOnHand = 50000;  // Equivalent to $500
    }

    cashRegister(int cash) {
        cashOnHand = cash;
    }

    int getCurrentBalance() {
        return cashOnHand;
    }

    void acceptAmount(int amount) {
        cashOnHand += amount;
    }
};

class dispenserType {
private:
    int numberOfItems;
    int cost;  // In cents

public:
    dispenserType() {
        numberOfItems = 50;
        cost = 50;  // 50 cents
    }

    dispenserType(int items, int itemCost) {
        numberOfItems = items;
        cost = itemCost;
    }

    int getNoOfItems() {
        return numberOfItems;
    }

    int getCost() {
        return cost;
    }

    void makeSale() {
        numberOfItems--;
    }
};

void showSelection() {
    std::cout << "Products sold by the candy machine:" << std::endl;
    std::cout << "1. Candies" << std::endl;
    std::cout << "2. Chips" << std::endl;
    std::cout << "3. Gum" << std::endl;
    std::cout << "4. Cookies" << std::endl;
}

void sellProduct(dispenserType& dispenser, cashRegister& cashRegisterInstance) {
    std::vector<std::string> products = {"Candies", "Chips", "Gum", "Cookies"};

    int selection;
    std::cout << "Enter the product number: ";
    std::cin >> selection;

    if (selection >= 1 && selection <= products.size()) {
        std::cout << "Cost of " << products[selection - 1] << ": $" 
                  << std::fixed << std::setprecision(2) << dispenser.getCost() / 100.0 << std::endl;
    } else {
        std::cout << "Invalid selection." << std::endl;
        return;
    }

    int amount;
    std::cout << "Enter the amount deposited (in cents): ";
    std::cin >> amount;

    if (amount >= dispenser.getCost()) {
        dispenser.makeSale();
        cashRegisterInstance.acceptAmount(amount);
        std::cout << "Item sold. Thank you! Change: $" 
                  << std::fixed << std::setprecision(2) << (amount - dispenser.getCost()) / 100.0 << std::endl;
    } else {
        std::cout << "Insufficient amount deposited. Item not sold." << std::endl;
    }
}

int main() {
    cashRegister cashRegisterInstance;
    dispenserType dispenser;

    showSelection();
    sellProduct(dispenser, cashRegisterInstance);

    return 0;
}
