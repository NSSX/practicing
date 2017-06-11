#include <iostream>
#include "Contact.class.hpp"






void addContact(Contact *mycontact){
std::string myString = "";


while(myString == ""){
std::cout << "Info : ";
std::cin >> myString;
}

std::cout << "MERCI " << myString << std::endl;

}







int main(void){

Contact mycontact[8];
int nbContact = 0;

char buff[512];
std::string myString;

while(42){
std::cout <<"Waiting : ";
 std::getline(std::cin, myString);
//myString = buff;
    if(myString == "EXIT"){
        std::cout <<"LEAVING" << std::endl;
        return 0;
    }
    else if(myString == "ADD" && nbContact < 8){
        std::cout <<"ADDING" << std::endl;
        addContact(&mycontact[nbContact]);
        nbContact++;
    }
    else if(myString == "SEARCH"){
std::cout <<"SEARCHING" << std::endl;
    }
std::cout << " STRING : " << myString <<std::endl;
}

    return 0;
}
