 #include "CelestialBody.hpp"
 using namespace std;
 sf::Vector2f CelestialBody::centerUniverse{0,0};
 float CelestialBody::radiusUniverse = 0;
 CelestialBody::CelestialBody(sf::Vector2f iPosition, sf::Vector2f iVelocity, float iMass, string iImageRef) {
mass = iMass;
position = iPosition;
velocity = iVelocity;
imageRef = iImageRef;sprite_textures = new sf::Texture;
if(!sprite_textures->loadFromFile(imageRef)) {
throw FileNotFoundException();
}
sprite = sf::Sprite(*sprite_textures);
sprite.setOrigin(sprite_textures->getSize().x / 2,
sprite_textures->getSize().y / 2);
spriteUpdate();
 }
 void CelestialBody::createUniverse(sf::Vector2f iCenterUniverse,
 float iRadiusUniverse) {
centerUniverse = iCenterUniverse;
radiusUniverse = iRadiusUniverse;
 }
 void CelestialBody::spriteUpdate() {
sf::Vector2f sprite_position{position.x / radiusUniverse *centerUniverse.x + centerUniverse.x,position.y / radiusUniverse * centerUniverse.y + centerUniverse.y};
sprite.setPosition(sprite_position);
 }
 void CelestialBody::draw(sf::RenderTarget& rendTarget, sf::RenderStates rendStates) const {
rendTarget.draw(sprite, rendStates);
 }
 ostream& operator<<(ostream &out, const CelestialBody& cb) {\
out.setf(ios_base::scientific);
out << setprecision(4) << left;
out << setw(12) << cb.position.x << setw(12) << cb.position.y << setw(12)<< cb.velocity.x << setw(12) << cb.velocity.y << setw(12)<< cb.mass << right << setw(12) << cb.imageRef;
out.unsetf(ios_base::scientific);
         return out;
 }
