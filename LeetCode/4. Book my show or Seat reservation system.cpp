//Link --> https://leetcode.com/problems/seat-reservation-manager/description/

class SeatManager {
    
private:
    // Priority queue to manage the available seats. Seats are sorted in ascending order.
    priority_queue<int, vector<int>, greater<int>> seats;

public:
    // Constructor that initializes the seat manager with a given number of seats.
    SeatManager(int n) {
        // Add all seats to the priority queue in ascending order.
        for (int i = 1; i <= n; ++i) {
            seats.push(i);
        }
    }

    // Reserves the lowest-numbered seat that is available and returns the seat number.
    int reserve() {
        // Get the smallest available seat number from the priority queue.
        int allocatedSeat = seats.top();
        // Remove the seat from the priority queue as it is now reserved.
        seats.pop();
        // Return the reserved seat number.
        return allocatedSeat;
    }

    // Unreserves a previously reserved seat so it can be used again in the future.
    void unreserve(int seatNumber) {
        // Add the seat back to the priority queue as it is now available.
        seats.push(seatNumber);
    }
};

/**
 * This code snippet shows how to create an instance of the SeatManager and
 * use its reserve and unreserve methods.
 *
 * // Initialization
 * SeatManager* seatManager = new SeatManager(n);
 *
 * // Reserve a seat
 * int reservedSeatNumber = seatManager->reserve();
 *
 * // Unreserve a specific seat
 * seatManager->unreserve(seatNumber);
 *
 * // Remember to free allocated memory if it's no longer needed, to avoid memory leaks
 * delete seatManager;
 */
