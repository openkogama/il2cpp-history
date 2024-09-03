
/* Single CalculateHeadPitchRotationModifier(Single) */

float Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
      AvatarLimbManager_AvatarHeadRotationHandler_CalculateHeadPitchRotationModifier
                (AvatarLimbManager_AvatarHeadRotationHandler *this,float yawAngle,MethodInfo *method
                )

{
  if (_UNK_? < yawAngle) {
    yawAngle = _UNK_? - yawAngle;
  }
  if ((this->fields).shouldLean == 0) {
    yawAngle = _UNK_?;
  }
  return _UNK_? / ((_UNK_? - yawAngle / _UNK_?) + _UNK_?);
}


/* Single CalculateTorsoRotationModifier(Single) */

float Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
      AvatarLimbManager_AvatarHeadRotationHandler_CalculateTorsoRotationModifier
                (AvatarLimbManager_AvatarHeadRotationHandler *this,float yawAngle,MethodInfo *method
                )

{
  if (_UNK_? < yawAngle) {
    yawAngle = _UNK_? - yawAngle;
  }
  if ((this->fields).shouldLean == 0) {
    yawAngle = _UNK_?;
  }
  return _UNK_? / (_UNK_? - yawAngle / _UNK_?);
}


/* Quaternion ClampQuaternion(Quaternion) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
          (Quaternion *__return_storage_ptr__,AvatarLimbManager_AvatarHeadRotationHandler *this,
          Quaternion rotation,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&rotation,0);
  rotation.y = (float)*puVar1;
  rotation.z = (float)((ulonglong)*puVar1 >> 0x20);
  if (((_UNK_? < rotation.y) && (fVar3 = _UNK_?, rotation.y <= _UNK_?)) ||
     ((fVar4 = rotation.y, rotation.y < _UNK_? &&
      (fVar3 = _UNK_?, _UNK_? < rotation.y)))) {
    fVar4 = fVar3;
  }
  if (((_UNK_? < rotation.z) && (fVar3 = _UNK_?, rotation.z <= _UNK_?)) ||
     ((fVar5 = rotation.z, rotation.z < _UNK_? &&
      (fVar3 = _UNK_?, _UNK_? < rotation.z)))) {
    fVar5 = fVar3;
  }
  rotation.w = *(float *)(puVar1 + 1) * _UNK_?;
  euler.y = fVar5 * _UNK_?;
  euler.x = fVar4 * _UNK_?;
  euler.z = rotation.w;
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&rotation,euler,(MethodInfo *)0x0);
  fVar3 = pQVar6->y;
  fVar4 = pQVar6->z;
  fVar5 = pQVar6->w;
  __return_storage_ptr__->x = pQVar6->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Void Initialize(AvatarLimbManager, AvatarLimbManager+LimbRotator,
   AvatarLimbManager+AvatarLookDirectionHandler) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_Initialize
               (AvatarLimbManager_AvatarHeadRotationHandler *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_LimbRotator *limbRotator,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__);
    cRam_? = '\x01';
  }
  (this->fields).limbRotator = limbRotator;
  func_?(&(this->fields).limbRotator,limbRotator);
  if (limbManager == (AvatarLimbManager *)0x0) {
    func_?();
  }
  else {
    pAVar1 = (limbManager->fields).OnAvatarRotate;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      (limbManager->fields).OnAvatarRotate = (Action *)0x0;
      func_?();
      return;
    }
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 != (Action *)0x0) {
      (limbManager->fields).OnAvatarRotate = pAVar2;
      pAVar2 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 != (Action *)0x0) {
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetIdleTimer(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer_1
               (AvatarLimbManager_AvatarHeadRotationHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).limbRotator;
  (this->fields).idleTime = 0.0;
  b = StringLiteral_Idle;
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                     );
      cRam_? = '\x01';
    }
    bVar1 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                      (this_00,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_01 = (this_00->fields).limbControllers;
    if ((this_01 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                            MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                           ), pOVar2 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      this_02 = pOVar2[0x10].klass;
      index = 0;
      while (this_02 != (Object__Class *)0x0) {
        if ((int)(this_02->_0).namespaze <= index) {
          return;
        }
        if (pOVar2[0x10].klass == (Object__Class *)0x0) break;
        a = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       pOVar2[0x10].klass,index,
                       MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                      );
        bVar1 = mscorlib.dll::System::String::String_op_Equality((String *)a,b,(MethodInfo *)0x0);
        this_02 = pOVar2[0x10].klass;
        if (bVar1 != 0) {
          if (this_02 != (Object__Class *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((List_1_System_Object_ *)this_02,index,
                       MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_
                      );
            return;
          }
          break;
        }
        index = index + 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RotateHead(Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_RotateHead
               (AvatarLimbManager_AvatarHeadRotationHandler *this,Quaternion yawRotation,
               Quaternion pitchRotation,MethodInfo *method)

{
  iVar1 = func_?(auStack_2,&yawRotation,0);
  fVar3 = *(float *)(iVar1 + 4);
  if (_UNK_? < fVar3) {
    fVar3 = _UNK_? - fVar3;
  }
  if ((this->fields).shouldLean == 0) {
    fVar3 = _UNK_?;
  }
  this_00 = (this->fields).limbRotator;
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    limbYawRotation.y = yawRotation.y;
    limbYawRotation.x = yawRotation.x;
    limbYawRotation.z = yawRotation.z;
    limbYawRotation.w = yawRotation.w;
    limbPitchRotation.y = pitchRotation.y;
    limbPitchRotation.x =
         pitchRotation.x /
         (_UNK_? / ((_UNK_? - fVar3 / _UNK_?) + _UNK_?));
    limbPitchRotation.z = pitchRotation.z;
    limbPitchRotation.w = pitchRotation.w;
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_TrySetLimbRotation
              (this_00,BodyData_PartIndex__Enum_Head,limbYawRotation,limbPitchRotation,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RotateTorso(Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_RotateTorso
               (AvatarLimbManager_AvatarHeadRotationHandler *this,Quaternion yawRotation,
               Quaternion pitchRotation,MethodInfo *method)

{
  iVar1 = func_?(auStack_2,&yawRotation,0);
  fVar3 = *(float *)(iVar1 + 4);
  if (_UNK_? < fVar3) {
    fVar3 = _UNK_? - fVar3;
  }
  if ((this->fields).shouldLean == 0) {
    fVar3 = _UNK_?;
  }
  this_00 = (this->fields).limbRotator;
  fVar3 = _UNK_? / (_UNK_? - fVar3 / _UNK_?);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    limbPitchRotation.y = pitchRotation.y;
    limbPitchRotation.x = pitchRotation.x / fVar3;
    limbPitchRotation.z = pitchRotation.z;
    limbPitchRotation.w = pitchRotation.w;
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_TrySetLimbRotation
              (this_00,BodyData_PartIndex__Enum_Torso,
               TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
               limbPitchRotation,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateIdleTimer() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_UpdateIdleTimer
               (AvatarLimbManager_AvatarHeadRotationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).idleTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  bVar3 = fVar2 < _UNK_?;
  (this->fields).idleTime = fVar2;
  b = StringLiteral_Idle;
  if (bVar3) {
    return;
  }
  this_00 = (this->fields).limbRotator;
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                     );
      cRam_? = '\x01';
    }
    bVar4 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                      (this_00,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    this_01 = (this_00->fields).limbControllers;
    if ((this_01 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                            MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                           ), pOVar5 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      index = 0;
      pOVar6 = pOVar5[0x10].klass;
      while (pOVar6 != (Object__Class *)0x0) {
        this_02 = pOVar5[0x10].klass;
        if ((int)(pOVar6->_0).namespaze <= index) {
          if (this_02 != (Object__Class *)0x0) {
            func_?(this_02,b,
                            MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                           );
            return;
          }
          break;
        }
        if (this_02 == (Object__Class *)0x0) break;
        a = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)this_02,
                       index,
                       MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                      );
        bVar4 = mscorlib.dll::System::String::String_op_Equality((String *)a,b,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return;
        }
        index = index + 1;
        pOVar6 = pOVar5[0x10].klass;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_UpdateRotation
               (AvatarLimbManager_AvatarHeadRotationHandler *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).UpdateIdleTimer.method)(this,this->klass[1]._0.image);
  (this->fields).shouldLean = 1;
  return;
}

