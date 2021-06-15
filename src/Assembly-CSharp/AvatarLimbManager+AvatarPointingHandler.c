
/* Void HandlePointing(Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_HandlePointing
               (AvatarLimbManager_AvatarPointingHandler *this,Quaternion yawRotation,
               Quaternion pitchRotation,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(&stack0xffffffe4,&yawRotation,0);
  fStack_2 = (float)((ulonglong)*puVar1 >> 0x20);
  if (_UNK_? <= fStack_2) {
    puVar1 = (undefined8 *)func_?(&stack0xffffffe4,&yawRotation,0);
    fStack_2 = (float)((ulonglong)*puVar1 >> 0x20);
    if (fStack_2 <= _UNK_?) {
      pAVar3 = (this->fields).limbRotator;
      if (pAVar3 != (AvatarLimbManager_LimbRotator *)0x0) {
        limbYawRotation.y = yawRotation.y;
        limbYawRotation.x = yawRotation.x;
        limbYawRotation.z = yawRotation.z;
        limbYawRotation.w = yawRotation.w;
        AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_SetLimbRotation
                  (pAVar3,BodyData_PartIndex__Enum_LArm,limbYawRotation,pitchRotation,
                   (this->fields).elapsedPointingTime,(MethodInfo *)0x0);
        pAVar3 = (this->fields).limbRotator;
        if (pAVar3 != (AvatarLimbManager_LimbRotator *)0x0) {
          AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_StopLimbRotation
                    (pAVar3,BodyData_PartIndex__Enum_RArm,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  pAVar3 = (this->fields).limbRotator;
  if (pAVar3 != (AvatarLimbManager_LimbRotator *)0x0) {
    limbYawRotation_00.y = yawRotation.y;
    limbYawRotation_00.x = yawRotation.x;
    limbYawRotation_00.z = yawRotation.z;
    limbYawRotation_00.w = yawRotation.w;
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_SetLimbRotation
              (pAVar3,BodyData_PartIndex__Enum_RArm,limbYawRotation_00,pitchRotation,
               (this->fields).elapsedPointingTime,(MethodInfo *)0x0);
    pAVar3 = (this->fields).limbRotator;
    if (pAVar3 != (AvatarLimbManager_LimbRotator *)0x0) {
      if (cRam_? == '\0') {
        yawRotation.y = _UNK_?;
        yawRotation.x = (float)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (pAVar3->fields).limbControllers;
      if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
        this_01 = (LimbController *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System
                  ::Object]::Dictionary_2_BodyData_PartIndex_System_Object__get_Item
                            ((Dictionary_2_BodyData_PartIndex_System_Object_ *)this_00,
                             BodyData_PartIndex__Enum_LArm,
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).limbManager = limbManager;
  (this->fields).limbRotator = limbRotator;
  if (enableChangeHandler != (AvatarEnabledChangeHandler *)0x0) {
    pAVar1 = (enableChangeHandler->fields).OnEnabled;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnEnable__,(MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar3;
      }
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    (enableChangeHandler->fields).OnEnabled = pAVar1;
    pAVar1 = (enableChangeHandler->fields).OnDisabled;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)&UNK_?,
               MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnDisable__,(MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar3;
      }
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    (enableChangeHandler->fields).OnDisabled = pAVar1;
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar2 = (pAVar1->fields).limbControllers;
    if (pDVar2 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
      this_00 = (LimbController *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
                Object]::Dictionary_2_BodyData_PartIndex_System_Object__get_Item
                          ((Dictionary_2_BodyData_PartIndex_System_Object_ *)pDVar2,
                           BodyData_PartIndex__Enum_RArm,
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
            pOVar4 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[BodyData+PartIndex,System::Object]::
                     Dictionary_2_BodyData_PartIndex_System_Object__get_Item
                               ((Dictionary_2_BodyData_PartIndex_System_Object_ *)pDVar2,
                                BodyData_PartIndex__Enum_LArm,
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
  func_?(0);
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

