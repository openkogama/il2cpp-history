
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_Awake(PickupItemHand *this,MethodInfo *method)

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
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor(this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar1,parent,1,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0);
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
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar3 != (void *)0x0) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar3);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_DoRemoveCubes(PickupItemHand *this,MethodInfo *method)

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
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    VStack_2.z = 0.0;
    pvVar3 = (obj->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3,&VStack_2);
    pMVar6 = (this->fields)._._.owner;
    if (pMVar6 != (MVPickupOwner *)0x0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized(&VStack_8,&(pMVar6->fields).lookDirection,in_R8);
      RStack_9.m_Origin.x = pVVar7->x;
      RStack_9.m_Origin.y = pVVar7->y;
      pMVar6 = (this->fields)._._.owner;
      fVar10 = VStack_2.x - RStack_9.m_Origin.x;
      fVar11 = VStack_2.y - RStack_9.m_Origin.y;
      fVar12 = VStack_2.z - pVVar7->z;
      if (pMVar6 != (MVPickupOwner *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized(&RStack_9.m_Origin,&(pMVar6->fields).lookDirection,in_R8);
        VStack_13.y = fVar11;
        VStack_13.x = fVar10;
        VStack_2.x = pVVar7->x;
        VStack_2.y = pVVar7->y;
        fVar14 = pVVar7->z;
        VStack_2.z = fVar14;
        VStack_8._0_8_ = VStack_2._0_8_;
        VStack_13.z = fVar12;
        fStack_15 = (float)FUN_?(&VStack_2);
        if (1e-05 < fStack_15) {
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
        fVar14 = fStack_15 + fStack_15 + fVar12;
        fStack_19 = fVar16;
        fStack_20 = fVar17;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        VStack_8.y = fVar17 + fVar17 + fVar11;
        VStack_8.x = fVar16 * 2.0 + fVar10;
        VStack_2.y = fVar11;
        VStack_2.x = fVar10;
        RStack_9.m_Origin.x = 1.0;
        RStack_9.m_Origin.y = 0.0;
        RStack_9.m_Origin.z = 0.0;
        RStack_9.m_Direction.x = 1.0;
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
        if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(&VStack_2,&VStack_8,&RStack_9,0x41200000,1);
        ignoreWoIds = (HashSet_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        FUN_?(ignoreWoIds);
        iVar21 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
        RStack_9.m_Direction.x = fStack_19;
        RStack_9.m_Origin.z = VStack_13.z;
        RStack_9.m_Direction.z = fStack_15;
        RStack_9.m_Direction.y = fStack_20;
        RStack_9.m_Origin.x = VStack_13.x;
        RStack_9.m_Origin.y = VStack_13.y;
        bVar22 = CollisionDetection::CollisionDetection_MVHit_1(&RStack_9,&VStack_1,2.0,ignoreWoIds,1 << ((byte)iVar21 & 0x1f),(MethodInfo *)0x0);
        if (bVar22 != 0) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          aVStack_23[0].point.x = VStack_1.point.x;
          aVStack_23[0].point.y = VStack_1.point.y;
          aVStack_23[0].point.z = VStack_1.point.z;
          aVStack_23[0].normal.x = VStack_1.normal.x;
          aVStack_23[0].cube = VStack_1.cube;
          aVStack_23[0].distance = VStack_1.distance;
          aVStack_23[0]._60_4_ = VStack_1._60_4_;
          aVStack_23[0].normal.y = VStack_1.normal.y;
          aVStack_23[0].normal.z = VStack_1.normal.z;
          aVStack_23[0].cubePos = VStack_1.cubePos;
          aVStack_23[0]._30_2_ = VStack_1._30_2_;
          aVStack_23[0].interactionFlags = VStack_1.interactionFlags;
          aVStack_23[0].collider = VStack_1.collider;
          aVStack_23[0].transform = VStack_1.transform;
          if ((this_01 == (MVWorldObjectClientManager *)0x0) || (pMVar24 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(this_01,VStack_1.woId,(MethodInfo *)0x0), pMVar24 == (MVWorldObjectClient *)0x0)) goto code_?;
          if (((pMVar24->fields)._.type == 8) || ((pMVar24->fields)._.type == 0x20)) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar25 == (MVGameControllerBase *)0x0) || (pMVar26 = (pMVar25->fields).game, pMVar26 == (MVNetworkGame *)0x0)) || (pWVar27 = (pMVar26->fields).worldNetwork, pWVar27 == (WorldNetwork *)0x0)) || (this_00 = (RuntimeEventManager *)(pWVar27->fields)._.runtimeEventManagerNetwork, this_00 == (RuntimeEventManager *)0x0)) goto code_?;
            aVStack_23[0].point.x = VStack_1.point.x;
            aVStack_23[0].point.y = VStack_1.point.y;
            aVStack_23[0].point.z = VStack_1.point.z;
            aVStack_23[0].normal.x = VStack_1.normal.x;
            aVStack_23[0].normal.y = VStack_1.normal.y;
            aVStack_23[0].normal.z = VStack_1.normal.z;
            aVStack_23[0].cubePos = VStack_1.cubePos;
            aVStack_23[0]._30_2_ = VStack_1._30_2_;
            aVStack_23[0].face = VStack_1.face;
            aVStack_23[0].isCubeHit = VStack_1.isCubeHit;
            aVStack_23[0]._37_3_ = VStack_1._37_3_;
            aVStack_23[0].woId = VStack_1.woId;
            aVStack_23[0]._44_4_ = VStack_1._44_4_;
            aVStack_23[0].cube = VStack_1.cube;
            aVStack_23[0].distance = VStack_1.distance;
            aVStack_23[0]._60_4_ = VStack_1._60_4_;
            aVStack_23[0].collider = VStack_1.collider;
            aVStack_23[0].transform = VStack_1.transform;
            aVStack_23[0].interactionFlags = VStack_1.interactionFlags;
            RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube(this_00,aVStack_23,20.0,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand__ctor(PickupItemHand *this,MethodInfo *method)

{
  (this->fields).pushMagnitude = 500.0;
  (this->fields).pushRadius = 3.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.crossHairCannotFireLow.r = 1.0;
  (this->fields)._.crossHairCannotFireLow.g = 0.0;
  (this->fields)._.crossHairCannotFireLow.b = 0.0;
  (this->fields)._.crossHairCannotFireLow.a = 1.0;
  (this->fields)._.crossHairCanFire.r = 0.0;
  (this->fields)._.crossHairCanFire.g = 1.0;
  (this->fields)._.crossHairCanFire.b = 0.0;
  (this->fields)._.crossHairCanFire.a = 1.0;
  (this->fields)._.crossHairCannotFireHigh.r = 1.0;
  (this->fields)._.crossHairCannotFireHigh.g = 0.92156863;
  (this->fields)._.crossHairCannotFireHigh.b = 0.015686275;
  (this->fields)._.crossHairCannotFireHigh.a = 1.0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = 0.0;
  uVar1._4_1_ = 0;
  uVar1._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat_InternalEncrypt(1.0,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar2 != 0) {
    uVar1._0_4_ = 1.0;
    uVar1._4_1_ = 0;
    uVar1._5_3_ = 0;
  }
  bVar3 = iRam_? != 0;
  pPVar4 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pPVar4->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar4->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar4->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar4->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields)._.fireInterval.fakeValue = (float)uVar1;
  (this->fields)._.fireInterval.inited = SUB81(uVar1,4);
  *(int3 *)&(this->fields)._.fireInterval.field_0x15 = SUB83(uVar1,5);
  if (bVar3) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.fireInterval.hiddenValueOld >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar7 == *puVar8;
      if (bVar3) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar3 = iRam_? != 0;
  (this->fields)._._.meshRenderers = pMVar9;
  if (bVar3) {
    uVar5 = (uint)((ulonglong)&(this->fields)._._.meshRenderers >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  bVar3 = cRam_? == '\0';
  (this->fields)._._._AbleToFire_k__BackingField = 1;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar10 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar11 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar12 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar13 = ppMVar11;
  if (lVar12 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar12 = lRam_?;
  }
  else {
    do {
      uVar5 = (uint)ppMVar13;
      LOCK();
      bVar3 = uVar5 != uRam_?;
      uVar14 = uVar5;
      uVar15 = uVar5 + 1;
      if (bVar3) {
        uVar14 = uRam_?;
        uVar15 = uRam_?;
      }
      uRam_? = uVar15;
      UNLOCK();
    } while ((bVar3) && (ppMVar13 = (MethodInfo **)(ulonglong)uVar14, uVar5 = uVar14, uVar14 != 2));
    while (uVar5 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar5 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar12;
  puVar16 = &(pOVar10->_1).field_0x1c;
  LOCK();
  bVar3 = *(int *)puVar16 == 1;
  if (bVar3) {
    *(undefined4 *)puVar16 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar3) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar5 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
    return;
  }
  puVar17 = &(pOVar10->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar3 = *puVar17 == 1;
  if (bVar3) {
    *puVar17 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar3) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar5 = GetCurrentThreadId();
    psVar18 = &(pOVar10->_1).cctor_thread;
    LOCK();
    bVar3 = (ulonglong)uVar5 == *psVar18;
    if (bVar3) {
      *psVar18 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (bVar3) {
      return;
    }
    while( true ) {
      puVar16 = &(pOVar10->_1).field_0x1c;
      LOCK();
      bVar3 = *(int *)puVar16 == 1;
      if (bVar3) {
        *(undefined4 *)puVar16 = 1;
      }
      UNLOCK();
      if (bVar3) break;
      LOCK();
      lVar12._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
      lVar12._4_4_ = (pOVar10->_1).cctor_started;
      if (lVar12 == 0) {
        (pOVar10->_1).initializationExceptionGCHandle = 0;
        (pOVar10->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar12 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar19._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
    lVar19._4_4_ = (pOVar10->_1).cctor_started;
    if (lVar19 == 0) {
      return;
    }
  }
  else {
    uVar5 = GetCurrentThreadId();
    LOCK();
    (pOVar10->_1).cctor_thread = (ulonglong)uVar5;
    UNLOCK();
    LOCK();
    (pOVar10->_1).cctor_finished_or_no_cctor = 1;
    uVar5 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar10->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar10);
      ppMVar13 = ppMVar11;
      pIVar20 = (Il2CppClass *)pOVar10;
code_?:
      do {
        if (ppMVar13 == (MethodInfo **)0x0) {
          FUN_?(pIVar20);
          if (pIVar20->field_count != 0) {
            ppMVar13 = pIVar20->methods;
            pMVar21 = *ppMVar13;
code_?:
            if (pMVar21 != (MethodInfo *)0x0) {
              if ((*pMVar21->name == '.') && ((pMVar21->flags & 0x800) != 0)) {
                ppMVar22 = ppMVar11;
                while (pcVar23 = (char *)((longlong)ppMVar22 + 0xADDR), ppMVar22 = (MethodInfo **)((longlong)ppMVar22 + 1), *pcVar23 == (pMVar21->name + -1)[(longlong)ppMVar22]) {
                  if (ppMVar22 == (MethodInfo **)0x7) {
                    FUN_?(pMVar21,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar13 = ppMVar13 + 1;
          if (ppMVar13 < pIVar20->methods + pIVar20->field_count) {
            pMVar21 = *ppMVar13;
            goto code_?;
          }
        }
        pIVar20 = pIVar20->parent;
        ppMVar13 = ppMVar11;
      } while (pIVar20 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar10->_1).cctor_thread = 0;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar10->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_24 = 0;
    uStack_25 = 0;
    uStack_26 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar10->_0).byval_arg,0,0);
    pppppppuVar20 = &pppppppuStack_78;
    if (0xf < uStack_26) {
      pppppppuVar20 = pppppppuStack_78;
    }
    FUN_?(&pppppppuStack_58,&UNK_?,pppppppuVar20);
    if (uStack_26 < 0x10) {
code_?:
      lVar12 = alStackX_10[0];
      uStack_25 = 0;
      uStack_26 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar20 = &pppppppuStack_58;
      if (0xf < uStack_27) {
        pppppppuVar20 = pppppppuStack_58;
      }
      lVar19 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar20);
      if (lVar12 != 0) {
        *(longlong *)(lVar19 + 0x28U) = lVar12;
        if (iRam_? != 0) {
          uVar5 = (uint)(lVar19 + 0x28U >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar8;
            LOCK();
            uVar6 = *puVar8;
            if (uVar7 == uVar6) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar6);
        }
      }
      FUN_?(pOVar10,lVar19);
      if (0xf < uStack_27) {
        pppppppuVar20 = pppppppuStack_58;
        if ((0xfff < uStack_27 + 1) && (pppppppuVar20 = (undefined8 *******)pppppppuStack_58[-1], 0x1f < (ulonglong)((longlong)pppppppuStack_58 + (-8 - (longlong)pppppppuVar20)))) goto code_?;
        func_?(pppppppuVar20);
      }
      goto code_?;
    }
    pppppppuVar20 = pppppppuStack_78;
    if ((uStack_26 + 1 < 0x1000) || (pppppppuVar20 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar20)) < 0x20)) {
      func_?(pppppppuVar20);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar28._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
  uVar28._4_4_ = (pOVar10->_1).cctor_started;
  uVar1 = FUN_?(uVar28);
  FUN_?(uVar1,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}

