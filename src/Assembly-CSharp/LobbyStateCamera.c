
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_Enter
               (LobbyStateCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  this_00 = (this->fields).avatarLocal;
  if (this_00 != (MVAvatarLocal *)0x0) {
    item = (UnityWebRequest *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (this_02 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,item,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      this_01 = (this->fields).avatarCameraDistTransparency;
      (this->fields).ignoreAvatarId = (HashSet_1_System_Int32_ *)this_02;
      if (this_01 != (AvatarCameraDistTransparency *)0x0) {
        AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                  (this_01,(this->fields).avatarLocal,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_03 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_StartTransitionCam(this_03,0.5,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_Exit
               (LobbyStateCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_StartTransitionCam(this_00,0.5,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Vector3 GetLookAtPosition() */

Vector3 * Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_GetLookAtPosition
                    (Vector3 *__return_storage_ptr__,LobbyStateCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (PrefabPool *)(this->fields).avatarLocal;
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVPointLightObject *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffdc,(Transform *)this_01,(MethodInfo *)0x0);
      uStack_2._0_4_ = pVVar1->x;
      uStack_2._4_4_ = pVVar1->y;
      fVar3 = pVVar1->z;
      fStack_4 = 0.0;
      uStack_5 = 0;
      func_?(&uStack_5,0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar3;
      a.x = (float)(undefined4)uStack_2;
      a.y = (float)uStack_2._4_4_;
      b.z = fStack_4;
      b.x = (float)(undefined4)uStack_5;
      b.y = (float)uStack_5._4_4_;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffdc,a,b,(MethodInfo *)0x0);
      fVar6 = pVVar1->y;
      fVar3 = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = fVar6;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar7)();
  return pVVar1;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_Initialize
               (LobbyStateCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  camMoveTowardsOffset = (this->fields).avatarHeadOffset;
  (this->fields).avatarLocal = avatarLocal;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,4.0,1.0,(MethodInfo *)0x0);
  (this->fields).avatarCameraDistTransparency = this_00;
  return;
}


/* Vector3 PositionAfterCollision(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_PositionAfterCollision
                    (Vector3 *__return_storage_ptr__,LobbyStateCamera *this,Vector3 desiredPosition,
                    Vector3 moveToPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  func_?(&stack0xffffffb0,0,0x48);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar2 = desiredPosition.z;
  VVar3.y = desiredPosition.y;
  VVar3.x = desiredPosition.x;
  VVar3.z = desiredPosition.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&VStack_5,VVar3,moveToPosition,(MethodInfo *)0x0);
  uStack_6._0_4_ = pVVar4->x;
  uStack_6._4_4_ = pVVar4->y;
  VStack_5.x = pVVar4->z;
  func_?(&uStack_6,0);
  func_?(&uStack_6,0);
  func_?(&stack0xffffffb8,moveToPosition.x,moveToPosition.y,moveToPosition.z,uStack_6,
                  VStack_5.x,0);
  iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  this_00 = this;
  ray.m_Origin.y = fStack_8;
  ray.m_Origin.x = fStack_9;
  ray.m_Origin.z = (float)puStack_10;
  ray.m_Direction.x = in_stack_11;
  ray.m_Direction.y = (float)in_stack_12;
  ray.m_Direction.z = fStack_13;
  bVar14 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,(this->fields)._.cameraRadius,(VoxelHit *)&fStack_15,uStack_6._4_4_,
                     (this->fields).ignoreAvatarId,1 << ((byte)iVar7 & 0x1f),(MethodInfo *)0x0);
  fVar16 = in_stack_17;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar18 = desiredPosition.y;
  if ((TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fVar16) && (bVar14 != 0)) {
    fStack_15 = 0.0;
    puStack_19 = (undefined *)0x0;
    fStack_8 = desiredPosition.x;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffb8,this_01,(MethodInfo *)0x0);
      VVar3 = *pVVar4;
      fStack_8 = fVar1;
      puStack_10 = in_stack_20;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b.y = (float)puStack_10;
      b.x = fStack_8;
      b.z = in_stack_21;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&fStack_8,VVar3,b,(MethodInfo *)0x0);
      point.y = (float)in_stack_22;
      point.x = (float)in_stack_23;
      point.z = fVar18;
      bVar14 = MathFunctions::MathFunctions_DistancePointLine_1
                        (point,moveToPosition,*pVVar4,&fStack_15,(Vector3 *)&this,(MethodInfo *)0x0)
      ;
      if (bVar14 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
        message = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
      }
      desiredPosition.x = (float)this;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar4 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&stack0x00000044,
                          (InputToPlayerMovementAndroid *)&stack0x00000054,(MethodInfo *)0x0);
      uStack24 = pVVar4->x;
      uStack25 = pVVar4->y;
      fVar1 = pVVar4->z;
      auVar26._0_8_ = (double)((float)__return_storage_ptr__ * (float)__return_storage_ptr__ -
                             in_stack_27 * in_stack_27);
      auVar26._8_8_ = 0;
      func_?();
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar1;
      a.x = (float)uStack24;
      a.y = (float)uStack25;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0x00000050,a,(float)auVar26._0_8_,(MethodInfo *)0x0);
      uVar28 = pVVar4->y;
      this = (LobbyStateCamera *)pVVar4->z;
      desiredPosition.x = 0.0;
      a_00.y = in_stack_27;
      a_00.x = in_stack_17;
      a_00.z = in_stack_29;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)&stack0x00000068,a_00,*pVVar4,(MethodInfo *)0x0);
      fVar1 = pVVar4->z;
      *(undefined8 *)uVar28 = *(undefined8 *)pVVar4;
      *(float *)(uVar28 + 8) = fVar1;
      return (Vector3 *)uVar28;
    }
    func_?();
    pcVar30 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar30)();
    return pVVar4;
  }
  __return_storage_ptr__->x = desiredPosition.x;
  __return_storage_ptr__->y = desiredPosition.y;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void Reset() */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_Reset
               (LobbyStateCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,*pQVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRotation(Quaternion) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_SetRotation
               (LobbyStateCamera *this,Quaternion rotation,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,rotation,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera_UpdateCamera
               (LobbyStateCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (PrefabPool *)(this->fields).avatarLocal;
  if (this_00 != (PrefabPool *)0x0) {
    this_03 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
    if (this_03 != (MVPointLightObject *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_2,(Transform *)this_03,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar1->x;
      uStack_3._4_4_ = pVVar1->y;
      fVar4 = pVVar1->z;
      auStack_5._4_4_ = 0.0;
      fStack_6 = 0.0;
      uStack_7 = 0;
      uStack_8 = 0;
      auStack_5._0_4_ = 0.0;
      func_?(&uStack_7,0,(this->fields).height);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fVar4;
      a.x = (float)(undefined4)uStack_3;
      a.y = (float)uStack_3._4_4_;
      b.y = (float)uStack_8;
      b.x = (float)uStack_7;
      b.z = fStack_6;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)(auStack_5 + 4),a,b,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar1->x;
      uStack_3._4_4_ = pVVar1->y;
      fVar4 = pVVar1->z;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar10 != (Transform *)0x0) {
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)auStack_5,pTVar10,(MethodInfo *)0x0);
        uVar12._0_4_ = (this->fields).offset.x;
        uVar12._4_4_ = (this->fields).offset.y;
        fVar13 = (this->fields).offset.z;
        auStack_5._0_4_ = pQVar11->x;
        auStack_5._4_4_ = pQVar11->y;
        fStack_14 = pQVar11->z;
        fStack_15 = pQVar11->w;
        uStack_8 = (undefined4)uVar12;
        fStack_6 = (float)uVar12._4_4_;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
          uVar12 = CONCAT44(fStack_6,uStack_8);
        }
        rotation.y = (float)auStack_5._4_4_;
        rotation.x = (float)auStack_5._0_4_;
        rotation.z = fStack_14;
        rotation.w = fStack_15;
        point.z = fVar13;
        point.x = (float)(int)uVar12;
        point.y = (float)(int)((ulonglong)uVar12 >> 0x20);
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                           ((Vector3 *)(auStack_5 + 4),rotation,point,(MethodInfo *)0x0);
        uVar16._0_4_ = pVVar1->x;
        uVar16._4_4_ = pVVar1->y;
        fVar13 = pVVar1->z;
        uStack_8 = (undefined4)uVar16;
        fStack_6 = (float)uVar16._4_4_;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
          uVar16 = CONCAT44(fStack_6,uStack_8);
        }
        a_00.z = fVar4;
        a_00.x = (float)(undefined4)uStack_3;
        a_00.y = (float)uStack_3._4_4_;
        b_00.z = fVar13;
        b_00.x = (float)(int)uVar16;
        b_00.y = (float)(int)((ulonglong)uVar16 >> 0x20);
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)(auStack_5 + 4),a_00,b_00,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar9,*pVVar1,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pSVar17 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if ((pSVar17 != (SpawnRoleDataMediator *)0x0) &&
             (this_01 = (pSVar17->fields).SpawnRoleModeTypeWrapper,
             this_01 != (SpawnRoleModeTypeWrapper *)0x0)) {
            bVar18 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                              (this_01,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
            if (bVar18 == 0) {
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
              if (pTVar10 == (Transform *)0x0) goto code_?;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)(auStack_5 + 4),pTVar10,(MethodInfo *)0x0);
              moveToPosition.z = fVar4;
              moveToPosition.x = (float)(undefined4)uStack_3;
              moveToPosition.y = (float)uStack_3._4_4_;
              pVVar1 = LobbyStateCamera_PositionAfterCollision
                                 ((Vector3 *)(auStack_5 + 4),this,*pVVar1,moveToPosition,
                                  (MethodInfo *)0x0);
              if (pTVar9 == (Transform *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar9,*pVVar1,(MethodInfo *)0x0);
            }
            MVCameraBase::MVCameraBase_UpdateCamera
                      ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
            this_02 = (this->fields).avatarCameraDistTransparency;
            if (this_02 != (AvatarCameraDistTransparency *)0x0) {
              AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                        (this_02,(this->fields).avatarLocal,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* LobbyStateCamera() */

void Assembly-CSharp.dll::LobbyStateCamera::LobbyStateCamera__ctor
               (LobbyStateCamera *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).height = 1.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x3fc00000,0,0);
  (this->fields).avatarHeadOffset.x = (float)(undefined4)uStack_2;
  (this->fields).avatarHeadOffset.y = (float)uStack_2._4_4_;
  (this->fields).avatarHeadOffset.z = fStack_1;
  MVCameraBase::MVCameraBase__ctor((MVCameraBase *)this,(MethodInfo *)0x0);
  return;
}

