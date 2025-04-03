
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
    ppHVar2 = &(this->fields).ignoreAvatarId;
    *ppHVar2 = this_00;
    func_?(ppHVar2,this_00);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_StartTransitionCam(this_01,0.5,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  puStack_2 = (undefined *)(desiredPosition.z - moveToPosition.z);
  fVar3 = desiredPosition.y - moveToPosition.y;
  fVar4 = desiredPosition.x - moveToPosition.x;
  fVar5 = 0.0;
  uStack_6 = ZEXT48(puStack_2);
  fVar7 = (float)puStack_2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xffffff68,(MethodInfo *)0x0);
  puStack_2 = (undefined *)fVar4;
  uStack_6 = CONCAT44(fVar3,fVar7);
  puVar8 = (undefined8 *)func_?(&stack0xffffffa8,&uStack_6,0);
  uVar9 = *(undefined4 *)(puVar8 + 1);
  uStack_10 = (undefined4)*puVar8;
  uStack_11 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  iVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  layerMask = 1 << ((byte)iVar12 & 0x1f);
  ignoreWoIds = (this->fields).ignoreAvatarId;
  dVar13 = (double)(fVar5 * fVar5 + in_stack_14 * in_stack_14 + fVar7 * fVar7);
  if (dVar13 < 0.0) {
    func_?();
  }
  else {
    dVar13 = SQRT(dVar13);
  }
  ray.m_Origin.y = (float)uStack_10;
  ray.m_Origin.x = moveToPosition.z;
  ray.m_Origin.z = (float)uStack_11;
  ray.m_Direction.x = (float)uVar9;
  ray.m_Direction.y = (float)in_stack_15;
  ray.m_Direction.z = fStack_16;
  bVar17 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,(this->fields)._.cameraRadius,(VoxelHit *)&stack0xffffffc0,(float)dVar13,
                     ignoreWoIds,layerMask,method_00);
  if ((bVar17 != 0) && (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= moveToPosition.z)) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_19,this_00,(MethodInfo *)0x0);
      uVar20 = pVVar18->x;
      uVar21 = pVVar18->y;
      point.y = (float)puStack_22;
      point.x = (float)uStack_23;
      point.z = (float)pTStack_24;
      lineEnd.y = (float)uVar21 + in_stack_25;
      lineEnd.x = (float)uVar20 + in_stack_26;
      lineEnd.z = pVVar18->z + fStack_27;
      bVar17 = MathFunctions::MathFunctions_DistancePointLine_1
                        (point,moveToPosition,lineEnd,&fStack_1,&VStack_28,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
        message = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      }
      fVar7 = (this->fields)._.cameraRadius;
      dVar13 = (double)(fVar7 * fVar7 - fStack_29 * fStack_29);
      if (dVar13 < 0.0) {
        func_?();
      }
      else {
        dVar13 = SQRT(dVar13);
      }
      fVar7 = (float)dVar13;
      __return_storage_ptr__->x = unaff_retaddr - moveToPosition.x * fVar7;
      __return_storage_ptr__->y = (float)__return_storage_ptr__ - moveToPosition.y * fVar7;
      __return_storage_ptr__->z = (float)this - moveToPosition.z * fVar7;
      return __return_storage_ptr__;
    }
    func_?();
    pcVar30 = (code *)swi(3);
    pVVar18 = (Vector3 *)(*pcVar30)();
    return pVVar18;
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
    puVar2 = (undefined8 *)(*(code *)(pMVar1->klass->vtable).get_Position.method)(&VStack_3,pMVar1)
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
                         (&VStack_3,*pQVar10,(this->fields).offset,(MethodInfo *)0x0);
      uStack_12._0_4_ = pVVar11->x;
      uStack_12._4_4_ = pVVar11->y;
      fStack_13 = pVVar11->z;
      VStack_3.x = (float)uStack_4 + (float)(undefined4)uStack_12;
      VStack_3.y = uStack_4._4_4_ + (float)uStack_12._4_4_;
      VStack_3.z = fStack_6 + fStack_13;
      if (pTVar8 != (Transform *)0x0) {
        value.y = VStack_3.y;
        value.x = VStack_3.x;
        value.z = VStack_3.z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar8,value,(MethodInfo *)0x0);
        pMVar1 = (this->fields).avatarLocal;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          bVar14 = MVAvatar::MVAvatar_IsInMode
                            ((MVAvatar *)pMVar1,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
          if (bVar14 != 0) {
            return;
          }
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar9 != (Transform *)0x0) {
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_3,pTVar9,(MethodInfo *)0x0);
            moveToPosition.z = fVar5;
            moveToPosition.x = (float)(undefined4)uStack_7;
            moveToPosition.y = (float)uStack_7._4_4_;
            pVVar11 = TimeAttackFlagCountdownCamera_PositionAfterCollision
                               (&VStack_3,this,*pVVar11,moveToPosition,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

