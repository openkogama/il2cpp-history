
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera_Enter
               (TimeAttackFlagDebriefingCamera *this,MVCameraController *camController,
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
      pTVar2 = TimeAttackFlagDebriefingCamera_GetClosestTimeAttackFlag(this,(MethodInfo *)0x0);
      (this->fields).flagTransform = pTVar2;
      func_?(&(this->fields).flagTransform,pTVar2);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera_Exit
               (TimeAttackFlagDebriefingCamera *this,MVCameraController *camController,
               MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_StartTransitionCam(this_00,0.5,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Transform GetClosestTimeAttackFlag() */

Transform *
Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
TimeAttackFlagDebriefingCamera_GetClosestTimeAttackFlag
          (TimeAttackFlagDebriefingCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (Transform *)0x0;
  fStack_2 = _UNK_?;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (this_00,WorldObjectType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_01->fields)._size == 0) goto code_?;
      pMVar3 = (this->fields).avatarLocal;
      if (pMVar3 != (MVAvatarLocal *)0x0) {
        puVar4 = (undefined8 *)
                 (*(code *)(pMVar3->klass->vtable).get_Position.method)(&uStack_5,pMVar3);
        index = 0;
        uStack_6 = *puVar4;
        fStack_7 = *(float *)(puVar4 + 1);
        do {
          if ((this_01->fields)._size <= index) {
            return pTVar1;
          }
          RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                            );
          if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
          uStack_5 = CONCAT44(uStack_5._4_4_,*(undefined4 *)(*(int *)RVar8 + 0xe4));
          puVar4 = (undefined8 *)(**(code **)(*(int *)RVar8 + 0xe0))();
          uVar9 = *puVar4;
          fStack_10 = *(float *)(puVar4 + 1);
          uStack_5._0_4_ = (float)uVar9;
          uStack_5._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
          fVar11 = (uStack_6._4_4_ - uStack_5._4_4_) * (uStack_6._4_4_ - uStack_5._4_4_) +
                  ((float)uStack_6 - (float)uStack_5) * ((float)uStack_6 - (float)uStack_5) +
                  (fStack_7 - fStack_10) * (fStack_7 - fStack_10);
          uStack_5 = uVar9;
          if (fVar11 < fStack_2) {
            fStack_2 = fVar11;
            RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_01,index,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              );
            if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
            pTVar1 = *(Transform **)((int)RVar8 + 0x90);
          }
          index = index + 1;
        } while( true );
      }
    }
  }
  func_?();
code_?:
  uVar12 = func_?();
  this_02 = (Exception *)func_?(uVar12);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Entered_TimeAttackFlagDebriefing);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,method_00);
  uVar12 = func_?();
  uStack_5 = CONCAT44(uStack_5._4_4_,uVar12);
  func_?();
  pcVar13 = (code *)swi(3);
  pTVar1 = (Transform *)(*pcVar13)();
  return pTVar1;
}


/* Vector3 GetLookAtPosition() */

Vector3 * Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
          TimeAttackFlagDebriefingCamera_GetLookAtPosition
                    (Vector3 *__return_storage_ptr__,TimeAttackFlagDebriefingCamera *this,
                    MethodInfo *method)

{
  this_00 = (this->fields).flagTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = (this->fields).height;
    uVar4 = pVVar1->x;
    uVar5 = pVVar1->y;
    fVar6 = pVVar1->z;
    __return_storage_ptr__->x = (float)uVar4 + 0.0;
    __return_storage_ptr__->y = fVar3 + (float)uVar5;
    __return_storage_ptr__->z = fVar6 + 0.0;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar7)();
  return pVVar1;
}


