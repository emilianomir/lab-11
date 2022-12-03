#include <iostream>

using namespace std;

class Drone{
  private:
    int batteryLevel;
    int homeCoorX, homeCoorY, homeCoorZ;
    int currCoorX, currCoorY, currCoorZ;
    string direction;
  public: 
    Drone(){
      batteryLevel = 100;
      homeCoorX = 0;
      homeCoorY = 0;
      homeCoorZ = 0;
      currCoorX = 0;
      currCoorY = 0;
      currCoorZ = 0;
    }
    
    void checkBatteryLevel(){
      cout << "Battery level is at: " << batteryLevel << "%" << endl;
      if(batteryLevel < 21){
        cout << "Warning, battery is low, charge soon" << endl;
      }
    }
    void checkCurrPosition(){
      if(batteryLevel < 21){
        cout << "Warning, battery is low, charge soon" << endl;
      }
      cout << "The drone's current position is (" << currCoorX << ", " << currCoorY << ", " << currCoorZ  << ")" << endl;
    }
    void moveDrone(){
      if(batteryLevel < 21){
        cout << "Warning, battery is low, charge soon" << endl;
      }
      cout << "In what direction do you want to operate the drone?" << endl;
      cout << "Write forward, backward, right, left, up, or down" << endl;
      cin >> direction;
      if(direction == "down" && currCoorZ < 1){
        cout << "Can't go lower, try again" << endl;
      }
      if(direction == "forward"){
        currCoorY = currCoorY + 1;
        batteryLevel = batteryLevel - 2;
        };
      if(direction == "backward"){
        currCoorY = currCoorY - 1;
        batteryLevel = batteryLevel - 5;
        };
      if(direction == "right"){
        currCoorX = currCoorX + 1;
        batteryLevel = batteryLevel - 1;
        };
      if(direction == "left"){
        currCoorX = currCoorX - 1;
        batteryLevel = batteryLevel - 1;
        };
      if(direction == "up"){
        currCoorZ = currCoorZ + 1;
        batteryLevel = batteryLevel - 7;
        };
      if(direction == "down" && currCoorZ > 0){
        currCoorZ = currCoorZ - 1;
        batteryLevel = batteryLevel - 3;
        };
    }
    void bringDroneBackDown(){
      if(batteryLevel < 21){
        cout << "Warning, battery is low, charge soon" << endl;
      }
      if(currCoorZ != 0){
        for(int i = currCoorZ; i > 0; i--){
          cout << "Drone returning to ground level...currently at " << currCoorZ << " height." << endl;
          cout << "Standby." << endl;
          currCoorZ = currCoorZ - 1; 
        }
      }
      else {
        cout << "Drone is at ground level, height " << currCoorZ << "." << endl;
      }
      cout << "Drone has arrived at ground level, thanks for waiting" << endl;
    }
};
