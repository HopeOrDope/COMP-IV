#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow rai_window(sf::VideoMode(700, 700), "HELLO WORLD");
    sf::CircleShape rai_circle(50.0f);
    rai_circle.setFillColor(sf::Color::Magenta);
    sf::Texture rai_texture;
    rai_texture.loadFromFile("sprite.png");
    
    sf::Sprite rai_sprite(rai_texture);
    
    rai_sprite.setPosition(100.0f,0);
  
    
    
    

    while (rai_window.isOpen())
    {
        sf::Event event;
        while (rai_window.pollEvent(event))
        {    
            
            if (event.type == sf::Event::Closed)
                rai_window.close();
             if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::BackSpace))
             rai_sprite.setPosition(100.0f,0);
                
                
             if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
             {
               rai_sprite.move(-10.0f,0);
              
        }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
             {
               rai_sprite.move(10.0f,0);
              
        }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
             {
               rai_sprite.move(0,-10.0f);
              
        }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
             {
               rai_sprite.move(0,10.0f);
              
              }
              if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
              { sf::Vector2i mousePos=sf::Mouse::getPosition(rai_window);
                rai_sprite.setPosition((float)mousePos.x,(float)mousePos.y);
              }
              
              

    
        rai_window.clear();
        rai_window.draw(rai_circle);
        rai_window.draw(rai_sprite);
        rai_window.display();
    
    }
    }
    return 0;

}
