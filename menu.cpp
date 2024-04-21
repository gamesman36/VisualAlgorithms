#include <iostream>
#include "draw.h"
#include "menu.h"
#include "sorts.h"

void display_main_menu() {
  int user_choice;
  std::cout << "Visual Algorithms\n";
  std::cout << "(C) 2024 Daniel Andreas Wang\n\n";
  std::cout << "Select algorithm to demonstrate:\n\n";
  std::cout << "1. Bubblesort\n\n";
  std::cin >> user_choice;

  switch(user_choice) {
    case 1:
      render_bubblesort();
  }
}