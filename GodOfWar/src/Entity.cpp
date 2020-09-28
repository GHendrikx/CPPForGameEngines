#include <Entity.h>

using namespace godot;

Entity::Entity(){}
Entity::~Entity(){}

void Entity::_register_methods(){
    register_method((char*)"_on_Entity_body_entered", &Entity::_on_Entity_body_entered);
    register_method("_process", &Entity::_process);
}

void Entity::_init(){}

void Entity::_set_entity_type(int i){
    Entity::type = (EntityManager::Entity_Type)i;
}

void Entity::_ready(){
}

void Entity::_process(float delta){
    if(Entity::type != NULL){
        switch(Entity::type){
            case EntityManager::Entity_Type::SHOOTER:
            break;

            case EntityManager::Entity_Type::WALKER:
            break;
        }
    }
}

void Entity::_on_Entity_body_entered(PhysicsBody* body){
    Godot::print("hide");
    hide();
}