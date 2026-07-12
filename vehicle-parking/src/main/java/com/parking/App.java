package com.parking;

public class App {

    public static void main(String[] args) {

        ParkingService parkingService = new ParkingService();

        Vehicle vehicle = new Vehicle("KA01AB1234", "Car");

        String result = parkingService.parkVehicle(vehicle);

        System.out.println(result);
    }
}
