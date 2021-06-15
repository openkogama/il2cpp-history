
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera_Enter
               (TimeAttackFlagCountdownCamera *this,MVCameraController *camController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  this_00 = (this->fields).avatarLocal;
  if (this_00 != (MVAvatarLocal *)0x0) {
    item = (UnityWebRequest *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (this_01 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,item,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      (this->fields).ignoreAvatarId = (HashSet_1_System_Int32_ *)this_01;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_02 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_StartTransitionCam(this_02,0.5,0,(MethodInfo *)0x0);
        ScaleAnimationBase::ScaleAnimationBase_Play
                  ((ScaleAnimationBase *)this,0.5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera_Exit
               (TimeAttackFlagCountdownCamera *this,MVCameraController *camController,
               MethodInfo *method)

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


/* Vector3 PositionAfterCollision(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::TimeAttackFlagCountdownCamera::
          TimeAttackFlagCountdownCamera_PositionAfterCollision
                    (Vector3 *__return_storage_ptr__,TimeAttackFlagCountdownCamera *this,
                    Vector3 desiredPosition,Vector3 moveToPosition,MethodInfo *method)

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
      this = (TimeAttackFlagCountdownCamera *)pVVar4->z;
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

void Assembly-CSharp.dll::TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera_Reset
               (TimeAttackFlagCountdownCamera *this,MethodInfo *method)

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


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera_UpdateCamera
               (TimeAttackFlagCountdownCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVCameraBase::MVCameraBase_UpdateCamera
            ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
  pMVar1 = (this->fields).avatarLocal;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    puVar2 = (undefined8 *)(*(code *)(pMVar1->klass->vtable).get_Position.method)(auStack_3,pMVar1)
    ;
    uStack_4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar7 != (Transform *)0x0) {
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd8,pTVar7,(MethodInfo *)0x0);
      uStack_9._0_4_ = (this->fields).offset.x;
      uStack_9._4_4_ = (this->fields).offset.y;
      fVar10 = pQVar8->x;
      VStack_11.x = pQVar8->y;
      VStack_11.y = pQVar8->z;
      VStack_11.z = pQVar8->w;
      fVar12 = (this->fields).offset.z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      rotation.y = VStack_11.x;
      rotation.x = fVar10;
      rotation.z = VStack_11.y;
      rotation.w = VStack_11.z;
      point.z = fVar12;
      point.x = (float)(undefined4)uStack_9;
      point.y = (float)uStack_9._4_4_;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          (&VStack_11,rotation,point,(MethodInfo *)0x0);
      uStack_9._0_4_ = pVVar13->x;
      uStack_9._4_4_ = pVVar13->y;
      fVar12 = pVVar13->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fVar5;
      a.x = (float)(undefined4)uStack_4;
      a.y = (float)uStack_4._4_4_;
      b.z = fVar12;
      b.x = (float)(undefined4)uStack_9;
      b.y = (float)uStack_9._4_4_;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_11,a,b,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar6,*pVVar13,(MethodInfo *)0x0);
        pMVar1 = (this->fields).avatarLocal;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          bVar14 = MVAvatar::MVAvatar_IsInMode
                            ((MVAvatar *)pMVar1,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
          if (bVar14 != 0) {
            return;
          }
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_11,pTVar7,(MethodInfo *)0x0);
            moveToPosition.z = fVar5;
            moveToPosition.x = (float)(undefined4)uStack_4;
            moveToPosition.y = (float)uStack_4._4_4_;
            pVVar13 = TimeAttackFlagCountdownCamera_PositionAfterCollision
                                (&VStack_11,this,*pVVar13,moveToPosition,(MethodInfo *)0x0);
            if (pTVar6 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar6,*pVVar13,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* TimeAttackFlagCountdownCamera() */

void Assembly-CSharp.dll::TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera__ctor
               (TimeAttackFlagCountdownCamera *this,MethodInfo *method)

{
  (this->fields)._.cameraRadius = 0.3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

