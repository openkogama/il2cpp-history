
/* Void Awake() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Awake
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  EditMode3DController_MethodInfo__UnityEngine__Object__Instantiate<EditMode3DController>_EditMode3DController__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchEditModeController__SetUIReady__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stackBottom;
  pCVar2 = (this->fields).chatController;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar2 = (ChatControllerUGUI *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)pCVar2,pTVar3,0,
                         ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI__UnityEngine__Transform__bool_
                        );
    bVar4 = iRam_? != 0;
    (this->fields).chatController = pCVar2;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).chatController >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pCVar2 = (this->fields).chatController;
    if (pCVar2 != (ChatControllerUGUI *)0x0) {
      ChatControllerUGUI::ChatControllerUGUI_SubscribeToMessages(pCVar2,(MethodInfo *)0x0);
      canvasScaler = (this->fields).canvasScaler;
      if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      ResolutionManager::ResolutionManager_Init(canvasScaler,(MethodInfo *)0x0);
      pGVar1 = (this->fields).stackBottom;
      pEVar9 = (this->fields).editMode3DControllerPrefab;
      if (pGVar1 != (GameObject *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0);
        pEVar9 = (EditMode3DController *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)pEVar9,pTVar3,0,
                             EditMode3DController_MethodInfo__UnityEngine__Object__Instantiate<EditMode3DController>_EditMode3DController__UnityEngine__Transform__bool_
                            );
        bVar4 = iRam_? != 0;
        (this->fields).editMode3DControllerPrefab = pEVar9;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(this->fields).editMode3DControllerPrefab >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        pUVar10 = (this->fields).uiStack;
        if (pUVar10 != (UIStack *)0x0) {
          pAVar11 = (Action *)0x0;
          UIStack::UIStack_Push
                    (pUVar10,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
                     UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
               (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
              (this_00 = (pMVar13->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
             (pMVar14 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (this_00,(MethodInfo *)0x0), pMVar14 != (MVLocalPlayer *)0x0)) {
            if ((pMVar14->fields)._.playerState != 1) {
              pAVar15 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                                  ((MethodInfo *)0x0);
              pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar16,(Object *)this,MethodInfo__TouchEditModeController__SetUIReady__,
                         (MethodInfo *)0x0);
              pAVar15 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
              if (pAVar15 != (Action *)0x0) {
                if (pAVar15->klass == TypeInfo__System__Action) {
                  pAVar11 = pAVar15;
                }
                if (pAVar11 == (Action *)0x0) {
                  FUN_?(pAVar15);
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
              }
Assembly_CSharp_dll_MVGameControllerBase_MVGameControllerBase_set_OnFirstFrameUpdateActorReady:
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar12 != (MVGameControllerBase *)0x0) &&
                 (pFVar18 = (pMVar12->fields).firstFrameUpdateActorReady,
                 pFVar18 != (FirstFrameUpdateActorReady *)0x0)) {
                bVar4 = iRam_? != 0;
                (pFVar18->fields).callbacks = pAVar11;
                if (bVar4) {
                  uVar5 = (uint)((ulonglong)&(pFVar18->fields).callbacks >> 0xc);
                  puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar19 = *puVar8;
                    LOCK();
                    uVar7 = *puVar8;
                    if (uVar19 == uVar7) {
                      *puVar8 = uVar19 | 1L << (uVar5 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar19 != uVar7);
                }
                return;
              }
              FUN_?();
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__TouchEditModeController__SetUIReady__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pUVar10 = (this->fields).uiStack;
            if (pUVar10 != (UIStack *)0x0) {
              (pUVar10->fields).stackReady = 1;
              UIStack::UIStack_UpdateStack(pUVar10,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar12 != (MVGameControllerBase *)0x0) &&
                 (pFVar18 = (pMVar12->fields).firstFrameUpdateActorReady,
                 pFVar18 != (FirstFrameUpdateActorReady *)0x0)) {
                pAVar15 = (pFVar18->fields).callbacks;
                pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar16,(Object *)this,MethodInfo__TouchEditModeController__SetUIReady__,
                           (MethodInfo *)0x0);
                pAVar15 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Remove
                                    ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
                if (pAVar15 != (Action *)0x0) {
                  if (pAVar15->klass == TypeInfo__System__Action) {
                    pAVar11 = pAVar15;
                  }
                  if (pAVar11 == (Action *)0x0) {
                    FUN_?(pAVar15);
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                }
                goto 
                Assembly_CSharp_dll_MVGameControllerBase_MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                ;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void ClearStateStack() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_ClearStateStack
               (TouchEditModeController *this,MethodInfo *method)

{
  pEVar1 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (pEVar1 == (EditorStateMachine *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(pEVar1->fields)._.stateStack;
  if (this_00 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this_00->fields)._size < 1) {
    return;
  }
  mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
  Stack_1_UnityEngine_UIElements_TextureId__Pop
            (this_00,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
  (pEVar1->fields)._.clearStack = 1;
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000008);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((pEVar1->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (pEVar1->fields)._.nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pEVar1->fields)._.nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((pEVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (pEVar1->fields)._.currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pEVar1->fields)._.currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_01 = (pEVar1->fields)._.transitionTable;
    if (this_01 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_01,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((pEVar1->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (pEVar1->fields)._.stateName = pSVar3;
      func_?(&(pEVar1->fields)._.stateName);
      (pEVar1->fields)._.currentState = pIVar10;
      func_?(&(pEVar1->fields)._.currentState);
      (pEVar1->fields)._.nextEvent = (Object *)0x0;
      func_?(&(pEVar1->fields)._.nextEvent);
      (pEVar1->fields)._.prevEvent = (pEVar1->fields)._.curEvent;
      func_?(&pEVar1->fields);
      (pEVar1->fields)._.curEvent = evt;
      func_?(&(pEVar1->fields)._.curEvent);
      if ((pEVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_02 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(pEVar1->fields)._.data;
      if (this_02 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((pEVar1->fields)._.clearStack == 0) {
      (pEVar1->fields)._.clearStack = 1;
    }
    else {
      pSVar11 = (pEVar1->fields)._.stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void DeleteWoid(Int32) */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_DeleteWoid
               (TouchEditModeController *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouchEditModeController____c___DeleteWoid_b__65_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouchEditModeController____c__DisplayClass65_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouchEditModeController____c__DisplayClass65_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouchEditModeController____c);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__TouchEditModeController____c__DisplayClass65_0);
  pEVar1 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (((pEVar1 != (EditorStateMachine *)0x0) &&
      (this_00 = (pEVar1->fields).selectionController, this_00 != (SelectionController *)0x0)) &&
     (SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0),
     object_00 != (Object *)0x0)) {
    bVar2 = iRam_? != 0;
    object_00[1].klass = (Object__Class *)::StringLiteral__;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
      pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar7,woid,(MethodInfo *)0x0);
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar8 != (MVWorldObjectClient *)0x0) {
        cVar9 = (*(pMVar8->klass->vtable).Delete.methodPtr)(pMVar8,pMVar7,object_00 + 1);
        if (cVar9 == '\0') {
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,object_00,
                     MethodInfo__TouchEditModeController____c__DisplayClass65_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          pMVar11 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
          ;
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
            pMVar11 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            ;
          }
        }
        else {
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__TouchEditModeController____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__TouchEditModeController____c);
          }
          this_02 = TypeInfo__TouchEditModeController____c->static_fields->__9__65_1;
          if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if (*(int *)&(TypeInfo__TouchEditModeController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__TouchEditModeController____c);
            }
            object = TypeInfo__TouchEditModeController____c->static_fields->__9;
            this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                       MethodInfo__TouchEditModeController____c___DeleteWoid_b__65_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__TouchEditModeController____c->static_fields->__9__65_1 = this_02;
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)
                              &TypeInfo__TouchEditModeController____c->static_fields->__9__65_1 >>
                             0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
          }
          pMVar11 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ;
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
            pMVar11 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ;
          }
        }
        if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar11);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar10,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar4 = (longlong)(pLVar12->fields)._size;
          uVar3 = 0;
          if (0 < lVar4) {
            lVar13 = 0;
            lVar14 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar12 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar12->fields)._size <= uVar3) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pTVar16 = (pLVar12->fields)._items;
              if (pTVar16 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar16->max_length <= uVar3) {
                FUN_?();
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar16->vector + lVar14 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar10,(BaseEventData *)0x0,
                                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                                 (pMVar11->field7_0x38).rgctx_data[1].method);
              if (bVar17 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar3 = uVar3 + 1;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 8;
            } while (lVar13 < lVar4);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void DisableEditMode() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_DisableEditMode
               (TouchEditModeController *this,MethodInfo *method)

