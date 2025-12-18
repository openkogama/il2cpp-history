
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_Awake
               (PickupItemHand *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FirstPersonTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson == 0) {
    return;
  }
  pTVar1 = (this->fields)._._.firstPersonTransform;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  this_00 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar1,parent,1,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar1 == (Transform *)0x0) {
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
      pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar3 != (void *)0x0) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar3);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        bVar5 = iRam_? == 0;
        (this->fields)._._.firstPersonTransform = pTVar1;
        if (bVar5) {
          return;
        }
        uVar6 = (uint)((ulonglong)&(this->fields)._._.firstPersonTransform >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoRemoveCubes() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_DoRemoveCubes
               (PickupItemHand *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields)._._.muzzlePoint;
  VStack_1.interactionFlags = 0;
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    VStack_2.z = 0.0;
    pvVar3 = (obj->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3,&VStack_2);
    pMVar6 = (this->fields)._._.owner;
    if (pMVar6 != (MVPickupOwner *)0x0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                          (&VStack_8,&(pMVar6->fields).lookDirection,in_R8);
      RStack_9.m_Origin.x = pVVar7->x;
      RStack_9.m_Origin.y = pVVar7->y;
      pMVar6 = (this->fields)._._.owner;
      fVar10 = VStack_2.x - RStack_9.m_Origin.x;
      fVar11 = VStack_2.y - RStack_9.m_Origin.y;
      fVar12 = VStack_2.z - pVVar7->z;
      if (pMVar6 != (MVPickupOwner *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                            (&RStack_9.m_Origin,&(pMVar6->fields).lookDirection,in_R8);
        VStack_13.y = fVar11;
        VStack_13.x = fVar10;
        VStack_2.x = pVVar7->x;
        VStack_2.y = pVVar7->y;
        fVar14 = pVVar7->z;
        VStack_2.z = fVar14;
        VStack_8._0_8_ = VStack_2._0_8_;
        VStack_13.z = fVar12;
        fStack_15 = (float)FUN_?(&VStack_2);
        if (_UNK_? < fStack_15) {
          fVar16 = VStack_8.x / fStack_15;
          fVar17 = VStack_8.y / fStack_15;
          fStack_15 = fVar14 / fStack_15;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar16 = (pVVar18->zeroVector).x;
          fVar17 = (pVVar18->zeroVector).y;
          fStack_15 = (pVVar18->zeroVector).z;
        }
        VStack_2.y = fVar17;
        VStack_2.x = fVar16;
        fVar19 = fVar16 * TypeRef__System__Activator__T._0_4_;
        fVar14 = fStack_15 + fStack_15 + fVar12;
        fStack_20 = fVar16;
        fStack_21 = fVar17;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar22 = _UNK_?;
        uVar5 = _UNK_?;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar23 = _UNK_?;
        uVar24 = _UNK_?;
        VStack_8.y = fVar17 + fVar17 + fVar11;
        VStack_8.x = fVar19 + fVar10;
        VStack_2.y = fVar11;
        VStack_2.x = fVar10;
        _UNK_? = (float)uVar5;
        _UNK_? = SUB84(uVar5,4);
        RStack_9.m_Origin.x = _UNK_?;
        RStack_9.m_Origin.y = _UNK_?;
        _UNK_? = (float)uVar22;
        _UNK_? = SUB84(uVar22,4);
        RStack_9.m_Origin.z = _UNK_?;
        RStack_9.m_Direction.x = _UNK_?;
        _UNK_? = uVar24;
        _UNK_? = uVar23;
        VStack_2.z = fVar12;
        VStack_8.z = fVar14;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(&VStack_2,&VStack_8,&RStack_9,_UNK_?,1);
        ignoreWoIds = (HashSet_1_System_Int32_ *)
                      FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        FUN_?(ignoreWoIds);
        iVar25 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Default,(MethodInfo *)0x0);
        RStack_9.m_Direction.x = fStack_20;
        RStack_9.m_Origin.z = VStack_13.z;
        RStack_9.m_Direction.z = fStack_15;
        RStack_9.m_Direction.y = fStack_21;
        RStack_9.m_Origin.x = VStack_13.x;
        RStack_9.m_Origin.y = VStack_13.y;
        bVar26 = CollisionDetection::CollisionDetection_MVHit_1
                           (&RStack_9,&VStack_1,TypeRef__System__Activator__T._0_4_,ignoreWoIds,
                            1 << ((byte)iVar25 & 0x1f),(MethodInfo *)0x0);
        if (bVar26 != 0) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          aVStack_27[0].point.x = VStack_1.point.x;
          aVStack_27[0].point.y = VStack_1.point.y;
          aVStack_27[0].point.z = VStack_1.point.z;
          aVStack_27[0].normal.x = VStack_1.normal.x;
          aVStack_27[0].cube = VStack_1.cube;
          aVStack_27[0].distance = VStack_1.distance;
          aVStack_27[0]._60_4_ = VStack_1._60_4_;
          aVStack_27[0].normal.y = VStack_1.normal.y;
          aVStack_27[0].normal.z = VStack_1.normal.z;
          aVStack_27[0].cubePos = VStack_1.cubePos;
          aVStack_27[0]._30_2_ = VStack_1._30_2_;
          aVStack_27[0].interactionFlags = VStack_1.interactionFlags;
          aVStack_27[0].collider = VStack_1.collider;
          aVStack_27[0].transform = VStack_1.transform;
          if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
             (pMVar28 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                  (this_01,VStack_1.woId,(MethodInfo *)0x0),
             pMVar28 == (MVWorldObjectClient *)0x0)) goto code_?;
          if (((pMVar28->fields)._.type == 8) || ((pMVar28->fields)._.type == 0x20)) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar29 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar29 == (MVGameControllerBase *)0x0) ||
                 (pMVar30 = (pMVar29->fields).game, pMVar30 == (MVNetworkGame *)0x0)) ||
                (pWVar31 = (pMVar30->fields).worldNetwork, pWVar31 == (WorldNetwork *)0x0)) ||
               (this_00 = (RuntimeEventManager *)(pWVar31->fields)._.runtimeEventManagerNetwork,
               this_00 == (RuntimeEventManager *)0x0)) goto code_?;
            aVStack_27[0].point.x = VStack_1.point.x;
            aVStack_27[0].point.y = VStack_1.point.y;
            aVStack_27[0].point.z = VStack_1.point.z;
            aVStack_27[0].normal.x = VStack_1.normal.x;
            aVStack_27[0].normal.y = VStack_1.normal.y;
            aVStack_27[0].normal.z = VStack_1.normal.z;
            aVStack_27[0].cubePos = VStack_1.cubePos;
            aVStack_27[0]._30_2_ = VStack_1._30_2_;
            aVStack_27[0].face = VStack_1.face;
            aVStack_27[0].isCubeHit = VStack_1.isCubeHit;
            aVStack_27[0]._37_3_ = VStack_1._37_3_;
            aVStack_27[0].woId = VStack_1.woId;
            aVStack_27[0]._44_4_ = VStack_1._44_4_;
            aVStack_27[0].cube = VStack_1.cube;
            aVStack_27[0].distance = VStack_1.distance;
            aVStack_27[0]._60_4_ = VStack_1._60_4_;
            aVStack_27[0].collider = VStack_1.collider;
            aVStack_27[0].transform = VStack_1.transform;
            aVStack_27[0].interactionFlags = VStack_1.interactionFlags;
            RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                      (this_00,aVStack_27,_UNK_?,(MethodInfo *)0x0);
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PickupItemHand() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand__ctor
               (PickupItemHand *this,MethodInfo *method)

