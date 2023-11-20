
/* Void HandlePointing(Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_HandlePointing
               (AvatarLimbManager_AvatarPointingHandler *this,Quaternion yawRotation,
               Quaternion pitchRotation,MethodInfo *method)

{
  iVar1 = func_?(&stack0xfffffff0,&yawRotation,0);
  if (_UNK_? < *(float *)(iVar1 + 4) || _UNK_? == *(float *)(iVar1 + 4)) {
    iVar1 = func_?(&stack0xfffffff0,&yawRotation,0);
    if (*(float *)(iVar1 + 4) <= _UNK_?) {
      pAVar2 = (this->fields).limbRotator;
      if (pAVar2 != (AvatarLimbManager_LimbRotator *)0x0) {
        limbYawRotation.y = yawRotation.y;
        limbYawRotation.x = yawRotation.x;
        limbYawRotation.z = yawRotation.z;
        limbYawRotation.w = yawRotation.w;
        AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_SetLimbRotation
                  (pAVar2,BodyData_PartIndex__Enum_LArm,limbYawRotation,pitchRotation,
                   (this->fields).elapsedPointingTime,(MethodInfo *)0x0);
        pAVar2 = (this->fields).limbRotator;
        if (pAVar2 != (AvatarLimbManager_LimbRotator *)0x0) {
          AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_StopLimbRotation
                    (pAVar2,BodyData_PartIndex__Enum_RArm,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  pAVar2 = (this->fields).limbRotator;
  if (pAVar2 != (AvatarLimbManager_LimbRotator *)0x0) {
    limbYawRotation_00.y = yawRotation.y;
    limbYawRotation_00.x = yawRotation.x;
    limbYawRotation_00.z = yawRotation.z;
    limbYawRotation_00.w = yawRotation.w;
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_SetLimbRotation
              (pAVar2,BodyData_PartIndex__Enum_RArm,limbYawRotation_00,pitchRotation,
               (this->fields).elapsedPointingTime,(MethodInfo *)0x0);
    pAVar2 = (this->fields).limbRotator;
    if (pAVar2 != (AvatarLimbManager_LimbRotator *)0x0) {
      if (cRam_? == '\0') {
        yawRotation.w = (float)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (pAVar2->fields).limbControllers;
      if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
        this_01 = (LimbController *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,
                             MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                            );
        if (this_01 != (LimbController *)0x0) {
          LimbController::LimbController_StopRotating(this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(AvatarLimbManager, AvatarLimbManager+LimbRotator, AvatarEnabledChangeHandler) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_Initialize
               (AvatarLimbManager_AvatarPointingHandler *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_LimbRotator *limbRotator,
               AvatarEnabledChangeHandler *enableChangeHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnDisable__);
    func_?(&MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnEnable__);
    cRam_? = '\x01';
  }
  (this->fields).limbManager = limbManager;
  func_?(&(this->fields).limbManager,limbManager);
  (this->fields).limbRotator = limbRotator;
  func_?(&(this->fields).limbRotator,limbRotator);
  if (enableChangeHandler == (AvatarEnabledChangeHandler *)0x0) {
    func_?();
    goto code_?;
  }
  pAVar1 = (enableChangeHandler->fields).OnEnabled;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnEnable__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    (enableChangeHandler->fields).OnEnabled = (Action *)0x0;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) goto code_?;
    (enableChangeHandler->fields).OnEnabled = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) goto code_?;
  }
  func_?();
  pAVar1 = (enableChangeHandler->fields).OnDisabled;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)&(enableChangeHandler->fields).OnEnabled,
             MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnDisable__,(MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    (enableChangeHandler->fields).OnDisabled = (Action *)0x0;
    func_?();
    return;
  }
  pAVar3 = (Action *)0x0;
  if (pAVar1->klass == TypeInfo__System__Action) {
    pAVar3 = pAVar1;
  }
  if (pAVar3 != (Action *)0x0) {
    (enableChangeHandler->fields).OnDisabled = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 != (Action *)0x0) {
      func_?();
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_OnDisable
               (AvatarLimbManager_AvatarPointingHandler *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_OnEnable
               (AvatarLimbManager_AvatarPointingHandler *this,MethodInfo *method)

{
  (this->fields).isActive = 1;
  return;
}


/* Void StopPointing() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_StopPointing
               (AvatarLimbManager_AvatarPointingHandler *this,MethodInfo *method)

{
  pAVar1 = (this->fields).limbRotator;
  if (pAVar1 != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (pAVar1->fields).limbControllers;
    if (pDVar2 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
      this_00 = (LimbController *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,2,
                           MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                          );
      if (this_00 != (LimbController *)0x0) {
        iVar3 = 0;
        LimbController::LimbController_StopRotating(this_00,(MethodInfo *)0x0);
        pAVar1 = (this->fields).limbRotator;
        if (pAVar1 != (AvatarLimbManager_LimbRotator *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pDVar2 = (pAVar1->fields).limbControllers;
          if (pDVar2 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
            pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,3,
                                MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                               );
            if (pOVar4 != (Object *)0x0) {
              if (*(char *)(iVar3 + 0x88) == '\0') {
                *(undefined1 *)(iVar3 + 0x78) = 0;
              }
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdatePointing(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_UpdatePointing
               (AvatarLimbManager_AvatarPointingHandler *this,Vector3 localLookDirection,
               MethodInfo *method)

{
  fVar1 = (this->fields).elapsedPointingTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  (this->fields).prevLookDirection.x = localLookDirection.x;
  (this->fields).prevLookDirection.y = localLookDirection.y;
  (this->fields).elapsedPointingTime = fVar1 - fVar2;
  (this->fields).prevLookDirection.z = localLookDirection.z;
  return;
}


/* AvatarLimbManager+AvatarPointingHandler() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler__ctor
               (AvatarLimbManager_AvatarPointingHandler *this,MethodInfo *method)

{
  (this->fields).pointingDuration = 0.8;
  (this->fields).shouldPoint = 1;
  (this->fields).isActive = 1;
  return;
}