{
  (this->fields).isInPlayInEditMode = 1;
  this_00 = (this->fields).mobilePlayModeController;
  if (this_00 != (TouchPlayModeController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        if ((this->fields).editModeChange != (Action_1_EditModeChangeArgs_ *)0x0) {
          pAVar2 = (this->fields).editModeChange;
          (*(pAVar2->fields)._._.invoke_impl)
                    ((pAVar2->fields)._._.method_code,1,(pAVar2->fields)._._.method);
        }
        (this->fields).enterBuildModeOnceGuard = 0;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EnterBuildMode() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_EnterBuildMode
               (TouchEditModeController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).isInPlayInEditMode = 0;
  if (bVar1) {
    FUN_?(&TypeInfo__TouchEditModeController___HandleCursorVisible_d__56);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  routine = (IEnumerator *)
            FUN_?(TypeInfo__TouchEditModeController___HandleCursorVisible_d__56);
  *(undefined4 *)&routine[1].klass = 0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  if ((this->fields).editModeChange != (Action_1_EditModeChangeArgs_ *)0x0) {
    pAVar2 = (this->fields).editModeChange;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,0,(pAVar2->fields)._._.method);
  }
  (this->fields).enterPlayModeOnceGuard = 0;
  return;
}


/* Void EnterPlayMode() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_EnterPlayMode
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).enterPlayModeOnceGuard != 0) {
    return;
  }
  pEVar1 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (pEVar1 != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_ClearStateStack((FSMEntity *)pEVar1,(MethodInfo *)0x0);
    pCVar2 = (this->fields).contextMenuController;
    if (pCVar2 != (ContextMenuController *)0x0) {
      pCVar3 = (pCVar2->fields).currentContextMenu;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pCVar3 != (ContextMenu *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pCVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pCVar2 = (this->fields).contextMenuController;
          if ((pCVar2 == (ContextMenuController *)0x0) ||
             (pCVar3 = (pCVar2->fields).currentContextMenu, pCVar3 == (ContextMenu *)0x0))
          goto DAT_?;
          ContextMenu::ContextMenu_Pop(pCVar3,(MethodInfo *)0x0);
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__EditorEvent);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pEVar1 = (this->fields)._EditModeStateMachine_k__BackingField;
      auStackX_8[0] = 0x3a;
      value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
      if (pEVar1 != (EditorStateMachine *)0x0) {
        FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar1,value,(MethodInfo *)0x0);
        (this->fields).enterPlayModeOnceGuard = 1;
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IState GetCurrentState() */

IState * Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_GetCurrentState
                   (TouchEditModeController *this,MethodInfo *method)

{
  pEVar1 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (pEVar1 != (EditorStateMachine *)0x0) {
    return (pEVar1->fields)._.currentState;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IState *)(*pcVar2)();
  return pIVar3;
}


/* IEnumerator HandleCursorVisible() */

IEnumerator *
Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_HandleCursorVisible
          (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TouchEditModeController___HandleCursorVisible_d__56);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__TouchEditModeController___HandleCursorVisible_d__56);
  *(undefined4 *)&pIVar1[1].klass = 0;
  return pIVar1;
}


