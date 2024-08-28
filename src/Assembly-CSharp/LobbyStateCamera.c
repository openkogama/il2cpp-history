
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
    ppHVar2 = &(this->fields).ignoreAvatarId;
    *ppHVar2 = this_01;
    func_?(ppHVar2,this_01);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  ppMVar1 = &(this->fields).avatarLocal;
  *ppMVar1 = avatarLocal;
  func_?(ppMVar1,avatarLocal);
  camMoveTowardsOffset = (this->fields).avatarHeadOffset;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,4.0,1.0,(MethodInfo *)0x0);
  ppAVar2 = &(this->fields).avatarCameraDistTransparency;
  *ppAVar2 = this_00;
  func_?(ppAVar2,this_00);
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
  puStack_2 = (undefined *)(desiredPosition.z - moveToPosition.z);
  fVar3 = desiredPosition.x - moveToPosition.x;
  fVar4 = desiredPosition.y - moveToPosition.y;
  uStack_5 = CONCAT44(uStack_5._4_4_,puStack_2);
  fVar6 = (float)puStack_2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xffffff68,(MethodInfo *)0x0);
  puStack_2 = (undefined *)fVar3;
  uStack_5 = CONCAT44(fVar4,fVar6);
  puVar7 = (undefined8 *)func_?(&stack0xffffffa8,&uStack_5,0);
  uVar8 = *(undefined4 *)(puVar7 + 1);
  uStack_9 = (undefined4)*puVar7;
  uStack_10 = (undefined4)((ulonglong)*puVar7 >> 0x20);
  iVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  layerMask = 1 << ((byte)iVar11 & 0x1f);
  ignoreWoIds = (this->fields).ignoreAvatarId;
  dVar12 = (double)(in_stack_13 * in_stack_13 + in_stack_14 * in_stack_14 +
                   fVar6 * fVar6);
  if (dVar12 < 0.0) {
    func_?();
  }
  else {
    dVar12 = SQRT(dVar12);
  }
  ray.m_Origin.y = (float)uStack_9;
  ray.m_Origin.x = moveToPosition.z;
  ray.m_Origin.z = (float)uStack_10;
  ray.m_Direction.x = (float)uVar8;
  ray.m_Direction.y = (float)in_stack_15;
  ray.m_Direction.z = fStack_16;
  bVar17 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,(this->fields)._.cameraRadius,(VoxelHit *)&stack0xffffffc0,(float)dVar12,
                     ignoreWoIds,layerMask,method_00);
  if ((TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= moveToPosition.z) && (bVar17 != 0)) {
    uVar18 = 0;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_20,this_00,(MethodInfo *)0x0);
      uVar21 = pVVar19->x;
      uVar22 = pVVar19->y;
      point.y = (float)puStack_23;
      point.x = (float)uStack_24;
      point.z = (float)pTStack_25;
      lineEnd.y = (float)uVar22 + (float)((ulonglong)uVar18 >> 0x20);
      lineEnd.x = (float)uVar21 + (float)uVar18;
      lineEnd.z = pVVar19->z + 0.0;
      bVar17 = MathFunctions::MathFunctions_DistancePointLine_1
                        (point,moveToPosition,lineEnd,&fStack_1,&VStack_26,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
        message = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      }
      fVar6 = (this->fields)._.cameraRadius;
      dVar12 = (double)(fVar6 * fVar6 - fStack_27 * fStack_27);
      if (dVar12 < 0.0) {
        func_?();
      }
      else {
        dVar12 = SQRT(dVar12);
      }
      fVar6 = (float)dVar12;
      __return_storage_ptr__->x = unaff_retaddr - moveToPosition.x * fVar6;
      __return_storage_ptr__->y = (float)__return_storage_ptr__ - moveToPosition.y * fVar6;
      __return_storage_ptr__->z = (float)this - moveToPosition.z * fVar6;
      return __return_storage_ptr__;
    }
    func_?();
    pcVar28 = (code *)swi(3);
    pVVar19 = (Vector3 *)(*pcVar28)();
    return pVVar19;
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
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

