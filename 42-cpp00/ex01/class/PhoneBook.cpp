#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this->n_contact = 0;
    this->max_contact = false;
    std::cout << "PhoneBook created" << std::endl;
}

std::string PhoneBook::get_cin_value(std::string item){
    std::string value;
    while (value.empty()){
        std::cout << "Enter " << item << ": ";
        std::cin >> value;
    }
    return (value);
}

std::string resize_string(std::string str, int size){
    std::string new_str;

    new_str = str;
    if (str.length() > size){
        new_str = str.substr(0, size - 1) + ".";
    }
    else {
        new_str.resize(size, ' ');
    }
    return (new_str);
}

void PhoneBook::add_contact(){
    std::string first_name = get_cin_value("first name");
    std::string last_name = get_cin_value("last name");
    std::string nickname = get_cin_value("nickname");
    std::string phone_number = get_cin_value("phone number");
    std::string darkest_secret = get_cin_value("darkest secret");

    Contact contact = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
    this->contacts[this->n_contact++] = contact;
    if (this->n_contact == 8){
        this->n_contact = 0;
        this->max_contact = true;
    }
    std::cout << "Contact added" << std::endl;
}

void print_contact(Contact contact[8], int i)
{
    std::cout << "First name: " << contact[i].get_first_name() << std::endl;
    std::cout << "Last name: " << contact[i].get_last_name() << std::endl;
    std::cout << "Nickname: " << contact[i].get_nickname() << std::endl;
    std::cout << "Phone number: " << contact[i].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << contact[i].get_darkest_secret() << std::endl;
}

void PhoneBook::search_contact(){
  int index;

  this->print_contacts(this->contacts);
  std::cout << "Choose an index: ";
  std::cin >> index;
  if (index > 0 && index <= (this->max_contact ? 8 : this->n_contact)){
    print_contact(this->contacts, index - 1);
  }
  else {
    std::cout << "Invalid index" << std::endl;
  }

}

void PhoneBook::print_contacts(Contact contacts[8]){
    std::cout << "index     |first name|last name |nickname  |" << std::endl;
    for (int i = 0; i < (this->max_contact ? 8 : this->n_contact); i++){
        std::cout << i + 1 << "         |";
        std::cout << resize_string(contacts[i].get_first_name(), 10) << "|";
        std::cout << resize_string(contacts[i].get_last_name(), 10) << "|";
        std::cout << resize_string(contacts[i].get_nickname(), 10) << "|" << std::endl;
    }
}