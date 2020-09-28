#include <Attack.h>

using namespace godot;


Attack::Attack(){}
Attack::~Attack(){}

void Attack::_register_methods(){

}

void Attack::_init(){}

void Attack::_ready(){
    GameManager::player->attack = this;
}

void Attack::_shootRay() {
//	Godot::print("Attack");
	Ref<KinematicCollision> info = move_and_collide(Vector3(0, 0,0));
	
	if (info != NULL) {
	Godot::print("Got Something");
	}
	else{
		Godot::print("Got Nothing");
	}
}

