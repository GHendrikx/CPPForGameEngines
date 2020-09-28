#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <Godot.hpp>
#include <Node.hpp>
#include <GameManager.h>
#include <Spatial.hpp>
#include <string>
#include <PackedScene.hpp>

// Default vs libs
#include <iostream>
#include <vector>

namespace godot
{
    class EntityManager : public Spatial
    {
        GODOT_CLASS(EntityManager, Spatial);

    public:
        EntityManager();
        ~EntityManager();
        void _init();
        void _ready();
        void _progress();
        static void _register_methods();
        void _add_entity();
        void _remove_entity();
        void _search_spawn_positions();
        enum Entity_Type
        {
            SHOOTER,
            WALKER
        };

    private:
        Ref<PackedScene> EnemyScene;
        std::vector<Spatial *> spawnPositions;
    };
} // namespace godot

#endif /*ENTITYMANAGER_H*/