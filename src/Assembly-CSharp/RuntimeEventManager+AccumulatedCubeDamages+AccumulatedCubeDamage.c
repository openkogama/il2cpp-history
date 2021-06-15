
/* Single AddDamage(Single) */

float Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages+AccumulatedCubeDamage::
      RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_AddDamage
                (RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage *this,
                float damageDelta,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).lastReceivedDamage = fVar1;
  fVar1 = (this->fields).damage + damageDelta;
  (this->fields).damage = fVar1;
  return fVar1;
}


/* RuntimeEventManager+AccumulatedCubeDamages+AccumulatedCubeDamage() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages+AccumulatedCubeDamage::
     RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage__ctor
               (RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage *this,
               MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).lastReceivedDamage = fVar1;
  return;
}


/* Boolean get_Expired() */

bool Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages+AccumulatedCubeDamage::
     RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_get_Expired
               (RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage *this,
               MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  return _UNK_? < fVar1 - (this->fields).lastReceivedDamage;
}

