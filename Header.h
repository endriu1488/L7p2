#pragma once
#ifndef FUNCTII_H_
#include <string>

class StudentAC 
{
	std::string nume; 
	int nota; 
public:
	StudentAC(); 
	StudentAC(std::string nume, int nota); 
	void afisare(); 
	void modificareNota(int nouaNota); 
};

#endif // !FUNCTII_H_
