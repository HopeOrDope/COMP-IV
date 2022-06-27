 #ifndef UNIVERSE_HPP_
 #define UNIVERSE_HPP_
 #include <iostream>
 #include <cmath>
 #include "CelestialBody.hpp"
 #include <SFML/Graphics.hpp>
 #include <string>
 #include <vector>
 using namespace std;
 class Universe {
 public:
         Universe() {}
         Universe(sf::Vector2f iCenter) : center(iCenter) {}
         inline const vector<unique_ptr<CelestialBody>>&getBodies() const { return celBodies; }
         friend istream& operator>>(istream& in, Universe& u);
         friend ostream& operator<<(ostream& out, const Universe& u);
         void step(float seconds);
 private:
         sf::Vector2f center;
         float radius;
         vector<unique_ptr<CelestialBody>> celBodies;
 };
 #endif

