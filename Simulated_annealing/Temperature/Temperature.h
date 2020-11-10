//
// Created by voland on 10.11.2020.
//

#ifndef SIMULATED_ANNEALING_TEMPERATURE_H
#define SIMULATED_ANNEALING_TEMPERATURE_H

//
// Created by voland on 09.11.2020.
//
#include <math.h>

class Temperature
{
protected:
    double temp;
    int it = 0;
public:
    Temperature(double temperature) : temp(temperature) {}

    virtual double getTemp() = 0;
};

class Boltzman: public Temperature
{
public:
    Boltzman(double temp): Temperature(temp) {}

    double getTemp();
};

class Cauchy: public Temperature
{
public:
    Cauchy(double temp): Temperature(temp) {}

    double getTemp();
};

class Basic: public Temperature
{
public:
    Basic(double temp): Temperature(temp) {}

    double getTemp();
};

#endif //SIMULATED_ANNEALING_TEMPERATURE_H
