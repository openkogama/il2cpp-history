
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
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,unaff_EBX,MethodInfo__LevelRewardsLobbyState__ShowRewards__,(MethodInfo *)0x0
              );
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
    if (pAVar5 == (Action *)0x0) {
      (pLVar3->fields).OnRewardsReturned = (Action *)0x0;
      ppAStack6 = &(pLVar3->fields).OnRewardsReturned;
      pAStack7 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar8 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar5;
    }
    if (pAVar8 != (Action *)0x0) {
      (pLVar3->fields).OnRewardsReturned = pAVar8;
      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
      pAStack7 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAStack7 = pAVar5;
      }
      if (pAStack7 != (Action *)0x0) {
        ppAStack6 = &(pLVar3->fields).OnRewardsReturned;
        func_?();
        return;
      }
    }
  }
  _ppAStack00000018 = uVar4;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
         (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)(pLVar7->fields).unseenLevelRewards,
         this_00 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__
                          );
        if (iVar8 < 1) {
          return;
        }
        this_02 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor(this_02,(MethodInfo *)0x0);
        original = (Object *)in_stack_5[1].monitor;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pLVar9 = (List_1_System_Object_ *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            (original,
                             LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                            );
        if (this_02 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
          (this_02->fields)._._defaultValue_k__BackingField = pLVar9;
          func_?();
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (in_stack_5,(MethodInfo *)0x0);
          callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                     (Object *)this_02,
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
          this_01 = (LevelRewardAnimation *)(this_02->fields)._._defaultValue_k__BackingField;
          if (this_01 != (LevelRewardAnimation *)0x0) {
            LevelRewardAnimation::LevelRewardAnimation_Initialize
                      (this_01,(Dictionary_2_System_Int32_System_Int32_ *)this_00,(MethodInfo *)0x0)
            ;
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar6 != (MVNetworkGame *)0x0) &&
               (pLVar7 = (pMVar6->fields).levelRewardsManager, pLVar7 != (LevelRewardsManager *)0x0)
               ) {
              LevelRewardsManager::LevelRewardsManager_ClearRewards(pLVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  uVar10 = func_?(&stack0xfffffff4);
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
       (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(pLVar4->fields).unseenLevelRewards,
       this_00 !=
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0)) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__
                        );
      if (iVar5 < 1) {
        return;
      }
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      pLVar6 = (this->fields).levelRewardAnimation;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pLVar7 = (List_1_System_Object_ *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pLVar6,
                          LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                         );
      if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
        (this_01->fields)._._defaultValue_k__BackingField = pLVar7;
        func_?(&this_01->fields,pLVar7);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_01,
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
        pLVar6 = (LevelRewardAnimation *)(this_01->fields)._._defaultValue_k__BackingField;
        if (pLVar6 != (LevelRewardAnimation *)0x0) {
          LevelRewardAnimation::LevelRewardAnimation_Initialize
                    (pLVar6,(Dictionary_2_System_Int32_System_Int32_ *)this_00,(MethodInfo *)0x0);
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) &&
             (pLVar4 = (pMVar3->fields).levelRewardsManager, pLVar4 != (LevelRewardsManager *)0x0))
          {
            LevelRewardsManager::LevelRewardsManager_ClearRewards(pLVar4,(MethodInfo *)0x0);
            return;
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
          this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
          original = (Object *)in_stack_6[1].monitor;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pLVar8 = (List_1_System_Object_ *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             (original,
                              LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                             );
          if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
            (this_01->fields)._._defaultValue_k__BackingField = pLVar8;
            func_?(&this_01->fields);
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (in_stack_6,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)this_01,
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
            this_00 = (LevelRewardAnimation *)(this_01->fields)._._defaultValue_k__BackingField;
            if (this_00 != (LevelRewardAnimation *)0x0) {
              LevelRewardAnimation::LevelRewardAnimation_Initialize
                        (this_00,(Dictionary_2_System_Int32_System_Int32_ *)pDVar3,(MethodInfo *)0x0
                        );
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (pLVar2 = (pMVar1->fields).levelRewardsManager,
                 pLVar2 != (LevelRewardsManager *)0x0)) {
                LevelRewardsManager::LevelRewardsManager_ClearRewards(pLVar2,(MethodInfo *)0x0);
                return;
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
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,unaff_ESI,MethodInfo__LevelRewardsLobbyState__ShowRewards__,
                 (MethodInfo *)0x0);
      pAVar10 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar10,(Delegate *)this_02,(MethodInfo *)0x0);
      uVar11 = CONCAT44(TypeInfo__System__Action,pAVar10);
      if (pAVar10 == (Action *)0x0) {
        (pLVar2->fields).OnRewardsReturned = (Action *)0x0;
        ppAStack12 = &(pLVar2->fields).OnRewardsReturned;
        pAStack13 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar14 = (Action *)0x0;
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar14 = pAVar10;
      }
      if (pAVar14 != (Action *)0x0) {
        (pLVar2->fields).OnRewardsReturned = pAVar14;
        uVar11 = CONCAT44(TypeInfo__System__Action,pAVar10);
        pAStack13 = (Action *)0x0;
        if (pAVar10->klass == TypeInfo__System__Action) {
          pAStack13 = pAVar10;
        }
        if (pAStack13 != (Action *)0x0) {
          ppAStack12 = &(pLVar2->fields).OnRewardsReturned;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar11 = func_?();
code_?:
  _ppAStack0000001c = uVar11;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

