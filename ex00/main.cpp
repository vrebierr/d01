#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony    pony;
    pony.eat();
    std::cout << "Function will terminate. Ponyland will be destroy..." << std::endl;
}

void ponyOnTheHeap()
{
    Pony    *pony = new Pony();
    pony->eat();
    delete pony;
    std::cout << "Function will terminate. Ponyland will be destroy..." << std::endl;
}

int main()
{
    std::cout << "Creating a pony on the stack" << std::endl;
    ponyOnTheStack();
    std::cout << "Creating a pony on the heap" << std::endl;
    ponyOnTheHeap();
    return 0;
}
