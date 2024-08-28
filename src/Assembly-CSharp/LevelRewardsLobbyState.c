
/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_OnDestroy
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__LevelRewardsLobbyState__ShowRewards__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pLVar3 = (pMVar2->fields).levelRewardsManager, pLVar3 == (LevelRewardsManager *)0x0)) {
    uVar4 = func_?();
  }
  else {
    pAVar5 = (pLVar3->fields).OnRewardsReturned;
    ppAVar6 = &(pLVar3->fields).OnRewardsReturned;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,unaff_EBX,MethodInfo__LevelRewardsLobbyState__ShowRewards__,(MethodInfo *)0x0
              );
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
    ppAStack7 = ppAVar6;
    if (pAVar5 == (Action *)0x0) {
      pAStack8 = (Action *)0x0;
      *ppAVar6 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar9 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar5;
    }
    if (pAVar9 != (Action *)0x0) {
      *ppAVar6 = pAVar9;
      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
      pAStack8 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAStack8 = pAVar5;
      }
      if (pAStack8 != (Action *)0x0) {
        func_?();
        return;
      }
    }
  }
  _ppAStack00000018 = uVar4;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_OnEnable
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper, pSVar2 != (SpawnRoleModeTypeWrapper *)0x0)
     ) {
    bVar3 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (pSVar2,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar1 == (SpawnRoleDataMediator *)0x0) ||
         (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
         pSVar2 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
      bVar3 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                        (pSVar2,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?(&
                      LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&
                      MethodInfo__LevelRewardsLobbyState____c__DisplayClass5_0___ShowRewards_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__LevelRewardsLobbyState____c__DisplayClass5_0);
      cRam_? = '\x01';
    }
    method_00 = (MethodInfo *)&UNK_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (in_stack_5,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar4,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar6 != (MVNetworkGame *)0x0) &&
          (pLVar7 = (pMVar6->fields).levelRewardsManager, pLVar7 != (LevelRewardsManager *)0x0)) &&
         (pDVar8 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(pLVar7->fields).unseenLevelRewards,
         pDVar8 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)0x0)) {
        iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                           (pDVar8,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__
                           );
        if (iVar9 < 1) {
          return;
        }
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (value,ExceptionArgument__Enum_obj,method_00);
        original = (Object *)in_stack_5[1].monitor;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar10 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            (original,
                             LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                            );
        if (value != (Object *)0x0) {
          value[1].klass = pOVar10;
          func_?();
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (in_stack_5,(MethodInfo *)0x0);
          callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__LevelRewardsLobbyState____c__DisplayClass5_0___ShowRewards_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar4,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          if (value[1].klass != (Object__Class *)0x0) {
            LevelRewardAnimation::LevelRewardAnimation_Initialize
                      ((LevelRewardAnimation *)value[1].klass,
                       (Dictionary_2_System_Int32_System_Int32_ *)pDVar8,(MethodInfo *)0x0);
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar6 != (MVNetworkGame *)0x0) &&
               (pLVar7 = (pMVar6->fields).levelRewardsManager, pLVar7 != (LevelRewardsManager *)0x0)
               ) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pDVar8 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)(pLVar7->fields).unseenLevelRewards;
              if (pDVar8 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                          (pDVar8,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar11 = func_?(&stack0xfffffff4);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_OnPointerDown
               (LevelRewardsLobbyState *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData == (PointerEventData *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((eventData->fields)._button_k__BackingField == 0) && ((this->fields).isMouseOver != 0)) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
      func_?(&TypeInfo__LevelRewardsLobbyState);
      func_?(&TypeInfo__NotificationController);
      cRam_? = '\x01';
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pLVar3 = (pMVar2->fields).levelRewardsManager, pLVar3 == (LevelRewardsManager *)0x0))
    goto code_?;
    iVar4 = (pLVar3->fields)._NextReward_k__BackingField.key;
    if (iVar4 != TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown) {
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__NotificationController);
      }
      NotificationController::NotificationController_PushNotification_1
                (NotificationType__Enum_NextLevelReward,NotificationLifetime__Enum_SuperHigh,
                 (MethodInfo *)0x0);
      TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown = iVar4;
    }
  }
  return;
}


