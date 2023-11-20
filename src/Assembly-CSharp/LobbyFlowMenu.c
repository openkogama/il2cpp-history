
/* Boolean CanGoToNextMenu() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanGoToNextMenu
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  bVar1 = false;
  bVar2 = false;
  iStack_3 = 0;
  pLVar4 = (this->fields).menuOrder;
  if (pLVar4 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    do {
      if ((pLVar4->fields)._size <= iStack_3) {
        return bVar2;
      }
      if (bVar1) {
        bVar2 = true;
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).menuOrder;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,iStack_3,
                         MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                        );
      RVar6 = (RegexCharClass_SingleRange)func_?(4,this);
      if (RVar5 == RVar6) {
        bVar1 = true;
      }
      pLVar4 = (this->fields).menuOrder;
      iStack_3 = iStack_3 + 1;
    } while (pLVar4 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0);
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean CanShowBreifing() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanShowBreifing
               (LobbyFlowMenu *this,MethodInfo *method)

{
  WStack_1 = WinningConditionType__Enum_Collectible;
  bVar2 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                    (&WStack_1,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean CanShowSpawnRoleSelect() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanShowSpawnRoleSelect
               (LobbyFlowMenu *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields).teamManager;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) && (this_00 != (MVTeamManager *)0x0)) {
      bVar3 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                        (this_00,(pMVar2->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean CanShowTeamSelect() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanShowTeamSelect
               (LobbyFlowMenu *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    iVar2 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
    return 1 < iVar2;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* LobbyFlowMenu+LobbyFlowMenuType GetNextMenuType() */

LobbyFlowMenu_LobbyFlowMenuType__Enum
Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GetNextMenuType
          (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  bVar1 = false;
  iStack_2 = 0;
  pLVar3 = (this->fields).menuOrder;
  do {
    if (pLVar3 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      LVar5 = (*pcVar4)();
      return LVar5;
    }
    if ((pLVar3->fields)._size <= iStack_2) {
      return LobbyFlowMenu_LobbyFlowMenuType__Enum_None;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).menuOrder;
    if (bVar1) {
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iStack_2,
                           MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                          );
        return (LobbyFlowMenu_LobbyFlowMenuType__Enum)RVar6;
      }
      goto code_?;
    }
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,iStack_2,
                       MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                      );
    RVar7 = (RegexCharClass_SingleRange)func_?(4,this);
    bVar1 = RVar6 == RVar7;
    pLVar3 = (this->fields).menuOrder;
    iStack_2 = iStack_2 + 1;
  } while( true );
}


/* LobbyFlowMenu+LobbyFlowMenuType GetPreviousMenuType() */

LobbyFlowMenu_LobbyFlowMenuType__Enum
Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GetPreviousMenuType
          (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).menuOrder;
  bVar2 = false;
  if (pLVar1 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    index = (pLVar1->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return LobbyFlowMenu_LobbyFlowMenuType__Enum_None;
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).menuOrder;
      if (bVar2) break;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                        );
      RVar4 = (RegexCharClass_SingleRange)func_?(4,this);
      bVar2 = RVar3 == RVar4;
    }
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                        );
      return (LobbyFlowMenu_LobbyFlowMenuType__Enum)RVar3;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  LVar6 = (*pcVar5)();
  return LVar6;
}


