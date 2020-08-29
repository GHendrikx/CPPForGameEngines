#include "Player.h"

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
    Godot::print(get_rotation_degrees().x);
    //making the rotation vector.
    // Vector3 rotation = Vector3(get_rotation_degrees().x
    // , get_rotation_degrees().y - degrees * speed, 
    // get_rotation_degrees().z);

    //set_rotation_degrees(rotation);
    // Godot::print(get_rotation_degrees());
}

void Player::_ready(){
    GameManager::player = this;
}

void Player::_init()
{
    Godot::print("Player");
    //Player::shield = load("res://Scenes/Schield.tscn").instance();
}

void Player::_attack()
{
    //Shoot particle
    Godot::print("Attack");
}
void Player::_defend()
{
    // defend instantiating shield
    Godot::print("defend");
}

