
/* Boolean CanSpawnInTeam(MVTeam) */

bool Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_CanSpawnInTeam
               (TierBoostStateHandler *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) &&
     (pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(pMVar2,(MethodInfo *)0x0),
     pLVar3 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
    if ((pLVar3->fields)._size < 2) {
      return 1;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
      bVar4 = MVTeamManager::MVTeamManager_TeamHasSpawnPoints(pMVar2,team,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 1;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVTeamManager::MVTeamManager_GetSpawnPointsForTeam(pMVar2,team,(MethodInfo *)0x0);
        index = 0;
        if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          do {
            if ((this_00->fields)._size <= index) {
              return 0;
            }
            RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,index,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              );
            if (RVar5 != (RegexCharClass_SingleRange)0x0) {
              bVar6 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
              if ((bVar6 <= *(byte *)(*(int *)RVar5 + 0xb8)) &&
                 (*(MVAvatarSpawnRoleCreator__Class **)
                   (*(int *)(*(int *)RVar5 + 100) + -4 + (uint)bVar6 * 4) ==
                  TypeInfo__MVAvatarSpawnRoleCreator)) {
                RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_00,index,
                                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                  );
                if (RVar5 == (RegexCharClass_SingleRange)0x0) break;
                bVar6 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
                if ((*(byte *)(*(int *)RVar5 + 0xb8) < bVar6) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (*(int *)(*(int *)RVar5 + 100) + -4 + (uint)bVar6 * 4) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
                GVar7 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                                  ((MVAvatarSpawnRoleCreator *)RVar5,(MethodInfo *)0x0);
                pMVar8 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                    ((MethodInfo *)0x0);
                if ((pMVar8 == (MVLocalPlayer *)0x0) ||
                   (pSVar9 = (pMVar8->fields).spawnRoleDataMediator,
                   pSVar9 == (SpawnRoleDataMediator *)0x0)) break;
                BVar10 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                         SpawnRoleVariableTypes::SpawnRoleVariable`1[System::ByteEnum]::
                         SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                                   ((SpawnRoleVariable_1_System_ByteEnum_ *)
                                    (pSVar9->fields).tierRequirement,
                                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                                   );
                if ((byte)GVar7 < (byte)BVar10) {
                  return 1;
                }
              }
            }
            index = index + 1;
          } while( true );
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar4 = (*pcVar11)();
  return bVar4;
}


/* Void ExitContinuePopup() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_ExitContinuePopup
               (TierBoostStateHandler *this,MethodInfo *method)

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
                    MethodInfo__TierBoostStateHandler____c___ExitContinuePopup_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierBoostStateHandler____c);
    cRam_? = '\x01';
  }
  root = (MethodInfo *)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  method_00 = root;
  if ((TypeInfo__TierBoostStateHandler____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TierBoostStateHandler____c);
  }
  callbackFunction = TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    root = method_00;
    if ((TypeInfo__TierBoostStateHandler____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TierBoostStateHandler____c);
      root = method_00;
    }
    object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__TierBoostStateHandler____c___ExitContinuePopup_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0 = callbackFunction;
    func_?(&TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0,callbackFunction)
    ;
    method_00 = root;
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            ((GameObject *)root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  bVar1 = TierBoostStateHandler_IsInTempClass(this,(MethodInfo *)0x0);
  cVar2 = '\0';
  if (bVar1 == 0) {
code_?:
    pAVar3 = (this->fields).onFinished;
    if (pAVar3 != (Action_1_Boolean_ *)0x0) {
      pvStack4 = (pAVar3->fields)._._.method;
      uStack5 = (uint)(cVar2 == '\0');
      (*(pAVar3->fields)._._.invoke_impl)();
    }
    return;
  }
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar6 != (MVLocalPlayer *)0x0) {
    bVar1 = TierBoostStateHandler_CanSpawnInTeam
                      (this,(pMVar6->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?(&
                        MethodInfo__TierBoostStateHandler____c__DisplayClass7_0___ShowTeamSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        method_00 = (MethodInfo *)&UNK_?;
        func_?(&TypeInfo__TierBoostStateHandler____c__DisplayClass7_0);
        cRam_? = '\x01';
      }
      pOVar7 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar7,ExceptionArgument__Enum_obj,method_00);
      original = (this->fields).teamMenuPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar8 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_)
      ;
      if (pOVar7 != (Object *)0x0) {
        pOVar7[1].klass = pOVar8;
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
        cVar2 = '\x10';
        this_00 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,pOVar7,
                   MethodInfo__TierBoostStateHandler____c__DisplayClass7_0___ShowTeamSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  ((GameObject *)
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   ,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pOVar8 = pOVar7[1].klass;
        if (pOVar8 != (Object__Class *)0x0) {
          TeamMenu::TeamMenu_UpdateBackButtonVisibility((TeamMenu *)pOVar8,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?(&
                        MethodInfo__TierBoostStateHandler____c__DisplayClass6_0___ShowSpawnRoleSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        method_00 = (MethodInfo *)&UNK_?;
        func_?(&TypeInfo__TierBoostStateHandler____c__DisplayClass6_0);
        cRam_? = '\x01';
      }
      pOVar7 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar7,ExceptionArgument__Enum_obj,method_00);
      original_00 = (this->fields).spawnRoleSelectionMenuPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar8 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original_00,
                          SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                         );
      if (pOVar7 != (Object *)0x0) {
        pOVar9 = pOVar7 + 1;
        pOVar9->klass = pOVar8;
        func_?();
        root_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        callbackFunction_00 =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,pOVar7,
                   MethodInfo__TierBoostStateHandler____c__DisplayClass6_0___ShowSpawnRoleSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root_00,(BaseEventData *)0x0,callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pOVar8 = pOVar9->klass;
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((pMVar6 != (MVLocalPlayer *)0x0) && (pOVar8 != (Object__Class *)0x0)) {
          cVar2 = '\0';
          SpawnRoleMenu::SpawnRoleMenu_Initialize
                    ((SpawnRoleMenu *)pOVar8,(pMVar6->fields)._._Team_k__BackingField,
                     (MethodInfo *)0x0);
          if (pOVar9->klass != (Object__Class *)0x0) {
            SpawnRoleMenu::SpawnRoleMenu_HideBackButton
                      ((SpawnRoleMenu *)pOVar9->klass,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean IsInTempClass() */

bool Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_IsInTempClass
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar1 != (MVLocalPlayer *)0x0) &&
     (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) {
    BVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::ByteEnum]::SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                      ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar2->fields).tierRequirement,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                      );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 != (PlayerPlanetData *)0x0) {
      return (pPVar4->fields).gamePassTier < (byte)BVar3;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsInTempTier() */

bool Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).previewGamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      return (pPVar1->fields).gamePassTier < bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_OnPlayerPlanetDataUpdated
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      func_?();
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) goto code_?;
  }
  func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&
                    MethodInfo__TierBoostStateHandler____c___ExitContinuePopup_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierBoostStateHandler____c);
    cRam_? = '\x01';
  }
  root = (MethodInfo *)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)in_stack_4,(MethodInfo *)0x0);
  method_00 = root;
  if ((TypeInfo__TierBoostStateHandler____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction = TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    root = method_00;
    if ((TypeInfo__TierBoostStateHandler____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      root = method_00;
    }
    object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
    callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__TierBoostStateHandler____c___ExitContinuePopup_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0 = callbackFunction;
    func_?(&TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0);
    method_00 = root;
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            ((GameObject *)root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  bVar5 = TierBoostStateHandler_IsInTempClass(in_stack_4,(MethodInfo *)0x0);
  bVar6 = false;
  if (bVar5 == 0) {
code_?:
    pAVar7 = (in_stack_4->fields).onFinished;
    if (pAVar7 != (Action_1_Boolean_ *)0x0) {
      pvStack8 = (pAVar7->fields)._._.method;
      uStack9 = (uint)!bVar6;
      (*(pAVar7->fields)._._.invoke_impl)();
    }
    return;
  }
  pMVar10 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar10 != (MVLocalPlayer *)0x0) {
    bVar5 = TierBoostStateHandler_CanSpawnInTeam
                      (in_stack_4,(pMVar10->fields)._._Team_k__BackingField,(MethodInfo *)0x0)
    ;
    if (bVar5 == 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pOVar11 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar11,ExceptionArgument__Enum_obj,method_00);
      original = (in_stack_4->fields).teamMenuPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar12 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_)
      ;
      if (pOVar11 != (Object *)0x0) {
        pOVar11[1].klass = pOVar12;
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)in_stack_4,(MethodInfo *)0x0);
        bVar6 = true;
        this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,pOVar11,
                   MethodInfo__TierBoostStateHandler____c__DisplayClass7_0___ShowTeamSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  ((GameObject *)
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   ,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pOVar12 = pOVar11[1].klass;
        if (pOVar12 != (Object__Class *)0x0) {
          TeamMenu::TeamMenu_UpdateBackButtonVisibility((TeamMenu *)pOVar12,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pOVar11 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar11,ExceptionArgument__Enum_obj,method_00);
      original_00 = (in_stack_4->fields).spawnRoleSelectionMenuPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar12 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original_00,
                          SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                         );
      if (pOVar11 != (Object *)0x0) {
        pOVar13 = pOVar11 + 1;
        pOVar13->klass = pOVar12;
        func_?();
        root_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)in_stack_4,(MethodInfo *)0x0);
        callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,pOVar11,
                   MethodInfo__TierBoostStateHandler____c__DisplayClass6_0___ShowSpawnRoleSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root_00,(BaseEventData *)0x0,callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pOVar12 = pOVar13->klass;
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((pMVar10 != (MVLocalPlayer *)0x0) && (pOVar12 != (Object__Class *)0x0)) {
          bVar6 = false;
          SpawnRoleMenu::SpawnRoleMenu_Initialize
                    ((SpawnRoleMenu *)pOVar12,(pMVar10->fields)._._Team_k__BackingField,
                     (MethodInfo *)0x0);
          if (pOVar13->klass != (Object__Class *)0x0) {
            SpawnRoleMenu::SpawnRoleMenu_HideBackButton
                      ((SpawnRoleMenu *)pOVar13->klass,(MethodInfo *)0x0);
            goto code_?;
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


/* Void ShowSpawnRoleSelectionMenu() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_ShowSpawnRoleSelectionMenu
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&
                    SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__TierBoostStateHandler____c__DisplayClass6_0___ShowSpawnRoleSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierBoostStateHandler____c__DisplayClass6_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierBoostStateHandler____c__DisplayClass6_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).spawnRoleSelectionMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                     );
  if (value != (Object *)0x0) {
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?();
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__TierBoostStateHandler____c__DisplayClass6_0___ShowSpawnRoleSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = pOVar2->klass;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar3 != (MVLocalPlayer *)0x0) && (pOVar1 != (Object__Class *)0x0)) {
      SpawnRoleMenu::SpawnRoleMenu_Initialize
                ((SpawnRoleMenu *)pOVar1,(pMVar3->fields)._._Team_k__BackingField,(MethodInfo *)0x0)
      ;
      if ((pOVar2->klass != (Object__Class *)0x0) &&
         (this_00 = (pOVar2->klass->_0).events, this_00 != (EventInfo *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowTeamSelectionMenu() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_ShowTeamSelectionMenu
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__TierBoostStateHandler____c__DisplayClass7_0___ShowTeamSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierBoostStateHandler____c__DisplayClass7_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierBoostStateHandler____c__DisplayClass7_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).teamMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
  if (value == (Object *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar3 = value + 1;
  pOVar3->klass = pOVar1;
  pOVar4 = pOVar3;
  func_?(pOVar3,pOVar1);
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
             MethodInfo__TierBoostStateHandler____c__DisplayClass7_0___ShowTeamSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar5,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar5 = pGRam00000038;
  if (pOVar3->klass == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                    ,pOVar4);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager,pOVar4);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
code_?:
    method._0_1_ = true;
  }
  else {
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar6 == (MVLocalPlayer *)0x0) ||
       (pSVar7 = (pMVar6->fields).spawnRoleDataMediator, pSVar7 == (SpawnRoleDataMediator *)0x0))
    goto code_?;
    BVar8 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::ByteEnum]::SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                      ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar7->fields).tierRequirement,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                      );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar9 == (PlayerPlanetData *)0x0) goto code_?;
    bVar10 = (pPVar9->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar9 == (PlayerPlanetData *)0x0) goto code_?;
    if ((byte)BVar8 <= bVar10) goto code_?;
    method._0_1_ = (byte)BVar8 <= (pPVar9->fields).previewGamePassTier;
  }
  if (pGVar5 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,method._0_1_,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopPreviewTier(Action`1[Boolean]) */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
               (TierBoostStateHandler *this,Action_1_Boolean_ *onFinishPreviewTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierBoostStateHandler____c);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).onFinished;
  *ppAVar1 = onFinishPreviewTier;
  func_?(ppAVar1,onFinishPreviewTier);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
    if (onFinishPreviewTier != (Action_1_Boolean_ *)0x0) {
      (*(onFinishPreviewTier->fields)._._.invoke_impl)
                ((onFinishPreviewTier->fields)._._.method_code,1,
                 (onFinishPreviewTier->fields)._._.method);
      return;
    }
code_?:
    func_?();
  }
  else {
    bVar2 = TierBoostStateHandler_IsInTempClass(this,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        bVar4 = (pPVar3->fields).previewGamePassTier;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar3 != (PlayerPlanetData *)0x0) {
          if (bVar4 <= (pPVar3->fields).gamePassTier) goto code_?;
          goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__
               ,(MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__TierBoostStateHandler____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TierBoostStateHandler____c);
      }
      callbackFunction = TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__TierBoostStateHandler____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__TierBoostStateHandler____c);
        }
        object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 = callbackFunction;
        func_?(&TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                  (this_01,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar6;
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

