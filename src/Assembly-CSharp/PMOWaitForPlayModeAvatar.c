
/* PMOWaitForPlayModeAvatar+EnterPlayFromObserveSpawnState CalculateEnterPlayFromObserveState() */

PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum
Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
PMOWaitForPlayModeAvatar_CalculateEnterPlayFromObserveState
          (PMOWaitForPlayModeAvatar *this,MethodInfo *method)

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
    PVar2 = (*pcVar1)();
    return PVar2;
  }
  bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
  if ((*(byte *)(*extraout_RAX + 0x130) < bVar3) ||
     (*(MVLocalPlayerBuilder__Class **)
       (*(longlong *)(*extraout_RAX + 200) + -8 + (ulonglong)bVar3 * 8) !=
      TypeInfo__MVLocalPlayerBuilder)) {
    FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
    pcVar1 = (code *)swi(3);
    PVar2 = (*pcVar1)();
    return PVar2;
  }
  lVar4 = extraout_RAX[0x20];
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
  pDVar12 = (pMVar9->fields).teams;
  if (pDVar12 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
  goto code_?;
  iVar13 = (pDVar12->fields)._count - (pDVar12->fields)._freeCount;
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
  bVar14 = MVTeamManager::MVTeamManager_HasTeam
                     (pMVar9,(this->fields).selectedTeam,(MethodInfo *)0x0);
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
  pMVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar7,(int32_t)((ulonglong)lVar4 >> 0x20),(MethodInfo *)0x0);
  bVar16 = pMVar15 != (MVWorldObjectClient *)0x0 || iVar11 < 1;
  if (iVar13 < 2 || bVar14 == 0 && 1 < iVar13) {
code_?:
    if (pMVar15 != (MVWorldObjectClient *)0x0 || iVar11 < 1) goto code_?;
  }
  else {
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
    bVar14 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                       (pMVar9,(this->fields).selectedTeam,(MethodInfo *)0x0);
    if (bVar14 != 0) goto code_?;
    if ((bVar16) || (lVar4 < 0)) {
      return PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar;
    }
  }
  if ((iVar13 < 2) && (iVar10 == 1)) {
    return PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_DefaultSpawnAsSpawnRole;
  }
code_?:
  return (0 < iVar11 && bVar16) +
         PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar;
}


/* Boolean CanSpawnAsSelectedSpawnRole(Int32) */

