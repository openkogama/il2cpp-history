
/* ESWaitForPlayModeAvatar+EnterPlayFromEditSpawnState CalculateEnterPlayFromEditState() */

ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum
Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
ESWaitForPlayModeAvatar_CalculateEnterPlayFromEditState
          (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    pMVar2 = TypeInfo__MVLocalPlayerBuilder;
    if (((pMVar1->klass->_1).naturalAligment < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment)
       || ((pMVar1->klass->_1).typeHierarchy
           [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    id = pMVar1[1].monitor;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pMVar4 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar3,(MethodInfo *)0x0)
       , pMVar4 != (MVWorldObjectClientManager *)0x0)) {
      pMVar1 = (MVLocalPlayer *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                         (pMVar4,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar3 != (MVNetworkGame *)0x0) &&
          (pMVar5 = (pMVar3->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) &&
         (iVar6 = MVTeamManager::MVTeamManager_get_NumSpawnPoint(pMVar5,(MethodInfo *)0x0),
         pMVar1 != (MVLocalPlayer *)0x0)) {
        pMVar1 = (MVLocalPlayer *)(pMVar1->fields)._.playerPlanetDataRemote;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (pMVar5 = (pMVar3->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
          iVar7 = MVTeamManager::MVTeamManager_TeamCount(pMVar5,(MethodInfo *)0x0);
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) &&
             (pMVar5 = (pMVar3->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
            bVar8 = MVTeamManager::MVTeamManager_HasTeam
                              (pMVar5,(this->fields).selectedTeam,(MethodInfo *)0x0);
            bStack_9 = 0x69;
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar3 != (MVNetworkGame *)0x0) &&
               (pMVar4 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                   (pMVar3,(MethodInfo *)0x0),
               pMVar4 != (MVWorldObjectClientManager *)0x0)) {
              pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar4,id,(MethodInfo *)0x0);
              bVar11 = pMVar10 != (MVWorldObject *)0x0 || (int)pMVar1 < 1;
              if (bVar8 == 0 && 1 < iVar7 || iVar7 < 2) {
code_?:
                if (((bVar11 == 0) && (iVar7 < 2)) && (iVar6 == 1)) {
                  return 
                  ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_DefaultSpawnAsSpawnRole;
                }
                return ((bStack_9 & bVar11) != 0) +
                       ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsDefaultAvatar
                ;
              }
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar3 != (MVNetworkGame *)0x0) &&
                 (pMVar5 = (pMVar3->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
                bVar8 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                                  (pMVar5,(this->fields).selectedTeam,(MethodInfo *)0x0);
                bStack_9 = 0x69;
                if (bVar8 == 0) {
                  if (bVar11 == 0) {
                    bVar11 = -(char)((int)id >> 0x1f);
                    if (bVar11 == 1) {
                      bStack_9 = 0;
                    }
                  }
                  else {
                    bVar11 = 1;
                    bStack_9 = 0;
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
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar2);
  pcVar12 = (code *)swi(3);
  EVar13 = (*pcVar12)();
  return EVar13;
}


/* Boolean CanSpawnAsSelectedSpawnRole(Int32) */

bool Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_CanSpawnAsSelectedSpawnRole
               (ESWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVWorldObjectClientManager *)0x0)) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar2,spawnRoleId,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) {
      return 0;
    }
    if ((pMVar3->klass->_1).naturalAligment <
        (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) {
      return 0;
    }
    if ((MVAvatarSpawnRoleCreator__Class *)
        (pMVar3->klass->_1).typeHierarchy
        [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator) {
      return 0;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar2 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0)
       , pMVar2 != (MVWorldObjectClientManager *)0x0)) {
      this_00 = (MVAvatarSpawnRoleCreator *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar2,0xADDR,(MethodInfo *)0x0);
      if (this_00 == (MVAvatarSpawnRoleCreator *)0x0) {
        return 0;
      }
      if (((this_00->klass->_1).naturalAligment <
           (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
         ((MVAvatarSpawnRoleCreator__Class *)
          (this_00->klass->_1).typeHierarchy
          [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        bVar5 = (pPVar4->fields).gamePassTier;
        GVar6 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                          (this_00,(MethodInfo *)0x0);
        if (bVar5 < (byte)GVar6) {
          return 0;
        }
        return 1;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_Enter
               (ESWaitForPlayModeAvatar *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&
                    MethodInfo__ESWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_
                   );
    cRam_? = '\x01';
  }
  (this->fields).defaultPlayModeSpawnRoleReady = 0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    unaff_EDI = (MVLocalPlayer *)(pMVar1->fields)._.spawnRolesManager;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__ESWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_,
               (MethodInfo *)0x0);
    if (unaff_EDI != (MVLocalPlayer *)0x0) {
      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                ((SpawnRolesManager *)unaff_EDI,(Action_1_Int32_ *)this_00,(MethodInfo *)0x0);
      EVar2 = ESWaitForPlayModeAvatar_CalculateEnterPlayFromEditState(this,(MethodInfo *)0x0);
      if (EVar2 == ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_DefaultSpawnAsSpawnRole
         ) {
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
          ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
                    (this,*(int32_t *)((int)RVar3 + 8),(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (EVar2 == ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsDefaultAvatar)
        {
          ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
          return;
        }
        if (EVar2 != 
            ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsSelectedSpawnRole) {
          return;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVLocalPlayerBuilder);
          cRam_? = '\x01';
        }
        unaff_EDI = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (unaff_EDI != (MVLocalPlayer *)0x0) {
          pMVar4 = TypeInfo__MVLocalPlayerBuilder;
          if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
               (unaff_EDI->klass->_1).naturalAligment) &&
             ((unaff_EDI->klass->_1).typeHierarchy
              [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] ==
              (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
            spawnRoleId = unaff_EDI[1].monitor;
            ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  pMVar4 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pMVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_Execute
               (ESWaitForPlayModeAvatar *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).defaultPlayModeSpawnRoleReady != 0) {
    value = (Object *)func_?();
    if (e == (EditorStateMachine *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
          ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
                    ((ESWaitForPlayModeAvatar *)&UNK_?,*(int32_t *)((int)RVar1 + 8),
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
      ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
                ((ESWaitForPlayModeAvatar *)this_00,*(int32_t *)((int)RVar1 + 8),(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (enterSpawnState ==
        ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsDefaultAvatar) {
      ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
      return;
    }
    if (enterSpawnState !=
        ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsSelectedSpawnRole) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVLocalPlayerBuilder);
      cRam_? = '\x01';
    }
    unaff_ESI = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (unaff_ESI != (MVLocalPlayer *)0x0) {
      pMVar2 = TypeInfo__MVLocalPlayerBuilder;
      if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
           (unaff_ESI->klass->_1).naturalAligment) &&
         ((unaff_ESI->klass->_1).typeHierarchy
          [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        spawnRoleId = unaff_ESI[1].monitor;
        ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pMVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleSpawnAsDefaultPlayModeSpawnRole() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_HandleSpawnAsDefaultPlayModeSpawnRole
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

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

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_HanldeSpawnAsSelectedSpawnRole
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayer *)0x0) {
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    pMVar2 = TypeInfo__MVLocalPlayerBuilder;
    if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment
        ) && ((pMVar1->klass->_1).typeHierarchy
              [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] ==
              (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      spawnRoleId = pMVar1[1].monitor;
      ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(pMVar1,pMVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsSelectedSpawnRoleDeleted(Boolean, Int32) */

bool Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_IsSelectedSpawnRoleDeleted
               (ESWaitForPlayModeAvatar *this,bool isSpawnRoleValid,
               int32_t selectedSpawnRoleCreatorId,MethodInfo *method)

{
  if (isSpawnRoleValid != 0) {
    return 0;
  }
  return (byte)((uint)selectedSpawnRoleCreatorId >> 0x1f) ^ 1;
}


/* Boolean IsTeamWithoutSpawnRole(Boolean, Boolean) */

bool Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_IsTeamWithoutSpawnRole
               (ESWaitForPlayModeAvatar *this,bool teamsPresent,bool isTeamValid,MethodInfo *method)

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
      return bVar2 == 0;
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean ShouldEnterAsDefaultSpawnRole(Boolean, Boolean, Int32) */

bool Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_ShouldEnterAsDefaultSpawnRole
               (ESWaitForPlayModeAvatar *this,bool isSpawnRoleValid,bool teamsPresent,
               int32_t numberOfSpawnPoints,MethodInfo *method)

{
  if ((isSpawnRoleValid == 0) && (teamsPresent == 0)) {
    return numberOfSpawnPoints == 1;
  }
  return 0;
}


/* Boolean ShouldEnterAsSelectedSpawnRole(Boolean, Boolean) */

bool Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_ShouldEnterAsSelectedSpawnRole
               (ESWaitForPlayModeAvatar *this,bool isSpawnRoleValid,bool spawnRolesPresent,
               MethodInfo *method)

{
  return isSpawnRoleValid & spawnRolesPresent;
}


/* Void SpawnAsDefaultPlayModeSpawnRole() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

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

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
               (ESWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

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
  }
  else {
    pMVar3 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar3,spawnRoleId,(MethodInfo *)0x0);
    if (pMVar4 == (MVWorldObject *)0x0) {
code_?:
      ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
      unaff_ESI = (MVWorldObject__Class *)
                  MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (unaff_ESI != (MVWorldObject__Class *)0x0) {
        pIVar5 = (unaff_ESI->_0).image;
        pMVar2 = TypeInfo__MVLocalPlayerBuilder;
        if ((*(byte *)&pIVar5[4].assembly < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment) ||
           (*(MVLocalPlayerBuilder__Class **)
             ((pIVar5[2].typeCount - 4) +
             (uint)(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment * 4) !=
            TypeInfo__MVLocalPlayerBuilder)) goto code_?;
        uVar6 = (unaff_ESI->_1).thread_static_fields_size;
        uVar7 = (unaff_ESI->_1).flags;
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar8 != (MVLocalPlayer *)0x0) {
          iVar9 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar8,(MethodInfo *)0x0);
          unaff_ESI = (MVWorldObject__Class *)
                      MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (unaff_ESI != (MVWorldObject__Class *)0x0) {
            pIVar5 = (unaff_ESI->_0).image;
            pMVar2 = TypeInfo__MVLocalPlayerBuilder;
            if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
                 *(byte *)&pIVar5[4].assembly) &&
               (*(MVLocalPlayerBuilder__Class **)
                 ((pIVar5[2].typeCount - 4) +
                 (uint)(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment * 4) ==
                TypeInfo__MVLocalPlayerBuilder)) {
              (unaff_ESI->_1).thread_static_fields_size = uVar6;
              (unaff_ESI->_1).thread_static_fields_offset = iVar9;
              (unaff_ESI->_1).flags = uVar7;
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    unaff_ESI = pMVar4->klass;
    if (((unaff_ESI->_1).naturalAligment < (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment)
       || ((MVAvatarSpawnRoleCreator__Class *)
           (unaff_ESI->_1).typeHierarchy
           [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
           TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar3 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this = (ESWaitForPlayModeAvatar *)0x0;
    unaff_ESI = (MVWorldObject__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar3,spawnRoleId,(MethodInfo *)0x0);
    if (unaff_ESI == (MVWorldObject__Class *)0x0) goto code_?;
    pIVar5 = (unaff_ESI->_0).image;
    if ((*(byte *)&pIVar5[4].assembly < (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
       (*(MVAvatarSpawnRoleCreator__Class **)
         ((pIVar5[2].typeCount - 4) +
         (uint)(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment * 4) !=
        TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar10 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar10 == (PlayerPlanetData *)0x0) goto code_?;
    bVar11 = (pPVar10->fields).gamePassTier;
    GVar12 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                       ((MVAvatarSpawnRoleCreator *)unaff_ESI,(MethodInfo *)0x0);
    if (bVar11 < (byte)GVar12) goto code_?;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar8 == (MVLocalPlayer *)0x0) goto code_?;
    MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(pMVar8,spawnRoleId,(MethodInfo *)0x0);
    unaff_ESI = (MVWorldObject__Class *)
                MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (unaff_ESI == (MVWorldObject__Class *)0x0) goto code_?;
    pIVar5 = (unaff_ESI->_0).image;
    pMVar2 = TypeInfo__MVLocalPlayerBuilder;
    if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <= *(byte *)&pIVar5[4].assembly) &&
       (*(MVLocalPlayerBuilder__Class **)
         ((pIVar5[2].typeCount - 4) + (uint)(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment * 4
         ) == TypeInfo__MVLocalPlayerBuilder)) {
      uVar13 = (unaff_ESI->_1).thread_static_fields_size;
      uVar7 = (unaff_ESI->_1).flags;
      unaff_ESI = (MVWorldObject__Class *)
                  MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (unaff_ESI == (MVWorldObject__Class *)0x0) goto code_?;
      pIVar5 = (unaff_ESI->_0).image;
      pMVar2 = TypeInfo__MVLocalPlayerBuilder;
      if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <= *(byte *)&pIVar5[4].assembly) &&
         (*(MVLocalPlayerBuilder__Class **)
           ((pIVar5[2].typeCount - 4) +
           (uint)(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment * 4) ==
          TypeInfo__MVLocalPlayerBuilder)) {
        (unaff_ESI->_1).thread_static_fields_size = uVar13;
        (unaff_ESI->_1).thread_static_fields_offset = spawnRoleId;
        (unaff_ESI->_1).flags = uVar7;
        return;
      }
    }
  }
code_?:
  func_?(unaff_ESI,pMVar2);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SpawnRolesManagerOnOnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_SpawnRolesManagerOnOnSpawnRoleActivated
               (ESWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&
                    MethodInfo__ESWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_
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
               MethodInfo__ESWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_,
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


/* ESWaitForPlayModeAvatar() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar__ctor
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  (this->fields).selectedTeam = 5;
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar1;
  method_00 = (MethodInfo *)&(this->fields)._.tintedWo;
  func_?(method_00,pWVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields)._.logger = pIVar2;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

