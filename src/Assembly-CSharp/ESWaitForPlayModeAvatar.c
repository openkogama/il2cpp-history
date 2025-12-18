
/* ESWaitForPlayModeAvatar+EnterPlayFromEditSpawnState CalculateEnterPlayFromEditState() */

ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum
Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
ESWaitForPlayModeAvatar_CalculateEnterPlayFromEditState
          (ESWaitForPlayModeAvatar *this,MethodInfo *method)

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
  if (extraout_RAX == (longlong *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    EVar2 = (*pcVar1)();
    return EVar2;
  }
  bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
  if ((*(byte *)(*extraout_RAX + 0x130) < bVar3) ||
     (*(MVLocalPlayerBuilder__Class **)
       (*(longlong *)(*extraout_RAX + 200) + -8 + (ulonglong)bVar3 * 8) !=
      TypeInfo__MVLocalPlayerBuilder)) {
    FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
    pcVar1 = (code *)swi(3);
    EVar2 = (*pcVar1)();
    return EVar2;
  }
  lVar4 = extraout_RAX[0x21];
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar5 == (MVGameControllerBase *)0x0) ||
       (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
      ((pMVar6->fields).worldNetwork == (WorldNetwork *)0x0)) ||
     (pMVar7 = (MVWorldObjectClientManager *)
               (((pMVar6->fields).worldNetwork)->fields)._.worldObjectClientManager,
     pMVar7 == (MVWorldObjectClientManager *)0x0)) goto code_?;
  pLVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                      (pMVar7,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     ((pMVar9 = (pMVar6->fields).teamManager, pMVar9 == (MVTeamManager *)0x0 ||
      (iVar10 = MVTeamManager::MVTeamManager_get_NumSpawnPoint(pMVar9,(MethodInfo *)0x0),
      pLVar8 == (List_1_MVWorldObjectClient_ *)0x0)))) goto code_?;
  iVar11 = (pLVar8->fields)._size;
  bVar12 = 0 < iVar11;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     (pMVar9 = (pMVar6->fields).teamManager, pMVar9 == (MVTeamManager *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar13 = (pMVar9->fields).teams;
  if (pDVar13 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
  goto code_?;
  iVar14 = (pDVar13->fields)._count - (pDVar13->fields)._freeCount;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     (pMVar9 = (pMVar6->fields).teamManager, pMVar9 == (MVTeamManager *)0x0))
  goto code_?;
  bVar15 = MVTeamManager::MVTeamManager_HasTeam(pMVar9,(this->fields).selectedTeam,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     (((pMVar6->fields).worldNetwork == (WorldNetwork *)0x0 ||
      (pMVar7 = (MVWorldObjectClientManager *)
                (((pMVar6->fields).worldNetwork)->fields)._.worldObjectClientManager,
      pMVar7 == (MVWorldObjectClientManager *)0x0)))) goto code_?;
  pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar7,(int32_t)((ulonglong)lVar4 >> 0x20),(MethodInfo *)0x0);
  bVar17 = pMVar16 != (MVWorldObjectClient *)0x0 || iVar11 < 1;
  if (iVar14 < 2 || bVar15 == 0 && 1 < iVar14) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     (pMVar9 = (pMVar6->fields).teamManager, pMVar9 == (MVTeamManager *)0x0))
  goto code_?;
  bVar15 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                    (pMVar9,(this->fields).selectedTeam,(MethodInfo *)0x0);
  if (bVar15 != 0) goto code_?;
  if (pMVar16 != (MVWorldObjectClient *)0x0 || iVar11 < 1) {
    bVar3 = 0;
code_?:
    bVar12 = false;
  }
  else {
    bVar3 = (byte)((ulonglong)lVar4 >> 0x3f) ^ 1;
    if (bVar3 == 0) goto code_?;
  }
  bVar17 = (bool)(bVar3 ^ 1);
code_?:
  if (((bVar17 == false) && (iVar14 < 2)) && (iVar10 == 1)) {
    EVar2 = ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_DefaultSpawnAsSpawnRole;
  }
  else {
    EVar2 = ((bVar12 & bVar17) != 0) +
             ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsDefaultAvatar;
  }
  return EVar2;
}


/* Boolean CanSpawnAsSelectedSpawnRole(Int32) */

