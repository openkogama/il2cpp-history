
/* ESWalkMode+EnterPlayFromEditState CalculateEnterPlayFromEditState() */

ESWalkMode_EnterPlayFromEditState__Enum
Assembly-CSharp.dll::ESWalkMode::ESWalkMode_CalculateEnterPlayFromEditState
          (ESWalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  pMVar2 = TypeInfo__MVLocalPlayerBuilder;
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    if (((pMVar1->klass->_1).naturalAligment < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment)
       || ((pMVar1->klass->_1).typeHierarchy
           [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    team = pMVar1[1].klass;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    pMVar2 = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      if (((pMVar1->klass->_1).naturalAligment <
           (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment) ||
         ((pMVar1->klass->_1).typeHierarchy
          [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pMVar4 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                             (pMVar3,(MethodInfo *)0x0), pMVar4 != (MVWorldObjectClientManager *)0x0
         )) {
        id = 0x86;
        pLVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                            (pMVar4,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
        if (pLVar5 != (List_1_MVWorldObjectClient_ *)0x0) {
          iVar6 = (pLVar5->fields)._size;
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) &&
             (pMVar7 = (pMVar3->fields).teamManager, pMVar7 != (MVTeamManager *)0x0)) {
            pMVar2 = (MVLocalPlayerBuilder__Class *)
                      MVTeamManager::MVTeamManager_TeamCount(pMVar7,(MethodInfo *)0x0);
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar3 != (MVNetworkGame *)0x0) &&
               (pMVar7 = (pMVar3->fields).teamManager, pMVar7 != (MVTeamManager *)0x0)) {
              bVar8 = MVTeamManager::MVTeamManager_HasTeam(pMVar7,team,(MethodInfo *)0x0);
              cVar9 = bVar8 == 0 && 1 < (int)pMVar2;
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar3 != (MVNetworkGame *)0x0) &&
                 (pMVar4 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                     (pMVar3,(MethodInfo *)0x0),
                 pMVar4 != (MVWorldObjectClientManager *)0x0)) {
                pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar4,id,(MethodInfo *)0x0);
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar3 != (MVNetworkGame *)0x0) &&
                   (pMVar11 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
                   pMVar11 != (MVNetworkGameStateListener *)0x0)) {
                  iVar12 = (pMVar11->fields).currentGameState;
                  if (pMVar10 != (MVWorldObject *)0x0 || iVar6 < 1) {
code_?:
                    if (cVar9 != '\0') {
                      return ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole;
                    }
                    EVar13 = ESWalkMode_EnterPlayFromEditState__Enum_WaitForRoundToStart;
                    if (iVar12 != 2) {
                      EVar13 = ESWalkMode_EnterPlayFromEditState__Enum_EnterPlayMode;
                    }
                    return EVar13;
                  }
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                     ((MethodInfo *)0x0);
                  pMVar2 = TypeInfo__MVLocalPlayerBuilder;
                  if (pMVar1 != (MVLocalPlayer *)0x0) {
                    if (((pMVar1->klass->_1).naturalAligment <
                         (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment) ||
                       ((pMVar1->klass->_1).typeHierarchy
                        [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] !=
                        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
                    pMVar2 = (MVLocalPlayerBuilder__Class *)pMVar1[1].fields._.checkpointWOID;
                    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                       ((MethodInfo *)0x0);
                    if (pMVar1 != (MVLocalPlayer *)0x0) {
                      pMVar14 = (MVLocalPlayerBuilder__Class *)
                                MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                                          (pMVar1,(MethodInfo *)0x0);
                      if (pMVar2 != pMVar14) {
                        return ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole;
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
    }
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar2);
  pcVar15 = (code *)swi(3);
  EVar13 = (*pcVar15)();
  return EVar13;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_Enter
               (ESWalkMode *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&MethodInfo__ESWalkMode__OnNewSpawnRoleSelected_int_);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                   );
    func_?(&TypeInfo__SpawnRoleMenu);
    func_?(&
                    MethodInfo__ESWalkMode____c___Enter_b__0_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ESWalkMode____c);
    cRam_? = '\x01';
  }
  if (esm != (EditorStateMachine *)0x0) {
    unaff_ESI = (Delegate *)(esm->fields).gameObject;
    if ((TypeInfo__ESWalkMode____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ESWalkMode____c);
    }
    callbackFunction = TypeInfo__ESWalkMode____c->static_fields->__9__0_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
      if ((TypeInfo__ESWalkMode____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ESWalkMode____c);
      }
      object = TypeInfo__ESWalkMode____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IEditModeController_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ESWalkMode____c___Enter_b__0_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ESWalkMode____c->static_fields->__9__0_0 = callbackFunction;
      func_?(&TypeInfo__ESWalkMode____c->static_fields->__9__0_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)unaff_ESI,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
              );
    EditorStateMachine::EditorStateMachine_DeSelectAll(esm,(MethodInfo *)0x0);
    EditorStateMachine::EditorStateMachine_ExitGroupToRoot(esm,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                         (pMVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVGroup *)0x0) {
        (*(code *)(pMVar2->klass->vtable).PlayModeInitialize.method)
                  (pMVar2,(pMVar2->klass->vtable).SetupTierInventory.methodPtr);
        EVar3 = ESWalkMode_CalculateEnterPlayFromEditState(this,(MethodInfo *)0x0);
        if (EVar3 == ESWalkMode_EnterPlayFromEditState__Enum_EnterPlayMode) {
          MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
        }
        else {
          if (EVar3 == ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole) {
            pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if (((pGVar4 == (GameEventManager *)0x0) ||
                (pGVar5 = (pGVar4->fields).GameState,
                pGVar5 == (GameEventManager_GameStateManager *)0x0)) ||
               (pAVar6 = (pGVar5->fields).OnEnableLobbyState, pAVar6 == (Action *)0x0))
            goto code_?;
            (*(pAVar6->fields)._._.invoke_impl)
                      ((pAVar6->fields)._._.method_code,(pAVar6->fields)._._.method);
            pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
          }
          else {
            if (EVar3 != ESWalkMode_EnterPlayFromEditState__Enum_WaitForRoundToStart)
            goto code_?;
            pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
          }
          if ((pGVar4 == (GameEventManager *)0x0) ||
             (this_00 = (pGVar4->fields).AvatarCommandsPlayMode,
             this_00 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
          goto code_?;
          GameEventManager+AvatarCommandsPlayModeManager::
          GameEventManager_AvatarCommandsPlayModeManager_RemoveFromGame(this_00,(MethodInfo *)0x0);
          MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
        }
code_?:
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
           (this_01 = (pMVar1->fields)._MoveableController_k__BackingField,
           this_01 != (MoveableController *)0x0)) {
          MoveableController::MoveableController_ResetMoveables(this_01,(MethodInfo *)0x0);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame *)0x0) {
            pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
            if (pMVar8 != (MVLocalPlayer *)0x0) {
              esm = (EditorStateMachine *)(pMVar8->fields)._._Team_k__BackingField;
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar7 != (MVNetworkGame *)0x0) {
                if ((Action_1_Int32___Class *)esm == (Action_1_Int32___Class *)0x5) {
code_?:
                  DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
                  pAVar9 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
                  this_03 = (UnityAction_1_System_Int32Enum_ *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]
                  ::UnityAction_1_System_Int32Enum___ctor
                            (this_03,(Object *)this,
                             MethodInfo__ESWalkMode__OnNewSpawnRoleSelected_int_,(MethodInfo *)0x0);
                  unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar9,(Delegate *)this_03,(MethodInfo *)0x0);
                  esm = (EditorStateMachine *)TypeInfo__System__Action<int>;
                  if (unaff_ESI == (Delegate *)0x0) {
                    TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected =
                         (Action_1_Int32_ *)0x0;
                    pAStack10 = (Action_1_Int32___Class *)0x0;
code_?:
                    pDStack11 = (Delegate *)TypeInfo__SpawnRoleMenu->static_fields;
                    func_?();
                    return;
                  }
                  pAStack10 = TypeInfo__System__Action<int>;
                  pDStack11 = unaff_ESI;
                  pAVar9 = (Action_1_Int32_ *)func_?();
                  if (pAVar9 != (Action_1_Int32_ *)0x0) {
                    TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected = pAVar9;
                    esm = (EditorStateMachine *)TypeInfo__System__Action<int>;
                    pAStack10 = TypeInfo__System__Action<int>;
                    pDStack11 = unaff_ESI;
                    pAStack10 = (Action_1_Int32___Class *)func_?();
                    if (pAStack10 != (Action_1_Int32___Class *)0x0) goto code_?;
                  }
                  goto code_?;
                }
                this_02 = (pMVar7->fields).teamManager;
                unaff_ESI = (Delegate *)0x0;
                if (this_02 != (MVTeamManager *)0x0) {
                  bVar12 = MVTeamManager::MVTeamManager_IsTeamActive
                                    (this_02,(MVTeam__Enum)esm,(MethodInfo *)0x0);
                  if (bVar12 != 0) goto code_?;
                  esm = (EditorStateMachine *)
                        MVTeamManager::MVTeamManager_GetTeamList(this_02,(MethodInfo *)0x0);
                  unaff_ESI = (Delegate *)
                              MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                        ((MethodInfo *)0x0);
                  if ((Action_1_Int32___Class *)esm != (Action_1_Int32___Class *)0x0) {
                    team = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)esm,0,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                     );
                    if (unaff_ESI != (Delegate *)0x0) {
                      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                                ((MVNetworkGame_OperationRequests *)unaff_ESI,(MVTeam__Enum)team,
                                 (MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  pDStack11 = unaff_ESI;
  pAStack10 = (Action_1_Int32___Class *)esm;
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_Exit
               (ESWalkMode *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&MethodInfo__ESWalkMode__OnNewSpawnRoleSelected_int_);
    func_?(&TypeInfo__SpawnRoleMenu);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
  this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_00,(Object *)this,MethodInfo__ESWalkMode__OnNewSpawnRoleSelected_int_,
             (MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected = (Action_1_Int32_ *)0x0;
code_?:
    func_?();
    return;
  }
  pAVar1 = (Action_1_Int32_ *)func_?();
  if (pAVar1 != (Action_1_Int32_ *)0x0) {
    TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected = pAVar1;
    iVar3 = func_?();
    if (iVar3 != 0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleEnterPlayInEditMode() */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_HandleEnterPlayInEditMode
               (ESWalkMode *this,MethodInfo *method)

{
  EVar1 = ESWalkMode_CalculateEnterPlayFromEditState(this,(MethodInfo *)0x0);
  if (EVar1 == ESWalkMode_EnterPlayFromEditState__Enum_EnterPlayMode) {
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
    return;
  }
  if (EVar1 == ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole) {
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar2 == (GameEventManager *)0x0) ||
        (pGVar3 = (pGVar2->fields).GameState, pGVar3 == (GameEventManager_GameStateManager *)0x0))
       || (pAVar4 = (pGVar3->fields).OnEnableLobbyState, pAVar4 == (Action *)0x0))
    goto code_?;
    (*(pAVar4->fields)._._.invoke_impl)();
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  }
  else {
    if (EVar1 != ESWalkMode_EnterPlayFromEditState__Enum_WaitForRoundToStart) {
      return;
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  }
  if ((pGVar2 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar2->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_RemoveFromGame(this_00,(MethodInfo *)0x0);
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  uVar5 = func_?(&stack0xfffffffc);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnNewSpawnRoleSelected(Int32) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_OnNewSpawnRoleSelected
               (ESWalkMode *this,int32_t newSpawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  pMVar1 = (MVLocalPlayerBuilder__Class *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayerBuilder__Class *)0x0) {
code_?:
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    pIVar3 = (pMVar1->_0).image;
    pMVar4 = TypeInfo__MVLocalPlayerBuilder;
    if ((*(byte *)&pIVar3[4].assembly < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment) ||
       (*(MVLocalPlayerBuilder__Class **)
         ((pIVar3[2].typeCount - 4) + (uint)(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment * 4
         ) != TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    uVar5 = (pMVar1->_1).thread_static_fields_size;
    uVar6 = (pMVar1->_1).flags;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    pMVar1 = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <= (pMVar2->klass->_1).naturalAligment
        ) && ((pMVar2->klass->_1).typeHierarchy
              [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] ==
              (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      pMVar2[1].klass = (MVLocalPlayer__Class *)uVar5;
      pMVar2[1].monitor = (MonitorData *)newSpawnRoleId;
      pMVar2[1].fields._.checkpointWOID = uVar6;
      return;
    }
  }
  func_?(pMVar2,pMVar1);
  pMVar4 = extraout_EDX_00;
code_?:
  func_?(pMVar1,pMVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean ShouldSelectTeamOrSpawnRole(Boolean, Boolean) */

bool Assembly-CSharp.dll::ESWalkMode::ESWalkMode_ShouldSelectTeamOrSpawnRole
               (ESWalkMode *this,bool isSpawnRoleValid,bool isTeamValid,MethodInfo *method)

{
  if (isSpawnRoleValid != 0) {
    return isTeamValid ^ 1;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    if (((pMVar1->klass->_1).naturalAligment < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment)
       || ((pMVar1->klass->_1).typeHierarchy
           [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      func_?(pMVar1,TypeInfo__MVLocalPlayerBuilder);
    }
    else {
      iVar2 = pMVar1[1].fields._.checkpointWOID;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar1 != (MVLocalPlayer *)0x0) {
        iVar3 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar1,(MethodInfo *)0x0);
        bVar4 = isTeamValid ^ 1;
        if (iVar2 != iVar3) {
          bVar4 = 1;
        }
        return bVar4;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean WasPlayingAsDefaultAvatar() */

bool Assembly-CSharp.dll::ESWalkMode::ESWalkMode_WasPlayingAsDefaultAvatar
               (ESWalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  pMVar2 = TypeInfo__MVLocalPlayerBuilder;
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    if (((pMVar1->klass->_1).naturalAligment < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment)
       || ((pMVar1->klass->_1).typeHierarchy
           [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    pMVar2 = (MVLocalPlayerBuilder__Class *)pMVar1[1].fields._.checkpointWOID;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      pMVar3 = (MVLocalPlayerBuilder__Class *)
               MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar1,(MethodInfo *)0x0);
      return pMVar2 == pMVar3;
    }
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

