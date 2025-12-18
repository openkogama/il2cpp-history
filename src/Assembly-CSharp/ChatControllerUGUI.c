
/* Void AddLine(String) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_AddLine
               (ChatControllerUGUI *this,String *text,MethodInfo *method)

{
  ChatControllerBase::ChatControllerBase_AddLine((ChatControllerBase *)this,text,(MethodInfo *)0x0);
  this_00 = (this->fields)._._ScrollRect_k__BackingField;
  if (this_00 == (ScrollRect *)0x0) goto code_?;
  fVar1 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_get_verticalNormalizedPosition
                    (this_00,(MethodInfo *)0x0);
  if (fVar1 != 0.0) {
    pVVar2 = (this->fields).textGroup;
    if ((pVVar2 == (VerticalLayoutGroup *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pVVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    pVVar2 = (this->fields).textGroup;
    if ((pVVar2 == (VerticalLayoutGroup *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pVVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
  }
  ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar4 != (GameSessionData *)0x0) {
    if ((pGVar4->fields).gameMode != 1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar4 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar4->fields).gameMode != 3) {
        return;
      }
    }
    (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ChatFocusChanged(Boolean) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged
               (ChatControllerUGUI *this,bool enterChatMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (enterChatMode == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      bVar1 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
          (IEditModeUI *)0x0) goto code_?;
      bVar1 = FUN_?(1);
      bVar1 = bVar1 ^ 1;
    }
    pSVar2 = (this->fields)._._MessageController_k__BackingField;
    if (pSVar2 == (SendMessageControl *)0x0) goto code_?;
    if ((pSVar2->fields).selectedChat == 9) {
      SendMessageControl::SendMessageControl_SetSayChatBubbleVisible(pSVar2,0,(MethodInfo *)0x0);
    }
    bVar3 = bVar1;
    if ((this->fields).currentlyInLobbyState == 0) {
      bVar3 = 1;
    }
    if (bVar3 != 0) {
      pIVar4 = (this->fields).inputField;
      if (pIVar4 == (InputField *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_DeactivateInputField
                (pIVar4,(MethodInfo *)0x0);
      pRVar5 = (this->fields).inputAreaDeactivated;
      if ((pRVar5 == (RectTransform *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,bVar1 ^ 1,(MethodInfo *)0x0);
      pRVar5 = (this->fields)._._InputAreaRoot_k__BackingField;
      if ((pRVar5 == (RectTransform *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,bVar1,(MethodInfo *)0x0);
    }
  }
  else {
    pRVar5 = (this->fields)._._InputAreaRoot_k__BackingField;
    if ((pRVar5 == (RectTransform *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
    pRVar5 = (this->fields).inputAreaDeactivated;
    if ((pRVar5 == (RectTransform *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,(this->fields)._.chatLocked,(MethodInfo *)0x0);
    pIVar4 = (this->fields).inputField;
    if (pIVar4 == (InputField *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_ActivateInputField
              (pIVar4,(MethodInfo *)0x0);
    pSVar2 = (this->fields)._._MessageController_k__BackingField;
    if (pSVar2 == (SendMessageControl *)0x0) goto code_?;
    if ((pSVar2->fields).selectedChat == 9) {
      SendMessageControl::SendMessageControl_SetSayChatBubbleVisible(pSVar2,1,(MethodInfo *)0x0);
    }
  }
  (this->fields).shouldUpdateFade = 1;
  ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar7 != (GameSessionData *)0x0) {
    if ((pGVar7->fields).gameMode != 1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar7 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar7->fields).gameMode != 3) {
        return;
      }
    }
    (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ChatHotkeyPressed() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ChatHotkeyPressed
               (ChatControllerUGUI *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inputField;
  if (pIVar1 == (InputField *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pIVar1->fields).m_AllowInput != 0) {
    return;
  }
  ChatControllerBase::ChatControllerBase_PromptRegisterForChatIfApplicable
            ((ChatControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar3 = (this->fields)._._InputAreaRoot_k__BackingField;
  if ((pRVar3 != (RectTransform *)0x0) &&
     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
    pRVar3 = (this->fields).inputAreaDeactivated;
    if ((pRVar3 != (RectTransform *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,(this->fields)._.chatLocked,(MethodInfo *)0x0);
      pIVar1 = (this->fields).inputField;
      if (pIVar1 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_ActivateInputField
                  (pIVar1,(MethodInfo *)0x0);
        this_00 = (this->fields)._._MessageController_k__BackingField;
        if (this_00 != (SendMessageControl *)0x0) {
          if ((this_00->fields).selectedChat == 9) {
            SendMessageControl::SendMessageControl_SetSayChatBubbleVisible
                      (this_00,1,(MethodInfo *)0x0);
          }
          (this->fields).shouldUpdateFade = 1;
          ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar5 != (GameSessionData *)0x0) {
            if ((pGVar5->fields).gameMode != 1) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pGVar5 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              if (pGVar5 == (GameSessionData *)0x0) goto code_?;
              if ((pGVar5->fields).gameMode != 3) {
                return;
              }
            }
            (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoAwake() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_DoAwake
               (ChatControllerUGUI *this,MethodInfo *method)

{
  this_00 = (this->fields).inputAreaDeactivated;
  if ((this_00 == (RectTransform *)0x0) ||
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_01,1,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).startTime = fVar3;
  return;
}


/* Void DoStart() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_DoStart
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ChatControllerUGUI__ChatFocusChanged_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ChatControllerUGUI__ScrollbarChanged_UnityEngine__Vector2_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ChatControllerUGUI___DoStart_b__13_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ChatControllerUGUI__WarnForSpam__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<UnityEngine::Vector2>__AddListener_UnityEngine__Events__UnityAction<UnityEngine::Vector2>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ChatControllerUGUI___DoStart_b__13_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pSVar1 = (this->fields)._._MessageController_k__BackingField;
  if (pSVar1 != (SendMessageControl *)0x0) {
    pUVar2 = (pSVar1->fields).DoSend;
    pDVar3 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
    FUN_?(pDVar3,this);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar2,pDVar3,(MethodInfo *)0x0);
    pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<bool>;
    if (pDVar3 == (Delegate *)0x0) {
      (pSVar1->fields).DoSend = (UnityAction_1_System_Boolean_ *)0x0;
    }
    else {
      pUVar2 = (UnityAction_1_System_Boolean_ *)
                FUN_?(pDVar3,TypeInfo__UnityEngine__Events__UnityAction<bool>);
      if (pUVar2 == (UnityAction_1_System_Boolean_ *)0x0) {
        FUN_?(pDVar3,pUVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pSVar1->fields).DoSend = pUVar2;
      pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<bool>;
      lVar6 = FUN_?(pDVar3,TypeInfo__UnityEngine__Events__UnityAction<bool>);
      if (lVar6 == 0) {
        FUN_?(pDVar3,pUVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pSVar1->fields).DoSend >> 0xc);
      lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar9 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pSVar1 = (this->fields)._._MessageController_k__BackingField;
    if (pSVar1 != (SendMessageControl *)0x0) {
      pUVar11 = (pSVar1->fields).SpamWarning;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__ChatControllerUGUI__WarnForSpam__,
                 (MethodInfo *)0x0);
      pUVar11 = (UnityAction *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar11,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pUVar11 == (UnityAction *)0x0) {
        (pSVar1->fields).SpamWarning = (UnityAction *)0x0;
      }
      else {
        pUVar12 = (UnityAction *)0x0;
        if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar12 = pUVar11;
        }
        if (pUVar12 == (UnityAction *)0x0) {
          FUN_?(pUVar11);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pSVar1->fields).SpamWarning = pUVar12;
        pUVar12 = (UnityAction *)0x0;
        if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar12 = pUVar11;
        }
        if (pUVar12 == (UnityAction *)0x0) {
          FUN_?(pUVar11);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pSVar1->fields).SpamWarning >> 0xc);
        lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar9 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pSVar1 = (this->fields)._._MessageController_k__BackingField;
      if (pSVar1 != (SendMessageControl *)0x0) {
        SendMessageControl::SendMessageControl_ActivateSayChat(pSVar1,0,(MethodInfo *)0x0);
        pSVar13 = (this->fields)._._ScrollRect_k__BackingField;
        if (pSVar13 != (ScrollRect *)0x0) {
          pSVar14 = (pSVar13->fields).m_OnValueChanged;
          uVar15 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
          FUN_?(uVar15,this,
                        MethodInfo__ChatControllerUGUI__ScrollbarChanged_UnityEngine__Vector2_);
          if (pSVar14 != (ScrollRect_ScrollRectEvent *)0x0) {
            pMVar16 = MethodInfo__UnityEngine__Events__UnityEvent<UnityEngine::Vector2>__AddListener_UnityEngine__Events__UnityAction<UnityEngine::Vector2>_
                     ->klass->rgctx_data[2].method;
            pIVar17 = pMVar16->klass;
            if ((pIVar17->field_0x135 & 1) == 0) {
              pIVar17 = (Il2CppClass *)FUN_?(pIVar17);
            }
            pvVar18 = pIVar17->rgctx_data[5].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar18 + 0x135) & 1) == 0) {
              pvVar18 = (void *)FUN_?(pvVar18);
            }
            uVar19 = FUN_?(pvVar18);
            pIVar17 = pMVar16->klass;
            if ((pIVar17->field_0x135 & 1) == 0) {
              pIVar17 = (Il2CppClass *)FUN_?(pIVar17);
            }
            FUN_?(uVar19,uVar15,
                          (pIVar17->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
            pIVar20 = (pSVar14->fields)._._.m_Calls;
            if (pIVar20 != (InvokableCallList *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pLVar21 = (pIVar20->fields).m_RuntimeCalls;
              if (pLVar21 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                FUN_?(pLVar21,uVar19);
                (pIVar20->fields).m_NeedsUpdate = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_Initialize
               (ChatControllerUGUI *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).waitForLocalPlayerReady = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
       (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar3->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar4 == (MVLocalPlayer *)0x0)) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pMVar4->fields)._.playerState != 1) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).waitForLocalPlayerReady = 0;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar6);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar8 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar8->fields).gameMode == 0) {
    bVar1 = false;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar8 == (GameSessionData *)0x0) goto code_?;
    bVar1 = (pGVar8->fields).gameMode != 4;
  }
  ChatControllerUGUI_ChatFocusChanged(this,bVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar8 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar8->fields).gameMode == 1) {
code_?:
    pIVar9 = (this->fields).inputField;
    (this->fields).shouldUpdateFade = 0;
    if (pIVar9 == (InputField *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_ActivateInputField
              (pIVar9,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar8 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar8->fields).gameMode == 3) goto code_?;
  }
  (*(this->klass->vtable).UpdateLockedState.methodPtr)(this);
  bVar1 = cRam_? == '\0';
  (this->fields).currentlyInLobbyState = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar8 != (GameSessionData *)0x0) {
    if ((pGVar8->fields).gameMode != 0) {
code_?:
      pAVar10 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar10,(Delegate *)this_02,(MethodInfo *)0x0);
      pAVar12 = 
      TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pDVar11 == (Delegate *)0x0) {
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
             (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        pAVar10 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                  FUN_?(pDVar11,
                                TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
        if (pAVar10 ==
            (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
          FUN_?(pDVar11,pAVar12);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar10;
        pAVar12 = 
        TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar13 = FUN_?(pDVar11,
                               TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                              );
        if (lVar13 == 0) {
          FUN_?(pDVar11,pAVar12);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar14 = (uint)((ulonglong)
                        &TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                         OnSayChatMessageHeard >> 0xc);
        puVar15 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar16 = *puVar15;
          LOCK();
          uVar17 = *puVar15;
          if (uVar16 == uVar17) {
            *puVar15 = uVar16 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (uVar16 != uVar17);
      }
      return;
    }
    pIVar9 = (this->fields).inputField;
    if (pIVar9 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_DeactivateInputField
                (pIVar9,(MethodInfo *)0x0);
      this_01 = (this->fields)._._MessageController_k__BackingField;
      if (this_01 != (SendMessageControl *)0x0) {
        if ((this_01->fields).selectedChat == 9) {
          SendMessageControl::SendMessageControl_SetSayChatBubbleVisible
                    (this_01,0,(MethodInfo *)0x0);
        }
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeReady() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_InitializeReady
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).waitForLocalPlayerReady = 0;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = (obj->fields)._._.m_CachedPtr;
  if (pvVar1 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar1);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar4 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar4->fields).gameMode == 0) {
    bVar5 = false;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 == (GameSessionData *)0x0) goto code_?;
    bVar5 = (pGVar4->fields).gameMode != 4;
  }
  ChatControllerUGUI_ChatFocusChanged(this,bVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar4 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar4->fields).gameMode == 1) {
code_?:
    pIVar6 = (this->fields).inputField;
    (this->fields).shouldUpdateFade = 0;
    if (pIVar6 == (InputField *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_ActivateInputField
              (pIVar6,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar4->fields).gameMode == 3) goto code_?;
  }
  (*(this->klass->vtable).UpdateLockedState.methodPtr)(this);
  bVar5 = cRam_? == '\0';
  (this->fields).currentlyInLobbyState = 1;
  if (bVar5) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar4 != (GameSessionData *)0x0) {
    if ((pGVar4->fields).gameMode != 0) {
code_?:
      pAVar7 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar7,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar9 = 
      TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pDVar8 == (Delegate *)0x0) {
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
             (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        pAVar7 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                  FUN_?(pDVar8,
                                TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
        if (pAVar7 ==
            (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
          FUN_?(pDVar8,pAVar9);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar7;
        pAVar9 = 
        TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar10 = FUN_?(pDVar8,
                               TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                              );
        if (lVar10 == 0) {
          FUN_?(pDVar8,pAVar9);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)
                        &TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                         OnSayChatMessageHeard >> 0xc);
        puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar13 = *puVar12;
          LOCK();
          uVar14 = *puVar12;
          if (uVar13 == uVar14) {
            *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (uVar13 != uVar14);
      }
      return;
    }
    pIVar6 = (this->fields).inputField;
    if (pIVar6 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_DeactivateInputField
                (pIVar6,(MethodInfo *)0x0);
      this_00 = (this->fields)._._MessageController_k__BackingField;
      if (this_00 != (SendMessageControl *)0x0) {
        if ((this_00->fields).selectedChat == 9) {
          SendMessageControl::SendMessageControl_SetSayChatBubbleVisible
                    (this_00,0,(MethodInfo *)0x0);
        }
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_OnEnable
               (ChatControllerUGUI *this,MethodInfo *method)

{
  (this->fields).shouldUpdateFade = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    pCVar2 = (this->fields).canvasGroup;
    if (pCVar2 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar2,_UNK_?,(MethodInfo *)0x0);
      pcVar3 = pcRam_?;
      (this->fields).currFade = 0.0;
      pcVar4 = pcRam_?;
      if ((pcVar3 == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3, pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar4;
      fVar6 = (float)(*pcVar3)();
      pCVar2 = (this->fields).canvasGroup;
      (this->fields).startTime = fVar6;
      if (pCVar2 != (CanvasGroup *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pCVar2 == (CanvasGroup *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar7 = (pCVar2->fields)._._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar2,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar7,1);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnInGameMenuStateChange(Boolean) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_OnInGameMenuStateChange
               (ChatControllerUGUI *this,bool cursorLocked,MethodInfo *method)

{
  (this->fields).currentlyInLobbyState = cursorLocked ^ 1;
  ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  (this->fields).shouldUpdateFade = cursorLocked;
  player = (MVPlayer *)0x0;
  ChatControllerUGUI_ChatFocusChanged(this,0,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
  if (extraout_RAX == 0) goto code_?;
  if (*(int *)(extraout_RAX + 0x58) == 0) {
code_?:
    value = 0;
  }
  else {
    if (*(longlong *)(extraout_RAX + 0x70) == 0) goto code_?;
    if (*(char *)(*(longlong *)(extraout_RAX + 0x70) + 0x25) != '\0') goto code_?;
    value = cursorLocked ^ 1;
  }
  pRVar1 = (this->fields)._._InputAreaRoot_k__BackingField;
  if (pRVar1 != (RectTransform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,value,(MethodInfo *)0x0);
      pRVar1 = (this->fields).inputAreaDeactivated;
      if (pRVar1 != (RectTransform *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,value ^ 1,(MethodInfo *)0x0);
          pSVar3 = (this->fields)._._ScrollRect_k__BackingField;
          if (pSVar3 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar3->klass->vtable).SetNormalizedPosition.methodPtr)
                      (pSVar3,0,1,(pSVar3->klass->vtable).SetNormalizedPosition.method);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ScrollbarChanged(Vector2) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ScrollbarChanged
               (ChatControllerUGUI *this,Vector2 value,MethodInfo *method)

{
  (this->fields).shouldUpdateFade = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields).gameMode != 1) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar1->fields).gameMode != 3)
    goto Assembly_CSharp_dll_ChatControllerUGUI_ChatControllerUGUI_UpdateFadeTime;
  }
  (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
Assembly_CSharp_dll_ChatControllerUGUI_ChatControllerUGUI_UpdateFadeTime:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar3 != (MVGameControllerBase *)0x0) {
    if ((pMVar3->fields)._joinState != 3) {
      return;
    }
    pCVar4 = (this->fields).canvasGroup;
    if (pCVar4 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar4,_UNK_?,(MethodInfo *)0x0);
      pcVar2 = pcRam_?;
      (this->fields).currFade = 0.0;
      pcVar5 = pcRam_?;
      if ((pcVar2 == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar5 = pcVar2, pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar5;
      fVar7 = (float)(*pcVar2)();
      pCVar4 = (this->fields).canvasGroup;
      (this->fields).startTime = fVar7;
      if (pCVar4 != (CanvasGroup *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pCVar4 == (CanvasGroup *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar8 = (pCVar4->fields)._._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar4,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar8,1);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SubscribeToMessages() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_SubscribeToMessages
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ChatControllerBase__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
  this_00 = (Action_2_Int32Enum_Object_ *)
            FUN_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ChatControllerBase__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
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
      FUN_?(pMVar1,TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg >>
                  0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
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
      if ((this->fields).shouldUpdateFade == 0) {
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*pcRam_?)();
      if (fVar4 - (this->fields).startTime < _UNK_?) {
        return;
      }
      fVar4 = (this->fields).currFade;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar6 = _UNK_?;
      pCVar7 = (this->fields).canvasGroup;
      fVar5 = fVar5 + fVar4;
      (this->fields).currFade = fVar5;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (fVar6 < fVar5) {
        fVar5 = fVar6;
      }
      if (pCVar7 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar7,fVar5 * _UNK_? + fVar6,(MethodInfo *)0x0);
        if ((this->fields).currFade < fVar6) {
          return;
        }
        pCVar7 = (this->fields).canvasGroup;
        (this->fields).shouldUpdateFade = 0;
        if (pCVar7 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                    (pCVar7,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar8 == (MVGameControllerBase *)0x0) ||
       (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
      (pMVar10 = (pMVar9->fields).playerContainer, pMVar10 == (MVPlayerContainer *)0x0)) ||
     (pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
     pMVar11 == (MVLocalPlayer *)0x0)) goto code_?;
  if ((pMVar11->fields)._.playerState != 1) {
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar9 == (MVNetworkGame *)0x0) ||
        (pMVar10 = (pMVar9->fields).playerContainer, pMVar10 == (MVPlayerContainer *)0x0)) ||
       (pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
       pMVar11 == (MVLocalPlayer *)0x0)) goto code_?;
    if ((pMVar11->fields)._._ProfileID_k__BackingField < 1) {
      return;
    }
    pUVar12 = (pMVar11->fields)._._UserProfileData_k__BackingField;
    if (pUVar12 == (UserProfileData *)0x0) goto code_?;
    if ((pUVar12->fields).IsAdmin == 0) {
      return;
    }
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar9 == (MVNetworkGame *)0x0) ||
        (pMVar10 = (pMVar9->fields).playerContainer, pMVar10 == (MVPlayerContainer *)0x0)) ||
       (pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
       pMVar11 == (MVLocalPlayer *)0x0)) goto code_?;
    if ((pMVar11->fields)._.playerState != 3) {
      return;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).waitForLocalPlayerReady = 0;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar13 = (obj->fields)._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar13);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar14 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar14->fields).gameMode == 0) {
    bVar15 = false;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar14 == (GameSessionData *)0x0) goto code_?;
    bVar15 = (pGVar14->fields).gameMode != 4;
  }
  ChatControllerUGUI_ChatFocusChanged(this,bVar15,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar14 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar14->fields).gameMode == 1) {
code_?:
    pIVar1 = (this->fields).inputField;
    (this->fields).shouldUpdateFade = 0;
    if (pIVar1 == (InputField *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_ActivateInputField
              (pIVar1,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar14 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar14->fields).gameMode == 3) goto code_?;
  }
  (*(this->klass->vtable).UpdateLockedState.methodPtr)(this);
  bVar15 = cRam_? == '\0';
  (this->fields).currentlyInLobbyState = 1;
  if (bVar15) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar14 != (GameSessionData *)0x0) {
    if ((pGVar14->fields).gameMode != 0) {
code_?:
      pAVar16 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar16,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar18 = 
      TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pDVar17 == (Delegate *)0x0) {
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
             (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        pAVar16 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                  FUN_?(pDVar17,
                                TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
        if (pAVar16 ==
            (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
          FUN_?(pDVar17,pAVar18);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar16;
        pAVar18 = 
        TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar19 = FUN_?(pDVar17,
                               TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                              );
        if (lVar19 == 0) {
          FUN_?(pDVar17,pAVar18);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar20 = (uint)((ulonglong)
                        &TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                         OnSayChatMessageHeard >> 0xc);
        puVar21 = (ulonglong *)((ulonglong)((uVar20 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar22 = *puVar21;
          LOCK();
          uVar23 = *puVar21;
          if (uVar22 == uVar23) {
            *puVar21 = uVar22 | 1L << (uVar20 & 0x3f);
          }
          UNLOCK();
        } while (uVar22 != uVar23);
      }
      return;
    }
    pIVar1 = (this->fields).inputField;
    if (pIVar1 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_DeactivateInputField
                (pIVar1,(MethodInfo *)0x0);
      this_00 = (this->fields)._._MessageController_k__BackingField;
      if (this_00 != (SendMessageControl *)0x0) {
        if ((this_00->fields).selectedChat == 9) {
          SendMessageControl::SendMessageControl_SetSayChatBubbleVisible
                    (this_00,0,(MethodInfo *)0x0);
        }
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateFadeTime() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    pCVar2 = (this->fields).canvasGroup;
    if (pCVar2 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar2,_UNK_?,(MethodInfo *)0x0);
      pcVar3 = pcRam_?;
      (this->fields).currFade = 0.0;
      pcVar4 = pcRam_?;
      if ((pcVar3 == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3, pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar4;
      fVar6 = (float)(*pcVar3)();
      pCVar2 = (this->fields).canvasGroup;
      (this->fields).startTime = fVar6;
      if (pCVar2 != (CanvasGroup *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pCVar2 == (CanvasGroup *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar7 = (pCVar2->fields)._._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar2,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar7,1);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateLockedState() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_UpdateLockedState
               (ChatControllerUGUI *this,MethodInfo *method)

{
  pRVar1 = (this->fields)._._InputAreaRoot_k__BackingField;
  if ((pRVar1 != (RectTransform *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
    this_00 = (this->fields)._._EnterChatButton_k__BackingField;
    if ((this_00 != (ConsoleDragAndTapHandler *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,(this->fields)._.chatLocked == 0,(MethodInfo *)0x0);
      pRVar1 = (this->fields).inputAreaDeactivated;
      if ((pRVar1 != (RectTransform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        bVar3 = (this->fields)._.chatLocked;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar3,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar2 == (GameObject *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar5 = (pGVar2->fields)._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,bVar3);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WarnForSpam() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_WarnForSpam
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Warning__You_are_sending_too_man);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Warning__You_are_sending_too_man,(MethodInfo *)0x0);
  UNRECOVERED_JUMPTABLE = (this->klass->vtable).AddLine.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pSVar1,(this->klass->vtable).AddLine.method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void <DoStart>b__13_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI__DoStart_b__13_0
               (ChatControllerUGUI *this,IShortcutKeyRegister *x,BaseEventData *_,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ChatControllerUGUI__ChatHotkeyPressed__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__ChatControllerUGUI__ChatHotkeyPressed__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