/* Void HandleFocusInputSupress() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_HandleFocusInputSupress
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).focusSuppressInput != 0) {
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
    iVar3 = (*pcRam_?)();
    if (iVar3 < 1) {
      bVar4 = false;
    }
    else {
      a_Stack_18[0]._0_4_ = 0;
      pIStack_5 = (Il2CppMethodPointer)0x0;
      pIStack_6 = (Il2CppMethodPointer)0x0;
      pIStack_7 = (InvokerMethod)0x0;
      pcStack_8 = (char *)0x0;
      uStack_9 = (Il2CppClass *)0x0;
      pIStack_10 = (Il2CppType *)0x0;
      ppIStack_11 = (Il2CppType **)0x0;
      _Stack_20.rgctx_data = (Il2CppRGCTXData *)0x0;
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
      method = (MethodInfo *)&pIStack_5;
      (*pcRam_?)(0,method);
      bVar4 = uStack_9._4_4_ == 0;
    }
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
    fVar12 = (float)(*pcRam_?)();
    if (_UNK_? < fVar12 - (this->fields).focusTime) {
      bVar4 = true;
    }
    if (!bVar4) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVInputWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar13 = (MVInputWrapper_InputSuppression *)
               FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
      (*(pMVar13->klass->vtable).set_IsSuppressed.methodPtr)
                (pMVar13,CONCAT71((int7)((ulonglong)method >> 8),1),
                 (pMVar13->klass->vtable).set_IsSuppressed.method);
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVInputWrapper);
      }
      TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = pMVar13;
      if (iRam_? != 0) {
        uVar14 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed >>
                      0xc);
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
    (this->fields).focusSuppressInput = 0;
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Initialize
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorStateMachine);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchEditModeController__HideUI__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_Init(pMVar1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Logic);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (pMVar1->fields).mainCamera;
      if (this_02 != (Camera *)0x0) {
        uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                           (this_02,(MethodInfo *)0x0);
        uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Logic,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (this_02,uVar2 | 1 << (uVar3 & 0x1f),(MethodInfo *)0x0);
        (pMVar1->fields).isLogicRendered = 1;
        this_03 = (this->fields).drawPlaneController;
        if (this_03 != (DrawPlaneControllerUUI *)0x0) {
          DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize(this_03,(MethodInfo *)0x0);
          FUN_?((this->fields).drawPlaneController);
          pCVar4 = (this->fields).chatBubbleController;
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pCVar4 = (ChatBubbleController *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                              ((Object *)pCVar4,pTVar5,0,
                               ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                              );
          bVar6 = iRam_? != 0;
          (this->fields).chatBubbleController = pCVar4;
          if (bVar6) {
            uVar2 = (uint)((ulonglong)&(this->fields).chatBubbleController >> 0xc);
            lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar6 = uVar8 == *puVar9;
              if (bVar6) {
                *puVar9 = uVar8 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          pCVar11 = (this->fields).contextMenuController;
          pGVar12 = (this->fields).gizmoController;
          pEVar13 = (EditorStateMachine *)FUN_?(TypeInfo__EditorStateMachine);
          value_00 = (Delegate *)0x0;
          EditorStateMachine::EditorStateMachine__ctor_2
                    (pEVar13,pGVar10,pCVar11,pGVar12,(MethodInfo *)0x0);
          bVar6 = iRam_? != 0;
          (this->fields)._EditModeStateMachine_k__BackingField = pEVar13;
          if (bVar6) {
            uVar2 = (uint)((ulonglong)&(this->fields)._EditModeStateMachine_k__BackingField >> 0xc)
            ;
            lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar6 = uVar8 == *puVar9;
              if (bVar6) {
                *puVar9 = uVar8 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          this_04 = (this->fields).editorWorldObjectCreation;
          if (this_04 != (EditorWorldObjectCreation *)0x0) {
            EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
                      (this_04,(this->fields)._EditModeStateMachine_k__BackingField,
                       (MethodInfo *)0x0);
            pEVar13 = (this->fields)._EditModeStateMachine_k__BackingField;
            if ((pEVar13 != (EditorStateMachine *)0x0) &&
               (pMVar14 = (this->fields).materialsController,
               pMVar14 != (MaterialsControllerEditMode *)0x0)) {
              bVar6 = iRam_? != 0;
              (pMVar14->fields)._.cubeModelingStateMachine =
                   (pEVar13->fields).cubeModelingStateMachine;
              if (bVar6) {
                uVar2 = (uint)((ulonglong)&(pMVar14->fields)._.cubeModelingStateMachine >> 0xc);
                lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar6 = uVar8 == *puVar9;
                  if (bVar6) {
                    *puVar9 = uVar8 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar6);
              }
              MaterialsController::MaterialsController_InitializeMaterialInventoryData
                        ((MaterialsController *)pMVar14,(MethodInfo *)0x0);
              pMVar14 = (this->fields).materialsController;
              this_05 = (this->fields).uiStack;
              if (((pMVar14 != (MaterialsControllerEditMode *)0x0) &&
                  (this_12 = (Component *)(*(pMVar14->klass->vtable).SetActive.methodPtr)(),
                  this_12 != (Component *)0x0)) &&
                 (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(this_12,(MethodInfo *)0x0),
                 this_05 != (UIStack *)0x0)) {
                UIStack::UIStack_Push
                          (this_05,pGVar10,UIPushOption__Enum_None,(UnityAction *)0x0,
                           UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
                pEVar13 = (this->fields)._EditModeStateMachine_k__BackingField;
                if ((pEVar13 != (EditorStateMachine *)0x0) &&
                   (this_06 = (pEVar13->fields).cubeModelingStateMachine,
                   this_06 != (CubeModelingStateMachine *)0x0)) {
                  CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                            (this_06,0x15,(MethodInfo *)0x0);
                  pGVar10 = (this->fields).stackBottom;
                  pIVar15 = (this->fields).inEditMenuPrefab;
                  if (pGVar10 != (GameObject *)0x0) {
                    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar10,(MethodInfo *)0x0);
                    pIVar15 = (InEditMenu *)
                              UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_6
                                        ((Object *)pIVar15,pTVar5,0,
                                         InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                                        );
                    bVar6 = iRam_? != 0;
                    (this->fields).inEditMenu = pIVar15;
                    if (bVar6) {
                      uVar2 = (uint)((ulonglong)&(this->fields).inEditMenu >> 0xc);
                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                        LOCK();
                        bVar6 = uVar8 == *puVar9;
                        if (bVar6) {
                          *puVar9 = uVar8 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar6);
                    }
                    pIVar15 = (this->fields).inEditMenu;
                    if ((pIVar15 != (InEditMenu *)0x0) &&
                       (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pIVar15,(MethodInfo *)0x0),
                       pGVar10 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar10,0,(MethodInfo *)0x0);
                      pIVar15 = (this->fields).inEditMenu;
                      if (pIVar15 != (InEditMenu *)0x0) {
                        InEditMenu::InEditMenu_Initialize(pIVar15,(MethodInfo *)0x0);
                        this_07 = (this->fields).chatController;
                        if (this_07 != (ChatControllerUGUI *)0x0) {
                          ChatControllerUGUI::ChatControllerUGUI_Initialize
                                    (this_07,(MethodInfo *)0x0);
                          pCVar11 = (this->fields).contextMenuController;
                          if (pCVar11 != (ContextMenuController *)0x0) {
                            ContextMenuController::ContextMenuController_Initialize
                                      (pCVar11,(this->fields)._EditModeStateMachine_k__BackingField,
                                       (MethodInfo *)0x0);
                            pGVar12 = (this->fields).gizmoController;
                            if (pGVar12 != (GizmoController *)0x0) {
                              GizmoController::GizmoController_Initialize
                                        (pGVar12,(this->fields)._EditModeStateMachine_k__BackingField
                                         ,(MethodInfo *)0x0);
                              this_13 = (TouchInputMap *)FUN_?(TypeInfo__TouchInputMap);
                              TouchInputMap::TouchInputMap__ctor(this_13,(MethodInfo *)0x0);
                              if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                                FUN_?();
                              }
                              FUN_?(this_13);
                              pEVar13 = (this->fields)._EditModeStateMachine_k__BackingField;
                              auStackX_18[0] = 0x2f;
                              value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_18);
                              if (pEVar13 != (EditorStateMachine *)0x0) {
                                FSMEntity::FSMEntity_set_Event
                                          ((FSMEntity *)pEVar13,value,(MethodInfo *)0x0);
                                this_08 = (this->fields).clientShopController;
                                if (this_08 != (EditModeClientShopController *)0x0) {
                                  EditModeClientShopController::
                                  EditModeClientShopController_Initialize
                                            (this_08,(this->fields).repositoryController,
                                             (MethodInfo *)0x0);
                                  this_09 = (this->fields).playerInventoryController;
                                  if (this_09 != (PlayerInventoryController *)0x0) {
                                    PlayerInventoryController::PlayerInventoryController_Initialize
                                              (this_09,(MethodInfo *)0x0);
                                    pTVar16 = (this->fields).mobilePlayModeController;
                                    if (pTVar16 != (TouchPlayModeController *)0x0) {
                                      (*(pTVar16->klass->vtable).Initialize.methodPtr)();
                                      this_14 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                          ((MethodInfo *)0x0);
                                      if ((this_14 != (MVWorldObjectClientManager *)0x0) &&
                                         (pMVar17 = MVWorldObjectClientManager::
                                                    MVWorldObjectClientManager_get_RootGroup
                                                              (this_14,(MethodInfo *)0x0),
                                         pMVar17 != (MVGroup *)0x0)) {
                                        (*(pMVar17->klass->vtable).PlayModeInitialize.methodPtr)
                                                  (pMVar17);
                                        this_10 = (this->fields).goldPurchasedTracker;
                                        if (this_10 != (GoldPurchasedTracker *)0x0) {
                                          GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                                    (this_10,(MethodInfo *)0x0);
                                          pGVar10 = (this->fields).stackBottom;
                                          pRVar18 = (this->fields).notificationsManager;
                                          if (pGVar10 != (GameObject *)0x0) {
                                            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (pGVar10,(MethodInfo *)0x0);
                                            pRVar18 = (RectTransform *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Object::Object_1_Instantiate_6
                                                                ((Object *)pRVar18,pTVar5,0,
                                                                                                                                  
                                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                                  );
                                            bVar6 = iRam_? != 0;
                                            (this->fields).notificationsManager = pRVar18;
                                            if (bVar6) {
                                              uVar2 = (uint)((ulonglong)
                                                              &(this->fields).notificationsManager
                                                             >> 0xc);
                                              lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                              do {
                                                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                                                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                                                LOCK();
                                                bVar6 = uVar8 == *puVar9;
                                                if (bVar6) {
                                                  *puVar9 = uVar8 | 1L << (uVar2 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar6);
                                            }
                                            pEVar13 = (this->fields).
                                                      _EditModeStateMachine_k__BackingField;
                                            if ((pEVar13 != (EditorStateMachine *)0x0) &&
                                               (this_11 = (this->fields).
                                                          firstTimeSetupTerrainEditTutorial,
                                               this_11 != (FirstTimeSetupTerrainEditTutorial *)0x0))
                                            {
                                              FirstTimeSetupTerrainEditTutorial::
                                              FirstTimeSetupTerrainEditTutorial_Initialize
                                                        (this_11,(pEVar13->fields).
                                                                 cubeModelingStateMachine,
                                                         (MaterialsController *)
                                                         (this->fields).materialsController,
                                                         (MethodInfo *)0x0);
                                              pEVar13 = (this->fields).
                                                        _EditModeStateMachine_k__BackingField;
                                              if ((pEVar13 != (EditorStateMachine *)0x0) &&
                                                 (pSVar19 = (this->fields).setupCubeModelTutorialUI,
                                                 pSVar19 != (SetupCubeModelTutorialUI *)0x0)) {
                                                bVar6 = iRam_? != 0;
                                                (pSVar19->fields).cubeModelingStateMachine =
                                                     (pEVar13->fields).cubeModelingStateMachine;
                                                if (bVar6) {
                                                  uVar2 = (uint)((ulonglong)
                                                                  &(pSVar19->fields).
                                                                   cubeModelingStateMachine >> 0xc);
                                                  lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                                  do {
                                                    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                                                    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                                                    LOCK();
                                                    bVar6 = uVar8 == *puVar9;
                                                    if (bVar6) {
                                                      *puVar9 = uVar8 | 1L << (ulonglong)
                                                                              (uVar2 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar6);
                                                }
                                                if (*(int *)&(TypeInfo__ChatCommandManager->_1).
                                                             field_0x1c == 0) {
                                                  FUN_?();
                                                }
                                                a = ChatCommandManager::
                                                    ChatCommandManager_GetChatCommandCallback
                                                              (ChatCommand__Enum_HideAllUI,
                                                               (MethodInfo *)0x0);
                                                this_15 = (NavMesh_OnNavMeshPreUpdate *)
                                                          FUN_?(TypeInfo__System__Action);
                                                uVar20 = 0;
                                                UnityEngine.AIModule.dll::UnityEngine::AI::
                                                NavMesh+OnNavMeshPreUpdate::
                                                NavMesh_OnNavMeshPreUpdate__ctor
                                                          (this_15,(Object *)this,
                                                                                                                      
                                                  MethodInfo__TouchEditModeController__HideUI__,
                                                  (MethodInfo *)0x0);
                                                pDVar21 = mscorlib.dll::System::Delegate::
                                                          Delegate_Combine((Delegate *)a,
                                                                           (Delegate *)this_15,
                                                                           (MethodInfo *)0x0);
                                                if (pDVar21 != (Delegate *)0x0) {
                                                  if ((Action__Class *)pDVar21->klass ==
                                                      TypeInfo__System__Action) {
                                                    value_00 = pDVar21;
                                                  }
                                                  if (value_00 == (Delegate *)0x0) {
                                                    FUN_?(pDVar21);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                }
                                                if (cRam_? == '\0') {
                                                  FUN_?(&TypeInfo__ChatCommandManager,
                                                                value_00,0);
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                if (*(int *)&(TypeInfo__ChatCommandManager->_1).
                                                             field_0x1c == 0) {
                                                  FUN_?(TypeInfo__ChatCommandManager);
                                                }
                                                this_00 = (
                                                  Dictionary_2_System_Int32Enum_UnityEngine_Vector3_
                                                  *)TypeInfo__ChatCommandManager->static_fields->
                                                    chatCommandCallBackDictionary;
                                                if (this_00 ==
                                                    (
                                                  Dictionary_2_System_Int32Enum_UnityEngine_Vector3_
                                                  *)0x0) {
code_?:
                                                  FUN_?();
                                                  pcVar22 = (code *)swi(3);
                                                  (*pcVar22)();
                                                  return;
                                                }
                                                iVar23 = mscorlib.dll::System::Collections::Generic
                                                         ::Dictionary`2[System::
                                                         Int32Enum,UnityEngine::Vector3]::
                                                                                                                  
                                                  Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                                            (this_00,3,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                                  ->klass->rgctx_data[0x21].method);
                                                if (-1 < iVar23) {
                                                  if (*(int *)&(TypeInfo__ChatCommandManager->_1).
                                                               field_0x1c == 0) {
                                                    FUN_?(TypeInfo__ChatCommandManager);
                                                  }
                                                  this_01 = TypeInfo__ChatCommandManager->
                                                            static_fields->
                                                            chatCommandCallBackDictionary;
                                                  if (this_01 ==
                                                      (Dictionary_2_ChatCommand_System_Action_ *)0x0
                                                     ) goto code_?;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_01,3,(Object *)value_00,
                                                  (InsertionBehavior__Enum)
                                                  CONCAT71((int7)((ulonglong)uVar20 >> 8),1),
                                                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                                                  ->klass->rgctx_data[0x22].method);
                                                }
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
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Boolean IsGridSnap() */

