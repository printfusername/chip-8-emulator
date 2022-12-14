#ifndef KEYPRESSES_H
#define KEYPRESSES_H
#include <SFML/Window/Keyboard.hpp>
#include <array>
 
struct Keypresses
{
public:

	std::array<sf::Keyboard::Key, 16> key_to_code =
	{
		sf::Keyboard::Key::X,    sf::Keyboard::Key::Num1, sf::Keyboard::Key::Num2,
		sf::Keyboard::Key::Num3, sf::Keyboard::Key::Q,    sf::Keyboard::Key::W,
		sf::Keyboard::Key::E,    sf::Keyboard::Key::A,    sf::Keyboard::Key::S, 
		sf::Keyboard::Key::D,    sf::Keyboard::Key::Z ,   sf::Keyboard::Key::C,
		sf::Keyboard::Key::Num4, sf::Keyboard::Key::R,    sf::Keyboard::Key::F, sf::Keyboard::Key::V 
	};
};

#endif