
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>


class Contact {
  private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
  public:
    Contact();
    Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
    std::string get_first_name() const {
        return this->first_name;
    };
    std::string get_last_name() const {
        return this->last_name;
    };
    std::string get_nickname() const {
        return this->nickname;
    };
    std::string get_phone_number() const {
        return this->phone_number;
    };
    std::string get_darkest_secret() const {
        return this->darkest_secret;
    }
};

#endif