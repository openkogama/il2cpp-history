
/* Boolean CanSpawnInTeam(MVTeam) */

bool Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_CanSpawnInTeam
               (TierBoostStateHandler *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                 );
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) &&
     (pLVar4 = MVTeamManager::MVTeamManager_GetTeamList(pMVar3,(MethodInfo *)0x0),
     pLVar4 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
    if ((pLVar4->fields)._size < 2) {
      return 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
      bVar5 = MVTeamManager::MVTeamManager_TeamHasSpawnPoints(pMVar3,team,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        return 1;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
        pLVar6 = MVTeamManager::MVTeamManager_GetSpawnPointsForTeam(pMVar3,team,(MethodInfo *)0x0);
        uVar7 = 0;
        if (pLVar6 != (List_1_MVWorldObjectClient_ *)0x0) {
          lVar8 = 0x20;
          pMVar9 = TypeInfo__MVAvatarSpawnRoleCreator;
          do {
            if ((pLVar6->fields)._size <= (int)uVar7) {
              return 0;
            }
            if ((uint)(pLVar6->fields)._size <= uVar7) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              bVar5 = (*pcVar10)();
              return bVar5;
            }
            pMVar11 = (pLVar6->fields)._items;
            if (pMVar11 == (MVWorldObjectClient__Array *)0x0) break;
            if ((uint)pMVar11->max_length <= uVar7) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              bVar5 = (*pcVar10)();
              return bVar5;
            }
            plVar12 = *(longlong **)((longlong)pMVar11->vector + lVar8 + -0x20);
            if (plVar12 != (longlong *)0x0) {
              lVar13 = *plVar12;
              bVar14 = (pMVar9->_1).naturalAligment;
              if ((bVar14 <= *(byte *)(lVar13 + 0x130)) &&
                 (*(MVAvatarSpawnRoleCreator__Class **)
                   (*(longlong *)(lVar13 + 200) + -8 + (ulonglong)bVar14 * 8) == pMVar9)) {
                this_00 = (MVAvatarSpawnRoleCreator *)FUN_?(pLVar6,uVar7);
                if (this_00 == (MVAvatarSpawnRoleCreator *)0x0) break;
                bVar14 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
                if (((this_00->klass->_1).naturalAligment < bVar14) ||
                   ((MVAvatarSpawnRoleCreator__Class *)
                    (this_00->klass->_1).typeHierarchy[(ulonglong)bVar14 - 1] !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  FUN_?(this_00,TypeInfo__MVAvatarSpawnRoleCreator);
                  pcVar10 = (code *)swi(3);
                  bVar5 = (*pcVar10)();
                  return bVar5;
                }
                player = (MVPlayer *)0x0;
                pMVar9 = TypeInfo__MVAvatarSpawnRoleCreator;
                GVar15 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                                  (this_00,(MethodInfo *)0x0);
                MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)pMVar9);
                if ((((extraout_RAX == 0) || (*(longlong *)(extraout_RAX + 200) == 0)) ||
                    (lVar13 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0xb0), lVar13 == 0))
                   || (lVar13 = *(longlong *)(lVar13 + 0x10), lVar13 == 0)) break;
                if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                     ->klass->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                pMVar9 = TypeInfo__MVAvatarSpawnRoleCreator;
                if ((byte)GVar15 < *(byte *)(lVar13 + 0x10)) {
                  return 1;
                }
              }
            }
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 8;
          } while( true );
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar5 = (*pcVar10)();
  return bVar5;
}


/* Void ExitContinuePopup() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_ExitContinuePopup
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierBoostStateHandler____c___ExitContinuePopup_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierBoostStateHandler____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TierBoostStateHandler____c);
  }
  this_00 = TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierBoostStateHandler____c);
    }
    object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__TierBoostStateHandler____c___ExitContinuePopup_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0 >>
                    0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  player = (MVPlayer *)0x0;
  bVar5 = TierBoostStateHandler_IsInTempClass(this,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)this_00);
    if (extraout_RAX == 0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar7 = TierBoostStateHandler_CanSpawnInTeam
                      (this,*(MVTeam__Enum *)(extraout_RAX + 0x84),(MethodInfo *)0x0);
    if (bVar7 == 0) {
      TierBoostStateHandler_ShowTeamSelectionMenu(this,(MethodInfo *)0x0);
    }
    else {
      TierBoostStateHandler_ShowSpawnRoleSelectionMenu(this,(MethodInfo *)0x0);
    }
  }
  if ((this->fields).onFinished != (Action_1_Boolean_ *)0x0) {
    pAVar8 = (this->fields).onFinished;
    (*(pAVar8->fields)._._.invoke_impl)
              ((pAVar8->fields)._._.method_code,bVar5 ^ 1,(pAVar8->fields)._._.method);
  }
  return;
}


/* Boolean IsInTempClass() */

bool Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_IsInTempClass
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0xb0), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar2 = *(byte *)(lVar1 + 0x10);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      return (pPVar3->fields).gamePassTier < bVar2;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean IsInTempTier() */

