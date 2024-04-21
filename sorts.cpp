#include <SFML/Graphics.hpp>
#include <vector>
#include <algorithm>
#include <numeric>
#include <chrono>
#include <thread>
#include "constants.h"
#include "draw.h"
#include "sorts.h"

void render_bubblesort() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Sorting Algorithm Animation");
    std::vector<int> array(ARRAY_SIZE);
    std::iota(array.begin(), array.end(), 1); // Fill array with numbers 1 to ARRAY_SIZE
    std::random_shuffle(array.begin(), array.end()); // Shuffle the array

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        bubblesort_step(array); // Perform one step of bubble sort
        drawArray(window, array); // Update the window with the current state of the array
        std::this_thread::sleep_for(std::chrono::milliseconds(10)); // Add a small delay
    }
}

void bubblesort_step(std::vector<int>& array) {
    static int i = 0;
    static int j = 0;

    if (i < ARRAY_SIZE - 1) {
        if (j < ARRAY_SIZE - i - 1) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
            }
            ++j;
        } else {
            ++i;
            j = 0;
        }
    }
}