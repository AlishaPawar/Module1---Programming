#include"../include/TollBooth.h"

TollBooth::TollBooth() : totalVehicles(0), totalRevenue(0.0) {

}



void TollBooth::reset() {
	totalVehicles = 0;
	totalRevenue = 0.0;
}


void TollBooth::vehiclePayingToll(int vehicleType, double tollAmount) {
	totalVehicles++;
	totalRevenue += tollAmount;
}

int TollBooth:: getTotalVehicles() {
	return totalVehicles;
}

double TollBooth:: getTotalRevenue() {
	return totalRevenue;
}
