// Copyright (c) 2022 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 20, 2022
// This program asks the user for a mark level
// and returns its middle percentage.

#include <iostream>


// this function uses an if else if statement to
// determine middle percentage of a mark level
int CalcMark(std::string level) {
  if (level == "4+") {
    return 98;
  } else if (level == "4") {
    return 91;
  } else if (level == "4-") {
    return 83;
  } else if (level == "3+") {
    return 78;
  } else if (level == "3") {
    return 75;
  } else if (level == "3-") {
    return 71;
  } else if (level == "2+") {
    return 68;
  } else if (level == "2") {
    return 65;
  } else if (level == "2-") {
    return 61;
  } else if (level == "1+") {
    return 58;
  } else if (level == "1") {
    return 55;
  } else if (level == "1-") {
    return 51;
  } else if (level == "R") {
    return 25;
  } else {
    return -1;
  }
}

// this function gets input from the user
// and calls the other function
int main() {
  // declares variables
  std::string levelUser;
  int percentage;

  // get input from user
  std::cout << "Enter the level you want to convert to %: ";
  std::cin >> levelUser;

  percentage = CalcMark(levelUser);

  // display the result to the user
  if (CalcMark(levelUser) == -1) {
    std::cout << levelUser << " is not a valid input!";
  } else {
    std::cout << "Level " << levelUser << " has a middle percentage of ";
    std::cout << percentage << "%";
  }
}

