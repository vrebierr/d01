#include "Pony.hpp"

Pony::Pony() {
    std::cout << "A poney was born" << std::endl;
}

Pony::~Pony() {
    std::cout << "A poney died :(" << std::endl;
}

void Pony::eat() const {
    std::cout << "Miam !" << std::endl;
}
