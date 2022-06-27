#include <iostream>
#include <fstream>
#include "Universe.hpp"
#include "CelestialBody.hpp"
#include <string>
#include <exception>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#define widthwin 512
#define fpswin 60
#define heightwin 512
using namespace std;
 int main(int argc, char* argv[])
{
 if(argc < 2)
 {
   cout << "wrong syntax use the code provided in readme" << endl;
   return 1;
 }
float mtime, ctime;
float time_change;
ctime = 0;
mtime = stod(argv[1]);
time_change = stod(argv[2]);
sf::Vector2f centerUniverse{widthwin / 2, heightwin / 2};
Universe solarSystem(centerUniverse);
cin >> solarSystem;
sf::RenderWindow window(sf::VideoMode(widthwin, heightwin), "ps3b");
sf::Texture spaceTextures;
sf::Font sFont;
sf::SoundBuffer buffer;
window.setFramerateLimit(fpswin);
if(!spaceTextures.loadFromFile("starfield.jpg")) {
throw FileNotFoundException();
cout << "No background image selected" << endl;
         }
sf::Sprite spaceBackground(spaceTextures);
spaceBackground.setScale(static_cast<float>(widthwin) / spaceTextures.getSize().x ,static_cast<float>(heightwin) / spaceTextures.getSize().y);
 if(!sFont.loadFromFile("font.ttf")) 
{throw FileNotFoundException();       }
if(!buffer.loadFromFile("muj.wav")) 
{throw FileNotFoundException();}
sf::Sound sound(buffer);
sf::Text timeElapsed{"Time Elapsed: " + to_string(ctime), sFont};
timeElapsed.setPosition(0,0);
timeElapsed.setCharacterSize(20);
timeElapsed.setOutlineColor(sf::Color::White);
while(window.isOpen()) 
{    sf::Event event;
while(window.pollEvent(event)) 
{sound.play();
if (event.type == sf::Event::Closed ||
sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
{ofstream result;
result.open("output.txt");
result << solarSystem;
result.close();
window.close();
 }
}
if (ctime < mtime) {
window.clear();
 window.draw(spaceBackground);
for ( const auto &p : solarSystem.getBodies() )
 window.draw(*p);
window.draw(timeElapsed);
window.display();
solarSystem.step(time_change);
ctime += time_change;
timeElapsed.setString("Time Elapsed: " + to_string(ctime) + "Seconds" ); }
else
window.setFramerateLimit(60);
}
 return 0;
 }


