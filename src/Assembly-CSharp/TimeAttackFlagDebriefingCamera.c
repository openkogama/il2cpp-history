
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
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar1 = (this->fields).avatarLocal;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__Add
                ((HashSet_1_System_Object_ *)this_00,(Object *)(pMVar1->fields)._._._._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      (this->fields).ignoreAvatarId = (HashSet_1_System_Int32_ *)this_00;
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
        puVar4 = (undefined8 *)(*(pMVar3->klass->vtable).get_Position.methodPtr)(&uStack_5,pMVar3);
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
          uStack_5 = CONCAT44(uStack_5._4_4_,*(undefined4 *)(*(int *)RVar8 + 0xe0));
          puVar4 = (undefined8 *)(**(code **)(*(int *)RVar8 + 0xdc))();
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
  func_?(this_02);
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

