#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
  private:
    std::string get_cin_value(std::string item);
    Contact contacts[8];
    int n_contact;
    bool max_contact;
  
  public:
    PhoneBook();
    void add_contact();
    void search_contact();
    void print_contacts(Contact contacts[8]);
};

#endif