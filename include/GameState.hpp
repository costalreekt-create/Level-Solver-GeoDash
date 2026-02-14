#pragma once
#include <vector>

enum class GameMode {
    Cube,
    Robot,
    Spider,
    Ship,
    Wave
};

struct PlayerState {
    float x, y;
    float vx, vy;
    bool gravityDown;
    GameMode mode;
};

struct GameState {
    PlayerState p1;
    PlayerState p2;
    bool dual;
    float speedMultiplier;
    int frame;

    bool dead;
};
