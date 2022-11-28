#pragma once

class Weapon;

class properties {
private:
  float strength;

public:
	properties(float);

public:
  float getDamage(Weapon&);
};