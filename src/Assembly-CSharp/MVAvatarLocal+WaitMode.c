
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_Activate
               (MVAvatarLocal_WaitMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  this_01 = this;
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  pMVar1 = (this_01->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar1,(MethodInfo *)0x0);
    pMVar1 = (this_01->fields)._.mvAvatar;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform(pMVar1,(MethodInfo *)0x0);
      MVAvatarLocal_WaitMode_ResetCamera(this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        method = (MethodInfo *)&UNK_?;
        func_?();
        method = (MethodInfo *)&TypeInfo__System__Byte;
        fromMode = (AvatarRuntimeState__Enum)&UNK_?;
        func_?();
        fromMode = (AvatarRuntimeState__Enum)
                   &
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
        ;
        this = (MVAvatarLocal_WaitMode *)&UNK_?;
        func_?();
        this = (MVAvatarLocal_WaitMode *)
               &
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
        ;
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      method = (MethodInfo *)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      fromMode = (AvatarRuntimeState__Enum)&UNK_?;
      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?();
      fromMode = (AvatarRuntimeState__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
      ;
      this = (MVAvatarLocal_WaitMode *)this_02;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      fromMode = (int)&this + 3;
      this = (MVAvatarLocal_WaitMode *)TypeInfo__System__Byte;
      key = (Object *)func_?();
      value = (Object *)func_?();
      if (this_02 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_02,key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__NotificationController);
        }
        NotificationController::NotificationController_PushNotification_2
                  (NotificationType__Enum_WaitCountDown,
                   (Dictionary_2_System_Object_System_Object_ *)this_02,
                   NotificationLifetime__Enum_High,(MethodInfo *)0x0);
        if ((undefined1)fromMode == AvatarRuntimeState__Enum_Ghost) {
          pMVar1 = (this_01->fields)._.mvAvatar;
          if ((pMVar1 == (MVAvatarLocal *)0x0) ||
             (this_00 = (pMVar1->fields).avatarLocalModes,
             this_00 == (MVAvatarLocal_AvatarLocalModes *)0x0)) goto code_?;
          MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                    (this_00,AvatarRuntimeState__Enum_Ghost,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_CreateInputController
          (MVAvatarLocal_WaitMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputControllerTouch);
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_CharacterEditor) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
      this_00 = (AvatarInputControllerTouch *)func_?(TypeInfo__AvatarInputControllerTouch);
      AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_00,(MethodInfo *)0x0);
      return (IAvatarInputController *)this_00;
    }
  }
  this_01 = (AvatarInputController *)func_?(TypeInfo__AvatarInputController);
  AvatarInputController::AvatarInputController__ctor(this_01,(MethodInfo *)0x0);
  return (IAvatarInputController *)this_01;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_FixedUpdate
               (MVAvatarLocal_WaitMode *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields).avatarMotor, this_00 != (AvatarMotor *)0x0)) {
    AvatarMotor::AvatarMotor_FixedUpdateFunction
              (this_00,(IMotorAPI *)(this->fields).avatarInputController,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_FrameUpdate
               (MVAvatarLocal_WaitMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar2->fields).currentGameState == 2) {
      return;
    }
    pMVar3 = (this->fields)._.mvAvatar;
    if ((pMVar3 != (MVAvatarLocal *)0x0) &&
       ((pMVar3->fields).avatarLocalModes != (MVAvatarLocal_AvatarLocalModes *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      interactionMap = (InputToInGameAction *)(uint)bRam_?;
      if ((pORam0000000d != (Object *)0x0) &&
         ((*pORam0000000d->klass[1]._0.gc_desc)(pORam0000000d,0),
         pDRam00000009 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0)) {
        pORam0000000d =
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       (pDRam00000009,0,
                        MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                       );
        func_?(0xd);
        bRam_? = 0;
        if (pORam0000000d != (Object *)0x0) {
          (**(code **)&pORam0000000d->klass[1]._0.this_arg.attrs)(pORam0000000d,interactionMap);
          return;
        }
      }
    }
  }
  uVar4 = func_?(&stack0xfffffff4);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetCamera() */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_ResetCamera
               (MVAvatarLocal_WaitMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_CamMaskMode
              (pMVar1,MaskMode__Enum_Default,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._.mvAvatar;
    if (pMVar2 != (MVAvatarLocal *)0x0) {
      (*(code *)(pMVar2->klass->vtable).set_Visible.method)(pMVar2);
      pMVar2 = (this->fields)._.mvAvatar;
      if (pMVar2 != (MVAvatarLocal *)0x0) {
        pAVar3 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar2,(MethodInfo *)0x0);
        if (pAVar3 != (AvatarLocal *)0x0) {
          pIVar4 = (pAVar3->fields).avatarCameraController;
          if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (pIVar4 != (IAvatarCameraController *)0x0) {
            func_?(2,TypeInfo__IAvatarCameraController);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if (pMVar1 != (MainCameraManager *)0x0) {
              pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                 (pMVar1,(MethodInfo *)0x0);
              if (pMVar5 != (MVCameraBase *)0x0) {
                (*(code *)(pMVar5->klass->vtable).Reset.method)();
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                   ((MethodInfo *)0x0);
                if (pMVar1 != (MainCameraManager *)0x0) {
                  pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                     (pMVar1,(MethodInfo *)0x0);
                  if (pMVar5 != (MVCameraBase *)0x0) {
                    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pMVar5,(MethodInfo *)0x0);
                    pMVar2 = (this->fields)._.mvAvatar;
                    if ((pMVar2 != (MVAvatarLocal *)0x0) &&
                       (this_00 = (pMVar2->fields)._._._.transform, this_00 != (Transform *)0x0)) {
                      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_rotation
                                         ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
                      if (this_01 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (this_01,*pQVar6,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SendNotification() */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_SendNotification
               (MVAvatarLocal_WaitMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  value = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffa);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_WaitCountDown,
               (Dictionary_2_System_Object_System_Object_ *)this_00,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVAvatarLocal+WaitMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode__ctor
               (MVAvatarLocal_WaitMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._.mvAvatar = mvAvatar;
  func_?(&this->fields,mvAvatar);
  (this->fields)._.modeTypes = 4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputControllerTouch);
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_CharacterEditor) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
      this_00 = (AvatarInputControllerTouch *)func_?(TypeInfo__AvatarInputControllerTouch);
      AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_00,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  this_00 = (AvatarInputControllerTouch *)func_?(TypeInfo__AvatarInputController);
  AvatarInputController::AvatarInputController__ctor
            ((AvatarInputController *)this_00,(MethodInfo *)0x0);
code_?:
  (this->fields).avatarInputController = (IAvatarInputController *)this_00;
  func_?();
  return;
}

