#include "Player.h"
#include <Input.hpp>
#include <Position3D.hpp>

using namespace godot;

Player::Player(){}
Player::~Player(){}

 void Player::_register_methods(){
     register_method("_process", &Player::_process);
     register_property<Player, float>("Speed", &Player::speed, 0.5f);
 }

void Player::_process(float delta){
 }

void Player::_rotate(float degrees)
{
    //making the rotation vector.
    Vector3 rotation = Vector3(get_rotation_degrees().x
    , get_rotation_degrees().y - degrees * speed, 
    get_rotation_degrees().z);

    set_rotation_degrees(rotation);
}

void Player::_ready(){
}

void Player::_init()
{
    GameManager::player = this;
}

void Player::_attack()
{
    Godot::print("Attack");
}
void Player::_defend()
{
    Godot::print("Defend"); 
    Spatial* spatial = NULL;
    spatial = static_cast<Spatial*>(get_node("Shield"));

    if(spatial == NULL)
        Godot::print("NULL");
    else
        spatial->show();
}