bool Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_CanSpawnAsSelectedSpawnRole
               (PMOWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

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
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      ((pMVar2->fields).worldNetwork != (WorldNetwork *)0x0)) &&
     (this_00 = (MVWorldObjectClientManager *)
                (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
     this_00 != (MVWorldObjectClientManager *)0x0)) {
    this_01 = (MVAvatarSpawnRoleCreator *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_00,spawnRoleId,(MethodInfo *)0x0);
    if (this_01 != (MVAvatarSpawnRoleCreator *)0x0) {
      bVar3 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
      if ((bVar3 <= (this_01->klass->_1).naturalAligment) &&
         ((MVAvatarSpawnRoleCreator__Class *)
          (this_01->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__MVAvatarSpawnRoleCreator)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar4 != (PlayerPlanetData *)0x0) {
          bVar3 = (pPVar4->fields).gamePassTier;
          GVar5 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                            (this_01,(MethodInfo *)0x0);
          return (byte)GVar5 <= bVar3;
        }
        goto code_?;
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void Enter(PlayModeOnlyStateMachine) */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::PMOWaitForPlayModeAvatar_Enter
               (PMOWaitForPlayModeAvatar *this,PlayModeOnlyStateMachine *psm,MethodInfo *method)

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
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)psm,method);
  if (extraout_RAX != 0) {
    pSVar1 = *(SpawnRolesManager **)(extraout_RAX + 0x88);
    value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(value,this);
    if (pSVar1 != (SpawnRolesManager *)0x0) {
      pMVar2 = (MethodInfo *)0x0;
      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated(pSVar1,value,(MethodInfo *)0x0);
      pMVar3 = (MVPlayer *)0x0;
      PVar4 = PMOWaitForPlayModeAvatar_CalculateEnterPlayFromObserveState(this,(MethodInfo *)0x0);
      if (PVar4 == 
          PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_DefaultSpawnAsSpawnRole) {
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
        if (PVar4 == 
            PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar) {
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
                  uVar14 = CONCAT71((int7)((ulonglong)pMVar2 >> 8),0xbf);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                            (this_02,0xbf,value_00,
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
        if (PVar4 != 
            PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsSelectedSpawnRole)
        {
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
          spawnRoleId = (int32_t)((ulonglong)extraout_RAX_00[0x20] >> 0x20);
code_?:
          PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
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


/* Void Execute(PlayModeOnlyStateMachine) */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::PMOWaitForPlayModeAvatar_Execute
               (PMOWaitForPlayModeAvatar *this,PlayModeOnlyStateMachine *psm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayModeOnlyEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).defaultPlayModeSpawnRoleReady != 0) {
    auStackX_8[0] = 0x29;
    value = (Object *)FUN_?(TypeInfo__PlayModeOnlyEvent,auStackX_8);
    if (psm == (PlayModeOnlyStateMachine *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FSMEntity::FSMEntity_set_Event((FSMEntity *)psm,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleDefaultSpawnAsSpawnRole() */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_HandleDefaultSpawnAsSpawnRole
               (PMOWaitForPlayModeAvatar *this,MethodInfo *method)

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
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      ((pMVar2->fields).worldNetwork == (WorldNetwork *)0x0)) ||
     ((pMVar3 = (MVWorldObjectClientManager *)
                (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
      pMVar3 == (MVWorldObjectClientManager *)0x0 ||
      (pLVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (pMVar3,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
      pLVar4 == (List_1_MVWorldObjectClient_ *)0x0)))) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pLVar4->fields)._size == 0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pMVar6 = (pLVar4->fields)._items;
  if (pMVar6 == (MVWorldObjectClient__Array *)0x0) goto code_?;
  if ((int)pMVar6->max_length == 0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pMVar6->vector[0] == (MVWorldObjectClient *)0x0) goto code_?;
  IStack_7 = (pMVar6->vector[0]->fields)._.id;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalPlayerBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (((pMVar2->fields).worldNetwork == (WorldNetwork *)0x0 ||
      (pMVar3 = (MVWorldObjectClientManager *)
                (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
      pMVar3 == (MVWorldObjectClientManager *)0x0)))) goto code_?;
  method_00 = (MVAvatarSpawnRoleCreator__Class *)0x0;
  this_02 = (MVAvatarSpawnRoleCreator *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar3,IStack_7,(MethodInfo *)0x0);
  if (this_02 != (MVAvatarSpawnRoleCreator *)0x0) {
    method_00 = this_02->klass;
    bVar8 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if ((bVar8 <= (method_00->_1).naturalAligment) &&
       ((MVAvatarSpawnRoleCreator__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar9 == (PlayerPlanetData *)0x0) goto code_?;
      bVar8 = (pPVar9->fields).gamePassTier;
      GVar10 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(this_02,(MethodInfo *)0x0)
      ;
      if ((byte)GVar10 <= bVar8) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
             (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
            (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
           (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0), this_03 != (MVLocalPlayer *)0x0)) {
          pMVar11 = (MethodInfo *)0x0;
          pMVar12 = (MVPlayer *)(ulonglong)IStack_7;
          MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(this_03,IStack_7,(MethodInfo *)0x0);
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar12,pMVar11);
          if (extraout_RAX == (longlong *)0x0) goto code_?;
          bVar8 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX + 0x130) < bVar8) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX + 200) + -8 + (longlong)(ulonglong)bVar8 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar13 = (undefined4)extraout_RAX[0x21];
          uStack_14 = (undefined4)extraout_RAX[0x20];
          MVTriggerBox::MVTriggerBox_OnExit
                    ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar8,
                     (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
          if (extraout_RAX_00 == (longlong *)0x0) goto code_?;
          bVar8 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar8) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar8 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uStack_15 = uStack_14;
          bVar8 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar8) ||
             (plVar16 = extraout_RAX_00,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar8 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  pMVar12 = (MVPlayer *)0x0;
  PMOWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar12,(MethodInfo *)method_00);
  if (extraout_RAX_01 != (longlong *)0x0) {
    bVar8 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar8) ||
       (*(MVLocalPlayerBuilder__Class **)
         (*(longlong *)(*extraout_RAX_01 + 200) + -8 + (longlong)(ulonglong)bVar8 * 8) !=
        TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar17 = extraout_RAX_01[0x20];
    uVar13 = (undefined4)extraout_RAX_01[0x21];
    MVTriggerBox::MVTriggerBox_OnExit
              ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar8,
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
         (this_01 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                     (*(longlong *)(extraout_RAX_02 + 0x90) + 0x10),
         this_01 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
        pMVar12 = (MVPlayer *)0x0;
        pMVar11 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
        ;
        IStack_7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Int32Enum]::
                    Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                              (this_01,0,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                              );
        uStack_14 = (undefined4)lVar17;
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar12,pMVar11);
        if (extraout_RAX_03 != (longlong *)0x0) {
          bVar8 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_03 + 0x130) < bVar8) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_03 + 200) + -8 + (ulonglong)bVar8 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_03,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uStack_15 = uStack_14;
          bVar8 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_03 + 0x130) < bVar8) ||
             (plVar16 = extraout_RAX_03,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_03 + 200) + -8 + (ulonglong)bVar8 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_03,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
code_?:
          plVar16[0x20] = CONCAT44(IStack_7,uStack_15);
          *(undefined4 *)(plVar16 + 0x21) = uVar13;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleEnterPlayModeFromObserveSpawn(PMOWaitForPlayModeAvatar+EnterPlayFromObserveSpawnState)
    */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_HandleEnterPlayModeFromObserveSpawn
               (PMOWaitForPlayModeAvatar *this,
               PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum enterSpawnState,
               MethodInfo *method)

{
  if (enterSpawnState ==
      PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_DefaultSpawnAsSpawnRole) {
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
       ((pMVar3 = (MVWorldObjectClientManager *)
                  (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
        pMVar3 == (MVWorldObjectClientManager *)0x0 ||
        (pLVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                             (pMVar3,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0)
        , pLVar4 == (List_1_MVWorldObjectClient_ *)0x0)))) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pLVar4->fields)._size == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pMVar6 = (pLVar4->fields)._items;
    if (pMVar6 == (MVWorldObjectClient__Array *)0x0) goto code_?;
    if ((int)pMVar6->max_length == 0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (pMVar6->vector[0] == (MVWorldObjectClient *)0x0) goto code_?;
    pMVar7 = (MVPlayer *)(ulonglong)(uint)(pMVar6->vector[0]->fields)._.id;
  }
  else {
    uVar8 = enterSpawnState -
             PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar;
    pMVar7 = (MVPlayer *)(ulonglong)uVar8;
    if (uVar8 == 0) {
      pMVar7 = (MVPlayer *)0x0;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar7,method);
      if (extraout_RAX_05 == (longlong *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar9 = *extraout_RAX_05;
      bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if ((*(byte *)(lVar9 + 0x130) < bVar10) ||
         (*(MVLocalPlayerBuilder__Class **)(*(longlong *)(lVar9 + 200) + -8 + (ulonglong)bVar10 * 8)
          != TypeInfo__MVLocalPlayerBuilder)) {
        FUN_?(extraout_RAX_05,TypeInfo__MVLocalPlayerBuilder);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pMVar7 = (MVPlayer *)0x0;
      method_01 = TypeInfo__MVLocalPlayerBuilder;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar7,(MethodInfo *)method_01);
      if (((extraout_RAX_05[0x12] != 0) &&
          (pDVar11 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                     (extraout_RAX_05[0x12] + 0x10),
          pDVar11 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) &&
         (IVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                             (pDVar11,0,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                             ), this_05 != (MVLocalPlayer *)0x0)) {
        pSVar13 = (this_05->fields)._.spawnRolesManager;
        if ((pSVar13 != (SpawnRolesManager *)0x0) &&
           (pSVar14 = (pSVar13->fields).spawnRolesRuntimeData, pSVar14 != (SpawnRolesRuntimeData *)0x0)
           ) {
          if (IVar12 == (pSVar14->fields).activeSpawnRole) {
            uVar15 = func_?(&TypeInfo__System__Exception);
            this_04 = (Exception *)func_?(uVar15);
            message = (String *)func_?(&StringLiteral_Trying_to_set_active_spawn_role_)
            ;
            mscorlib.dll::System::Exception::Exception__ctor_1(this_04,message,(MethodInfo *)0x0);
            uVar15 = func_?(&MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_);
            FUN_?(this_04,uVar15);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole(this_05,(MethodInfo *)0x0);
          pMVar16 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (pMVar16 != (MVNetworkGame_OperationRequests *)0x0) {
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
            value = (Object *)FUN_?(uRam_?,&stack0x00000010);
            if (this_03 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              pMVar17 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
              uVar15 = CONCAT71((int7)((ulonglong)pMVar17 >> 8),0xbf);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (this_03,0xbf,value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)lVar9 >> 8),2),pMVar17
                        );
              pPVar18 = (pMVar16->fields).peer;
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar18 != (PhotonPeer *)0x0) {
                (*(pPVar18->klass->vtable).SendOperation.methodPtr)
                          (pPVar18,CONCAT71((int7)((ulonglong)uVar15 >> 8),0x6f),this_03,
                           TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                           SendReliable,(pPVar18->klass->vtable).SendOperation.method);
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
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar8 != 1) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar7,method);
    if (extraout_RAX == (longlong *)0x0) goto code_?;
    bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX + 0x130) < bVar10) ||
       (*(MVLocalPlayerBuilder__Class **)
         (*(longlong *)(*extraout_RAX + 200) + -8 + (ulonglong)bVar10 * 8) !=
        TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pMVar7 = (MVPlayer *)((ulonglong)extraout_RAX[0x20] >> 0x20);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalPlayerBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  method_00 = (MVAvatarSpawnRoleCreator__Class *)0x0;
  id = (int32_t)pMVar7;
  this_01 = (MVAvatarSpawnRoleCreator *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar3,id,(MethodInfo *)0x0);
  if (this_01 != (MVAvatarSpawnRoleCreator *)0x0) {
    method_00 = this_01->klass;
    bVar10 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if ((bVar10 <= (method_00->_1).naturalAligment) &&
       ((MVAvatarSpawnRoleCreator__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar10 - 1] ==
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar19 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar19 == (PlayerPlanetData *)0x0) goto code_?;
      bVar10 = (pPVar19->fields).gamePassTier;
      GVar20 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                         (this_01,(MethodInfo *)0x0);
      if ((byte)GVar20 <= bVar10) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           ((this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
            (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_00,(MethodInfo *)0x0), this_02 != (MVLocalPlayer *)0x0)))) {
          pMVar17 = (MethodInfo *)0x0;
          MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(this_02,id,(MethodInfo *)0x0);
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar7,pMVar17);
          if (extraout_RAX_00 == (longlong *)0x0) goto code_?;
          bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar10) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (longlong)(ulonglong)bVar10 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar9 = extraout_RAX_00[0x20];
          uVar21 = (undefined4)extraout_RAX_00[0x21];
          MVTriggerBox::MVTriggerBox_OnExit
                    ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar10,
                     (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
          if (extraout_RAX_01 == (longlong *)0x0) goto code_?;
          bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar10) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_01 + 200) + -8 + (ulonglong)bVar10 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar9 = CONCAT44(id,(int)lVar9);
          bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar10) ||
             (plVar22 = extraout_RAX_01,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_01 + 200) + -8 + (ulonglong)bVar10 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  pMVar7 = (MVPlayer *)0x0;
  PMOWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar7,(MethodInfo *)method_00);
  if (extraout_RAX_02 != (longlong *)0x0) {
    bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX_02 + 0x130) < bVar10) ||
       (*(MVLocalPlayerBuilder__Class **)
         (*(longlong *)(*extraout_RAX_02 + 200) + -8 + (longlong)(ulonglong)bVar10 * 8) !=
        TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX_02,TypeInfo__MVLocalPlayerBuilder);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar9 = extraout_RAX_02[0x20];
    uVar21 = (undefined4)extraout_RAX_02[0x21];
    MVTriggerBox::MVTriggerBox_OnExit
              ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar10,
               (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
    if (extraout_RAX_03 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((*(longlong *)(extraout_RAX_03 + 0x90) != 0) &&
         (pDVar11 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                    (*(longlong *)(extraout_RAX_03 + 0x90) + 0x10),
         pDVar11 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
        pMVar7 = (MVPlayer *)0x0;
        pMVar17 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
        ;
        IVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                           (pDVar11,0,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                           );
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar7,pMVar17);
        if (extraout_RAX_04 != (longlong *)0x0) {
          bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_04 + 0x130) < bVar10) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_04 + 200) + -8 + (ulonglong)bVar10 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_04,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar9 = CONCAT44(IVar12,(int)lVar9);
          bVar10 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_04 + 0x130) < bVar10) ||
             (plVar22 = extraout_RAX_04,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_04 + 200) + -8 + (ulonglong)bVar10 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_04,TypeInfo__MVLocalPlayerBuilder);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
code_?:
          plVar22[0x20] = lVar9;
          *(undefined4 *)(plVar22 + 0x21) = uVar21;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleSpawnAsDefaultPlayModeSpawnRole() */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_HandleSpawnAsDefaultPlayModeSpawnRole
               (PMOWaitForPlayModeAvatar *this,MethodInfo *method)

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
            uVar8 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0xbf,value,
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

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_HanldeSpawnAsSelectedSpawnRole
               (PMOWaitForPlayModeAvatar *this,MethodInfo *method)

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
  uVar3 = extraout_RAX[0x20];
  pMVar4 = (MVPlayer *)(uVar3 >> 0x20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalPlayerBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar5 == (MVGameControllerBase *)0x0) ||
       (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
      ((pMVar6->fields).worldNetwork == (WorldNetwork *)0x0)) ||
     (this_00 = (MVWorldObjectClientManager *)
                (((pMVar6->fields).worldNetwork)->fields)._.worldObjectClientManager,
     this_00 == (MVWorldObjectClientManager *)0x0)) goto code_?;
  method_00 = (MVAvatarSpawnRoleCreator__Class *)0x0;
  id = (int32_t)(uVar3 >> 0x20);
  this_03 = (MVAvatarSpawnRoleCreator *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (this_00,id,(MethodInfo *)0x0);
  if (this_03 != (MVAvatarSpawnRoleCreator *)0x0) {
    method_00 = this_03->klass;
    bVar2 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if ((bVar2 <= (method_00->_1).naturalAligment) &&
       ((MVAvatarSpawnRoleCreator__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar7 == (PlayerPlanetData *)0x0) goto code_?;
      bVar2 = (pPVar7->fields).gamePassTier;
      GVar8 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(this_03,(MethodInfo *)0x0)
      ;
      if ((byte)GVar8 <= bVar2) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar5 != (MVGameControllerBase *)0x0) &&
            (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
           ((this_01 = (pMVar6->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0 &&
            (this_04 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_01,(MethodInfo *)0x0), this_04 != (MVLocalPlayer *)0x0)))) {
          pMVar9 = (MethodInfo *)0x0;
          MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(this_04,id,(MethodInfo *)0x0);
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar4,pMVar9);
          if (extraout_RAX_00 == (longlong *)0x0) goto code_?;
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
          lVar10 = extraout_RAX_00[0x20];
          uVar11 = (undefined4)extraout_RAX_00[0x21];
          MVTriggerBox::MVTriggerBox_OnExit
                    ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar2,
                     (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
          if (extraout_RAX_01 == (longlong *)0x0) goto code_?;
          bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar2) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_01 + 200) + -8 + (ulonglong)bVar2 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          lStack_12 = CONCAT44(id,(int)lVar10);
          bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar2) ||
             (plVar13 = extraout_RAX_01,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_01 + 200) + -8 + (ulonglong)bVar2 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  pMVar4 = (MVPlayer *)0x0;
  PMOWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar4,(MethodInfo *)method_00);
  if (extraout_RAX_02 != (longlong *)0x0) {
    bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX_02 + 0x130) < bVar2) ||
       (*(MVLocalPlayerBuilder__Class **)
         (*(longlong *)(*extraout_RAX_02 + 200) + -8 + (longlong)(ulonglong)bVar2 * 8) !=
        TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX_02,TypeInfo__MVLocalPlayerBuilder);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar10 = extraout_RAX_02[0x20];
    uVar11 = (undefined4)extraout_RAX_02[0x21];
    MVTriggerBox::MVTriggerBox_OnExit
              ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar2,
               (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
    if (extraout_RAX_03 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((*(longlong *)(extraout_RAX_03 + 0x90) != 0) &&
         (this_02 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                     (*(longlong *)(extraout_RAX_03 + 0x90) + 0x10),
         this_02 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
        pMVar4 = (MVPlayer *)0x0;
        pMVar9 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
        ;
        IVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                          (this_02,0,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                          );
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar4,pMVar9);
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
          lStack_12 = CONCAT44(IVar14,(int)lVar10);
          bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_04 + 0x130) < bVar2) ||
             (plVar13 = extraout_RAX_04,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_04 + 200) + -8 + (ulonglong)bVar2 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_04,TypeInfo__MVLocalPlayerBuilder);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
