#ifndef TOLLBOOTH_H_
#define TOLLBOOTH_H_


class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    TollBooth();

    void reset();


    void vehiclePayingToll(int vehicleType, double tollAmount);

    int getTotalVehicles();

    double getTotalRevenue();

};

#endif /* TOLLBOOTH_H_ */
