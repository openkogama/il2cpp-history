
/* Void Update() */

void Assembly-CSharp.dll::ShieldBar::ShieldBar_Update(ShieldBar *this,MethodInfo *method)

{
  fVar1 = (this->fields).elapsedInterpolationTime;
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
  fVar5 = _UNK_?;
  fVar6 = (this->fields).previousShieldValue;
  fVar4 = fVar4 + fVar1;
  (this->fields).elapsedInterpolationTime = fVar4;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (fVar5 < fVar4) {
    fVar4 = fVar5;
  }
  pTVar7 = (this->fields).shieldPivot;
  fVar6 = ((this->fields).interpolateTowardsShield - fVar6) * fVar4 + fVar6;
  (this->fields).previousShieldValue = fVar6;
  if (pTVar7 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar8 = (pTVar7->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
  (*pcRam_?)(pvVar8);
  fVar6 = fVar6 / _UNK_?;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  else if (fVar5 < fVar6) {
    fVar6 = fVar5;
  }
  pTVar7 = (this->fields).shieldPivot;
  uStack_9 = (ulonglong)(uint)fVar6;
  if (pTVar7 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_10 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar8 = (pTVar7->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
  (*pcRam_?)(pvVar8,&uStack_9);
  return;
}


/* Single get_Shield() */

float Assembly-CSharp.dll::ShieldBar::ShieldBar_get_Shield(ShieldBar *this,MethodInfo *method)

{
  obj = (this->fields).shieldPivot;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  return (float)uStack_3 * _UNK_?;
}


/* Void set_Shield(Single) */

void Assembly-CSharp.dll::ShieldBar::ShieldBar_set_Shield
               (ShieldBar *this,float value,MethodInfo *method)

{
  (this->fields).interpolateTowardsShield = value;
  (this->fields).elapsedInterpolationTime = 0.0;
  return;
}

