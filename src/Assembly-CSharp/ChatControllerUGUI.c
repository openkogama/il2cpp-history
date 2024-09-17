
/* Void AddLine(String) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_AddLine
               (ChatControllerUGUI *this,String *text,MethodInfo *method)

{
  ChatControllerBase::ChatControllerBase_AddLine((ChatControllerBase *)this,text,(MethodInfo *)0x0);
  this_00 = (this->fields)._._ScrollRect_k__BackingField;
  if (this_00 != (ScrollRect *)0x0) {
    fVar1 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
            ScrollRect_get_verticalNormalizedPosition(this_00,(MethodInfo *)0x0);
    if (fVar1 == _UNK_?) {
code_?:
      ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
      MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar2 == MVGameMode__Enum_Play) {
        (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
      }
      return;
    }
    pVVar3 = (this->fields).textGroup;
    if (pVVar3 != (VerticalLayoutGroup *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pVVar3,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        pVVar3 = (this->fields).textGroup;
        if (pVVar3 != (VerticalLayoutGroup *)0x0) {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pVVar3,(MethodInfo *)0x0);
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            goto code_?;
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


/* Void ChatFocusChanged(Boolean) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged
               (ChatControllerUGUI *this,bool enterChatMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IEditModeUI);
    cRam_? = '\x01';
  }
  if (enterChatMode == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      bVar1 = 0;
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar2 == (IEditModeUI *)0x0) goto code_?;
      bVar1 = func_?(1,TypeInfo__IEditModeUI,pIVar2);
      bVar1 = bVar1 ^ 1;
    }
    pSVar3 = (this->fields)._._MessageController_k__BackingField;
    if (pSVar3 != (SendMessageControl *)0x0) {
      SendMessageControl::SendMessageControl_SetSayChatBubbleVisibleIfActive
                (pSVar3,0,(MethodInfo *)0x0);
      bVar4 = bVar1;
      if ((this->fields).currentlyInLobbyState == 0) {
        bVar4 = 1;
      }
      if (bVar4 == 0) {
code_?:
        (this->fields).shouldUpdateFade = 1;
        ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
        MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar5 == MVGameMode__Enum_Play) {
          (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
        }
        return;
      }
      pIVar6 = (this->fields).inputField;
      if (pIVar6 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_DeactivateInputField
                  (pIVar6,(MethodInfo *)0x0);
        pRVar7 = (this->fields).inputAreaDeactivated;
        if ((pRVar7 != (RectTransform *)0x0) &&
           (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar7,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,bVar1 ^ 1,(MethodInfo *)0x0);
          pRVar7 = (this->fields)._._InputAreaRoot_k__BackingField;
          if ((pRVar7 != (RectTransform *)0x0) &&
             (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar7,(MethodInfo *)0x0),
             pGVar8 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar8,0x51,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  else {
    pRVar7 = (this->fields)._._InputAreaRoot_k__BackingField;
    if ((pRVar7 != (RectTransform *)0x0) &&
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar7,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
      pRVar7 = (this->fields).inputAreaDeactivated;
      if ((pRVar7 != (RectTransform *)0x0) &&
         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar7,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,(this->fields)._.chatLocked,(MethodInfo *)0x0);
        pIVar6 = (this->fields).inputField;
        if (pIVar6 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_ActivateInputField
                    (pIVar6,(MethodInfo *)0x0);
          pSVar3 = (this->fields)._._MessageController_k__BackingField;
          if (pSVar3 != (SendMessageControl *)0x0) {
            SendMessageControl::SendMessageControl_SetSayChatBubbleVisibleIfActive
                      (pSVar3,1,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ChatHotkeyPressed() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ChatHotkeyPressed
               (ChatControllerUGUI *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inputField;
  if (pIVar1 != (InputField *)0x0) {
    if ((pIVar1->fields).m_AllowInput == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__NotificationController);
        cRam_? = '\x01';
      }
      if (((this->fields)._.promptRegisterForChat != 0) && ((this->fields)._.chatLocked != 0)) {
        (this->fields)._.promptRegisterForChat = 0;
        bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__NotificationController);
          }
          NotificationController::NotificationController_PushNotification_1
                    (NotificationType__Enum_RegisterToChat,NotificationLifetime__Enum_High,
                     (MethodInfo *)0x0);
        }
      }
      ChatControllerUGUI_ChatFocusChanged(this,1,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DoAwake() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_DoAwake
               (ChatControllerUGUI *this,MethodInfo *method)

{
  this_00 = (this->fields).inputAreaDeactivated;
  if (this_00 != (RectTransform *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).startTime = fVar1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoStart() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_DoStart
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ChatControllerUGUI__ChatFocusChanged_bool_);
    func_?(&MethodInfo__ChatControllerUGUI__ScrollbarChanged_UnityEngine__Vector2_);
    func_?(&
                    MethodInfo__ChatControllerUGUI___DoStart_b__13_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&MethodInfo__ChatControllerUGUI__WarnForSpam__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&
                    MethodInfo__UnityEngine__Events__UnityEvent<UnityEngine::Vector2>__AddListener_UnityEngine__Events__UnityAction<UnityEngine::Vector2>_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__ChatControllerUGUI___DoStart_b__13_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pSVar1 = (this->fields)._._MessageController_k__BackingField;
  if (pSVar1 == (SendMessageControl *)0x0) goto code_?;
  a = (pSVar1->fields).DoSend;
  this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_01,(Object *)this,MethodInfo__ChatControllerUGUI__ChatFocusChanged_bool_,
             (MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    _UNK_? = 0;
code_?:
    func_?();
    pSVar1 = (this->fields)._._MessageController_k__BackingField;
    if (pSVar1 == (SendMessageControl *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
    }
    else {
      a_00 = (pSVar1->fields).SpamWarning;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__ChatControllerUGUI__WarnForSpam__,
                 (MethodInfo *)0x0);
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a_00,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar2 == (Delegate *)0x0) {
code_?:
        func_?();
        pSVar1 = (this->fields)._._MessageController_k__BackingField;
        if (pSVar1 != (SendMessageControl *)0x0) {
          SendMessageControl::SendMessageControl_InitializeToSayChat(pSVar1,0,(MethodInfo *)0x0);
          pSVar3 = (this->fields)._._ScrollRect_k__BackingField;
          if (pSVar3 != (ScrollRect *)0x0) {
            this_00 = (UnityEvent_1_UnityEngine_Vector2_ *)(pSVar3->fields).m_OnValueChanged;
            this_03 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
            UnityAction_1_UnityEngine_Vector2___ctor
                      (this_03,(Object *)this,
                       MethodInfo__ChatControllerUGUI__ScrollbarChanged_UnityEngine__Vector2_,
                       (MethodInfo *)0x0);
            if (this_00 != (UnityEvent_1_UnityEngine_Vector2_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]::
              UnityEvent_1_UnityEngine_Vector2__AddListener
                        (this_00,this_03,
                         MethodInfo__UnityEngine__Events__UnityEvent<UnityEngine::Vector2>__AddListener_UnityEngine__Events__UnityAction<UnityEngine::Vector2>_
                        );
              return;
            }
          }
        }
        goto code_?;
      }
      pDVar4 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar4 = pDVar2;
      }
      if (pDVar4 != (Delegate *)0x0) {
        pDVar4 = (Delegate *)0x0;
        if ((UnityAction__Class *)pDVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar4 = pDVar2;
        }
        if (pDVar4 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
    func_?();
  }
  else {
    iVar5 = func_?();
    if (iVar5 == 0) goto code_?;
    _UNK_? = iVar5;
    iVar5 = func_?();
    if (iVar5 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_Initialize
               (ChatControllerUGUI *this,MethodInfo *method)

{
  (this->fields).waitForLocalPlayerReady = 1;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        ChatControllerUGUI_InitializeReady(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeReady() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_InitializeReady
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    cRam_? = '\x01';
  }
  (this->fields).waitForLocalPlayerReady = 0;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
              (this_01,(MethodInfo *)0x0);
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    ChatControllerUGUI_ChatFocusChanged(this,MVar1 != MVGameMode__Enum_Edit,(MethodInfo *)0x0);
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 == MVGameMode__Enum_Play) {
      pIVar2 = (this->fields).inputField;
      (this->fields).shouldUpdateFade = 0;
      if (pIVar2 == (InputField *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_ActivateInputField
                (pIVar2,(MethodInfo *)0x0);
    }
    (*(code *)(this->klass->vtable).UpdateLockedState.method)();
    (this->fields).currentlyInLobbyState = 1;
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 != MVGameMode__Enum_Edit) {
code_?:
      pAVar3 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
      this_02 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar3,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
             (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
        func_?();
        return;
      }
      pAVar3 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
               func_?();
      if (pAVar3 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
                    )0x0) {
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar3;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
      }
      goto code_?;
    }
    pIVar2 = (this->fields).inputField;
    if (pIVar2 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_DeactivateInputField
                (pIVar2,(MethodInfo *)0x0);
      this_00 = (this->fields)._._MessageController_k__BackingField;
      if (this_00 != (SendMessageControl *)0x0) {
        SendMessageControl::SendMessageControl_SetSayChatBubbleVisibleIfActive
                  (this_00,0,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_OnEnable
               (ChatControllerUGUI *this,MethodInfo *method)

{
  (this->fields).shouldUpdateFade = 1;
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  pCVar2 = (this->fields).canvasGroup;
  if (pCVar2 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar2,1.0,(MethodInfo *)0x0);
    (this->fields).currFade = 0.0;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pCVar2 = (this->fields).canvasGroup;
    (this->fields).startTime = fVar3;
    if (pCVar2 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                (pCVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnLobbyStateChange(Boolean) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_OnLobbyStateChange
               (ChatControllerUGUI *this,bool cursorLocked,MethodInfo *method)

{
  (this->fields).currentlyInLobbyState = cursorLocked ^ 1;
  ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
  (this->fields).shouldUpdateFade = cursorLocked;
  ChatControllerUGUI_ChatFocusChanged(this,0,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_01 != (MVLocalPlayer *)0x0) {
    bVar1 = MVLocalPlayer::MVLocalPlayer_get_IsChatLocked(this_01,(MethodInfo *)0x0);
    pRVar2 = (this->fields)._._InputAreaRoot_k__BackingField;
    value = 0;
    if (bVar1 == 0) {
      value = cursorLocked ^ 1;
    }
    if (pRVar2 != (RectTransform *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar2,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,value,(MethodInfo *)0x0);
        pRVar2 = (this->fields).inputAreaDeactivated;
        if (pRVar2 != (RectTransform *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,value ^ 1,(MethodInfo *)0x0);
            this_00 = (this->fields)._._ScrollRect_k__BackingField;
            if (this_00 != (ScrollRect *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
              ScrollRect_SetVerticalNormalizedPosition(this_00,0.0,(MethodInfo *)0x0);
              return;
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


/* Void ScrollbarChanged(Vector2) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ScrollbarChanged
               (ChatControllerUGUI *this,Vector2 value,MethodInfo *method)

{
  (this->fields).shouldUpdateFade = 1;
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Play) {
    (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
  }
  ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
  return;
}


/* Void SubscribeToMessages() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_SubscribeToMessages
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ChatControllerBase__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__ChatControllerBase__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMStack2 =
       (MVGameControllerBase_OnReceivedGameMsgDelegate *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMStack2 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
code_?:
    func_?();
    return;
  }
  pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
  if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
    pMVar1 = pMStack2;
  }
  if (pMVar1 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
    func_?();
    pMStack2 = extraout_ECX;
    pMStack3 = extraout_EDX;
  }
  else {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar1;
    pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar1 = pMStack2;
    }
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
    if (pMVar1 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_Update
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if ((this->fields).waitForLocalPlayerReady == 0) {
    pIVar1 = (this->fields).inputField;
    if (pIVar1 != (InputField *)0x0) {
      if ((pIVar1->fields).m_AllowInput != 0) {
        ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
      }
      if (((this->fields).shouldUpdateFade != 0) &&
         (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
         _UNK_? <= fVar2 - (this->fields).startTime)) {
        fVar2 = (this->fields).currFade;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        fVar4 = _UNK_?;
        fVar3 = fVar3 + fVar2;
        pCVar5 = (this->fields).canvasGroup;
        (this->fields).currFade = fVar3;
        if (fVar3 < 0.0) {
          fVar3 = 0.0;
        }
        else if (fVar4 < fVar3) {
          fVar3 = fVar4;
        }
        if (pCVar5 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar5,fVar3 * _UNK_? + fVar4,(MethodInfo *)0x0);
        if (_UNK_? <= (this->fields).currFade) {
          pCVar5 = (this->fields).canvasGroup;
          (this->fields).shouldUpdateFade = 0;
          if (pCVar5 == (CanvasGroup *)0x0) goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                    (pCVar5,0,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
  else {
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar6 != (MVNetworkGame *)0x0) &&
       (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
       pMVar7 != (MVLocalPlayer *)0x0)) {
      bVar8 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar7,(MethodInfo *)0x0);
      if (bVar8 != 0) {
code_?:
        ChatControllerUGUI_InitializeReady(this,(MethodInfo *)0x0);
        return;
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar6 != (MVNetworkGame *)0x0) &&
         (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
         pMVar7 != (MVLocalPlayer *)0x0)) {
        bVar8 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(pMVar7,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          return;
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar6 != (MVNetworkGame *)0x0) &&
           (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
           pMVar7 != (MVLocalPlayer *)0x0)) {
          if ((pMVar7->fields)._.playerState != 3) {
            return;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateFadeTime() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime
               (ChatControllerUGUI *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  pCVar2 = (this->fields).canvasGroup;
  if (pCVar2 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar2,1.0,(MethodInfo *)0x0);
    (this->fields).currFade = 0.0;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pCVar2 = (this->fields).canvasGroup;
    (this->fields).startTime = fVar3;
    if (pCVar2 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                (pCVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateLockedState() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_UpdateLockedState
               (ChatControllerUGUI *this,MethodInfo *method)

{
  pRVar1 = (this->fields)._._InputAreaRoot_k__BackingField;
  if (pRVar1 != (RectTransform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
      this_00 = (this->fields)._._EnterChatButton_k__BackingField;
      if (this_00 != (ConsoleDragAndTapHandler *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
          pRVar1 = (this->fields).inputAreaDeactivated;
          if (pRVar1 != (RectTransform *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar1,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,(this->fields)._.chatLocked,(MethodInfo *)0x0);
              return;
            }
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


/* Void WarnForSpam() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_WarnForSpam
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Warning__You_are_sending_too_man);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Warning__You_are_sending_too_man,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).AddLine.method)(this,pSVar1,this->klass[1]._0.image);
  return;
}


/* Void <DoStart>b__13_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI__DoStart_b__13_0
               (ChatControllerUGUI *this,IShortcutKeyRegister *x,BaseEventData *_,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ChatControllerUGUI__ChatHotkeyPressed__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__ChatControllerUGUI__ChatHotkeyPressed__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,0xf);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ChatControllerUGUI() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI__ctor
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.warningColor.r = _UNK_?;
  (this->fields)._.warningColor.g = fVar3;
  (this->fields)._.warningColor.b = fVar2;
  (this->fields)._.warningColor.a = fVar1;
  this_00 = (Queue_1_UnityEngine_UI_Text_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
  System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::Object]::
  ReadOnlyCollectionBuilder_1_System_Object___ctor
            ((ReadOnlyCollectionBuilder_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__);
  (this->fields)._.lines = this_00;
  func_?(&(this->fields)._.lines,this_00);
  (this->fields)._.promptRegisterForChat = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

