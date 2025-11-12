
/* SentryGunBeam Create(SentryGunBeam, SentryGunBeamType, MVSentryGun) */

SentryGunBeam *
Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_Create
          (SentryGunBeam *prefab,SentryGunBeamType__Enum beamType,MVSentryGun *owner,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SentryGunBeam_MethodInfo__UnityEngine__Object__Instantiate<SentryGunBeam>_SentryGunBeam__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (owner != (MVSentryGun *)0x0) {
    puVar1 = (undefined8 *)(*(owner->klass->vtable).get_WorldPosition_1.methodPtr)(&VStack_2,owner)
    ;
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    pQVar5 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                       (aQStack_6,(MVWorldObjectClient *)owner,(MethodInfo *)0x0);
    uVar7._0_4_ = pQVar5->x;
    uVar7._4_4_ = pQVar5->y;
    uVar8._0_4_ = pQVar5->z;
    uVar8._4_4_ = pQVar5->w;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar9 = 
    SentryGunBeam_MethodInfo__UnityEngine__Object__Instantiate<SentryGunBeam>_SentryGunBeam__UnityEngine__Vector3__UnityEngine__Quaternion_
    ;
    if ((
        SentryGunBeam_MethodInfo__UnityEngine__Object__Instantiate<SentryGunBeam>_SentryGunBeam__UnityEngine__Vector3__UnityEngine__Quaternion_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar9);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2._0_8_ = uVar3;
    VStack_2.z = fVar4;
    aQStack_6[0]._0_8_ = uVar7;
    aQStack_6[0]._8_8_ = uVar8;
    pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate
                       ((Object_1 *)prefab,&VStack_2,aQStack_6,(MethodInfo *)0x0);
    pvVar11 = ((pMVar9->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar11 + 0x135) & 1) == 0) {
      pvVar11 = (void *)FUN_?(pvVar11);
    }
    if (pOVar10 != (Object_1 *)0x0) {
      pSVar12 = (SentryGunBeam *)FUN_?(pOVar10);
      if (pSVar12 == (SentryGunBeam *)0x0) {
        FUN_?(pOVar10,pvVar11);
        pcVar13 = (code *)swi(3);
        pSVar12 = (SentryGunBeam *)(*pcVar13)();
        return pSVar12;
      }
      this = (pSVar12->fields).lineRenderer;
      if (this != (LineRenderer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar11 = (this->fields)._._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          pSVar12 = (SentryGunBeam *)(*pcVar13)();
          return pSVar12;
        }
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar13 = (code *)swi(3);
          pSVar12 = (SentryGunBeam *)(*pcVar13)();
          return pSVar12;
        }
        pcRam_? = pcVar13;
        lVar14 = (*pcRam_?)(pvVar11);
        if (lVar14 != 0) {
          if (*(SentryGunBeamType__Enum *)(lVar14 + 0x18) <= (beamType & 0xff)) {
            FUN_?();
            pcVar13 = (code *)swi(3);
            pSVar12 = (SentryGunBeam *)(*pcVar13)();
            return pSVar12;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                    ((Renderer *)this,*(Material **)(lVar14 + 0x20 + (ulonglong)(byte)beamType * 8),
                     (MethodInfo *)0x0);
          return pSVar12;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  pSVar12 = (SentryGunBeam *)(*pcVar13)();
  return pSVar12;
}


/* Void SetBeamPositions(Vector3, Vector3) */

void Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_SetBeamPositions
               (SentryGunBeam *this,Vector3 *start,Vector3 *end,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  uVar1 = end->x;
  uVar2 = end->y;
  uStack_3._0_4_ = start->x;
  uStack_3._4_4_ = start->y;
  fVar4 = (float)uVar1 - (float)(undefined4)uStack_3;
  fVar5 = end->z - start->z;
  fVar6 = (float)uVar2 - (float)uStack_3._4_4_;
  uStack_7 = CONCAT44(fVar6,fVar4);
  fStack_8 = fVar5;
  fVar9 = (float)FUN_?(&uStack_7);
  if (_UNK_? < fVar9) {
    fVar5 = fVar5 / fVar9;
    uStack_7 = CONCAT44(fVar6 / fVar9,fVar4 / fVar9);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_7._0_4_ = (pVVar10->zeroVector).x;
    uStack_7._4_4_ = (pVVar10->zeroVector).y;
    fVar5 = (pVVar10->zeroVector).z;
  }
  uVar11 = uStack_7._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_12._0_4_ = (pVVar10->upVector).x;
  uStack_12._4_4_ = (pVVar10->upVector).y;
  fStack_13 = (pVVar10->upVector).z;
  uStack_7 = CONCAT44(uVar11,(undefined4)uStack_7);
  uStack_14 = 0;
  uStack_15 = 0;
  pcVar16 = pcRam_?;
  fStack_8 = fVar5;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar17 = func_?(&UNK_?);
    FUN_?(uVar17,0);
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pcRam_? = pcVar16;
  (*pcRam_?)(&uStack_7,&uStack_12,&uStack_14);
  if (obj != (Transform *)0x0) {
    uStack_18 = (undefined4)uStack_14;
    uStack_19 = uStack_14._4_4_;
    uStack_20 = (undefined4)uStack_15;
    uStack_21 = uStack_15._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar22 = (obj->fields)._._.m_CachedPtr;
    if (pvVar22 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pcVar16 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
      uVar17 = func_?(&UNK_?);
      FUN_?(uVar17,0);
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pcRam_? = pcVar16;
    (*pcRam_?)(pvVar22);
    fVar9 = start->y;
    fVar5 = start->z;
    pLVar23 = (this->fields).lineRenderer;
    (this->fields)._StartPosition_k__BackingField.x = start->x;
    (this->fields)._StartPosition_k__BackingField.y = fVar9;
    fVar9 = end->x;
    fVar6 = end->y;
    (this->fields)._StartPosition_k__BackingField.z = fVar5;
    fVar5 = end->z;
    (this->fields)._EndPosition_k__BackingField.x = fVar9;
    (this->fields)._EndPosition_k__BackingField.y = fVar6;
    (this->fields)._EndPosition_k__BackingField.z = fVar5;
    if (pLVar23 != (LineRenderer *)0x0) {
      uStack_24._0_4_ = start->x;
      uStack_24._4_4_ = start->y;
      fStack_25 = start->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar22 = (pLVar23->fields)._._._.m_CachedPtr;
      if (pvVar22 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar23,(MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcVar16 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcRam_? = pcVar16;
      (*pcRam_?)(pvVar22,0,&uStack_24);
      pLVar23 = (this->fields).lineRenderer;
      if (pLVar23 != (LineRenderer *)0x0) {
        uStack_3._0_4_ = end->x;
        uStack_3._4_4_ = end->y;
        fStack_26 = end->z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar22 = (pLVar23->fields)._._._.m_CachedPtr;
        if (pvVar22 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar23,(MethodInfo *)0x0);
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pcVar16 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
          uVar17 = func_?(&UNK_?);
          FUN_?(uVar17,0);
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pcRam_? = pcVar16;
        (*pcRam_?)(pvVar22,1,&uStack_3);
        return;
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SentryGunBeam::SentryGunBeam_Update
               (SentryGunBeam *this,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,method,in_R8,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (0.0 < (this->fields).deleteTimer) {
    (*(this->klass->vtable).OnUpdate.methodPtr)(this,(this->klass->vtable).OnUpdate.method);
    fVar3 = (this->fields).deleteTimer;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    fVar5 = (float)(*pcRam_?)();
    (this->fields).deleteTimer = fVar3 - fVar5;
    return;
  }
  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0,in_R9,uVar1,uVar2,unaff_RBX);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar7 = (void *)0x0;
  if (pGVar6 != (GameObject *)0x0) {
    pvVar7 = (pGVar6->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar7,0);
  return;
}

