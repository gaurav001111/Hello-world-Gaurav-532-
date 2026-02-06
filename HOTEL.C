#include <stdio.h>
int main () {
    int choice;
    int totalRooms = 20; // Initial rooms
    int bookedRooms = 0;
    while (1) {
        printf("\n- HOTEL MANAGEMENT SYSTEM -\n");
        printf("1. Book a room\n");
        printf("2. Cancel a booking\n");
        printf("3. View hotel status\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch (choice) {
            case 1: {
                if (totalRooms > 0) {   
                    totalRooms--;
                    bookedRooms++;
                    printf("Room booked successfully!\n");
                } else {
                    printf("Error: No rooms available to book.\n");
                }
                break;
            }
            case 2: {
                if (bookedRooms > 0) {
                    totalRooms++;
                    bookedRooms--;
                    printf("Booking cancelled successfully!\n");
                } else {
                    printf("Error: No bookings to cancel.\n");
                }
                break;
            }
            case 3: // Status View
                printf("\n--- HOTEL STATUS ---\n");
                printf("Available Rooms: %d\n", totalRooms);
                printf("Occupied Rooms: %d\n", bookedRooms);
                printf("Total Capacity: %d\n", totalRooms + bookedRooms);
                break;
            case 4:
                printf("Exiting system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select 1-4.\n");
            
            
        
        
                    
                
                
            
        
        }    
    }

    return 0;
 
} 