bool Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_CanSpawnAsSelectedSpawnRole
               (ESWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreator);
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
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      ((pMVar2->fields).worldNetwork == (WorldNetwork *)0x0)) ||
     (pMVar3 = (MVWorldObjectClientManager *)
               (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
     pMVar3 == (MVWorldObjectClientManager *)0x0)) goto code_?;
  pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (pMVar3,spawnRoleId,(MethodInfo *)0x0);
  if (pMVar4 != (MVWorldObjectClient *)0x0) {
    bVar5 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if ((bVar5 <= (pMVar4->klass->_1).naturalAligment) &&
       ((MVAvatarSpawnRoleCreator__Class *)(pMVar4->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1]
        == TypeInfo__MVAvatarSpawnRoleCreator)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 == (MVGameControllerBase *)0x0) ||
          (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
         (((pMVar2->fields).worldNetwork == (WorldNetwork *)0x0 ||
          (pMVar3 = (MVWorldObjectClientManager *)
                    (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
          pMVar3 == (MVWorldObjectClientManager *)0x0)))) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      this_00 = (MVAvatarSpawnRoleCreator *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar3,spawnRoleId,(MethodInfo *)0x0);
      if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
        bVar5 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
        if (((this_00->klass->_1).naturalAligment < bVar5) ||
           ((MVAvatarSpawnRoleCreator__Class *)
            (this_00->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
            TypeInfo__MVAvatarSpawnRoleCreator)) {
          FUN_?(this_00);
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar8 == (PlayerPlanetData *)0x0) goto code_?;
        bVar5 = (pPVar8->fields).gamePassTier;
        GVar9 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                          (this_00,(MethodInfo *)0x0);
        if ((byte)GVar9 <= bVar5) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_Enter
               (ESWaitForPlayModeAvatar *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).defaultPlayModeSpawnRoleReady = 0;
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)esm,method);
  if (extraout_RAX != 0) {
    pSVar1 = *(SpawnRolesManager **)(extraout_RAX + 0x88);
    value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(value,this);
    if (pSVar1 != (SpawnRolesManager *)0x0) {
      pMVar2 = (MethodInfo *)0x0;
      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated(pSVar1,value,(MethodInfo *)0x0);
      pMVar3 = (MVPlayer *)0x0;
      EVar4 = ESWaitForPlayModeAvatar_CalculateEnterPlayFromEditState(this,(MethodInfo *)0x0);
      if (EVar4 == ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_DefaultSpawnAsSpawnRole
         ) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
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
        pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
             (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
            ((pMVar6->fields).worldNetwork != (WorldNetwork *)0x0)) &&
           ((this_00 = (MVWorldObjectClientManager *)
                       (((pMVar6->fields).worldNetwork)->fields)._.worldObjectClientManager,
            this_00 != (MVWorldObjectClientManager *)0x0 &&
            (pLVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                                 (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,
                                  (MethodInfo *)0x0), pLVar7 != (List_1_MVWorldObjectClient_ *)0x0)
            ))) {
          if ((pLVar7->fields)._size == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pMVar9 = (pLVar7->fields)._items;
          if (pMVar9 != (MVWorldObjectClient__Array *)0x0) {
            if ((int)pMVar9->max_length == 0) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (pMVar9->vector[0] != (MVWorldObjectClient *)0x0) {
              spawnRoleId = (pMVar9->vector[0]->fields)._.id;
              goto code_?;
            }
          }
        }
      }
      else {
        if (EVar4 == ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsDefaultAvatar)
        {
          pMVar3 = (MVPlayer *)0x0;
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar3,pMVar2);
          if (extraout_RAX_01 == (longlong *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar10 = *extraout_RAX_01;
          bVar11 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(lVar10 + 0x130) < bVar11) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(lVar10 + 200) + -8 + (ulonglong)bVar11 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pMVar3 = (MVPlayer *)0x0;
          method_00 = TypeInfo__MVLocalPlayerBuilder;
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar3,(MethodInfo *)method_00);
          if (((extraout_RAX_01[0x12] != 0) &&
              (this_01 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                          (extraout_RAX_01[0x12] + 0x10),
              this_01 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) &&
             (IVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Int32Enum]::
                       Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                 (this_01,0,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                 ), this_04 != (MVLocalPlayer *)0x0)) {
            pSVar1 = (this_04->fields)._.spawnRolesManager;
            if ((pSVar1 != (SpawnRolesManager *)0x0) &&
               (pSVar13 = (pSVar1->fields).spawnRolesRuntimeData,
               pSVar13 != (SpawnRolesRuntimeData *)0x0)) {
              if (IVar12 == (pSVar13->fields).activeSpawnRole) {
                uVar14 = func_?(&TypeInfo__System__Exception);
                this_03 = (Exception *)func_?(uVar14);
                message = (String *)
                          func_?(&StringLiteral_Trying_to_set_active_spawn_role_);
                mscorlib.dll::System::Exception::Exception__ctor_1
                          (this_03,message,(MethodInfo *)0x0);
                uVar14 = func_?(&MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_);
                FUN_?(this_03,uVar14);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole(this_04,(MethodInfo *)0x0);
              pMVar15 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              if (pMVar15 != (MVNetworkGame_OperationRequests *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object___ctor
                          (this_02,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                value_00 = (Object *)FUN_?(uRam_?,&stack0x00000010);
                if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                  pMVar2 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            ->klass->rgctx_data[0x22].method;
                  uVar14 = CONCAT71((int7)((ulonglong)pMVar2 >> 8),0xc1);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                            (this_02,0xc1,value_00,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)lVar10 >> 8),2),
                             pMVar2);
                  pPVar16 = (pMVar15->fields).peer;
                  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c ==
                      0) {
                    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                  }
                  if (pPVar16 != (PhotonPeer *)0x0) {
                    (*(pPVar16->klass->vtable).SendOperation.methodPtr)
                              (pPVar16,CONCAT71((int7)((ulonglong)uVar14 >> 8),0x6f),this_02,
                               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                               SendReliable,(pPVar16->klass->vtable).SendOperation.method);
                    return;
                  }
                }
              }
            }
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (EVar4 != 
            ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsSelectedSpawnRole) {
          return;
        }
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar3,pMVar2);
        if (extraout_RAX_00 != (longlong *)0x0) {
          bVar11 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar11) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar11 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          spawnRoleId = (int32_t)((ulonglong)extraout_RAX_00[0x21] >> 0x20);
code_?:
          ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_Execute
               (ESWaitForPlayModeAvatar *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).defaultPlayModeSpawnRoleReady != 0) {
    auStackX_8[0] = 0x29;
    value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
    if (e == (EditorStateMachine *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleDefaultSpawnAsSpawnRole() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_HandleDefaultSpawnAsSpawnRole
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
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
      ((pMVar2->fields).worldNetwork != (WorldNetwork *)0x0)) &&
     ((this_00 = (MVWorldObjectClientManager *)
                 (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
      this_00 != (MVWorldObjectClientManager *)0x0 &&
      (pLVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                          (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
      pLVar3 != (List_1_MVWorldObjectClient_ *)0x0)))) {
    if ((pLVar3->fields)._size == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pMVar5 = (pLVar3->fields)._items;
    if (pMVar5 != (MVWorldObjectClient__Array *)0x0) {
      if ((int)pMVar5->max_length == 0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pMVar5->vector[0] != (MVWorldObjectClient *)0x0) {
        IStack_6 = (pMVar5->vector[0]->fields)._.id;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVLocalPlayerBuilder);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar7 = (MethodInfo *)0x0;
        bVar8 = ESWaitForPlayModeAvatar_CanSpawnAsSelectedSpawnRole
                          (this,IStack_6,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          pMVar9 = (MVPlayer *)0x0;
          ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar9,pMVar7);
          if (extraout_RAX != (longlong *)0x0) {
            bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
            if ((*(byte *)(*extraout_RAX + 0x130) < bVar10) ||
               (*(MVLocalPlayerBuilder__Class **)
                 (*(longlong *)(*extraout_RAX + 200) + -8 + (longlong)(ulonglong)bVar10 * 8) !=
                TypeInfo__MVLocalPlayerBuilder)) {
              FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar11 = extraout_RAX[0x21];
            uVar12 = (undefined4)extraout_RAX[0x22];
            MVTriggerBox::MVTriggerBox_OnExit
                      ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar10,
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
                 (this_01 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                             (*(longlong *)(extraout_RAX_00 + 0x90) + 0x10),
                 this_01 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
                pMVar9 = (MVPlayer *)0x0;
                pMVar7 = 
                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                ;
                IStack_6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Int32Enum]::
                            Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                      (this_01,0,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                      );
                uStack_13 = (undefined4)lVar11;
                MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar9,pMVar7);
                if (extraout_RAX_01 != (longlong *)0x0) {
                  bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                  if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar10) ||
                     (*(MVLocalPlayerBuilder__Class **)
                       (*(longlong *)(*extraout_RAX_01 + 200) + -8 + (ulonglong)bVar10 * 8) !=
                      TypeInfo__MVLocalPlayerBuilder)) {
                    FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uStack_14 = uStack_13;
                  bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                  if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar10) ||
                     (plVar15 = extraout_RAX_01,
                     *(MVLocalPlayerBuilder__Class **)
                      (*(longlong *)(*extraout_RAX_01 + 200) + -8 + (ulonglong)bVar10 * 8) !=
                     TypeInfo__MVLocalPlayerBuilder)) {
                    FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  goto code_?;
                }
              }
            }
          }
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
              (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
             ((this_02 = (pMVar2->fields).playerContainer, this_02 != (MVPlayerContainer *)0x0 &&
              (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (this_02,(MethodInfo *)0x0), this_03 != (MVLocalPlayer *)0x0))))
          {
            pMVar7 = (MethodInfo *)0x0;
            pMVar9 = (MVPlayer *)(ulonglong)IStack_6;
            MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(this_03,IStack_6,(MethodInfo *)0x0);
            MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar9,pMVar7);
            if (extraout_RAX_02 != (longlong *)0x0) {
              bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
              if ((*(byte *)(*extraout_RAX_02 + 0x130) < bVar10) ||
                 (*(MVLocalPlayerBuilder__Class **)
                   (*(longlong *)(*extraout_RAX_02 + 200) + -8 + (longlong)(ulonglong)bVar10 * 8) !=
                  TypeInfo__MVLocalPlayerBuilder)) {
                FUN_?(extraout_RAX_02,TypeInfo__MVLocalPlayerBuilder);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar12 = (undefined4)extraout_RAX_02[0x22];
              uStack_13 = (undefined4)extraout_RAX_02[0x21];
              MVTriggerBox::MVTriggerBox_OnExit
                        ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar10,
                         (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
              if (extraout_RAX_03 != (longlong *)0x0) {
                bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                if ((*(byte *)(*extraout_RAX_03 + 0x130) < bVar10) ||
                   (*(MVLocalPlayerBuilder__Class **)
                     (*(longlong *)(*extraout_RAX_03 + 200) + -8 + (ulonglong)bVar10 * 8) !=
                    TypeInfo__MVLocalPlayerBuilder)) {
                  FUN_?(extraout_RAX_03,TypeInfo__MVLocalPlayerBuilder);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uStack_14 = uStack_13;
                bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                if ((*(byte *)(*extraout_RAX_03 + 0x130) < bVar10) ||
                   (plVar15 = extraout_RAX_03,
                   *(MVLocalPlayerBuilder__Class **)
                    (*(longlong *)(*extraout_RAX_03 + 200) + -8 + (ulonglong)bVar10 * 8) !=
                   TypeInfo__MVLocalPlayerBuilder)) {
                  FUN_?(extraout_RAX_03,TypeInfo__MVLocalPlayerBuilder);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
code_?:
                plVar15[0x21] = CONCAT44(IStack_6,uStack_14);
                *(undefined4 *)(plVar15 + 0x22) = uVar12;
                return;
              }
            }
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleEnterPlayModeFromEditSpawn(ESWaitForPlayModeAvatar+EnterPlayFromEditSpawnState) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_HandleEnterPlayModeFromEditSpawn
               (ESWaitForPlayModeAvatar *this,
               ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum enterSpawnState,
               MethodInfo *method)

{
  if (enterSpawnState ==
      ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_DefaultSpawnAsSpawnRole) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
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
    if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
        ((pMVar2->fields).worldNetwork == (WorldNetwork *)0x0)) ||
       ((this_00 = (MVWorldObjectClientManager *)
                   (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
        this_00 == (MVWorldObjectClientManager *)0x0 ||
        (pLVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                             (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0
                             ), pLVar3 == (List_1_MVWorldObjectClient_ *)0x0)))) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pLVar3->fields)._size == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pMVar5 = (pLVar3->fields)._items;
    if (pMVar5 == (MVWorldObjectClient__Array *)0x0) goto code_?;
    if ((int)pMVar5->max_length == 0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pMVar5->vector[0] == (MVWorldObjectClient *)0x0) goto code_?;
    pMVar6 = (MVPlayer *)(ulonglong)(uint)(pMVar5->vector[0]->fields)._.id;
  }
  else {
    uVar7 = enterSpawnState -
             ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsDefaultAvatar;
    pMVar6 = (MVPlayer *)(ulonglong)uVar7;
    if (uVar7 == 0) {
      pMVar6 = (MVPlayer *)0x0;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar6,method);
      if (extraout_RAX_05 == (longlong *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar8 = *extraout_RAX_05;
      bVar9 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if ((*(byte *)(lVar8 + 0x130) < bVar9) ||
         (*(MVLocalPlayerBuilder__Class **)(*(longlong *)(lVar8 + 200) + -8 + (ulonglong)bVar9 * 8)
          != TypeInfo__MVLocalPlayerBuilder)) {
        FUN_?(extraout_RAX_05,TypeInfo__MVLocalPlayerBuilder);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pMVar6 = (MVPlayer *)0x0;
      method_00 = TypeInfo__MVLocalPlayerBuilder;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar6,(MethodInfo *)method_00);
      if (((extraout_RAX_05[0x12] != 0) &&
          (pDVar10 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                     (extraout_RAX_05[0x12] + 0x10),
          pDVar10 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) &&
         (IVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                             (pDVar10,0,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                             ), this_05 != (MVLocalPlayer *)0x0)) {
        pSVar12 = (this_05->fields)._.spawnRolesManager;
        if ((pSVar12 != (SpawnRolesManager *)0x0) &&
           (pSVar13 = (pSVar12->fields).spawnRolesRuntimeData, pSVar13 != (SpawnRolesRuntimeData *)0x0)
           ) {
          if (IVar11 == (pSVar13->fields).activeSpawnRole) {
            uVar14 = func_?(&TypeInfo__System__Exception);
            this_04 = (Exception *)func_?(uVar14);
            message = (String *)func_?(&StringLiteral_Trying_to_set_active_spawn_role_)
            ;
            mscorlib.dll::System::Exception::Exception__ctor_1(this_04,message,(MethodInfo *)0x0);
            uVar14 = func_?(&MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_);
            FUN_?(this_04,uVar14);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole(this_05,(MethodInfo *)0x0);
          pMVar15 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (pMVar15 != (MVNetworkGame_OperationRequests *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_03 = (Dictionary_2_System_Byte_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                   );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object___ctor
                      (this_03,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                      );
            aIStackX_10[0] = IVar11;
            value = (Object *)FUN_?(uRam_?,aIStackX_10);
            if (this_03 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              pMVar16 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
              uVar14 = CONCAT71((int7)((ulonglong)pMVar16 >> 8),0xc1);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (this_03,0xc1,value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)lVar8 >> 8),2),pMVar16
                        );
              pPVar17 = (pMVar15->fields).peer;
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar17 != (PhotonPeer *)0x0) {
                (*(pPVar17->klass->vtable).SendOperation.methodPtr)
                          (pPVar17,CONCAT71((int7)((ulonglong)uVar14 >> 8),0x6f),this_03,
                           TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                           SendReliable,(pPVar17->klass->vtable).SendOperation.method);
                return;
              }
            }
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar7 != 1) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar6,method);
    if (extraout_RAX == (longlong *)0x0) goto code_?;
    bVar9 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX + 0x130) < bVar9) ||
       (*(MVLocalPlayerBuilder__Class **)
         (*(longlong *)(*extraout_RAX + 200) + -8 + (ulonglong)bVar9 * 8) !=
        TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pMVar6 = (MVPlayer *)((ulonglong)extraout_RAX[0x21] >> 0x20);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalPlayerBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar16 = (MethodInfo *)0x0;
  spawnRoleId = (int32_t)pMVar6;
  bVar18 = ESWaitForPlayModeAvatar_CanSpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
  if (bVar18 == 0) {
    pMVar6 = (MVPlayer *)0x0;
    ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar6,pMVar16);
    if (extraout_RAX_00 != (longlong *)0x0) {
      bVar9 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar9) ||
         (*(MVLocalPlayerBuilder__Class **)
           (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (longlong)(ulonglong)bVar9 * 8) !=
          TypeInfo__MVLocalPlayerBuilder)) {
        FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar8 = extraout_RAX_00[0x21];
      uVar19 = (undefined4)extraout_RAX_00[0x22];
      MVTriggerBox::MVTriggerBox_OnExit
                ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar9,
                 (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
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
           (pDVar10 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                      (*(longlong *)(extraout_RAX_01 + 0x90) + 0x10),
           pDVar10 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
          pMVar6 = (MVPlayer *)0x0;
          pMVar16 = 
          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
          ;
          IVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                             (pDVar10,0,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                             );
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar6,pMVar16);
          if (extraout_RAX_02 != (longlong *)0x0) {
            bVar9 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
            if ((*(byte *)(*extraout_RAX_02 + 0x130) < bVar9) ||
               (*(MVLocalPlayerBuilder__Class **)
                 (*(longlong *)(*extraout_RAX_02 + 200) + -8 + (ulonglong)bVar9 * 8) !=
                TypeInfo__MVLocalPlayerBuilder)) {
              FUN_?(extraout_RAX_02,TypeInfo__MVLocalPlayerBuilder);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar8 = CONCAT44(IVar11,(int)lVar8);
            bVar9 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
            if ((*(byte *)(*extraout_RAX_02 + 0x130) < bVar9) ||
               (plVar20 = extraout_RAX_02,
               *(MVLocalPlayerBuilder__Class **)
                (*(longlong *)(*extraout_RAX_02 + 200) + -8 + (ulonglong)bVar9 * 8) !=
               TypeInfo__MVLocalPlayerBuilder)) {
              FUN_?(extraout_RAX_02,TypeInfo__MVLocalPlayerBuilder);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
        (this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) &&
       (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       this_02 != (MVLocalPlayer *)0x0)) {
      pMVar16 = (MethodInfo *)0x0;
      MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(this_02,spawnRoleId,(MethodInfo *)0x0);
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar6,pMVar16);
      if (extraout_RAX_03 != (longlong *)0x0) {
        bVar9 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
        if ((*(byte *)(*extraout_RAX_03 + 0x130) < bVar9) ||
           (*(MVLocalPlayerBuilder__Class **)
             (*(longlong *)(*extraout_RAX_03 + 200) + -8 + (longlong)(ulonglong)bVar9 * 8) !=
            TypeInfo__MVLocalPlayerBuilder)) {
          FUN_?(extraout_RAX_03,TypeInfo__MVLocalPlayerBuilder);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar8 = extraout_RAX_03[0x21];
        uVar19 = (undefined4)extraout_RAX_03[0x22];
        MVTriggerBox::MVTriggerBox_OnExit
                  ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar9,
                   (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
        if (extraout_RAX_04 != (longlong *)0x0) {
          bVar9 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_04 + 0x130) < bVar9) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_04 + 200) + -8 + (ulonglong)bVar9 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_04,TypeInfo__MVLocalPlayerBuilder);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar8 = CONCAT44(spawnRoleId,(int)lVar8);
          bVar9 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_04 + 0x130) < bVar9) ||
             (plVar20 = extraout_RAX_04,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_04 + 200) + -8 + (ulonglong)bVar9 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_04,TypeInfo__MVLocalPlayerBuilder);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
code_?:
          plVar20[0x21] = lVar8;
          *(undefined4 *)(plVar20 + 0x22) = uVar19;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleSpawnAsDefaultPlayModeSpawnRole() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_HandleSpawnAsDefaultPlayModeSpawnRole
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  pMVar1 = (MVPlayer *)0x0;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar1,in_R8);
  if (extraout_RAX == (longlong *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar3 = *extraout_RAX;
  bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
  if ((*(byte *)(lVar3 + 0x130) < bVar4) ||
     (*(MVLocalPlayerBuilder__Class **)(*(longlong *)(lVar3 + 200) + -8 + (ulonglong)bVar4 * 8) !=
      TypeInfo__MVLocalPlayerBuilder)) {
    FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar1 = (MVPlayer *)0x0;
  method_01 = TypeInfo__MVLocalPlayerBuilder;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar1,(MethodInfo *)method_01);
  if ((extraout_RAX[0x12] != 0) &&
     (this_00 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)(extraout_RAX[0x12] + 0x10),
     this_00 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
    IVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                      (this_00,0,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                      );
    if (this_03 != (MVLocalPlayer *)0x0) {
      pSVar6 = (this_03->fields)._.spawnRolesManager;
      if ((pSVar6 != (SpawnRolesManager *)0x0) &&
         (pSVar7 = (pSVar6->fields).spawnRolesRuntimeData, pSVar7 != (SpawnRolesRuntimeData *)0x0))
      {
        if (IVar5 == (pSVar7->fields).activeSpawnRole) {
          uVar8 = func_?(&TypeInfo__System__Exception);
          this_02 = (Exception *)func_?(uVar8);
          message = (String *)func_?(&StringLiteral_Trying_to_set_active_spawn_role_);
          mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
          uVar8 = func_?(&MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_);
          FUN_?(this_02,uVar8);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole(this_03,(MethodInfo *)0x0);
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar9 != (MVNetworkGame_OperationRequests *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          aIStackX_10[0] = IVar5;
          value = (Object *)FUN_?(uRam_?,aIStackX_10);
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar8 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0xc1,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)lVar3 >> 8),2),method_00
                      );
            pPVar10 = (pMVar9->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar10 != (PhotonPeer *)0x0) {
              (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                        (pPVar10,CONCAT71((int7)((ulonglong)uVar8 >> 8),0x6f),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar10->klass->vtable).SendOperation.method);
              return;
            }
          }
        }
      }
      FUN_?();
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


/* Void HanldeSpawnAsSelectedSpawnRole() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_HanldeSpawnAsSelectedSpawnRole
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX == (longlong *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
  if ((*(byte *)(*extraout_RAX + 0x130) < bVar2) ||
     (*(MVLocalPlayerBuilder__Class **)
       (*(longlong *)(*extraout_RAX + 200) + -8 + (ulonglong)bVar2 * 8) !=
      TypeInfo__MVLocalPlayerBuilder)) {
    FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = extraout_RAX[0x21];
  pMVar4 = (MVPlayer *)(uVar3 >> 0x20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalPlayerBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = (MethodInfo *)0x0;
  spawnRoleId = (int32_t)(uVar3 >> 0x20);
  bVar6 = ESWaitForPlayModeAvatar_CanSpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    pMVar4 = (MVPlayer *)0x0;
    ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar4,pMVar5);
    if (extraout_RAX_00 != (longlong *)0x0) {
      bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar2) ||
         (*(MVLocalPlayerBuilder__Class **)
           (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (longlong)(ulonglong)bVar2 * 8) !=
          TypeInfo__MVLocalPlayerBuilder)) {
        FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = extraout_RAX_00[0x21];
      uVar8 = (undefined4)extraout_RAX_00[0x22];
      MVTriggerBox::MVTriggerBox_OnExit
                ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar2,
                 (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
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
           (this_00 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                       (*(longlong *)(extraout_RAX_01 + 0x90) + 0x10),
           this_00 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
          pMVar4 = (MVPlayer *)0x0;
          pMVar5 = 
          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
          ;
          IVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                            (this_00,0,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                            );
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar4,pMVar5);
          if (extraout_RAX_02 != (longlong *)0x0) {
            bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
            if ((*(byte *)(*extraout_RAX_02 + 0x130) < bVar2) ||
               (*(MVLocalPlayerBuilder__Class **)
                 (*(longlong *)(*extraout_RAX_02 + 200) + -8 + (ulonglong)bVar2 * 8) !=
                TypeInfo__MVLocalPlayerBuilder)) {
              FUN_?(extraout_RAX_02,TypeInfo__MVLocalPlayerBuilder);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            lStack_10 = CONCAT44(IVar9,(int)lVar7);
            bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
            if ((*(byte *)(*extraout_RAX_02 + 0x130) < bVar2) ||
               (plVar11 = extraout_RAX_02,
               *(MVLocalPlayerBuilder__Class **)
                (*(longlong *)(*extraout_RAX_02 + 200) + -8 + (ulonglong)bVar2 * 8) !=
               TypeInfo__MVLocalPlayerBuilder)) {
              FUN_?(extraout_RAX_02,TypeInfo__MVLocalPlayerBuilder);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
         (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
        (this_01 = (pMVar13->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) &&
       (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       this_02 != (MVLocalPlayer *)0x0)) {
      pMVar5 = (MethodInfo *)0x0;
      MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(this_02,spawnRoleId,(MethodInfo *)0x0);
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar4,pMVar5);
      if (extraout_RAX_03 != (longlong *)0x0) {
        bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
        if ((*(byte *)(*extraout_RAX_03 + 0x130) < bVar2) ||
           (*(MVLocalPlayerBuilder__Class **)
             (*(longlong *)(*extraout_RAX_03 + 200) + -8 + (longlong)(ulonglong)bVar2 * 8) !=
            TypeInfo__MVLocalPlayerBuilder)) {
          FUN_?(extraout_RAX_03,TypeInfo__MVLocalPlayerBuilder);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar7 = extraout_RAX_03[0x21];
        uVar8 = (undefined4)extraout_RAX_03[0x22];
        MVTriggerBox::MVTriggerBox_OnExit
                  ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar2,
                   (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
        if (extraout_RAX_04 != (longlong *)0x0) {
          bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_04 + 0x130) < bVar2) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_04 + 200) + -8 + (ulonglong)bVar2 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_04,TypeInfo__MVLocalPlayerBuilder);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          lStack_10 = CONCAT44(spawnRoleId,(int)lVar7);
          bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_04 + 0x130) < bVar2) ||
             (plVar11 = extraout_RAX_04,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_04 + 200) + -8 + (ulonglong)bVar2 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_04,TypeInfo__MVLocalPlayerBuilder);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
code_?:
          plVar11[0x21] = lStack_10;
          *(undefined4 *)(plVar11 + 0x22) = uVar8;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean IsTeamWithoutSpawnRole(Boolean, Boolean) */

bool Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_IsTeamWithoutSpawnRole
               (ESWaitForPlayModeAvatar *this,bool teamsPresent,bool isTeamValid,MethodInfo *method)

{
  if ((isTeamValid & teamsPresent) == 0) {
    return 0;
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
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    bVar3 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                      (this_00,(this->fields).selectedTeam,(MethodInfo *)0x0);
    return bVar3 ^ 1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void SpawnAsDefaultPlayModeSpawnRole() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX == (longlong *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar2 = *extraout_RAX;
  bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
  if ((*(byte *)(lVar2 + 0x130) < bVar3) ||
     (*(MVLocalPlayerBuilder__Class **)(*(longlong *)(lVar2 + 200) + -8 + (ulonglong)bVar3 * 8) !=
      TypeInfo__MVLocalPlayerBuilder)) {
    FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  player = (MVPlayer *)0x0;
  method_01 = TypeInfo__MVLocalPlayerBuilder;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)method_01);
  if ((extraout_RAX[0x12] != 0) &&
     (this_00 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)(extraout_RAX[0x12] + 0x10),
     this_00 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
    IVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                      (this_00,0,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                      );
    if (this_03 != (MVLocalPlayer *)0x0) {
      pSVar5 = (this_03->fields)._.spawnRolesManager;
      if ((pSVar5 != (SpawnRolesManager *)0x0) &&
         (pSVar6 = (pSVar5->fields).spawnRolesRuntimeData, pSVar6 != (SpawnRolesRuntimeData *)0x0))
      {
        if (IVar4 == (pSVar6->fields).activeSpawnRole) {
          uVar7 = func_?(&TypeInfo__System__Exception);
          this_02 = (Exception *)func_?(uVar7);
          message = (String *)func_?(&StringLiteral_Trying_to_set_active_spawn_role_);
          mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
          uVar7 = func_?(&MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_);
          FUN_?(this_02,uVar7);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole(this_03,(MethodInfo *)0x0);
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar8 != (MVNetworkGame_OperationRequests *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          aIStackX_10[0] = IVar4;
          value = (Object *)FUN_?(uRam_?,aIStackX_10);
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar7 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0xc1,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)lVar2 >> 8),2),method_00)
            ;
            pPVar9 = (pMVar8->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar9 != (PhotonPeer *)0x0) {
              (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                        (pPVar9,CONCAT71((int7)((ulonglong)uVar7 >> 8),0x6f),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar9->klass->vtable).SendOperation.method);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SpawnAsSelectedSpawnRole(Int32) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
               (ESWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalPlayerBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MethodInfo *)0x0;
  bVar2 = ESWaitForPlayModeAvatar_CanSpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pMVar3 = (MVPlayer *)0x0;
    ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar3,pMVar1);
    if (extraout_RAX != (longlong *)0x0) {
      bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if ((*(byte *)(*extraout_RAX + 0x130) < bVar4) ||
         (*(MVLocalPlayerBuilder__Class **)
           (*(longlong *)(*extraout_RAX + 200) + -8 + (longlong)(ulonglong)bVar4 * 8) !=
          TypeInfo__MVLocalPlayerBuilder)) {
        FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar6 = extraout_RAX[0x21];
      uVar7 = (undefined4)extraout_RAX[0x22];
      MVTriggerBox::MVTriggerBox_OnExit
                ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar4,
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
          pMVar3 = (MVPlayer *)0x0;
          pMVar1 = 
          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
          ;
          IStack_8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Int32Enum]::
                      Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                (this_00,0,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                );
          uStack_9 = (undefined4)lVar6;
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar3,pMVar1);
          if (extraout_RAX_01 != (longlong *)0x0) {
            bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
            if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar4) ||
               (*(MVLocalPlayerBuilder__Class **)
                 (*(longlong *)(*extraout_RAX_01 + 200) + -8 + (ulonglong)bVar4 * 8) !=
                TypeInfo__MVLocalPlayerBuilder)) {
              FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uStack_10 = uStack_9;
            bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
            if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar4) ||
               (plVar11 = extraout_RAX_01,
               *(MVLocalPlayerBuilder__Class **)
                (*(longlong *)(*extraout_RAX_01 + 200) + -8 + (ulonglong)bVar4 * 8) !=
               TypeInfo__MVLocalPlayerBuilder)) {
              FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
         (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
        (this_01 = (pMVar13->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) &&
       (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       this_02 != (MVLocalPlayer *)0x0)) {
      pMVar1 = (MethodInfo *)0x0;
      pMVar3 = (MVPlayer *)(ulonglong)(uint)spawnRoleId;
      MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(this_02,spawnRoleId,(MethodInfo *)0x0);
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar3,pMVar1);
      if (extraout_RAX_02 != (longlong *)0x0) {
        bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
        if ((*(byte *)(*extraout_RAX_02 + 0x130) < bVar4) ||
           (*(MVLocalPlayerBuilder__Class **)
             (*(longlong *)(*extraout_RAX_02 + 200) + -8 + (longlong)(ulonglong)bVar4 * 8) !=
            TypeInfo__MVLocalPlayerBuilder)) {
          FUN_?(extraout_RAX_02,TypeInfo__MVLocalPlayerBuilder);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar7 = (undefined4)extraout_RAX_02[0x22];
        uStack_9 = (undefined4)extraout_RAX_02[0x21];
        MVTriggerBox::MVTriggerBox_OnExit
                  ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar4,
                   (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
        if (extraout_RAX_03 != (longlong *)0x0) {
          bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_03 + 0x130) < bVar4) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_03 + 200) + -8 + (ulonglong)bVar4 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_03,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uStack_10 = uStack_9;
          bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_03 + 0x130) < bVar4) ||
             (plVar11 = extraout_RAX_03, IStack_8 = spawnRoleId,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_03 + 200) + -8 + (ulonglong)bVar4 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_03,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
code_?:
          plVar11[0x21] = CONCAT44(IStack_8,uStack_10);
          *(undefined4 *)(plVar11 + 0x22) = uVar7;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SpawnRolesManagerOnOnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_SpawnRolesManagerOnOnSpawnRoleActivated
               (ESWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  player = (MVPlayer *)CONCAT44(in_register_00000014,spawnRoleId);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method);
  if (extraout_RAX != 0) {
    this_00 = *(SpawnRolesManager **)(extraout_RAX + 0x88);
    value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(value,this);
    if (this_00 != (SpawnRolesManager *)0x0) {
      SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                (this_00,value,(MethodInfo *)0x0);
      (this->fields).defaultPlayModeSpawnRoleReady = 1;
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ESWaitForPlayModeAvatar() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar__ctor
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  (this->fields).selectedTeam = 5;
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar8 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.logger = pIVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

