
/* ESWaitForPlayModeAvatar+EnterPlayFromEditSpawnState CalculateEnterPlayFromEditState() */

ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum
Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
ESWaitForPlayModeAvatar_CalculateEnterPlayFromEditState
          (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVLocalPlayerBuilder *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayerBuilder *)0x0) goto code_?;
  bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
  pMVar3 = (MVLocalPlayer__Class *)pMVar1->klass;
  bVar4 = (pMVar3->_1).naturalAligment;
  if ((bVar4 < bVar2) ||
     ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  pMVar6 = (MVLocalPlayerBuilder *)0x0;
  if (bVar5) {
    pMVar6 = pMVar1;
  }
  pMVar7 = TypeInfo__MVLocalPlayerBuilder;
  if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
  if ((bVar4 < bVar2) ||
     ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  pMVar6 = (MVLocalPlayerBuilder *)0x0;
  if (bVar5) {
    pMVar6 = pMVar1;
  }
  if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
  pMVar8 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                     ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)&stack0xffffffdc,pMVar6,
                      (MethodInfo *)0x0);
  id = pMVar8->selectedSpawnRoleCreator;
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar9 != (MVNetworkGame *)0x0) &&
     (pMVar10 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar9,(MethodInfo *)0x0),
     pMVar10 != (MVWorldObjectClientManager *)0x0)) {
    this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (pMVar10,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar9 != (MVNetworkGame *)0x0) &&
       ((pSVar11 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                             ((DayNightCycle *)pMVar9,(MethodInfo *)0x0), pSVar11 != (SkyParam *)0x0
        && (iVar12 = MVTeamManager::MVTeamManager_get_NumSpawnPoint
                               ((MVTeamManager *)pSVar11,(MethodInfo *)0x0),
           this_00 != (List_1_MVWorldObjectClient_ *)0x0)))) {
      pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                          );
      uVar14 = 0 < (int)pOVar13;
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (pSVar11 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)pMVar9,(MethodInfo *)0x0),
         pSVar11 != (SkyParam *)0x0)) {
        iVar15 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)pSVar11,(MethodInfo *)0x0);
        uVar16 = CONCAT11(uVar14,1 < iVar15);
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar9 != (MVNetworkGame *)0x0) &&
           (pSVar11 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                ((DayNightCycle *)pMVar9,(MethodInfo *)0x0),
           pSVar11 != (SkyParam *)0x0)) {
          bVar17 = MVTeamManager::MVTeamManager_HasTeam
                            ((MVTeamManager *)pSVar11,_UNK_?,(MethodInfo *)0x0);
          if (bVar17 == 0) {
            sVar18 = (ushort)(iVar15 < 2) << 8;
          }
          else {
            sVar18 = 0x100;
          }
          uVar19 = CONCAT22(uVar16,sVar18);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar9 != (MVNetworkGame *)0x0) &&
             (pMVar10 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                 (pMVar9,(MethodInfo *)0x0),
             pMVar10 != (MVWorldObjectClientManager *)0x0)) {
            pMVar20 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar10,id,(MethodInfo *)0x0);
            bVar5 = 0 >= (int)pOVar13;
            bVar2 = pMVar20 != (MVWorldObject *)0x0 || bVar5;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            cVar21 = (char)((uint)uVar19 >> 0x10);
            if ((cVar21 != '\0') && ((char)((uint)uVar19 >> 8) != '\0')) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar9 == (MVNetworkGame *)0x0) ||
                 (pSVar11 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                      ((DayNightCycle *)pMVar9,(MethodInfo *)0x0),
                 pSVar11 == (SkyParam *)0x0)) goto code_?;
              bVar17 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                                ((MVTeamManager *)pSVar11,_UNK_?,(MethodInfo *)0x0);
              cVar21 = (char)((uint)uVar19 >> 0x10);
              if (bVar17 == 0) {
                if (pMVar20 != (MVWorldObject *)0x0 || bVar5) {
                  cVar22 = '\0';
                  bVar2 = 1;
                }
                else if (-((int)~id >> 0x1f) == 0) {
                  cVar22 = '\0';
                  bVar2 = 1;
                }
                else {
                  cVar22 = (char)((uint)uVar19 >> 0x18);
                  bVar2 = (byte)-((int)~id >> 0x1f) ^ 1;
                }
                goto code_?;
              }
            }
            cVar22 = (char)((uint)uVar19 >> 0x18);
code_?:
            if (((bVar2 == 0) && (cVar21 == '\0')) && (iVar12 == 1)) {
              return 
              ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_DefaultSpawnAsSpawnRole;
            }
            cVar21 = '\0';
            if (bVar2 != 0) {
              cVar21 = cVar22;
            }
            return (cVar21 != '\0') +
                   ESWaitForPlayModeAvatar_EnterPlayFromEditSpawnState__Enum_SpawnAsDefaultAvatar;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pMVar1 = extraout_ECX;
  pMVar7 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar7);
  pcVar23 = (code *)swi(3);
  EVar24 = (*pcVar23)();
  return EVar24;
}