code_?:
          plVar13[0x20] = lStack_12;
          *(undefined4 *)(plVar13 + 0x21) = uVar11;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean IsSelectedSpawnRoleDeleted(Boolean, Int32) */

bool Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_IsSelectedSpawnRoleDeleted
               (PMOWaitForPlayModeAvatar *this,bool isSpawnRoleValid,
               int32_t selectedSpawnRoleCreatorId,MethodInfo *method)

{
  if (isSpawnRoleValid != 0) {
    return 0;
  }
  return (byte)((uint)selectedSpawnRoleCreatorId >> 0x1f) ^ 1;
}


/* Boolean IsTeamWithoutSpawnRole(Boolean, Boolean) */

bool Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::PMOWaitForPlayModeAvatar_IsTeamWithoutSpawnRole
               (PMOWaitForPlayModeAvatar *this,bool teamsPresent,bool isTeamValid,MethodInfo *method
               )

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


/* Boolean ShouldEnterAsDefaultSpawnRole(Boolean, Boolean, Int32) */

bool Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_ShouldEnterAsDefaultSpawnRole
               (PMOWaitForPlayModeAvatar *this,bool isSpawnRoleValid,bool teamsPresent,
               int32_t numberOfSpawnPoints,MethodInfo *method)

{
  if ((isSpawnRoleValid == 0) && (teamsPresent == 0)) {
    return numberOfSpawnPoints == 1;
  }
  return 0;
}


