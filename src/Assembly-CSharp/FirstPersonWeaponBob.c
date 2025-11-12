
/* Void Initialize(Transform) */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob_Initialize(FirstPersonWeaponBob *this,Transform *weapon,MethodInfo *method)

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
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (weapon->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)weapon,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
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
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_9 = 0;
  uStack_10 = 0;
  pvVar7 = (weapon->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)weapon,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
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

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob_Update(FirstPersonWeaponBob *this,MethodInfo *method)

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
  fVar2 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Horizontal,(MethodInfo *)0x0);
  pAVar3 = (this->fields).bob;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  fVar6 = (float)(*pcRam_?)();
  if (pAVar3 == (AnimationCurve *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar7 = (pAVar3->fields).m_Ptr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar3,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar8 = (this->fields).bobFrequency;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar7,fVar8 * 0.5 * fVar6);
  pTVar9 = (this->fields).weapon;
  uStack_10._0_4_ = (this->fields).weaponPosition.x;
  uStack_10._4_4_ = (this->fields).weaponPosition.y;
  if (pTVar9 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar7);
    pAVar3 = (this->fields).rotation;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    fVar6 = (float)(*pcRam_?)();
    if (pAVar3 != (AnimationCurve *)0x0) {
      pvVar7 = (pAVar3->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar3,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar8 = (this->fields).bobFrequency;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar11 = (float)(*pcRam_?)(pvVar7,fVar8 * 0.5 * fVar6);
      fStack_12 = (this->fields).rotationAxis.z;
      uStack_10._0_4_ = (this->fields).rotationAxis.x;
      uStack_10._4_4_ = (this->fields).rotationAxis.y;
      fVar6 = (this->fields).rotationMultiplier;
      pTVar9 = (this->fields).weapon;
      fVar8 = (this->fields).weaponRotation.x;
      fVar13 = (this->fields).weaponRotation.y;
      fVar14 = (this->fields).weaponRotation.z;
      fVar15 = (this->fields).weaponRotation.w;
      uStack_16 = 0;
      uStack_17 = 0;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(fVar11 * fVar6 * (ABS(fVar2) + ABS(fVar1)) * 0.5,&uStack_10,&uStack_16);
      fStack_18 = ((float)uStack_16 * fVar15 + uStack_17._4_4_ * fVar8 + (float)uStack_17 * fVar13) - uStack_16._4_4_ * fVar14;
      fStack_19 = (uStack_16._4_4_ * fVar15 + uStack_17._4_4_ * fVar13 + (float)uStack_16 * fVar14) - (float)uStack_17 * fVar8;
      fStack_20 = ((float)uStack_17 * fVar15 + uStack_17._4_4_ * fVar14 + uStack_16._4_4_ * fVar8) - (float)uStack_16 * fVar13;
      fStack_21 = ((uStack_17._4_4_ * fVar15 - (float)uStack_16 * fVar8) - uStack_16._4_4_ * fVar13) - (float)uStack_17 * fVar14;
      if (pTVar9 == (Transform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pTVar9->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar7,&fStack_18);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* FirstPersonWeaponBob() */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob__ctor(FirstPersonWeaponBob *this,MethodInfo *method)

{
  (this->fields).bobAxis.x = 0.0;
  (this->fields).bobAxis.y = 1.0;
  (this->fields).bobAxis.z = 0.0;
  (this->fields).rotationAxis.x = 0.0;
  (this->fields).rotationAxis.y = 1.0;
  (this->fields).rotationAxis.z = 0.0;
  (this->fields).bobFrequency = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&(this->fields).bobAxis,method);
  pVVar1 = &(this->fields).rotationAxis;
  uStack_2._0_4_ = pVVar1->x;
  uStack_2._4_4_ = pVVar1->y;
  fStack_3 = (this->fields).rotationAxis.z;
  fVar4 = (float)FUN_?(&uStack_2);
  if (fVar4 <= 1e-05) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar5->zeroVector).z;
    fVar6 = (pVVar5->zeroVector).y;
    pVVar1->x = (pVVar5->zeroVector).x;
    pVVar1->y = fVar6;
    (this->fields).rotationAxis.z = fVar4;
    return;
  }
  uVar7 = pVVar1->x;
  fVar6 = (this->fields).rotationAxis.y;
  fVar8 = (this->fields).rotationAxis.z;
  pVVar1->x = (float)uVar7 / fVar4;
  pVVar1->y = fVar6 / fVar4;
  (this->fields).rotationAxis.z = fVar8 / fVar4;
  return;
}

