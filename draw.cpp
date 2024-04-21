#include <SFML/Graphics.hpp>
#include "constants.h"
#include "draw.h"

void drawArray(sf::RenderWindow& window, const std::vector<int>& array) {
    window.clear(sf::Color::Black);
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        sf::RectangleShape rect(sf::Vector2f(ARRAY_ELEMENT_WIDTH, array[i]));
        rect.setPosition(i * ARRAY_ELEMENT_WIDTH, WINDOW_HEIGHT - array[i]);
        rect.setFillColor(sf::Color::White);
        window.draw(rect);
    }
    window.display();
}