bool Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_IsGridSnap
               (TouchEditModeController *this,MethodInfo *method)

{
  return (this->fields).gridSnap;
}


/* Void LeaveEditPlayMode() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_LeaveEditPlayMode
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).enterBuildModeOnceGuard != 0) {
    return;
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0x18), lVar1 != 0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
      if ((*(byte *)(lVar1 + 0x10) & 2) != 0) {
        return;
      }
      this_00 = (this->fields).mobilePlayModeController;
      if ((this_00 != (TouchPlayModeController *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,1,(MethodInfo *)0x0);
          this_01 = (this->fields)._EditModeStateMachine_k__BackingField;
          auStackX_8[0] = 0x3b;
          value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
          if (this_01 != (EditorStateMachine *)0x0) {
            FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,value,(MethodInfo *)0x0);
            (this->fields).enterBuildModeOnceGuard = 1;
            return;
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


/* Void MoveToSelectedObject() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_MoveToSelectedObject
               (TouchEditModeController *this,MethodInfo *method)

{
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (this_00 != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(this_00,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (((pMVar2 != (MainCameraManager *)0x0) &&
        (pMVar3 = (pMVar2->fields).cameraController, pMVar3 != (MVCameraController *)0x0)) &&
       (this_01 = (pMVar3->fields).cameraStack, this_01 != (MVCameraController_CameraStack *)0x0)) {
      pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                         (this_01,(MethodInfo *)0x0);
      uStack_5 = 0;
      if (pMVar4 != (MVCameraBase *)0x0) {
        uStack_6 = 0;
        uStack_7 = 0;
        uStack_8 = 0;
        uStack_5 = 0;
        (*(pMVar4->klass->vtable).FocusOnObject.methodPtr)
                  (pMVar4,pMVar1,TypeRef__System__Activator__T._0_4_,&uStack_5,&uStack_8,
                   (pMVar4->klass->vtable).FocusOnObject.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnApplicationFocus(Boolean) */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_OnApplicationFocus
               (TouchEditModeController *this,bool focus,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if (focus != 0) {
    (this->fields).focusSuppressInput = 1;
    pcVar2 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcVar1)();
    (this->fields).focusTime = fVar4;
  }
  return;
}


