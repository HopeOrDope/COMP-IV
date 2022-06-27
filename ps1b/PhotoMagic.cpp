
#include "PhotoMagic.h"
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main(int argc, char*argv[]) {
	std::string pw = argv[3]; 
	std::string seed;
	std::string sF = "";

	if(pw.size() < 16 && pw.size() > 0){
		int i = 0;
		std::string seed = pw; 
		while(seed.size() != 16){
			seed.push_back(pw[i]);
			i++;
			i = i % pw.size();
		}
	}

	if(pw.size() > 16){
		for(int i = 0; i < 16; i++){
			seed.push_back(pw[i]);
		}
	}

	if(pw.size() == 16){
		seed = pw;
	}


	for(int i = 0; i < 16; i++){
		sF += std::to_string((unsigned int)(seed[i])%2);
	}
    sf::Image kitty_image;

	if (!kitty_image.loadFromFile("cat.png"))
		return -1;
    sf::Texture texture;
	texture.loadFromImage(kitty_image);

	sf::Sprite Kitty1;
	Kitty1.setTexture(texture);

	FibLFSR fibo(sF);

	transform(kitty_image, &fibo);


    if (!kitty_image.saveToFile("cat-out.png"))
		return -1;
    sf::Image kitty_img2;
    if(!kitty_img2.loadFromFile("cat-out.png"))
         return -1;
    sf::Texture tex1;
    tex1.loadFromImage(kitty_img2);
    sf::Sprite Kitty2;
    Kitty2.setTexture(tex1);



	sf::Color p;


	for (int x = 0; x<350; x++) {
		for (int y = 0; y< 250; y++) {
			p = kitty_image.getPixel(x, y);
			p.r = 255 - p.r;
			p.g = 255 - p.g;
			p.b = 255 - p.b;
			kitty_image.setPixel(x, y, p);
		}
	}

	sf::Vector2u size_of_img = kitty_image.getSize();
	sf::RenderWindow window_one(sf::VideoMode(size_of_img.x, size_of_img.y), "Kitty Cat");
	sf::RenderWindow window_two(sf::VideoMode(size_of_img.x, size_of_img.y), "No hacker can hack :D");




	while (window_one.isOpen() && window_two.isOpen())
	{
		sf::Event event1,event2;
		while (window_one.pollEvent(event1))
		{
			if (event1.type == sf::Event::Closed)
				window_one.close();
		}
		while (window_two.pollEvent(event2))
		{
			if (event2.type == sf::Event::Closed)
			    window_two.close();
		}

		window_one.clear();
		window_one.draw(Kitty1);
		window_one.display();

		window_two.clear();
		window_two.draw(Kitty2);
		window_two.display();
	}
     

	

	return 0;
}
void transform(sf::Image& kitty_image, FibLFSR* fibo){
	sf::Vector2u size = kitty_image.getSize();
	sf::Color color, newColor;

	for(int i = 0; i < size.x; i++){
		for(int j = 0; j < size.y; j++){
			color = kitty_image.getPixel(i, j);

			color.r = color.r xor fibo->generate(8);
			color.g = color.g xor fibo->generate(8);
			color.b = color.b xor fibo->generate(8);

			kitty_image.setPixel(i, j, color);	
		}
	}
}
