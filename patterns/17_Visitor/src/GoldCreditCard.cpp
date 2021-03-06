//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "GoldCreditCard.h"

GoldCreditCard::GoldCreditCard(float init_value) {
    this->current_saving = init_value;
}

float GoldCreditCard::getSavings() {
    return this->current_saving;
}

bool GoldCreditCard::pay(float amount) {
    std::cout << "Paying amount" << amount << std::endl;
    if (this->current_saving - amount < 0) {
        std::cout << "Cant't pay!" << std::endl;
        return false;
    }
    this->current_saving -= amount;
    return true;
}

float GoldCreditCard::visit(ICreditVisitor *visitor) {
    return visitor->visit(this);
}
