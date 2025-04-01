
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
  pMVar2 = TypeInfo__MVLocalPlayerBuilder;
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar3) ||
       ((pMVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    id = pMVar1[1].monitor;
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
        pMVar2 = (MVLocalPlayerBuilder__Class *)(pMVar2->_0).namespaze;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar6 = (pMVar4->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
          iVar8 = MVTeamManager::MVTeamManager_TeamCount(pMVar6,(MethodInfo *)0x0);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar4 != (MVNetworkGame *)0x0) &&
             (pMVar6 = (pMVar4->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
            bVar9 = MVTeamManager::MVTeamManager_HasTeam
                              (pMVar6,(this->fields).selectedTeam,(MethodInfo *)0x0);
            bStack_10 = 0x77;
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar4 != (MVNetworkGame *)0x0) &&
               (pMVar5 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                   (pMVar4,(MethodInfo *)0x0),
               pMVar5 != (MVWorldObjectClientManager *)0x0)) {
              pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar5,id,(MethodInfo *)0x0);
              bVar3 = pMVar11 != (MVWorldObject *)0x0 || (int)pMVar2 < 1;
              if (bVar9 == 0 && 1 < iVar8 || iVar8 < 2) {
code_?:
                if (((bVar3 == 0) && (iVar8 < 2)) && (iVar7 == 1)) {
                  return 
                  ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_DefaultSpawnAsSpawnRole;
                }
                return ((bStack_10 & bVar3) != 0) +
                       ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsDefaultAvatar
                ;
              }
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar4 != (MVNetworkGame *)0x0) &&
                 (pMVar6 = (pMVar4->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
                bVar9 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                                  (pMVar6,(this->fields).selectedTeam,(MethodInfo *)0x0);
                bStack_10 = 0x77;
                if (bVar9 == 0) {
                  if (bVar3 == 0) {
                    bVar3 = -(char)((int)id >> 0x1f);
                    if (bVar3 == 1) {
                      bStack_10 = 0;
                    }
                  }
                  else {
                    bVar3 = 1;
                    bStack_10 = 0;
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
  pMVar1 = extraout_EDX;
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
    bVar4 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if ((pMVar3->klass->_1).naturalAligment < bVar4) {
      return 0;
    }
    if ((MVAvatarSpawnRoleCreator__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator) {
      return 0;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar2 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0)
       , pMVar2 != (MVWorldObjectClientManager *)0x0)) {
      this_00 = (MVAvatarSpawnRoleCreator *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar2,spawnRoleId,(MethodInfo *)0x0);
      if (this_00 == (MVAvatarSpawnRoleCreator *)0x0) {
        return 0;
      }
      bVar4 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
      if (((this_00->klass->_1).naturalAligment < bVar4) ||
         ((MVAvatarSpawnRoleCreator__Class *)(this_00->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar5 != (PlayerPlanetData *)0x0) {
        bVar4 = (pPVar5->fields).gamePassTier;
        GVar6 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                          (this_00,(MethodInfo *)0x0);
        if (bVar4 < (byte)GVar6) {
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
    unaff_EDI = (MVLocalPlayerBuilder__Class *)(pMVar1->fields)._.spawnRolesManager;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__ESWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_,
               (MethodInfo *)0x0);
    if (unaff_EDI != (MVLocalPlayerBuilder__Class *)0x0) {
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
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        unaff_EDI = TypeInfo__MVLocalPlayerBuilder;
        if (pMVar1 != (MVLocalPlayer *)0x0) {
          bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((bVar4 <= (pMVar1->klass->_1).naturalAligment) &&
             ((pMVar1->klass->_1).typeHierarchy[bVar4 - 1] ==
              (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
            spawnRoleId = pMVar1[1].monitor;
            ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
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
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    unaff_ESI = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
         ((pMVar2->klass->_1).typeHierarchy[bVar3 - 1] ==
          (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        spawnRoleId = pMVar2[1].monitor;
        ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2,unaff_ESI);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  else {
    bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((bVar2 <= (this_00->klass->_1).naturalAligment) &&
       ((this_00->klass->_1).typeHierarchy[bVar2 - 1] ==
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToDefaultPlayModeSpawnRole
                (this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(this_00,pMVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  pMVar2 = TypeInfo__MVLocalPlayerBuilder;
  if (pMVar1 == (MVLocalPlayer *)0x0) {
    func_?();
    pMVar1 = extraout_EDX;
  }
  else {
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((bVar3 <= (pMVar1->klass->_1).naturalAligment) &&
       ((pMVar1->klass->_1).typeHierarchy[bVar3 - 1] ==
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      spawnRoleId = pMVar1[1].monitor;
      ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(pMVar1,pMVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
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
  else {
    bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((bVar2 <= (this_00->klass->_1).naturalAligment) &&
       ((this_00->klass->_1).typeHierarchy[bVar2 - 1] ==
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToDefaultPlayModeSpawnRole
                (this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(this_00,pMVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar2,spawnRoleId,(MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObject *)0x0) {
        bVar4 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
        if ((bVar4 <= (pMVar3->klass->_1).naturalAligment) &&
           ((MVAvatarSpawnRoleCreator__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] ==
            TypeInfo__MVAvatarSpawnRoleCreator)) {
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar2 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                               (pMVar1,(MethodInfo *)0x0);
            if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
              this = (ESWaitForPlayModeAvatar *)0x0;
              this_00 = (MVAvatarSpawnRoleCreator__Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar2,spawnRoleId,(MethodInfo *)0x0);
              if (this_00 == (MVAvatarSpawnRoleCreator__Class *)0x0) goto code_?;
              pIVar5 = (this_00->_0).image;
              bVar4 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
              unaff_ESI = TypeInfo__MVAvatarSpawnRoleCreator;
              if ((*(byte *)&pIVar5[4].assembly < bVar4) ||
                 (*(MVAvatarSpawnRoleCreator__Class **)((pIVar5[2].typeCount - 4) + (uint)bVar4 * 4)
                  != TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
              unaff_ESI = this_00;
              if (pPVar6 != (PlayerPlanetData *)0x0) {
                bVar4 = (pPVar6->fields).gamePassTier;
                GVar7 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                                   ((MVAvatarSpawnRoleCreator *)this_00,(MethodInfo *)0x0);
                if (bVar4 < (byte)GVar7) goto code_?;
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar1 != (MVNetworkGame *)0x0) {
                  pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
                  if (pMVar8 != (MVLocalPlayer *)0x0) {
                    MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                              (pMVar8,spawnRoleId,(MethodInfo *)0x0);
                    this_00 = (MVAvatarSpawnRoleCreator__Class *)
                              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                        ((MethodInfo *)0x0);
                    unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)TypeInfo__MVLocalPlayerBuilder;
                    if (this_00 != (MVAvatarSpawnRoleCreator__Class *)0x0) {
                      pIVar5 = (this_00->_0).image;
                      bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                      if ((*(byte *)&pIVar5[4].assembly < bVar4) ||
                         (*(MVLocalPlayerBuilder__Class **)
                           ((pIVar5[2].typeCount - 4) + (uint)bVar4 * 4) !=
                          TypeInfo__MVLocalPlayerBuilder)) goto code_?;
                      uVar9 = (this_00->_1).thread_static_fields_size;
                      uVar10 = (this_00->_1).flags;
                      this_00 = (MVAvatarSpawnRoleCreator__Class *)
                                MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                          ((MethodInfo *)0x0);
                      unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)TypeInfo__MVLocalPlayerBuilder;
                      if (this_00 != (MVAvatarSpawnRoleCreator__Class *)0x0) {
                        pIVar5 = (this_00->_0).image;
                        bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                        if ((bVar4 <= *(byte *)&pIVar5[4].assembly) &&
                           (*(MVLocalPlayerBuilder__Class **)
                             ((pIVar5[2].typeCount - 4) + (uint)bVar4 * 4) ==
                            TypeInfo__MVLocalPlayerBuilder)) {
                          (this_00->_1).thread_static_fields_size = uVar9;
                          (this_00->_1).thread_static_fields_offset = spawnRoleId;
                          (this_00->_1).flags = uVar10;
                          return;
                        }
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
code_?:
      ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
      this_00 = (MVAvatarSpawnRoleCreator__Class *)
                MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)TypeInfo__MVLocalPlayerBuilder;
      if (this_00 != (MVAvatarSpawnRoleCreator__Class *)0x0) {
        pIVar5 = (this_00->_0).image;
        bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
        if ((*(byte *)&pIVar5[4].assembly < bVar4) ||
           (*(MVLocalPlayerBuilder__Class **)((pIVar5[2].typeCount - 4) + (uint)bVar4 * 4) !=
            TypeInfo__MVLocalPlayerBuilder)) goto code_?;
        uVar11 = (this_00->_1).thread_static_fields_size;
        uVar10 = (this_00->_1).flags;
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar8 != (MVLocalPlayer *)0x0) {
          iVar12 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar8,(MethodInfo *)0x0);
          this_00 = (MVAvatarSpawnRoleCreator__Class *)
                    MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          unaff_ESI = (MVAvatarSpawnRoleCreator__Class *)TypeInfo__MVLocalPlayerBuilder;
          if (this_00 != (MVAvatarSpawnRoleCreator__Class *)0x0) {
            pIVar5 = (this_00->_0).image;
            bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
            if ((bVar4 <= *(byte *)&pIVar5[4].assembly) &&
               (*(MVLocalPlayerBuilder__Class **)((pIVar5[2].typeCount - 4) + (uint)bVar4 * 4) ==
                TypeInfo__MVLocalPlayerBuilder)) {
              (this_00->_1).thread_static_fields_size = uVar11;
              (this_00->_1).thread_static_fields_offset = iVar12;
              (this_00->_1).flags = uVar10;
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  this_00 = extraout_EDX;
code_?:
  func_?(this_00,unaff_ESI);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  ppWVar2 = &(this->fields)._.tintedWo;
  *ppWVar2 = pWVar1;
  func_?(ppWVar2,&stack0xfffffffc,&UNK_?,ppWVar2,pWVar1);
  return;
}

