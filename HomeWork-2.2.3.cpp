#include <iostream>
#include <string>

struct address {
    std::string country;
    std::string city;
    std::string street;
    unsigned int house;
    unsigned int apartment;
    unsigned int index;
};

void printAddress(const address& a) {
    std::cout << "Страна: " << a.country << std::endl;
    std::cout << "Город: " << a.city << std::endl;
    std::cout << "Улица : " << a.street << std::endl;
    std::cout << "Номер дома : " << a.house << std::endl;
    std::cout << "Номер квартиры : " << a.apartment << std::endl;
    std::cout << "Индекс : " << a.index << std::endl;
}

int main()
{
    address ad1 = { "Россия", "Москва", "Арбат", 12, 8, 123456 };
    address ad2 = { "Россия", "Ижевск", "Пушкина", 59, 143, 953769};
    
    setlocale(LC_ALL, "Russian");

    printAddress(ad1);
    std::cout << std::endl;
    printAddress(ad2);
}
