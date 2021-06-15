
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
        cRam_? = '\x01';
      }
      method = (MethodInfo *)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      fromMode = (AvatarRuntimeState__Enum)&UNK_?;
      data = (Dictionary_2_System_Object_System_Object_ *)func_?();
      fromMode = (AvatarRuntimeState__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
      ;
      this = (MVAvatarLocal_WaitMode *)data;
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      fromMode = (int)&this + 3;
      this = (MVAvatarLocal_WaitMode *)TypeInfo__System__Byte;
      key = (String *)func_?();
      value = (CrossPlatformInputManager_VirtualButton *)func_?();
      if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)data,key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
          func_?(TypeInfo__NotificationController);
        }
        NotificationController::NotificationController_PushNotification_2
                  (NotificationType__Enum_WaitCountDown,data,NotificationLifetime__Enum_High,
                   (MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  this_00 = (AvatarInputController *)func_?(TypeInfo__AvatarInputController);
  AvatarInputController::AvatarInputController__ctor(this_00,(MethodInfo *)0x0);
  return (IAvatarInputController *)this_00;
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_FrameUpdate
               (MVAvatarLocal_WaitMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                           ((InventoryItemPreviewer *)this_00,(MethodInfo *)0x0);
    if (this_01 !=
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      pOVar1 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      if (pOVar1 == (Object *)0x2) {
        return;
      }
      if ((iRam_? != 0) && (*(int *)(iRam_? + 0x170) != 0)) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        piVar2 = *(int **)(in_stack_3 + 0xc);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xe0))(piVar2);
          if (*(Dictionary_2_AvatarRuntimeState_System_Object_ **)(in_stack_3 + 8) !=
              (Dictionary_2_AvatarRuntimeState_System_Object_ *)0x0) {
            pOVar1 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[AvatarRuntimeState,System::Object]::
                     Dictionary_2_AvatarRuntimeState_System_Object__get_Item
                               (*(Dictionary_2_AvatarRuntimeState_System_Object_ **)
                                 (in_stack_3 + 8),in_stack_4,
                                MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                               );
            *(char *)(in_stack_3 + 0x10) = (char)in_stack_4;
            *(Object **)(in_stack_3 + 0xc) = pOVar1;
            if (pOVar1 != (Object *)0x0) {
              (**(code **)&pOVar1->klass[1]._0.this_arg.attrs)(pOVar1);
              return;
            }
          }
        }
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetCamera() */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_ResetCamera
               (MVAvatarLocal_WaitMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
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
        this_01 = (AvatarUIHandlerRemote *)
                  MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar2,(MethodInfo *)0x0);
        if (this_01 != (AvatarUIHandlerRemote *)0x0) {
          pSVar3 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                             (this_01,(MethodInfo *)0x0);
          if (pSVar3 != (ShieldBar *)0x0) {
            func_?(2,TypeInfo__IAvatarCameraController);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if (pMVar1 != (MainCameraManager *)0x0) {
              pMVar4 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                 (pMVar1,(MethodInfo *)0x0);
              if (pMVar4 != (MVCameraBase *)0x0) {
                (*(code *)(pMVar4->klass->vtable).Reset.method)();
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                   ((MethodInfo *)0x0);
                if (pMVar1 != (MainCameraManager *)0x0) {
                  pMVar4 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                     (pMVar1,(MethodInfo *)0x0);
                  if (pMVar4 != (MVCameraBase *)0x0) {
                    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)pMVar4,(MethodInfo *)0x0);
                    pMVar2 = (this->fields)._.mvAvatar;
                    if ((pMVar2 != (MVAvatarLocal *)0x0) &&
                       (this_00 = (pMVar2->fields)._._._.transform, this_00 != (Transform *)0x0)) {
                      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_rotation
                                         ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
                      if (this_02 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (this_02,*pQVar5,(MethodInfo *)0x0);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SendNotification() */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_SendNotification
               (MVAvatarLocal_WaitMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  data = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (String *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Boolean,&stack0xfffffffa);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_WaitCountDown,data,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVAvatarLocal+WaitMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode__ctor
               (MVAvatarLocal_WaitMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  bVar1 = cRam_? == '\0';
  (this->fields)._.mvAvatar = mvAvatar;
  (this->fields)._.modeTypes = 4;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  this_00 = (AvatarInputController *)func_?(TypeInfo__AvatarInputController);
  AvatarInputController::AvatarInputController__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).avatarInputController = (IAvatarInputController *)this_00;
  return;
}

