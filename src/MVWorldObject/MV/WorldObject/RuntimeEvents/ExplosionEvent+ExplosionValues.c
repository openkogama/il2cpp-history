
/* ExplosionEvent+ExplosionValues(Single, Single, DamageFallOffType) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues::
     ExplosionEvent_ExplosionValues__ctor
               (ExplosionEvent_ExplosionValues *this,float radius,float centerDamage,
               DamageFallOffType__Enum damageFallOffType,MethodInfo *method)

{
  this->damageFallOffType = (int32_t)radius;
  this[1].radius = centerDamage;
  this[1].centerDamage = (float)damageFallOffType;
  return;
}

