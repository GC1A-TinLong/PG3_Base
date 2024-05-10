#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <iostream>

int main() {

	std::list<const char*> stationList = {
		"Tokyo",		
		"Kanda",		
		"Akihabara",	
		"Okachimachi",	
		"Ueno",			
		"Uguisudani",	
		"Nippori",		
		"Tabata",		
		"Komagome",		
		"Sugamo",		
		"Otsuka",		
		"Ikebukuro",	
		"Mejiro",		
		"Takadanobaba",	
		"Shin-Okubo",	
		"Shinjuku",		
		"Yoyogi",		
		"Harajuku",		
		"Shibuya",		
		"Ebisu",		
		"Meguro",		
		"Gotanda",		
		"Osaki",		
		"Shinagawa",	
		"Tamachi",		
		"Hamatsucho",	
		"Shimbashi",	
		"Yurakucho",	
	};
	auto itr = stationList.begin();

	std::cout << "�R����w�ꗗ�@1970�N�F" << std::endl;
	while (itr != stationList.end()) {
		std::cout << *itr << std::endl;
		itr++;
	}

	for (auto itr = stationList.begin(); itr != stationList.end(); itr++) {
		if (*itr == "Tabata") {
			itr = stationList.insert(itr, "Nishi-nippori");
			itr++;
		}
	}
	std::cout << "\n�R����w�ꗗ�@2019�N�F" << std::endl;
	itr = stationList.begin();
	while (itr != stationList.end()) {
		std::cout << *itr << std::endl;
		itr++;
	}
	
	for (auto itr = stationList.begin(); itr != stationList.end(); itr++) {
		if (*itr == "Tamachi") {
			itr = stationList.insert(itr, "Takanawa Gateway");
			itr++;
		}
	}
	std::cout << "\n�R����w�ꗗ�@2022�N�F" << std::endl;
	itr = stationList.begin();
	while (itr != stationList.end()) {
		std::cout << *itr << std::endl;
		itr++;
	}

	return 0;
}