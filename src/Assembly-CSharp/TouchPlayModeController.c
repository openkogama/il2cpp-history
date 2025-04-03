
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


/* Void ActivateLobbyState() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_ActivateLobbyState
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
    func_?(&MethodInfo__TouchPlayModeController__SetUIReady__);
    cRam_? = '\x01';
  }
  ResolutionManager::ResolutionManager_Init((this->fields).canvasScaler,(MethodInfo *)0x0);
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
        if (pAVar5 == (Action *)0x0) {
code_?:
          MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                    (pAVar3,(MethodInfo *)0x0);
          TouchPlayModeController_CreateCanvasGUITemp(this,(MethodInfo *)0x0);
          return;
        }
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar5;
        }
        if (pAVar3 != (Action *)0x0) goto code_?;
        goto code_?;
      }
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pUVar1 = (this->fields).uiStack;
      if (pUVar1 != (UIStack *)0x0) {
        (pUVar1->fields).stackReady = 1;
        UIStack::UIStack_UpdateStack(pUVar1,(MethodInfo *)0x0);
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
          if (pAVar3 == (Action *)0x0) goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).chatController;
  ppAVar2 = &(this->fields).chatController;
  pGVar3 = (this->fields).stackBottom;
  if (pGVar3 != (GameObject *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pAVar1 = (AndroidChatController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pAVar1,pTVar4,0,
                        AndroidChatController_MethodInfo__UnityEngine__Object__Instantiate<AndroidChatController>_AndroidChatController__UnityEngine__Transform__bool_
                       );
    *ppAVar2 = pAVar1;
    func_?(ppAVar2,pAVar1);
    pGVar3 = (this->fields).stackBottom;
    original = (this->fields).playMode3DControllerPrefab;
    if (pGVar3 != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      pPVar5 = (PlayModeControlsBase *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)original,pTVar4,0,
                          PlayMode3DController_MethodInfo__UnityEngine__Object__Instantiate<PlayMode3DController>_PlayMode3DController__UnityEngine__Transform__bool_
                         );
      ppPVar6 = &(this->fields).playModeControlsBase;
      *ppPVar6 = pPVar5;
      func_?(ppPVar6,pPVar5);
      if (*ppPVar6 != (PlayModeControlsBase *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)*ppPVar6,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pGVar3 = (this->fields).stackBottom;
          ppRVar7 = &(this->fields).playerListButton;
          pRVar8 = *ppRVar7;
          if (pGVar3 != (GameObject *)0x0) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar3,(MethodInfo *)0x0);
            pRVar8 = (RectTransform *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                               ((Object *)pRVar8,pTVar4,0,
                                UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                               );
            *ppRVar7 = pRVar8;
            func_?(ppRVar7,pRVar8);
            pGVar3 = (this->fields).stackBottom;
            original_00 = (this->fields).notificationManager;
            if (pGVar3 != (GameObject *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar3,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)original_00,pTVar4,0,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                        );
              return;
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


/* Void DeActivateLobbyState() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_DeActivateLobbyState
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


/* IGUICrossHair GetCrossHair() */

