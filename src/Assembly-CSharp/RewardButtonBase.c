
/* Void EnableEffects() */

void Assembly-CSharp.dll::RewardButtonBase::RewardButtonBase_EnableEffects(RewardButtonBase *this,MethodInfo *method)

{
  pIVar1 = (this->fields).RadialFill;
  if (pIVar1 != (Image *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<float>_System__Single___float_,0x3f800000,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar2 = FUN_?(&(pIVar1->fields).m_FillAmount,0x3f800000);
    if (cVar2 != '\0') {
      (*(pIVar1->klass->vtable).SetVerticesDirty.methodPtr)(pIVar1,(pIVar1->klass->vtable).SetVerticesDirty.method);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateOutline(Single) */

void Assembly-CSharp.dll::RewardButtonBase::RewardButtonBase_UpdateOutline(RewardButtonBase *this,float progress,MethodInfo *method)

{
  pIVar1 = (this->fields).RadialFill;
  if (pIVar1 != (Image *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<float>_System__Single___float_,in_RDX,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (progress < 0.0) {
      progress = 0.0;
    }
    else if (1.0 < progress) {
      progress = 1.0;
    }
    cVar2 = FUN_?(&(pIVar1->fields).m_FillAmount,progress);
    if (cVar2 != '\0') {
      (*(pIVar1->klass->vtable).SetVerticesDirty.methodPtr)(pIVar1,(pIVar1->klass->vtable).SetVerticesDirty.method);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

