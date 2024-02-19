
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_Activate
               (MVAvatarLocal_GhostMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVAvatarLocal__GhostMode__OnEnterEditMode__);
    func_?(&TypeInfo__IAvatarCameraController);
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
            pAVar4 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
            if ((pAVar4 != (AvatarLocal *)0x0) &&
               (pIVar5 = (pAVar4->fields).avatarCameraController,
               pIVar5 != (IAvatarCameraController *)0x0)) {
              func_?(2,TypeInfo__IAvatarCameraController,pIVar5,0x13);
              this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_01 != (MainCameraManager *)0x0) {
                pMVar6 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                   (this_01,(MethodInfo *)0x0);
                if (pMVar6 != (MVCameraBase *)0x0) {
                  (*(code *)(pMVar6->klass->vtable).Reset.method)
                            (pMVar6,(pMVar6->klass->vtable).FocusOnObject.methodPtr);
                  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar7 != (MVNetworkGame *)0x0) &&
                     (pGVar8 = (pMVar7->fields).GameEventManager, pGVar8 != (GameEventManager *)0x0)
                     ) {
                    this_00 = (pGVar8->fields).AvatarCommandsBuildMode;
                    this_02 = (NavMesh_OnNavMeshPreUpdate *)
                              func_?(TypeInfo__System__Action);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_02,(Object *)this,
                               MethodInfo__MVAvatarLocal__GhostMode__OnEnterEditMode__,
                               (MethodInfo *)0x0);
                    if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                      GameEventManager+AvatarCommandsBuildModeManager::
                      GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
                                (this_00,(Action *)this_02,(MethodInfo *)0x0);
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_CreateInputController
          (MVAvatarLocal_GhostMode *this,MethodInfo *method)

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


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_DeActivate
               (MVAvatarLocal_GhostMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVAvatarLocal__GhostMode__OnEnterEditMode__);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    MVAvatar::MVAvatar_set_SetTransparency((MVAvatar *)pMVar1,1.0,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
      QStack_4.x = (float)TypeInfo__System__Action;
      this_00 = (pGVar3->fields).AvatarCommandsBuildMode;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__MVAvatarLocal__GhostMode__OnEnterEditMode__,
                 (MethodInfo *)0x0);
      if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        GameEventManager+AvatarCommandsBuildModeManager::
        GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
                  (this_00,(Action *)this_02,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__IAvatarCameraController);
          cRam_? = '\x01';
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar5 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_set_CamMaskMode
                    (pMVar5,MaskMode__Enum_Default,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._.mvAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            (*(code *)(pMVar1->klass->vtable).set_Visible.method)
                      (pMVar1,1,(pMVar1->klass->vtable).GetTargetPosition.methodPtr);
            pMVar1 = (this->fields)._.mvAvatar;
            if (pMVar1 != (MVAvatarLocal *)0x0) {
              pAVar6 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
              if ((pAVar6 != (AvatarLocal *)0x0) &&
                 (pIVar7 = (pAVar6->fields).avatarCameraController,
                 pIVar7 != (IAvatarCameraController *)0x0)) {
                func_?(2,TypeInfo__IAvatarCameraController,pIVar7,0);
                pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                   ((MethodInfo *)0x0);
                if (pMVar5 != (MainCameraManager *)0x0) {
                  pMVar8 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                     (pMVar5,(MethodInfo *)0x0);
                  if (pMVar8 != (MVCameraBase *)0x0) {
                    (*(code *)(pMVar8->klass->vtable).Reset.method)
                              (pMVar8,(pMVar8->klass->vtable).FocusOnObject.methodPtr);
                    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                       ((MethodInfo *)0x0);
                    if (pMVar5 != (MainCameraManager *)0x0) {
                      pMVar8 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                         (pMVar5,(MethodInfo *)0x0);
                      if (pMVar8 != (MVCameraBase *)0x0) {
                        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0);
                        pMVar1 = (this->fields)._.mvAvatar;
                        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                           (this_01 = (pMVar1->fields)._._._.transform, this_01 != (Transform *)0x0)
                           ) {
                          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                   Transform_get_rotation(&QStack_4,this_01,(MethodInfo *)0x0);
                          if (this_03 != (Transform *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_rotation(this_03,*pQVar9,(MethodInfo *)0x0);
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
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_FixedUpdate
               (MVAvatarLocal_GhostMode *this,IInputToPlayerMovement *movementMap,MethodInfo *method
               )

{
  if ((this->fields).haveSetTransparency == 0) {
    this_00 = (this->fields)._.mvAvatar;
    if (this_00 == (MVAvatarLocal *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVAvatar::MVAvatar_set_SetTransparency((MVAvatar *)this_00,0.5,(MethodInfo *)0x0);
    (this->fields).haveSetTransparency = 1;
  }
  return;
}


/* Void OnEnterEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_OnEnterEditMode
               (MVAvatarLocal_GhostMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    pIStack_2 = TypeInfo__IPlayModeUI;
    pIStack_3 = pIVar1;
    func_?(4);
    return;
  }
  uVar4 = func_?(&pIStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetCamera() */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_ResetCamera
               (MVAvatarLocal_GhostMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarCameraController);
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
        if ((pAVar3 != (AvatarLocal *)0x0) &&
           ((pAVar3->fields).avatarCameraController != (IAvatarCameraController *)0x0)) {
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
                  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pMVar4,(MethodInfo *)0x0);
                  pMVar2 = (this->fields)._.mvAvatar;
                  if ((pMVar2 != (MVAvatarLocal *)0x0) &&
                     (this_00 = (pMVar2->fields)._._._.transform, this_00 != (Transform *)0x0)) {
                    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_rotation
                                       ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
                    if (this_01 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                (this_01,*pQVar5,(MethodInfo *)0x0);
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


/* MVAvatarLocal+GhostMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode__ctor
               (MVAvatarLocal_GhostMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._.mvAvatar = mvAvatar;
  func_?(&this->fields,mvAvatar);
  (this->fields)._.modeTypes = 4;
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_CharacterEditor) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
      this_00 = (AvatarInputControllerTouch *)func_?();
      AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  this_01 = (AvatarInputController *)func_?();
  AvatarInputController::AvatarInputController__ctor(this_01,(MethodInfo *)0x0);
  return;
}

