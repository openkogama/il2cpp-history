
/* Void Activate(ActivateUIElement) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_Activate
               (TouchPlayModeController *this,ActivateUIElement__Enum element,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (element == ActivateUIElement__Enum_AvatarAccessoryShop) {
    pAVar1 = (this->fields).accessoryShopController;
    if (pAVar1 != (AccessoryShopController *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__AccessoryDataManager,unaff_EBP);
        func_?(&MethodInfo__AccessoryShopController__ReadyCallback__);
        func_?(&TypeInfo__UnityEngine__Events__UnityAction);
        cRam_? = '\x01';
      }
      (pAVar1->fields).pushOption = 2;
      pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)pAVar1,MethodInfo__AccessoryShopController__ReadyCallback__,
                 (MethodInfo *)0x0);
      pUStack3 =
           (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pUStack3 != (UnityAction *)0x0) {
        pUVar2 = (UnityAction *)0x0;
        if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar2 = pUStack3;
        }
        if (pUVar2 == (UnityAction *)0x0) {
          pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
          func_?();
          pUStack3 = extraout_ECX;
          pUStack4 = extraout_EDX;
        }
        else {
          TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
          pUVar2 = (UnityAction *)0x0;
          if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar2 = pUStack3;
          }
          pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
          if (pUVar2 != (UnityAction *)0x0) goto code_?;
        }
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
      pUVar2 = (UnityAction *)0x0;
code_?:
      pUStack3 = (UnityAction *)TypeInfo__AccessoryDataManager->static_fields;
      pUStack4 = (UnityAction__Class *)pUVar2;
      func_?();
      AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
      return;
    }
  }
  else if (element == ActivateUIElement__Enum_AvatarAccessoryShopBundles) {
    pAVar1 = (this->fields).accessoryShopController;
    if (pAVar1 != (AccessoryShopController *)0x0) {
      AccessoryShopController::AccessoryShopController_Activate_1
                (pAVar1,UIPushOption__Enum_HideAll,AccessoryCategoryClient__Enum_Bundles,
                 (MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (element != ActivateUIElement__Enum_BoosterMenu) {
      return;
    }
    pBVar6 = (this->fields).boosterMenu;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pBVar6 = (BoostMenuController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pBVar6,
                        BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                       );
    if (pBVar6 != (BoostMenuController *)0x0) {
      BoostMenuController::BoostMenuController_Initialize(pBVar6,(MethodInfo *)0x0);
      this_00 = (this->fields).uiStack;
      gameObject = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pBVar6,(MethodInfo *)0x0);
      if (this_00 != (UIStack *)0x0) {
        UIStack::UIStack_Push
                  (this_00,gameObject,UIPushOption__Enum_InvisibleBlocker,(UnityAction *)0x0,
                   UIGroupFlags__Enum_GameObjectUI,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ActivatePauseMenuState() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_ActivatePauseMenuState
               (TouchPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyState;
  if (this_00 != (RectTransform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_01 = (this->fields).inGameMenu;
      if (this_01 != (AndroidInGameMenu *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          this_02 = (this->fields).playModeControlsBase;
          if (this_02 != (PlayModeControlsBase *)0x0) {
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_02,(MethodInfo *)0x0);
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_Awake
               (TouchPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__ResolutionManager);
    func_?(&MethodInfo__TouchPlayModeController__SetUIReady__);
    cRam_? = '\x01';
  }
  canvasScaler = (this->fields).canvasScaler;
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  ResolutionManager::ResolutionManager_Init(canvasScaler,(MethodInfo *)0x0);
  pUVar1 = (this->fields).uiStack;
  if (pUVar1 != (UIStack *)0x0) {
    UIStack::UIStack_Push
              (pUVar1,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
               UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 != (MVNetworkGame *)0x0) &&
       (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       this_01 != (MVLocalPlayer *)0x0)) {
      bVar2 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pAVar3 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                           ((MethodInfo *)0x0);
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)this,MethodInfo__TouchPlayModeController__SetUIReady__,
                   (MethodInfo *)0x0);
        pAVar5 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
        pAVar3 = (Action *)0x0;
        if (pAVar5 != (Action *)0x0) {
          if (pAVar5->klass == TypeInfo__System__Action) {
            pAVar3 = pAVar5;
          }
joined_?:
          if (pAVar3 == (Action *)0x0) goto code_?;
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pUVar1 = (this->fields).uiStack;
        if (pUVar1 == (UIStack *)0x0) goto code_?;
        UIStack::UIStack_SetStackReady(pUVar1,(MethodInfo *)0x0);
        pAVar3 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                           ((MethodInfo *)0x0);
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)this,MethodInfo__TouchPlayModeController__SetUIReady__,
                   (MethodInfo *)0x0);
        pAVar5 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
        pAVar3 = (Action *)0x0;
        if (pAVar5 != (Action *)0x0) {
          if (pAVar5->klass == TypeInfo__System__Action) {
            pAVar3 = pAVar5;
          }
          goto joined_?;
        }
      }
      MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                (pAVar3,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pGVar6 = (this->fields).stackBottom;
      pAVar7 = (this->fields).chatController;
      if (pGVar6 != (GameObject *)0x0) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar6,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pAVar7 = (AndroidChatController *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           ((Object *)pAVar7,pTVar8,0,
                            AndroidChatController_MethodInfo__UnityEngine__Object__Instantiate<AndroidChatController>_AndroidChatController__UnityEngine__Transform__bool_
                           );
        (this->fields).chatController = pAVar7;
        func_?();
        pGVar6 = (this->fields).stackBottom;
        original = (this->fields).playMode3DControllerPrefab;
        if (pGVar6 != (GameObject *)0x0) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar6,(MethodInfo *)0x0);
          pPVar9 = (PlayModeControlsBase *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                             ((Object *)original,pTVar8,0,
                              PlayMode3DController_MethodInfo__UnityEngine__Object__Instantiate<PlayMode3DController>_PlayMode3DController__UnityEngine__Transform__bool_
                             );
          (this->fields).playModeControlsBase = pPVar9;
          func_?();
          pPVar9 = (this->fields).playModeControlsBase;
          if ((pPVar9 != (PlayModeControlsBase *)0x0) &&
             (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pPVar9,(MethodInfo *)0x0),
             pGVar6 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,0,(MethodInfo *)0x0);
            pGVar6 = (this->fields).stackBottom;
            original_00 = (this->fields).notificationManager;
            if (pGVar6 != (GameObject *)0x0) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar6,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)original_00,pTVar8,0,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                        );
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void CreateCanvasGUITemp() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_CreateCanvasGUITemp
               (TouchPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AndroidChatController_MethodInfo__UnityEngine__Object__Instantiate<AndroidChatController>_AndroidChatController__UnityEngine__Transform__bool_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                   );
    func_?(&
                    PlayMode3DController_MethodInfo__UnityEngine__Object__Instantiate<PlayMode3DController>_PlayMode3DController__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stackBottom;
  pAVar2 = (this->fields).chatController;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pAVar2 = (AndroidChatController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pAVar2,pTVar3,0,
                        AndroidChatController_MethodInfo__UnityEngine__Object__Instantiate<AndroidChatController>_AndroidChatController__UnityEngine__Transform__bool_
                       );
    (this->fields).chatController = pAVar2;
    func_?(&(this->fields).chatController,pAVar2);
    pGVar1 = (this->fields).stackBottom;
    original = (this->fields).playMode3DControllerPrefab;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      pPVar4 = (PlayModeControlsBase *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)original,pTVar3,0,
                          PlayMode3DController_MethodInfo__UnityEngine__Object__Instantiate<PlayMode3DController>_PlayMode3DController__UnityEngine__Transform__bool_
                         );
      (this->fields).playModeControlsBase = pPVar4;
      func_?(&(this->fields).playModeControlsBase,pPVar4);
      pPVar4 = (this->fields).playModeControlsBase;
      if (pPVar4 != (PlayModeControlsBase *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pPVar4,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields).stackBottom;
          original_00 = (this->fields).notificationManager;
          if (pGVar1 != (GameObject *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar1,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)original_00,pTVar3,0,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                      );
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


/* Void DeActivatePauseMenuState() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_DeActivatePauseMenuState
               (TouchPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyState;
  if (this_00 != (RectTransform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_01 = (this->fields).inGameMenu;
      if (this_01 != (AndroidInGameMenu *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          this_02 = (this->fields).playModeControlsBase;
          if (this_02 != (PlayModeControlsBase *)0x0) {
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_02,(MethodInfo *)0x0);
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HideEUseIcon() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_HideEUseIcon
               (TouchPlayModeController *this,MethodInfo *method)

{
  pPVar1 = (this->fields).playModeControlsBase;
  if ((pPVar1 != (PlayModeControlsBase *)0x0) &&
     (this_00 = (pPVar1->fields).useButtonLarge, this_00 != (ShowUse *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_Initialize
               (TouchPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AndroidChatController__OnIsPausedStateChange_bool_);
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    AndroidInGameMenu_MethodInfo__UnityEngine__Object__Instantiate<AndroidInGameMenu>_AndroidInGameMenu__UnityEngine__Transform__bool_
                   );
    func_?(&
                    ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                   );
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                   );
    func_?(&
                    TimeAttackFlagDebriefing_MethodInfo__UnityEngine__Object__Instantiate<TimeAttackFlagDebriefing>_TimeAttackFlagDebriefing__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__TouchInputMap);
    func_?(&MethodInfo__TouchPlayModeController__HideUI__);
    func_?(&MethodInfo__TouchPlayModeController__OnHideTimeAttackFlagCountDown__);
    func_?(&MethodInfo__TouchPlayModeController__OnIsPausedStateChange_bool_);
    func_?(&MethodInfo__TouchPlayModeController__OnShowTimeAttackFlagCountDown__);
    func_?(&MethodInfo__TouchPlayModeController__OnShowTimeAttackFlagDebriefing_int_);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  pCVar1 = (this->fields).chatBubbleController;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pCVar1 = (ChatBubbleController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pCVar1,pTVar2,0,
                      ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                     );
  (this->fields).chatBubbleController = pCVar1;
  func_?(&(this->fields).chatBubbleController,pCVar1);
  pGVar3 = (this->fields).stackBottom;
  pRVar4 = (this->fields).lobbyState;
  if (pGVar3 == (GameObject *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pRVar4 = (RectTransform *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pRVar4,pTVar2,0,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                       );
    (this->fields).lobbyState = pRVar4;
    func_?();
    pGVar3 = (this->fields).stackBottom;
    pAVar5 = (this->fields).inGameMenu;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pAVar5 = (AndroidInGameMenu *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pAVar5,pTVar2,0,
                        AndroidInGameMenu_MethodInfo__UnityEngine__Object__Instantiate<AndroidInGameMenu>_AndroidInGameMenu__UnityEngine__Transform__bool_
                       );
    (this->fields).inGameMenu = pAVar5;
    func_?();
    pAVar5 = (this->fields).inGameMenu;
    if (pAVar5 == (AndroidInGameMenu *)0x0) goto code_?;
    AndroidInGameMenu::AndroidInGameMenu_Initialize(pAVar5,(MethodInfo *)0x0);
    pAVar5 = (this->fields).inGameMenu;
    if (pAVar5 == (AndroidInGameMenu *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pAVar5,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    pGVar3 = (this->fields).stackBottom;
    pTVar6 = (this->fields).timeAttackFlagDebriefing;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pTVar6 = (TimeAttackFlagDebriefing *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pTVar6,pTVar2,0,
                        TimeAttackFlagDebriefing_MethodInfo__UnityEngine__Object__Instantiate<TimeAttackFlagDebriefing>_TimeAttackFlagDebriefing__UnityEngine__Transform__bool_
                       );
    (this->fields).timeAttackFlagDebriefing = pTVar6;
    func_?();
    pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
    a = (pFVar7->fields).OnFlagDebriefing;
    pUVar8 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar8,(Object *)this,
               MethodInfo__TouchPlayModeController__OnShowTimeAttackFlagDebriefing_int_,
               (MethodInfo *)0x0);
    puVar9 = &UNK_?;
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)pUVar8,(MethodInfo *)0x0);
    if (pDVar10 != (Delegate *)0x0) {
      iVar11 = func_?();
      if (iVar11 != 0) {
        *(int *)(puVar9 + 0x10) = iVar11;
        iVar11 = func_?();
        if (iVar11 == 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    *(undefined4 *)(puVar9 + 0x10) = 0;
code_?:
    func_?();
    pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
    pAVar12 = (pFVar7->fields).OnFlagCountDown;
    pNVar13 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar13,(Object *)this,
               MethodInfo__TouchPlayModeController__OnShowTimeAttackFlagCountDown__,
               (MethodInfo *)0x0);
    puVar9 = &UNK_?;
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
    if (pDVar10 == (Delegate *)0x0) {
      *(undefined4 *)(puVar9 + 0x14) = 0;
code_?:
      func_?();
      pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
      pAVar12 = (pFVar7->fields).OnFlagCountDownEnd;
      pNVar13 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar13,(Object *)this,
                 MethodInfo__TouchPlayModeController__OnHideTimeAttackFlagCountDown__,
                 (MethodInfo *)0x0);
      puVar9 = &UNK_?;
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
      if (pDVar10 == (Delegate *)0x0) {
        *(undefined4 *)(puVar9 + 0x1c) = 0;
      }
      else {
        pDVar14 = (Delegate *)0x0;
        if ((Action__Class *)pDVar10->klass == TypeInfo__System__Action) {
          pDVar14 = pDVar10;
        }
        if (pDVar14 == (Delegate *)0x0) goto code_?;
        *(Delegate **)(puVar9 + 0x1c) = pDVar14;
        pDVar14 = (Delegate *)0x0;
        if ((Action__Class *)pDVar10->klass == TypeInfo__System__Action) {
          pDVar14 = pDVar10;
        }
        if (pDVar14 == (Delegate *)0x0) goto code_?;
      }
      func_?();
      this_03 = (TouchInputMap *)func_?();
      TouchInputMap::TouchInputMap__ctor(this_03,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      func_?();
      this_00 = (this->fields).playModeControlsBase;
      if (this_00 == (PlayModeControlsBase *)0x0) goto code_?;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar2 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                (pTVar2,(MethodInfo *)0x0);
      this_01 = (this->fields).chatController;
      if (this_01 == (AndroidChatController *)0x0) goto code_?;
      AndroidChatController::AndroidChatController_Initialize(this_01,(MethodInfo *)0x0);
      this_02 = (this->fields).deathPromotionController;
      if (this_02 == (DeathPromotionController *)0x0) goto code_?;
      DeathPromotionController::DeathPromotionController_Initialize(this_02,(MethodInfo *)0x0);
      MVar15 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar15 == MVGameMode__Enum_Play) {
        (this->fields)._._IsInLobby_k__BackingField = 1;
        (*(code *)(this->klass->vtable).set_IsInPauseMenu_1.method)();
      }
      object = _UNK_?;
      a_00 = (this->fields)._._IsPausedStateChange_k__BackingField;
      pUVar8 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar8,object,MethodInfo__AndroidChatController__OnIsPausedStateChange_bool_,
                 (MethodInfo *)0x0);
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a_00,(Delegate *)pUVar8,(MethodInfo *)0x0);
      pDVar10 = (Delegate *)0x0;
      if (pDVar14 != (Delegate *)0x0) {
        pDVar10 = (Delegate *)func_?();
        if (pDVar10 == (Delegate *)0x0) goto code_?;
      }
      pDRam00000028 = pDVar10;
      func_?();
      pDVar10 = pDRam00000028;
      pUVar8 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar8,(Object *)0x0,
                 MethodInfo__TouchPlayModeController__OnIsPausedStateChange_bool_,(MethodInfo *)0x0)
      ;
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar10,(Delegate *)pUVar8,(MethodInfo *)0x0);
      pDVar10 = (Delegate *)0x0;
      if (pDVar14 != (Delegate *)0x0) {
        pDVar10 = (Delegate *)func_?();
        if (pDVar10 == (Delegate *)0x0) goto code_?;
      }
      pDRam00000028 = pDVar10;
      func_?();
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar12 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                          (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
      pNVar13 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar13,(Object *)0x0,MethodInfo__TouchPlayModeController__HideUI__,
                 (MethodInfo *)0x0);
      pAVar16 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
      pAVar12 = (Action *)0x0;
      if (pAVar16 == (Action *)0x0) {
code_?:
        ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                  (ChatCommand__Enum_HideAllUI,pAVar12,(MethodInfo *)0x0);
        return;
      }
      if (pAVar16->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar16;
      }
      if (pAVar12 != (Action *)0x0) goto code_?;
      goto code_?;
    }
    pDVar14 = (Delegate *)0x0;
    if ((Action__Class *)pDVar10->klass == TypeInfo__System__Action) {
      pDVar14 = pDVar10;
    }
    if (pDVar14 != (Delegate *)0x0) {
      *(Delegate **)(puVar9 + 0x14) = pDVar14;
      pDVar14 = (Delegate *)0x0;
      if ((Action__Class *)pDVar10->klass == TypeInfo__System__Action) {
        pDVar14 = pDVar10;
      }
      if (pDVar14 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void LeaveEditPlayMode() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_LeaveEditPlayMode
               (TouchPlayModeController *this,MethodInfo *method)

{
  bVar1 = ModeControllerBase::ModeControllerBase_CannotLeaveEditPlayMode
                    ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField = 1;
    this_00 = (this->fields).timeAttackFlagDebriefing;
    if (this_00 == (TimeAttackFlagDebriefing *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_EndDebriefingEarly(this_00,(MethodInfo *)0x0)
    ;
    if ((this->fields).OnLeaveEditPlayMode != (UnityAction *)0x0) {
      (*(((this->fields).OnLeaveEditPlayMode)->fields)._._.invoke_impl)();
    }
  }
  return;
}


/* Void LeavePlayMode() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_LeavePlayMode
               (TouchPlayModeController *this,MethodInfo *method)

{
  this_01 = (this->fields).timeAttackFlagDebriefing;
  if (this_01 != (TimeAttackFlagDebriefing *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 != (FlagDebriefingControl *)0x0) {
      if ((pFVar2->fields).OnFlagDebriefingEnd != (Action *)0x0) {
        (*(((pFVar2->fields).OnFlagDebriefingEnd)->fields)._._.invoke_impl)();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        func_?();
        (this_01->fields).isDebriefingOn = 0;
        (this_01->fields).isWaitingForStart = 0;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,0,(MethodInfo *)0x0);
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          this_00 = (this_01->fields).scoreBoardCanvasGroup;
          (this_01->fields).countdownEndTime = fVar3;
          if (this_00 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_00,0.0,(MethodInfo *)0x0);
            pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                               ((MethodInfo *)0x0);
            if (pFVar2 != (FlagDebriefingControl *)0x0) {
              fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              (pFVar2->fields).IsInFlagDebriefing = 0;
              (pFVar2->fields).RunStartTime = fVar3;
              if ((pFVar2->fields).OnFlagCountDownEnd != (Action *)0x0) {
                (*(((pFVar2->fields).OnFlagCountDownEnd)->fields)._._.invoke_impl)();
              }
              pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar4 != (GameEventManager *)0x0) &&
                 ((pGVar4->fields).AvatarCommandsPlayMode !=
                  (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                if (*(int *)(in_stack_5 + 0x14) != 0) {
                  (**(code **)(*(int *)(in_stack_5 + 0x14) + 0xc))();
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_OnDestroy
               (TouchPlayModeController *this,MethodInfo *method)

{
  MVGameControllerDesktop::MVGameControllerDesktop_UnregisterDesktopPlayModeController
            ((MethodInfo *)0x0);
  return;
}


/* Void OnHideTimeAttackFlagCountDown() */

