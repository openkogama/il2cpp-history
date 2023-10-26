
/* Void OnDestroy() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_OnDestroy
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                   );
    func_?(&TypeInfo__GamePassesProjectEarningsManager);
    func_?(&
                    MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                   );
    cRam_? = '\x01';
  }
  source = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
           TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (Action_1_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  if (this_00 == (Action_1_Object_ *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
               ,(MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
    source = 
    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    if (pDVar1 == (Delegate *)0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
           (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
      pAStack2 =
           (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
           0x0;
code_?:
      func_?();
      return;
    }
    pAStack2 =
         TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    pAVar3 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             func_?();
    if (pAVar3 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar3;
      source = 
      TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
      ;
      pAStack2 =
           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
      ;
      pAStack2 =
           (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
           func_?();
      if (pAStack2 !=
          (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
          0x0) goto code_?;
    }
  }
  pAStack2 = source;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnInactiveTierButtonPressed() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_OnInactiveTierButtonPressed
               (GameSetupMenu *this,MethodInfo *method)

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
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GameSetupMenu____c__DisplayClass15_0___OnInactiveTierButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GameSetupMenu____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__GameSetupMenu____c__DisplayClass15_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    pGVar1 = (this->fields).crystalPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar2 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar1,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    value[1].klass = pOVar2;
    func_?(value + 1,pOVar2);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__GameSetupMenu____c__DisplayClass15_0___OnInactiveTierButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRecieveEarningsReport(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_OnRecieveEarningsReport
               (GameSetupMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                   );
    func_?(&TypeInfo__GamePassesProjectEarningsManager);
    func_?(&
                    MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                   );
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_03 = (Action_1_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  if (this_03 == (Action_1_Object_ *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
           (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
code_?:
      func_?();
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?(&StringLiteral__0);
        cRam_? = '\x01';
      }
      this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_04 != (MVNetworkGame *)0x0) {
        pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0);
        pSVar4 = (String *)in_stack_5;
        if (((pMVar3 != (MVLocalPlayer *)0x0) && (in_stack_5 != (Object__Class *)0x0)) &&
           (this_00 = *(Dictionary_2_System_Object_GUILoginHandler_PlanetData_ **)
                       &(((String *)in_stack_5)->fields)._firstChar,
           this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
          pOVar6 = (Object *)(pMVar3->fields)._._ProfileID_k__BackingField;
          bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (this_00,pOVar6,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                            );
          piVar8 = (int *)in_stack_9[5].m_value;
          if (bVar7 == 0) {
            if (piVar8 != (int *)0x0) {
              in_stack_10 = *(MethodInfo **)(*piVar8 + 0x318);
              in_stack_11 = StringLiteral__0;
              (**(code **)(*piVar8 + 0x314))();
              return;
            }
          }
          else {
            this_01 = *(Dictionary_2_System_Int32Enum_System_Object_ **)&(pSVar4->fields)._firstChar
            ;
            if (this_01 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
              in_stack_10 =
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
              ;
              in_stack_11 = (String *)pOVar6;
              pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 (this_01,(Int32Enum__Enum)pOVar6,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                 );
              if ((pOVar6 != (Object *)0x0) &&
                 (this_02 = pOVar6[1].klass, this_02 != (Object__Class *)0x0)) {
                in_stack_12 = 0;
                in_stack_9 = (Int32 *)&UNK_?;
                in_stack_5 = this_02;
                MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport
                ::EarningsReport_get_TotalEarningsGold((EarningsReport *)this_02,(MethodInfo *)0x0);
                in_stack_12 = 0;
                in_stack_5 = (Object__Class *)StringLiteral_N0;
                in_stack_9 = (Int32 *)&stack0x00000014;
                in_stack_10 = (MethodInfo *)&UNK_?;
                pSVar4 = mscorlib.dll::System::Int32::Int32_ToString_1
                                   (in_stack_9,StringLiteral_N0,(MethodInfo *)0x0);
                if (pSVar4 != (String *)0x0) {
                  pSStack13 =
                       mscorlib.dll::System::String::String_Replace_1
                                 (pSVar4,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
                  if (piVar8 != (int *)0x0) {
                    uStack14 = *(undefined4 *)(*piVar8 + 0x318);
                    piStack15 = piVar8;
                    (**(code **)(*piVar8 + 0x314))();
                    return;
                  }
                }
              }
            }
          }
        }
      }
      func_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             func_?();
    if (pAVar1 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
      iVar17 = func_?();
      if (iVar17 != 0) goto code_?;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void ShowBoostEditMenu() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_ShowBoostEditMenu
               (GameSetupMenu *this,MethodInfo *method)

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
                    BoostEditMenu_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenu>_BoostEditMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GameSetupMenu____c__DisplayClass14_0___ShowBoostEditMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GameSetupMenu____c__DisplayClass14_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__GameSetupMenu____c__DisplayClass14_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).boosterEditMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        BoostEditMenu_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenu>_BoostEditMenu_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__GameSetupMenu____c__DisplayClass14_0___ShowBoostEditMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowGameEarnings() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_ShowGameEarnings
               (GameSetupMenu *this,MethodInfo *method)

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
                    GameEarningsMenu_MethodInfo__UnityEngine__Object__Instantiate<GameEarningsMenu>_GameEarningsMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GameSetupMenu____c__DisplayClass16_0___ShowGameEarnings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GameSetupMenu____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__GameSetupMenu____c__DisplayClass16_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).earningsMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        GameEarningsMenu_MethodInfo__UnityEngine__Object__Instantiate<GameEarningsMenu>_GameEarningsMenu_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__GameSetupMenu____c__DisplayClass16_0___ShowGameEarnings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowGamePassesShopDetails() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_ShowGamePassesShopDetails
               (GameSetupMenu *this,MethodInfo *method)

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
                    GamePassesShopDetails_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShopDetails>_GamePassesShopDetails_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GameSetupMenu____c__DisplayClass13_0___ShowGamePassesShopDetails_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GameSetupMenu____c__DisplayClass13_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__GameSetupMenu____c__DisplayClass13_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).gamePassesShopDetailsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        GamePassesShopDetails_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShopDetails>_GamePassesShopDetails_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__GameSetupMenu____c__DisplayClass13_0___ShowGamePassesShopDetails_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowMiscOptions() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_ShowMiscOptions
               (GameSetupMenu *this,MethodInfo *method)

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
                    GameSetupOptions_MethodInfo__UnityEngine__Object__Instantiate<GameSetupOptions>_GameSetupOptions_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GameSetupMenu____c__DisplayClass17_0___ShowMiscOptions_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GameSetupMenu____c__DisplayClass17_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__GameSetupMenu____c__DisplayClass17_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).optionsMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        GameSetupOptions_MethodInfo__UnityEngine__Object__Instantiate<GameSetupOptions>_GameSetupOptions_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__GameSetupMenu____c__DisplayClass17_0___ShowMiscOptions_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_Start(GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                   );
    func_?(&TypeInfo__GamePassesProjectEarningsManager);
    func_?(&
                    MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                   );
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x100;
  value = 0x96;
  bVar1 = MVClientSettings::MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    pGVar2 = (this->fields).activeGameTierButton;
    if (pGVar2 != (GameObject *)0x0) {
      value_00 = 0;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 != bVar1) {
        pGVar2 = (this->fields).activeGameTierButton;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,value_00,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields).inActiveGameTierButton;
      if (pGVar2 != (GameObject *)0x0) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar2,(MethodInfo *)0x0);
        if (bVar3 != bVar1) goto code_?;
        pGVar2 = (this->fields).inActiveGameTierButton;
        if (pGVar2 != (GameObject *)0x0) goto code_?;
      }
    }
  }
  else {
    pGVar2 = (this->fields).activeGameTierButton;
    if (pGVar2 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pGVar2 = (this->fields).activeGameTierButton;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields).inActiveGameTierButton;
      if (pGVar2 != (GameObject *)0x0) {
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar2,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pGVar2 = (this->fields).inActiveGameTierButton;
          if (pGVar2 == (GameObject *)0x0) goto code_?;
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,value,method_00);
        }
code_?:
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesProjectEarningsManager);
          cRam_? = '\x01';
        }
        projectEarningsReport =
             TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport;
        if (projectEarningsReport != (ProjectEarningsReport *)0x0) {
          GameSetupMenu_UpdateEarningText(this,projectEarningsReport,(MethodInfo *)0x0);
          return;
        }
        pAVar4 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
        this_00 = (Action_1_Object_ *)
                  func_?(
                                 TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                                 );
        unaff_EDI = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                     *)0x0;
        if (this_00 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_00,(Object *)this,
                     MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                     ,(MethodInfo *)0x0);
          this = (GameSetupMenu *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
          unaff_EDI = 
          TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
          ;
          if ((Delegate *)this == (Delegate *)0x0) {
            TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
                 (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                 0x0;
            pAStack5 =
                 (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                  *)0x0;
code_?:
            pDStack6 = (Delegate *)TypeInfo__GamePassesProjectEarningsManager->static_fields;
            func_?();
            return;
          }
          pAStack5 =
               TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
          ;
          pDStack6 = (Delegate *)this;
          pAVar4 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *
                   )func_?();
          if (pAVar4 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                         *)0x0) {
            TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
                 pAVar4;
            unaff_EDI = 
            TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
            ;
            pAStack5 =
                 TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
            ;
            pDStack6 = (Delegate *)this;
            pAStack5 =
                 (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                  *)func_?();
            if (pAStack5 !=
                (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                 *)0x0) goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  pDStack6 = (Delegate *)this;
  pAStack5 = unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateEarningText(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_UpdateEarningText
               (GameSetupMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                   );
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if (((pMVar1 != (MVLocalPlayer *)0x0) && (projectEarningsReport != (ProjectEarningsReport *)0x0)
        ) && (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                        (projectEarningsReport->fields).projectMemberEarningsReports,
             this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
      pOVar2 = (Object *)(pMVar1->fields)._._ProfileID_k__BackingField;
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      pTVar4 = (this->fields).earningsAmountText;
      if (bVar3 == 0) {
        if (pTVar4 != (Text *)0x0) {
          (*(pTVar4->klass->vtable).set_text.methodPtr)();
          return;
        }
      }
      else {
        this_01 = (projectEarningsReport->fields).projectMemberEarningsReports;
        if (this_01 !=
            (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
             *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                              (Int32Enum__Enum)pOVar2,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             );
          if ((pOVar2 != (Object *)0x0) && (pOVar2[1].klass != (Object__Class *)0x0)) {
            MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
            EarningsReport_get_TotalEarningsGold
                      ((EarningsReport *)pOVar2[1].klass,(MethodInfo *)0x0);
            this_03 = mscorlib.dll::System::Int32::Int32_ToString_1
                                ((Int32 *)&stack0xfffffff8,StringLiteral_N0,(MethodInfo *)0x0);
            if (this_03 != (String *)0x0) {
              pSStack5 =
                   mscorlib.dll::System::String::String_Replace_1
                             (this_03,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
              if (pTVar4 != (Text *)0x0) {
                pMStack6 = (pTVar4->klass->vtable).set_text.method;
                pTStack7 = pTVar4;
                (*(pTVar4->klass->vtable).set_text.methodPtr)();
                return;
              }
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


/* Void UpdateTierButtonVisibility() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_UpdateTierButtonVisibility
               (GameSetupMenu *this,MethodInfo *method)

{
  bVar1 = MVClientSettings::MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    pGVar2 = (this->fields).activeGameTierButton;
    if (pGVar2 != (GameObject *)0x0) {
      value = 0;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 != bVar1) {
        pGVar2 = (this->fields).activeGameTierButton;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,value,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields).inActiveGameTierButton;
      if (pGVar2 != (GameObject *)0x0) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar2,(MethodInfo *)0x0);
        if (bVar3 == bVar1) {
          pGVar2 = (this->fields).inActiveGameTierButton;
          if (pGVar2 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,bVar1 == 0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  else {
    pGVar2 = (this->fields).activeGameTierButton;
    if (pGVar2 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pGVar2 = (this->fields).activeGameTierButton;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields).inActiveGameTierButton;
      if (pGVar2 != (GameObject *)0x0) {
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar2,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return;
        }
        pGVar2 = (this->fields).inActiveGameTierButton;
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

