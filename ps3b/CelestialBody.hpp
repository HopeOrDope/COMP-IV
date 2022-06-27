 #ifndef CELESTIAL_BODY_HPP_
 #define CELESTIAL_BODY_HPP_
 #include <iostream>
 #include <string>
 #include <exception>
 #include <iomanip>
 #include <SFML/Graphics.hpp>
 using namespace std;
 struct FileNotFoundException : public exception {
         const char * what() const noexcept {
         return "Can't find file!";
        }
};
 class CelestialBody : public sf::Drawable {
 public:
         CelestialBody() {}
         CelestialBody(sf::Vector2f iPosition, sf::Vector2f iVelocity,float iMass, std::string iImageRef);
         inline float getMass() { return mass; }
         inline sf::Vector2f getPosition() { return position; }
         inline void setPosition(sf::Vector2f nPosition) { position = nPosition; }
         inline sf::Vector2f getVelocity() { return velocity; }
         inline void setVelocity(sf::Vector2f nVelocity) { velocity = nVelocity; }
         static void createUniverse(sf::Vector2f iCenterUniverse, float iRadiusUniverse);
         void spriteUpdate();
         ~CelestialBody() { delete sprite_textures; };
         friend ostream& operator<<(ostream &out, const CelestialBody& cb);
 private:
         sf::Vector2f position;
         sf::Vector2f velocity;
         float mass;
         string imageRef;
         sf::Sprite sprite;
         sf::Texture* sprite_textures;
         virtual void draw(sf::RenderTarget& rendTarget,
         sf::RenderStates rendStates) const;
         static sf::Vector2f centerUniverse;
         static float radiusUniverse;
 };
 #endif