/* Void RegisterPlayModeController(TouchPlayModeController) */

void Assembly-CSharp.dll::TouchEditModeController::
     TouchEditModeController_RegisterPlayModeController
               (TouchEditModeController *this,TouchPlayModeController *mobilePlayModeController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__TouchEditModeController__LeaveEditPlayMode__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).mobilePlayModeController = mobilePlayModeController;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).mobilePlayModeController >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((mobilePlayModeController != (TouchPlayModeController *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)mobilePlayModeController,(MethodInfo *)0x0),
     this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    pUVar6 = (mobilePlayModeController->fields).OnLeaveEditPlayMode;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__TouchEditModeController__LeaveEditPlayMode__,
               (MethodInfo *)0x0);
    pUVar6 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pUVar6 == (UnityAction *)0x0) {
      (mobilePlayModeController->fields).OnLeaveEditPlayMode = (UnityAction *)0x0;
    }
    else {
      pUVar7 = (UnityAction *)0x0;
      if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar7 = pUVar6;
      }
      if (pUVar7 == (UnityAction *)0x0) {
        FUN_?(pUVar6,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (mobilePlayModeController->fields).OnLeaveEditPlayMode = pUVar7;
      pUVar7 = (UnityAction *)0x0;
      if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar7 = pUVar6;
      }
      if (pUVar7 == (UnityAction *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(mobilePlayModeController->fields).OnLeaveEditPlayMode >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RegisterShortcuts() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_RegisterShortcuts
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  MethodInfo__TouchEditModeController___RegisterShortcuts_b__62_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouchEditModeController___RegisterShortcuts_b__62_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                        );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar2,(Object *)this,
             MethodInfo__TouchEditModeController___RegisterShortcuts_b__62_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                        );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar2,(Object *)this,
             MethodInfo__TouchEditModeController___RegisterShortcuts_b__62_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar3 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar3->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar3);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar4 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar4 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar5 = (longlong)(pLVar4->fields)._size;
    uVar6 = 0;
    if (0 < lVar5) {
      lVar7 = 0;
      lVar8 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar4 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar4 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar4->fields)._size <= uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar10 = (pLVar4->fields)._items;
        if (pTVar10 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar10->max_length <= uVar6) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar10->vector + lVar8 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,pEVar2,
                           (pMVar3->field7_0x38).rgctx_data[1].method);
        if (bVar11 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar7 < lVar5);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Respawn() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Respawn
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
     pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar4->fields).OnKillSelf != (Action *)0x0) {
      pAVar5 = (pGVar4->fields).OnKillSelf;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,(pAVar5->fields)._._.method);
      return;
    }
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Set(Boolean) */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Set
               (TouchEditModeController *this,bool snap,MethodInfo *method)