/* Boolean ShouldEnterAsSelectedSpawnRole(Boolean, Boolean) */

bool Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_ShouldEnterAsSelectedSpawnRole
               (PMOWaitForPlayModeAvatar *this,bool isSpawnRoleValid,bool spawnRolesPresent,
               MethodInfo *method)

{
  return isSpawnRoleValid & spawnRolesPresent;
}


/* Void SpawnAsDefaultPlayModeSpawnRole() */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole
               (PMOWaitForPlayModeAvatar *this,MethodInfo *method)

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
            uVar7 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0xbf,value,
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

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
               (PMOWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalPlayerBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
     (this_00 = (MVWorldObjectClientManager *)
                (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
     this_00 == (MVWorldObjectClientManager *)0x0)) goto code_?;
  method_00 = (MVAvatarSpawnRoleCreator__Class *)0x0;
  this_03 = (MVAvatarSpawnRoleCreator *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (this_00,spawnRoleId,(MethodInfo *)0x0);
  if (this_03 != (MVAvatarSpawnRoleCreator *)0x0) {
    method_00 = this_03->klass;
    bVar3 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if ((bVar3 <= (method_00->_1).naturalAligment) &&
       ((MVAvatarSpawnRoleCreator__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
      bVar3 = (pPVar4->fields).gamePassTier;
      GVar5 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(this_03,(MethodInfo *)0x0)
      ;
      if ((byte)GVar5 <= bVar3) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           ((this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0 &&
            (this_04 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_01,(MethodInfo *)0x0), this_04 != (MVLocalPlayer *)0x0)))) {
          pMVar6 = (MethodInfo *)0x0;
          pMVar7 = (MVPlayer *)(ulonglong)(uint)spawnRoleId;
          MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(this_04,spawnRoleId,(MethodInfo *)0x0);
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar7,pMVar6);
          if (extraout_RAX == (longlong *)0x0) goto code_?;
          bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX + 0x130) < bVar3) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX + 200) + -8 + (longlong)(ulonglong)bVar3 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar9 = (undefined4)extraout_RAX[0x21];
          uStack_10 = (undefined4)extraout_RAX[0x20];
          MVTriggerBox::MVTriggerBox_OnExit
                    ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar3,
                     (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
          if (extraout_RAX_00 == (longlong *)0x0) goto code_?;
          bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar3) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar3 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uStack_11 = uStack_10;
          bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar3) ||
             (plVar12 = extraout_RAX_00, IStack_13 = spawnRoleId,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar3 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  pMVar7 = (MVPlayer *)0x0;
  PMOWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar7,(MethodInfo *)method_00);
  if (extraout_RAX_01 != (longlong *)0x0) {
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((*(byte *)(*extraout_RAX_01 + 0x130) < bVar3) ||
       (*(MVLocalPlayerBuilder__Class **)
         (*(longlong *)(*extraout_RAX_01 + 200) + -8 + (longlong)(ulonglong)bVar3 * 8) !=
        TypeInfo__MVLocalPlayerBuilder)) {
      FUN_?(extraout_RAX_01,TypeInfo__MVLocalPlayerBuilder);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar14 = extraout_RAX_01[0x20];
    uVar9 = (undefined4)extraout_RAX_01[0x21];
    MVTriggerBox::MVTriggerBox_OnExit
              ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar3,
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
         (this_02 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                     (*(longlong *)(extraout_RAX_02 + 0x90) + 0x10),
         this_02 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
        pMVar7 = (MVPlayer *)0x0;
        pMVar6 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
        ;
        IStack_13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Int32Enum]::
                    Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                              (this_02,0,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                              );
        uStack_10 = (undefined4)lVar14;
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar7,pMVar6);
        if (extraout_RAX_03 != (longlong *)0x0) {
          bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_03 + 0x130) < bVar3) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_03 + 200) + -8 + (ulonglong)bVar3 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_03,TypeInfo__MVLocalPlayerBuilder);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uStack_11 = uStack_10;
          bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_03 + 0x130) < bVar3) ||
             (plVar12 = extraout_RAX_03,
             *(MVLocalPlayerBuilder__Class **)
              (*(longlong *)(*extraout_RAX_03 + 200) + -8 + (ulonglong)bVar3 * 8) !=
             TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_03,TypeInfo__MVLocalPlayerBuilder);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
code_?:
          plVar12[0x20] = CONCAT44(IStack_13,uStack_11);
          *(undefined4 *)(plVar12 + 0x21) = uVar9;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SpawnRolesManagerOnOnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_SpawnRolesManagerOnOnSpawnRoleActivated
               (PMOWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

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


/* PMOWaitForPlayModeAvatar() */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::PMOWaitForPlayModeAvatar__ctor
               (PMOWaitForPlayModeAvatar *this,MethodInfo *method)

{
  (this->fields).selectedTeam = 5;
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._.logger = pIVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
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
  return;
}

