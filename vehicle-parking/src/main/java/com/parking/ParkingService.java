package com.parking;

public class ParkingService {

    private int availableSlots = 5;

    public String parkVehicle(Vehicle vehicle) {

        if (availableSlots > 0) {
            availableSlots--;

            return "Vehicle "
                    + vehicle.getVehicleNumber()
                    + " parked successfully. Available Slots: "
                    + availableSlots;
        }

        return "Parking Full!";
    }

    public int getAvailableSlots() {
        return availableSlots;
    }
}
