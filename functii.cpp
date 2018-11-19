#include "Header.h"
#include<iostream>

StudentAC::StudentAC()
{
	nume = "NULL";
	nota = 0;
}

StudentAC::StudentAC(std::string nume, int nota)
{
	this->nume = nume;
	this->nota = nota;
}

void StudentAC::afisare()
{
	std::cout << "Nume: " << nume << std::endl;
	std::cout << "Nota: " << nota << std::endl;
}

void StudentAC::modificareNota(int nouaNota)
{
	nota = nouaNota;
	std::cout << "Noua nota: " << nouaNota;
}

