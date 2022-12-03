#include <iostream>
#include "drone.h"
using namespace std;

int main() {
  Drone firstDrone;
  firstDrone.moveDrone();
  firstDrone.checkBatteryLevel();
  firstDrone.bringDroneBackDown();
}