bool Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).previewGamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      return (pPVar1->fields).gamePassTier < bVar2;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_OnPlayerPlanetDataUpdated
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                    &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierBoostStateHandler____c___ExitContinuePopup_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierBoostStateHandler____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TierBoostStateHandler____c);
  }
  this_01 = TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierBoostStateHandler____c);
    }
    object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__TierBoostStateHandler____c___ExitContinuePopup_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0 = this_01;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__TierBoostStateHandler____c->static_fields->__9__5_0 >>
                     0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  player = (MVPlayer *)0x0;
  bVar8 = TierBoostStateHandler_IsInTempClass(this,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)this_01);
    if (extraout_RAX == 0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = TierBoostStateHandler_CanSpawnInTeam
                      (this,*(MVTeam__Enum *)(extraout_RAX + 0x84),(MethodInfo *)0x0);
    if (bVar9 == 0) {
      TierBoostStateHandler_ShowTeamSelectionMenu(this,(MethodInfo *)0x0);
    }
    else {
      TierBoostStateHandler_ShowSpawnRoleSelectionMenu(this,(MethodInfo *)0x0);
    }
  }
  if ((this->fields).onFinished != (Action_1_Boolean_ *)0x0) {
    pAVar10 = (this->fields).onFinished;
    (*(pAVar10->fields)._._.invoke_impl)
              ((pAVar10->fields)._._.method_code,bVar8 ^ 1,(pAVar10->fields)._._.method);
  }
  return;
}


/* Void ShowSpawnRoleSelectionMenu() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_ShowSpawnRoleSelectionMenu
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierBoostStateHandler____c__DisplayClass6_0___ShowSpawnRoleSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierBoostStateHandler____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TierBoostStateHandler____c__DisplayClass6_0);
  original = (this->fields).spawnRoleSelectionMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__TierBoostStateHandler____c__DisplayClass6_0___ShowSpawnRoleSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    player = (MVPlayer *)0x0;
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = object[1].klass;
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)this_00);
    if ((extraout_RAX != 0) && (pOVar1 != (Object__Class *)0x0)) {
      SpawnRoleMenu::SpawnRoleMenu_Initialize
                ((SpawnRoleMenu *)pOVar1,*(MVTeam__Enum *)(extraout_RAX + 0x84),(MethodInfo *)0x0);
      if ((object[1].klass != (Object__Class *)0x0) &&
         (obj = ((object[1].klass)->_0).fields, obj != (FieldInfo *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (FieldInfo *)0x0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pIVar8 = obj->parent;
        if (pIVar8 == (Il2CppClass *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pIVar8,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ShowTeamSelectionMenu() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_ShowTeamSelectionMenu
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierBoostStateHandler____c__DisplayClass7_0___ShowTeamSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierBoostStateHandler____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__TierBoostStateHandler____c__DisplayClass7_0);
  original = (this->fields).teamMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
  if (pOVar1 == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = iRam_? != 0;
  pOVar1[1].klass = pOVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,pOVar1,
             MethodInfo__TierBoostStateHandler____c__DisplayClass7_0___ShowTeamSelectionMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (pOVar1[1].klass == (Object__Class *)0x0) goto code_?;
  player = (MVPlayer *)0x0;
  pOVar1 = (Object *)((pOVar1[1].klass)->_0).typeMetadataHandle;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
code_?:
    bVar4 = true;
  }
  else {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)this_00);
    if ((((extraout_RAX == 0) || (*(longlong *)(extraout_RAX + 200) == 0)) ||
        (lVar9 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0xb0), lVar9 == 0)) ||
       (lVar9 = *(longlong *)(lVar9 + 0x10), lVar9 == 0)) goto code_?;
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar10 = *(byte *)(lVar9 + 0x10);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar11 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar11 == (PlayerPlanetData *)0x0) goto code_?;
    bVar12 = (pPVar11->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar11 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar11 == (PlayerPlanetData *)0x0) goto code_?;
    if (bVar10 <= bVar12) goto code_?;
    bVar4 = bVar10 <= (pPVar11->fields).previewGamePassTier;
  }
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,bVar4,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar1 == (Object *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pOVar2 = pOVar1[1].klass;
    if (pOVar2 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pOVar2,bVar4);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StopPreviewTier(Action`1[Boolean]) */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
               (TierBoostStateHandler *this,Action_1_Boolean_ *onFinishPreviewTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierBoostStateHandler____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).onFinished = onFinishPreviewTier;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).onFinished >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) ||
     ((bVar6 = TierBoostStateHandler_IsInTempClass(this,(MethodInfo *)0x0), bVar6 == 0 &&
      (bVar6 = TierBoostStateHandler_IsInTempTier(this,(MethodInfo *)0x0), bVar6 == 0)))) {
    if (onFinishPreviewTier == (Action_1_Boolean_ *)0x0) goto code_?;
    (*(onFinishPreviewTier->fields)._._.invoke_impl)
              ((onFinishPreviewTier->fields)._._.method_code,1,
               (onFinishPreviewTier->fields)._._.method);
  }
  else {
    pAVar7 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__
               ,(MethodInfo *)0x0);
    pAVar7 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar7,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar7 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar8 = (Action *)0x0;
      if (pAVar7->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar7;
      }
      if (pAVar8 == (Action *)0x0) {
        FUN_?(pAVar7,TypeInfo__System__Action);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar8;
      pAVar8 = (Action *)0x0;
      if (pAVar7->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar7;
      }
      if (pAVar8 == (Action *)0x0) {
        FUN_?(pAVar7,TypeInfo__System__Action);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierBoostStateHandler____c);
    }
    this_01 = TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__TierBoostStateHandler____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierBoostStateHandler____c);
      }
      object = TypeInfo__TierBoostStateHandler____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                 MethodInfo__TierBoostStateHandler____c___StopPreviewTier_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 = this_01;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__TierBoostStateHandler____c->static_fields->__9__3_0 >>
                      0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_02 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_02,(MethodInfo *)0x0);
  }
  return;
}

