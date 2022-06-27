/*Copyright 2022 Aniketh Rai*/
#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
class Triangle : public sf::Drawable {
 public:
Triangle(double xc, double yc, double len);
 private:
virtual void draw(sf::RenderTarget& target , sf::RenderStates states) const {
            target.draw(triangle , states);}
sf::VertexArray triangle;
};
#endif  // TRIANGLE_H_