/* Vector3 PositionAfterCollision(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
          TimeAttackFlagDebriefingCamera_PositionAfterCollision
                    (Vector3 *__return_storage_ptr__,TimeAttackFlagDebriefingCamera *this,
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
  func_?(&puStack_1,0,0x48);
  puStack_2 = (undefined *)(desiredPosition.x - moveToPosition.x);
  distance = desiredPosition.z - moveToPosition.z;
  uStack_3 = CONCAT44(uStack_3._4_4_,distance);
  fVar4 = (float10)func_?(&puStack_2,0);
  fStack_5 = (float)fVar4;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&puStack_2,(MethodInfo *)0x0);
  uStack_3 = CONCAT44(in_stack_6,distance);
  fVar7 = moveToPosition.z;
  puVar8 = (undefined8 *)func_?((int)&uStack_9 + 4,&uStack_3,0);
  uVar10 = *puVar8;
  uVar11 = *(undefined4 *)(puVar8 + 1);
  iVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  ray.m_Origin.y = (float)(int)uVar10;
  ray.m_Origin.x = fVar7;
  ray.m_Origin.z = (float)(int)((ulonglong)uVar10 >> 0x20);
  ray.m_Direction.x = (float)uVar11;
  ray.m_Direction.y = 0.0;
  ray.m_Direction.z = moveToPosition.y;
  bVar13 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,(this->fields)._.cameraRadius,(VoxelHit *)&stack0xffffffb8,distance,
                     (this->fields).ignoreAvatarId,1 << ((byte)iVar12 & 0x1f),(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= moveToPosition.x) && (bVar13 != 0)) {
    uStack_9 = 0;
    fStack_14 = 0.0;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_16,this_00,(MethodInfo *)0x0);
      uVar17 = pVVar15->x;
      uVar18 = pVVar15->y;
      point.z = (float)pTStack_19;
      point.x = (float)(undefined4)uStack_9;
      point.y = (float)uStack_9._4_4_;
      lineStart.y = (float)iStack_20;
      lineStart.x = (float)uStack_21;
      lineStart.z = moveToPosition.z;
      lineEnd.y = (float)puStack_1 + (float)uVar18;
      lineEnd.x = fStack_14 + (float)uVar17;
      lineEnd.z = in_stack_22 + pVVar15->z;
      bVar13 = MathFunctions::MathFunctions_DistancePointLine_1
                        (point,lineStart,lineEnd,(float *)&stack0xffffff98,
                         (Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
        message = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      }
      fVar7 = (this->fields)._.cameraRadius;
      dVar23 = (double)(fVar7 * fVar7 - fStack_24 * fStack_24);
      if (dVar23 < 0.0) {
        func_?();
      }
      else {
        dVar23 = SQRT(dVar23);
      }
      fVar7 = (float)dVar23;
      __return_storage_ptr__->x = VStack_16.x - fStack_25 * fVar7;
      __return_storage_ptr__->y = VStack_16.y - unaff_EBP * fVar7;
      __return_storage_ptr__->z = VStack_16.z - unaff_retaddr * fVar7;
      return __return_storage_ptr__;
    }
    func_?();
    pcVar26 = (code *)swi(3);
    pVVar15 = (Vector3 *)(*pcVar26)();
    return pVVar15;
  }
  __return_storage_ptr__->x = (float)(int)desiredPosition._0_8_;
  __return_storage_ptr__->y = (float)(int)((ulonglong)desiredPosition._0_8_ >> 0x20);
  __return_storage_ptr__->z = desiredPosition.z;
  return __return_storage_ptr__;
}


/* Void Reset() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera_Reset
               (TimeAttackFlagDebriefingCamera *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
     TimeAttackFlagDebriefingCamera_UpdateCamera
               (TimeAttackFlagDebriefingCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  this_01 = this;
  pTVar1 = (this->fields).flagTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    fVar6 = (float)uVar4 + (this->fields).height;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 != (Transform *)0x0) {
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffd8,pTVar7,(MethodInfo *)0x0);
      fVar9 = pQVar8->y;
      fVar10 = pQVar8->z;
      fVar11 = pQVar8->w;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffdc,*pQVar8,(this->fields).offset,
                          (MethodInfo *)0x0);
      uVar12 = pVVar2->x;
      uVar13 = pVVar2->y;
      if (pTVar1 != (Transform *)0x0) {
        this = (TimeAttackFlagDebriefingCamera *)(pVVar2->z + fVar5 + 0.0);
        fVar14 = (float)uVar13 + fVar6;
        VVar15.x = (float)uVar12 + (float)uVar3 + 0.0;
        VVar15 = (Vector3)CONCAT84(uVar16,VVar15.x);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar1,VVar15,(MethodInfo *)0x0);
        this_00 = (this_01->fields).avatarLocal;
        if (this_00 != (MVAvatarLocal *)0x0) {
          bVar17 = MVAvatar::MVAvatar_IsInMode
                            ((MVAvatar *)this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
          if (bVar17 != 0) {
code_?:
            MVCameraBase::MVCameraBase_UpdateCamera
                      ((MVCameraBase *)this_01,(MVCameraController *)0x0,targetTransform,
                       (MethodInfo *)0x0);
            return;
          }
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0);
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffdc,pTVar7,(MethodInfo *)0x0);
            VVar15.y = fVar10;
            VVar15.x = fVar9;
            VVar15.z = fVar11;
            pVVar2 = TimeAttackFlagDebriefingCamera_PositionAfterCollision
                               ((Vector3 *)&stack0xffffffcc,this_01,*pVVar2,VVar15,(MethodInfo *)0x0
                               );
            if (pTVar1 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar1,*pVVar2,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* TimeAttackFlagDebriefingCamera() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera__ctor
               (TimeAttackFlagDebriefingCamera *this,MethodInfo *method)

{
  (this->fields).height = 1.0;
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

