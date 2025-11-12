
/* Void EnableEffects() */

void Assembly-CSharp.dll::RewardButtonBase::RewardButtonBase_EnableEffects
               (RewardButtonBase *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pIVar2 = (this->fields).RadialFill;
  if (pIVar2 != (Image *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<float>_System__Single___float_
                    ,_UNK_?,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    cVar3 = FUN_?(&(pIVar2->fields).m_FillAmount,fVar1);
    if (cVar3 != '\0') {
      (*(pIVar2->klass->vtable).SetVerticesDirty.methodPtr)
                (pIVar2,(pIVar2->klass->vtable).SetVerticesDirty.method);
    }
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateOutline(Single) */

void Assembly-CSharp.dll::RewardButtonBase::RewardButtonBase_UpdateOutline
               (RewardButtonBase *this,float progress,MethodInfo *method)

{
  pIVar1 = (this->fields).RadialFill;
  if (pIVar1 != (Image *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<float>_System__Single___float_
                    ,in_RDX,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (progress < 0.0) {
      progress = 0.0;
    }
    else if (_UNK_? < progress) {
      progress = _UNK_?;
    }
    cVar2 = FUN_?(&(pIVar1->fields).m_FillAmount,progress);
    if (cVar2 != '\0') {
      (*(pIVar1->klass->vtable).SetVerticesDirty.methodPtr)
                (pIVar1,(pIVar1->klass->vtable).SetVerticesDirty.method);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

