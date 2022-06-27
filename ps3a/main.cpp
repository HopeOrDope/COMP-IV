#include <iostream>
#include "CelestialBody.hpp"
#include "Universe.hpp"

int height = 512, width = 512;

int main() {
sf::RenderWindow window(sf::VideoMode(width, height), "ps3a");
window.setFramerateLimit(60);
sf::RectangleShape rect(sf::Vector2f(20, 20));
rect.setPosition(100, 100);
std::string num, rad;
std::cin >> num;
std::cin >> rad;
sf::Image img;
img.loadFromFile("starfield.jpg");
sf::Texture tex;
tex.loadFromImage(img);
sf::Sprite s;
s.setTexture(tex);
Universe universe(atoi(num.c_str()), atof(rad.c_str()));
std::cout << "There are " << num << " planets..." << std::endl;
for(int i = 0; i < universe.numberOfPlanets; i++) {
    CelestialBody* body = new CelestialBody();
    body -> screenh = height;
    body -> screenw = width;
    body -> setUniverseRadius(universe.getRadius());
    std::cin >> *body;universe.bodies.push_back(*body);
    std::cout << *body;
    }
while (window.isOpen()){
    sf::Event event;
    while (window.pollEvent(event)){
        if (event.type == sf::Event::Closed)
            window.close();
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            window.close();
}
    window.clear();
    window.draw(s);
    std::vector<CelestialBody>::iterator itr;
for(itr = universe.bodies.begin(); itr != universe.bodies.end(); itr++)
      window.draw(*itr);

    window.display();
    }
    return 0;
}
