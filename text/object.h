#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

class obj {
public:
	int x, y,f,w;
	int vectextur_size;
	std::vector<sf::Sprite> sprites;
	std::vector<sf::Texture >texture;
	obj( int intx,int inty, int dialation, int walk) {
		x = intx;
		y = inty;
		f = dialation;
		w = walk;



	}
	bool addtexture(std::string filename, std::string extension ) {
		sf::Texture newtext;//redefinition upon call
		sf::Sprite newsprite;
		
		if (!newtext.loadFromFile(filename + "." + extension))//loads texture, 
		{
			std::cout << "error reading file " << filename + "." + extension << std::endl;
			return 0;
		}
		else {
			sprites.push_back( newsprite);
			texture.push_back( newtext);
		}



	};
};