/* Void GoToMenu(LobbyFlowMenu+LobbyFlowMenuType) */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GoToMenu
               (LobbyFlowMenu *this,LobbyFlowMenu_LobbyFlowMenuType__Enum newMenuType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                   );
    func_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    func_?(&
                    WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__LobbyFlowMenu____c___GoToMenu_b__23_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__LobbyFlowMenu____c__DisplayClass23_0___GoToMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass23_0);
    func_?(&
                    MethodInfo__LobbyFlowMenu____c__DisplayClass23_1___GoToMenu_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass23_1);
    func_?(&
                    MethodInfo__LobbyFlowMenu____c__DisplayClass23_2___GoToMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass23_2);
    func_?(&TypeInfo__LobbyFlowMenu____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pGVar2 = pGVar1;
  if ((TypeInfo__LobbyFlowMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LobbyFlowMenu____c);
  }
  callbackFunction = TypeInfo__LobbyFlowMenu____c->static_fields->__9__23_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pGVar1 = pGVar2;
    if ((TypeInfo__LobbyFlowMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LobbyFlowMenu____c);
      pGVar1 = pGVar2;
    }
    object = TypeInfo__LobbyFlowMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__LobbyFlowMenu____c___GoToMenu_b__23_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyFlowMenu____c->static_fields->__9__23_0 = callbackFunction;
    func_?(&TypeInfo__LobbyFlowMenu____c->static_fields->__9__23_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  switch(newMenuType) {
  default:
    return;
  case LobbyFlowMenu_LobbyFlowMenuType__Enum_Briefing:
    pUVar3 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar3,(MethodInfo *)0x0);
    WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
              ((WinningConditionType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
    callbackFunction_00 = (this->fields).winningConditionBriefingMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pLVar4 = (List_1_System_Object_ *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)callbackFunction_00,
                         WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                        );
    if (pUVar3 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
      (pUVar3->fields)._._defaultValue_k__BackingField = pLVar4;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (WinningConditionBriefing *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pUVar3,
                 MethodInfo__LobbyFlowMenu____c__DisplayClass23_1___GoToMenu_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      winConType = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                ((GameObject *)&UNK_?,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      this_00 = (WinningConditionBriefing *)(pUVar3->fields)._._defaultValue_k__BackingField;
      if (this_00 != (WinningConditionBriefing *)0x0) {
        WinningConditionBriefing::WinningConditionBriefing_Initialize
                  (this_00,(WinningConditionType__Enum)winConType,(MethodInfo *)0x0);
        pLVar4 = (pUVar3->fields)._._defaultValue_k__BackingField;
        if (pLVar4 != (List_1_System_Object_ *)0x0) {
          pLVar4[1].fields._size = (this->fields).selectedTeam;
          *(undefined1 *)&pLVar4[1].fields._items = 1;
          return;
        }
      }
    }
    break;
  case LobbyFlowMenu_LobbyFlowMenuType__Enum_TeamSelect:
    pUVar3 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar3,(MethodInfo *)0x0);
    callbackFunction_00 = (WinningConditionBriefing *)(this->fields).teamMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pLVar4 = (List_1_System_Object_ *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)callbackFunction_00,
                         TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    if (pUVar3 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) break;
    (pUVar3->fields)._._defaultValue_k__BackingField = pLVar4;
    func_?();
    callbackFunction_00 =
         (WinningConditionBriefing *)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
    this = (LobbyFlowMenu *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)this,(Object *)pUVar3,
               MethodInfo__LobbyFlowMenu____c__DisplayClass23_0___GoToMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)callbackFunction_00,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)this,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pLVar4 = (pUVar3->fields)._._defaultValue_k__BackingField;
    if (pLVar4 == (List_1_System_Object_ *)0x0) break;
    pGVar1 = (GameObject *)pLVar4[2].monitor;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
code_?:
      newMenuType._0_1_ = LobbyFlowMenu_LobbyFlowMenuType__Enum_Briefing;
    }
    else {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar5 == (MVLocalPlayer *)0x0) ||
         (pSVar6 = (pMVar5->fields).spawnRoleDataMediator, pSVar6 == (SpawnRoleDataMediator *)0x0))
      break;
      BVar7 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::ByteEnum]::
              SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                        ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar6->fields).tierRequirement,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                        );
      bVar8 = (byte)BVar7;
      callbackFunction_00 =
           (WinningConditionBriefing *)CONCAT31((int3)((uint)callbackFunction_00 >> 8),bVar8);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar9 == (PlayerPlanetData *)0x0) break;
      bVar10 = (pPVar9->fields).gamePassTier;
      callbackFunction_00 = (WinningConditionBriefing *)(uint)CONCAT11(bVar10,bVar8);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar9 == (PlayerPlanetData *)0x0) break;
      if (bVar8 <= bVar10) goto code_?;
      newMenuType._0_1_ = bVar8 <= (pPVar9->fields).previewGamePassTier;
    }
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,(undefined1)newMenuType,(MethodInfo *)0x0);
      return;
    }
    break;
  case LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect:
    pUVar3 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar3,(MethodInfo *)0x0);
    callbackFunction_00 = (WinningConditionBriefing *)(this->fields).spawnRoleMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pLVar4 = (List_1_System_Object_ *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)callbackFunction_00,
                         SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                        );
    if (pUVar3 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
      (pUVar3->fields)._._defaultValue_k__BackingField = pLVar4;
      func_?();
      this_01 = (SpawnRoleMenu *)(pUVar3->fields)._._defaultValue_k__BackingField;
      if (this_01 != (SpawnRoleMenu *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize
                  (this_01,(this->fields).selectedTeam,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,
                   (Object *)pUVar3,
                   MethodInfo__LobbyFlowMenu____c__DisplayClass23_2___GoToMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,callbackFunction_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  bVar10 = 0;
  func_?();
  pbVar11 = (byte *)((int)&((ExecuteEvents_EventFunction_1_System_Object_ *)((int)this + -0x68e8efc0)
                          )->monitor + 3);
  *pbVar11 = ~*pbVar11;
  bVar8 = (byte)((uint)callbackFunction_00 >> 8);
  *(char *)(extraout_EDX + -0x33efb867) =
       *(char *)(extraout_EDX + -0x33efb867) + bVar8 +
       (CARRY1(extraout_CH,bVar8) || CARRY1(extraout_CH + bVar8,bVar10));
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void GoToNextMenu() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GoToNextMenu
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  bVar1 = false;
  bVar2 = false;
  iStack_3 = 0;
  pLVar4 = (this->fields).menuOrder;
  if (pLVar4 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    do {
      if ((pLVar4->fields)._size <= iStack_3) {
        if (!bVar2) {
          (*(code *)(this->klass->vtable).StartPlaying.method)(this,this->klass[1]._0.image);
          return;
        }
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        pLVar4 = (this->fields).menuOrder;
        bVar2 = false;
        iStack_3 = 0;
        if (pLVar4 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
        break;
      }
      if (bVar1) {
        bVar2 = true;
      }
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).menuOrder;
      if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar5,iStack_3,
                         MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                        );
      RVar7 = (RegexCharClass_SingleRange)func_?(4,this);
      if (RVar6 == RVar7) {
        bVar1 = true;
      }
      pLVar4 = (this->fields).menuOrder;
      iStack_3 = iStack_3 + 1;
    } while (pLVar4 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0);
  }
  goto code_?;
  while( true ) {
    if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar5,iStack_3,
                       MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                      );
    RVar7 = (RegexCharClass_SingleRange)func_?(4,this);
    bVar2 = RVar6 == RVar7;
    pLVar4 = (this->fields).menuOrder;
    iStack_3 = iStack_3 + 1;
    if (pLVar4 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
code_?:
    if ((pLVar4->fields)._size <= iStack_3) {
      LobbyFlowMenu_GoToMenu(this,LobbyFlowMenu_LobbyFlowMenuType__Enum_None,(MethodInfo *)0x0);
      return;
    }
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).menuOrder;
    if (bVar2) {
      if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar5,iStack_3,
                           MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                          );
        LobbyFlowMenu_GoToMenu(this,(LobbyFlowMenu_LobbyFlowMenuType__Enum)RVar6,(MethodInfo *)0x0);
        return;
      }
      break;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void GoToPreviousMenu() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GoToPreviousMenu
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  bVar1 = false;
  pLVar2 = (this->fields).menuOrder;
  if (pLVar2 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    index = (pLVar2->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        LobbyFlowMenu_GoToMenu(this,LobbyFlowMenu_LobbyFlowMenuType__Enum_None,(MethodInfo *)0x0);
        return;
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).menuOrder;
      if (bVar1) break;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                        );
      RVar4 = (RegexCharClass_SingleRange)func_?(4,this);
      bVar1 = RVar3 == RVar4;
    }
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                        );
      LobbyFlowMenu_GoToMenu(this,(LobbyFlowMenu_LobbyFlowMenuType__Enum)RVar3,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_OnDestroy
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
          (IPlayModeUI *)0x0) {
code_?:
        uVar2 = func_?(&stack0xfffffff8);
        func_?(uVar2);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar4 = func_?();
      if (cVar4 == '\0') {
        this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_00 == (MainCameraManager *)0x0) goto code_?;
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (this_00,MaskMode__Enum_Default,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_Start(LobbyFlowMenu *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_CamMaskMode
              (this_00,(this->fields).cameraMaskMode,(MethodInfo *)0x0);
    if ((this->fields).haveSetSelectedTeam == 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
      (this->fields).selectedTeam = (pMVar1->fields)._._Team_k__BackingField;
    }
    LobbyFlowMenu_UpdateAvailableMenues(this,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_StartPlaying
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__LobbyFlowMenu____c___StartPlaying_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyFlowMenu____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__LobbyFlowMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LobbyFlowMenu____c);
  }
  callbackFunction = TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__LobbyFlowMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LobbyFlowMenu____c);
    }
    object = TypeInfo__LobbyFlowMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__LobbyFlowMenu____c___StartPlaying_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0 = callbackFunction;
    func_?(&TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    bVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0);
    if (bVar1 == 0) {
      MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      func_?();
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      func_?();
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
         this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
        bVar1 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return;
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar3 != (GameEventManager *)0x0) &&
           ((pGVar3->fields).AvatarCommandsPlayMode !=
            (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
          if (*(int *)(in_stack_4 + 0x14) != 0) {
            (**(code **)(*(int *)(in_stack_4 + 0x14) + 0xc))();
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateAvailableMenues() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Clear__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).menuOrder;
  if (pLVar1 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
    ;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).menuOrder;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pRVar4 = (this_00->fields)._items;
      piVar2 = &(this_00->fields)._version;
      *piVar2 = *piVar2 + 1;
      if (pRVar4 != (RegexCharClass_SingleRange__Array *)0x0) {
        uVar5 = (this_00->fields)._size;
        if (uVar5 < pRVar4->max_length) {
          (this_00->fields)._size = uVar5 + 1;
          if (pRVar4->max_length <= uVar5) goto code_?;
          pRVar4->vector[uVar5].First = 0;
          pRVar4->vector[uVar5].Last = 0;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                    (this_00,(RegexCharClass_SingleRange)0x0,pMVar3->klass->rgctx_data[0xe].method);
        }
        cVar6 = (*(code *)(this->klass->vtable).CanShowTeamSelect.method)
                          (this,(this->klass->vtable).CanShowBreifing.methodPtr);
        if (cVar6 != '\0') {
          pLVar1 = (this->fields).menuOrder;
          if (pLVar1 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
          func_?(pLVar1,2,
                          MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                         );
        }
        cVar6 = (*(code *)(this->klass->vtable).CanShowBreifing.method)
                          (this,(this->klass->vtable).CanShowSpawnRoleSelect.methodPtr);
        if (cVar6 != '\0') {
          pLVar1 = (this->fields).menuOrder;
          if (pLVar1 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
          func_?(pLVar1,1,
                          MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                         );
        }
        cVar6 = (*(code *)(this->klass->vtable).CanShowSpawnRoleSelect.method)
                          (this,(this->klass->vtable).StartPlaying.methodPtr);
        if (cVar6 == '\0') {
          return;
        }
        pLVar1 = (this->fields).menuOrder;
        if (pLVar1 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
          func_?(pLVar1,3,
                          MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                         );
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* LobbyFlowMenu() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu__ctor(LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>)
    ;
    cRam_? = '\x01';
  }
  (this->fields).cameraMaskMode = 2;
  this_00 = (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
            );
  (this->fields).menuOrder = this_00;
  func_?(&(this->fields).menuOrder,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Void set_SelectedTeam(MVTeam) */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_set_SelectedTeam
               (LobbyFlowMenu *this,MVTeam__Enum value,MethodInfo *method)

{
  (this->fields).selectedTeam = value;
  (this->fields).haveSetSelectedTeam = 1;
  return;
}

