#include <stdio.h>
#include <stdint.h>
#include "../include/can_parser.h"

void parseCANMessage(uint8_t *data, int length) {
    if (length < 8) {
        printf("Invalid message length\n");
        return;
    }

    uint8_t speed = data[0];        // Byte 0: speed
    uint8_t steering = data[1];     // Byte 1: steering angle
    uint8_t brake = data[2];        // Byte 2: brake status

    printf("Speed: %d km/h\n", speed);
    printf("Steering: %d deg\n", steering);
    printf("Brake: %s\n", brake ? "Applied" : "Released");
}

int main() {
    uint8_t message1[8] = {10, 20, 0, 0, 0, 0, 0, 0};
    uint8_t message2[8] = {40, 50, 1, 0, 0, 0, 0, 0};

    printf("Test 1:\n");
    parseCANMessage(message1, 8);
    printf("\nTest 2:\n");
    parseCANMessage(message2, 8);

    return 0;
}
