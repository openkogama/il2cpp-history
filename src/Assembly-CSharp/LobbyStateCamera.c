
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_Enter
               (LobbyStateCamera *this,MVCameraController *camController,MethodInfo *method)

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
    cRam_? = '\x01';
  }
  this_03 = (HashSet_1_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(this_03,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_03 != (HashSet_1_System_Int32_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__AddIfNotPresent
              (this_03,(pMVar1->fields)._._._._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
               [0x15].method);
    bVar2 = iRam_? != 0;
    (this->fields).ignoreAvatarId = this_03;
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
    this_00 = (this->fields).avatarCameraDistTransparency;
    if (this_00 != (AvatarCameraDistTransparency *)0x0) {
      AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                (this_00,(this->fields).avatarLocal,(MethodInfo *)0x0);
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar7 != (MainCameraManager *)0x0) {
        pMVar8 = (pMVar7->fields).cameraController;
        this_01 = (pMVar7->fields).transitionCamera;
        if ((((pMVar8 != (MVCameraController *)0x0) &&
             (this_02 = (pMVar8->fields).cameraStack,
             this_02 != (MVCameraController_CameraStack *)0x0)) &&
            (this_04 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                                 (this_02,(MethodInfo *)0x0), this_04 != (MVCameraBase *)0x0)) &&
           (targetCameraTransform =
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_04,(MethodInfo *)0x0),
           this_01 != (TransitionCamera *)0x0)) {
          TransitionCamera::TransitionCamera_InitTransition
                    (this_01,targetCameraTransform,_UNK_?,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Vector3 GetLookAtPosition() */

Vector3 * Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_GetLookAtPosition
                    (Vector3 *__return_storage_ptr__,LobbyStateCamera *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (obj = (pMVar1->fields)._._._.transform, obj == (Transform *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_4 = 0;
  fStack_5 = 0.0;
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar6,&uStack_4);
  fVar8 = (this->fields).height;
  __return_storage_ptr__->x = (float)uStack_4 + 0.0;
  __return_storage_ptr__->y = uStack_4._4_4_ + fVar8;
  __return_storage_ptr__->z = fStack_5 + 0.0;
  return __return_storage_ptr__;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_Initialize
               (LobbyStateCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarCameraDistTransparency);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).avatarLocal = avatarLocal;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarLocal >> 0xc);
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
  fVar6 = (this->fields).avatarHeadOffset.x;
  fVar7 = (this->fields).avatarHeadOffset.y;
  fVar8 = (this->fields).avatarHeadOffset.z;
  pAVar9 = (AvatarCameraDistTransparency *)FUN_?(TypeInfo__AvatarCameraDistTransparency);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (pAVar9->fields).camMoveTowardsOffset.x = fVar6;
  (pAVar9->fields).camMoveTowardsOffset.y = fVar7;
  (pAVar9->fields).camMoveTowardsOffset.z = fVar8;
  (pAVar9->fields).fadeStartBase = 4.0;
  (pAVar9->fields).fadeEndBase = 2.0;
  (pAVar9->fields).prevDist = -1.0;
  (pAVar9->fields).fadeStartDistance = 4.0;
  (pAVar9->fields).fadeEndDistance = 1.0;
  (this->fields).avatarCameraDistTransparency = pAVar9;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarCameraDistTransparency >> 0xc);
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
  return;
}


/* Vector3 PositionAfterCollision(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_PositionAfterCollision
                    (Vector3 *__return_storage_ptr__,LobbyStateCamera *this,Vector3 *desiredPosition
                    ,Vector3 *moveToPosition,MethodInfo *method)

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
  RStack_1.m_Origin.x = moveToPosition->x;
  RStack_1.m_Origin.y = moveToPosition->y;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  aVStack_3[0].point.x = 0.0;
  aVStack_3[0].point.y = 0.0;
  aVStack_3[0].point.z = 0.0;
  aVStack_3[0].normal.x = 0.0;
  aVStack_3[0].interactionFlags = 0;
  aVStack_3[0].normal.y = 0.0;
  aVStack_3[0].normal.z = 0.0;
  aVStack_3[0].cubePos.x = 0;
  aVStack_3[0].cubePos.y = 0;
  aVStack_3[0].cubePos.z = 0;
  aVStack_3[0]._30_2_ = 0;
  VStack_2.z = 0.0;
  aVStack_3[0].face = 0;
  aVStack_3[0].isCubeHit = 0;
  aVStack_3[0]._37_3_ = 0;
  aVStack_3[0].woId = 0;
  aVStack_3[0]._44_4_ = 0;
  aVStack_3[0].cube = (Cube *)0x0;
  aVStack_3[0].distance = 0.0;
  aVStack_3[0]._60_4_ = 0;
  aVStack_3[0].collider = (Collider *)0x0;
  aVStack_3[0].transform = (Transform *)0x0;
  uVar4 = desiredPosition->x;
  uVar5 = desiredPosition->y;
  fVar6 = desiredPosition->z - moveToPosition->z;
  fVar7 = (float)uVar4 - RStack_1.m_Origin.x;
  fVar8 = (float)uVar5 - RStack_1.m_Origin.y;
  uStack_9 = CONCAT44(fVar8,fVar7);
  fStack_10 = fVar6;
  fVar11 = (float)FUN_?(&uStack_9);
  uStack_12 = CONCAT44(fVar8,fVar7);
  fStack_13 = fVar6;
  fVar14 = (float)FUN_?(&uStack_12);
  fVar15 = _UNK_?;
  if (_UNK_? < fVar14) {
    fVar6 = fVar6 / fVar14;
    uStack_9 = CONCAT44(fVar8 / fVar14,fVar7 / fVar14);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_9._0_4_ = (pVVar16->zeroVector).x;
    uStack_9._4_4_ = (pVVar16->zeroVector).y;
    fVar6 = (pVVar16->zeroVector).z;
  }
  VStack_2.x = moveToPosition->x;
  VStack_2.y = moveToPosition->y;
  VStack_2.z = moveToPosition->z;
  fVar14 = (float)uStack_9;
  fVar8 = uStack_9._4_4_;
  uStack_12 = uStack_9;
  fStack_13 = fVar6;
  fVar7 = (float)FUN_?(&uStack_12);
  if (fVar15 < fVar7) {
    fVar15 = fVar6 / fVar7;
    uStack_17 = CONCAT44(fVar8 / fVar7,fVar14 / fVar7);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_17._0_4_ = (pVVar16->zeroVector).x;
    uStack_17._4_4_ = (pVVar16->zeroVector).y;
    fVar15 = (pVVar16->zeroVector).z;
  }
  fStack_18 = (float)uStack_17;
  fStack_19 = (float)((ulonglong)uStack_17 >> 0x20);
  fStack_20 = fVar15;
  iVar21 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Default,(MethodInfo *)0x0);
  RStack_1.m_Direction.z = fStack_20;
  RStack_1.m_Direction.y = fStack_19;
  RStack_1.m_Direction.x = fStack_18;
  RStack_1.m_Origin.z = VStack_2.z;
  RStack_1.m_Origin.x = VStack_2.x;
  RStack_1.m_Origin.y = VStack_2.y;
  bVar22 = CollisionDetection::CollisionDetection_MVSphereCast
                    (&RStack_1,(this->fields)._.cameraRadius,aVStack_3,fVar11,
                     (this->fields).ignoreAvatarId,1 << ((byte)iVar21 & 0x1f),(MethodInfo *)0x0);
  if ((bVar22 == 0) ||
     (aVStack_3[0].distance < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon)) {
    fVar15 = desiredPosition->y;
    fVar6 = desiredPosition->z;
    __return_storage_ptr__->x = desiredPosition->x;
    __return_storage_ptr__->y = fVar15;
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  fVar11 = aVStack_3[0].point.z;
  RStack_1.m_Origin.x = aVStack_3[0].point.x;
  RStack_1.m_Origin.y = aVStack_3[0].point.y;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar23 = (code *)swi(3);
    pVVar24 = (Vector3 *)(*pcVar23)();
    return pVVar24;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_9 = 0;
  fStack_10 = 0.0;
  pvVar25 = (obj->fields)._._.m_CachedPtr;
  if (pvVar25 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar23 = (code *)swi(3);
    pVVar24 = (Vector3 *)(*pcVar23)();
    return pVVar24;
  }
  pcVar23 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
    uVar26 = func_?(&UNK_?);
    FUN_?(uVar26,0);
    pcVar23 = (code *)swi(3);
    pVVar24 = (Vector3 *)(*pcVar23)();
    return pVVar24;
  }
  pcRam_? = pcVar23;
  (*pcRam_?)(pvVar25);
  uVar27 = moveToPosition->x;
  uVar28 = moveToPosition->y;
  fVar7 = 0.0;
  fVar29 = 0.0;
  uStack_12 = 0;
  fVar14 = ((float)uStack_9 + fVar14) - (float)uVar27;
  fVar8 = (uStack_9._4_4_ + fVar8) - (float)uVar28;
  fVar30 = (fStack_10 + fVar6) - moveToPosition->z;
  fVar6 = fVar8 * fVar8 + fVar14 * fVar14 + fVar30 * fVar30;
  if (_UNK_? <= fVar6) {
    uVar31 = moveToPosition->x;
    uVar32 = moveToPosition->y;
    fVar6 = ((RStack_1.m_Origin.x - (float)uVar31) * fVar14 +
              (RStack_1.m_Origin.y - (float)uVar32) * fVar8 +
             (fVar11 - moveToPosition->z) * fVar30) / fVar6;
    if ((0.0 <= fVar6) && (fVar6 <= _UNK_?)) {
      fVar29 = fVar6 * fVar14 + (float)uVar31;
      fVar14 = fVar6 * fVar8 + (float)uVar32;
      fVar7 = fVar6 * fVar30 + moveToPosition->z;
      uStack_12 = CONCAT44(fVar14,fVar29);
      RStack_1.m_Origin.x = RStack_1.m_Origin.x - fVar29;
      RStack_1.m_Origin.y = RStack_1.m_Origin.y - fVar14;
      RStack_1.m_Origin.z = fVar11 - fVar7;
      fVar29 = (float)FUN_?(&RStack_1);
      goto code_?;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
  message = (Object *)FUN_?(uRam_?);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
code_?:
  fVar6 = (this->fields)._.cameraRadius;
  fVar6 = fVar6 * fVar6 - fVar29 * fVar29;
  if (fVar6 < 0.0) {
    fVar6 = (float)FUN_?();
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  __return_storage_ptr__->x = (float)uStack_12 - fVar6 * (float)uStack_17;
  __return_storage_ptr__->y = uStack_12._4_4_ - fVar6 * uStack_17._4_4_;
  __return_storage_ptr__->z = fVar7 - fVar6 * fVar15;
  return __return_storage_ptr__;
}


/* Void SetRotation(Quaternion) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_SetRotation
               (LobbyStateCamera *this,Quaternion *rotation,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fStack_2 = rotation->x;
  fStack_3 = rotation->y;
  fStack_4 = rotation->z;
  fStack_5 = rotation->w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar6,&fStack_2);
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_UpdateCamera
               (LobbyStateCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar4);
    fVar7 = VStack_3.z + 0.0;
    fVar8 = VStack_3.x + 0.0;
    fVar9 = VStack_3.y + (this->fields).height;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar10 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_11._0_4_ = 0.0;
      auStack_11._4_4_ = 0.0;
      stack0xffffffffffffff20 = 0;
      pvVar4 = (pTVar10->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
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
      uStack_12 = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
      fStack_13 = unaff_XMM8_Dc;
      (*pcRam_?)(pvVar4);
      uVar6 = uStack_12;
      aVStack_14[0].x = (this->fields).offset.x;
      aVStack_14[0].y = (this->fields).offset.y;
      fVar15 = (float)auStack_11._8_4_ + (float)auStack_11._8_4_;
      fVar16 = (float)auStack_11._4_4_ + (float)auStack_11._4_4_;
      fVar17 = (float)auStack_11._0_4_ * ((float)auStack_11._0_4_ + (float)auStack_11._0_4_);
      fVar18 = fStack_19 * ((float)auStack_11._0_4_ + (float)auStack_11._0_4_);
      fVar20 = (this->fields).offset.z;
      uVar21._0_4_ = (_UNK_? -
                     ((float)auStack_11._8_4_ * fVar15 + (float)auStack_11._4_4_ * fVar16)) *
                     aVStack_14[0].x +
                     ((float)auStack_11._0_4_ * fVar16 - fStack_19 * fVar15) * aVStack_14[0].y +
                     (fStack_19 * fVar16 + (float)auStack_11._0_4_ * fVar15) * fVar20 + fVar8;
      fVar22 = ((float)auStack_11._0_4_ * fVar15 - fStack_19 * fVar16) * aVStack_14[0].x +
               (fVar18 + (float)auStack_11._4_4_ * fVar15) * aVStack_14[0].y +
               (_UNK_? - ((float)auStack_11._4_4_ * fVar16 + fVar17)) * fVar20 + fVar7;
      if (pTVar2 != (Transform *)0x0) {
        uVar21._4_4_ = (_UNK_? - ((float)auStack_11._8_4_ * fVar15 + fVar17)) *
                       aVStack_14[0].y +
                       (fStack_19 * fVar15 + (float)auStack_11._0_4_ * fVar16) * aVStack_14[0].x +
                       ((float)auStack_11._4_4_ * fVar15 - fVar18) * fVar20 + fVar9;
        VStack_3._0_8_ = uVar21;
        VStack_3.z = fVar22;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
        (*pcRam_?)();
        pSVar23 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if ((pSVar23 != (SpawnRoleDataMediator *)0x0) &&
           (pSVar24 = (pSVar23->fields).SpawnRoleModeTypeWrapper,
           pSVar24 != (SpawnRoleModeTypeWrapper *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pSVar25 = (pSVar24->fields).spawnRoleType;
          if ((pSVar25 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
             (pSVar26 = (pSVar25->fields).subscribableVariable,
             pSVar26 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
            if (((pSVar26->fields)._.value & 4) == 0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar10 == (Transform *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              VStack_3.x = 0.0;
              VStack_3.y = 0.0;
              VStack_3.z = 0.0;
              pvVar4 = (pTVar10->fields)._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar4,&VStack_3);
              stack0xffffffffffffff20 = CONCAT44(fStack_19,fVar7);
              auStack_11._4_4_ = fVar9;
              auStack_11._0_4_ = fVar8;
              aVStack_14[0].x = VStack_3.x;
              aVStack_14[0].y = VStack_3.y;
              aVStack_14[0].z = VStack_3.z;
              pVVar27 = LobbyStateCamera_PositionAfterCollision
                                  (&VStack_3,this,aVStack_14,(Vector3 *)auStack_11,
                                   (MethodInfo *)0x0);
              if (pTVar2 == (Transform *)0x0) {
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              aVStack_14[0].x = pVVar27->x;
              aVStack_14[0].y = pVVar27->y;
              aVStack_14[0].z = pVVar27->z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar4,aVStack_14);
            }
            MVCameraBase::MVCameraBase_UpdateCamera
                      ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
            pAVar28 = (this->fields).avatarCameraDistTransparency;
            if (pAVar28 == (AvatarCameraDistTransparency *)0x0) goto code_?;
            pMVar1 = (this->fields).avatarLocal;
            uStack_29 = uVar6;
            pSVar23 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                ((MethodInfo *)0x0);
            if ((pSVar23 != (SpawnRoleDataMediator *)0x0) &&
               (pSVar24 = (pSVar23->fields).SpawnRoleModeTypeWrapper,
               pSVar24 != (SpawnRoleModeTypeWrapper *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pSVar25 = (pSVar24->fields).spawnRoleType;
              if ((pSVar25 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
                 (pSVar26 = (pSVar25->fields).subscribableVariable,
                 pSVar26 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
                if (((pSVar26->fields)._.value & 4) != 0) {
                  return;
                }
                if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                    (pMVar30 = (pMVar1->fields)._.body, pMVar30 != (MVBody *)0x0)) &&
                   (pTVar2 = (pMVar30->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_12 = 0;
                  fStack_13 = 0.0;
                  if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pcVar5 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    pcVar5 = (code *)FUN_?(&UNK_?);
                    if (pcVar5 == (code *)0x0) {
                      uVar6 = func_?(&UNK_?);
                      FUN_?(uVar6,0);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                  }
                  pcRam_? = pcVar5;
                  (*pcRam_?)();
                  uVar31 = (pAVar28->fields).camMoveTowardsOffset.x;
                  uVar32 = (pAVar28->fields).camMoveTowardsOffset.y;
                  fVar8 = (float)uStack_12 + (float)uVar31;
                  fVar9 = fStack_13 + (pAVar28->fields).camMoveTowardsOffset.z;
                  fVar7 = uStack_12._4_4_ + (float)uVar32;
                  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if (this_01 != (MainCameraManager *)0x0) {
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                    if (pTVar2 != (Transform *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_12 = 0;
                      fStack_13 = 0.0;
                      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
                      if (pvVar4 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar2,(MethodInfo *)0x0);
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      pcVar5 = pcRam_?;
                      if (pcRam_? == (code *)0x0) {
                        pcVar5 = (code *)FUN_?(&UNK_?);
                        if (pcVar5 == (code *)0x0) {
                          uVar6 = func_?(&UNK_?);
                          FUN_?(uVar6,0);
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                      }
                      pcRam_? = pcVar5;
                      (*pcRam_?)(pvVar4,&uStack_12);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__System__Math);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      fVar8 = fVar8 - (float)uStack_12;
                      fVar7 = fVar7 - uStack_12._4_4_;
                      fVar9 = fVar9 - fStack_13;
                      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      dVar33 = (double)(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
                      if (dVar33 < 0.0) {
                        dVar33 = (double)FUN_?();
                      }
                      else {
                        auVar34._8_8_ = 0;
                        auVar34._0_8_ = dVar33;
                        auVar34 = sqrtpd(ZEXT816(0),auVar34);
                        dVar33 = auVar34._0_8_;
                      }
                      fVar7 = (float)dVar33;
                      if (_UNK_? <
                          (float)((uint)(fVar7 - (pAVar28->fields).prevDist) & _UNK_?)) {
                        (pAVar28->fields).prevDist = fVar7;
                        fVar7 = (fVar7 - (pAVar28->fields).fadeEndDistance) /
                                 ((pAVar28->fields).fadeStartDistance -
                                 (pAVar28->fields).fadeEndDistance);
                        if (fVar7 < 0.0) {
                          fVar7 = 0.0;
                        }
                        else if (_UNK_? < fVar7) {
                          fVar7 = _UNK_?;
                        }
                        if ((pMVar1->fields)._.isHidden == 0) {
                          pAVar35 = (pMVar1->fields)._.avatar;
                          if ((pAVar35 == (Avatar *)0x0) ||
                             (this_00 = (pAVar35->fields).avatarFader, this_00 == (AvatarFader *)0x0
                             )) goto code_?;
                          AvatarFader::AvatarFader_SetTransparency(this_00,fVar7,(MethodInfo *)0x0)
                          ;
                        }
                      }
                      return;
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
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* LobbyStateCamera() */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera__ctor
               (LobbyStateCamera *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).avatarHeadOffset.x = (float)(int)(uVar2 << 0x20);
  (this->fields).avatarHeadOffset.y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (this->fields).avatarHeadOffset.z = 0.0;
  (this->fields).height = 1.0;
  (this->fields)._.cameraRadius = 0.3;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar4 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar5 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar6 = ppMVar4;
  if (lVar5 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar5 = lRam_?;
  }
  else {
    do {
      uVar7 = (uint)ppMVar6;
      LOCK();
      bVar1 = uVar7 != uRam_?;
      uVar8 = uVar7;
      uVar9 = uVar7 + 1;
      if (bVar1) {
        uVar8 = uRam_?;
        uVar9 = uRam_?;
      }
      uRam_? = uVar9;
      UNLOCK();
    } while ((bVar1) && (ppMVar6 = (MethodInfo **)(ulonglong)uVar8, uVar7 = uVar8, uVar8 != 2)
            );
    while (uVar7 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar7 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar5;
  puVar10 = &(pOVar3->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar10 == 1;
  if (bVar1) {
    *(undefined4 *)puVar10 = 1;
  }
  uVar7 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar7 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar11 = &(pOVar3->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar11 == 1;
  if (bVar1) {
    *puVar11 = 1;
  }
  uVar7 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar7 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar7 = GetCurrentThreadId();
    psVar12 = &(pOVar3->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar7 == *psVar12;
    if (bVar1) {
      *psVar12 = (ulonglong)uVar7;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar10 = &(pOVar3->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar10 == 1;
      if (bVar1) {
        *(undefined4 *)puVar10 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar5._0_4_ = (pOVar3->_1).initializationExceptionGCHandle;
      lVar5._4_4_ = (pOVar3->_1).cctor_started;
      if (lVar5 == 0) {
        (pOVar3->_1).initializationExceptionGCHandle = 0;
        (pOVar3->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar5 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar13._0_4_ = (pOVar3->_1).initializationExceptionGCHandle;
    lVar13._4_4_ = (pOVar3->_1).cctor_started;
    if (lVar13 == 0) {
      return;
    }
  }
  else {
    uVar7 = GetCurrentThreadId();
    LOCK();
    (pOVar3->_1).cctor_thread = (ulonglong)uVar7;
    UNLOCK();
    LOCK();
    (pOVar3->_1).cctor_finished_or_no_cctor = 1;
    uVar7 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar7 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar3->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar3);
      ppMVar6 = ppMVar4;
      pIVar14 = (Il2CppClass *)pOVar3;
code_?:
      do {
        if (ppMVar6 == (MethodInfo **)0x0) {
          FUN_?(pIVar14);
          if (pIVar14->field_count != 0) {
            ppMVar6 = pIVar14->methods;
            pMVar15 = *ppMVar6;
code_?:
            if (pMVar15 != (MethodInfo *)0x0) {
              if ((*pMVar15->name == '.') && ((pMVar15->flags & 0x800) != 0)) {
                ppMVar16 = ppMVar4;
                while (ppMVar17 = ppMVar16 + 0x30529dd4,
                      ppMVar16 = (MethodInfo **)((longlong)ppMVar16 + 1),
                      *(char *)ppMVar17 == (pMVar15->name + -1)[(longlong)ppMVar16]) {
                  if (ppMVar16 == (MethodInfo **)0x7) {
                    FUN_?(pMVar15,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar6 = ppMVar6 + 1;
          if (ppMVar6 < pIVar14->methods + pIVar14->field_count) {
            pMVar15 = *ppMVar6;
            goto code_?;
          }
        }
        pIVar14 = pIVar14->parent;
        ppMVar6 = ppMVar4;
      } while (pIVar14 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar3->_1).cctor_thread = 0;
    uVar2 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar3->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar3->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar5 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar2;
      lVar13 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar5 != 0) {
        *(longlong *)(lVar13 + 0x28U) = lVar5;
        if (iRam_? != 0) {
          uVar7 = (uint)(lVar13 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar2 = *puVar23;
            if (uVar24 == uVar2) {
              *puVar23 = uVar24 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar2);
        }
      }
      FUN_?(pOVar3,lVar13);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar2 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar3->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar3->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

