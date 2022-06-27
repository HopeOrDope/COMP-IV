/*Copyright 2022 Aniketh Rai*/
#include <iostream>
#include <string>
#include <vector>
#include "Triangle.h"
#include <cmath>
#define WIDTH 800
#define HEIGHT 800

void fTree(std::vector<Triangle> *tris , double len ,
            int depth , double _xcen , double _ycen) {
if (depth < 0)
return;
tris->push_back(Triangle(_xcen, _ycen, len));
double height = (std::sqrt(3) / 2.0) * len;
double _xcen_a = _xcen - (len / 2.0);
double ycenter_a = _ycen - (2.0/3.0) * height;
double _xcen_b = _xcen + (3.0/4.0) * len;
double ycenter_b = _ycen - (1.0/6.0) * height;
double _xcen_c = _xcen - (1.0/4.0) * len;
double ycenter_c = _ycen + (5.0/6.0) * height;
fTree(tris, len / 2, depth - 1, _xcen_a, ycenter_a);
fTree(tris, len / 2, depth - 1, _xcen_b, ycenter_b);
fTree(tris, len / 2, depth - 1, _xcen_c, ycenter_c);}
int main(int argcc, char* argv[]) {
double len = std::stod(argv[1]);
int depth = std::stoi(argv[2]);
std::vector<Triangle> tris;
double centerx = 400;
double centery = 400;
tris.clear();
fTree(&tris, len, depth, centerx, centery);
sf::RenderWindow window(sf::VideoMode(WIDTH , HEIGHT), "TFractal");
sf::Image img;
img.loadFromFile("backg.jpg");
sf::Texture t;
t.loadFromImage(img);
sf::Sprite s;
s.setTexture(t);
while (window.isOpen()) {
sf::Event event;
while (window.pollEvent(event)) {
if (event.type == sf::Event::Closed)
window.close();
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
window.close();}
window.clear();
window.draw(s);
for (Triangle &x : tris)
window.draw(x);
window.display();}
return 0;
}
