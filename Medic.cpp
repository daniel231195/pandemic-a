
#include "Medic.hpp"
using namespace std;
using namespace pandemic;

Player& Medic::drive(City dest){
    return *this;
}

Player& Medic::fly_direct(City dest){
    return *this;
}

Player& Medic::fly_charter(City dest){
    return *this;
}

Player& Medic::fly_shuttle(City dest){
    return *this;
}

 Player& Medic::treat(City dest){
        return *this;
}

string Medic::role(){
    return "Medic";
}