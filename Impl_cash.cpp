#include "Interface_cash.h"
#include <iostream>
#include <iomanip>

void cashRegister::accept_money(double pay_money) {
    if (pay_money >= price * product_quantity) {
        money_on_hand = pay_money;
    } else {
        money_on_hand = 0;
    }
}

void cashRegister::set_quantity_for_cash(double product_for_customer) {
    if (product_for_customer >= 1) {
        product_quantity = product_for_customer;
    } else {
        product_quantity = 1;
    }
}

void cashRegister::set_price_of_product(double price_product) {
    if (price_product > 0) {
        price = price_product;
    } else { 
        price = price_product * -1;
    }
}

void cashRegister::set_product_name(std::string name_of_product) {
    product_name = name_of_product;
}

double cashRegister::get_total_cost() const {
    return price * product_quantity;
}

double cashRegister::get_rest_of_money() const {
    return money_on_hand - get_total_cost(); 
}

bool cashRegister::is_customer_money_suitable() const {
    if (money_on_hand == get_total_cost()) {
        return true;
    } else if (money_on_hand > get_total_cost() ) {
        return true;
    } else {
        return false;
    }
}

void cashRegister::show_recipt() {
    char null_ver = '\0';
    std::cout << "product name : "     << product_name  << "\n"
        << "product cost : "     << price  << "\n"
        << "product quantety : " << product_quantity << "\n"
        << "Total cost = "       << get_total_cost() << "\n";
}
