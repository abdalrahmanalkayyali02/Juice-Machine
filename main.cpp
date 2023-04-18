/* This main function is  do as the juice machine work
 * 1- it tell to customer to enter selction to choice  his drink 
 * 2- then the machine is cheack if there is product or not 
 * 3- it will return true if it,s exict
 * 4- and tell the user of enter the number of the quantuty number
 * 5- and then wil caulcualte the cost 
 * 6- then tell use to get it 
 * 7- if the money is ok it will contnuo normal 
 * 8- if not it will return and tell him to enter correct it again correctly 
 * 9- it will contoniuo that until the user enter 9 then will finsh program */

#include "Interface_select.h"
#include "Interface_cash.h"
#include <iostream>
#include <string>
#include <iomanip>

void display_output();
int main(void) {
    double select_product ,select_product_number, customer_money, product_price;
    char null_ver = '\0';
    cashRegister cash;
    selectRegister select_tool;

    do {
        display_output();
        std::cin >> select_product;
        select_tool.select_item(select_product);
        if (select_product == 9) {
            std::cout << "Hava a nice Day 🙂 " << std::endl;
            break;
        } else {  // if 
            switch((int)(select_product)) {
                case 1: 
                    std::cout << "You choice orange juice the cost is (50 cents)" << std::endl;
                    std::cout << "Enter The quantity of the product number : ";
                    cash.set_price_of_product(0.5);
                    cash.set_product_name("Orange Juice");
                    break;
                case 2:
                    std::cout << "You choice apple juice the cost is (65 cents)" << std::endl;
                    std::cout << "Enter The quantity of the product number : ";
                    cash.set_price_of_product(0.65);
                    cash.set_product_name("Apple Juice");
                    break;
                case 3:
                    std::cout << "You choice mango juice the cost is (80 cents) " << std::endl;
                    std::cout << "Enter The quantity of the product number : ";
                    cash.set_price_of_product(0.80);
                    cash.set_product_name("Mango Juice");
                    break;
                case 4:
                    std::cout << "You choice strawberry banana juice the cost is (85 cents)" << std::endl;
                    std::cout << "Enter The quantity of the product number : ";
                    cash.set_price_of_product(0.85);
                    cash.set_product_name("Strawbary-Banana Juice");
                    break;
                default:
                    std::cout << "You Enter illgal selection !!!" << std::endl;
            } // switch 

            // enter product quantity
            std::cin >> select_product_number;
            cash.set_quantity_for_cash(select_product_number);
            select_tool.set_quantity_for_customer(select_product_number);
            std::cout << std::setw(45) << std::left << std::setfill('-') << null_ver << "\n";

            // cheack if there is product enable or not 
            if (select_tool.is_enable(select_product) == true) {
                std::cout << "The Total cost = " << cash.get_total_cost() << std::endl;
                std::cout << "Paid the cost : ";
                std::cin >> customer_money;
                cash.accept_money(customer_money);
                std::cout << std::setw(45) << std::left << std::setfill('-') << null_ver << "\n";

                // cheack if the money is suitable or not 
                if (cash.is_customer_money_suitable() == true) { 
                    select_tool.make_sale(select_product);
                    std::cout << "The rest of money = " << cash.get_rest_of_money() << std::endl;
                    select_tool.view_storge(select_product);
                    std::cout << std::setw(45) << std::left << std::setfill('-') << null_ver << "\n";
                    cash.show_recipt();
                    std::cout << std::setw(45) << std::left << std::setfill('-') << null_ver << "\n";
               
                } else { // if2
                    std::cout << "The money is not Enought ! " << std::endl;
                    std::cout << std::setw(45) << std::left << std::setfill('-') << null_ver << "\n";
                } //else 2
            
            } else { // if 1
                std::cout << "There is no Enought product !" << std::endl;
                std::cout << std::setw(45) << std::left << std::setfill('-') << null_ver << "\n";
            } // else 1

        } // else 

    } // do 
    while (select_product != 9);

    return 0;
}

void display_output() {
    char null_ver = '\0';
    std::cout << std::setw(4) << std::left << std::setfill('*') << null_ver
        << "Welcome to Shelly's Juice Shop "
        << std::setw(4) << std::left << std::setfill('*') << null_ver
        << "\n"
        << "To select an item, enter \n"
        << "1 for orange juice (50 cents)\n"
        << "2 for apple juice (65 cents) \n"
        << "3 for mango juice (80 cents) \n"
        << "4 for strawberry banana juice (85 cents) \n"
        << "9 to exit"
        << "\n"
        << std::setw(45) << std::left << std::setfill('-') << null_ver
        << "\n"
        << "Enter Your choice : ";
}
