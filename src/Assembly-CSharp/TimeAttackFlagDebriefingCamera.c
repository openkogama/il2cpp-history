
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera_Enter
               (TimeAttackFlagDebriefingCamera *this,MVCameraController *camController,
               MethodInfo *method)

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
  this_02 = (HashSet_1_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_02 != (HashSet_1_System_Int32_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__AddIfNotPresent
              (this_02,(pMVar1->fields)._._._._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
               [0x15].method);
    bVar2 = iRam_? != 0;
    (this->fields).ignoreAvatarId = this_02;
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
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar7 != (MainCameraManager *)0x0) {
      pMVar8 = (pMVar7->fields).cameraController;
      this_00 = (pMVar7->fields).transitionCamera;
      if ((((pMVar8 != (MVCameraController *)0x0) &&
           (this_01 = (pMVar8->fields).cameraStack, this_01 != (MVCameraController_CameraStack *)0x0
           )) && (this_03 = MVCameraController+CameraStack::
                            MVCameraController_CameraStack_get_CurCamera(this_01,(MethodInfo *)0x0),
                 this_03 != (MVCameraBase *)0x0)) &&
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_03,(MethodInfo *)0x0),
         this_00 != (TransitionCamera *)0x0)) {
        TransitionCamera::TransitionCamera_InitTransition
                  (this_00,pTVar9,_UNK_?,0,(MethodInfo *)0x0);
        pTVar9 = TimeAttackFlagDebriefingCamera_GetClosestTimeAttackFlag(this,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (this->fields).flagTransform = pTVar9;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).flagTransform >> 0xc);
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
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera_Exit
               (TimeAttackFlagDebriefingCamera *this,MVCameraController *camController,
               MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    pMVar2 = (pMVar1->fields).cameraController;
    this_00 = (pMVar1->fields).transitionCamera;
    if ((pMVar2 != (MVCameraController *)0x0) &&
       (this_01 = (pMVar2->fields).cameraStack, this_01 != (MVCameraController_CameraStack *)0x0)) {
      this_02 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (MVCameraBase *)0x0) {
        targetCameraTransform =
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_02,(MethodInfo *)0x0);
        if (this_00 != (TransitionCamera *)0x0) {
          TransitionCamera::TransitionCamera_InitTransition
                    (this_00,targetCameraTransform,_UNK_?,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Transform GetClosestTimeAttackFlag() */

Transform *
Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
TimeAttackFlagDebriefingCamera_GetClosestTimeAttackFlag
          (TimeAttackFlagDebriefingCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pLVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (this_00,WorldObjectType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
    fVar2 = _UNK_?;
    if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
      if ((pLVar1->fields)._size == 0) {
        uVar3 = func_?(&TypeInfo__System__Exception);
        this_01 = (Exception *)func_?(uVar3);
        message = (String *)func_?(&StringLiteral_Entered_TimeAttackFlagDebriefing);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
        uVar3 = func_?(&
                                     MethodInfo__TimeAttackFlagDebriefingCamera__GetClosestTimeAttackFlag__
                                    );
        FUN_?(this_01,uVar3);
        pcVar4 = (code *)swi(3);
        pTVar5 = (Transform *)(*pcVar4)();
        return pTVar5;
      }
      pMVar6 = (this->fields).avatarLocal;
      pTVar5 = (Transform *)0x0;
      if (pMVar6 != (MVAvatarLocal *)0x0) {
        puVar7 = (undefined8 *)
                 (*(pMVar6->klass->vtable).get_Position.methodPtr)
                           (auStack_8,pMVar6,(pMVar6->klass->vtable).get_Position.method);
        lVar9 = 0x20;
        fVar10 = *(float *)(puVar7 + 1);
        fStack_11 = (float)((ulonglong)*puVar7 >> 0x20);
        fStack_12 = (float)*puVar7;
        pTVar13 = pTVar5;
        while( true ) {
          uVar14 = (uint)pTVar5;
          if ((pLVar1->fields)._size <= (int)uVar14) {
            return pTVar13;
          }
          if ((uint)(pLVar1->fields)._size <= uVar14) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            pTVar5 = (Transform *)(*pcVar4)();
            return pTVar5;
          }
          pMVar15 = (pLVar1->fields)._items;
          if (pMVar15 == (MVWorldObjectClient__Array *)0x0) break;
          if ((uint)pMVar15->max_length <= uVar14) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            pTVar5 = (Transform *)(*pcVar4)();
            return pTVar5;
          }
          plVar16 = *(longlong **)((longlong)pMVar15->vector + lVar9 + -0x20);
          if (plVar16 == (longlong *)0x0) break;
          puVar7 = (undefined8 *)
                   (**(code **)(*plVar16 + 0x178))
                             (auStack_8,plVar16,*(undefined8 *)(*plVar16 + 0x180));
          fVar17 = fStack_12 - (float)*puVar7;
          fVar18 = fStack_11 - (float)((ulonglong)*puVar7 >> 0x20);
          fVar17 = fVar18 * fVar18 + fVar17 * fVar17 +
                   (fVar10 - *(float *)(puVar7 + 1)) * (fVar10 - *(float *)(puVar7 + 1));
          if (fVar17 < fVar2) {
            lVar19 = FUN_?(pLVar1,pTVar5);
            if (lVar19 == 0) break;
            pTVar13 = *(Transform **)(lVar19 + 0xd8);
            fVar2 = fVar17;
          }
          pTVar5 = (Transform *)(ulonglong)(uVar14 + 1);
          lVar9 = lVar9 + 8;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pTVar5 = (Transform *)(*pcVar4)();
  return pTVar5;
}


/* Vector3 GetLookAtPosition() */

Vector3 * Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
          TimeAttackFlagDebriefingCamera_GetLookAtPosition
                    (Vector3 *__return_storage_ptr__,TimeAttackFlagDebriefingCamera *this,
                    MethodInfo *method)

{
  obj = (this->fields).flagTransform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
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
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  fVar7 = (this->fields).height;
  __return_storage_ptr__->x = (float)uStack_3 + 0.0;
  __return_storage_ptr__->y = uStack_3._4_4_ + fVar7;
  __return_storage_ptr__->z = fStack_4 + 0.0;
  return __return_storage_ptr__;
}


/* Vector3 PositionAfterCollision(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
          TimeAttackFlagDebriefingCamera_PositionAfterCollision
                    (Vector3 *__return_storage_ptr__,TimeAttackFlagDebriefingCamera *this,
                    Vector3 *desiredPosition,Vector3 *moveToPosition,MethodInfo *method)

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


/* Void Reset() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera_Reset
               (TimeAttackFlagDebriefingCamera *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fStack_3 = (pQVar1->identityQuaternion).x;
  fStack_4 = (pQVar1->identityQuaternion).y;
  fStack_5 = (pQVar1->identityQuaternion).z;
  fStack_6 = (pQVar1->identityQuaternion).w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (obj->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar7,&fStack_3);
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
     TimeAttackFlagDebriefingCamera_UpdateCamera
               (TimeAttackFlagDebriefingCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  pTVar1 = (this->fields).flagTransform;
  if (pTVar1 != (Transform *)0x0) {
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
    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3);
    fVar6 = VStack_2.z + 0.0;
    fVar7 = VStack_2.x + 0.0;
    fVar8 = VStack_2.y + (this->fields).height;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_10._0_4_ = 0.0;
      auStack_10._4_4_ = 0.0;
      stack0xffffffffffffff20 = 0;
      pvVar3 = (pTVar9->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar3);
      aVStack_11[0].x = (this->fields).offset.x;
      aVStack_11[0].y = (this->fields).offset.y;
      fVar12 = (float)auStack_10._8_4_ + (float)auStack_10._8_4_;
      fVar13 = (float)auStack_10._4_4_ + (float)auStack_10._4_4_;
      fVar14 = (float)auStack_10._0_4_ * ((float)auStack_10._0_4_ + (float)auStack_10._0_4_);
      fVar15 = fStack_16 * ((float)auStack_10._0_4_ + (float)auStack_10._0_4_);
      fVar17 = (this->fields).offset.z;
      fVar18 = ((float)auStack_10._0_4_ * fVar12 - fStack_16 * fVar13) * aVStack_11[0].x +
               (fVar15 + (float)auStack_10._4_4_ * fVar12) * aVStack_11[0].y +
               (_UNK_? - ((float)auStack_10._4_4_ * fVar13 + fVar14)) * fVar17 + fVar6;
      if (pTVar1 != (Transform *)0x0) {
        VStack_2.y = (_UNK_? - ((float)auStack_10._8_4_ * fVar12 + fVar14)) *
                      aVStack_11[0].y +
                      (fStack_16 * fVar12 + (float)auStack_10._0_4_ * fVar13) * aVStack_11[0].x +
                      ((float)auStack_10._4_4_ * fVar12 - fVar15) * fVar17 + fVar8;
        VStack_2.x = (_UNK_? -
                      ((float)auStack_10._8_4_ * fVar12 + (float)auStack_10._4_4_ * fVar13)) *
                      aVStack_11[0].x +
                      ((float)auStack_10._0_4_ * fVar13 - fStack_16 * fVar12) * aVStack_11[0].y +
                      (fStack_16 * fVar13 + (float)auStack_10._0_4_ * fVar12) * fVar17 + fVar7;
        VStack_2.z = fVar18;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar3);
        pMVar19 = (this->fields).avatarLocal;
        if (((pMVar19 != (MVAvatarLocal *)0x0) &&
            (pMVar20 = (pMVar19->fields)._.SpawnRoleModeTypes, pMVar20 != (MVRuntimeDataVariable *)0x0)
            ) && (pOVar21 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                     ((pMVar20->fields).value,(MethodInfo *)0x0),
                 pOVar21 != (Object *)0x0)) {
          if ((pOVar21->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar21,lRam_?);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((ulonglong)pOVar21[1].klass & 4) == 0) {
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (pTVar9 == (Transform *)0x0) goto code_?;
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
            pvVar3 = (pTVar9->fields)._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
            stack0xffffffffffffff20 = CONCAT44(fStack_16,fVar6);
            auStack_10._4_4_ = fVar8;
            auStack_10._0_4_ = fVar7;
            aVStack_11[0].x = VStack_2.x;
            aVStack_11[0].y = VStack_2.y;
            aVStack_11[0].z = VStack_2.z;
            pVVar22 = TimeAttackFlagDebriefingCamera_PositionAfterCollision
                                (&VStack_2,this,aVStack_11,(Vector3 *)auStack_10,(MethodInfo *)0x0)
            ;
            if (pTVar1 == (Transform *)0x0) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            aVStack_11[0].x = pVVar22->x;
            aVStack_11[0].y = pVVar22->y;
            aVStack_11[0].z = pVVar22->z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar3,aVStack_11);
          }
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar4 = (code *)FUN_?(&UNK_?);
              if (pcVar4 == (code *)0x0) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pcRam_? = pcVar4;
            (*pcRam_?)(pvVar3,&stack0xffffffffffffffd8);
            if (targetTransform != (ProtectedTransform *)0x0) {
              ProtectedTransform::ProtectedTransform_set_position
                        (targetTransform,(Vector3 *)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
                if (pvVar3 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcVar4 = pcRam_?;
                if (pcRam_? == (code *)0x0) {
                  pcVar4 = (code *)FUN_?(&UNK_?);
                  if (pcVar4 == (code *)0x0) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                pcRam_? = pcVar4;
                (*pcRam_?)(pvVar3,&stack0xffffffffffffffe8);
                ProtectedTransform::ProtectedTransform_set_rotation
                          (targetTransform,(Quaternion *)&stack0xffffffffffffffe8,(MethodInfo *)0x0)
                ;
                return;
              }
            }
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* TimeAttackFlagDebriefingCamera() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera__ctor
               (TimeAttackFlagDebriefingCamera *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).height = 1.0;
  (this->fields)._.cameraRadius = 0.3;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
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
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
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
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

