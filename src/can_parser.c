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
