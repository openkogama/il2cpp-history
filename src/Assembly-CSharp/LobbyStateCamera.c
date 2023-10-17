
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_Enter
               (LobbyStateCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar1 = (this->fields).avatarLocal;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__Add
                ((HashSet_1_System_Object_ *)this_01,(Object *)(pMVar1->fields)._._._._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      (this->fields).ignoreAvatarId = (HashSet_1_System_Int32_ *)this_01;
      func_?(&(this->fields).ignoreAvatarId,this_01);
      this_00 = (this->fields).avatarCameraDistTransparency;
      if (this_00 != (AvatarCameraDistTransparency *)0x0) {
        AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                  (this_00,(this->fields).avatarLocal,(MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_02 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_StartTransitionCam(this_02,0.5,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 GetLookAtPosition() */

Vector3 * Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_GetLookAtPosition
                    (Vector3 *__return_storage_ptr__,LobbyStateCamera *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.transform, this_00 != (Transform *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,this_00,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    fVar7 = (this->fields).height;
    __return_storage_ptr__->x = (float)uVar4 + 0.0;
    __return_storage_ptr__->y = (float)uVar5 + fVar7;
    __return_storage_ptr__->z = fVar6 + 0.0;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar8)();
  return pVVar2;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_Initialize
               (LobbyStateCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarCameraDistTransparency);
    cRam_? = '\x01';
  }
  (this->fields).avatarLocal = avatarLocal;
  func_?(&(this->fields).avatarLocal,avatarLocal);
  camMoveTowardsOffset = (this->fields).avatarHeadOffset;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  if (this_00 != (AvatarCameraDistTransparency *)0x0) {
    AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
              (this_00,camMoveTowardsOffset,4.0,1.0,(MethodInfo *)0x0);
    (this->fields).avatarCameraDistTransparency = this_00;
    func_?(&(this->fields).avatarCameraDistTransparency,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Vector3 PositionAfterCollision(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_PositionAfterCollision
                    (Vector3 *__return_storage_ptr__,LobbyStateCamera *this,Vector3 desiredPosition,
                    Vector3 moveToPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Not_within_line_segment);
    cRam_? = '\x01';
  }
  func_?(auStack_1,0,0x48);
  uVar2 = 0;
  fVar3 = desiredPosition.z - moveToPosition.z;
  func_?(&stack0xffffff40,0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xffffff40,(MethodInfo *)0x0);
  origin.y = moveToPosition.y;
  origin.x = (float)uVar2;
  origin.z = moveToPosition.z;
  direction.y = (float)in_stack_4;
  direction.x = fVar3;
  direction.z = in_stack_5;
  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
            ((Ray *)&stack0xffffff88,origin,direction,(MethodInfo *)0x0);
  iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  ray.m_Direction.z = fStack_7;
  ray.m_Direction.y = fStack_8;
  ray.m_Origin.y = in_stack_9;
  ray.m_Origin.x = (float)puStack_10;
  ray.m_Origin.z = (float)in_stack_11;
  ray.m_Direction.x = (float)uStack_12;
  bVar13 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,(this->fields)._.cameraRadius,(VoxelHit *)&stack0xffffffd8,fStack_14,
                     (this->fields).ignoreAvatarId,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= (float)in_stack_15) &&
     (bVar13 != 0)) {
    fVar3 = 0.0;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0x00000000,this_00,(MethodInfo *)0x0);
      uVar17 = pVVar16->x;
      uVar18 = pVVar16->y;
      point.y = fStack_19;
      point.x = (float)puStack_20;
      point.z = desiredPosition.y;
      lineStart.z = moveToPosition.z;
      lineStart.x = VStack_21.x;
      lineStart.y = VStack_21.y;
      lineEnd.y = fVar3 + (float)uVar18;
      lineEnd.x = in_stack_9 + (float)uVar17;
      lineEnd.z = pVVar16->z + 0.0;
      bVar13 = MathFunctions::MathFunctions_DistancePointLine_1
                        (point,lineStart,lineEnd,(float *)&stack0xffffffcc,
                         (Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
        VStack_21.y = in_stack_22;
        message = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
      }
      VStack_21.z = (float)this;
      fStack_19 = (this->fields)._.cameraRadius;
      fStack_19 = fStack_19 * fStack_19;
      VStack_21._0_8_ = CONCAT44(__return_storage_ptr__,unaff_retaddr);
      pRVar23 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                         ((Regex_CachedCodeEntryKey *)&stack0x0000003c,
                          (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&method,(MethodInfo *)0x0);
      uVar24._0_4_ = pRVar23->_options;
      uVar24._4_4_ = pRVar23->_cultureKey;
      pSVar25 = pRVar23->_pattern;
      dVar26 = (double)(VStack_21.z - moveToPosition.x);
      if (dVar26 < 0.0) {
        func_?();
      }
      else {
        dVar26 = SQRT(dVar26);
      }
      fVar3 = (float)dVar26;
      pSVar25->klass = (String__Class *)(fStack_27 - (float)uVar24 * fVar3);
      pSVar25->monitor = (MonitorData *)(fStack_28 - (float)((ulonglong)uVar24 >> 0x20) * fVar3);
      (pSVar25->fields)._stringLength = (int32_t)(fStack_29 - (float)pSVar25 * fVar3);
      return (Vector3 *)pSVar25;
    }
    func_?();
    pcVar30 = (code *)swi(3);
    pVVar16 = (Vector3 *)(*pcVar30)();
    return pVVar16;
  }
  __return_storage_ptr__->x = (float)(int)desiredPosition._0_8_;
  __return_storage_ptr__->y = (float)(int)((ulonglong)desiredPosition._0_8_ >> 0x20);
  __return_storage_ptr__->z = desiredPosition.z;
  return __return_storage_ptr__;
}


/* Void SetRotation(Quaternion) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_SetRotation
               (LobbyStateCamera *this,Quaternion rotation,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,rotation,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_UpdateCamera
               (LobbyStateCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  this_02 = this;
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffcc,pTVar2,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    uVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    fVar7 = (float)uVar5 + (this->fields).height;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffd8,pTVar8,(MethodInfo *)0x0);
      fVar10 = pQVar9->y;
      fVar11 = pQVar9->z;
      fVar12 = pQVar9->w;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffdc,*pQVar9,(this->fields).offset,
                          (MethodInfo *)0x0);
      uVar13 = pVVar3->x;
      uVar14 = pVVar3->y;
      if (pTVar2 != (Transform *)0x0) {
        this = (LobbyStateCamera *)(pVVar3->z + fVar6 + 0.0);
        fVar15 = (float)uVar14 + fVar7;
        VVar16.x = (float)uVar13 + (float)uVar4 + 0.0;
        VVar16 = (Vector3)CONCAT84(uVar17,VVar16.x);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar2,VVar16,(MethodInfo *)0x0);
        pSVar18 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if ((pSVar18 != (SpawnRoleDataMediator *)0x0) &&
           (this_00 = (pSVar18->fields).SpawnRoleModeTypeWrapper,
           this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
          bVar19 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                            (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
          if (bVar19 == 0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_02,(MethodInfo *)0x0);
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_02,(MethodInfo *)0x0);
            if (pTVar8 == (Transform *)0x0) goto code_?;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffdc,pTVar8,(MethodInfo *)0x0);
            VVar16.y = fVar11;
            VVar16.x = fVar10;
            VVar16.z = fVar12;
            pVVar3 = LobbyStateCamera_PositionAfterCollision
                               ((Vector3 *)&stack0xffffffcc,this_02,*pVVar3,VVar16,(MethodInfo *)0x0
                               );
            if (pTVar2 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar2,*pVVar3,(MethodInfo *)0x0);
          }
          MVCameraBase::MVCameraBase_UpdateCamera
                    ((MVCameraBase *)this_02,(MVCameraController *)0x0,targetTransform,
                     (MethodInfo *)0x0);
          this_01 = (this_02->fields).avatarCameraDistTransparency;
          if (this_01 != (AvatarCameraDistTransparency *)0x0) {
            AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                      (this_01,(this_02->fields).avatarLocal,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* LobbyStateCamera() */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera__ctor
               (LobbyStateCamera *this,MethodInfo *method)

{
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).avatarHeadOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields).avatarHeadOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).height = 1.0;
  (this->fields).avatarHeadOffset.z = 0.0;
  (this->fields)._.cameraRadius = 0.3;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

