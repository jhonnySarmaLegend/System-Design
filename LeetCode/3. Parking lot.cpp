
// Link --> https://leetcode.com/problems/design-parking-system/description/

class ParkingSystem {
private:
    vector<int> spotsAvailable; // Vector to hold the available spots for each car type

public:
    // Constructor initializing the number of parking spots for different sizes of cars
    ParkingSystem(int big, int medium, int small) {
        spotsAvailable = {0, big, medium, small}; // Index 0 is ignored for convenience
    }

    // Function to add a car of a specific type to the parking system
    bool addCar(int carType) {
        // Check if there is a spot available for the car type
        if (spotsAvailable[carType] == 0) {
            // If no spots are available, return false
            return false;
        }
        // If there is a spot available, decrease the count and return true
        --spotsAvailable[carType];
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