void Assembly-CSharp.dll::TouchPlayModeController::
     TouchPlayModeController_OnHideTimeAttackFlagCountDown
               (TouchPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagDebriefing;
  if (this_00 != (TimeAttackFlagDebriefing *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnIsPausedStateChange(Boolean) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_OnIsPausedStateChange
               (TouchPlayModeController *this,bool isPaused,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagDebriefing;
  if ((this_00 == (TimeAttackFlagDebriefing *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
  goto code_?;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  this_01 = (this->fields).lobbyState;
  if (isPaused == 0) {
    if ((this_01 == (RectTransform *)0x0) ||
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pAVar3 = (this->fields).inGameMenu;
    if ((pAVar3 == (AndroidInGameMenu *)0x0) ||
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pAVar3,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pPVar4 = (this->fields).playModeControlsBase;
    if (pPVar4 == (PlayModeControlsBase *)0x0) goto code_?;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar4,(MethodInfo *)0x0);
  }
  else {
    if ((this_01 == (RectTransform *)0x0) ||
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pAVar3 = (this->fields).inGameMenu;
    if ((pAVar3 == (AndroidInGameMenu *)0x0) ||
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pAVar3,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pPVar4 = (this->fields).playModeControlsBase;
    if (pPVar4 == (PlayModeControlsBase *)0x0) goto code_?;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar4,(MethodInfo *)0x0);
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)();
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnShowTimeAttackFlagCountDown() */

void Assembly-CSharp.dll::TouchPlayModeController::
     TouchPlayModeController_OnShowTimeAttackFlagCountDown
               (TouchPlayModeController *this,MethodInfo *method)

{
  pTVar1 = (this->fields).timeAttackFlagDebriefing;
  if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
    TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_InitializeCountDown(pTVar1,(MethodInfo *)0x0)
    ;
    pTVar1 = (this->fields).timeAttackFlagDebriefing;
    if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        this_00 = (this->fields).lobbyState;
        if (this_00 != (RectTransform *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnShowTimeAttackFlagDebriefing(Int32) */

void Assembly-CSharp.dll::TouchPlayModeController::
     TouchPlayModeController_OnShowTimeAttackFlagDebriefing
               (TouchPlayModeController *this,int32_t captureTime,MethodInfo *method)

{
  pTVar1 = (this->fields).timeAttackFlagDebriefing;
  if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pTVar1 = (this->fields).timeAttackFlagDebriefing;
      if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
        TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Initialize(pTVar1,0,(MethodInfo *)0x0);
        this_00 = (this->fields).lobbyState;
        if (this_00 != (RectTransform *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            if (pcRam_? == (code *)0x0) {
              pcRam_? = (code *)func_?();
            }
            (*pcRam_?)();
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OpenInventoryAtItem(UIPushOption, AccessoryDataClient) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_OpenInventoryAtItem
               (TouchPlayModeController *this,UIPushOption__Enum pushOption,
               AccessoryDataClient *displayShopItems,MethodInfo *method)

{
  object = (this->fields).accessoryShopController;
  if (object == (AccessoryShopController *)0x0) {
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  (object->fields).accessoryDataToShow = displayShopItems;
  func_?(&(object->fields).accessoryDataToShow,displayShopItems);
  (object->fields).pushOption = pushOption;
  pUVar3 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)object,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar3 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
    pUVar4 = (UnityAction *)0x0;
code_?:
    pUStack5 = (UnityAction__Class *)pUVar4;
    func_?();
    AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
    return;
  }
  pUVar4 = (UnityAction *)0x0;
  if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar4 = pUVar3;
  }
  if (pUVar4 == (UnityAction *)0x0) {
    pUStack5 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
    pUStack5 = extraout_EDX;
  }
  else {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar4;
    pUVar4 = (UnityAction *)0x0;
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar4 = pUVar3;
    }
    pUStack5 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar4 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetPixelPerfect(Boolean) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_SetPixelPerfect
               (TouchPlayModeController *this,bool pixelPerfect,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields).canvas;
  if (pCVar2 != (Canvas *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)_pixelPerfect;
    pCStack_3 = pCVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetUIReady() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_SetUIReady
               (TouchPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    UIStack::UIStack_SetStackReady(this_00,(MethodInfo *)0x0);
    source = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__TouchPlayModeController__SetUIReady__,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar1 != (Delegate *)0x0) {
      pDVar2 = (Delegate *)0x0;
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        pDStack_3 = pDVar1;
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pFVar6 = (pMVar5->fields).firstFrameUpdateActorReady,
       pFVar6 != (FirstFrameUpdateActorReady *)0x0)) {
      (pFVar6->fields).callbacks = unaff_ESI;
      func_?();
      return;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowEUseIcon(ShowUseOption, Int32) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_ShowEUseIcon
               (TouchPlayModeController *this,ShowUseOption__Enum option,int32_t woId,
               MethodInfo *method)

{
  pPVar1 = (this->fields).playModeControlsBase;
  if ((pPVar1 != (PlayModeControlsBase *)0x0) &&
     (pSVar2 = (pPVar1->fields).useButtonLarge, pSVar2 != (ShowUse *)0x0)) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pSVar2 = (pPVar1->fields).useButtonLarge;
      if (pSVar2 != (ShowUse *)0x0) {
        (*(code *)(pSVar2->klass->vtable).__unknown.method)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

