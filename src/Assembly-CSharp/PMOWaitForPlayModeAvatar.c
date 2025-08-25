
/* PMOWaitForPlayModeAvatar+EnterPlayFromObserveSpawnState CalculateEnterPlayFromObserveState() */

PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum
Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
PMOWaitForPlayModeAvatar_CalculateEnterPlayFromObserveState
          (PMOWaitForPlayModeAvatar *this,MethodInfo *method)

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
    lVar3._0_4_ = pMVar1[1].klass;
    lVar3._4_4_ = pMVar1[1].monitor;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 != (MVNetworkGame *)0x0) &&
       (pMVar5 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar4,(MethodInfo *)0x0)
       , pMVar5 != (MVWorldObjectClientManager *)0x0)) {
      pMVar2 = (MVLocalPlayerBuilder__Class *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                         (pMVar5,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar4 != (MVNetworkGame *)0x0) &&
          (pMVar6 = (pMVar4->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) &&
         (iVar7 = MVTeamManager::MVTeamManager_get_NumSpawnPoint(pMVar6,(MethodInfo *)0x0),
         pMVar2 != (MVLocalPlayerBuilder__Class *)0x0)) {
        pcVar8 = (pMVar2->_0).namespaze;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar6 = (pMVar4->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
          pMVar2 = (MVLocalPlayerBuilder__Class *)
                   MVTeamManager::MVTeamManager_TeamCount(pMVar6,(MethodInfo *)0x0);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar4 != (MVNetworkGame *)0x0) &&
             (pMVar6 = (pMVar4->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
            bVar9 = MVTeamManager::MVTeamManager_HasTeam
                              (pMVar6,(this->fields).selectedTeam,(MethodInfo *)0x0);
            cVar10 = bVar9 != 0 || (int)pMVar2 < 2;
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar4 != (MVNetworkGame *)0x0) &&
               (pMVar5 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                   (pMVar4,(MethodInfo *)0x0),
               pMVar5 != (MVWorldObjectClientManager *)0x0)) {
              pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar5,lVar3._4_4_,(MethodInfo *)0x0);
              bVar12 = pMVar11 != (MVWorldObject *)0x0 || (int)pcVar8 < 1;
              cVar13 = '\0';
              if (1 < (int)pMVar2) {
                cVar13 = cVar10;
              }
              if (cVar13 != '\0') {
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar4 == (MVNetworkGame *)0x0) ||
                   (this_00 = (pMVar4->fields).teamManager, this_00 == (MVTeamManager *)0x0))
                goto code_?;
                bVar9 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                                  (this_00,(MVTeam__Enum)(pMVar6->fields).OnTeamAdded,
                                   (MethodInfo *)0x0);
                if (bVar9 == 0) {
                  if ((bVar12) || (lVar3 < 0)) {
                    return 
                    PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar
                    ;
                  }
                  goto code_?;
                }
              }
              if (bVar12) {
                return 
                PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar;
              }
code_?:
              if (((int)pMVar2 < 2) && (iVar7 == 1)) {
                return 
                PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_DefaultSpawnAsSpawnRole
                ;
              }
              return 
              PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar2);
  pcVar14 = (code *)swi(3);
  PVar15 = (*pcVar14)();
  return PVar15;
}


/* Boolean CanSpawnAsSelectedSpawnRole(Int32) */