{
  (this->fields).pushMagnitude = 500.0;
  (this->fields).pushRadius = 3.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.a = (float)uVar4;
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._.crossHairCanFire.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCanFire.a = (float)uVar4;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._.crossHairCannotFireHigh.a = (float)uVar4;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3._0_4_ = 0.0;
  uVar3._4_1_ = 0;
  uVar3._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar6 != 0) {
    uVar3._0_4_ = 1.0;
    uVar3._4_1_ = 0;
    uVar3._5_3_ = 0;
  }
  bVar7 = iRam_? != 0;
  pPVar8 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pPVar8->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields)._.fireInterval.fakeValue = (float)uVar3;
  (this->fields)._.fireInterval.inited = SUB81(uVar3,4);
  *(int3 *)&(this->fields)._.fireInterval.field_0x15 = SUB83(uVar3,5);
  if (bVar7) {
    uVar9 = (uint)((ulonglong)&(this->fields)._.fireInterval.hiddenValueOld >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar11 == *puVar12;
      if (bVar7) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar7 = iRam_? != 0;
  (this->fields)._._.meshRenderers = pMVar13;
  if (bVar7) {
    uVar9 = (uint)((ulonglong)&(this->fields)._._.meshRenderers >> 0xc);
    puVar12 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar12;
      LOCK();
      uVar10 = *puVar12;
      if (uVar11 == uVar10) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar10);
  }
  bVar7 = cRam_? == '\0';
  (this->fields)._._._AbleToFire_k__BackingField = 1;
  if (bVar7) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar14 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar15 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar16 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar17 = ppMVar15;
  if (lVar16 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar16 = lRam_?;
  }
  else {
    do {
      uVar9 = (uint)ppMVar17;
      LOCK();
      bVar7 = uVar9 != uRam_?;
      uVar18 = uVar9;
      uVar19 = uVar9 + 1;
      if (bVar7) {
        uVar18 = uRam_?;
        uVar19 = uRam_?;
      }
      uRam_? = uVar19;
      UNLOCK();
    } while ((bVar7) && (ppMVar17 = (MethodInfo **)(ulonglong)uVar18, uVar9 = uVar18, uVar18 != 2)
            );
    while (uVar9 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar9 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar16;
  puVar20 = &(pOVar14->_1).field_0x1c;
  LOCK();
  bVar7 = *(int *)puVar20 == 1;
  if (bVar7) {
    *(undefined4 *)puVar20 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar7) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar9 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar21 = &(pOVar14->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar7 = *puVar21 == 1;
  if (bVar7) {
    *puVar21 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar7) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar9 = GetCurrentThreadId();
    psVar22 = &(pOVar14->_1).cctor_thread;
    LOCK();
    bVar7 = (ulonglong)uVar9 == *psVar22;
    if (bVar7) {
      *psVar22 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (bVar7) {
      return;
    }
    while( true ) {
      puVar20 = &(pOVar14->_1).field_0x1c;
      LOCK();
      bVar7 = *(int *)puVar20 == 1;
      if (bVar7) {
        *(undefined4 *)puVar20 = 1;
      }
      UNLOCK();
      if (bVar7) break;
      LOCK();
      lVar16._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
      lVar16._4_4_ = (pOVar14->_1).cctor_started;
      if (lVar16 == 0) {
        (pOVar14->_1).initializationExceptionGCHandle = 0;
        (pOVar14->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar16 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar23._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
    lVar23._4_4_ = (pOVar14->_1).cctor_started;
    if (lVar23 == 0) {
      return;
    }
  }
  else {
    uVar9 = GetCurrentThreadId();
    LOCK();
    (pOVar14->_1).cctor_thread = (ulonglong)uVar9;
    UNLOCK();
    LOCK();
    (pOVar14->_1).cctor_finished_or_no_cctor = 1;
    uVar9 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar14->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar14);
      ppMVar17 = ppMVar15;
      pIVar24 = (Il2CppClass *)pOVar14;
code_?:
      do {
        if (ppMVar17 == (MethodInfo **)0x0) {
          FUN_?(pIVar24);
          if (pIVar24->field_count != 0) {
            ppMVar17 = pIVar24->methods;
            pMVar25 = *ppMVar17;
code_?:
            if (pMVar25 != (MethodInfo *)0x0) {
              if ((*pMVar25->name == '.') && ((pMVar25->flags & 0x800) != 0)) {
                ppMVar26 = ppMVar15;
                while (ppMVar27 = ppMVar26 + 0x3052af3c,
                      ppMVar26 = (MethodInfo **)((longlong)ppMVar26 + 1),
                      *(char *)ppMVar27 == (pMVar25->name + -1)[(longlong)ppMVar26]) {
                  if (ppMVar26 == (MethodInfo **)0x7) {
                    FUN_?(pMVar25,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar17 = ppMVar17 + 1;
          if (ppMVar17 < pIVar24->methods + pIVar24->field_count) {
            pMVar25 = *ppMVar17;
            goto code_?;
          }
        }
        pIVar24 = pIVar24->parent;
        ppMVar17 = ppMVar15;
      } while (pIVar24 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar14->_1).cctor_thread = 0;
    uVar10 = _UNK_?;
    uVar3 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar14->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_28 = 0;
    uStack_29 = _UNK_?;
    uStack_30 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar14->_0).byval_arg,0,0);
    pppppppuVar23 = &pppppppuStack_78;
    if (0xf < uStack_30) {
      pppppppuVar23 = pppppppuStack_78;
    }
    FUN_?(&pppppppuStack_58,&UNK_?,pppppppuVar23);
    if (uStack_30 < 0x10) {
code_?:
      lVar16 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar23 = &pppppppuStack_58;
      if (0xf < uStack_31) {
        pppppppuVar23 = pppppppuStack_58;
      }
      uStack_29 = uVar3;
      uStack_30 = uVar10;
      lVar23 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar23);
      if (lVar16 != 0) {
        *(longlong *)(lVar23 + 0x28U) = lVar16;
        if (iRam_? != 0) {
          uVar9 = (uint)(lVar23 + 0x28U >> 0xc);
          puVar12 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar12;
            LOCK();
            uVar10 = *puVar12;
            if (uVar11 == uVar10) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar11 != uVar10);
        }
      }
      FUN_?(pOVar14,lVar23);
      if (0xf < uStack_31) {
        pppppppuVar23 = pppppppuStack_58;
        if ((0xfff < uStack_31 + 1) &&
           (pppppppuVar23 = (undefined8 *******)pppppppuStack_58[-1],
           0x1f < (ulonglong)((longlong)pppppppuStack_58 + (-8 - (longlong)pppppppuVar23))))
        goto code_?;
        func_?(pppppppuVar23);
      }
      goto code_?;
    }
    pppppppuVar23 = pppppppuStack_78;
    if ((uStack_30 + 1 < 0x1000) ||
       (pppppppuVar23 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar23)) < 0x20)) {
      func_?(pppppppuVar23);
      uVar3 = _UNK_?;
      uVar10 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar5._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
  uVar5._4_4_ = (pOVar14->_1).cctor_started;
  uVar3 = FUN_?(uVar5);
  FUN_?(uVar3,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}

