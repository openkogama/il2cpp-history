
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
  this_02 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_02,(Object *)this,
             MethodInfo__ChatControllerBase__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_02,(MethodInfo *)0x0);
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
    this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_03,(Object *)this,MethodInfo__AndroidChatController__OnChatModeTapped__,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (a->fields)._._.m_target = (Object *)0x0;
code_?:
      func_?();
      pAVar5 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
      this_04 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_04,(Object *)this,
                 MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)this_04,(MethodInfo *)0x0);
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
              this_00 = (this->fields).rectTransform;
              if (this_00 != (RectTransform *)0x0) {
                this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                if (this_05 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_05,0,(MethodInfo *)0x0);
                  pCVar6 = (this->fields).chatConsoleModes;
                  if (pCVar6 != (ChatConsoleModes *)0x0) {
                    ChatConsoleModes::ChatConsoleModes_Set
                              (pCVar6,ChatConsoleMode__Enum_ChatLobbyMode,
                               &(this->fields).rectTransform,(MethodInfo *)0x0);
                    this_01 = (this->fields)._._ScrollRect_k__BackingField;
                    if (this_01 != (ScrollRect *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
                      ScrollRect_SetVerticalNormalizedPosition(this_01,0.0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
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
  if (pCVar1 == (ChatConsoleModes *)0x0) {
    uVar2 = func_?(&stack0xfffffff0);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pCVar1->fields).chatConsoleMode != 1) {
    if ((pCVar1->fields).chatConsoleMode == 2) {
      AndroidChatController_SetMode(this,ChatConsoleMode__Enum_ChatPlayMode,(MethodInfo *)0x0);
    }
    return;
  }
  AndroidChatController_SetMode(this,ChatConsoleMode__Enum_PlayMode,(MethodInfo *)0x0);
  return;
}


/* Void OnIsPausedStateChange(Boolean) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnIsPausedStateChange
               (AndroidChatController *this,bool inLobbyState,MethodInfo *method)

{
  pCVar1 = (this->fields).chatConsoleModes;
  if (pCVar1 != (ChatConsoleModes *)0x0) {
    if (((pCVar1->fields).chatConsoleMode == 0) && (inLobbyState == 0)) {
      AndroidChatController_SetMode(this,ChatConsoleMode__Enum_PlayMode,(MethodInfo *)0x0);
      return;
    }
    this_00 = (this->fields).rectTransform;
    if ((this_00 != (RectTransform *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      pCVar1 = (this->fields).chatConsoleModes;
      if (pCVar1 != (ChatConsoleModes *)0x0) {
        ChatConsoleModes::ChatConsoleModes_Set
                  (pCVar1,ChatConsoleMode__Enum_ChatLobbyMode,&(this->fields).rectTransform,
                   (MethodInfo *)0x0);
        this_01 = (this->fields)._._ScrollRect_k__BackingField;
        if (this_01 != (ScrollRect *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_SetVerticalNormalizedPosition
                    (this_01,0.0,(MethodInfo *)0x0);
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


/* Void SetMode(ChatConsoleMode) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_SetMode
               (AndroidChatController *this,ChatConsoleMode__Enum chatConsoleMode,MethodInfo *method
               )

{
  pAVar1 = this;
  if (chatConsoleMode == ChatConsoleMode__Enum_ChatLobbyMode) {
    pRVar2 = (this->fields).rectTransform;
code_?:
    if ((pRVar2 == (RectTransform *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    this = (AndroidChatController *)0x0;
    value = 0;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,value,(MethodInfo *)this);
  }
  else {
    if (chatConsoleMode == ChatConsoleMode__Enum_ChatPlayMode) {
      pRVar2 = (this->fields).rectTransform;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      pCVar4 = (this->fields)._._EnterChatButton_k__BackingField;
      if (pCVar4 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
      (pCVar4->fields).scrollingEnabled = 1;
      ChatControllerBase::ChatControllerBase_PromptRegisterForChatIfApplicable
                ((ChatControllerBase *)this,(MethodInfo *)0x0);
      pRVar2 = (this->fields)._._InputAreaRoot_k__BackingField;
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      chatConsoleMode = (ChatConsoleMode__Enum)&UNK_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar2,(MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).minimizeChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      pRVar2 = (this->fields).expandChat;
      goto code_?;
    }
    if (chatConsoleMode == ChatConsoleMode__Enum_PlayMode) {
      pRVar2 = (this->fields).rectTransform;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      pCVar4 = (this->fields)._._EnterChatButton_k__BackingField;
      if (pCVar4 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
      (pCVar4->fields).scrollingEnabled = 0;
      pRVar2 = (this->fields)._._InputAreaRoot_k__BackingField;
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      value = 0xf5;
      chatConsoleMode =
           (ChatConsoleMode__Enum)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)pRVar2,(MethodInfo *)0x0);
      if ((GameObject *)chatConsoleMode == (GameObject *)0x0) goto code_?;
      this = (AndroidChatController *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)chatConsoleMode,0,(MethodInfo *)0x0);
      pRVar2 = (pAVar1->fields).minimizeChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pRVar2 = (pAVar1->fields).expandChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      goto code_?;
    }
  }
  this_00 = (pAVar1->fields).chatConsoleModes;
  if (this_00 != (ChatConsoleModes *)0x0) {
    ChatConsoleModes::ChatConsoleModes_Set
              (this_00,chatConsoleMode,&(pAVar1->fields).rectTransform,(MethodInfo *)0x0);
    this_01 = (pAVar1->fields)._._ScrollRect_k__BackingField;
    if (this_01 != (ScrollRect *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_SetVerticalNormalizedPosition
                (this_01,0.0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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

