
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
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar3) ||
       ((pMVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    lVar4._0_4_ = pMVar1[1].klass;
    lVar4._4_4_ = pMVar1[1].monitor;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (pMVar6 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar5,(MethodInfo *)0x0)
       , pMVar6 != (MVWorldObjectClientManager *)0x0)) {
      pMVar2 = (MVLocalPlayerBuilder__Class *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                         (pMVar6,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar5 != (MVNetworkGame *)0x0) &&
          (pMVar7 = (pMVar5->fields).teamManager, pMVar7 != (MVTeamManager *)0x0)) &&
         (iVar8 = MVTeamManager::MVTeamManager_get_NumSpawnPoint(pMVar7,(MethodInfo *)0x0),
         pMVar2 != (MVLocalPlayerBuilder__Class *)0x0)) {
        pMVar2 = (MVLocalPlayerBuilder__Class *)(pMVar2->_0).namespaze;
        sVar9 = (ushort)(0 < (int)pMVar2) << 8;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (pMVar7 = (pMVar5->fields).teamManager, pMVar7 != (MVTeamManager *)0x0)) {
          iVar10 = MVTeamManager::MVTeamManager_TeamCount(pMVar7,(MethodInfo *)0x0);
          uVar11 = (uint)CONCAT12(1 < iVar10,sVar9);
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar5 != (MVNetworkGame *)0x0) &&
             (pMVar7 = (pMVar5->fields).teamManager, pMVar7 != (MVTeamManager *)0x0)) {
            bVar12 = MVTeamManager::MVTeamManager_HasTeam(pMVar7,MRam00000014,(MethodInfo *)0x0);
            if (bVar12 == 0) {
              uVar13 = CONCAT13(iVar10 < 2,(int3)uVar11);
            }
            else {
              uVar13 = CONCAT13(1,(int3)uVar11);
            }
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar5 != (MVNetworkGame *)0x0) &&
               (pMVar6 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                   (pMVar5,(MethodInfo *)0x0),
               pMVar6 != (MVWorldObjectClientManager *)0x0)) {
              pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar6,lVar4._4_4_,(MethodInfo *)0x0);
              bVar15 = pMVar14 != (MVWorldObject *)0x0 || (int)pMVar2 < 1;
              if ((byte)((byte)((uint)uVar13 >> 0x18) & (byte)((uint)uVar13 >> 0x10)) == 0) {
code_?:
                if (pMVar14 != (MVWorldObject *)0x0 || (int)pMVar2 < 1) goto code_?;
              }
              else {
                pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar5 == (MVNetworkGame *)0x0) ||
                   (pMVar7 = (pMVar5->fields).teamManager, pMVar7 == (MVTeamManager *)0x0))
                goto code_?;
                bVar12 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                                  (pMVar7,MRam00000014,(MethodInfo *)0x0);
                if (bVar12 != 0) goto code_?;
                if (bVar15) {
                  return 
                  PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar
                  ;
                }
                if (lVar4 < 0) {
                  return 
                  PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar
                  ;
                }
              }
              if (((char)((uint)uVar13 >> 0x10) == '\0') && (iVar8 == 1)) {
                return 
                PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_DefaultSpawnAsSpawnRole
                ;
              }
