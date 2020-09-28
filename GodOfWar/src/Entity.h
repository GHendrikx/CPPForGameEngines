#ifndef ENTITY_H
#define ENTITY_H

#include <Godot.hpp>
#include <RigidBody.hpp>
#include <CSGMesh.hpp>
#include <GameManager.h>
#include <EntityManager.h>
namespace godot
{

    class Entity : public CSGMesh
    {
        GODOT_CLASS(Entity,CSGMesh);

        public:
            Entity();
            ~Entity();
            static void _register_methods();
            void _init();
            void _ready();
            void _process(float delta);
            void _set_entity_type(int i);
            void _on_Entity_body_entered(PhysicsBody* body);
            EntityManager::Entity_Type type;


        private:
            float speed;
    };

}

#endif