
/* Single AddDamage(Single) */

float Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages+AccumulatedCubeDamage::
      RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_AddDamage
                (RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage *this,
                float damageDelta,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar4 = damageDelta + (this->fields).damage;
  (this->fields).lastReceivedDamage = fVar3;
  (this->fields).damage = fVar4;
  return fVar4;
}


/* RuntimeEventManager+AccumulatedCubeDamages+AccumulatedCubeDamage() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages+AccumulatedCubeDamage::
     RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage__ctor
               (RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage *this,
               MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).lastReceivedDamage = fVar3;
  return;
}


/* Boolean get_Expired() */

bool Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages+AccumulatedCubeDamage::
     RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_get_Expired
               (RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage *this,
               MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  return _UNK_? < fVar4 - (this->fields).lastReceivedDamage;
}

