
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_Activate
               (MVAvatarLocal_GhostMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  pMVar1 = (this->fields)._.mvAvatar;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    (pMVar1->fields)._.healParticleSpawnTime = fVar2;
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (pMVar3 = (pMVar1->fields)._.shield, pMVar3 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
      (*(code *)(pMVar3->klass->vtable).set_Value.method)(pMVar3,0,pMVar3->klass[1]._0.image);
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar1,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._.mvAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform(pMVar1,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._.mvAvatar;
          (this->fields).haveSetTransparency = 0;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            this_01 = (AvatarUIHandlerRemote *)
                      MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
            if (this_01 != (AvatarUIHandlerRemote *)0x0) {
              pSVar4 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                                 (this_01,(MethodInfo *)0x0);
              if (pSVar4 != (ShieldBar *)0x0) {
                func_?(2,TypeInfo__IAvatarCameraController,pSVar4,0x13);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (this_02 != (MainCameraManager *)0x0) {
                  pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                     (this_02,(MethodInfo *)0x0);
                  if (pMVar5 != (MVCameraBase *)0x0) {
                    (*(code *)(pMVar5->klass->vtable).Reset.method)
                              (pMVar5,(pMVar5->klass->vtable).FocusOnObject.methodPtr);
                    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if ((pMVar6 != (MVNetworkGame *)0x0) &&
                       (pGVar7 = (pMVar6->fields).GameEventManager,
                       pGVar7 != (GameEventManager *)0x0)) {
                      this_00 = (pGVar7->fields).AvatarCommandsBuildMode;
                      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                 *)func_?(TypeInfo__System__Action);
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (this_03,(Object *)this,
                                 MethodInfo__MVAvatarLocal__GhostMode__OnEnterEditMode__,
                                 (MethodInfo *)0x0);
                      if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                        GameEventManager+AvatarCommandsBuildModeManager::
                        GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
                                  (this_00,(Action *)this_03,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_CreateInputController
          (MVAvatarLocal_GhostMode *this,MethodInfo *method)

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


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_DeActivate
               (MVAvatarLocal_GhostMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._.avatar, this_00 != (Avatar_1 *)0x0)) {
    this_02 = (AvatarFader *)
              System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System
              ::Object]::
              Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_02 != (AvatarFader *)0x0) {
      AvatarFader::AvatarFader_SetTransparency(this_02,1.0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
        this_01 = (pGVar3->fields).AvatarCommandsBuildMode;
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this,MethodInfo__MVAvatarLocal__GhostMode__OnEnterEditMode__,
                   (MethodInfo *)0x0);
        if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager::
          GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
                    (this_01,(Action *)this_03,(MethodInfo *)0x0);
          MVAvatarLocal_GhostMode_ResetCamera(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_FixedUpdate
               (MVAvatarLocal_GhostMode *this,IInputToPlayerMovement *movementMap,MethodInfo *method
               )

{
  if ((this->fields).haveSetTransparency != 0) {
    return;
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (this_00 = (pMVar1->fields)._.avatar, this_00 != (Avatar_1 *)0x0)) &&
     (this_01 = (AvatarFader *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_00,
                           (MethodInfo *)0x0), this_01 != (AvatarFader *)0x0)) {
    AvatarFader::AvatarFader_SetTransparency(this_01,0.5,(MethodInfo *)0x0);
    (this->fields).haveSetTransparency = 1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnterEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_OnEnterEditMode
               (MVAvatarLocal_GhostMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IPlayModeUI *)0x0) {
    func_?(4,TypeInfo__IPlayModeUI,pIVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetCamera() */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_ResetCamera
               (MVAvatarLocal_GhostMode *this,MethodInfo *method)

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

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_SendNotification
               (MVAvatarLocal_GhostMode *this,MethodInfo *method)

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


/* MVAvatarLocal+GhostMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode__ctor
               (MVAvatarLocal_GhostMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  bVar1 = cRam_? == '\0';
  (this->fields)._.mvAvatar = mvAvatar;
  (this->fields)._.modeTypes = 4;
  if (bVar1) {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  this_00 = (AvatarInputController *)func_?();
  AvatarInputController::AvatarInputController__ctor(this_00,(MethodInfo *)0x0);
  return;
}

