#include "CelestialBody.hpp"

class Universe {
public:
int numberOfPlanets;
void setRadius(float radius);
void setNumPlanets(int n);
float getRadius();
int getNumPlanets();
std::vector<CelestialBody> getBodies();
void addBody(CelestialBody* body);
Universe(int, float);
std::vector<CelestialBody> bodies;
private:
float radius;
};

