#include <iostream>

struct address {

	std::string Country;
	std::string City;
	std::string Street;
	int House;
	int Apparts;
	int index;

	void print_address() {

		std::cout << "Country:" << Country << std::endl
			<< "City: " << City << std::endl
			<< "Street: " << Street << std::endl
			<< "House ¹: " << House << std::endl
			<< "Appartaments: " << Apparts << std::endl
			<< "Index: " << index << std::endl;
	}

};


int main() {
	setlocale(LC_ALL, "ru_Ru");

	address work = { "Russia", "Moscow", "Malaya Pirogovskaya street", 16, 406, 119048 };
	address home = { "Russia", "Mytishi", "Mira street", 35, 136, 141008 };

	work.print_address();
	std::cout << std::endl;
	home.print_address();

	return 0;
}