/* Void ShowLevelNotification() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_ShowLevelNotification
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    func_?(&TypeInfo__LevelRewardsLobbyState);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pLVar2 = (pMVar1->fields).levelRewardsManager, pLVar2 != (LevelRewardsManager *)0x0)) {
    iVar3 = (pLVar2->fields)._NextReward_k__BackingField.key;
    if (iVar3 != TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown) {
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__NotificationController);
      }
      NotificationController::NotificationController_PushNotification_1
                (NotificationType__Enum_NextLevelReward,NotificationLifetime__Enum_SuperHigh,
                 (MethodInfo *)0x0);
      TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown = iVar3;
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowRewards() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_ShowRewards
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__LevelRewardsLobbyState____c__DisplayClass5_0___ShowRewards_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LevelRewardsLobbyState____c__DisplayClass5_0);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&UNK_?;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar3 != (MVNetworkGame *)0x0) &&
        (pLVar4 = (pMVar3->fields).levelRewardsManager, pLVar4 != (LevelRewardsManager *)0x0)) &&
       (pDVar5 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)(pLVar4->fields).unseenLevelRewards,
       pDVar5 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)0x0)) {
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (pDVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__
                        );
      if (iVar6 < 1) {
        return;
      }
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,method_00);
      original = (this->fields).levelRewardAnimation;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar7 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                         );
      if (value != (Object *)0x0) {
        value[1].klass = pOVar7;
        func_?(value + 1,pOVar7);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__LevelRewardsLobbyState____c__DisplayClass5_0___ShowRewards_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (value[1].klass != (Object__Class *)0x0) {
          LevelRewardAnimation::LevelRewardAnimation_Initialize
                    ((LevelRewardAnimation *)value[1].klass,
                     (Dictionary_2_System_Int32_System_Int32_ *)pDVar5,(MethodInfo *)0x0);
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) &&
             (pLVar4 = (pMVar3->fields).levelRewardsManager, pLVar4 != (LevelRewardsManager *)0x0))
          {
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__
                             );
              cRam_? = '\x01';
            }
            pDVar5 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)(pLVar4->fields).unseenLevelRewards;
            if (pDVar5 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                        (pDVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_Start
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__);
    func_?(&MethodInfo__LevelRewardsLobbyState__ShowRewards__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pLVar2 = (pMVar1->fields).levelRewardsManager, pLVar2 != (LevelRewardsManager *)0x0)) &&
     (pDVar3 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(pLVar2->fields).unseenLevelRewards,
     pDVar3 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)0x0)) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (pDVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__);
    if (iVar4 != 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                       );
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                       );
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&
                        LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&
                        MethodInfo__LevelRewardsLobbyState____c__DisplayClass5_0___ShowRewards_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__LevelRewardsLobbyState____c__DisplayClass5_0);
        cRam_? = '\x01';
      }
      method_00 = (MethodInfo *)&UNK_?;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (in_stack_6,(MethodInfo *)0x0);
      if (pGVar5 != (GameObject *)0x0) {
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(pGVar5,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 != (MVNetworkGame *)0x0) &&
            (pLVar2 = (pMVar1->fields).levelRewardsManager, pLVar2 != (LevelRewardsManager *)0x0))
           && (pDVar3 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)(pLVar2->fields).unseenLevelRewards,
              pDVar3 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)0x0)) {
          iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                            (pDVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__
                            );
          if (iVar4 < 1) {
            return;
          }
          value = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (value,ExceptionArgument__Enum_obj,method_00);
          original = (Object *)in_stack_6[1].monitor;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar8 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             (original,
                              LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                             );
          if (value != (Object *)0x0) {
            value[1].klass = pOVar8;
            func_?(value + 1);
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (in_stack_6,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__LevelRewardsLobbyState____c__DisplayClass5_0___ShowRewards_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar5,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            if (value[1].klass != (Object__Class *)0x0) {
              LevelRewardAnimation::LevelRewardAnimation_Initialize
                        ((LevelRewardAnimation *)value[1].klass,
                         (Dictionary_2_System_Int32_System_Int32_ *)pDVar3,(MethodInfo *)0x0);
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (pLVar2 = (pMVar1->fields).levelRewardsManager,
                 pLVar2 != (LevelRewardsManager *)0x0)) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pDVar3 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)(pLVar2->fields).unseenLevelRewards;
                if (pDVar3 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                            (pDVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__
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
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pLVar2 = (pMVar1->fields).levelRewardsManager, pLVar2 != (LevelRewardsManager *)0x0)) {
      pAVar10 = (pLVar2->fields).OnRewardsReturned;
      ppAVar11 = &(pLVar2->fields).OnRewardsReturned;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,unaff_ESI,MethodInfo__LevelRewardsLobbyState__ShowRewards__,
                 (MethodInfo *)0x0);
      pAVar10 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar10,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar12 = CONCAT44(TypeInfo__System__Action,pAVar10);
      ppAStack13 = ppAVar11;
      if (pAVar10 == (Action *)0x0) {
        pAStack14 = (Action *)0x0;
        *ppAVar11 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar15 = (Action *)0x0;
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar15 = pAVar10;
      }
      if (pAVar15 != (Action *)0x0) {
        *ppAVar11 = pAVar15;
        uVar12 = CONCAT44(TypeInfo__System__Action,pAVar10);
        pAStack14 = (Action *)0x0;
        if (pAVar10->klass == TypeInfo__System__Action) {
          pAStack14 = pAVar10;
        }
        if (pAStack14 != (Action *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar12 = func_?();
code_?:
  _ppAStack0000001c = uVar12;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

