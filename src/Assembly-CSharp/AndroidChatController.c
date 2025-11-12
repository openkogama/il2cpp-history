
/* Void Initialize() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_Initialize
               (AndroidChatController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AndroidChatController__OnChatModeTapped__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ChatControllerBase__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ChatConsoleModes_MethodInfo__UnityEngine__Object__Instantiate<ChatConsoleModes>_ChatConsoleModes__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
  this_01 = (Action_2_Int32Enum_Object_ *)
            FUN_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__ChatControllerBase__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pMVar1 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
  }
  else {
    pMVar2 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      FUN_?(pMVar1,TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar2;
    pMVar2 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg >>
                   0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pCVar9 = (this->fields)._._EnterChatButton_k__BackingField;
  if (pCVar9 != (ConsoleDragAndTapHandler *)0x0) {
    pUVar10 = (pCVar9->fields).OnClick;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__AndroidChatController__OnChatModeTapped__,
               (MethodInfo *)0x0);
    pUVar10 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar10,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pUVar10 == (UnityAction *)0x0) {
      (pCVar9->fields).OnClick = (UnityAction *)0x0;
    }
    else {
      pUVar11 = (UnityAction *)0x0;
      if (pUVar10->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar11 = pUVar10;
      }
      if (pUVar11 == (UnityAction *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (pCVar9->fields).OnClick = pUVar11;
      pUVar11 = (UnityAction *)0x0;
      if (pUVar10->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar11 = pUVar10;
      }
      if (pUVar11 == (UnityAction *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(pCVar9->fields).OnClick >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pAVar12 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
    this_03 = (UnityAction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar12,(Delegate *)this_03,(MethodInfo *)0x0);
    pAVar14 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar13 == (Delegate *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
           (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      pAVar12 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                FUN_?(pDVar13,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (pAVar12 ==
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        FUN_?(pDVar13,pAVar14);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar12;
      pAVar14 = 
      TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      lVar15 = FUN_?(pDVar13);
      if (lVar15 == 0) {
        FUN_?(pDVar13,pAVar14);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)
                      &TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                       OnSayChatMessageHeard >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pCVar16 = (this->fields).chatConsoleModes;
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar17 != (Transform *)0x0) {
      pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                          (pTVar17,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar16 = (ChatConsoleModes *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pCVar16,pTVar17,0,
                           ChatConsoleModes_MethodInfo__UnityEngine__Object__Instantiate<ChatConsoleModes>_ChatConsoleModes__UnityEngine__Transform__bool_
                          );
      bVar8 = iRam_? != 0;
      (this->fields).chatConsoleModes = pCVar16;
      if (bVar8) {
        uVar4 = (uint)((ulonglong)&(this->fields).chatConsoleModes >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar17 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar18 = (pTVar17->fields)._._.m_CachedPtr;
        if (pvVar18 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar19 = func_?(&UNK_?);
          FUN_?(uVar19,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar18);
        pCVar16 = (this->fields).chatConsoleModes;
        if (pCVar16 != (ChatConsoleModes *)0x0) {
          ChatConsoleModes::ChatConsoleModes_Set
                    (pCVar16,ChatConsoleMode__Enum_ChatLobbyMode,&(this->fields).rectTransform,
                     (MethodInfo *)0x0);
          (*(this->klass->vtable).UpdateLockedState.methodPtr)(this);
          this_00 = (this->fields).rectTransform;
          if ((this_00 != (RectTransform *)0x0) &&
             (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0),
             this_04 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_04,0,(MethodInfo *)0x0);
            pCVar16 = (this->fields).chatConsoleModes;
            if (pCVar16 != (ChatConsoleModes *)0x0) {
              ChatConsoleModes::ChatConsoleModes_Set
                        (pCVar16,ChatConsoleMode__Enum_ChatLobbyMode,&(this->fields).rectTransform,
                         (MethodInfo *)0x0);
              pSVar20 = (this->fields)._._ScrollRect_k__BackingField;
              if (pSVar20 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pSVar20->klass->vtable).SetNormalizedPosition.methodPtr)
                          (pSVar20,0,1,(pSVar20->klass->vtable).SetNormalizedPosition.method);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnChatModeTapped() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnChatModeTapped
               (AndroidChatController *this,MethodInfo *method)

{
  pCVar1 = (this->fields).chatConsoleModes;
  if (pCVar1 != (ChatConsoleModes *)0x0) {
    if ((pCVar1->fields).chatConsoleMode != 1) {
      if ((pCVar1->fields).chatConsoleMode != 2) {
        return;
      }
      pRVar2 = (this->fields).rectTransform;
      if ((pRVar2 != (RectTransform *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        pCVar4 = (this->fields)._._EnterChatButton_k__BackingField;
        if (pCVar4 != (ConsoleDragAndTapHandler *)0x0) {
          (pCVar4->fields).scrollingEnabled = 1;
          ChatControllerBase::ChatControllerBase_PromptRegisterForChatIfApplicable
                    ((ChatControllerBase *)this,(MethodInfo *)0x0);
          pRVar2 = (this->fields)._._InputAreaRoot_k__BackingField;
          if ((pRVar2 != (RectTransform *)0x0) &&
             (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar2,(MethodInfo *)0x0),
             pGVar3 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
            pRVar2 = (this->fields).minimizeChat;
            if ((pRVar2 != (RectTransform *)0x0) &&
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar2,(MethodInfo *)0x0),
               pGVar3 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,1,(MethodInfo *)0x0);
              pRVar2 = (this->fields).expandChat;
              if ((pRVar2 != (RectTransform *)0x0) &&
                 (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pRVar2,(MethodInfo *)0x0),
                 pGVar3 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,0,(MethodInfo *)0x0);
                pCVar1 = (this->fields).chatConsoleModes;
                if (pCVar1 != (ChatConsoleModes *)0x0) {
                  ChatConsoleModes::ChatConsoleModes_Set
                            (pCVar1,ChatConsoleMode__Enum_ChatPlayMode,&(this->fields).rectTransform
                             ,(MethodInfo *)0x0);
                  pSVar5 = (this->fields)._._ScrollRect_k__BackingField;
                  if (pSVar5 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(pSVar5->klass->vtable).SetNormalizedPosition.methodPtr)
                              (pSVar5,0,1,(pSVar5->klass->vtable).SetNormalizedPosition.method);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pRVar2 = (this->fields).rectTransform;
    if ((pRVar2 != (RectTransform *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      pCVar4 = (this->fields)._._EnterChatButton_k__BackingField;
      if (pCVar4 != (ConsoleDragAndTapHandler *)0x0) {
        (pCVar4->fields).scrollingEnabled = 0;
        pRVar2 = (this->fields)._._InputAreaRoot_k__BackingField;
        if ((pRVar2 != (RectTransform *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pRVar2 = (this->fields).minimizeChat;
          if ((pRVar2 != (RectTransform *)0x0) &&
             (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar2,(MethodInfo *)0x0),
             pGVar3 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            pRVar2 = (this->fields).expandChat;
            if ((pRVar2 != (RectTransform *)0x0) &&
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar2,(MethodInfo *)0x0),
               pGVar3 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,1,(MethodInfo *)0x0);
              pCVar1 = (this->fields).chatConsoleModes;
              if (pCVar1 != (ChatConsoleModes *)0x0) {
                ChatConsoleModes::ChatConsoleModes_Set
                          (pCVar1,ChatConsoleMode__Enum_PlayMode,&(this->fields).rectTransform,
                           (MethodInfo *)0x0);
                pSVar5 = (this->fields)._._ScrollRect_k__BackingField;
                if (pSVar5 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(pSVar5->klass->vtable).SetNormalizedPosition.methodPtr)
                            (pSVar5,0,1,(pSVar5->klass->vtable).SetNormalizedPosition.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnIsPausedStateChange(Boolean) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnIsPausedStateChange
               (AndroidChatController *this,bool inLobbyState,MethodInfo *method)

{
  pCVar1 = (this->fields).chatConsoleModes;
  if (pCVar1 == (ChatConsoleModes *)0x0) goto code_?;
  if (((pCVar1->fields).chatConsoleMode == 0) && (inLobbyState == 0)) {
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
    if ((pRVar2 == (RectTransform *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    pRVar2 = (this->fields).minimizeChat;
    if ((pRVar2 == (RectTransform *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    pRVar2 = (this->fields).expandChat;
    if ((pRVar2 == (RectTransform *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).chatConsoleModes;
    if (pCVar1 == (ChatConsoleModes *)0x0) goto code_?;
    chatConsoleMode = ChatConsoleMode__Enum_PlayMode;
  }
  else {
    pRVar2 = (this->fields).rectTransform;
    if ((pRVar2 == (RectTransform *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    pCVar1 = (this->fields).chatConsoleModes;
    if (pCVar1 == (ChatConsoleModes *)0x0) goto code_?;
    chatConsoleMode = ChatConsoleMode__Enum_ChatLobbyMode;
  }
  ChatConsoleModes::ChatConsoleModes_Set
            (pCVar1,chatConsoleMode,&(this->fields).rectTransform,(MethodInfo *)0x0);
  pSVar5 = (this->fields)._._ScrollRect_k__BackingField;
  if (pSVar5 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar5->klass->vtable).SetNormalizedPosition.methodPtr)
              (pSVar5,0,1,(pSVar5->klass->vtable).SetNormalizedPosition.method);
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetMode(ChatConsoleMode) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_SetMode
               (AndroidChatController *this,ChatConsoleMode__Enum chatConsoleMode,MethodInfo *method
               )

{
  if (chatConsoleMode == ChatConsoleMode__Enum_ChatLobbyMode) {
    pRVar1 = (this->fields).rectTransform;
code_?:
    if (pRVar1 == (RectTransform *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    value = 0;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,value,(MethodInfo *)0x0);
  }
  else {
    if (chatConsoleMode == ChatConsoleMode__Enum_ChatPlayMode) {
      pRVar1 = (this->fields).rectTransform;
      if (pRVar1 == (RectTransform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pCVar3 = (this->fields)._._EnterChatButton_k__BackingField;
      if (pCVar3 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
      (pCVar3->fields).scrollingEnabled = 1;
      ChatControllerBase::ChatControllerBase_PromptRegisterForChatIfApplicable
                ((ChatControllerBase *)this,(MethodInfo *)0x0);
      pRVar1 = (this->fields)._._InputAreaRoot_k__BackingField;
      if (pRVar1 == (RectTransform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
      pRVar1 = (this->fields).minimizeChat;
      if (pRVar1 == (RectTransform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pRVar1 = (this->fields).expandChat;
      goto code_?;
    }
    if (chatConsoleMode == ChatConsoleMode__Enum_PlayMode) {
      pRVar1 = (this->fields).rectTransform;
      if (pRVar1 == (RectTransform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pCVar3 = (this->fields)._._EnterChatButton_k__BackingField;
      if (pCVar3 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
      (pCVar3->fields).scrollingEnabled = 0;
      pRVar1 = (this->fields)._._InputAreaRoot_k__BackingField;
      if (pRVar1 == (RectTransform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pRVar1 = (this->fields).minimizeChat;
      if (pRVar1 == (RectTransform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pRVar1 = (this->fields).expandChat;
      if (pRVar1 == (RectTransform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      value = 1;
      goto code_?;
    }
  }
  this_00 = (this->fields).chatConsoleModes;
  if (this_00 != (ChatConsoleModes *)0x0) {
    ChatConsoleModes::ChatConsoleModes_Set
              (this_00,chatConsoleMode,&(this->fields).rectTransform,(MethodInfo *)0x0);
    pSVar4 = (this->fields)._._ScrollRect_k__BackingField;
    if (pSVar4 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar4->klass->vtable).SetNormalizedPosition.methodPtr)
                (pSVar4,0,1,(pSVar4->klass->vtable).SetNormalizedPosition.method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AndroidChatController() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController__ctor
               (AndroidChatController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__,0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields)._.warningColor.r = (float)_UNK_?;
  uVar3 = _UNK_?;
  (this->fields)._.warningColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar2 = _UNK_?;
  (this->fields)._.warningColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._.warningColor.a = (float)uVar2;
  this_00 = (Queue_1_UnityEngine_UI_Text_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__);
  bVar4 = iRam_? != 0;
  (this->fields)._.lines = this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.lines >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  bVar4 = cRam_? == '\0';
  (this->fields)._.promptRegisterForChat = 1;
  if (bVar4) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

