#include <string>
#include <iostream>
#include "class/PhoneBook.hpp"

int main(int argc, char* argv[])
{
    std::string action;

    PhoneBook *phone_book = new PhoneBook();

    
    while (true)
    {
        std::cout << "Enter an action (ADD, SEARCH and EXIT): ";
        std::cin >> action;
        
        if (action == "ADD")
            phone_book->add_contact();
        else if (action == "SEARCH")
            phone_book->search_contact();
        else if (action == "EXIT")
            break;
    }
    delete phone_book;
}