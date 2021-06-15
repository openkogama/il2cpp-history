
/* Void OnDestroy() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_OnDestroy
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,
             MethodInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>__Action_System__Object__void__
            );
  pAStack2 =
       (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  if (pAStack2 !=
      (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0) {
    if (pAStack2->klass ==
        TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
       ) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      pAStack3 =
           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
      ;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
  return;
}


/* Void OnInactiveTierButtonPressed() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_OnInactiveTierButtonPressed
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__GameSetupMenu___OnInactiveTierButtonPressed_c__AnonStorey2);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  original = (XpBoostParticlePreviewer *)(this->fields).crystalPopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pWVar1 = (WinningConditionDebriefing *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (original,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (this_00 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this_00->fields)._this = pWVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GameSetupMenu___OnInactiveTierButtonPressed_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnRecieveEarningsReport(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_OnRecieveEarningsReport
               (GameSetupMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,
             MethodInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>__Action_System__Object__void__
            );
  pAVar2 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  if (pAVar2 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                0x0) {
    if (pAVar2->klass ==
        TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
       ) {
      pAVar1 = pAVar2;
    }
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if (this_03 != (MVLocalPlayer *)0x0) {
      key = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
            TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
            TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                      ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_03,(MethodInfo *)0x0);
      if ((in_stack_4 != 0) &&
         (*(Dictionary_2_System_Int32_System_Object_ **)(in_stack_4 + 0xc) !=
          (Dictionary_2_System_Int32_System_Object_ *)0x0)) {
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          (*(Dictionary_2_System_Int32_System_Object_ **)(in_stack_4 + 0xc),
                           (int32_t)key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          );
        piVar6 = *(int **)(in_stack_7 + 0x14);
        if (bVar5 == 0) {
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x308))();
            return;
          }
        }
        else if (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   **)(in_stack_4 + 0xc) !=
                 (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) {
          pTVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                **)(in_stack_4 + 0xc),(int32_t)key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             );
          if ((pTVar8 != (TerrainUtility_TerrainMap *)0x0) &&
             (this_00 = (EarningsReport *)(pTVar8->fields).m_patchSize.x,
             this_00 != (EarningsReport *)0x0)) {
            MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
            EarningsReport_get_TotalEarningsGold(this_00,(MethodInfo *)0x0);
            this_04 = (String *)func_?();
            if (this_04 != (String *)0x0) {
              mscorlib.dll::System::String::String_Replace_1
                        (this_04,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
              if (piVar6 != (int *)0x0) {
                (**(code **)(*piVar6 + 0x308))();
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowBoostEditMenu() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_ShowBoostEditMenu
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__GameSetupMenu___ShowBoostEditMenu_c__AnonStorey1);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  original = (XpBoostParticlePreviewer *)(this->fields).boosterEditMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pWVar1 = (WinningConditionDebriefing *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (original,
                      BoostEditMenu_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenu>_BoostEditMenu_
                     );
  if (this_00 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this_00->fields)._this = pWVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GameSetupMenu___ShowBoostEditMenu_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__GameSetupMenu___ShowGameEarnings_c__AnonStorey3);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  original = (this->fields).earningsMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pWVar1 = (WinningConditionDebriefing *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      GameEarningsMenu_MethodInfo__UnityEngine__Object__Instantiate<GameEarningsMenu>_GameEarningsMenu_
                     );
  if (this_00 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this_00->fields)._this = pWVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GameSetupMenu___ShowGameEarnings_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__GameSetupMenu___ShowGamePassesShopDetails_c__AnonStorey0);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  original = (XpBoostParticlePreviewer *)(this->fields).gamePassesShopDetailsPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pWVar1 = (WinningConditionDebriefing *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (original,
                      GamePassesShopDetails_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShopDetails>_GamePassesShopDetails_
                     );
  if (this_00 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this_00->fields)._this = pWVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GameSetupMenu___ShowGamePassesShopDetails_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__GameSetupMenu___ShowMiscOptions_c__AnonStorey4);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  original = (XpBoostParticlePreviewer *)(this->fields).optionsMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pWVar1 = (WinningConditionDebriefing *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (original,
                      GameSetupOptions_MethodInfo__UnityEngine__Object__Instantiate<GameSetupOptions>_GameSetupOptions_
                     );
  if (this_00 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this_00->fields)._this = pWVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GameSetupMenu___ShowMiscOptions_c__AnonStorey4____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  method_00 = (MethodInfo *)0x100;
  value = 0xcb;
  bVar1 = MVClientSettings::MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
              ((MethodInfo *)0x0);
    pGVar2 = (this->fields).activeGameTierButton;
    if (pGVar2 != (GameObject *)0x0) {
      value_00 = 0;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar1 != value_00) {
        pGVar2 = (this->fields).activeGameTierButton;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,value_00,(MethodInfo *)0x0);
        value_00 = (bool)pGVar2;
      }
      pGVar2 = (this->fields).inActiveGameTierButton;
      if (pGVar2 != (GameObject *)0x0) {
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar2,(MethodInfo *)0x0);
        if (bVar1 != value_00) goto code_?;
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
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        projectEarningsReport =
             TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport;
        if (projectEarningsReport != (ProjectEarningsReport *)0x0) {
          GameSetupMenu_UpdateEarningText(this,projectEarningsReport,(MethodInfo *)0x0);
          return;
        }
        pAVar3 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)this,
                   MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                   ,
                   MethodInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>__Action_System__Object__void__
                  );
        pAVar4 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
        _uStack0000000c =
             CONCAT44(TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                      ,pAVar4);
        pAVar3 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                 0x0;
        if (pAVar4 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                       *)0x0) {
code_?:
          TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar3;
          return;
        }
        if (pAVar4->klass ==
            TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
           ) {
          pAVar3 = pAVar4;
        }
        if (pAVar3 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                       *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
code_?:
  _uStack0000000c = func_?(0);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateEarningText(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_UpdateEarningText
               (GameSetupMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_03 != (MVNetworkGame *)0x0) {
    this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
    if (this_04 != (MVLocalPlayer *)0x0) {
      key = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
            TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
            TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                      ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_04,(MethodInfo *)0x0);
      if ((projectEarningsReport != (ProjectEarningsReport *)0x0) &&
         (this_00 = (projectEarningsReport->fields).projectMemberEarningsReports,
         this_00 !=
         (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
          *)0x0)) {
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          );
        pTVar2 = (this->fields).earningsAmountText;
        if (bVar1 == 0) {
          if (pTVar2 != (Text *)0x0) {
            (*(code *)(pTVar2->klass->vtable).set_text.method)();
            return;
          }
        }
        else {
          this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(projectEarningsReport->fields).projectMemberEarningsReports;
          if (this_01 !=
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) {
            pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                               (this_01,(int32_t)key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                               );
            if ((pTVar3 != (TerrainUtility_TerrainMap *)0x0) &&
               (this_02 = (EarningsReport *)(pTVar3->fields).m_patchSize.x,
               this_02 != (EarningsReport *)0x0)) {
              MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
              EarningsReport_get_TotalEarningsGold(this_02,(MethodInfo *)0x0);
              pSVar4 = (String *)func_?();
              if (pSVar4 != (String *)0x0) {
                pSVar4 = mscorlib.dll::System::String::String_Replace_1
                                   (pSVar4,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
                if (pTVar2 != (Text *)0x0) {
                  (*(code *)(pTVar2->klass->vtable).set_text.method)
                            (pTVar2,pSVar4,
                             (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTierButtonVisibility() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_UpdateTierButtonVisibility
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings::MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (_UNK_? != (GameObject *)0x0) {
      bVar2 = bVar1;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (_UNK_?,(MethodInfo *)0x0);
      if (bVar3 != bVar1) {
        if (_UNK_? == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (_UNK_?,bVar2,(MethodInfo *)0x0);
      }
      if (_UNK_? != (GameObject *)0x0) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (_UNK_?,(MethodInfo *)0x0);
        if (bVar2 == bVar1) {
          if (_UNK_? == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (_UNK_?,bVar1 == 0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  else {
    pGVar4 = (this->fields).activeGameTierButton;
    if (pGVar4 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar4,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pGVar4 = (this->fields).activeGameTierButton;
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
      }
      pGVar4 = (this->fields).inActiveGameTierButton;
      if (pGVar4 != (GameObject *)0x0) {
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar4,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return;
        }
        pGVar4 = (this->fields).inActiveGameTierButton;
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

