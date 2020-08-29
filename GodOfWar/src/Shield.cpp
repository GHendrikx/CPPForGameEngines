#include <Shield.h>

using namespace godot;

void Shield::_register_methods() {
}

void Shield::_init()
{
    GameManager::player->shield = this;
}

Shield::Shield(){

}
Shield::~Shield(){

}

