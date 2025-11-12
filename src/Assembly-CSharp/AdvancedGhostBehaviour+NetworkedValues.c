
/* Vector3 BackAndForward(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_BackAndForward
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = radius + radius;
  fVar2 = radius + radius + radius + radius;
  iVar3 = (int)((fVar2 / (speed * _UNK_?)) * _UNK_?);
  fVar2 = ((float)(serverTimeInMilliSeconds % iVar3) / (float)iVar3) * fVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar4 = _UNK_?;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_6._0_4_ = (pVVar5->backVector).x;
  uStack_6._4_4_ = (pVVar5->backVector).y;
  fVar7 = (float)uStack_6._4_4_ * radius;
  fVar8 = (float)(undefined4)uStack_6 * radius;
  fVar9 = (pVVar5->backVector).z * radius;
  radius = fVar2;
  if (fVar1 < fVar2) {
    radius = (float)FUN_?(pVVar5,fVar1);
    fVar8 = (float)((uint)fVar8 ^ uVar4);
    fVar7 = (float)((uint)fVar7 ^ uVar4);
    fVar9 = (float)((uint)fVar9 ^ uVar4);
  }
  uStack_10 = CONCAT44(fVar7,fVar8);
  fStack_11 = fVar9;
  fVar2 = (float)FUN_?(&uStack_10);
  if (_UNK_? < fVar2) {
    fVar1 = fVar9 / fVar2;
    uVar12 = CONCAT44(fVar7 / fVar2,fVar8 / fVar2);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar12._0_4_ = (pVVar5->zeroVector).x;
    uVar12._4_4_ = (pVVar5->zeroVector).y;
    fVar1 = (pVVar5->zeroVector).z;
  }
  uStack_10._0_4_ = (uint)uVar12;
  uStack_10._4_4_ = (uint)((ulonglong)uVar12 >> 0x20);
  fVar2 = (float)((uint)uStack_10 ^ uVar4);
  fVar13 = (float)(uStack_10._4_4_ ^ uVar4);
  uStack_10 = uVar12;
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  uStack_16 = CONCAT44(fVar7,fVar8);
  fStack_17 = fVar9;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_10 = 0;
  fStack_11 = 0.0;
  pvVar18 = (transform->fields)._._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(pvVar18,&uStack_16,&uStack_10);
  uStack_19 = CONCAT44(fVar7,fVar8);
  fStack_20 = fVar9;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_21 = 0;
  fStack_22 = 0.0;
  pvVar18 = (transform->fields)._._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(pvVar18,&uStack_19,&uStack_21);
  fVar23 = fVar2 + (float)uStack_21;
  fVar24 = fVar13 + uStack_21._4_4_;
  fVar25 = (float)((uint)fVar1 ^ uVar4) + fStack_22;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar26 = _UNK_?;
  uVar12 = _UNK_?;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_16 = CONCAT44(fVar24,fVar23);
  uStack_6 = uStack_10;
  uStack_27 = uVar12;
  uStack_28 = uVar26;
  fStack_29 = fStack_11;
  fStack_17 = fVar25;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(&uStack_6,&uStack_16,&uStack_27,_UNK_?,1);
  uStack_19 = CONCAT44(fVar7,fVar8);
  fStack_20 = fVar9;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_10 = 0;
  fStack_11 = 0.0;
  pvVar18 = (transform->fields)._._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(pvVar18,&uStack_19,&uStack_10);
  uStack_6 = CONCAT44(fVar7,fVar8);
  fStack_29 = fVar9;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_21 = 0;
  fStack_22 = 0.0;
  pvVar18 = (transform->fields)._._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(pvVar18,&uStack_6,&uStack_21);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_19._0_4_ = (pVVar5->rightVector).x;
  uStack_19._4_4_ = (pVVar5->rightVector).y;
  fVar25 = fStack_22 + (pVVar5->rightVector).z;
  fVar23 = (float)uStack_21 + (float)(undefined4)uStack_19;
  fVar24 = uStack_21._4_4_ + (float)uStack_19._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar26 = _UNK_?;
  uVar12 = _UNK_?;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_19 = CONCAT44(fVar24,fVar23);
  uStack_16 = uStack_10;
  uStack_27 = uVar12;
  uStack_28 = uVar26;
  fStack_17 = fStack_11;
  fStack_20 = fVar25;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(&uStack_16,&uStack_19,&uStack_27,_UNK_?,1);
  fStack_29 = (float)((uint)fVar1 ^ uVar4) * radius + fVar9;
  uStack_6 = CONCAT44(fVar13 * radius + fVar7,fVar2 * radius + fVar8);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_10 = 0;
  fStack_11 = 0.0;
  pvVar18 = (transform->fields)._._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar14 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar14)();
    return pVVar15;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(pvVar18,&uStack_6,&uStack_10);
  __return_storage_ptr__->x = (float)(uint)uStack_10;
  __return_storage_ptr__->y = (float)uStack_10._4_4_;
  __return_storage_ptr__->z = fStack_11;
  return __return_storage_ptr__;
}


/* Vector3 Circle(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_Circle
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,
                    MethodInfo *method)

{
  iVar1 = (int)((_UNK_? / ((speed * _UNK_?) / (radius * _UNK_?))) *
               _UNK_?);
  fVar2 = ((float)(serverTimeInMilliSeconds % iVar1) / (float)iVar1) * _UNK_?;
  fVar3 = (float)FUN_?(fVar2);
  fStack_4 = (float)FUN_?(fVar2);
  fStack_4 = fStack_4 * radius;
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  uStack_7 = (ulonglong)(uint)(fVar3 * radius);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_8 = 0;
  fStack_9 = 0.0;
  pvVar10 = (transform->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar10,&uStack_7,&uStack_8);
  __return_storage_ptr__->x = (float)(undefined4)uStack_8;
  __return_storage_ptr__->y = (float)uStack_8._4_4_;
  __return_storage_ptr__->z = fStack_9;
  return __return_storage_ptr__;
}


/* Vector3 EaseInEaseOutBackAndForward(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_EaseInEaseOutBackAndForward
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,
                    MethodInfo *method)

{
  iVar1 = (int)((_UNK_? / ((speed * _UNK_?) / (radius * _UNK_?))) *
               _UNK_?);
  fVar2 = (float)FUN_?(((float)(serverTimeInMilliSeconds % iVar1) / (float)iVar1) *
                               _UNK_?);
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  uStack_5 = (ulonglong)(uint)(fVar2 * radius);
  uStack_6 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_7 = 0;
  fStack_8 = 0.0;
  pvVar9 = (transform->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar9,&uStack_5,&uStack_7);
  __return_storage_ptr__->x = (float)(undefined4)uStack_7;
  __return_storage_ptr__->y = (float)uStack_7._4_4_;
  __return_storage_ptr__->z = fStack_8;
  return __return_storage_ptr__;
}


/* Void GetNextLookAt(Vector3, Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
     AdvancedGhostBehaviour_NetworkedValues_GetNextLookAt
               (AdvancedGhostBehaviour_NetworkedValues *this,Vector3 *curPosition,
               int32_t serverTimeInMilliSeconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).ghostBehaviour;
  fVar2 = (this->fields).minLookDeltaOffset;
  if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
    uVar3._0_4_ = (pAVar1->fields).speed.currentCryptoKey;
    uVar3._4_4_ = (pAVar1->fields).speed.hiddenValue;
    pBVar4 = (pAVar1->fields).speed.hiddenValueOld;
    uVar5._0_4_ = (pAVar1->fields).speed.fakeValue;
    uVar5._4_1_ = (pAVar1->fields).speed.inited;
    uVar5._5_3_ = *(undefined3 *)&(pAVar1->fields).speed.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    aOStack_6[0]._0_8_ = uVar3;
    aOStack_6[0].hiddenValueOld = pBVar4;
    aOStack_6[0]._16_8_ = uVar5;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
    pFVar8 = (this->fields).patrolPattern;
    fVar2 = (_UNK_? / fVar7) * fVar2 * _UNK_?;
    pAVar1 = (this->fields).ghostBehaviour;
    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
      aOStack_6[0].currentCryptoKey = (pAVar1->fields).speed.currentCryptoKey;
      aOStack_6[0].hiddenValue = (pAVar1->fields).speed.hiddenValue;
      aOStack_6[0].hiddenValueOld = (pAVar1->fields).speed.hiddenValueOld;
      aOStack_6[0].fakeValue = (pAVar1->fields).speed.fakeValue;
      aOStack_6[0].inited = (pAVar1->fields).speed.inited;
      aOStack_6[0]._21_3_ = *(undefined3 *)&(pAVar1->fields).speed.field_0x15;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
      pAVar1 = (this->fields).ghostBehaviour;
      if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
        fVar9 = (pAVar1->fields).radius;
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pAVar1,(MethodInfo *)0x0);
        if (pTVar10 != (Transform *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                              (pTVar10,(MethodInfo *)0x0);
          if (pFVar8 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0
             ) {
            puVar11 = (undefined8 *)
                      (*(pFVar8->fields)._._.invoke_impl)
                                (&uStack_12,(pFVar8->fields)._._.method_code,
                                 serverTimeInMilliSeconds - (int)fVar2,fVar7,fVar9,pTVar10,
                                 (pFVar8->fields)._._.method);
            uVar13 = curPosition->x;
            uVar14 = curPosition->y;
            fVar2 = (float)*puVar11 - (float)uVar13;
            fVar7 = *(float *)((longlong)puVar11 + 4) - (float)uVar14;
            fVar9 = *(float *)(puVar11 + 1) - curPosition->z;
            uStack_12 = CONCAT44(fVar7,fVar2);
            fStack_15 = fVar9;
            fVar16 = (float)FUN_?(&uStack_12);
            if (_UNK_? < fVar16) {
              fVar2 = fVar2 / fVar16;
              fVar7 = fVar7 / fVar16;
              fVar9 = fVar9 / fVar16;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
              fVar2 = (pVVar17->zeroVector).x;
              fVar7 = (pVVar17->zeroVector).y;
              fVar9 = (pVVar17->zeroVector).z;
            }
            (this->fields).lookDir.x = fVar2;
            (this->fields).lookDir.y = fVar7;
            (this->fields).lookDir.z = fVar9;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Vector3 GetPosition(Single) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_GetPosition
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    float delta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = delta * _UNK_?;
  pFVar2 = (this->fields).patrolPattern;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar3 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar3->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    pAVar5 = (this->fields).ghostBehaviour;
    if (pAVar5 != (AdvancedGhostBehaviour *)0x0) {
      uVar6._0_4_ = (pAVar5->fields).speed.currentCryptoKey;
      uVar6._4_4_ = (pAVar5->fields).speed.hiddenValue;
      pBVar7 = (pAVar5->fields).speed.hiddenValueOld;
      uVar8._0_4_ = (pAVar5->fields).speed.fakeValue;
      uVar8._4_1_ = (pAVar5->fields).speed.inited;
      uVar8._5_3_ = *(undefined3 *)&(pAVar5->fields).speed.field_0x15;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      aOStack_9[0]._0_8_ = uVar6;
      aOStack_9[0].hiddenValueOld = pBVar7;
      aOStack_9[0]._16_8_ = uVar8;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt(aOStack_9,(MethodInfo *)0x0);
      pAVar5 = (this->fields).ghostBehaviour;
      if (pAVar5 != (AdvancedGhostBehaviour *)0x0) {
        fVar11 = (pAVar5->fields).radius;
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pAVar5,(MethodInfo *)0x0);
        if (pTVar12 != (Transform *)0x0) {
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                              (pTVar12,(MethodInfo *)0x0);
          if (pFVar2 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0
             ) {
            puVar13 = (undefined8 *)
                      (*(pFVar2->fields)._._.invoke_impl)
                                (aOStack_9,(pFVar2->fields)._._.method_code,iVar4 + (int)fVar1,
                                 fVar10,fVar11,pTVar12,(pFVar2->fields)._._.method);
            uVar8 = *puVar13;
            fVar1 = *(float *)(puVar13 + 1);
            __return_storage_ptr__->x = (float)(int)uVar8;
            __return_storage_ptr__->y = (float)(int)((ulonglong)uVar8 >> 0x20);
            __return_storage_ptr__->z = fVar1;
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pVVar15 = (Vector3 *)(*pcVar14)();
  return pVVar15;
}


/* Single GetX(Single, Single) */

float Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
      AdvancedGhostBehaviour_NetworkedValues_GetX
                (AdvancedGhostBehaviour_NetworkedValues *this,float serverTimeWithSpeedFactor,
                float radius,MethodInfo *method)

{
  fVar1 = (float)FUN_?(serverTimeWithSpeedFactor);
  return fVar1 * radius;
}


/* Single GetY(Single, Single) */

float Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
      AdvancedGhostBehaviour_NetworkedValues_GetY
                (AdvancedGhostBehaviour_NetworkedValues *this,float serverTimeWithSpeedFactor,
                float radius,MethodInfo *method)

{
  fVar1 = (float)FUN_?(serverTimeWithSpeedFactor);
  return fVar1 * radius;
}


/* Void Test(Double) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
     AdvancedGhostBehaviour_NetworkedValues_Test
               (AdvancedGhostBehaviour_NetworkedValues *this,double serverTimeNormalizedToPeriod,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  dVar1 = _UNK_?;
  if ((_UNK_? < serverTimeNormalizedToPeriod) && ((this->fields).didMeasure == 0)) {
    WaitForTicks::WaitForTicks_Diff((this->fields).prevServertime,(MethodInfo *)0x0);
    message = (Object *)FUN_?(uRam_?);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
    iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
    (this->fields).prevServertime = iVar2;
    (this->fields).didMeasure = 1;
  }
  if (serverTimeNormalizedToPeriod < dVar1) {
    (this->fields).didMeasure = 0;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
     AdvancedGhostBehaviour_NetworkedValues_Update
               (AdvancedGhostBehaviour_NetworkedValues *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).patrolPattern;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar3,(MethodInfo *)0x0);
    pAVar5 = (this->fields).ghostBehaviour;
    if (pAVar5 != (AdvancedGhostBehaviour *)0x0) {
      uVar6._0_4_ = (pAVar5->fields).speed.currentCryptoKey;
      uVar6._4_4_ = (pAVar5->fields).speed.hiddenValue;
      pBVar7 = (pAVar5->fields).speed.hiddenValueOld;
      uVar8._0_4_ = (pAVar5->fields).speed.fakeValue;
      uVar8._4_1_ = (pAVar5->fields).speed.inited;
      uVar8._5_3_ = *(undefined3 *)&(pAVar5->fields).speed.field_0x15;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      auStack_9 = (undefined1  [8])uVar6;
      pBStack_10 = pBVar7;
      uStack_11 = uVar8;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)auStack_9,(MethodInfo *)0x0);
      pAVar5 = (this->fields).ghostBehaviour;
      if (pAVar5 != (AdvancedGhostBehaviour *)0x0) {
        fVar13 = (pAVar5->fields).radius;
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pAVar5,(MethodInfo *)0x0);
        if (pTVar14 != (Transform *)0x0) {
          pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                              (pTVar14,(MethodInfo *)0x0);
          if (pFVar1 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0
             ) {
            puVar15 = (undefined8 *)
                      (*(pFVar1->fields)._._.invoke_impl)
                                (auStack_9,(pFVar1->fields)._._.method_code,iVar4,fVar12,fVar13,
                                 pTVar14,(pFVar1->fields)._._.method);
            bVar16 = cRam_? == '\0';
            uVar8 = *puVar15;
            fVar12 = *(float *)(puVar15 + 1);
            (this->fields).nextPosition.x = (float)(int32_t)uVar8;
            (this->fields).nextPosition.y = (float)SUB84(uVar8,4);
            (this->fields).nextPosition.z = fVar12;
            if (bVar16) {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar2 != (MVGameControllerBase *)0x0) &&
               (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
              iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                 (pMVar3,(MethodInfo *)0x0);
              pBStack_10 = (Byte__Array *)CONCAT44(pBStack_10._4_4_,fVar12);
              auStack_9 = (undefined1  [8])uVar8;
              AdvancedGhostBehaviour_NetworkedValues_GetNextLookAt
                        (this,(Vector3 *)auStack_9,iVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* AdvancedGhostBehaviour+NetworkedValues(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
     AdvancedGhostBehaviour_NetworkedValues__ctor
               (AdvancedGhostBehaviour_NetworkedValues *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdvancedGhostBehaviour__NetworkedValues__EaseInEaseOutBackAndForward_int__float__float__UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).ghostBehaviour = ghostBehaviour;
  (this->fields).minLookDeltaOffset = 0.1;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).ghostBehaviour >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pFVar6 = (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)
            FUN_?(
                         TypeInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>
                         );
  pMVar7 = 
  MethodInfo__AdvancedGhostBehaviour__NetworkedValues__EaseInEaseOutBackAndForward_int__float__float__UnityEngine__Transform_
  ;
  (pFVar6->fields)._._.method_ptr =
       MethodInfo__AdvancedGhostBehaviour__NetworkedValues__EaseInEaseOutBackAndForward_int__float__float__UnityEngine__Transform_
       ->virtualMethodPointer;
  iVar8 = iRam_?;
  (pFVar6->fields)._._.method = pMVar7;
  (pFVar6->fields)._._.m_target = (Object *)this;
  if (iVar8 != 0) {
    uVar2 = (uint)((ulonglong)&(pFVar6->fields)._._.m_target >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar1);
  }
  uVar9 = pMVar7->parameters_count;
  (pFVar6->fields)._._.method_code = pFVar6;
  if (((pMVar7->flags & 0x10) == 0) || (uVar9 != 4)) {
    (pFVar6->fields)._._.method_code = (pFVar6->fields)._._.m_target;
    pcVar10 = (pFVar6->fields)._._.method_ptr;
  }
  else {
    pcVar10 = FUN_?;
  }
  (pFVar6->fields)._._.invoke_impl = pcVar10;
  (pFVar6->fields)._._.extra_arg = FUN_?;
  (this->fields).patrolPattern = pFVar6;
  if (iVar8 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).patrolPattern >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    pFVar6 = (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)
              (ulonglong)(uVar2 & 0x3f);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (longlong)pFVar6;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,0,pFVar6);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar6 = (this->fields).patrolPattern;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar11 != (MVGameControllerBase *)0x0) &&
     (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) {
    iVar13 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar12,(MethodInfo *)0x0);
    pAVar14 = (this->fields).ghostBehaviour;
    if (pAVar14 != (AdvancedGhostBehaviour *)0x0) {
      uVar15._0_4_ = (pAVar14->fields).speed.currentCryptoKey;
      uVar15._4_4_ = (pAVar14->fields).speed.hiddenValue;
      pBVar16 = (pAVar14->fields).speed.hiddenValueOld;
      uVar17._0_4_ = (pAVar14->fields).speed.fakeValue;
      uVar17._4_1_ = (pAVar14->fields).speed.inited;
      uVar17._5_3_ = *(undefined3 *)&(pAVar14->fields).speed.field_0x15;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      auStack_18 = (undefined1  [8])uVar15;
      pBStack_19 = pBVar16;
      uStack_20 = uVar17;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)auStack_18,(MethodInfo *)0x0);
      pAVar14 = (this->fields).ghostBehaviour;
      if (pAVar14 != (AdvancedGhostBehaviour *)0x0) {
        fVar22 = (pAVar14->fields).radius;
        pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pAVar14,(MethodInfo *)0x0);
        if ((pTVar23 != (Transform *)0x0) &&
           (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                (pTVar23,(MethodInfo *)0x0),
           pFVar6 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0))
        {
          puVar24 = (undefined8 *)
                    (*(pFVar6->fields)._._.invoke_impl)
                              (auStack_18,(pFVar6->fields)._._.method_code,iVar13,fVar21,fVar22,
                               pTVar23,(pFVar6->fields)._._.method);
          bVar1 = cRam_? == '\0';
          uVar17 = *puVar24;
          fVar21 = *(float *)(puVar24 + 1);
          (this->fields).nextPosition.x = (float)(int32_t)uVar17;
          (this->fields).nextPosition.y = (float)SUB84(uVar17,4);
          (this->fields).nextPosition.z = fVar21;
          if (bVar1) {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar11 != (MVGameControllerBase *)0x0) &&
             (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) {
            iVar13 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar12,(MethodInfo *)0x0);
            pBStack_19 = (Byte__Array *)CONCAT44(pBStack_19._4_4_,fVar21);
            auStack_18 = (undefined1  [8])uVar17;
            AdvancedGhostBehaviour_NetworkedValues_GetNextLookAt
                      (this,(Vector3 *)auStack_18,iVar13,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

