// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in November 2020
// Program finding the surface area of a sphere

#include <iostream>
#include <cmath>

int main() {
    // This function finds the sum of 2 numbers

    float radius;
    float surface_area;

    // Input
    std::cout << "This program finds the surface area of a sphere!"
    << std::endl;

    std::cout << "Please enter a radius (mm): ";
    std::cin >> radius;

    // Process
    surface_area = 4 * M_PI * pow(radius, 2);

    // Output
    std::cout << "The surface area is: " << surface_area << "mm" << std::endl;
}
