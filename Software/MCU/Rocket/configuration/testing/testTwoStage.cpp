#include "Configuration.hpp"
#include <iostream>

int main() {
	Configuration config;

	//can set to false
	bool testSet = false;
	config.setTwoStageRocket(testSet);
	bool success = config.getTwoStageRocket() == testSet;
	if(!success) {
		std::cout << "Failed to set two stage" << std::endl;
		return 1;
	}

	//can set to true
	testSet = true;
	config.setTwoStageRocket(testSet);
	success == config.getTwoStageRocket() == testSet;
	if(!success) {
		std::cout << "Failed to set two stage" << std::endl;
		return 1;
	}


	return 0;
}
