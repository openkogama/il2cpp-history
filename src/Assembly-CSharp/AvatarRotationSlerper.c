
/* Boolean Update() */

bool Assembly-CSharp.dll::AvatarRotationSlerper::AvatarRotationSlerper_Update
               (AvatarRotationSlerper *this,MethodInfo *method)

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
  if ((this->fields).startTime + (this->fields).duration < fVar4) {
    return 0;
  }
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
  fVar4 = (fVar4 - (this->fields).startTime) / (this->fields).duration;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (_UNK_? < fVar4) {
    fVar4 = _UNK_?;
  }
  pTVar5 = (this->fields).target;
  uVar2._0_4_ = (this->fields).startRot.x;
  uVar2._4_4_ = (this->fields).startRot.y;
  uVar6._0_4_ = (this->fields).startRot.z;
  uVar6._4_4_ = (this->fields).startRot.w;
  if (pTVar5 == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_7 = 0;
  uStack_8 = 0;
  pvVar9 = (pTVar5->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
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
  (*pcRam_?)(pvVar9,&uStack_7);
  uStack_10 = (undefined4)uStack_7;
  uStack_11 = uStack_7._4_4_;
  uStack_12 = (undefined4)uStack_8;
  uStack_13 = uStack_8._4_4_;
  uStack_14 = 0;
  uStack_15 = 0;
  pcVar1 = pcRam_?;
  uStack_16 = uVar2;
  uStack_17 = uVar6;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_16,&uStack_10,fVar4,&uStack_14);
  pTVar5 = (this->fields).attachPoint;
  if (pTVar5 == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  uStack_7 = uStack_14;
  uStack_8 = uStack_15;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar9 = (pTVar5->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
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
  (*pcRam_?)(pvVar9,&uStack_7);
  return 1;
}


/* AvatarRotationSlerper(Transform, Transform&) */

void Assembly-CSharp.dll::AvatarRotationSlerper::AvatarRotationSlerper__ctor
               (AvatarRotationSlerper *this,Transform *attachPoint,Transform **target,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).duration = 0.35;
  (this->fields).attachPoint = attachPoint;
  pAVar2 = this;
  pTVar3 = attachPoint;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    pTVar3 = (Transform *)(ulonglong)((uVar4 & 0x1fffff) >> 6);
    method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
    do {
      uVar5 = *(ulonglong *)((longlong)pTVar3 * 8 + 0xADDR);
      pAVar2 = (AvatarRotationSlerper *)(uVar5 | 1L << (longlong)method);
      puVar6 = (ulonglong *)((longlong)pTVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar5 == *puVar6;
      if (bVar1) {
        *puVar6 = (ulonglong)pAVar2;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (attachPoint == (Transform *)0x0) {
    FUN_?(pAVar2,pTVar3,target,method);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
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
  uStack_8 = 0;
  uStack_9 = 0;
  pvVar10 = (attachPoint->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)attachPoint,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar10,&uStack_8);
  bVar1 = iRam_? != 0;
  (this->fields).startRot.x = (float)uStack_8;
  (this->fields).startRot.y = uStack_8._4_4_;
  (this->fields).startRot.z = (float)uStack_9;
  (this->fields).startRot.w = uStack_9._4_4_;
  (this->fields).target = *target;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&(this->fields).target >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar12 == *puVar6;
      if (bVar1) {
        *puVar6 = uVar12 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  fVar13 = (float)(*pcRam_?)();
  (this->fields).startTime = fVar13;
  return;
}

