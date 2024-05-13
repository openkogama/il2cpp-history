
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
                    ProfileSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ProfileSettingsMenu>_ProfileSettingsMenu_
                   );
    func_?(&
                    SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                   );
    func_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    func_?(&
                    WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__LobbyFlowMenu____c___GoToMenu_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__LobbyFlowMenu____c__DisplayClass24_0___GoToMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_0);
    func_?(&
                    MethodInfo__LobbyFlowMenu____c__DisplayClass24_1___GoToMenu_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_1);
    func_?(&
                    MethodInfo__LobbyFlowMenu____c__DisplayClass24_2___GoToMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_2);
    func_?(&
                    MethodInfo__LobbyFlowMenu____c__DisplayClass24_3___GoToMenu_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_3);
    func_?(&TypeInfo__LobbyFlowMenu____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pGVar2 = pGVar1;
  if ((TypeInfo__LobbyFlowMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LobbyFlowMenu____c);
  }
  callbackFunction = TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0;
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
               MethodInfo__LobbyFlowMenu____c___GoToMenu_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0 = callbackFunction;
    func_?(&TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0,callbackFunction);
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
    method_00 = TypeInfo__LobbyFlowMenu____c__DisplayClass24_2;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
              ((WinningConditionType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
    original = (this->fields).winningConditionBriefingMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar4 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                       );
    if (pOVar3 != (Object *)0x0) {
      pOVar3[1].klass = pOVar4;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                ((Component *)this,(MethodInfo *)0x0);
      pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar5,pOVar3,
                 MethodInfo__LobbyFlowMenu____c__DisplayClass24_2___GoToMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      winConType = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                ((GameObject *)&UNK_?,(BaseEventData *)0x0,pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (pOVar3[1].klass != (Object__Class *)0x0) {
        WinningConditionBriefing::WinningConditionBriefing_Initialize
                  ((WinningConditionBriefing *)pOVar3[1].klass,
                   (WinningConditionType__Enum)winConType,(MethodInfo *)0x0);
        pOVar4 = pOVar3[1].klass;
        if (pOVar4 != (Object__Class *)0x0) {
          (pOVar4->_0).declaringType = (Il2CppClass *)(this->fields).selectedTeam;
          *(undefined1 *)&(pOVar4->_0).castClass = 1;
          return;
        }
      }
    }
    break;
  case LobbyFlowMenu_LobbyFlowMenuType__Enum_Settings:
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)this);
    original_00 = (this->fields).profileSettingsMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar4 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_00,
                        ProfileSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ProfileSettingsMenu>_ProfileSettingsMenu_
                       );
    if (pOVar3 != (Object *)0x0) {
      pOVar3[1].klass = pOVar4;
      func_?();
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar5,pOVar3,
                 MethodInfo__LobbyFlowMenu____c__DisplayClass24_0___GoToMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (pOVar3[1].klass != (Object__Class *)0x0) {
        ProfileSettingsMenu::ProfileSettingsMenu_UpdateBackButtonVisibility
                  ((ProfileSettingsMenu *)pOVar3[1].klass,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case LobbyFlowMenu_LobbyFlowMenuType__Enum_TeamSelect:
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)this);
    original_01 = (this->fields).teamMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar4 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_01,
                        TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    if (pOVar3 != (Object *)0x0) {
      pOVar3[1].klass = pOVar4;
      func_?();
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar5,pOVar3,
                 MethodInfo__LobbyFlowMenu____c__DisplayClass24_1___GoToMenu_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (pOVar3[1].klass != (Object__Class *)0x0) {
        TeamMenu::TeamMenu_UpdateBackButtonVisibility((TeamMenu *)pOVar3[1].klass,(MethodInfo *)0x0)
        ;
        return;
      }
    }
    break;
  case LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect:
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)this);
    original_02 = (this->fields).spawnRoleMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar4 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_02,
                        SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                       );
    if (pOVar3 != (Object *)0x0) {
      pOVar3[1].klass = pOVar4;
      func_?();
      if (pOVar3[1].klass != (Object__Class *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize
                  ((SpawnRoleMenu *)pOVar3[1].klass,(this->fields).selectedTeam,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar5,pOVar3,
                   MethodInfo__LobbyFlowMenu____c__DisplayClass24_3___GoToMenu_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,pEVar5,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_CamMaskMode
              (this_01,(this->fields).cameraMaskMode,(MethodInfo *)0x0);
    if ((this->fields).haveSetSelectedTeam == 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
      (this->fields).selectedTeam = (pMVar1->fields)._._Team_k__BackingField;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pLVar2 = (this->fields).menuOrder;
    if (pLVar2 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
      piVar3 = &(pLVar2->fields)._version;
      *piVar3 = *piVar3 + 1;
      (pLVar2->fields)._size = 0;
      pMVar4 = 
      MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
      ;
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).menuOrder;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pRVar5 = (this_00->fields)._items;
        piVar3 = &(this_00->fields)._version;
        *piVar3 = *piVar3 + 1;
        if (pRVar5 != (RegexCharClass_SingleRange__Array *)0x0) {
          uVar6 = (this_00->fields)._size;
          if (uVar6 < pRVar5->max_length) {
            (this_00->fields)._size = uVar6 + 1;
            if (pRVar5->max_length <= uVar6) goto code_?;
            pRVar5->vector[uVar6].First = 0;
            pRVar5->vector[uVar6].Last = 0;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                      (this_00,(RegexCharClass_SingleRange)0x0,pMVar4->klass->rgctx_data[0xe].method
                      );
          }
          cVar7 = (*(code *)(this->klass->vtable).CanShowTeamSelect.method)();
          if (cVar7 != '\0') {
            if ((this->fields).menuOrder == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0)
            goto code_?;
            func_?();
          }
          cVar7 = (*(code *)(this->klass->vtable).CanShowBreifing.method)();
          if (cVar7 != '\0') {
            if ((this->fields).menuOrder == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0)
            goto code_?;
            func_?();
          }
          cVar7 = (*(code *)(this->klass->vtable).CanShowSpawnRoleSelect.method)();
          if (cVar7 == '\0') {
            return;
          }
          if ((this->fields).menuOrder != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
            func_?();
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
                    MethodInfo__LobbyFlowMenu____c___StartPlaying_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyFlowMenu____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__LobbyFlowMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LobbyFlowMenu____c);
  }
  callbackFunction = TypeInfo__LobbyFlowMenu____c->static_fields->__9__25_0;
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
               MethodInfo__LobbyFlowMenu____c___StartPlaying_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyFlowMenu____c->static_fields->__9__25_0 = callbackFunction;
    func_?(&TypeInfo__LobbyFlowMenu____c->static_fields->__9__25_0,callbackFunction);
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
          func_?(pLVar1,3,
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
                          (this,(this->klass->vtable).GoToPreviousMenu.methodPtr);
        if (cVar6 == '\0') {
          return;
        }
        pLVar1 = (this->fields).menuOrder;
        if (pLVar1 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
          func_?(pLVar1,4,
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


/* Void set_SelectedTeam(MVTeam) */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_set_SelectedTeam
               (LobbyFlowMenu *this,MVTeam__Enum value,MethodInfo *method)

{
  (this->fields).selectedTeam = value;
  (this->fields).haveSetSelectedTeam = 1;
  return;
}

