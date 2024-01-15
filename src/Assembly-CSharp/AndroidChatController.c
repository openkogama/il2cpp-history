
/* Void Initialize() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_Initialize
               (AndroidChatController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&MethodInfo__AndroidChatController__OnChatModeTapped__);
    func_?(&
                    MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__ChatControllerBase__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&
                    ChatConsoleModes_MethodInfo__UnityEngine__Object__Instantiate<ChatConsoleModes>_ChatConsoleModes__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
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
  pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMVar1 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    pMVar2 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar2;
      pMVar2 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
      if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
        pMVar2 = pMVar1;
      }
      if (pMVar2 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
    goto code_?;
  }
  TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
       (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
code_?:
  func_?();
  pCVar3 = (this->fields)._._EnterChatButton_k__BackingField;
  if (pCVar3 != (ConsoleDragAndTapHandler *)0x0) {
    a = (pCVar3->fields).OnClick;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__AndroidChatController__OnChatModeTapped__,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (a->fields)._._.m_target = (Object *)0x0;
code_?:
      func_?();
      pAVar5 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
      this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_02,(Object *)this,
                 MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
             (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
        func_?();
        pCVar6 = (this->fields).chatConsoleModes;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar7,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar6 = (ChatConsoleModes *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                             ((Object *)pCVar6,pTVar7,0,
                              ChatConsoleModes_MethodInfo__UnityEngine__Object__Instantiate<ChatConsoleModes>_ChatConsoleModes__UnityEngine__Transform__bool_
                             );
          (this->fields).chatConsoleModes = pCVar6;
          func_?();
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar7,(MethodInfo *)0x0);
            pCVar6 = (this->fields).chatConsoleModes;
            if (pCVar6 != (ChatConsoleModes *)0x0) {
              ChatConsoleModes::ChatConsoleModes_Set
                        (pCVar6,ChatConsoleMode__Enum_ChatLobbyMode,&(this->fields).rectTransform,
                         (MethodInfo *)0x0);
              (*(code *)(this->klass->vtable).UpdateLockedState.method)();
              AndroidChatController_SetMode
                        (this,ChatConsoleMode__Enum_ChatLobbyMode,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      pAVar5 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
               func_?();
      if (pAVar5 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
                    )0x0) {
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar5;
        iVar8 = func_?();
        if (iVar8 != 0) goto code_?;
      }
code_?:
      func_?();
code_?:
      func_?();
    }
    else {
      pDVar9 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar9 = pDVar4;
      }
      if (pDVar9 != (Delegate *)0x0) {
        (a->fields)._._.m_target = (Object *)pDVar9;
        pDVar9 = (Delegate *)0x0;
        if ((UnityAction__Class *)pDVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar9 = pDVar4;
        }
        if (pDVar9 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnChatModeTapped() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnChatModeTapped
               (AndroidChatController *this,MethodInfo *method)

{
  pCVar1 = (this->fields).chatConsoleModes;
  if (pCVar1 != (ChatConsoleModes *)0x0) {
    if ((pCVar1->fields).chatConsoleMode != 1) {
      if ((pCVar1->fields).chatConsoleMode == 2) {
        AndroidChatController_SetMode(this,ChatConsoleMode__Enum_ChatPlayMode,(MethodInfo *)0x0);
      }
      return;
    }
    pCVar2 = (this->fields)._._EnterChatButton_k__BackingField;
    if (pCVar2 != (ConsoleDragAndTapHandler *)0x0) {
      (pCVar2->fields).scrollingEnabled = 0;
      pRVar3 = (this->fields)._._InputAreaRoot_k__BackingField;
      if (pRVar3 != (RectTransform *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar3,(MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          pRVar3 = (this->fields).minimizeChat;
          if (pRVar3 != (RectTransform *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar3,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0,(MethodInfo *)0x0);
              pRVar3 = (this->fields).expandChat;
              if (pRVar3 != (RectTransform *)0x0) {
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar3,(MethodInfo *)0x0);
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,1,(MethodInfo *)0x0);
                  pCVar1 = (this->fields).chatConsoleModes;
                  if (pCVar1 != (ChatConsoleModes *)0x0) {
                    ChatConsoleModes::ChatConsoleModes_Set
                              (pCVar1,ChatConsoleMode__Enum_PlayMode,&(this->fields).rectTransform,
                               (MethodInfo *)0x0);
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
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnLobbyStateChange(Boolean) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnLobbyStateChange
               (AndroidChatController *this,bool inLobbyState,MethodInfo *method)

{
  pCVar1 = (this->fields).chatConsoleModes;
  if (pCVar1 != (ChatConsoleModes *)0x0) {
    if (((pCVar1->fields).chatConsoleMode != 0) || (inLobbyState != 0)) {
      AndroidChatController_SetMode(this,ChatConsoleMode__Enum_ChatLobbyMode,(MethodInfo *)0x0);
      return;
    }
    pCVar2 = (this->fields)._._EnterChatButton_k__BackingField;
    if (pCVar2 != (ConsoleDragAndTapHandler *)0x0) {
      (pCVar2->fields).scrollingEnabled = 0;
      pRVar3 = (this->fields)._._InputAreaRoot_k__BackingField;
      if ((pRVar3 != (RectTransform *)0x0) &&
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        pRVar3 = (this->fields).minimizeChat;
        if ((pRVar3 != (RectTransform *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          pRVar3 = (this->fields).expandChat;
          if ((pRVar3 != (RectTransform *)0x0) &&
             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar3,(MethodInfo *)0x0),
             pGVar4 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            pCVar1 = (this->fields).chatConsoleModes;
            if (pCVar1 != (ChatConsoleModes *)0x0) {
              ChatConsoleModes::ChatConsoleModes_Set
                        (pCVar1,ChatConsoleMode__Enum_PlayMode,&(this->fields).rectTransform,
                         (MethodInfo *)0x0);
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
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMode(ChatConsoleMode) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_SetMode
               (AndroidChatController *this,ChatConsoleMode__Enum chatConsoleMode,MethodInfo *method
               )

{
  if (chatConsoleMode == ChatConsoleMode__Enum_ChatLobbyMode) {
    pCVar1 = (this->fields)._._EnterChatButton_k__BackingField;
    if (pCVar1 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
    (pCVar1->fields).scrollingEnabled = 1;
    pRVar2 = (this->fields)._._InputAreaRoot_k__BackingField;
    if ((pRVar2 == (RectTransform *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
    pRVar2 = (this->fields).minimizeChat;
    if (pRVar2 == (RectTransform *)0x0) goto code_?;
    chatConsoleMode = ChatConsoleMode__Enum_ChatLobbyMode;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar2,(MethodInfo *)0x0);
joined_?:
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,in_stack_4,in_stack_5);
    pRVar2 = (this->fields).expandChat;
    if ((pRVar2 == (RectTransform *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    method_00 = (MethodInfo *)0x0;
    value = 0;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,value,method_00);
  }
  else {
    if (chatConsoleMode == ChatConsoleMode__Enum_ChatPlayMode) {
      pCVar1 = (this->fields)._._EnterChatButton_k__BackingField;
      if (pCVar1 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
      (pCVar1->fields).scrollingEnabled = 1;
      ChatControllerBase::ChatControllerBase_PromptRegisterForChatIfApplicable
                ((ChatControllerBase *)this,(MethodInfo *)0x0);
      pRVar2 = (this->fields)._._InputAreaRoot_k__BackingField;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).minimizeChat;
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      chatConsoleMode = (ChatConsoleMode__Enum)&UNK_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar2,(MethodInfo *)0x0);
      goto joined_?;
    }
    if (chatConsoleMode == ChatConsoleMode__Enum_PlayMode) {
      pCVar1 = (this->fields)._._EnterChatButton_k__BackingField;
      if (pCVar1 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
      (pCVar1->fields).scrollingEnabled = 0;
      pRVar2 = (this->fields)._._InputAreaRoot_k__BackingField;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      method_00 = (MethodInfo *)0x0;
      value = 0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).minimizeChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (chatConsoleMode =
               (ChatConsoleMode__Enum)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar2,(MethodInfo *)0x0),
         (GameObject *)chatConsoleMode == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)chatConsoleMode,0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).expandChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      goto code_?;
    }
  }
  this_00 = (this->fields).chatConsoleModes;
  if (this_00 != (ChatConsoleModes *)0x0) {
    ChatConsoleModes::ChatConsoleModes_Set
              (this_00,chatConsoleMode,&(this->fields).rectTransform,(MethodInfo *)0x0);
    this_01 = (this->fields)._._ScrollRect_k__BackingField;
    if (this_01 != (ScrollRect *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_SetVerticalNormalizedPosition
                (this_01,0.0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AndroidChatController() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController__ctor
               (AndroidChatController *this,MethodInfo *method)

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
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__);
  (this->fields)._.lines = this_00;
  func_?(&(this->fields)._.lines,this_00);
  (this->fields)._.promptRegisterForChat = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

