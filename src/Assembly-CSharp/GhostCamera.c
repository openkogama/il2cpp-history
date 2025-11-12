
/* Void CameraCollision() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_CameraCollision(GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_within_line_segment);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).lookAtTransform;
  aVStack_2[0].interactionFlags = 0;
  aVStack_2[0].point.x = 0.0;
  aVStack_2[0].point.y = 0.0;
  aVStack_2[0].point.z = 0.0;
  aVStack_2[0].normal.x = 0.0;
  aVStack_2[0].normal.y = 0.0;
  aVStack_2[0].normal.z = 0.0;
  aVStack_2[0].cubePos.x = 0;
  aVStack_2[0].cubePos.y = 0;
  aVStack_2[0].cubePos.z = 0;
  aVStack_2[0]._30_2_ = 0;
  aVStack_2[0].face = 0;
  aVStack_2[0].isCubeHit = 0;
  aVStack_2[0]._37_3_ = 0;
  aVStack_2[0].woId = 0;
  aVStack_2[0]._44_4_ = 0;
  aVStack_2[0].cube = (Cube *)0x0;
  aVStack_2[0].distance = 0.0;
  aVStack_2[0]._60_4_ = 0;
  aVStack_2[0].collider = (Collider *)0x0;
  aVStack_2[0].transform = (Transform *)0x0;
  if (pTVar1 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5);
  VStack_7.x = (this->fields).avatarHeadOffset.x;
  VStack_7.y = (this->fields).avatarHeadOffset.y;
  fVar8 = VStack_4.x + VStack_7.x;
  fVar9 = VStack_4.z + (this->fields).avatarHeadOffset.z;
  fVar10 = VStack_4.y + VStack_7.y;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5);
  fVar11 = VStack_4.x - fVar8;
  fVar12 = VStack_4.y - fVar10;
  fVar13 = VStack_4.z - fVar9;
  VStack_4.y = fVar12;
  VStack_4.x = fVar11;
  VStack_4.z = fVar13;
  fVar14 = (float)FUN_?(&VStack_4);
  RStack_15.m_Origin.z = fVar13;
  RStack_15.m_Origin.y = fVar12;
  RStack_15.m_Origin.x = fVar11;
  fVar16 = (float)FUN_?(&RStack_15);
  if (1e-05 < fVar16) {
    fVar13 = fVar13 / fVar16;
    VStack_4.y = fVar12 / fVar16;
    VStack_4.x = fVar11 / fVar16;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_4.x = (pVVar17->zeroVector).x;
    VStack_4.y = (pVVar17->zeroVector).y;
    fVar13 = (pVVar17->zeroVector).z;
  }
  fVar16 = VStack_4.x;
  fVar11 = VStack_4.y;
  RStack_15.m_Origin.x = VStack_4.x;
  RStack_15.m_Origin.y = VStack_4.y;
  VStack_7.y = fVar10;
  VStack_7.x = fVar8;
  RStack_15.m_Origin.z = fVar13;
  VStack_7.z = fVar9;
  fVar12 = (float)FUN_?(&RStack_15);
  if (1e-05 < fVar12) {
    fVar18 = fVar13 / fVar12;
    uStack_19 = CONCAT44(fVar11 / fVar12,fVar16 / fVar12);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_19._0_4_ = (pVVar17->zeroVector).x;
    uStack_19._4_4_ = (pVVar17->zeroVector).y;
    fVar18 = (pVVar17->zeroVector).z;
  }
  fStack_20 = (float)uStack_19;
  fStack_21 = (float)((ulonglong)uStack_19 >> 0x20);
  fStack_22 = fVar18;
  iVar23 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
  RStack_15.m_Direction.z = fStack_22;
  RStack_15.m_Direction.y = fStack_21;
  RStack_15.m_Direction.x = fStack_20;
  RStack_15.m_Origin.z = VStack_7.z;
  RStack_15.m_Origin.x = VStack_7.x;
  RStack_15.m_Origin.y = VStack_7.y;
  bVar24 = CollisionDetection::CollisionDetection_MVSphereCast(&RStack_15,(this->fields)._.cameraRadius,aVStack_2,fVar14,(this->fields).ignoreAvatarId,1 << ((byte)iVar23 & 0x1f),(MethodInfo *)0x0);
  if (bVar24 == 0) {
    return;
  }
  if (aVStack_2[0].distance < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
    return;
  }
  fVar14 = aVStack_2[0].point.z;
  VStack_7.x = aVStack_2[0].point.x;
  VStack_7.y = aVStack_2[0].point.y;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5);
  fVar12 = 0.0;
  RStack_15.m_Origin.x = 0.0;
  RStack_15.m_Origin.y = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar16 = (VStack_4.x + fVar16) - fVar8;
  fVar11 = (VStack_4.y + fVar11) - fVar10;
  fVar27 = (VStack_4.z + fVar13) - fVar9;
  fVar13 = fVar11 * fVar11 + fVar16 * fVar16 + fVar27 * fVar27;
  if (1.4013e-45 <= fVar13) {
    fVar13 = ((VStack_7.x - fVar8) * fVar16 + (VStack_7.y - fVar10) * fVar11 + (fVar14 - fVar9) * fVar27) / fVar13;
    if ((0.0 <= fVar13) && (fVar13 <= 1.0)) {
      fVar26 = fVar13 * fVar16 + fVar8;
      fVar16 = fVar13 * fVar11 + fVar10;
      fVar12 = fVar13 * fVar27 + fVar9;
      RStack_15.m_Origin.y = fVar16;
      RStack_15.m_Origin.x = fVar26;
      VStack_7.z = fVar14 - fVar12;
      VStack_7.y = VStack_7.y - fVar16;
      VStack_7.x = VStack_7.x - fVar26;
      fVar26 = (float)FUN_?(&VStack_7);
      goto code_?;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
  pOVar28 = (Object *)FUN_?(uRam_?);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar28,(MethodInfo *)0x0);
  pOVar28 = (Object *)FUN_?(uRam_?);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar28,(MethodInfo *)0x0);
code_?:
  fVar13 = (this->fields)._.cameraRadius;
  if (fVar26 < fVar13) {
    fVar25 = fVar13 * fVar13 - fVar26 * fVar26;
    if (fVar25 < 0.0) {
      fVar25 = (float)FUN_?();
    }
    else {
      fVar25 = SQRT(fVar25);
    }
  }
  fVar13 = (this->fields).distance;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
  fVar12 = fVar12 - fVar18 * fVar25;
  if (pTVar1 != (Transform *)0x0) {
    VStack_7.y = RStack_15.m_Origin.y - uStack_19._4_4_ * fVar25;
    VStack_7.x = RStack_15.m_Origin.x - (float)uStack_19 * fVar25;
    VStack_7.z = fVar12;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar5);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      VStack_4.z = 0.0;
      pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar5 != (void *)0x0) {
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar5,&VStack_4);
        VStack_7.x = fVar8 - VStack_4.x;
        VStack_7.z = fVar9 - VStack_4.z;
        VStack_7.y = fVar10 - VStack_4.y;
        fVar16 = (float)FUN_?(&VStack_7);
        (this->fields).distance = fVar16;
        fVar16 = fVar16 / fVar13;
        uVar29 = (this->fields).currentLookAt.x;
        fVar13 = (this->fields).currentLookAt.y;
        fVar14 = (this->fields).currentLookAt.z;
        (this->fields).currentLookAt.x = ((float)uVar29 - fVar8) * fVar16 + fVar8;
        (this->fields).currentLookAt.y = (fVar13 - fVar10) * fVar16 + fVar10;
        (this->fields).currentLookAt.z = (fVar14 - fVar9) * fVar16 + fVar9;
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_Enter(GhostCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_01 != (HashSet_1_System_Int32_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::HashSet_1_System_Int32__AddIfNotPresent(this_01,(pMVar1->fields)._._._._.id,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data[0x15].method);
    bVar2 = iRam_? != 0;
    (this->fields).ignoreAvatarId = this_01;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).ignoreAvatarId >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pTVar7 = (this->fields).lookAtTransform;
    if (pTVar7 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_8 = 0;
      uStack_9 = uStack_9 & 0xffffffff00000000;
      pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pvVar10);
      uStack_13._0_4_ = (this->fields).avatarHeadOffset.x;
      uStack_13._4_4_ = (this->fields).avatarHeadOffset.y;
      fVar14 = (this->fields).avatarHeadOffset.z;
      pMVar1 = (this->fields).avatarLocal;
      (this->fields).currentLookAt.x = (float)uStack_8 + (float)uStack_13;
      (this->fields).currentLookAt.y = uStack_8._4_4_ + uStack_13._4_4_;
      (this->fields).currentLookAt.z = (float)uStack_9 + fVar14;
      if ((pMVar1 != (MVAvatarLocal *)0x0) && (pTVar7 = (pMVar1->fields)._._._.transform, pTVar7 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_13 = 0;
        fStack_15 = 0.0;
        pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10);
        fStack_16 = fStack_15 + 0.0;
        fVar14 = (float)uStack_13 + 0.0;
        fVar17 = uStack_13._4_4_ + (this->fields).height;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_8 = 0;
          uStack_9 = 0;
          pvVar10 = (obj->fields)._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(pvVar10);
          uStack_13._0_4_ = (this->fields).offset.x;
          uStack_13._4_4_ = (this->fields).offset.y;
          fVar18 = (float)uStack_9 + (float)uStack_9;
          fVar19 = uStack_8._4_4_ + uStack_8._4_4_;
          fVar20 = ((float)uStack_8 + (float)uStack_8) * (float)uStack_8;
          fVar21 = ((float)uStack_8 + (float)uStack_8) * uStack_9._4_4_;
          fVar22 = (this->fields).offset.z;
          fVar23 = (fVar18 * (float)uStack_8 - fVar19 * uStack_9._4_4_) * (float)uStack_13 + (fVar21 + fVar18 * uStack_8._4_4_) * uStack_13._4_4_ + (1.0 - (fVar19 * uStack_8._4_4_ + fVar20)) * fVar22 + fStack_16;
          if (pTVar7 == (Transform *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uStack_13 = CONCAT44((1.0 - (fVar18 * (float)uStack_9 + fVar20)) * uStack_13._4_4_ + (fVar18 * uStack_9._4_4_ + fVar19 * (float)uStack_8) * (float)uStack_13 + (fVar18 * uStack_8._4_4_ - fVar21) * fVar22 + fVar17,(1.0 - (fVar18 * (float)uStack_9 + fVar19 * uStack_8._4_4_)) * (float)uStack_13 + (fVar19 * (float)uStack_8 - fVar18 * uStack_9._4_4_) * uStack_13._4_4_ + (fVar19 * uStack_9._4_4_ + fVar18 * (float)uStack_8) * fVar22 + fVar14);
          fStack_15 = fVar23;
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(pvVar10,&uStack_13);
          bVar24 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
          if (bVar24 == 0) {
            return;
          }
          pSVar25 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
          if (((pSVar25 != (SpawnRoleDataMediator *)0x0) && (pSVar26 = (pSVar25->fields).lastRespawnType, pSVar26 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_ *)0x0)) && (pSVar27 = (pSVar26->fields)._.subscribableVariable, pSVar27 != (SubscribableVariable_1_LastRespawnType_ *)0x0)) {
            if ((pSVar27->fields)._.value != 1) {
              return;
            }
            pSVar25 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
            if (((pSVar25 != (SpawnRoleDataMediator *)0x0) && (pSVar28 = (pSVar25->fields).reviveState, pSVar28 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)0x0)) && ((pSVar29 = (pSVar28->fields)._.subscribableVariable, pSVar29 != (SubscribableVariable_1_ReviveState_ *)0x0 && (this_00 = (pSVar29->fields)._.value, this_00 != (ReviveState *)0x0)))) {
              pSVar30 = ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex(aSStack_31,this_00,(MethodInfo *)0x0);
              uStack_32._0_4_ = (pSVar30->Rotation).y;
              uStack_32._4_4_ = (pSVar30->Rotation).z;
              uVar12 = *(undefined8 *)&(pSVar30->Rotation).w;
              fStack_33 = (pSVar30->CameraPosition).y;
              fVar14 = (pSVar30->CameraPosition).z;
              fStack_34 = (pSVar30->CameraRotation).x;
              fStack_35 = (pSVar30->CameraRotation).y;
              uStack_36._0_4_ = (pSVar30->CameraRotation).z;
              uStack_36._4_4_ = (pSVar30->CameraRotation).w;
              uStack_37 = (undefined4)uVar12;
              uStack_38 = (undefined4)((ulonglong)uVar12 >> 0x20);
              fStack_39 = fVar14;
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
              if (pTVar7 != (Transform *)0x0) {
                uStack_13 = CONCAT44(fStack_33,uStack_38);
                fStack_15 = fVar14;
                if (cRam_? == '\0') {
                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
                if (pvVar10 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcVar11 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                  uVar12 = func_?(&UNK_?);
                  FUN_?(uVar12,0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcRam_? = pcVar11;
                (*pcRam_?)(pvVar10);
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if (pTVar7 != (Transform *)0x0) {
                  uStack_8 = CONCAT44(fStack_35,fStack_34);
                  uStack_9 = uStack_36;
                  if (cRam_? == '\0') {
                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
                  if (pvVar10 != (void *)0x0) {
                    pcVar11 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                      uVar12 = func_?(&UNK_?);
                      FUN_?(uVar12,0);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pcRam_? = pcVar11;
                    (*pcRam_?)(pvVar10,&uStack_8);
                    return;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_Initialize(GhostCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).avatarLocal = avatarLocal;
  pGVar2 = this;
  pMVar3 = avatarLocal;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&(this->fields).avatarLocal >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    pMVar3 = (MVAvatarLocal *)(lVar5 + 0xADDR);
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      pGVar2 = (GhostCamera *)(uVar6 | 1L << (longlong)method);
      LOCK();
      bVar1 = uVar6 == *(ulonglong *)(lVar5 + 0xADDR);
      if (bVar1) {
        *(ulonglong *)(lVar5 + 0xADDR) = (ulonglong)pGVar2;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (avatarLocal != (MVAvatarLocal *)0x0) {
    this_00 = (avatarLocal->fields)._._._.gameObject;
    pGVar2 = (GhostCamera *)0x0;
    if (this_00 != (GameObject *)0x0) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0);
      bVar1 = iRam_? != 0;
      (this->fields).lookAtTransform = pTVar7;
      if (bVar1) {
        uVar4 = (uint)((ulonglong)&(this->fields).lookAtTransform >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar8 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar1 = uVar6 == *puVar8;
          if (bVar1) {
            *puVar8 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      return;
    }
  }
  FUN_?(pGVar2,pMVar3,method);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_UpdateCamera(GhostCamera *this,MVCameraController *camController,ProtectedTransform *targetTransform,MethodInfo *method)

{
  fVar1 = (this->fields).desiredDistance;
  fVar2 = (this->fields).distance;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcRam_?)();
  fVar5 = fVar5 + fVar5;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (1.0 < fVar5) {
    fVar5 = 1.0;
  }
  (this->fields).distance = (fVar1 - fVar2) * fVar5 + fVar2;
  GhostCamera_UpdatePosition(this,(MethodInfo *)0x0);
  (*(this->klass->vtable).CameraCollision.methodPtr)(this);
  uStack_6._0_4_ = (this->fields).currentLookAt.x;
  uStack_6._4_4_ = (this->fields).currentLookAt.y;
  fVar1 = (this->fields).currentLookAt.z;
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
  if (pTVar7 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_8.x = 0.0;
    VStack_8.y = 0.0;
    VStack_8.z = 0.0;
    pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar9);
    uVar4._0_4_ = (this->fields).lookAtPos.x;
    uVar4._4_4_ = (this->fields).lookAtPos.y;
    fVar5 = (float)uStack_6 - VStack_8.x;
    fVar10 = uStack_6._4_4_ - VStack_8.y;
    fVar1 = fVar1 - VStack_8.z;
    fVar2 = (this->fields).lookAtPos.z;
    uStack_6 = uVar4;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_8.x = 0.0;
      VStack_8.y = 0.0;
      VStack_8.z = 0.0;
      pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar9,&VStack_8);
      fStack_11 = fVar2 - VStack_8.z;
      uStack_6 = CONCAT44(uStack_6._4_4_ - VStack_8.y,(float)uStack_6 - VStack_8.x);
      stack0xffffffffffffff40 = CONCAT44(fStack_12,fVar1);
      auStack_13._4_4_ = fVar10;
      auStack_13._0_4_ = fVar5;
      auStack_14._0_4_ = 0.0;
      auStack_14._4_4_ = 0.0;
      stack0xffffffffffffff60 = 0;
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(auStack_13,&uStack_6);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar15 = TypeInfo__UnityEngine__Quaternion->static_fields;
      uVar16._0_4_ = (pQVar15->identityQuaternion).x;
      uVar16._4_4_ = (pQVar15->identityQuaternion).y;
      uVar17._0_4_ = (pQVar15->identityQuaternion).z;
      uVar17._4_4_ = (pQVar15->identityQuaternion).w;
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      VStack_8.x = (float)auStack_14._0_4_;
      VStack_8.y = (float)auStack_14._4_4_;
      VStack_8.z = (float)auStack_14._8_4_;
      uStack_18 = uStack_19;
      uStack_20 = 0;
      uStack_21 = 0;
      aQStack_22[0]._0_8_ = uVar16;
      aQStack_22[0]._8_8_ = uVar17;
      (*pcRam_?)();
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(aQStack_22);
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_8.x = 0.0;
        VStack_8.y = 0.0;
        VStack_8.z = 0.0;
        pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar9,&VStack_8);
        if (targetTransform != (ProtectedTransform *)0x0) {
          auStack_13._0_4_ = VStack_8.x;
          auStack_13._4_4_ = VStack_8.y;
          stack0xffffffffffffff40 = CONCAT44(fStack_12,VStack_8.z);
          ProtectedTransform::ProtectedTransform_set_position(targetTransform,(Vector3 *)auStack_13,(MethodInfo *)0x0);
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            auStack_13._0_4_ = 0.0;
            auStack_13._4_4_ = 0.0;
            stack0xffffffffffffff40 = 0;
            pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar9,auStack_13);
            aQStack_22[0].y = ((float)auStack_13._4_4_ * uStack_21._4_4_ + fStack_12 * uStack_20._4_4_ + (float)auStack_13._0_4_ * (float)uStack_21) - (float)auStack_13._8_4_ * (float)uStack_20;
            aQStack_22[0].x = ((float)auStack_13._0_4_ * uStack_21._4_4_ + fStack_12 * (float)uStack_20 + (float)auStack_13._8_4_ * uStack_20._4_4_) - (float)auStack_13._4_4_ * (float)uStack_21;
            aQStack_22[0].w = ((fStack_12 * uStack_21._4_4_ - (float)auStack_13._0_4_ * (float)uStack_20) - (float)auStack_13._4_4_ * uStack_20._4_4_) - (float)auStack_13._8_4_ * (float)uStack_21;
            aQStack_22[0].z = ((float)auStack_13._8_4_ * uStack_21._4_4_ + fStack_12 * (float)uStack_21 + (float)auStack_13._4_4_ * (float)uStack_20) - (float)auStack_13._0_4_ * uStack_20._4_4_;
            ProtectedTransform::ProtectedTransform_set_rotation(targetTransform,aQStack_22,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdatePosition() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_UpdatePosition(GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    fStack_3 = 0.0;
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    pTVar7 = (this->fields).lookAtTransform;
    if (pTVar7 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_8 = 0;
      fStack_9 = 0.0;
      pvVar4 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4);
      VStack_10.x = (this->fields).prevLookAtTransformPos.x;
      VStack_10.y = (this->fields).prevLookAtTransformPos.y;
      fStack_3 = (fStack_9 - (this->fields).prevLookAtTransformPos.z) + fStack_3;
      uStack_2 = CONCAT44((uStack_8._4_4_ - VStack_10.y) + uStack_2._4_4_,((float)uStack_8 - VStack_10.x) + (float)uStack_2);
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4);
      fVar11 = (this->fields).distance / (this->fields).desiredDistance;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        aQStack_12[0].x = 0.0;
        aQStack_12[0].y = 0.0;
        aQStack_12[0].z = 0.0;
        aQStack_12[0].w = 0.0;
        pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,aQStack_12);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles(&VStack_10,aQStack_12,in_R8);
        uStack_8 = (ulonglong)(uint)(pVVar13->y * 0.017453292) << 0x20;
        fStack_9 = 0.0;
        aQStack_12[0].x = 0.0;
        aQStack_12[0].y = 0.0;
        aQStack_12[0].z = 0.0;
        aQStack_12[0].w = 0.0;
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(&uStack_8);
        pTVar1 = (this->fields).lookAtTransform;
        if (pTVar1 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_2 = 0;
          fStack_3 = 0.0;
          pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
          if (pvVar4 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar4);
          uVar14 = (this->fields).offset.x;
          uVar15 = (this->fields).offset.y;
          VStack_10.x = (this->fields).avatarHeadOffset.x;
          VStack_10.y = (this->fields).avatarHeadOffset.y;
          fVar16 = (float)uVar14 * fVar11 + VStack_10.x;
          fVar17 = (float)uVar15 * fVar11 + VStack_10.y;
          fVar18 = (this->fields).offset.z * fVar11 + (this->fields).avatarHeadOffset.z;
          fVar19 = aQStack_12[0].z + aQStack_12[0].z;
          fVar20 = aQStack_12[0].y + aQStack_12[0].y;
          fVar21 = (aQStack_12[0].x + aQStack_12[0].x) * aQStack_12[0].x;
          fVar22 = (aQStack_12[0].x + aQStack_12[0].x) * aQStack_12[0].w;
          pTVar1 = (this->fields).lookAtTransform;
          (this->fields).lookAtPos.x = (1.0 - (fVar19 * aQStack_12[0].z + fVar20 * aQStack_12[0].y)) * fVar16 + (fVar20 * aQStack_12[0].x - fVar19 * aQStack_12[0].w) * fVar17 + (fVar20 * aQStack_12[0].w + fVar19 * aQStack_12[0].x) * fVar18 + (float)uStack_2;
          (this->fields).lookAtPos.y = (1.0 - (fVar19 * aQStack_12[0].z + fVar21)) * fVar17 + (fVar19 * aQStack_12[0].w + fVar20 * aQStack_12[0].x) * fVar16 + (fVar19 * aQStack_12[0].y - fVar22) * fVar18 + uStack_2._4_4_;
          (this->fields).lookAtPos.z = (fVar22 + fVar19 * aQStack_12[0].y) * fVar17 + (fVar19 * aQStack_12[0].x - fVar20 * aQStack_12[0].w) * fVar16 + (1.0 - (fVar20 * aQStack_12[0].y + fVar21)) * fVar18 + fStack_3;
          if (pTVar1 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_8 = 0;
            fStack_9 = 0.0;
            pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar4);
            uVar23 = (this->fields).avatarHeadOffset.x;
            uVar24 = (this->fields).avatarHeadOffset.y;
            fVar21 = (float)uStack_8 + (float)uVar23;
            fVar17 = fStack_9 + (this->fields).avatarHeadOffset.z;
            fVar20 = uStack_8._4_4_ + (float)uVar24;
            VStack_10.x = (this->fields).lookAtPos.x;
            VStack_10.y = (this->fields).lookAtPos.y;
            fVar18 = (VStack_10.x - fVar21) * fVar11;
            fVar19 = (VStack_10.y - fVar20) * fVar11;
            fVar11 = ((this->fields).lookAtPos.z - fVar17) * fVar11;
            uStack_8 = CONCAT44(fVar19,fVar18);
            fStack_9 = fVar11;
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_2 = 0;
              fStack_3 = 0.0;
              pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pcVar5 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pcRam_? = pcVar5;
              (*pcRam_?)(pvVar4);
              fVar25 = (float)uStack_2 - fVar21;
              fVar26 = uStack_2._4_4_ - fVar20;
              fVar22 = fStack_3 - fVar17;
              fVar16 = (float)FUN_?(&uStack_8);
              uStack_2 = uStack_8;
              fStack_3 = fVar11;
              fVar27 = (float)FUN_?(&uStack_2);
              if (1e-05 < fVar27) {
                fVar28 = fVar11 / fVar27;
                uStack_8 = CONCAT44(fVar19 / fVar27,fVar18 / fVar27);
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
                uStack_8._0_4_ = (pVVar29->zeroVector).x;
                uStack_8._4_4_ = (pVVar29->zeroVector).y;
                fVar28 = (pVVar29->zeroVector).z;
              }
              uStack_2 = CONCAT44(fVar26,fVar25);
              fStack_3 = fVar22;
              fVar27 = (float)FUN_?(&uStack_2);
              if (1e-05 < fVar27) {
                fVar22 = fVar22 / fVar27;
                uStack_2 = CONCAT44(fVar26 / fVar27,fVar25 / fVar27);
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
                uStack_2._0_4_ = (pVVar29->zeroVector).x;
                uStack_2._4_4_ = (pVVar29->zeroVector).y;
                fVar22 = (pVVar29->zeroVector).z;
              }
              fVar27 = (this->fields).distance;
              fVar22 = (fVar27 * fVar27 + fVar16 * fVar16) - (uStack_2._4_4_ * uStack_8._4_4_ + (float)uStack_2 * (float)uStack_8 + fVar22 * fVar28) * (fVar27 + fVar27) * fVar16;
              if (fVar22 < 0.0) {
                fVar22 = (float)FUN_?();
              }
              else {
                fVar22 = SQRT(fVar22);
              }
              (this->fields).actualLookAt.x = fVar21 + fVar18;
              (this->fields).actualLookAt.y = fVar20 + fVar19;
              (this->fields).currentLookAt.x = fVar21 + fVar18;
              (this->fields).currentLookAt.y = fVar20 + fVar19;
              (this->fields).actualLookAt.z = fVar17 + fVar11;
              (this->fields).currentLookAt.z = fVar17 + fVar11;
              if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fVar22 && fVar22 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
                uStack_2._0_4_ = (this->fields).actualLookAt.x;
                uStack_2._4_4_ = (this->fields).actualLookAt.y;
                fVar11 = (this->fields).actualLookAt.z;
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if (pTVar7 == (Transform *)0x0) goto code_?;
                pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_10,pTVar7,(MethodInfo *)0x0);
                uStack_8._0_4_ = pVVar13->x;
                uStack_8._4_4_ = pVVar13->y;
                fVar11 = fVar11 - pVVar13->z * fVar22;
                if (pTVar1 == (Transform *)0x0) {
                  FUN_?();
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uStack_8 = CONCAT44(uStack_2._4_4_ - uStack_8._4_4_ * fVar22,(float)uStack_2 - (float)uStack_8 * fVar22);
                fStack_9 = fVar11;
                if (cRam_? == '\0') {
                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
                if (pvVar4 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pcVar5 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pcRam_? = pcVar5;
                (*pcRam_?)(pvVar4);
              }
              pTVar1 = (this->fields).lookAtTransform;
              if (pTVar1 != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStack_2 = 0;
                fStack_3 = 0.0;
                pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
                if (pvVar4 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pcVar5 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pcRam_? = pcVar5;
                (*pcRam_?)(pvVar4,&uStack_2);
                (this->fields).prevLookAtTransformPos.x = (float)uStack_2;
                (this->fields).prevLookAtTransformPos.y = uStack_2._4_4_;
                (this->fields).prevLookAtTransformPos.z = fStack_3;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GhostCamera() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera__ctor(GhostCamera *this,MethodInfo *method)

{
  (this->fields).avatarHeadOffset.x = 0.0;
  (this->fields).avatarHeadOffset.y = 1.5;
  (this->fields).avatarHeadOffset.z = 0.0;
  (this->fields).height = 1.0;
  (this->fields).desiredDistance = 5.0;
  (this->fields).distance = 5.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).lookAtPos.x = (pVVar2->zeroVector).x;
  (this->fields).lookAtPos.y = fVar3;
  (this->fields).lookAtPos.z = fVar4;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar5 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).actualLookAt.x = (pVVar2->zeroVector).x;
  (this->fields).actualLookAt.y = fVar3;
  (this->fields).actualLookAt.z = fVar4;
  (this->fields)._.cameraRadius = 0.3;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar10 = (uint)ppMVar9;
      LOCK();
      bVar5 = uVar10 != uRam_?;
      uVar11 = uVar10;
      uVar12 = uVar10 + 1;
      if (bVar5) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar5) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar11, uVar10 = uVar11, uVar11 != 2));
    while (uVar10 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar10 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar13 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar5 = *(int *)puVar13 == 1;
  if (bVar5) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar5) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar10 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar5 = *puVar14 == 1;
  if (bVar5) {
    *puVar14 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar5) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar10 = GetCurrentThreadId();
    psVar15 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar5 = (ulonglong)uVar10 == *psVar15;
    if (bVar5) {
      *psVar15 = (ulonglong)uVar10;
    }
    UNLOCK();
    if (bVar5) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar5 = *(int *)puVar13 == 1;
      if (bVar5) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar5) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar10 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar10;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar10 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar17 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar9 = pIVar17->methods;
            pMVar18 = *ppMVar9;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar7;
                while (ppMVar20 = ppMVar19 + 0x30528cee, ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1), *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = 0;
    uStack_23 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar21 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar21 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar21);
    if (uStack_23 < 0x10) {
code_?:
      lVar8 = alStackX_10[0];
      uStack_22 = 0;
      uStack_23 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar21 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar21 = apppppppuStack_58[0];
      }
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar21);
      if (lVar8 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar10 = (uint)(lVar16 + 0x28U >> 0xc);
          puVar25 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar26 = *puVar25;
            LOCK();
            uVar27 = *puVar25;
            if (uVar26 == uVar27) {
              *puVar25 = uVar26 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar26 != uVar27);
        }
      }
      FUN_?(pOVar6,lVar16);
      if (0xf < uStack_24) {
        pppppppuVar21 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) && (pppppppuVar21 = (undefined8 *******)apppppppuStack_58[0][-1], 0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar21)))) goto code_?;
        func_?(pppppppuVar21);
      }
      goto code_?;
    }
    pppppppuVar21 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) || (pppppppuVar21 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar21)) < 0x20)) {
      func_?(pppppppuVar21);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar28._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar28._4_4_ = (pOVar6->_1).cctor_started;
  uVar28 = FUN_?(uVar28);
  FUN_?(uVar28,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}