bool Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_CanSpawnAsSelectedSpawnRole
               (PMOWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = (MVAvatarSpawnRoleCreator *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,spawnRoleId,(MethodInfo *)0x0);
      if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
        if (((pMVar1->klass->_1).naturalAligment <
             (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
           ((MVAvatarSpawnRoleCreator__Class *)
            (pMVar1->klass->_1).typeHierarchy
            [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
            TypeInfo__MVAvatarSpawnRoleCreator)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        this_02 = (MVAvatarSpawnRoleCreator *)0x0;
        if (bVar2) {
          this_02 = pMVar1;
        }
        if (this_02 != (MVAvatarSpawnRoleCreator *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar3 != (PlayerPlanetData *)0x0) {
            bVar4 = (pPVar3->fields).gamePassTier;
            GVar5 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                              (this_02,(MethodInfo *)0x0);
            return (byte)GVar5 <= bVar4;
          }
          goto code_?;
        }
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void Enter(PlayModeOnlyStateMachine) */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::PMOWaitForPlayModeAvatar_Enter
               (PMOWaitForPlayModeAvatar *this,PlayModeOnlyStateMachine *psm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&
                    MethodInfo__PMOWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_
                   );
    cRam_? = '\x01';
  }
  (this->fields).defaultPlayModeSpawnRoleReady = 0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    unaff_EDI = (MVLocalPlayerBuilder__Class *)(pMVar1->fields)._.spawnRolesManager;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__PMOWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_,
               (MethodInfo *)0x0);
    if (unaff_EDI != (MVLocalPlayerBuilder__Class *)0x0) {
      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                ((SpawnRolesManager *)unaff_EDI,(Action_1_Int32_ *)this_00,(MethodInfo *)0x0);
      PVar2 = PMOWaitForPlayModeAvatar_CalculateEnterPlayFromObserveState(this,(MethodInfo *)0x0);
      if (PVar2 == 
          PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_DefaultSpawnAsSpawnRole) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((((this_01 != (MVNetworkGame *)0x0) &&
             (this_02 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                  (this_01,(MethodInfo *)0x0),
             this_02 != (MVWorldObjectClientManager *)0x0)) &&
            (this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                                 (this_02,WorldObjectType__Enum_AvatarSpawnRoleCreator,
                                  (MethodInfo *)0x0),
            this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) &&
           (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_03,0,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              ), RVar3 != (RegexCharClass_SingleRange)0x0)) {
          PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
                    (this,*(int32_t *)((int)RVar3 + 8),(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (PVar2 == 
            PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar) {
          PMOWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
          return;
        }
        if (PVar2 != 
            PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsSelectedSpawnRole)
        {
          return;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVLocalPlayerBuilder);
          cRam_? = '\x01';
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        unaff_EDI = TypeInfo__MVLocalPlayerBuilder;
        if (pMVar1 != (MVLocalPlayer *)0x0) {
          if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
               (pMVar1->klass->_1).naturalAligment) &&
             ((pMVar1->klass->_1).typeHierarchy
              [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] ==
              (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
            spawnRoleId = pMVar1[1].monitor;
            PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,unaff_EDI);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Execute(PlayModeOnlyStateMachine) */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::PMOWaitForPlayModeAvatar_Execute
               (PMOWaitForPlayModeAvatar *this,PlayModeOnlyStateMachine *psm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).defaultPlayModeSpawnRoleReady != 0) {
    value = (Object *)func_?();
    if (psm == (PlayModeOnlyStateMachine *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                          (this_01,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
      if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_02,0,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        if (RVar1 != (RegexCharClass_SingleRange)0x0) {
          PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
                    ((PMOWaitForPlayModeAvatar *)&UNK_?,*(int32_t *)((int)RVar1 + 8),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((this_01 != (MVNetworkGame *)0x0) &&
         (this_02 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (this_01,(MethodInfo *)0x0),
         this_02 != (MVWorldObjectClientManager *)0x0)) &&
        (this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                             (this_02,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0
                             ),
        this_00 = MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
        , this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) &&
       (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_03,0,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          ), RVar1 != (RegexCharClass_SingleRange)0x0)) {
      PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
                ((PMOWaitForPlayModeAvatar *)this_00,*(int32_t *)((int)RVar1 + 8),(MethodInfo *)0x0)
      ;
      return;
    }
  }
  else {
    if (enterSpawnState ==
        PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar) {
      PMOWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
      return;
    }
    if (enterSpawnState !=
        PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsSelectedSpawnRole) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVLocalPlayerBuilder);
      cRam_? = '\x01';
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    unaff_ESI = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
           (pMVar2->klass->_1).naturalAligment) &&
         ((pMVar2->klass->_1).typeHierarchy
          [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        method_00 = pMVar2[1].klass;
        spawnRoleId = pMVar2[1].monitor;
        PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)method_00);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2,unaff_ESI);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleSpawnAsDefaultPlayModeSpawnRole() */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_HandleSpawnAsDefaultPlayModeSpawnRole
               (PMOWaitForPlayModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  this_00 = (MVLocalPlayerBuilder *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  pMVar1 = TypeInfo__MVLocalPlayerBuilder;
  if (this_00 == (MVLocalPlayerBuilder *)0x0) {
    func_?();
    this_00 = extraout_EDX;
  }
  else if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
            (this_00->klass->_1).naturalAligment) &&
          ((this_00->klass->_1).typeHierarchy
           [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] ==
           (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
    MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToDefaultPlayModeSpawnRole
              (this_00,(MethodInfo *)0x0);
    return;
  }
  func_?(this_00,pMVar1);
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
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  pMVar2 = TypeInfo__MVLocalPlayerBuilder;
  if (pMVar1 == (MVLocalPlayer *)0x0) {
    func_?();
    pMVar1 = extraout_EDX;
  }
  else if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
            (pMVar1->klass->_1).naturalAligment) &&
          ((pMVar1->klass->_1).typeHierarchy
           [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] ==
           (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
    method_00 = pMVar1[1].klass;
    spawnRoleId = pMVar1[1].monitor;
    PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)method_00);
    return;
  }
  func_?(pMVar1,pMVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields).teamManager;
    if (this_00 != (MVTeamManager *)0x0) {
      bVar2 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                        (this_00,(this->fields).selectedTeam,(MethodInfo *)0x0);
      return bVar2 ^ 1;
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
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
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  this_00 = (MVLocalPlayerBuilder *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  pMVar1 = TypeInfo__MVLocalPlayerBuilder;
  if (this_00 == (MVLocalPlayerBuilder *)0x0) {
    func_?();
    this_00 = extraout_EDX;
  }
  else if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
            (this_00->klass->_1).naturalAligment) &&
          ((this_00->klass->_1).typeHierarchy
           [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] ==
           (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
    MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToDefaultPlayModeSpawnRole
              (this_00,(MethodInfo *)0x0);
    return;
  }
  func_?(this_00,pMVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SpawnAsSelectedSpawnRole(Int32) */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
               (PMOWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
    pMVar2 = extraout_EDX;
    unaff_ESI = unaff_ESI;
  }
  else {
    this_00 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar3 = (MVAvatarSpawnRoleCreator *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,spawnRoleId,(MethodInfo *)0x0);
    if (pMVar3 == (MVAvatarSpawnRoleCreator *)0x0) {
code_?:
      PMOWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      unaff_ESI = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        if (((pMVar2->klass->_1).naturalAligment <
             (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment) ||
           ((pMVar2->klass->_1).typeHierarchy
            [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
        uVar4 = pMVar2[1].klass;
        iVar5 = pMVar2[1].fields._.checkpointWOID;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar2 != (MVLocalPlayer *)0x0) {
          iVar6 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar2,(MethodInfo *)0x0);
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          unaff_ESI = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
                 (pMVar2->klass->_1).naturalAligment) &&
               ((pMVar2->klass->_1).typeHierarchy
                [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] ==
                (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
              pMVar2[1].klass = (MVLocalPlayer__Class *)uVar4;
              pMVar2[1].monitor = (MonitorData *)iVar6;
              pMVar2[1].fields._.checkpointWOID = iVar5;
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    if (((pMVar3->klass->_1).naturalAligment <
         (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
       ((MVAvatarSpawnRoleCreator__Class *)
        (pMVar3->klass->_1).typeHierarchy
        [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    unaff_ESI = (MVAvatarSpawnRoleCreator *)0x0;
    if (bVar7) {
      unaff_ESI = pMVar3;
    }
    if (unaff_ESI == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar8 == (PlayerPlanetData *)0x0) goto code_?;
    bVar9 = (pPVar8->fields).gamePassTier;
    GVar10 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                       (unaff_ESI,(MethodInfo *)0x0);
    if (bVar9 < (byte)GVar10) goto code_?;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(pMVar2,spawnRoleId,(MethodInfo *)0x0);
    unaff_ESI = (MVAvatarSpawnRoleCreator *)
                MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (unaff_ESI == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    pIVar11 = ((Il2CppClass_0 *)&unaff_ESI->klass)->image;
    pMVar12 = TypeInfo__MVLocalPlayerBuilder;
    if ((*(byte *)&pIVar11[4].assembly < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment) ||
       (*(MVLocalPlayerBuilder__Class **)
         ((pIVar11[2].typeCount - 4) + (uint)(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment * 4
         ) != TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    uVar13 = (unaff_ESI->fields)._._._.interactionDataHandlerBase;
    pMVar14 = (unaff_ESI->fields)._._._.group;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    unaff_ESI = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
         (pMVar2->klass->_1).naturalAligment) &&
       ((pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1]
        == (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      pMVar2[1].klass = (MVLocalPlayer__Class *)uVar13;
      pMVar2[1].monitor = (MonitorData *)spawnRoleId;
      pMVar2[1].fields._.checkpointWOID = (int32_t)pMVar14;
      return;
    }
  }
code_?:
  func_?(pMVar2,unaff_ESI);
  pMVar12 = extraout_EDX_00;
code_?:
  func_?(unaff_ESI,pMVar12);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SpawnRolesManagerOnOnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::
     PMOWaitForPlayModeAvatar_SpawnRolesManagerOnOnSpawnRoleActivated
               (PMOWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&
                    MethodInfo__PMOWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    this_00 = (pMVar1->fields)._.spawnRolesManager;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__PMOWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRolesManager *)0x0) {
      SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                (this_00,(Action_1_Int32_ *)this_01,(MethodInfo *)0x0);
      (this->fields).defaultPlayModeSpawnRoleReady = 1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* PMOWaitForPlayModeAvatar() */

void Assembly-CSharp.dll::PMOWaitForPlayModeAvatar::PMOWaitForPlayModeAvatar__ctor
               (PMOWaitForPlayModeAvatar *this,MethodInfo *method)

{
  (this->fields).selectedTeam = 5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar1 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields)._.logger = pIVar1;
    func_?();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

