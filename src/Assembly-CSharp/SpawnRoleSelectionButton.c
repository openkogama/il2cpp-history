
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionButton::SpawnRoleSelectionButton_OnPointerDown
               (SpawnRoleSelectionButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).isMouseOver == 0) {
    return;
  }
  if (eventData != (PointerEventData *)0x0) {
    if ((eventData->fields)._button_k__BackingField != 0) {
      return;
    }
    this_02 = (this->fields).spawnRoleMenu;
    if (this_02 != (SpawnRoleMenu *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__SpawnRoleMenu);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar1 = (this_02->fields).SelectionElementsList;
      if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
        uVar2 = (this_02->fields).selectedSpawnRole;
        if ((uint)(pLVar1->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        player = (pLVar1->fields)._items;
        if (player != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
          if (*(uint *)&player->max_length <= uVar2) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (player->vector[(int)uVar2] != (DefaultSpawnRoleSelectionElement *)0x0) {
            spawnRoleId = (player->vector[(int)uVar2]->fields).woId;
            MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player,method);
            if ((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) {
              cVar4 = FUN_?(spawnRoleId,
                                     *(undefined8 *)(*(longlong *)(extraout_RAX + 200) + 0x30));
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar5 = (MVPlayer *)TypeInfo__MVGameControllerBase->static_fields;
              pMVar6 = (MVGameControllerBase *)(pMVar5->fields).OnLevelChanged;
              if (((pMVar6 != (MVGameControllerBase *)0x0) &&
                  (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
                 (pMVar8 = (pMVar7->fields).teamManager, pMVar8 != (MVTeamManager *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pDVar9 = (pMVar8->fields).teams;
                if (pDVar9 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
                  if (1 < (pDVar9->fields)._count - (pDVar9->fields)._freeCount) {
                    method = (MethodInfo *)0x0;
                    pMVar5 = (MVPlayer *)(ulonglong)spawnRoleId;
                    SpawnRoleMenu::SpawnRoleMenu_HandleTeamSwitching
                              (this_02,spawnRoleId,(MethodInfo *)0x0);
                  }
                  if (cVar4 != '\0') {
                    SpawnRoleMenu::SpawnRoleMenu_Close(this_02,0,(MethodInfo *)0x0);
                    (*(this_02->klass->vtable).StartPlaying.methodPtr)
                              (this_02,(this_02->klass->vtable).StartPlaying.method);
                    return;
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__Action<int>);
                    LOCK();
                    UNLOCK();
                    FUN_?();
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  (this_02->fields).awaitingSpawn = 1;
                  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar5,method);
                  if (extraout_RAX_00 != 0) {
                    this_00 = *(SpawnRolesManager **)(extraout_RAX_00 + 0x88);
                    pMVar5 = (MVPlayer *)FUN_?(TypeInfo__System__Action<int>);
                    FUN_?(pMVar5,this_02);
                    if (this_00 != (SpawnRolesManager *)0x0) {
                      pMVar10 = (MethodInfo *)0x0;
                      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                                (this_00,(Action_1_Int32_ *)pMVar5,(MethodInfo *)0x0);
                      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar5,pMVar10);
                      if (extraout_RAX_01 != 0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if ((*(longlong *)(extraout_RAX_01 + 0x90) != 0) &&
                           (this_01 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                                       (*(longlong *)(extraout_RAX_01 + 0x90) + 0x10),
                           this_01 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
                          IVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Int32Enum,System::Int32Enum]::
                                   Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                             (this_01,0,
                                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                             );
                          if (spawnRoleId == IVar11) {
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if (((pMVar6 == (MVGameControllerBase *)0x0) ||
                                (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0))
                               || ((pMVar12 = (pMVar7->fields).playerContainer,
                                   pMVar12 == (MVPlayerContainer *)0x0 ||
                                   (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                        (pMVar12,(MethodInfo *)0x0),
                                   pMVar13 == (MVLocalPlayer *)0x0)))) goto code_?;
                            pMVar10 = (MethodInfo *)0x0;
                            pMVar5 = (MVPlayer *)(ulonglong)spawnRoleId;
                            MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole
                                      (pMVar13,spawnRoleId,(MethodInfo *)0x0);
                            if (TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected !=
                                (Action_1_Int32_ *)0x0) {
                              pAVar14 = TypeInfo__SpawnRoleMenu->static_fields->
                                       OnNewSpawnRoleSelected;
                              MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar5,pMVar10)
                              ;
                              if (this_03 == (MVLocalPlayer *)0x0) goto code_?;
                              iVar15 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                                                 (this_03,(MethodInfo *)0x0);
                              (*(pAVar14->fields)._._.invoke_impl)
                                        ((pAVar14->fields)._._.method_code,iVar15,
                                         (pAVar14->fields)._._.method);
                            }
                          }
                          else {
                            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            if (((pMVar7 == (MVNetworkGame *)0x0) ||
                                (pMVar12 = (pMVar7->fields).playerContainer,
                                pMVar12 == (MVPlayerContainer *)0x0)) ||
                               (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                    (pMVar12,(MethodInfo *)0x0),
                               pMVar13 == (MVLocalPlayer *)0x0)) goto code_?;
                            MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                                      (pMVar13,spawnRoleId,(MethodInfo *)0x0);
                            if (TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected !=
                                (Action_1_Int32_ *)0x0) {
                              pAVar14 = TypeInfo__SpawnRoleMenu->static_fields->
                                       OnNewSpawnRoleSelected;
                              (*(pAVar14->fields)._._.invoke_impl)
                                        ((pAVar14->fields)._._.method_code,spawnRoleId,
                                         (pAVar14->fields)._._.method);
                            }
                          }
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__FirstTimePressPlayController);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed
                              == 0) {
                            FirstTimePressPlayController::
                            FirstTimePressPlayController_OnFirstTimePlayIsPressed((MethodInfo *)0x0)
                            ;
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
                          if (TypeInfo__MVGameControllerBase->static_fields->
                              _WebPlayAsTouch_k__BackingField == 0) {
                            pMVar16 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
                                                ((MethodInfo *)0x0);
                            if ((pMVar16 == (MVGameControllerDesktop *)0x0) ||
                               (pIVar17 = (pMVar16->fields).lockCursorManager,
                               pIVar17 == (ILockCursorManager *)0x0)) goto code_?;
                            FUN_?(4,TypeInfo__ILockCursorManager,pIVar17,1);
                          }
                          return;
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
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

