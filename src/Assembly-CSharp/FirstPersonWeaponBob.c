
/* Void Initialize(Transform) */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob_Initialize
               (FirstPersonWeaponBob *this,Transform *weapon,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).weapon = weapon;
  pTVar2 = (Transform__Class *)this;
  pTVar3 = weapon;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&(this->fields).weapon >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
    pTVar3 = (Transform *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      pTVar5 = pTVar3->klass;
      pTVar2 = (Transform__Class *)((ulonglong)pTVar5 | 1L << (longlong)method);
      LOCK();
      bVar1 = pTVar5 == pTVar3->klass;
      if (bVar1) {
        pTVar3->klass = pTVar2;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (weapon == (Transform *)0x0) {
    FUN_?(pTVar2,pTVar3,method);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
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
  pvVar7 = (weapon->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)weapon,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar7);
  bVar1 = cRam_? == '\0';
  (this->fields).weaponPosition.x = 0.0;
  (this->fields).weaponPosition.y = 0.0;
  (this->fields).weaponPosition.z = 0.0;
  if (bVar1) {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_9 = 0;
  uStack_10 = 0;
  pvVar7 = (weapon->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)weapon,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar7,&uStack_9);
  (this->fields).weaponRotation.x = (float)(undefined4)uStack_9;
  (this->fields).weaponRotation.y = (float)uStack_9._4_4_;
  (this->fields).weaponRotation.z = (float)(undefined4)uStack_10;
  (this->fields).weaponRotation.w = (float)uStack_10._4_4_;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob_Update
               (FirstPersonWeaponBob *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vertical);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Horizontal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Vertical,(MethodInfo *)0x0);
  fVar1 = (float)((uint)fVar1 & _UNK_?);
  fVar2 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Horizontal,(MethodInfo *)0x0);
  fVar3 = _UNK_?;
  pAVar4 = (this->fields).bob;
  fVar1 = ((float)((uint)fVar2 & _UNK_?) + fVar1) * _UNK_?;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  fVar2 = (float)(*pcRam_?)();
  if (pAVar4 == (AnimationCurve *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar7 = (pAVar4->fields).m_Ptr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar4,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar8 = (this->fields).bobFrequency;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar7,fVar8 * fVar3 * fVar2);
  pTVar9 = (this->fields).weapon;
  uStack_10._0_4_ = (this->fields).weaponPosition.x;
  uStack_10._4_4_ = (this->fields).weaponPosition.y;
  if (pTVar9 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar7);
    pAVar4 = (this->fields).rotation;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    fVar2 = (float)(*pcRam_?)();
    if (pAVar4 != (AnimationCurve *)0x0) {
      pvVar7 = (pAVar4->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar4,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar8 = (this->fields).bobFrequency;
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      fVar11 = (float)(*pcRam_?)(pvVar7,fVar8 * fVar3 * fVar2);
      fStack_12 = (this->fields).rotationAxis.z;
      uStack_10._0_4_ = (this->fields).rotationAxis.x;
      uStack_10._4_4_ = (this->fields).rotationAxis.y;
      fVar3 = (this->fields).rotationMultiplier;
      pTVar9 = (this->fields).weapon;
      fVar2 = (this->fields).weaponRotation.x;
      fVar8 = (this->fields).weaponRotation.y;
      fVar13 = (this->fields).weaponRotation.z;
      fVar14 = (this->fields).weaponRotation.w;
      uStack_15 = 0;
      uStack_16 = 0;
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(fVar11 * fVar3 * fVar1,&uStack_10,&uStack_15);
      fStack_17 = ((float)uStack_15 * fVar14 + uStack_16._4_4_ * fVar2 + (float)uStack_16 * fVar8) -
                  uStack_15._4_4_ * fVar13;
      fStack_18 = (uStack_15._4_4_ * fVar14 + uStack_16._4_4_ * fVar8 + (float)uStack_15 * fVar13) -
                  (float)uStack_16 * fVar2;
      fStack_19 = ((float)uStack_16 * fVar14 + uStack_16._4_4_ * fVar13 + uStack_15._4_4_ * fVar2) -
                  (float)uStack_15 * fVar8;
      fStack_20 = ((uStack_16._4_4_ * fVar14 - (float)uStack_15 * fVar2) - uStack_15._4_4_ * fVar8)
                  - (float)uStack_16 * fVar13;
      if (pTVar9 == (Transform *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
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
      pvVar7 = (pTVar9->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar7,&fStack_17);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstPersonWeaponBob() */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob__ctor
               (FirstPersonWeaponBob *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).bobAxis.x = (float)(int)(uVar2 << 0x20);
  (this->fields).bobAxis.y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (this->fields).bobAxis.z = 0.0;
  (this->fields).rotationAxis.x = (float)(int)((ulonglong)uVar1 << 0x20);
  (this->fields).rotationAxis.y = (float)(int)(((ulonglong)uVar1 << 0x20) >> 0x20);
  (this->fields).rotationAxis.z = 0.0;
  (this->fields).bobFrequency = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&(this->fields).bobAxis,method);
  pVVar3 = &(this->fields).rotationAxis;
  uStack_4._0_4_ = pVVar3->x;
  uStack_4._4_4_ = pVVar3->y;
  fStack_5 = (this->fields).rotationAxis.z;
  fVar6 = (float)FUN_?(&uStack_4);
  if (fVar6 <= _UNK_?) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar7->zeroVector).z;
    fVar8 = (pVVar7->zeroVector).y;
    pVVar3->x = (pVVar7->zeroVector).x;
    pVVar3->y = fVar8;
    (this->fields).rotationAxis.z = fVar6;
    return;
  }
  uVar9 = pVVar3->x;
  fVar8 = (this->fields).rotationAxis.y;
  fVar10 = (this->fields).rotationAxis.z;
  pVVar3->x = (float)uVar9 / fVar6;
  pVVar3->y = fVar8 / fVar6;
  (this->fields).rotationAxis.z = fVar10 / fVar6;
  return;
}

