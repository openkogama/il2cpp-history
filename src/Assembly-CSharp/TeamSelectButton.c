
/* Void Initialize(TeamData, UnityAction`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::TeamSelectButton::TeamSelectButton_Initialize
               (TeamSelectButton *this,TeamData *teamData,
               UnityAction_1_MV_WorldObject_MVTeam_ *OnTeamSelected,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  iStack_7 = 0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_9._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_9._4_4_ = (MonitorData *)0x0;
  auStack_9._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_9._12_4_ = 0;
  auStack_9._16_4_ = (Object *)0x0;
  func_?();
  (this->fields).OnTeamSelected = OnTeamSelected;
  pIVar10 = (this->fields).buttonImage;
  (this->fields).teamData = teamData;
  puStack_11 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (teamData != (TeamData *)0x0) {
    team = (teamData->fields).team;
    puStack_11 = (undefined4 *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_11 = (undefined4 *)&stack0xffffffa0, puStack_4 = &stack0xffffffa0,
       (TypeInfo__Styles->_1).cctor_started == 0)) {
      puStack_11 = (undefined4 *)&stack0xffffffa0;
      puStack_4 = &stack0xffffffa0;
      func_?(TypeInfo__Styles);
    }
    pCVar12 = Styles::Styles_GetTeamColor(&CStack_13,team,0,(MethodInfo *)0x0);
    if (pIVar10 != (Image *)0x0) {
      auStack_9._0_4_ = (pIVar10->klass->vtable).get_raycastTarget.methodPtr;
      pMVar14 = (MethodInfo *)pCVar12->b;
      (*(code *)(pIVar10->klass->vtable).set_color.method)(pIVar10,pCVar12->r);
      pTVar15 = (this->fields).teamName;
      if (pTVar15 != (Text *)0x0) {
        (*(code *)(pTVar15->klass->vtable).set_text.method)
                  (pTVar15,(teamData->fields).representedName,
                   (pTVar15->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        pTVar15 = (this->fields).playerCountText;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar16 != (MVNetworkGame *)0x0) &&
           (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                ((DayNightCycle *)pMVar16,(MethodInfo *)0x0),
           this_01 != (SkyParam *)0x0)) {
          iStack_6 = MVTeamManager::MVTeamManager_GetNoOfPlayersInTeam
                                ((MVTeamManager *)this_01,(teamData->fields).team,pMVar14);
          uVar17 = func_?();
          if (pTVar15 != (Text *)0x0) {
            pMVar14 = (MethodInfo *)&UNK_?;
            (*(code *)(pTVar15->klass->vtable).set_text.method)
                      (pTVar15,uVar17,
                       (pTVar15->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar16 != (MVNetworkGame *)0x0) &&
                (this_02 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                     ((CloudyThemeBase *)pMVar16,in_stack_18),
                this_02 != (ThemeSkybox *)0x0)) &&
               (this_03 = FriendList::FriendList_GetOnlineFriends((FriendList *)this_02,pMVar14),
               this_03 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0)) {
              pDVar19 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[WinningConditionType,System::Object]::
                       Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                                 ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                                   *)(auStack_9 + 0x14),
                                  (Dictionary_2_WinningConditionType_System_Object_ *)this_03,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                                 );
              auStack_9._0_4_ = pDVar19->dictionary;
              auStack_9._4_4_ = pDVar19->next;
              auStack_9._8_4_ = pDVar19->stamp;
              auStack_9._12_4_ = (pDVar19->current).key;
              auStack_9._16_4_ = (pDVar19->current).value;
              uStack_1 = 0;
              while (cVar20 = func_?(), cVar20 != '\0') {
                KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                      ((LevelRewardsManager *)auStack_9,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                                      );
                auStack_9._0_4_ =
                     MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
                ;
                this_04 = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
                if (this_04 == (KogamaSettingNumericBase_1_System_Single_ *)0x0)
                goto code_?;
                pIVar21 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                          KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                    (this_04,(MethodInfo *)0x0);
                if (pIVar21 == (IKogamaSetting *)(teamData->fields).team) {
                  iStack_7 = iStack_7 + 1;
                }
              }
              *puStack_11 = 0xc5;
              uStack_1 = 0xffffffff;
              func_?();
              teamData = (TeamData *)(this->fields).friendCountText;
              uVar17 = func_?();
              if ((Text *)teamData != (Text *)0x0) {
                (*(code *)(((Text *)teamData)->klass->vtable).set_text.method)
                          (teamData,uVar17,
                           (((Text *)teamData)->klass->vtable).CalculateLayoutInputHorizontal_1.
                           methodPtr);
                if (iStack_7 == 0) {
                  this_00 = (this->fields).friendIcon;
                  if (this_00 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_00,0,(MethodInfo *)0x0);
                }
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?(teamData);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::TeamSelectButton::TeamSelectButton_OnPointerDown
               (TeamSelectButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (eventData != (PointerEventData *)0x0) {
    pHVar1 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                       ((MVSentryGun *)eventData,(MethodInfo *)0x0);
    if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0)) {
      pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,(MethodInfo *)0x0);
      pTVar5 = (this->fields).teamData;
      if (pTVar5 != (TeamData *)0x0) {
        if (pIVar4 != (IKogamaSetting *)(pTVar5->fields).team) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
          pTVar5 = (this->fields).teamData;
          if ((pTVar5 == (TeamData *)0x0) || (this_01 == (SkyParam *)0x0)) goto code_?;
          bVar6 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                            ((MVTeamManager *)this_01,(pTVar5->fields).team,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            pTVar5 = (this->fields).teamData;
            if ((pTVar5 == (TeamData *)0x0) || (this_02 == (MVNetworkGame_OperationRequests *)0x0))
            goto code_?;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                      (this_02,(pTVar5->fields).team,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
            this_03 = (GameStatCounterManager *)
                      DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar2 == (MVNetworkGame *)0x0) ||
               (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
               pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
            actorNr = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar3,
                                 (MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar2 == (MVNetworkGame *)0x0) ||
               ((pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
                pMVar3 == (MVLocalPlayer *)0x0 ||
                (pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                          KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                    ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,
                                     (MethodInfo *)0x0), this_03 == (GameStatCounterManager *)0x0)))
               ) goto code_?;
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                      (this_03,(int32_t)actorNr,(MVTeam__Enum)pIVar4,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar2 == (MVNetworkGame *)0x0) ||
               (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
               pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
            MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)pMVar3,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
            pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
            pTVar5 = (this->fields).teamData;
            if ((pTVar5 == (TeamData *)0x0) || (pMVar3 == (MVLocalPlayer *)0x0))
            goto code_?;
            UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
            ObjectPool_1_System_Object__set_countAll
                      ((ObjectPool_1_System_Object_ *)pMVar3,(pTVar5->fields).team,(MethodInfo *)0x0
                      );
          }
        }
        pTVar5 = (this->fields).teamData;
        if ((pTVar5 != (TeamData *)0x0) &&
           (this_00 = (Action_1_UIPushOption_ *)(this->fields).OnTeamSelected,
           this_00 != (Action_1_UIPushOption_ *)0x0)) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_00,(pTVar5->fields).team,
                     MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>__Invoke_MV__WorldObject__MVTeam_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::TeamSelectButton::TeamSelectButton_StartPlaying
               (TeamSelectButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimePressPlayController);
  }
  bVar1 = FirstTimePressPlayController::FirstTimePressPlayController_get_HaveBeenPressed
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
      func_?();
    }
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar2 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = (PrefabPool *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((this_00 != (PrefabPool *)0x0) &&
       (this_01 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0),
       this_01 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0)) {
      a = (SpawnRoleVariable_1_System_Int32_ *)
          System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    (this_01,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar3 != (MVLocalPlayer *)0x0) {
        iVar4 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar3,(MethodInfo *)0x0);
        bVar1 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[System::Int32]::
                SpawnRoleVariable_1_System_Int32__op_Inequality
                          (a,iVar4,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                          );
        if (bVar1 == 0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((this_02 != (MVLocalPlayer *)0x0) &&
           (iVar4 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_02,(MethodInfo *)0x0),
           pMVar3 != (MVLocalPlayer *)0x0)) {
          MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(pMVar3,iVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