code_?:
              if (((byte)((uint)uVar13 >> 8) & bVar15) == 0) {
                return 
                PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsDefaultAvatar;
              }
              return 
              PMOWaitForPlayModeAvatar_EnterPlayFromObserveSpawnState__Enum_SpawnAsSelectedSpawnRole
              ;
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
  pcVar16 = (code *)swi(3);
  PVar17 = (*pcVar16)();
  return PVar17;
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
      this_02 = (MVAvatarSpawnRoleCreator *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,spawnRoleId,(MethodInfo *)0x0);
      if (this_02 != (MVAvatarSpawnRoleCreator *)0x0) {
        bVar1 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
        if ((bVar1 <= (this_02->klass->_1).naturalAligment) &&
           ((MVAvatarSpawnRoleCreator__Class *)(this_02->klass->_1).typeHierarchy[bVar1 - 1] ==
            TypeInfo__MVAvatarSpawnRoleCreator)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar2 != (PlayerPlanetData *)0x0) {
            bVar1 = (pPVar2->fields).gamePassTier;
            GVar3 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                              (this_02,(MethodInfo *)0x0);
            return (byte)GVar3 <= bVar1;
          }
          goto code_?;
        }
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
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
          bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((bVar4 <= (pMVar1->klass->_1).naturalAligment) &&
             ((pMVar1->klass->_1).typeHierarchy[bVar4 - 1] ==
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
      bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
         ((pMVar2->klass->_1).typeHierarchy[bVar3 - 1] ==
          (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        spawnRoleId = pMVar2[1].monitor;
        PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
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
  else {
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if ((bVar3 <= (pMVar1->klass->_1).naturalAligment) &&
       ((pMVar1->klass->_1).typeHierarchy[bVar3 - 1] ==
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      spawnRoleId = pMVar1[1].monitor;
      PMOWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(pMVar1,pMVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      unaff_ESI = (MVAvatarSpawnRoleCreator *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_00,spawnRoleId,(MethodInfo *)0x0);
      if (unaff_ESI != (MVAvatarSpawnRoleCreator *)0x0) {
        bVar2 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
        if ((bVar2 <= (unaff_ESI->klass->_1).naturalAligment) &&
           ((MVAvatarSpawnRoleCreator__Class *)(unaff_ESI->klass->_1).typeHierarchy[bVar2 - 1] ==
            TypeInfo__MVAvatarSpawnRoleCreator)) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__GamePassesManager);
            cRam_? = '\x01';
          }
          pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar3 != (PlayerPlanetData *)0x0) {
            bVar2 = (pPVar3->fields).gamePassTier;
            GVar4 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                              (unaff_ESI,(MethodInfo *)0x0);
            if (bVar2 < (byte)GVar4) goto code_?;
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar1 != (MVNetworkGame *)0x0) {
              pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
              if (pMVar5 != (MVLocalPlayer *)0x0) {
                MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(pMVar5,spawnRoleId,(MethodInfo *)0x0);
                pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                   ((MethodInfo *)0x0);
                unaff_ESI = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
                if (pMVar5 != (MVLocalPlayer *)0x0) {
                  bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                  pMVar6 = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
                  if (((pMVar5->klass->_1).naturalAligment < bVar2) ||
                     ((pMVar5->klass->_1).typeHierarchy[bVar2 - 1] !=
                      (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
                  uVar7 = pMVar5[1].klass;
                  iVar8 = pMVar5[1].fields._.checkpointWOID;
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                     ((MethodInfo *)0x0);
                  unaff_ESI = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
                  if (pMVar5 != (MVLocalPlayer *)0x0) {
                    bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                    pMVar6 = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
                    if ((bVar2 <= (pMVar5->klass->_1).naturalAligment) &&
                       ((pMVar5->klass->_1).typeHierarchy[bVar2 - 1] ==
                        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
                      pMVar5[1].klass = (MVLocalPlayer__Class *)uVar7;
                      pMVar5[1].monitor = (MonitorData *)spawnRoleId;
                      pMVar5[1].fields._.checkpointWOID = iVar8;
                      return;
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
code_?:
      PMOWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      unaff_ESI = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
      if (pMVar5 != (MVLocalPlayer *)0x0) {
        bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
        pMVar6 = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
        if (((pMVar5->klass->_1).naturalAligment < bVar2) ||
           ((pMVar5->klass->_1).typeHierarchy[bVar2 - 1] !=
            (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
        uVar9 = pMVar5[1].klass;
        iVar8 = pMVar5[1].fields._.checkpointWOID;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar5 != (MVLocalPlayer *)0x0) {
          iVar10 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar5,(MethodInfo *)0x0);
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          unaff_ESI = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
          if (pMVar5 != (MVLocalPlayer *)0x0) {
            bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
            pMVar6 = (MVAvatarSpawnRoleCreator *)TypeInfo__MVLocalPlayerBuilder;
            if ((bVar2 <= (pMVar5->klass->_1).naturalAligment) &&
               ((pMVar5->klass->_1).typeHierarchy[bVar2 - 1] ==
                (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
              pMVar5[1].klass = (MVLocalPlayer__Class *)uVar9;
              pMVar5[1].monitor = (MonitorData *)iVar10;
              pMVar5[1].fields._.checkpointWOID = iVar8;
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
  pMVar5 = extraout_EDX;
  pMVar6 = unaff_ESI;
code_?:
  func_?(pMVar5,pMVar6);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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

