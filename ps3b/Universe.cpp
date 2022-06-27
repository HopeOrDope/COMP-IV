 #include "Universe.hpp"
 using namespace std;
 std::istream& operator>>(std::istream& in, Universe& u) 
 {
         int numBodies;
         in >> numBodies >> u.radius;
         CelestialBody::createUniverse(u.center, u.radius);
         for(int i = 0; i < numBodies; i++) {
                 float xPosition, yPosition, xVelocity, yVelocity, mass;
                 string imageRef;
                 in >> xPosition >> yPosition >> xVelocity >> yVelocity >> mass >>imageRef;
                 u.celBodies.push_back(
                 make_unique<CelestialBody>(sf::Vector2f(xPosition, yPosition),
                         sf::Vector2f(xVelocity, yVelocity),mass, imageRef));
         }
         return in;
 }
 ostream& operator<<(ostream& out, const Universe& u) 
 {
         out << u.celBodies.size() << endl;
         out << u.radius << endl;
         for(const auto &b : u.celBodies) out << (*b) << endl;
         return out;
 }
 void Universe::step(float seconds) 
 {
         auto getNetForce = [&](size_t planetIndex) -> sf::Vector2f 
         {
                 sf::Vector2f netForce;
                 for(size_t i = 0; i < celBodies.size(); i++) 
                 {
                         if(i != planetIndex) 
                         {
                                 sf::Vector2f position_change = celBodies[i]->getPosition() - celBodies[planetIndex]->getPosition();
                                 float planetDistance = hypot(position_change.x, position_change.y);
                                 float scaleForce =(6.67430e-11 * celBodies[planetIndex]->getMass() * celBodies[i]->getMass()) /pow(planetDistance, 2);
                                 sf::Vector2f force_xy = 
                                 {
                                scaleForce * (position_change.x /planetDistance),
                                scaleForce * (position_change.y /planetDistance)
                                 };
                                 netForce += force_xy;
                         }
                 }
                 return netForce;
         };
         vector<sf::Vector2f> rPosition, rVelocity;
         for(size_t i = 0; i < celBodies.size(); i++) 
         {
                 sf::Vector2f netForce = getNetForce(i);
                 sf::Vector2f planetAccel = 
                 {
                         netForce.x / celBodies[i]->getMass(),
                         netForce.y / celBodies[i]->getMass()
                 };
                 sf::Vector2f velocity = 
                 {
                        celBodies[i]->getVelocity().x + seconds * planetAccel.x,
                         celBodies[i]->getVelocity().y + seconds * planetAccel.y
                 };
                 sf::Vector2f position = 
                 {
                         celBodies[i]->getPosition().x + seconds * velocity.x,
                         celBodies[i]->getPosition().y + seconds * velocity.y
                 };
                 rVelocity.push_back(velocity);
                 rPosition.push_back(position);
         }
         for(size_t i = 0; i < celBodies.size(); i++) {
                 celBodies[i]->setVelocity(rVelocity[i]);
                 celBodies[i]->setPosition(rPosition[i]);
                 celBodies[i]->spriteUpdate();
         }
 }