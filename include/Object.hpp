#pragma once

class ObjectMotionBase {
public:
    void move(float speed);
    void turn(float angle);
    float get_current_state();

private:
    float move_speed = 0;
    float turn_speed = 0;
};