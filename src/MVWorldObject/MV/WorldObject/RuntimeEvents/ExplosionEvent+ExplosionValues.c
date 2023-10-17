
/* ExplosionEvent+ExplosionValues(Single, Single, DamageFallOffType) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues::
     ExplosionEvent_ExplosionValues__ctor
               (ExplosionEvent_ExplosionValues *this,float radius,float centerDamage,
               DamageFallOffType__Enum damageFallOffType,MethodInfo *method)

{
  this->radius = radius;
  this->centerDamage = centerDamage;
  this->damageFallOffType = damageFallOffType;
  return;
}