IGUICrossHair *
Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_GetCrossHair
          (TouchPlayModeController *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pPVar2 = (this->fields).playModeControlsBase;
  if (pPVar2 != (PlayModeControlsBase *)0x0) {
    return (IGUICrossHair *)(pPVar2->fields).crossHair;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pIVar6 = (IGUICrossHair *)(*pcVar5)();
  return pIVar6;
}


/* Void HideEUseIcon() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_HideEUseIcon
               (TouchPlayModeController *this,MethodInfo *method)

{
  pPVar1 = (this->fields).playModeControlsBase;
  if (pPVar1 != (PlayModeControlsBase *)0x0) {
    pJVar2 = (pPVar1->fields).joystickControllerStack;
    if (pJVar2 != (JoystickControllerStack *)0x0) {
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (pJVar2->fields).controls;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        if ((this_00->fields)._size != 0) {
          RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,(this_00->fields)._size + -1,
                             MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                            );
          if ((RVar3 == (RegexCharClass_SingleRange)0x0) ||
             (piVar4 = *(int **)((int)RVar3 + 0x18), piVar4 == (int *)0x0)) goto code_?;
          (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
        }
        (*(code *)(pPVar1->klass->vtable).SetUseButtonVisible.method)
                  (pPVar1,0,0,0,pPVar1->klass[1]._0.image);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(&MethodInfo__AndroidChatController__OnLobbyStateChange_bool_);
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
    func_?(&MethodInfo__TouchPlayModeController__LobbyStateChange_bool_);
    func_?(&MethodInfo__TouchPlayModeController__OnHideTimeAttackFlagCountDown__);
    func_?(&MethodInfo__TouchPlayModeController__OnShowTimeAttackFlagCountDown__);
    func_?(&MethodInfo__TouchPlayModeController__OnShowTimeAttackFlagDebriefing_int_);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  pCVar1 = (this->fields).chatBubbleController;
  ppCVar2 = &(this->fields).chatBubbleController;
  parent = (Object_1__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    parent = TypeInfo__UnityEngine__Object;
    func_?();
  }
  pCVar1 = (ChatBubbleController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pCVar1,(Transform *)parent,0,
                      ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                     );
  *ppCVar2 = pCVar1;
  func_?(ppCVar2,pCVar1);
  pGVar3 = (this->fields).stackBottom;
  ppRVar4 = &(this->fields).lobbyState;
  pRVar5 = *ppRVar4;
  if (pGVar3 == (GameObject *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
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
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pRVar5 = (RectTransform *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pRVar5,pTVar6,0,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                       );
    *ppRVar4 = pRVar5;
    func_?();
    pGVar3 = (this->fields).stackBottom;
    ppAVar7 = &(this->fields).inGameMenu;
    pAVar8 = *ppAVar7;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pAVar8 = (AndroidInGameMenu *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pAVar8,pTVar6,0,
                        AndroidInGameMenu_MethodInfo__UnityEngine__Object__Instantiate<AndroidInGameMenu>_AndroidInGameMenu__UnityEngine__Transform__bool_
                       );
    *ppAVar7 = pAVar8;
    func_?();
    if (*ppAVar7 == (AndroidInGameMenu *)0x0) goto code_?;
    AndroidInGameMenu::AndroidInGameMenu_Initialize(*ppAVar7,(MethodInfo *)0x0);
    if (*ppAVar7 == (AndroidInGameMenu *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)*ppAVar7,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    pGVar3 = (this->fields).stackBottom;
    ppTVar9 = &(this->fields).timeAttackFlagDebriefing;
    pTVar10 = *ppTVar9;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pTVar10 = (TimeAttackFlagDebriefing *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)pTVar10,pTVar6,0,
                         TimeAttackFlagDebriefing_MethodInfo__UnityEngine__Object__Instantiate<TimeAttackFlagDebriefing>_TimeAttackFlagDebriefing__UnityEngine__Transform__bool_
                        );
    *ppTVar9 = pTVar10;
    func_?();
    pFVar11 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                        ((MethodInfo *)0x0);
    if (pFVar11 == (FlagDebriefingControl *)0x0) goto code_?;
    a = (pFVar11->fields).OnFlagDebriefing;
    pUVar12 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar12,(Object *)this,
               MethodInfo__TouchPlayModeController__OnShowTimeAttackFlagDebriefing_int_,
               (MethodInfo *)0x0);
    puVar13 = &UNK_?;
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)pUVar12,(MethodInfo *)0x0);
    if (pDVar14 != (Delegate *)0x0) {
      iVar15 = func_?();
      if (iVar15 != 0) {
        *(int *)(puVar13 + 0x10) = iVar15;
        iVar15 = func_?();
        if (iVar15 == 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    *(undefined4 *)(puVar13 + 0x10) = 0;
code_?:
    func_?();
    pFVar11 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                        ((MethodInfo *)0x0);
    if (pFVar11 == (FlagDebriefingControl *)0x0) goto code_?;
    pAVar16 = (pFVar11->fields).OnFlagCountDown;
    pNVar17 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar17,(Object *)this,
               MethodInfo__TouchPlayModeController__OnShowTimeAttackFlagCountDown__,
               (MethodInfo *)0x0);
    puVar13 = &UNK_?;
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar16,(Delegate *)pNVar17,(MethodInfo *)0x0);
    if (pDVar14 == (Delegate *)0x0) {
      *(undefined4 *)(puVar13 + 0x14) = 0;
code_?:
      func_?();
      pFVar11 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      if (pFVar11 == (FlagDebriefingControl *)0x0) goto code_?;
      pAVar16 = (pFVar11->fields).OnFlagCountDownEnd;
      pNVar17 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar17,(Object *)this,
                 MethodInfo__TouchPlayModeController__OnHideTimeAttackFlagCountDown__,
                 (MethodInfo *)0x0);
      puVar13 = &UNK_?;
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar16,(Delegate *)pNVar17,(MethodInfo *)0x0);
      if (pDVar14 == (Delegate *)0x0) {
        *(undefined4 *)(puVar13 + 0x1c) = 0;
      }
      else {
        pDVar18 = (Delegate *)0x0;
        if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
          pDVar18 = pDVar14;
        }
        if (pDVar18 == (Delegate *)0x0) goto code_?;
        *(Delegate **)(puVar13 + 0x1c) = pDVar18;
        pDVar18 = (Delegate *)0x0;
        if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
          pDVar18 = pDVar14;
        }
        if (pDVar18 == (Delegate *)0x0) goto code_?;
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
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar6 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                (pTVar6,(MethodInfo *)0x0);
      this_01 = (this->fields).chatController;
      if (this_01 == (AndroidChatController *)0x0) goto code_?;
      AndroidChatController::AndroidChatController_Initialize(this_01,(MethodInfo *)0x0);
      this_02 = (this->fields).deathPromotionController;
      if (this_02 == (DeathPromotionController *)0x0) goto code_?;
      DeathPromotionController::DeathPromotionController_Initialize(this_02,(MethodInfo *)0x0);
      pRVar5 = (this->fields).playerListButton;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pRVar5,(MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      MVar19 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar19 == MVGameMode__Enum_Play) {
        (this->fields)._._IsInLobby_k__BackingField = 1;
        (*(code *)(this->klass->vtable).set_IsInPauseMenu_1.method)();
      }
      object = _UNK_?;
      a_00 = (this->fields).OnLobbyStateChange;
      pUVar12 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar12,object,MethodInfo__AndroidChatController__OnLobbyStateChange_bool_,
                 (MethodInfo *)0x0);
      piVar20 = (int *)&UNK_?;
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a_00,(Delegate *)pUVar12,(MethodInfo *)0x0);
      if (pDVar14 == (Delegate *)0x0) {
        *piVar20 = 0;
code_?:
        func_?();
        pDVar14 = (Delegate *)*piVar20;
        pUVar12 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar12,(Object *)0x0,MethodInfo__TouchPlayModeController__LobbyStateChange_bool_
                   ,(MethodInfo *)0x0);
        pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar14,(Delegate *)pUVar12,(MethodInfo *)0x0);
        if (pDVar14 == (Delegate *)0x0) {
          iRam_? = 0;
code_?:
          func_?();
          if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pAVar16 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                              (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
          pNVar17 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar17,(Object *)0x0,MethodInfo__TouchPlayModeController__HideUI__,
                     (MethodInfo *)0x0);
          pAVar21 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar16,(Delegate *)pNVar17,(MethodInfo *)0x0);
          pAVar16 = (Action *)0x0;
          if (pAVar21 == (Action *)0x0) {
code_?:
            ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                      (ChatCommand__Enum_HideAllUI,pAVar16,(MethodInfo *)0x0);
            return;
          }
          if (pAVar21->klass == TypeInfo__System__Action) {
            pAVar16 = pAVar21;
          }
          if (pAVar16 != (Action *)0x0) goto code_?;
          goto code_?;
        }
        iVar15 = func_?();
        if (iVar15 != 0) {
          iRam_? = iVar15;
          iVar15 = func_?();
          if (iVar15 != 0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      iVar15 = func_?();
      if (iVar15 != 0) {
        *piVar20 = iVar15;
        iVar15 = func_?();
        if (iVar15 != 0) goto code_?;
      }
      goto code_?;
    }
    pDVar18 = (Delegate *)0x0;
    if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
      pDVar18 = pDVar14;
    }
    if (pDVar18 != (Delegate *)0x0) {
      *(Delegate **)(puVar13 + 0x14) = pDVar18;
      pDVar18 = (Delegate *)0x0;
      if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
        pDVar18 = pDVar14;
      }
      if (pDVar18 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
    pUVar3 = (this->fields).OnLeaveEditPlayMode;
    if (pUVar3 != (UnityAction *)0x0) {
      (*(pUVar3->fields)._._.invoke_impl)();
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
      pAVar3 = (pFVar2->fields).OnFlagDebriefingEnd;
      if (pAVar3 != (Action *)0x0) {
        (*(pAVar3->fields)._._.invoke_impl)();
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
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          this_00 = (this_01->fields).scoreBoardCanvasGroup;
          (this_01->fields).countdownEndTime = fVar4;
          if (this_00 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_00,0.0,(MethodInfo *)0x0);
            pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                               ((MethodInfo *)0x0);
            if (pFVar2 != (FlagDebriefingControl *)0x0) {
              fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              pAVar3 = (pFVar2->fields).OnFlagCountDownEnd;
              (pFVar2->fields).IsInFlagDebriefing = 0;
              (pFVar2->fields).RunStartTime = fVar4;
              if (pAVar3 != (Action *)0x0) {
                (*(pAVar3->fields)._._.invoke_impl)();
              }
              pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar5 != (GameEventManager *)0x0) &&
                 ((pGVar5->fields).AvatarCommandsPlayMode !=
                  (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                if (*(int *)(in_stack_6 + 0x14) != 0) {
                  (**(code **)(*(int *)(in_stack_6 + 0x14) + 0xc))();
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar7 = func_?(&stack0xfffffff0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void LobbyStateChange(Boolean) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_LobbyStateChange
               (TouchPlayModeController *this,bool inLobbyState,MethodInfo *method)

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
  if (inLobbyState == 0) {
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
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_01 = (this->fields).playerListButton;
      if (this_01 != (RectTransform *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
        pRVar3 = (this->fields).lobbyState;
        if (pRVar3 != (RectTransform *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar3,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            pRVar3 = (this->fields).playerListButton;
            if (pRVar3 != (RectTransform *)0x0) {
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar3,(MethodInfo *)0x0);
              if (pGVar2 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
        pRVar3 = (this->fields).lobbyState;
        if (pRVar3 != (RectTransform *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar3,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            pRVar3 = (this->fields).playerListButton;
            if (pRVar3 != (RectTransform *)0x0) {
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar3,(MethodInfo *)0x0);
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
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  ppAVar3 = &(object->fields).accessoryDataToShow;
  *ppAVar3 = displayShopItems;
  func_?(ppAVar3,displayShopItems);
  (object->fields).pushOption = pushOption;
  pUVar4 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)object,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar4 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar4 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
    pUVar5 = (UnityAction *)0x0;
code_?:
    pUStack6 = (UnityAction__Class *)pUVar5;
    func_?();
    AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
    return;
  }
  pUVar5 = (UnityAction *)0x0;
  if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar5 = pUVar4;
  }
  if (pUVar5 == (UnityAction *)0x0) {
    pUStack6 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
    pUStack6 = extraout_EDX;
  }
  else {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar5;
    pUVar5 = (UnityAction *)0x0;
    if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar5 = pUVar4;
    }
    pUStack6 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar5 != (UnityAction *)0x0) goto code_?;
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
    (this_00->fields).stackReady = 1;
    UIStack::UIStack_UpdateStack(this_00,(MethodInfo *)0x0);
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
  if (pPVar1 != (PlayModeControlsBase *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Nullable<ShowUseOption>__Nullable_ShowUseOption_);
      cRam_? = '\x01';
    }
    pJVar2 = (pPVar1->fields).joystickControllerStack;
    if (pJVar2 != (JoystickControllerStack *)0x0) {
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (pJVar2->fields).controls;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        if ((this_00->fields)._size != 0) {
          RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,(this_00->fields)._size + -1,
                             MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                            );
          if ((RVar3 == (RegexCharClass_SingleRange)0x0) ||
             (piVar4 = *(int **)((int)RVar3 + 0x18), piVar4 == (int *)0x0)) goto code_?;
          NStack_5._0_4_ = *(undefined4 *)(*piVar4 + 0xe4);
          (**(code **)(*piVar4 + 0xe0))(piVar4,option);
        }
        NStack_5.hasValue = 0;
        NStack_5._1_3_ = 0;
        NStack_5.value = 0;
        mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                  (&NStack_5,option,
                   MethodInfo__System__Nullable<ShowUseOption>__Nullable_ShowUseOption_);
        (*(code *)(pPVar1->klass->vtable).SetUseButtonVisible.method)
                  (pPVar1,1,NStack_5._0_4_,NStack_5.value,pPVar1->klass[1]._0.image);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* TouchPlayModeController() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController__ctor
               (TouchPlayModeController *this,MethodInfo *method)

{
  (this->fields).inLobbyState = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void set_IsInPauseMenu(Boolean) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_set_IsInPauseMenu
               (TouchPlayModeController *this,bool value,MethodInfo *method)

{
  (this->fields).inLobbyState = value;
  pAVar1 = (this->fields).OnLobbyStateChange;
  if (pAVar1 != (Action_1_Boolean_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,_value,(pAVar1->fields)._._.method);
  }
  return;
}

