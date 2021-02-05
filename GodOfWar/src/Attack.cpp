#include <Attack.h>

using namespace godot;

Attack::Attack() {}
Attack::~Attack() {}

void Attack::_register_methods()
{
    register_method((char*)"_on_RigidBody_body_entered", &Attack::_on_RigidBody_body_entered);
    register_method("_process", &Attack::_process);
    register_method((char*)"_on_CollisionShape_visibility_changed", &Attack::_on_CollisionShape_visibility_changed);
}

void Attack::_init() {
    GameManager::player->attack = this;
    Attack::visible = false;
}

void Attack::_on_CollisionShape_visibility_changed(Variant) {
    Attack::visible = !Attack::visible;
}
void Attack::_ready()
{
}

void Attack::_process()
{
    if(is_visible())
    {
        //Ref<KinematicCollision> info = move_and_collide(Vector3(0, 0, 0));
//
//        if (info != NULL) {
//
//        }
    }
}

void Attack::_on_RigidBody_body_entered(PhysicsBody *body){
    if(is_visible())
    {

        Godot::print("on rigidbody body entered" + Attack::visible);
        body->hide();
    }
    else
        Godot::print("isnt visible");
}