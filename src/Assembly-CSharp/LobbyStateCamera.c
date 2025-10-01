
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
  this_01 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_01 != (HashSet_1_System_Int32_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
              (this_01,(pMVar1->fields)._._._._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    (this->fields).ignoreAvatarId = this_01;
    func_?(&(this->fields).ignoreAvatarId,this_01);
    this_00 = (this->fields).avatarCameraDistTransparency;
    if (this_00 != (AvatarCameraDistTransparency *)0x0) {
      AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                (this_00,(this->fields).avatarLocal,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_02 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_StartTransitionCam(this_02,0.5,0,(MethodInfo *)0x0);
        return;
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
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,4.0,1.0,(MethodInfo *)0x0);
  (this->fields).avatarCameraDistTransparency = this_00;
  func_?(&(this->fields).avatarCameraDistTransparency,this_00);
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
  func_?(&fStack_1,0,0x48);
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  fVar5 = desiredPosition.z - moveToPosition.z;
  uStack_6 = CONCAT44(uStack_6._4_4_,fVar5);
  func_?(&stack0xffffff50,0);
  puStack_7 = (undefined *)uVar3;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xffffff50,(MethodInfo *)0x0);
  uStack_6 = CONCAT44(uVar2,fVar5);
  puVar8 = (undefined8 *)func_?(&stack0xffffffa0,&uStack_6,0);
  uVar9 = *puVar8;
  uVar2 = *(undefined4 *)(puVar8 + 1);
  iVar10 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uStack_11 = (undefined4)uVar9;
  uStack_12 = (undefined4)((ulonglong)uVar9 >> 0x20);
  ray.m_Origin.y = (float)uStack_11;
  ray.m_Origin.x = moveToPosition.z;
  ray.m_Origin.z = (float)uStack_12;
  ray.m_Direction.x = (float)uVar2;
  ray.m_Direction.y = (float)uVar4;
  ray.m_Direction.z = moveToPosition.y;
  bVar13 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,(this->fields)._.cameraRadius,(VoxelHit *)&aVStack_14[0].z,fVar5,
                     (this->fields).ignoreAvatarId,1 << ((byte)iVar10 & 0x1f),(MethodInfo *)0x0);
  if ((bVar13 != 0) && (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= moveToPosition.x)) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_16,this_00,(MethodInfo *)0x0);
      uVar17 = pVVar15->x;
      uVar18 = pVVar15->y;
      point.y = (float)in_stack_19;
      point.x = (float)in_stack_20;
      point.z = fStack_21;
      lineStart.y = (float)uStack_22;
      lineStart.x = (float)uStack_23;
      lineStart.z = moveToPosition.z;
      lineEnd.y = fStack_1 + (float)uVar18;
      lineEnd.x = fStack_24 + (float)uVar17;
      lineEnd.z = fStack_25 + pVVar15->z;
      bVar13 = MathFunctions::MathFunctions_DistancePointLine_1
                        (point,lineStart,lineEnd,(float *)&puStack_26,aVStack_14,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
        message = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      }
      fVar5 = (this->fields)._.cameraRadius;
      dVar27 = (double)(fVar5 * fVar5 - fStack_28 * fStack_28);
      if (dVar27 < 0.0) {
        func_?();
      }
      else {
        dVar27 = SQRT(dVar27);
      }
      fVar5 = (float)dVar27;
      __return_storage_ptr__->x = VStack_16.x - fStack_29 * fVar5;
      __return_storage_ptr__->y = VStack_16.y - unaff_EBP * fVar5;
      __return_storage_ptr__->z = VStack_16.z - unaff_retaddr * fVar5;
      return __return_storage_ptr__;
    }
    func_?();
    pcVar30 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar30)();
    return pVVar15;
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
                        ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
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
                          ((Quaternion *)&stack0xffffffcc,pTVar8,(MethodInfo *)0x0);
      pVVar3 = &(this->fields).offset;
      fVar10 = pVVar3->y;
      fVar11 = (this->fields).offset.z;
      fVar12 = 0.0;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffd0,*pQVar9,*pVVar3,(MethodInfo *)0x0);
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
                                ((Vector3 *)&stack0xffffffd0,pTVar8,(MethodInfo *)0x0);
            VVar16.y = fVar11;
            VVar16.x = fVar10;
            VVar16.z = fVar12;
            pVVar3 = LobbyStateCamera_PositionAfterCollision
                                ((Vector3 *)&stack0xffffffd0,this_02,*pVVar3,VVar16,
                                 (MethodInfo *)0x0);
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
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

