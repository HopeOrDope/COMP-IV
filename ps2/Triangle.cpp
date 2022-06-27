/*Copyright 2022 Aniketh Rai*/
#include "Triangle.h"
#include <stdlib.h>
#include <cmath>
static unsigned int range = 54321;
Triangle::Triangle(double xc, double yc,
                double len):triangle(sf::LineStrip, 4) {
double height = std::sqrt(3.0) / 2.0 * len;
double xvertex_a = xc - (len / 2.0);
double yvertex_a = yc - (height / 3.0);
double xvertex_b = xc + (len / 2.0);
double yvertex_b = yc - (height / 3.0);
double xvertex_c = xc;
double yvertex_c = yc + (2.0/3.0) * height;
int v1 = rand_r(&range) % 255;
int v2 = rand_r(&range) % 255;
int v3 = rand_r(&range) % 255;
triangle[0].position = sf::Vector2f(xvertex_a , yvertex_a);
triangle[0].color = sf::Color(v1 , v2 , v3);
triangle[1].position = sf::Vector2f(xvertex_b , yvertex_b);
triangle[1].color = sf::Color(v1 , v2 , v3);
triangle[2].position = sf::Vector2f(xvertex_c , yvertex_c);
triangle[2].color = sf::Color(v1 , v2 , v3);
triangle[3].position = triangle[0].position;
triangle[3].color = sf::Color(v1 , v2 , v3);
}
