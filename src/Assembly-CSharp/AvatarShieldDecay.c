
/* Void ResetDecayTimer() */

void Assembly-CSharp.dll::AvatarShieldDecay::AvatarShieldDecay_ResetDecayTimer
               (AvatarShieldDecay *this,MethodInfo *method)

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
  pcVar1 = pcRam_?;
  (this->fields).decayTime = fVar3 + _UNK_?;
  pcVar4 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar4;
  fVar3 = (float)(*pcVar1)();
  (this->fields).updateValueTime = fVar3 + _UNK_? + _UNK_?;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarShieldDecay::AvatarShieldDecay_Update
               (AvatarShieldDecay *this,MethodInfo *method)

{
  fVar1 = (this->fields).decayTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (fVar1 < fVar4) {
    fVar1 = (this->fields).accumulatedShieldDecay;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    (this->fields).accumulatedShieldDecay = fVar4 * _UNK_? + fVar1;
  }
  fVar1 = (this->fields).updateValueTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (fVar1 < fVar4) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar1 = (float)(*pcRam_?)();
    pMVar5 = (this->fields).shield;
    (this->fields).updateValueTime = fVar1 + _UNK_?;
    if (pMVar5 == (MVRuntimeDataVariableClampedFloat *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar1 = (float)(*(pMVar5->klass->vtable).get_Value.methodPtr)
                             (pMVar5,(pMVar5->klass->vtable).get_Value.method);
    (*(pMVar5->klass->vtable).set_Value.methodPtr)
              (pMVar5,fVar1 - (this->fields).accumulatedShieldDecay,
               (pMVar5->klass->vtable).set_Value.method);
    (this->fields).accumulatedShieldDecay = 0.0;
  }
  return;
}

