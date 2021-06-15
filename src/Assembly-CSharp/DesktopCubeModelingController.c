
/* Void Initialize(CubeModelingStateMachine) */

void Assembly-CSharp.dll::DesktopCubeModelingController::DesktopCubeModelingController_Initialize
               (DesktopCubeModelingController *this,
               CubeModelingStateMachine *cubeModelingStateMachine,MethodInfo *method)

{
  pDVar1 = (this->fields).desktopCubeModelingController;
  if (pDVar1 != (DesktopCubeModelingToolsController *)0x0) {
    (pDVar1->fields).cubeModelingStateMachine = cubeModelingStateMachine;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPublishPlanetFinished(String) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController_OnPublishPlanetFinished
               (DesktopCubeModelingController *this,String *completionMessage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pUVar2 = (pMVar1->fields).OnPublishedPlanet;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__DesktopCubeModelingController__OnPublishPlanetFinished_System__String_,
               MethodInfo__UnityEngine__Events__UnityAction<System::String>__UnityAction_System__Object__void__
              );
    pUVar4 = (UnityAction_1_System_String_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_1_System_String_ *)0x0;
    if (pUVar4 != (UnityAction_1_System_String_ *)0x0) {
      if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction<System::String>) {
        pUVar2 = pUVar4;
      }
      if (pUVar2 == (UnityAction_1_System_String_ *)0x0) goto code_?;
    }
    (pMVar1->fields).OnPublishedPlanet = pUVar2;
    text = (String *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache2 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__DesktopCubeModelingController___OnPublishPlanetFinished_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache2 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache2;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)text,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification
              (text,(Sprite *)0x0,5,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PublishCallback(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController_PublishCallback
               (DesktopCubeModelingController *this,bool confirmed,ConfirmationPopup *popup,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    if (confirmed == 0) {
      return;
    }
    this_00 = (ScaleAnimationBase *)
              func_?(
                             TypeInfo__DesktopCubeModelingController___PublishCallback_c__AnonStorey0
                             );
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_1);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__DesktopCubeModelingController___PublishCallback_m__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
    }
    pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar2,(BaseEventData *)0x0,pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pUVar6 = (pMVar5->fields).OnPublishedPlanet;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__DesktopCubeModelingController__OnPublishPlanetFinished_System__String_,
                 MethodInfo__UnityEngine__Events__UnityAction<System::String>__UnityAction_System__Object__void__
                );
      pUVar7 = (UnityAction_1_System_String_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar6,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pUVar6 = (UnityAction_1_System_String_ *)0x0;
      if (pUVar7 != (UnityAction_1_System_String_ *)0x0) {
        if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction<System::String>) {
          pUVar6 = pUVar7;
        }
        pUVar8 = TypeInfo__UnityEngine__Events__UnityAction<System::String>;
        if (pUVar6 == (UnityAction_1_System_String_ *)0x0) goto code_?;
      }
      (pMVar5->fields).OnPublishedPlanet = pUVar6;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      if (this_00 != (ScaleAnimationBase *)0x0) {
        (this_00->fields)._._._._.m_CachedPtr = TypeInfo__System__String->static_fields->Empty;
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          bVar9 = MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PublishPlanet
                            (this_01,(String **)&this_00->fields,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            return;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            this = (DesktopCubeModelingController *)&UNK_?;
            func_?();
          }
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar5 != (MVNetworkGame *)0x0) {
            pUVar6 = (pMVar5->fields).OnPublishedPlanet;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__DesktopCubeModelingController__OnPublishPlanetFinished_System__String_
                       ,
                       MethodInfo__UnityEngine__Events__UnityAction<System::String>__UnityAction_System__Object__void__
                      );
            pUVar7 = (UnityAction_1_System_String_ *)
                     mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)pUVar6,(Delegate *)pUVar3,(MethodInfo *)0x0);
            pUVar6 = (UnityAction_1_System_String_ *)0x0;
            if (pUVar7 == (UnityAction_1_System_String_ *)0x0) {
code_?:
              (pMVar5->fields).OnPublishedPlanet = pUVar6;
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
              if (TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache1 ==
                  (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar3,(Object *)0x0,
                           MethodInfo__DesktopCubeModelingController___PublishCallback_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                          );
                TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache1 =
                     (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
              }
              pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                       TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache1;
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar2,(BaseEventData *)0x0,pEVar4,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar3,(Object *)this_00,
                         MethodInfo__DesktopCubeModelingController___PublishCallback_c__AnonStorey0____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                        );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar2,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                        );
              return;
            }
            if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction<System::String>) {
              pUVar6 = pUVar7;
            }
            pUVar8 = TypeInfo__UnityEngine__Events__UnityAction<System::String>;
            if (pUVar6 != (UnityAction_1_System_String_ *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
  pUVar7 = extraout_ECX;
  pUVar8 = extraout_EDX;
code_?:
  func_?(pUVar7,pUVar8);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void PublishGame() */

void Assembly-CSharp.dll::DesktopCubeModelingController::DesktopCubeModelingController_PublishGame
               (DesktopCubeModelingController *this,MethodInfo *method)

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
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      iVar1 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnershipTypeID(this_01,(MethodInfo *)0x0);
      if (iVar1 != 2) {
        text = TM::TM__(StringLiteral_You_must_be_the_owner_in_order_t,(MethodInfo *)0x0);
        sprite = pSRam00000014;
        if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
          func_?();
        }
        NotificationController::NotificationController_PushNotification
                  (text,sprite,3,(MethodInfo *)0x0);
        return;
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       (unaff_ESI,(MethodInfo *)0x0);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)unaff_ESI,
                 MethodInfo__DesktopCubeModelingController___PublishGame_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMaterial(Byte) */

void Assembly-CSharp.dll::DesktopCubeModelingController::DesktopCubeModelingController_SetMaterial
               (DesktopCubeModelingController *this,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).materialsButtonImage;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_01,(MethodInfo *)0x0);
    if (this_02 != (CelestialParam *)0x0) {
      this_03 = (GamePointGainEffect *)
                MVMaterialRepository::MVMaterialRepository_GetMaterial
                          ((MVMaterialRepository *)this_02,materialId,(MethodInfo *)0x0);
      if (this_03 != (GamePointGainEffect *)0x0) {
        value = (Texture *)
                GamePointGainEffect::GamePointGainEffect_get_ID(this_03,(MethodInfo *)0x0);
        if (this_00 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,value,(MethodInfo *)0x0);
          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if (((pGVar1 != (GameEventManager *)0x0) &&
              (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
              pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
             ((pGVar2->fields).LaserCommands !=
              (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (*(Action_1_UIPushOption_ **)(in_stack_3 + 0xc) !=
                (Action_1_UIPushOption_ *)0x0) {
              mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                        (*(Action_1_UIPushOption_ **)(in_stack_3 + 0xc),in_stack_4,
                         MethodInfo__System__Action<unsigned_char>__Invoke_unsigned_char_);
            }
            return;
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


/* Void TakeScreenshot() */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController_TakeScreenshot
               (DesktopCubeModelingController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache3 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__DesktopCubeModelingController___TakeScreenshot_m__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache3 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__DesktopCubeModelingController->static_fields->__f__am_cache3;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void <OnPublishPlanetFinished>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController__OnPublishPlanetFinished_m__3
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PublishCallback>m__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController__PublishCallback_m__1
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIVar1 = x->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
          iVar4 = pIVar1->interfaceOffsets[uVar2].offset;
          (*(code *)(&(x->klass->vtable).Create_1)[iVar4].method)
                    (x,(&(x->klass->vtable).Create_2)[iVar4].methodPtr);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,2);
    (*(code *)*puVar5)(x,puVar5[1]);
    return;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <PublishCallback>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController__PublishCallback_m__2
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PublishGame>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController__PublishGame_m__0
               (DesktopCubeModelingController *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Are_you_sure_you_wish_to_publish,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__DesktopCubeModelingController__PublishCallback_bool__ConfirmationPopup_,
             MethodInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>__UnityAction_System__Object__void__
            );
  TM::TM__(StringLiteral_Publish_Game_,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(3);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <TakeScreenshot>m__4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController__TakeScreenshot_m__4
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Image_upload_is_disabled_in_stan,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

