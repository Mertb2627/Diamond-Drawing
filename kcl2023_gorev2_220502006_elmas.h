#pragma once


class Elmas_çiz{

private:
	char karakter;
	int boyut;



public:
    Elmas_çiz(char karakter, int boyut);


    void setKarakter(char karakter);
    char getKarakter() const;


    void setBoyut(int boyut);
    int getBoyut() const;

    void çiz() const;

};

