package com.parking;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class ParkingServiceTest {

    @Test
    void testParking() {

        ParkingService service = new ParkingService();

        Vehicle vehicle = new Vehicle("KA05CD5678", "Bike");

        String result = service.parkVehicle(vehicle);

        assertTrue(result.contains("parked successfully"));

        assertEquals(4, service.getAvailableSlots());
    }
}