/* Boolean CanSpawnAsSelectedSpawnRole(Int32) */

bool Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_CanSpawnAsSelectedSpawnRole
               (ESWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
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
    if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
       ((MVAvatarSpawnRoleCreator__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVWorldObject *)0x0;
    if (bVar5) {
      pMVar6 = pMVar3;
    }
    if (pMVar6 == (MVWorldObject *)0x0) {
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar2 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0)
       , pMVar2 != (MVWorldObjectClientManager *)0x0)) {
      pMVar7 = (MVAvatarSpawnRoleCreator *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar2,spawnRoleId,(MethodInfo *)0x0);
      if (pMVar7 == (MVAvatarSpawnRoleCreator *)0x0) {
        return 0;
      }
      bVar4 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
      if (((pMVar7->klass->_1).naturalAligment < bVar4) ||
         ((MVAvatarSpawnRoleCreator__Class *)(pMVar7->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      this_00 = (MVAvatarSpawnRoleCreator *)0x0;
      if (bVar5) {
        this_00 = pMVar7;
      }
      if (this_00 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar8 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar8 != (PlayerPlanetData *)0x0) {
        bVar4 = (pPVar8->fields).gamePassTier;
        GVar9 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                           (this_00,(MethodInfo *)0x0);
        if (bVar4 < (byte)GVar9) {
          return 0;
        }
        return 1;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_Enter
               (ESWaitForPlayModeAvatar *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).defaultPlayModeSpawnRoleReady = 0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (MVLocalPlayer *)0x0) {
    this_01 = (SpawnRolesManager *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
              TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                        ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this_00,(MethodInfo *)0x0)
    ;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__ESWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    if (this_01 != (SpawnRolesManager *)0x0) {
      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                (this_01,(Action_1_Int32_ *)this_02,(MethodInfo *)0x0);
      enterSpawnState =
           ESWaitForPlayModeAvatar_CalculateEnterPlayFromEditState(this,(MethodInfo *)0x0);
      ESWaitForPlayModeAvatar_HandleEnterPlayModeFromEditSpawn
                (this,enterSpawnState,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_Execute
               (ESWaitForPlayModeAvatar *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).defaultPlayModeSpawnRoleReady != 0) {
    this = (ESWaitForPlayModeAvatar *)0x29;
    value = (Object *)func_?(TypeInfo__EditorEvent,&this);
    if (e == (EditorStateMachine *)0x0) {
      func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                          (this_01,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
      if (this_02 != (List_1_MVWorldObjectClient_ *)0x0) {
        this_03 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,0,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                            );
        if (this_03 != (Collection_1_VoxelHit_ *)0x0) {
          spawnRoleId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                        Collection_1_VoxelHit__get_Items(this_03,(MethodInfo *)0x0);
          ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
                    ((ESWaitForPlayModeAvatar *)&UNK_?,(int32_t)spawnRoleId,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((this_00 != (MVNetworkGame *)0x0) &&
         (this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (this_00,(MethodInfo *)0x0),
         this_01 != (MVWorldObjectClientManager *)0x0)) &&
        (this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                             (this_01,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0
                             ), this_02 != (List_1_MVWorldObjectClient_ *)0x0)) &&
       (this_03 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,0,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                            ), this_03 != (Collection_1_VoxelHit_ *)0x0)) {
      spawnRoleId_00 =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items(this_03,(MethodInfo *)0x0);
      ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
                (this,(int32_t)spawnRoleId_00,(MethodInfo *)0x0);
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = (MVLocalPlayerBuilder *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayerBuilder *)0x0) {
      bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      pMVar3 = (MVLocalPlayer__Class *)pMVar1->klass;
      bVar4 = (pMVar3->_1).naturalAligment;
      if ((bVar4 < bVar2) ||
         ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVLocalPlayerBuilder *)0x0;
      if (bVar5) {
        pMVar6 = pMVar1;
      }
      if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
        if ((bVar4 < bVar2) ||
           ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder))
        {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pMVar6 = (MVLocalPlayerBuilder *)0x0;
        if (bVar5) {
          pMVar6 = pMVar1;
        }
        if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
          pMVar7 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                             ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)&stack0xffffffe4,
                              pMVar6,(MethodInfo *)0x0);
          spawnRoleId = pMVar7->selectedSpawnRoleCreator;
          ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  pMVar1 = extraout_ECX;
code_?:
  func_?(pMVar1);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleSpawnAsDefaultPlayModeSpawnRole() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_HandleSpawnAsDefaultPlayModeSpawnRole
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVLocalPlayerBuilder *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayerBuilder *)0x0) {
    func_?(0);
    pMVar1 = extraout_ECX;
    pMVar2 = extraout_EDX;
  }
  else {
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    pMVar4 = (MVLocalPlayer__Class *)pMVar1->klass;
    bVar5 = (pMVar4->_1).naturalAligment;
    if ((bVar5 < bVar3) ||
       ((pMVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pMVar7 = (MVLocalPlayerBuilder *)0x0;
    if (bVar6) {
      pMVar7 = pMVar1;
    }
    pMVar2 = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
      if ((bVar5 < bVar3) ||
         ((pMVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pMVar7 = (MVLocalPlayerBuilder *)0x0;
      if (bVar6) {
        pMVar7 = pMVar1;
      }
      if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
        MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToDefaultPlayModeSpawnRole
                  (pMVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(pMVar1,pMVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HanldeSpawnAsSelectedSpawnRole() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_HanldeSpawnAsSelectedSpawnRole
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVLocalPlayerBuilder *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayerBuilder *)0x0) {
    func_?();
    pMVar1 = extraout_ECX;
  }
  else {
    bVar2 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    pMVar3 = (MVLocalPlayer__Class *)pMVar1->klass;
    bVar4 = (pMVar3->_1).naturalAligment;
    if ((bVar4 < bVar2) ||
       ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
      if ((bVar4 < bVar2) ||
         ((pMVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVLocalPlayerBuilder *)0x0;
      if (bVar5) {
        pMVar6 = pMVar1;
      }
      if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
        pMVar7 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                           ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)&stack0xffffffe0,pMVar6
                            ,(MethodInfo *)0x0);
        spawnRoleId = pMVar7->selectedSpawnRoleCreator;
        ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(pMVar1);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  return (byte)~(byte)((uint)selectedSpawnRoleCreatorId >> 0x18) >> 7;
}


/* Boolean IsTeamWithoutSpawnRole(Boolean, Boolean) */

bool Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_IsTeamWithoutSpawnRole
               (ESWaitForPlayModeAvatar *this,bool teamsPresent,bool isTeamValid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((teamsPresent != 0) && (isTeamValid != 0)) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)this_00,(MethodInfo *)0x0);
      if (this_01 != (SkyParam *)0x0) {
        bVar1 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                          ((MVTeamManager *)this_01,(this->fields).selectedTeam,(MethodInfo *)0x0);
        return bVar1 == 0;
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  return 0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVLocalPlayerBuilder *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayerBuilder *)0x0) {
    func_?(0);
    pMVar1 = extraout_ECX;
    pMVar2 = extraout_EDX;
  }
  else {
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    pMVar4 = (MVLocalPlayer__Class *)pMVar1->klass;
    bVar5 = (pMVar4->_1).naturalAligment;
    if ((bVar5 < bVar3) ||
       ((pMVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pMVar7 = (MVLocalPlayerBuilder *)0x0;
    if (bVar6) {
      pMVar7 = pMVar1;
    }
    pMVar2 = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
      if ((bVar5 < bVar3) ||
         ((pMVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pMVar7 = (MVLocalPlayerBuilder *)0x0;
      if (bVar6) {
        pMVar7 = pMVar1;
      }
      if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
        MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToDefaultPlayModeSpawnRole
                  (pMVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(pMVar1,pMVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SpawnAsSelectedSpawnRole(Int32) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar_SpawnAsSelectedSpawnRole
               (ESWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = ESWaitForPlayModeAvatar_CanSpawnAsSelectedSpawnRole(this,spawnRoleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    ESWaitForPlayModeAvatar_SpawnAsDefaultPlayModeSpawnRole(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = (MVLocalPlayerBuilder *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar2 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar3 = (MVLocalPlayer__Class *)pMVar2->klass;
    bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    bVar5 = (pMVar3->_1).naturalAligment;
    if ((bVar5 < bVar4) ||
       ((pMVar3->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pMVar7 = (MVLocalPlayerBuilder *)0x0;
    if (bVar6) {
      pMVar7 = pMVar2;
    }
    if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
      if ((bVar5 < bVar4) ||
         ((pMVar3->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pMVar7 = (MVLocalPlayerBuilder *)0x0;
      if (bVar6) {
        pMVar7 = pMVar2;
      }
      if (pMVar7 == (MVLocalPlayerBuilder *)0x0) goto code_?;
      pMVar8 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                          ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)&stack0xffffffdc,pMVar7
                           ,(MethodInfo *)0x0);
      uVar9 = pMVar8->selectedTeam;
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar10 == (MVLocalPlayer *)0x0) goto code_?;
      iVar11 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar10,(MethodInfo *)0x0);
      iVar12 = 0;
      uVar13 = CONCAT44(iVar11,uVar9);
      pMVar2 = (MVLocalPlayerBuilder *)
               MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar2 == (MVLocalPlayerBuilder *)0x0) goto code_?;
      pMVar3 = (MVLocalPlayer__Class *)pMVar2->klass;
      bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
      bVar5 = (pMVar3->_1).naturalAligment;
      if ((bVar5 < bVar4) ||
         ((pMVar3->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pMVar7 = (MVLocalPlayerBuilder *)0x0;
      if (bVar6) {
        pMVar7 = pMVar2;
      }
      if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
        if ((bVar5 < bVar4) ||
           ((pMVar3->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder))
        {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pMVar7 = (MVLocalPlayerBuilder *)0x0;
        if (bVar6) {
          pMVar7 = pMVar2;
        }
        if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
          value.previousSpawnRoleId = iVar12;
          value.selectedTeam = (int)uVar13;
          value.selectedSpawnRoleCreator = (int)((ulonglong)uVar13 >> 0x20);
          MVLocalPlayerBuilder::MVLocalPlayerBuilder_set_EnterPlayStateData
                    (pMVar7,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (pMVar10 != (MVLocalPlayer *)0x0) {
        MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(pMVar10,spawnRoleId,(MethodInfo *)0x0);
        pMVar2 = (MVLocalPlayerBuilder *)
                 MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar2 != (MVLocalPlayerBuilder *)0x0) {
          pMVar3 = (MVLocalPlayer__Class *)pMVar2->klass;
          bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if (((pMVar3->_1).naturalAligment < bVar4) ||
             (bVar6 = true,
             (pMVar3->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)
             ) {
            bVar6 = false;
          }
          pMVar7 = (MVLocalPlayerBuilder *)0x0;
          if (bVar6) {
            pMVar7 = pMVar2;
          }
          if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
            if (((pMVar3->_1).naturalAligment < bVar4) ||
               ((pMVar3->_1).typeHierarchy[bVar4 - 1] !=
                (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            pMVar7 = (MVLocalPlayerBuilder *)0x0;
            if (bVar6) {
              pMVar7 = pMVar2;
            }
            if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
              pMVar8 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                                  ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)&stack0xffffffdc
                                   ,pMVar7,(MethodInfo *)0x0);
              uVar14 = pMVar8->selectedTeam;
              iVar11 = pMVar8->previousSpawnRoleId;
              uVar13 = CONCAT44(&UNK_?,uVar14);
              pMVar2 = (MVLocalPlayerBuilder *)
                       MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0)
              ;
              if (pMVar2 != (MVLocalPlayerBuilder *)0x0) {
                pMVar3 = (MVLocalPlayer__Class *)pMVar2->klass;
                bVar4 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                bVar5 = (pMVar3->_1).naturalAligment;
                if ((bVar5 < bVar4) ||
                   ((pMVar3->_1).typeHierarchy[bVar4 - 1] !=
                    (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                pMVar7 = (MVLocalPlayerBuilder *)0x0;
                if (bVar6) {
                  pMVar7 = pMVar2;
                }
                if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
                  if ((bVar5 < bVar4) ||
                     ((pMVar3->_1).typeHierarchy[bVar4 - 1] !=
                      (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  pMVar7 = (MVLocalPlayerBuilder *)0x0;
                  if (bVar6) {
                    pMVar7 = pMVar2;
                  }
                  if (pMVar7 != (MVLocalPlayerBuilder *)0x0) {
                    value_00.previousSpawnRoleId = iVar11;
                    value_00.selectedTeam = (int)uVar13;
                    value_00.selectedSpawnRoleCreator = (int)((ulonglong)uVar13 >> 0x20);
                    MVLocalPlayerBuilder::MVLocalPlayerBuilder_set_EnterPlayStateData
                              (pMVar7,value_00,(MethodInfo *)0x0);
                    return;
                  }
                }
                goto code_?;
              }
              goto code_?;
            }
          }
          goto code_?;
        }
      }
    }
code_?:
    func_?();
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SpawnRolesManagerOnOnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::
     ESWaitForPlayModeAvatar_SpawnRolesManagerOnOnSpawnRoleActivated
               (ESWaitForPlayModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (MVLocalPlayer *)0x0) {
    this_01 = (SpawnRolesManager *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
              TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                        ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this_00,(MethodInfo *)0x0)
    ;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__ESWaitForPlayModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    if (this_01 != (SpawnRolesManager *)0x0) {
      SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                (this_01,(Action_1_Int32_ *)this_02,(MethodInfo *)0x0);
      (this->fields).defaultPlayModeSpawnRoleReady = 1;
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ESWaitForPlayModeAvatar() */

void Assembly-CSharp.dll::ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar__ctor
               (ESWaitForPlayModeAvatar *this,MethodInfo *method)

{
  (this->fields).selectedTeam = 5;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields)._.logger = pIVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

