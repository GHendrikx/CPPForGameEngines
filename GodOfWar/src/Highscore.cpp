#include <Highscore.h>

using namespace godot;

Highscore::Highscore(){}
Highscore::~Highscore(){}

void Highscore::_register_methods(){}

void Highscore::_init(){}
void Highscore::_set_highscore(int score){
	std::ofstream highscoreFile;
    highscoreFile.open("highscore.txt");
    highscoreFile << score;
}
void Highscore::_get_highscore(){

	std::ifstream myfile("highscore.txt");
}
