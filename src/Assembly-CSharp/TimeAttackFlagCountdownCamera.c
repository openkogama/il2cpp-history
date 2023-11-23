
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera_Enter
               (TimeAttackFlagCountdownCamera *this,MVCameraController *camController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_00 != (HashSet_1_System_Int32_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
              (this_00,(pMVar1->fields)._._._._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    (this->fields).ignoreAvatarId = this_00;
    func_?(&(this->fields).ignoreAvatarId,this_00);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_StartTransitionCam(this_01,0.5,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 PositionAfterCollision(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::TimeAttackFlagCountdownCamera::
          TimeAttackFlagCountdownCamera_PositionAfterCollision
                    (Vector3 *__return_storage_ptr__,TimeAttackFlagCountdownCamera *this,
                    Vector3 desiredPosition,Vector3 moveToPosition,MethodInfo *method)

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
  fVar3 = desiredPosition.z - moveToPosition.z;
  uStack_4 = CONCAT44(uStack_4._4_4_,fVar3);
  func_?(&stack0xffffff50,0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xffffff50,(MethodInfo *)0x0);
  uStack_4 = CONCAT44(in_stack_5,fVar3);
  puVar6 = (undefined8 *)func_?(&stack0xffffffa0,&uStack_4,0);
  uVar7 = *puVar6;
  uVar8 = *(undefined4 *)(puVar6 + 1);
  iVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uStack_10 = (undefined4)uVar7;
  uStack_11 = (undefined4)((ulonglong)uVar7 >> 0x20);
  ray.m_Origin.y = (float)uStack_10;
  ray.m_Origin.x = moveToPosition.z;
  ray.m_Origin.z = (float)uStack_11;
  ray.m_Direction.x = (float)uVar8;
  ray.m_Direction.y = (float)uVar2;
  ray.m_Direction.z = moveToPosition.y;
  bVar12 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,(this->fields)._.cameraRadius,(VoxelHit *)&aVStack_13[0].z,fVar3,
                     (this->fields).ignoreAvatarId,1 << ((byte)iVar9 & 0x1f),(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= moveToPosition.x) && (bVar12 != 0)) {
    uVar7 = 0;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_15,this_00,(MethodInfo *)0x0);
      uVar16 = pVVar14->x;
      uVar17 = pVVar14->y;
      point.z = fStack_18;
      point.x = (float)(int)uVar7;
      point.y = (float)(int)((ulonglong)uVar7 >> 0x20);
      lineStart.y = (float)uStack_19;
      lineStart.x = (float)uStack_20;
      lineStart.z = moveToPosition.z;
      lineEnd.y = fStack_1 + (float)uVar17;
      lineEnd.x = (float)uVar16 + 0.0;
      lineEnd.z = fStack_21 + pVVar14->z;
      bVar12 = MathFunctions::MathFunctions_DistancePointLine_1
                        (point,lineStart,lineEnd,(float *)&puStack_22,aVStack_13,(MethodInfo *)0x0);
      if (bVar12 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
        message = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      }
      fVar3 = (this->fields)._.cameraRadius;
      dVar23 = (double)(fVar3 * fVar3 - fStack_24 * fStack_24);
      if (dVar23 < 0.0) {
        func_?();
      }
      else {
        dVar23 = SQRT(dVar23);
      }
      fVar3 = (float)dVar23;
      __return_storage_ptr__->x = VStack_15.x - fStack_25 * fVar3;
      __return_storage_ptr__->y = VStack_15.y - unaff_EBP * fVar3;
      __return_storage_ptr__->z = VStack_15.z - unaff_retaddr * fVar3;
      return __return_storage_ptr__;
    }
    func_?();
    pcVar26 = (code *)swi(3);
    pVVar14 = (Vector3 *)(*pcVar26)();
    return pVVar14;
  }
  __return_storage_ptr__->x = (float)(int)desiredPosition._0_8_;
  __return_storage_ptr__->y = (float)(int)((ulonglong)desiredPosition._0_8_ >> 0x20);
  __return_storage_ptr__->z = desiredPosition.z;
  return __return_storage_ptr__;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera_UpdateCamera
               (TimeAttackFlagCountdownCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  MVCameraBase::MVCameraBase_UpdateCamera
            ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
  pMVar1 = (this->fields).avatarLocal;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    puVar2 = (undefined8 *)(*(code *)(pMVar1->klass->vtable).get_Position.method)(&uStack_3,pMVar1)
    ;
    uStack_4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    fStack_6 = fVar5;
    uStack_7 = uStack_4;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 != (Transform *)0x0) {
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffcc,pTVar9,(MethodInfo *)0x0);
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          (&VStack_12,*pQVar10,(this->fields).offset,(MethodInfo *)0x0);
      uVar13 = pVVar11->x;
      uVar14 = pVVar11->y;
      fStack_15 = fStack_6 + pVVar11->z;
      uStack_3 = CONCAT44(uStack_4._4_4_ + (float)uVar14,(float)uStack_4 + (float)uVar13);
      if (pTVar8 != (Transform *)0x0) {
        value.z = fStack_15;
        value.x = (float)uStack_4 + (float)uVar13;
        value.y = uStack_4._4_4_ + (float)uVar14;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar8,value,(MethodInfo *)0x0);
        pMVar1 = (this->fields).avatarLocal;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          bVar16 = MVAvatar::MVAvatar_IsInMode
                            ((MVAvatar *)pMVar1,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
          if (bVar16 != 0) {
            return;
          }
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar9 != (Transform *)0x0) {
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_12,pTVar9,(MethodInfo *)0x0);
            moveToPosition.z = fVar5;
            moveToPosition.x = (float)(undefined4)uStack_7;
            moveToPosition.y = (float)uStack_7._4_4_;
            pVVar11 = TimeAttackFlagCountdownCamera_PositionAfterCollision
                                (&VStack_12,this,*pVVar11,moveToPosition,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar8,*pVVar11,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* TimeAttackFlagCountdownCamera() */

void Assembly-CSharp.dll::TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera__ctor
               (TimeAttackFlagCountdownCamera *this,MethodInfo *method)

{
  (this->fields)._.cameraRadius = 0.3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

