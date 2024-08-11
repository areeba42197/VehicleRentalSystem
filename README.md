# VehicleRentalSyste
Vehicle rental system project using C++

---
This is a C++ console application that simulates a vehicle rental system. The program allows users to display available vehicles, search for vehicles by name or ID, rent or return vehicles, and store information in a file.

## Features

- **Display Vehicles**: List all vehicles in the system.
- **Search by Name**: Search for a vehicle by its name.
- **Search by ID**: Search for a vehicle by its ID.
- **Rent a Vehicle**: Rent a vehicle if it’s available.
- **Return a Vehicle**: Return a rented vehicle.
- **Display Available Vehicles**: List all vehicles that are currently available for rent.
- **Display Unavailable Vehicles**: List all vehicles that are currently rented out.
- **Write to File**: Store vehicle information in a file.

## Usage

1. **Compile and run** the program:

   ```bash
   g++ -o rentalsystem main.cpp rentalsystem.cpp
   ./rentalsystem
   ```

2. **Menu Options**:
    - **1. Display Vehicles**: This will display a list of all vehicles currently in the system.
    - **2. Search by Name**: Enter the name of the vehicle to search for it.
    - **3. Search by ID**: Enter the vehicle ID to search for it.
    - **4. Rent a Vehicle**: Rent a vehicle by its ID or name.
    - **5. Return a Vehicle**: Return a rented vehicle by its ID or name.
    - **6. Display Available Vehicles**: Show all vehicles that are currently available for rent.
    - **7. Display Unavailable Vehicles**: Show all vehicles that are currently rented out.
    - **8. Write to File**: Save the current state of the vehicle list to a file.
    - **0. Exit**: Exit the application.

## File Structure

- **main.cpp**: Contains the `main` function and handles user interaction.
- **rentalsystem.h**: Header file declaring the `rentalsystem` class.
- **rentalsystem.cpp**: Implementation of the `rentalsystem` class.

## Future Enhancements

- Add a graphical user interface (GUI) to improve user experience.
- Implement a database for persistent storage of vehicle and customer information.
- Add more search criteria and filtering options.

---
