
/* ESWalkMode+EnterPlayFromEditState CalculateEnterPlayFromEditState() */

ESWalkMode_EnterPlayFromEditState__Enum
Assembly-CSharp.dll::ESWalkMode::ESWalkMode_CalculateEnterPlayFromEditState
          (ESWalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX != (longlong *)0x0) {
    bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX + 0x130) < bVar1) ||
       (*(MVLocalPlayerBuilder__Class **)
         (*(longlong *)(*extraout_RAX + 200) + -8 + (longlong)(ulonglong)bVar1 * 8) !=
        TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
      pcVar2 = (code *)swi(3);
      EVar3 = (*pcVar2)();
      return EVar3;
    }
    lVar4 = extraout_RAX[0x21];
    MVTriggerBox::MVTriggerBox_OnExit
              ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar1,
               (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
    if (extraout_RAX_00 != (longlong *)0x0) {
      bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar1) ||
         (*(MVLocalPlayerBuilder__Class **)
           (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar1 * 8) !=
          TypeInfo__MVLocalPlayerBuilder)) {
        FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
        pcVar2 = (code *)swi(3);
        EVar3 = (*pcVar2)();
        return EVar3;
      }
      uVar5 = extraout_RAX_00[0x21];
      player = (MVPlayer *)(uVar5 >> 0x20);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
           (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
          ((pMVar7->fields).worldNetwork != (WorldNetwork *)0x0)) &&
         ((pMVar8 = (MVWorldObjectClientManager *)
                     (((pMVar7->fields).worldNetwork)->fields)._.worldObjectClientManager,
          pMVar8 != (MVWorldObjectClientManager *)0x0 &&
          (pLVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                               (pMVar8,WorldObjectType__Enum_AvatarSpawnRoleCreator,
                                (MethodInfo *)0x0), pLVar9 != (List_1_MVWorldObjectClient_ *)0x0)))
         ) {
        iVar10 = (pLVar9->fields)._size;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar6 != (MVGameControllerBase *)0x0) &&
            (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
           (pMVar11 = (pMVar7->fields).teamManager, pMVar11 != (MVTeamManager *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar12 = (pMVar11->fields).teams;
          if (pDVar12 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
            iVar13 = (pDVar12->fields)._count;
            iVar14 = (pDVar12->fields)._freeCount;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar6 != (MVGameControllerBase *)0x0) &&
                (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
               (pMVar11 = (pMVar7->fields).teamManager, pMVar11 != (MVTeamManager *)0x0)) {
              MStack_15 = (MVTeam__Enum)lVar4;
              bVar16 = MVTeamManager::MVTeamManager_HasTeam(pMVar11,MStack_15,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar6 != (MVGameControllerBase *)0x0) &&
                  (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
                 (((pMVar7->fields).worldNetwork != (WorldNetwork *)0x0 &&
                  (pMVar8 = (MVWorldObjectClientManager *)
                             (((pMVar7->fields).worldNetwork)->fields)._.worldObjectClientManager,
                  pMVar8 != (MVWorldObjectClientManager *)0x0)))) {
                method_00 = (MethodInfo *)0x0;
                pMVar17 = MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClient
                                    (pMVar8,(int32_t)(uVar5 >> 0x20),(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar6 != (MVGameControllerBase *)0x0) &&
                    (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
                   (pMVar18 = (pMVar7->fields)._NetworkGameStateListener_k__BackingField,
                   pMVar18 != (MVNetworkGameStateListener *)0x0)) {
                  iVar19 = (pMVar18->fields).currentGameState;
                  if (pMVar17 != (MVWorldObjectClient *)0x0 || iVar10 < 1) {
code_?:
                    if (bVar16 == 0 && 1 < iVar13 - iVar14) {
                      return ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole;
                    }
                    if (iVar19 != 2) {
                      return ESWalkMode_EnterPlayFromEditState__Enum_EnterPlayMode;
                    }
                    return ESWalkMode_EnterPlayFromEditState__Enum_WaitForRoundToStart;
                  }
                  if (cRam_? == '\0') {
                    FUN_?();
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
                  if (extraout_RAX_01 != (longlong *)0x0) {
                    bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                    if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar1) ||
                       (*(MVLocalPlayerBuilder__Class **)
                         (*(longlong *)(*extraout_RAX_01 + 200) + -8 +
                         (longlong)(ulonglong)bVar1 * 8) != TypeInfo__MVLocalPlayerBuilder)) {
                      FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
                      pcVar2 = (code *)swi(3);
                      EVar3 = (*pcVar2)();
                      return EVar3;
                    }
                    IVar20 = *(Int32Enum__Enum *)(extraout_RAX_01 + 0x22);
                    MVTriggerBox::MVTriggerBox_OnExit
                              ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar1,
                               (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
                    if (extraout_RAX_02 != 0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if ((*(longlong *)(extraout_RAX_02 + 0x90) != 0) &&
                         (this_00 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                                     (*(longlong *)(extraout_RAX_02 + 0x90) + 0x10),
                         this_00 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
                        IVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32Enum,System::Int32Enum]::
                                 Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                           (this_00,0,
                                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                           );
                        if (IVar20 != IVar21) {
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
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  EVar3 = (*pcVar2)();
  return EVar3;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_Enter
               (ESWalkMode *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ESWalkMode__OnNewSpawnRoleSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenu);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESWalkMode____c___Enter_b__0_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESWalkMode____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (esm != (EditorStateMachine *)0x0) {
    root = (esm->fields).gameObject;
    if (*(int *)&(TypeInfo__ESWalkMode____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_04 = TypeInfo__ESWalkMode____c->static_fields->__9__0_0;
    if (this_04 == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
      if (*(int *)&(TypeInfo__ESWalkMode____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__ESWalkMode____c->static_fields->__9;
      this_04 = (ExecuteEvents_EventFunction_1_IEditModeController_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)object,
                 MethodInfo__ESWalkMode____c___Enter_b__0_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ESWalkMode____c->static_fields->__9__0_0 = this_04;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__ESWalkMode____c->static_fields->__9__0_0 >> 0xc);
        lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar4 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
              );
    this_00 = (esm->fields).selectionController;
    if (this_00 != (SelectionController *)0x0) {
      SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
      EditorStateMachine::EditorStateMachine_ExitGroupToRoot(esm,(MethodInfo *)0x0);
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar6 != (MVWorldObjectClientManager *)0x0) &&
         (pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                              (pMVar6,(MethodInfo *)0x0), pMVar7 != (MVGroup *)0x0)) {
        (*(pMVar7->klass->vtable).PlayModeInitialize.methodPtr)(pMVar7);
        enterState = ESWalkMode_CalculateEnterPlayFromEditState(this,(MethodInfo *)0x0);
        PMOWalkMode::PMOWalkMode_HandleEnterState((PMOWalkMode *)this,enterState,(MethodInfo *)0x0);
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar6 != (MVWorldObjectClientManager *)0x0) &&
           (this_01 = (pMVar6->fields)._MoveableController_k__BackingField,
           this_01 != (MoveableController *)0x0)) {
          MoveableController::MoveableController_ResetMoveables(this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar8 != (MVGameControllerBase *)0x0) &&
               (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
              (this_02 = (pMVar9->fields).playerContainer, this_02 != (MVPlayerContainer *)0x0)) &&
             (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (this_02,(MethodInfo *)0x0), pMVar10 != (MVLocalPlayer *)0x0)) {
            team = (pMVar10->fields)._._Team_k__BackingField;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar8 != (MVGameControllerBase *)0x0) &&
               (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) {
              if (team == MVTeam__Enum_None) {
code_?:
                DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
                pAVar11 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
                pDVar12 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
                FUN_?(pDVar12,this);
                pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar11,pDVar12,(MethodInfo *)0x0);
                pAVar13 = TypeInfo__System__Action<int>;
                if (pDVar12 == (Delegate *)0x0) {
                  TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected =
                       (Action_1_Int32_ *)0x0;
                }
                else {
                  pAVar11 = (Action_1_Int32_ *)FUN_?(pDVar12,TypeInfo__System__Action<int>);
                  if (pAVar11 == (Action_1_Int32_ *)0x0) {
                    FUN_?(pDVar12,pAVar13);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected = pAVar11;
                  pAVar13 = TypeInfo__System__Action<int>;
                  lVar2 = FUN_?(pDVar12,TypeInfo__System__Action<int>);
                  if (lVar2 == 0) {
                    FUN_?(pDVar12,pAVar13);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar1 = (uint)((ulonglong)TypeInfo__SpawnRoleMenu->static_fields >> 0xc);
                  lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
                    puVar4 = (ulonglong *)(lVar2 + 0xADDR);
                    LOCK();
                    bVar5 = uVar3 == *puVar4;
                    if (bVar5) {
                      *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                return;
              }
              this_03 = (pMVar9->fields).teamManager;
              if (this_03 != (MVTeamManager *)0x0) {
                bVar15 = MVTeamManager::MVTeamManager_IsTeamActive(this_03,team,(MethodInfo *)0x0);
                if (bVar15 != 0) goto code_?;
                pLVar16 = MVTeamManager::MVTeamManager_GetTeamList(this_03,(MethodInfo *)0x0);
                this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                if (pLVar16 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                  if ((pLVar16->fields)._size == 0) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pMVar17 = (pLVar16->fields)._items;
                  if (pMVar17 != (MVTeam__Enum__Array *)0x0) {
                    if ((int)pMVar17->max_length == 0) {
                      FUN_?();
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    if (this_05 != (MVNetworkGame_OperationRequests *)0x0) {
                      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                                (this_05,pMVar17->vector[0],(MethodInfo *)0x0);
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
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_Exit
               (ESWalkMode *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ESWalkMode__OnNewSpawnRoleSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenu);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
  pDVar2 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
  FUN_?(pDVar2,this);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,pDVar2,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<int>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected = (Action_1_Int32_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_Int32_ *)FUN_?(pDVar2,TypeInfo__System__Action<int>);
    if (pAVar1 == (Action_1_Int32_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected = pAVar1;
    pAVar3 = TypeInfo__System__Action<int>;
    lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<int>);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__SpawnRoleMenu->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void HandleEnterPlayInEditMode() */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_HandleEnterPlayInEditMode
               (ESWalkMode *this,MethodInfo *method)

{
  EVar1 = ESWalkMode_CalculateEnterPlayFromEditState(this,(MethodInfo *)0x0);
  if (EVar1 == ESWalkMode_EnterPlayFromEditState__Enum_EnterPlayMode) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ILockCursorManager,0,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
      return;
    }
    pMVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar2 != (MVGameControllerDesktop *)0x0) &&
       (pIVar3 = (pMVar2->fields).lockCursorManager, pIVar3 != (ILockCursorManager *)0x0)) {
      uVar4 = 1;
FUN_?:
      pIVar5 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)uVar4;
      uVar6 = 0;
      pIVar7 = pIVar3->klass;
      uVar8._0_1_ = (pIVar7->_1).rank;
      uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
      if (uVar8 != 0) {
        pIVar5 = pIVar7->interfaceOffsets;
        do {
          if (pIVar5[uVar6].interfaceType == (Il2CppClass *)TypeInfo__ILockCursorManager) {
            ppIVar9 = &(&(pIVar7->vtable).get_CursorLock)[pIVar5[uVar6].offset + 1].methodPtr;
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      ppIVar9 = (Il2CppMethodPointer *)
                 FUN_?(pIVar3,TypeInfo__ILockCursorManager,1,pIVar5);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppIVar9)(pIVar3,(ulonglong)(byte)uVar4,(MethodInfo *)ppIVar9[1],*ppIVar9);
      return;
    }
  }
  else {
    if (EVar1 == ESWalkMode_EnterPlayFromEditState__Enum_SelectTeamOrSpawnRole) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar10 == (MVGameControllerBase *)0x0) ||
           (pMVar11 = (pMVar10->fields).game, pMVar11 == (MVNetworkGame *)0x0)) ||
          (pGVar12 = (pMVar11->fields).GameEventManager, pGVar12 == (GameEventManager *)0x0)) ||
         ((pGVar13 = (pGVar12->fields).GameState, pGVar13 == (GameEventManager_GameStateManager *)0x0
          || (pAVar14 = (pGVar13->fields).OnEnableLobbyState, pAVar14 == (Action *)0x0))))
      goto code_?;
      (*(pAVar14->fields)._._.invoke_impl)
                ((pAVar14->fields)._._.method_code,(pAVar14->fields)._._.method);
    }
    else if (EVar1 != ESWalkMode_EnterPlayFromEditState__Enum_WaitForRoundToStart) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar10 != (MVGameControllerBase *)0x0) &&
        (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
       ((pGVar12 = (pMVar11->fields).GameEventManager, pGVar12 != (GameEventManager *)0x0 &&
        (pGVar15 = (pGVar12->fields).AvatarCommandsPlayMode,
        pGVar15 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)))) {
      if ((pGVar15->fields).OnRemoveFromGame != (Action *)0x0) {
        pAVar14 = (pGVar15->fields).OnRemoveFromGame;
        (*(pAVar14->fields)._._.invoke_impl)
                  ((pAVar14->fields)._._.method_code,(pAVar14->fields)._._.method);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__ILockCursorManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        return;
      }
      pMVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar2 != (MVGameControllerDesktop *)0x0) &&
         (pIVar3 = (pMVar2->fields).lockCursorManager, pIVar3 != (ILockCursorManager *)0x0)) {
        uVar4 = 0;
        goto FUN_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnNewSpawnRoleSelected(Int32) */

void Assembly-CSharp.dll::ESWalkMode::ESWalkMode_OnNewSpawnRoleSelected
               (ESWalkMode *this,int32_t newSpawnRoleId,MethodInfo *method)

{
  player = (MVPlayer *)CONCAT44(in_register_00000014,newSpawnRoleId);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method);
  if (extraout_RAX != (longlong *)0x0) {
    bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX + 0x130) < bVar1) ||
       (*(MVLocalPlayerBuilder__Class **)
         (*(longlong *)(*extraout_RAX + 200) + -8 + (longlong)(ulonglong)bVar1 * 8) !=
        TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar3 = extraout_RAX[0x22];
    uStack_4 = (undefined4)extraout_RAX[0x21];
    MVTriggerBox::MVTriggerBox_OnExit
              ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar1,
               (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
    if (extraout_RAX_00 != (longlong *)0x0) {
      bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar1) ||
         (*(MVLocalPlayerBuilder__Class **)
           (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar1 * 8) !=
          TypeInfo__MVLocalPlayerBuilder)) {
        FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if ((bVar1 <= *(byte *)(*extraout_RAX_00 + 0x130)) &&
         (*(MVLocalPlayerBuilder__Class **)
           (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar1 * 8) ==
          TypeInfo__MVLocalPlayerBuilder)) {
        extraout_RAX_00[0x21] = CONCAT44(newSpawnRoleId,uStack_4);
        *(int *)(extraout_RAX_00 + 0x22) = (int)lVar3;
        return;
      }
      FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ShouldSelectTeamOrSpawnRole(Boolean, Boolean) */

bool Assembly-CSharp.dll::ESWalkMode::ESWalkMode_ShouldSelectTeamOrSpawnRole
               (ESWalkMode *this,bool isSpawnRoleValid,bool isTeamValid,MethodInfo *method)

{
  method_00 = (MethodInfo *)CONCAT71(in_register_00000081,isTeamValid);
  player = (MVPlayer *)CONCAT71(in_register_00000011,isSpawnRoleValid);
  if (isSpawnRoleValid != 0) {
    return isTeamValid ^ 1;
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
  if (extraout_RAX != (longlong *)0x0) {
    bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX + 0x130) < bVar1) ||
       (*(MVLocalPlayerBuilder__Class **)
         (*(longlong *)(*extraout_RAX + 200) + -8 + (longlong)(ulonglong)bVar1 * 8) !=
        TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    IVar4 = *(Int32Enum__Enum *)(extraout_RAX + 0x22);
    MVTriggerBox::MVTriggerBox_OnExit
              ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar1,
               (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
    if (extraout_RAX_00 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((*(longlong *)(extraout_RAX_00 + 0x90) != 0) &&
         (this_00 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                     (*(longlong *)(extraout_RAX_00 + 0x90) + 0x10),
         this_00 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
        IVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                          (this_00,0,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                          );
        bVar3 = isTeamValid ^ 1;
        if (IVar4 != IVar5) {
          bVar3 = 1;
        }
        return bVar3;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean WasPlayingAsDefaultAvatar() */

bool Assembly-CSharp.dll::ESWalkMode::ESWalkMode_WasPlayingAsDefaultAvatar
               (ESWalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX != (longlong *)0x0) {
    bVar1 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX + 0x130) < bVar1) ||
       (*(MVLocalPlayerBuilder__Class **)
         (*(longlong *)(*extraout_RAX + 200) + -8 + (longlong)(ulonglong)bVar1 * 8) !=
        TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    IVar4 = *(Int32Enum__Enum *)(extraout_RAX + 0x22);
    MVTriggerBox::MVTriggerBox_OnExit
              ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar1,
               (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
    if (extraout_RAX_00 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((*(longlong *)(extraout_RAX_00 + 0x90) != 0) &&
         (this_00 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                     (*(longlong *)(extraout_RAX_00 + 0x90) + 0x10),
         this_00 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
        IVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                          (this_00,0,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                          );
        return IVar4 == IVar5;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

