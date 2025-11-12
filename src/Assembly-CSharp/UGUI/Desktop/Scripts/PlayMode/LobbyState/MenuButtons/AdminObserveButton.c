
/* Void DoAction() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     AdminObserveButton::AdminObserveButton_DoAction(AdminObserveButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
                  MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c___DoAction_b__0_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
              (this_00,3,1,-1,::StringLiteral__,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ILockCursorManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pMVar3 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar3 == (MVGameControllerDesktop *)0x0) ||
         ((pMVar3->fields).lockCursorManager == (ILockCursorManager *)0x0))
      goto code_?;
      FUN_?();
    }
    if ((this->fields)._.shouldPop != 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(
                   TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                   ->_1).field_0x1c == 0) {
        FUN_?(
                     TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                     );
      }
      this_01 = TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                ->static_fields->__9__0_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(
                     TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                     ->_1).field_0x1c == 0) {
          FUN_?(
                       TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                       );
        }
        object = TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                 ->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c___DoAction_b__0_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
        ->static_fields->__9__0_0 = this_01;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)
                         &TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                          ->static_fields->__9__0_0 >> 0xc);
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

