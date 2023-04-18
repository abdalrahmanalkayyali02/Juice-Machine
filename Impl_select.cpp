#include "Interface_select.h"
#include <iostream>
#include <string>

void selectRegister::select_item(int choice_item) {
    if (choice_item >= 0) {
        select = choice_item;
    } else {
        select = 1;
    }
}

void selectRegister::set_quantity_for_customer(int product_number) {
    if (product_number >= 1) {
        product_quantity = product_number;
    } else {
        product_quantity = 1;
    }
}

int selectRegister::make_sale(int choice_item) const {
    if (choice_item == 1) {
        return (apple_storge - product_quantity);
    } else if (choice_item == 2) {
        return (orange_storge - product_quantity);
    } else if (choice_item == 3) {
        return (mango_storge - product_quantity);
    } else if (choice_item == 4) {
        return (strawbary_banan_storge - product_quantity);
    } else {  return 0; }
}

void selectRegister::view_storge(int choice_item)  {
    if (choice_item == 1) {
        apple_storge =  apple_storge - product_quantity; 
    } else if (choice_item == 2) {
        orange_storge =  orange_storge - product_quantity;
    } else if (choice_item == 3) {
        mango_storge =  mango_storge  - product_quantity;
    } else if (choice_item == 4) {
        strawbary_banan_storge = strawbary_banan_storge - product_quantity;
    }

    std::cout << "Apple  Juice Storge = " << apple_storge   << "\n";
    std::cout << "Orange Juice Storge = " << orange_storge  << "\n";
    std::cout << "Mango  Juice Storge = " << mango_storge   << "\n";
    std::cout << "Strawbary-Banana Storge = " << strawbary_banan_storge << "\n";
}

bool selectRegister::is_enable(int choice_item) const {
    if (choice_item == 1) {
        return (apple_storge >= product_quantity);
    } else if (choice_item == 2) {
        return (orange_storge >= product_quantity);
    } else if (choice_item == 3) {
        return (mango_storge >= product_quantity);
    } else if (choice_item == 4) {
        return (strawbary_banan_storge >= product_quantity);
    }
    return 0;
}
