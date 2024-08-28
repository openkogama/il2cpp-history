
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
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar3) ||
       ((pMVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    team = pMVar1[1].klass;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    pMVar2 = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar3) ||
         ((pMVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar4,(MethodInfo *)0x0),
         pMVar5 != (MVWorldObjectClientManager *)0x0)) {
        id = 0x86;
        pLVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                            (pMVar5,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0)
        ;
        if (pLVar6 != (List_1_MVWorldObjectClient_ *)0x0) {
          iVar7 = (pLVar6->fields)._size;
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar4 != (MVNetworkGame *)0x0) &&
             (pMVar8 = (pMVar4->fields).teamManager, pMVar8 != (MVTeamManager *)0x0)) {
            pMVar2 = (MVLocalPlayerBuilder__Class *)
                      MVTeamManager::MVTeamManager_TeamCount(pMVar8,(MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar4 != (MVNetworkGame *)0x0) &&
               (pMVar8 = (pMVar4->fields).teamManager, pMVar8 != (MVTeamManager *)0x0)) {
              bVar9 = MVTeamManager::MVTeamManager_HasTeam(pMVar8,team,(MethodInfo *)0x0);
              cVar10 = bVar9 == 0 && 1 < (int)pMVar2;
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar4 != (MVNetworkGame *)0x0) &&
                 (pMVar5 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                      (pMVar4,(MethodInfo *)0x0),
                 pMVar5 != (MVWorldObjectClientManager *)0x0)) {
                pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar5,id,(MethodInfo *)0x0);
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar4 != (MVNetworkGame *)0x0) &&
                   (pMVar12 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
                   pMVar12 != (MVNetworkGameStateListener *)0x0)) {
                  iVar13 = (pMVar12->fields).currentGameState;
                  if (pMVar11 != (MVWorldObject *)0x0 || iVar7 < 1) {
code_?:
                    if (cVar10 != '\0') {
                      return ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole;
                    }
                    EVar14 = ESWalkMode_EnterPlayFromEditState__Enum_WaitForRoundToStart;
                    if (iVar13 != 2) {
                      EVar14 = ESWalkMode_EnterPlayFromEditState__Enum_EnterPlayMode;
                    }
                    return EVar14;
                  }
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                     ((MethodInfo *)0x0);
                  pMVar2 = TypeInfo__MVLocalPlayerBuilder;
                  if (pMVar1 != (MVLocalPlayer *)0x0) {
                    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                    if (((pMVar1->klass->_1).naturalAligment < bVar3) ||
                       ((pMVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
                        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
                    pMVar2 = (MVLocalPlayerBuilder__Class *)pMVar1[1].fields._.checkpointWOID;
                    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                       ((MethodInfo *)0x0);
                    if (pMVar1 != (MVLocalPlayer *)0x0) {
                      pMVar15 = (MVLocalPlayerBuilder__Class *)
                                MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                                          (pMVar1,(MethodInfo *)0x0);
                      if (pMVar2 != pMVar15) {
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
  pcVar16 = (code *)swi(3);
  EVar14 = (*pcVar16)();
  return EVar14;
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
          PlayButtonTouch::PlayButtonTouch_OnConfirmPlay
                    ((PlayButtonTouch *)this_00,(MethodInfo *)0x0);
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
    PlayButtonTouch::PlayButtonTouch_OnConfirmPlay((PlayButtonTouch *)this_00,(MethodInfo *)0x0);
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


/* Void HandleEnterState(ESWalkMode+EnterPlayFromEditState) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_HandleEnterState
               (ESWalkMode *this,ESWalkMode_EnterPlayFromEditState__Enum enterState,
               MethodInfo *method)

{
  if (enterState != ESWalkMode_EnterPlayFromEditState__Enum_EnterPlayMode) {
    if (enterState == ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole) {
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar1 == (GameEventManager *)0x0) ||
          (pGVar2 = (pGVar1->fields).GameState, pGVar2 == (GameEventManager_GameStateManager *)0x0))
         || (pAVar3 = (pGVar2->fields).OnEnableLobbyState, pAVar3 == (Action *)0x0))
      goto code_?;
      (*(pAVar3->fields)._._.invoke_impl)();
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    }
    else {
      if (enterState != ESWalkMode_EnterPlayFromEditState__Enum_WaitForRoundToStart) {
        return;
      }
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    }
    if ((pGVar1 == (GameEventManager *)0x0) ||
       (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
       this_00 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
    PlayButtonTouch::PlayButtonTouch_OnConfirmPlay((PlayButtonTouch *)this_00,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pMVar4 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar4 == (MVGameControllerDesktop *)0x0) ||
       ((pMVar4->fields).lockCursorManager == (ILockCursorManager *)0x0)) {
code_?:
      uVar5 = func_?(&pIStack_6);
      func_?(uVar5);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIStack_6 = TypeInfo__ILockCursorManager;
    func_?(3);
  }
  return;
}


/* Void HandleSelectTeamOrSpawnRole() */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_HandleSelectTeamOrSpawnRole
               (ESWalkMode *this,MethodInfo *method)

{
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).GameState, pGVar2 != (GameEventManager_GameStateManager *)0x0)) &&
     (pAVar3 = (pGVar2->fields).OnEnableLobbyState, pAVar3 != (Action *)0x0)) {
    (*(pAVar3->fields)._._.invoke_impl)();
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar1 != (GameEventManager *)0x0) &&
       (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
       this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
      PlayButtonTouch::PlayButtonTouch_OnConfirmPlay((PlayButtonTouch *)this_00,(MethodInfo *)0x0);
      MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = func_?(&stack0xfffffff8);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    pMVar3 = TypeInfo__MVLocalPlayerBuilder;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    uVar4 = pMVar1[1].klass;
    iVar5 = pMVar1[1].fields._.checkpointWOID;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      pMVar3 = TypeInfo__MVLocalPlayerBuilder;
      if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
         ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
          (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        pMVar1[1].klass = (MVLocalPlayer__Class *)uVar4;
        pMVar1[1].monitor = (MonitorData *)newSpawnRoleId;
        pMVar1[1].fields._.checkpointWOID = iVar5;
        return;
      }
      goto code_?;
    }
  }
  pMVar3 = TypeInfo__MVLocalPlayerBuilder;
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar3);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetToHiddenMode() */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_SetToHiddenMode
               (ESWalkMode *this,MethodInfo *method)

{
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    PlayButtonTouch::PlayButtonTouch_OnConfirmPlay((PlayButtonTouch *)this_00,(MethodInfo *)0x0);
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      func_?(pMVar1,TypeInfo__MVLocalPlayerBuilder);
    }
    else {
      iVar3 = pMVar1[1].fields._.checkpointWOID;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar1 != (MVLocalPlayer *)0x0) {
        iVar4 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar1,(MethodInfo *)0x0);
        if (iVar3 != iVar4) {
          return 1;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void TryLockCursor() */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_TryLockCursor(ESWalkMode *this,MethodInfo *method)

{
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
  return;
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
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar3) ||
       ((pMVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    pMVar2 = (MVLocalPlayerBuilder__Class *)pMVar1[1].fields._.checkpointWOID;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      pMVar4 = (MVLocalPlayerBuilder__Class *)
               MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar1,(MethodInfo *)0x0);
      return pMVar2 == pMVar4;
    }
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar2);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

