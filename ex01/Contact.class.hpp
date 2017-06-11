#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact{
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_adress;
    std::string email_adress;
    std::string phone_number;
    std::string birthday_date;
    std::string faborite_meal;
    std::string underwear_color;
    std::string darkest_secret;

    Contact(void);
    ~Contact(void);


};



#endif
