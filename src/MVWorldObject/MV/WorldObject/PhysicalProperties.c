
/* PhysicalProperties(Single, Single, Single, Single, Single) */

void MVWorldObject.dll::MV::WorldObject::PhysicalProperties::PhysicalProperties__ctor
               (PhysicalProperties *this,float friction,float bouncyness,float softness,
               float staticFriction,float toughness,MethodInfo *method)

{
  this->friction = friction;
  this->bouncyness = bouncyness;
  this->softness = softness;
  this->staticFriction = staticFriction;
  this->toughness = toughness;
  return;
}

