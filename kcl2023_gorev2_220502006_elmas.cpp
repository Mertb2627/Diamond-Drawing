#include "kcl2023_gorev2_220502006_elmas.h"
#include <iostream>



Elmas_çiz::Elmas_çiz(char karakter , int boyut) {



	setKarakter(karakter);
	setBoyut(boyut);

}

void Elmas_çiz::setKarakter(char karakter) {


	this->karakter = karakter;
}


char Elmas_çiz::getKarakter() const {

	return karakter;
}


void Elmas_çiz::setBoyut(int boyut) {

	if (boyut < 3) {

		this->boyut = 3;
	}

	else if (boyut > 15) {

		this->boyut = 15;

	}

	else {

		this->boyut = boyut;

	}

}


int Elmas_çiz::getBoyut() const {

	return boyut;

}


void Elmas_çiz::çiz() const {

	int a = getBoyut();

	for (int i = 1; i <= a; i += 2) {
		for (int n = 0; n < (a - i) / 2; ++n)
			std::cout << " ";
		for (int n = 0; n < i; ++n)


			std::cout << getKarakter();
		std::cout << std::endl;

	}

	for (int i = a - 2; i > 0; i -= 2) {
		for (int n = 0; n < (a - i) / 2; ++n)
			std::cout << " ";
		for (int n = 0; n < i; ++n)


			std::cout << getKarakter();
		std::cout << std::endl;

	}

}


