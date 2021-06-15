
/* ESWalkMode+EnterPlayFromEditState CalculateEnterPlayFromEditState() */

ESWalkMode_EnterPlayFromEditState__Enum
Assembly-CSharp.dll::ESWalkMode::ESWalkMode_CalculateEnterPlayFromEditState
          (ESWalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVLocalPlayerBuilder *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayerBuilder *)0x0) goto code_?;
  bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
  pMVar3 = (MVLocalPlayer__Class *)pMVar1->klass;
  bVar4 = (pMVar3->_1).naturalAligment;
  if ((bVar4 < bVar2) ||
     ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  pMVar6 = (MVLocalPlayerBuilder *)0x0;
  if (bVar5) {
    pMVar6 = pMVar1;
  }
  if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
    if ((bVar4 < bVar2) ||
       ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
      MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)&puStack_7,pMVar6,
                 (MethodInfo *)0x0);
      pMVar1 = (MVLocalPlayerBuilder *)
               MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar1 == (MVLocalPlayerBuilder *)0x0) goto code_?;
      pMVar3 = (MVLocalPlayer__Class *)pMVar1->klass;
      bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      bVar4 = (pMVar3->_1).naturalAligment;
      if ((bVar4 < bVar2) ||
         ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVLocalPlayerBuilder *)0x0;
      if (bVar5) {
        pMVar6 = pMVar1;
      }
      if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
      if ((bVar4 < bVar2) ||
         ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVLocalPlayerBuilder *)0x0;
      if (bVar5) {
        pMVar6 = pMVar1;
      }
      if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
      pMVar8 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                         ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)&stack0xffffffd0,pMVar6,
                          (MethodInfo *)0x0);
      puStack_7 = (undefined *)pMVar8->selectedTeam;
      unique0x0000a404 = pMVar8->selectedSpawnRoleCreator;
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        stack0xffffffe0 = (int32_t)pMVar9;
        pMVar10 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar9,(MethodInfo *)0x0);
        if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
          team = 0x86;
          stack0xffffffe0 = (int32_t)&UNK_?;
          this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                              (pMVar10,WorldObjectType__Enum_AvatarSpawnRoleCreator,
                               (MethodInfo *)0x0);
          if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
            pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00
                                 ,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                                );
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar9 != (MVNetworkGame *)0x0) &&
               (pSVar12 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                    ((DayNightCycle *)pMVar9,(MethodInfo *)0x0),
               pSVar12 != (SkyParam *)0x0)) {
              iVar13 = MVTeamManager::MVTeamManager_TeamCount
                                 ((MVTeamManager *)pSVar12,(MethodInfo *)0x0);
              pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar9 != (MVNetworkGame *)0x0) &&
                 (pSVar12 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                      ((DayNightCycle *)pMVar9,(MethodInfo *)0x0),
                 pSVar12 != (SkyParam *)0x0)) {
                bVar14 = MVTeamManager::MVTeamManager_HasTeam
                                  ((MVTeamManager *)pSVar12,team,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar9 != (MVNetworkGame *)0x0) &&
                   (pMVar10 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar9,(MethodInfo *)0x0),
                   pMVar10 != (MVWorldObjectClientManager *)0x0)) {
                  pMVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                      (pMVar10,stack0xffffffe0,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar9 != (MVNetworkGame *)0x0) &&
                     (this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)InventoryItemPreviewer::
                                   InventoryItemPreviewer_get_PreviewGameObject
                                             ((InventoryItemPreviewer *)pMVar9,(MethodInfo *)0x0),
                     this_01 !=
                     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                      *)0x0)) {
                    pOVar16 = System.dll::System::Collections::Generic::
                              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                              ::Single,System::Object]::
                              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                        (this_01,(MethodInfo *)0x0);
                    cVar17 = pOVar16 == (Object *)0x2;
                    if (pMVar15 != (MVWorldObject *)0x0 || (int)pOVar11 < 1) {
code_?:
                      if (bVar14 == 0 && 1 < iVar13) {
                        return ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole;
                      }
                      EVar18 = ESWalkMode_EnterPlayFromEditState__Enum_WaitForRoundToStart;
                      if (cVar17 == '\0') {
                        EVar18 = ESWalkMode_EnterPlayFromEditState__Enum_EnterPlayMode;
                      }
                      return EVar18;
                    }
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pMVar1 = (MVLocalPlayerBuilder *)
                             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                       ((MethodInfo *)0x0);
                    if (pMVar1 != (MVLocalPlayerBuilder *)0x0) {
                      pMVar3 = (MVLocalPlayer__Class *)pMVar1->klass;
                      bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                      uVar19 = (uint)CONCAT11(bVar2,cVar17);
                      if (((pMVar3->_1).naturalAligment < bVar2) ||
                         (uVar19 = CONCAT13(1,(uint3)CONCAT11(bVar2,cVar17)),
                         (pMVar3->_1).typeHierarchy[bVar2 - 1] !=
                         (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
                        uVar19 = uVar19 & 0xffffff;
                      }
                      pMVar6 = (MVLocalPlayerBuilder *)0x0;
                      if ((char)(uVar19 >> 0x18) != '\0') {
                        pMVar6 = pMVar1;
                      }
                      if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
                        if (((pMVar3->_1).naturalAligment < (byte)(uVar19 >> 8)) ||
                           ((pMVar3->_1).typeHierarchy[bVar2 - 1] !=
                            (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
                          bVar5 = false;
                        }
                        else {
                          bVar5 = true;
                        }
                        pMVar6 = (MVLocalPlayerBuilder *)0x0;
                        if (bVar5) {
                          pMVar6 = pMVar1;
                        }
                        if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
                          pMVar8 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                                             ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)
                                              &stack0xffffffd0,pMVar6,(MethodInfo *)0x0);
                          cVar17 = (char)uVar19;
                          puStack_7 = (undefined *)pMVar8->selectedTeam;
                          unique0x0000a404 = pMVar8->selectedSpawnRoleCreator;
                          iVar20 = pMVar8->previousSpawnRoleId;
                          this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                              ((MethodInfo *)0x0);
                          if (this_02 != (MVLocalPlayer *)0x0) {
                            register0x00000000 =
                                 MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                                           (this_02,(MethodInfo *)0x0);
                            if (iVar20 != register0x00000000) {
                              return ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole;
                            }
                            goto code_?;
                          }
                          goto code_?;
                        }
                      }
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  EVar18 = (*pcVar21)();
  return EVar18;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_Enter
               (ESWalkMode *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (esm != (EditorStateMachine *)0x0) {
    root = (esm->fields).gameObject;
    if (TypeInfo__ESWalkMode->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)0x0,
                 MethodInfo__ESWalkMode___Enter_m__0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>__EventFunction_System__Object__void__
                );
      TypeInfo__ESWalkMode->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IEditModeController_ *)pUVar1;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__ESWalkMode->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
              );
    pSVar2 = (esm->fields).selectionController;
    if (pSVar2 != (SelectionController *)0x0) {
      SelectionController::SelectionController_DeSelectAll(pSVar2,(MethodInfo *)0x0);
      pSVar2 = (esm->fields).selectionController;
      if (pSVar2 != (SelectionController *)0x0) {
        SelectionController::SelectionController_ExitGroupToRoot(pSVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                             (pMVar3,(MethodInfo *)0x0);
          if (pMVar4 != (MVGroup *)0x0) {
            (*(code *)(pMVar4->klass->vtable).PlayModeInitialize.method)
                      (pMVar4,(pMVar4->klass->vtable).SetupTierInventory.methodPtr);
            enterState = ESWalkMode_CalculateEnterPlayFromEditState(this,(MethodInfo *)0x0);
            ESWalkMode_HandleEnterState(this,enterState,(MethodInfo *)0x0);
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
              this_00 = (MoveableController *)
                        System.Core.dll::System::Linq::
                        Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                        Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
                        Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                  ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                    *)pMVar3,(MethodInfo *)0x0);
              if (this_00 != (MoveableController *)0x0) {
                MoveableController::MoveableController_ResetMoveables(this_00,(MethodInfo *)0x0);
                pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar5 != (MVNetworkGame *)0x0) {
                  this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
                  if (this_01 != (MVLocalPlayer *)0x0) {
                    team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                           KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                           KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                     ((KogamaSettingNumericBase_1_System_Single_ *)this_01,
                                      (MethodInfo *)0x0);
                    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (pMVar5 != (MVNetworkGame *)0x0) {
                      this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                          ((DayNightCycle *)pMVar5,(MethodInfo *)0x0);
                      if (team == (IKogamaSetting *)0x5) {
code_?:
                        DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
                        pAVar6 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
                        pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                  *)func_?(TypeInfo__System__Action<int>);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar1,(Object *)this,
                                   MethodInfo__ESWalkMode__OnNewSpawnRoleSelected_int_,
                                   MethodInfo__System__Action<int>__Action_System__Object__void__);
                        pAVar7 = (Action_1_Int32_ *)
                                 mscorlib.dll::System::Delegate::Delegate_Combine
                                           ((Delegate *)pAVar6,(Delegate *)pUVar1,(MethodInfo *)0x0)
                        ;
                        _uStack00000020 = CONCAT44(TypeInfo__System__Action<int>,pAVar7);
                        pAVar6 = (Action_1_Int32_ *)0x0;
                        if (pAVar7 == (Action_1_Int32_ *)0x0) {
code_?:
                          TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected = pAVar6;
                          return;
                        }
                        if (pAVar7->klass == TypeInfo__System__Action<int>) {
                          pAVar6 = pAVar7;
                        }
                        if (pAVar6 != (Action_1_Int32_ *)0x0) goto code_?;
                        goto code_?;
                      }
                      if (this_02 != (SkyParam *)0x0) {
                        bVar8 = MVTeamManager::MVTeamManager_IsTeamActive
                                          ((MVTeamManager *)this_02,(MVTeam__Enum)team,
                                           (MethodInfo *)0x0);
                        if (bVar8 != 0) goto code_?;
                        this_03 = MVTeamManager::MVTeamManager_GetTeamList
                                            ((MVTeamManager *)this_02,(MethodInfo *)0x0);
                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                          func_?();
                        }
                        this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                            ((MethodInfo *)0x0);
                        if (this_03 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                          team_00 = mscorlib.dll::System::Collections::Generic::List`1[MV::
                                    WorldObject::MVTeam]::List_1_MV_WorldObject_MVTeam__get_Item
                                              (this_03,0,
                                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                              );
                          if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
                            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                                      (this_04,team_00,(MethodInfo *)0x0);
                            goto code_?;
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
  _uStack00000020 = func_?(0);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_Exit
               (ESWalkMode *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<int>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__ESWalkMode__OnNewSpawnRoleSelected_int_,
             MethodInfo__System__Action<int>__Action_System__Object__void__);
  pAStack2 =
       (Action_1_Int32_ *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_1_Int32_ *)0x0;
  if (pAStack2 != (Action_1_Int32_ *)0x0) {
    if (pAStack2->klass == TypeInfo__System__Action<int>) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action_1_Int32_ *)0x0) {
      pAStack3 = TypeInfo__System__Action<int>;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected = pAVar1;
  return;
}


/* Void HandleEnterPlayInEditMode() */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_HandleEnterPlayInEditMode
               (ESWalkMode *this,MethodInfo *method)

{
  enterState = ESWalkMode_CalculateEnterPlayFromEditState(this,(MethodInfo *)0x0);
  ESWalkMode_HandleEnterState(this,enterState,(MethodInfo *)0x0);
  return;
}


/* Void HandleEnterState(ESWalkMode+EnterPlayFromEditState) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_HandleEnterState
               (ESWalkMode *this,ESWalkMode_EnterPlayFromEditState__Enum enterState,
               MethodInfo *method)

{
  if (enterState == ESWalkMode_EnterPlayFromEditState__Enum_EnterPlayMode) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                       ((MethodInfo *)0x0);
    if (pIVar1 != (ILockCursorManager *)0x0) {
      func_?(3,TypeInfo__ILockCursorManager,pIVar1,1);
      return;
    }
  }
  else {
    if (enterState == ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar2 == (GameEventManager *)0x0) ||
          (pGVar3 = (pGVar2->fields).GameState, pGVar3 == (GameEventManager_GameStateManager *)0x0))
         || (this_00 = (JumpState_OnWallJumpDelegate *)(pGVar3->fields).OnEnableLobbyState,
            this_00 == (JumpState_OnWallJumpDelegate *)0x0)) goto code_?;
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    }
    else {
      if (enterState != ESWalkMode_EnterPlayFromEditState__Enum_WaitForRoundToStart) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    }
    if ((pGVar2 != (GameEventManager *)0x0) &&
       (this_01 = (pGVar2->fields).AvatarCommandsPlayMode,
       this_01 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_RemoveFromGame(this_01,(MethodInfo *)0x0);
      pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                         ((MethodInfo *)0x0);
      if (pIVar1 != (ILockCursorManager *)0x0) {
        func_?(3);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleSelectTeamOrSpawnRole() */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_HandleSelectTeamOrSpawnRole
               (ESWalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).GameState, pGVar2 != (GameEventManager_GameStateManager *)0x0)) &&
     (this_00 = (JumpState_OnWallJumpDelegate *)(pGVar2->fields).OnEnableLobbyState,
     this_00 != (JumpState_OnWallJumpDelegate *)0x0)) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar1 != (GameEventManager *)0x0) &&
       (this_01 = (pGVar1->fields).AvatarCommandsPlayMode,
       this_01 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_RemoveFromGame(this_01,(MethodInfo *)0x0);
      pIStack3 =
           MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
      ;
      if (pIStack3 != (ILockCursorManager *)0x0) {
        uStack4 = 0;
        pIStack5 = TypeInfo__ILockCursorManager;
        func_?();
        return;
      }
    }
  }
  uStack4 = 0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnNewSpawnRoleSelected(Int32) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_OnNewSpawnRoleSelected
               (ESWalkMode *this,int32_t newSpawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVLocalPlayerBuilder *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayerBuilder *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar2 = (MVLocalPlayer__Class *)pMVar1->klass;
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    bVar4 = (pMVar2->_1).naturalAligment;
    if ((bVar4 < bVar3) ||
       ((pMVar2->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    pMVar7 = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    if ((bVar4 < bVar3) ||
       ((pMVar2->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar8 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                       ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)&stack0xffffffdc,pMVar6,
                        (MethodInfo *)0x0);
    uVar9 = pMVar8->selectedTeam;
    iVar10 = pMVar8->previousSpawnRoleId;
    pMVar1 = (MVLocalPlayerBuilder *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar2 = (MVLocalPlayer__Class *)pMVar1->klass;
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    bVar4 = (pMVar2->_1).naturalAligment;
    if ((bVar4 < bVar3) ||
       ((pMVar2->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
      if ((bVar4 < bVar3) ||
         ((pMVar2->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVLocalPlayerBuilder *)0x0;
      if (bVar5) {
        pMVar6 = pMVar1;
      }
      if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
        value.selectedSpawnRoleCreator = newSpawnRoleId;
        value.selectedTeam = uVar9;
        value.previousSpawnRoleId = iVar10;
        MVLocalPlayerBuilder::MVLocalPlayerBuilder_set_EnterPlayStateData
                  (pMVar6,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pMVar1 = extraout_ECX;
  pMVar7 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar7);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetToHiddenMode() */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_SetToHiddenMode
               (ESWalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_RemoveFromGame(this_00,(MethodInfo *)0x0);
    pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                       ((MethodInfo *)0x0);
    if (pIVar2 != (ILockCursorManager *)0x0) {
      uStack3 = 0;
      func_?();
      return;
    }
  }
  uStack3 = 0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean ShouldSelectTeamOrSpawnRole(Boolean, Boolean) */

bool Assembly-CSharp.dll::ESWalkMode::ESWalkMode_ShouldSelectTeamOrSpawnRole
               (ESWalkMode *this,bool isSpawnRoleValid,bool isTeamValid,MethodInfo *method)

{
  if (isSpawnRoleValid != 0) {
code_?:
    return isTeamValid ^ 1;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVLocalPlayerBuilder *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayerBuilder *)0x0) {
    bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    pMVar3 = (MVLocalPlayer__Class *)pMVar1->klass;
    in_stack_4 = (pMVar3->_1).naturalAligment;
    if ((in_stack_4 < bVar2) ||
       ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
      if ((in_stack_4 < bVar2) ||
         ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVLocalPlayerBuilder *)0x0;
      if (bVar5) {
        pMVar6 = pMVar1;
      }
      if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
        pMVar7 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                           (&MStack_8,pMVar6,(MethodInfo *)0x0);
        iVar9 = pMVar7->previousSpawnRoleId;
        this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (this_00 != (MVLocalPlayer *)0x0) {
          iVar10 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_00,(MethodInfo *)0x0);
          if (iVar9 != iVar10) {
            return 1;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    func_?(pMVar1,TypeInfo__MVLocalPlayerBuilder);
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void TryLockCursor() */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_TryLockCursor(ESWalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager,pIVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean WasPlayingAsDefaultAvatar() */

bool Assembly-CSharp.dll::ESWalkMode::ESWalkMode_WasPlayingAsDefaultAvatar
               (ESWalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVLocalPlayerBuilder *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayerBuilder *)0x0) {
    bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    pMVar3 = (MVLocalPlayer__Class *)pMVar1->klass;
    bStack_4 = (pMVar3->_1).naturalAligment;
    if ((bStack_4 < bVar2) ||
       ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    pMVar7 = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    if ((bStack_4 < bVar2) ||
       ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar8 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                       (&MStack_9,pMVar6,(MethodInfo *)0x0);
    iVar10 = pMVar8->previousSpawnRoleId;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_00 != (MVLocalPlayer *)0x0) {
      iVar11 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_00,(MethodInfo *)0x0);
      return iVar10 == iVar11;
    }
  }
  func_?();
  pMVar1 = extraout_ECX;
  pMVar7 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar7);
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void <Enter>m__0(IEditModeController, BaseEventData) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode__Enter_m__0
               (IEditModeController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IEditModeController *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IEditModeController,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