{
  (this->fields).gridSnap = snap;
  return;
}


/* Void SetState(EditorEvent) */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_SetState
               (TouchEditModeController *this,EditorEvent__Enum editorEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields)._EditModeStateMachine_k__BackingField;
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000010);
  if (pEVar1 == (EditorStateMachine *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((pEVar1->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (pEVar1->fields)._.nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pEVar1->fields)._.nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((pEVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (pEVar1->fields)._.currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pEVar1->fields)._.currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_00 = (pEVar1->fields)._.transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((pEVar1->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (pEVar1->fields)._.stateName = pSVar3;
      func_?(&(pEVar1->fields)._.stateName);
      (pEVar1->fields)._.currentState = pIVar10;
      func_?(&(pEVar1->fields)._.currentState);
      (pEVar1->fields)._.nextEvent = (Object *)0x0;
      func_?(&(pEVar1->fields)._.nextEvent);
      (pEVar1->fields)._.prevEvent = (pEVar1->fields)._.curEvent;
      func_?(&pEVar1->fields);
      (pEVar1->fields)._.curEvent = evt;
      func_?(&(pEVar1->fields)._.curEvent);
      if ((pEVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(pEVar1->fields)._.data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((pEVar1->fields)._.clearStack == 0) {
      (pEVar1->fields)._.clearStack = 1;
    }
    else {
      pSVar11 = (pEVar1->fields)._.stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void SetUIReady() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_SetUIReady
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchEditModeController__SetUIReady__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    (this_00->fields).stackReady = 1;
    UIStack::UIStack_UpdateStack(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
       pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
      pAVar3 = (pFVar2->fields).callbacks;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__TouchEditModeController__SetUIReady__,
                 (MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar3 = (Action *)0x0;
      if (pAVar4 != (Action *)0x0) {
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar4;
        }
        if (pAVar3 == (Action *)0x0) {
          FUN_?(pAVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
         pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
        bVar6 = iRam_? != 0;
        (pFVar2->fields).callbacks = pAVar3;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(pFVar2->fields).callbacks >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Update
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).focusSuppressInput != 0) {
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
    iVar3 = (*pcRam_?)();
    if (iVar3 < 1) {
      bVar4 = false;
    }
    else {
      uStack_5 = 0;
      uStack_6 = 0;
      uStack_7 = 0;
      uStack_8 = 0;
      uStack_9 = 0;
      uStack_10 = 0;
      uStack_11 = 0;
      uStack_12 = 0;
      uStack_13 = 0;
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
      (*pcRam_?)(0,&uStack_6);
      bVar4 = uStack_10._4_4_ == 0;
    }
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
    fVar14 = (float)(*pcRam_?)();
    if (_UNK_? < fVar14 - (this->fields).focusTime) {
      bVar4 = true;
    }
    if (bVar4) {
      (this->fields).focusSuppressInput = 0;
    }
    else {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
    }
  }
  if ((this->fields)._EditModeStateMachine_k__BackingField != (EditorStateMachine *)0x0) {
    pEVar15 = (this->fields)._EditModeStateMachine_k__BackingField;
    pEVar16 = pEVar15->klass;
    (*(pEVar16->vtable).Update.methodPtr)(pEVar15,(pEVar16->vtable).Update.method);
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar17 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_Deprecated_ToggleHD,KeyState__Enum_Down,(MethodInfo *)0x0)
  ;
  if (bVar17 != 0) {
    pUVar18 = (this->fields).uiStack;
    if (pUVar18 != (UIStack *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar19 = (pUVar18->fields).stackableUiElements;
      if (pLVar19 != (List_1_UIStack_StackElement_ *)0x0) {
        if (2 < (pLVar19->fields)._size) {
          return;
        }
        if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
          FUN_?();
        }
        NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
        return;
      }
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


/* Void <RegisterShortcuts>b__62_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::TouchEditModeController::
     TouchEditModeController__RegisterShortcuts_b__62_0
               (TouchEditModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchEditModeController__Respawn__);
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
            (this_00,(Object *)this,MethodInfo__TouchEditModeController__Respawn__,(MethodInfo *)0x0
            );
  if (x != (IShortcutKeyRegister *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RegisterShortcuts>b__62_1(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::TouchEditModeController::
     TouchEditModeController__RegisterShortcuts_b__62_1
               (TouchEditModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchEditModeController__MoveToSelectedObject__);
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
            (this_00,(Object *)this,MethodInfo__TouchEditModeController__MoveToSelectedObject__,
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


/* TouchEditModeController() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController__ctor
               (TouchEditModeController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).enterBuildModeOnceGuard = 1;
  (this->fields).focusSuppressInput = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x30529dd4,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean get_IsInPlayInEditMode() */

bool Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_get_IsInPlayInEditMode
               (TouchEditModeController *this,MethodInfo *method)

{
  return (this->fields).isInPlayInEditMode;
}

