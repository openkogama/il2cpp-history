
/* PhysicalProperties(Single, Single, Single, Single, Single) */

void MVWorldObject.dll::MV::WorldObject::PhysicalProperties::PhysicalProperties__ctor
               (PhysicalProperties *this,float friction,float bouncyness,float softness,
               float staticFriction,float toughness,MethodInfo *method)

{
  this->softness = friction;
  this->staticFriction = bouncyness;
  this->toughness = softness;
  this[1].friction = staticFriction;
  this[1].bouncyness = toughness;
  return;
}

