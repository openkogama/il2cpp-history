
/* Void ResetDecayTimer() */

void Assembly-CSharp.dll::AvatarShieldDecay::AvatarShieldDecay_ResetDecayTimer
               (AvatarShieldDecay *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).decayTime = fVar1 + 1.0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).updateValueTime = fVar1 + _UNK_? + 1.0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarShieldDecay::AvatarShieldDecay_Update
               (AvatarShieldDecay *this,MethodInfo *method)

{
  fVar1 = (this->fields).decayTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar1 < fVar2) {
    fVar1 = (this->fields).accumulatedShieldDecay;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).accumulatedShieldDecay = fVar2 * _UNK_? + fVar1;
  }
  method_00 = (MethodInfo *)(this->fields).updateValueTime;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time(method_00);
  if ((float)method_00 < fVar1) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pMVar3 = (this->fields).shield;
    (this->fields).updateValueTime = fVar1 + _UNK_?;
    if (pMVar3 == (MVRuntimeDataVariableClampedFloat *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar5 = (float10)(*(pMVar3->klass->vtable).get_Value.methodPtr)
                               (pMVar3,(pMVar3->klass->vtable).get_Value.method);
    (*(pMVar3->klass->vtable).set_Value.methodPtr)
              (pMVar3,(float)fVar5 - (this->fields).accumulatedShieldDecay,
               (pMVar3->klass->vtable).set_Value.method);
    (this->fields).accumulatedShieldDecay = 0.0;
  }
  return;
}

