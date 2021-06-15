
/* String GenerateNotificationText(Int32, GameStatCounterType, Int32) */

String * Assembly-CSharp.dll::WinningConditionNotificationManager::
         WinningConditionNotificationManager_GenerateNotificationText
                   (int32_t actorNumber,GameStatCounterType__Enum counterType,int32_t scoreLeftToWin
                   ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  switch(counterType & 0xff) {
  case GameStatCounterType__Enum_Kill:
  case GameStatCounterType__Enum_Collectible:
  case GameStatCounterType__Enum_OculusKill:
    pSVar1 = (String *)func_?(&scoreLeftToWin,0);
    return pSVar1;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    pSVar1 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (scoreLeftToWin,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* String GetContestantName(Int32) */

String * Assembly-CSharp.dll::WinningConditionNotificationManager::
         WinningConditionNotificationManager_GetContestantName
                   (int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVAvatar *)0x0) {
    this_00 = MVAvatar::MVAvatar_get_Shield(this,(MethodInfo *)0x0);
    if (this_00 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      this_03 = (GamePointGainEffect__Class *)&stack0xfffffff8;
      bVar2 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                        ((MVPlayerContainer *)this_00,actorNumber,(MVPlayer **)this_03,
                         (MethodInfo *)0x0);
      if (bVar2 == 0) {
        return pSVar1;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        pSVar4 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar3,(MethodInfo *)0x0);
        if (pSVar4 != (SkyParam *)0x0) {
          this_01 = MVTeamManager::MVTeamManager_GetTeamList
                              ((MVTeamManager *)pSVar4,(MethodInfo *)0x0);
          if (this_01 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
            pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                               );
            if ((int)pOVar5 < 2) {
              if (this_03 != (GamePointGainEffect__Class *)0x0) {
                iVar6 = GamePointGainEffect::GamePointGainEffect_get_ID
                                  ((GamePointGainEffect *)this_03,(MethodInfo *)0x0);
                if (iVar6 != 0) {
                  return *(String **)(iVar6 + 0xc);
                }
              }
            }
            else {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar3 != (MVNetworkGame *)0x0) {
                pSVar4 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                   ((DayNightCycle *)pMVar3,(MethodInfo *)0x0);
                if (pSVar4 != (SkyParam *)0x0) {
                  this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
                            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       pSVar4,(MethodInfo *)0x0);
                  if (this_03 != (GamePointGainEffect__Class *)0x0) {
                    key = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                          KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                    ((KogamaSettingNumericBase_1_System_Single_ *)this_03,
                                     (MethodInfo *)0x0);
                    if (this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0) {
                      pSVar1 = (String *)
                               mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                               WorldObject::MVTeam,System::Object]::
                               Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                         (this_02,(MVTeam__Enum)key,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                         );
                      return pSVar1;
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
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar7)();
  return pSVar1;
}


/* String GetPlayerName(Int32) */

String * Assembly-CSharp.dll::WinningConditionNotificationManager::
         WinningConditionNotificationManager_GetPlayerName(int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVAvatar *)0x0) {
    this_00 = MVAvatar::MVAvatar_get_Shield(this,(MethodInfo *)0x0);
    if (this_00 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      this_01 = (GamePointGainEffect__Class *)&stack0xfffffff8;
      bVar2 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                        ((MVPlayerContainer *)this_00,actorNumber,(MVPlayer **)this_01,
                         (MethodInfo *)0x0);
      if (bVar2 == 0) {
        return pSVar1;
      }
      if (this_01 != (GamePointGainEffect__Class *)0x0) {
        iVar3 = GamePointGainEffect::GamePointGainEffect_get_ID
                          ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
        if (iVar3 != 0) {
          return *(String **)(iVar3 + 0xc);
        }
      }
    }
  }
  uStack4 = 0;
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* Int32 GetPlayerRanking(GameStatCounterType, Int32, Int32) */

int32_t Assembly-CSharp.dll::WinningConditionNotificationManager::
        WinningConditionNotificationManager_GetPlayerRanking
                  (GameStatCounterType__Enum statType,int32_t actorNumber,int32_t score,
                  MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc4;
  puVar5 = &stack0xffffffc4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  iVar7 = 1;
  iStack_8 = 1;
  puStack_9 = (undefined4 *)&stack0xffffffc4;
  puStack_4 = &stack0xffffffc4;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_9 = (undefined4 *)&stack0xffffffc4, puStack_4 = &stack0xffffffc4,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_9 = (undefined4 *)&stack0xffffffc4;
    puStack_4 = &stack0xffffffc4;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this != (MVAvatar *)0x0) &&
     (this_00 = MVAvatar::MVAvatar_get_Shield(this,(MethodInfo *)0x0),
     this_00 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pIVar10 = MVPlayerContainer::MVPlayerContainer_GetEnumerator
                       ((MVPlayerContainer *)this_00,(MethodInfo *)0x0);
    uStack_1 = 0;
    pIStack_11 = pIVar10;
    while (pIVar10 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
      cVar12 = func_?(1,TypeInfo__System__Collections__IEnumerator);
      if (cVar12 == '\0') {
        *puStack_9 = 0x96;
        uStack_1 = 0xffffffff;
        if (pIVar10 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        *unaff_FS_OFFSET = uStack_3;
        return iVar7;
      }
      uStack_6 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
                                 );
      iVar13 = func_?(&uStack_6);
      if (iVar13 != 0) {
        method_00 = (MethodInfo *)&UNK_?;
        this_01 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?(&uStack_6);
        if (this_01 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) break;
        pSStack_14 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                     NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_01,method_00);
        if (pSStack_14 != (String *)actorNumber) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_02 == (MVNetworkGame *)0x0) break;
          unaff_EBX = (GameStatCounterManager *)
                      DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                ((DayNightCycle *)this_02,(MethodInfo *)0x0);
          this_03 = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
          if ((this_03 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) ||
             (in_stack_15 =
                   (MethodInfo *)
                   MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             (this_03,in_stack_15), unaff_EBX == (GameStatCounterManager *)0x0
             )) break;
          iVar16 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                            (unaff_EBX,statType,(MVTeam__Enum)in_stack_15,(int32_t)pSStack_14,
                             in_stack_17);
          bVar18 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                            (iVar16,score,statType,(MethodInfo *)0x0);
          if (bVar18 != 0) {
            iVar7 = iVar7 + 1;
            iStack_8 = iVar7;
          }
        }
      }
    }
  }
  func_?();
  func_?(unaff_EBX,0);
  pcVar19 = (code *)swi(3);
  iVar16 = (*pcVar19)();
  return iVar16;
}


/* Int32 GetScoreLeftToWin(GameStatCounterType, Int32) */

int32_t Assembly-CSharp.dll::WinningConditionNotificationManager::
        WinningConditionNotificationManager_GetScoreLeftToWin
                  (GameStatCounterType__Enum counterType,int32_t scoreCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(counterType & 0xff) {
  case GameStatCounterType__Enum_Kill:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (this_00 = (WinningConditionManager *)
                  PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0),
       this_00 == (WinningConditionManager *)0x0)) {
code_?:
      func_?();
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    counterType = (GameStatCounterType__Enum)
                  KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    break;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    return scoreCount;
  case GameStatCounterType__Enum_Collectible:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (this_00 = (WinningConditionManager *)
                  PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0),
       this_00 == (WinningConditionManager *)0x0)) goto code_?;
    counterType = (GameStatCounterType__Enum)
                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
    ;
    break;
  default:
    return 0;
  case GameStatCounterType__Enum_OculusKill:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (this_00 = (WinningConditionManager *)
                  PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0),
       this_00 == (WinningConditionManager *)0x0)) goto code_?;
    counterType = (GameStatCounterType__Enum)
                  OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
    ;
  }
  this = MVWorldObject.dll::WinningConditionManager::
         WinningConditionManager_GetSingletonWinnerConditionByType_6
                   (this_00,(MethodInfo *)counterType);
  pOVar2 = (Object *)0x0;
  if (this != (TimeAttackFlagReachedClient *)0x0) {
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)this,(MethodInfo *)0x0);
    scoreCount = (int32_t)this;
  }
  return (int)pOVar2 - scoreCount;
}


/* Boolean IsFlagScoreBestInGame(Int32, Int32) */

bool Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_IsFlagScoreBestInGame
               (int32_t score,int32_t actorNumber,MethodInfo *method)

{
  iVar1 = WinningConditionNotificationManager_GetPlayerRanking
                    (GameStatCounterType__Enum_TimeAttackFlag,actorNumber,score,(MethodInfo *)0x0);
  return iVar1 == 1;
}


/* Void SendNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_SendNotification
               (NotificationType__Enum type,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
    func_?(TypeInfo__NotificationController);
  }
  NotificationController::NotificationController_PushNotification_2
            (type,data,NotificationLifetime__Enum_High,(MethodInfo *)0x0);
  return;
}


/* Boolean ShouldShowNotification(Int32, GameStatCounterType, Int32, NotificationType ByRef) */

bool Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_ShouldShowNotification
               (int32_t actorNumber,GameStatCounterType__Enum counterType,int32_t scoreLeftToWin,
               NotificationType__Enum *notificationType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *notificationType = NotificationType__Enum_None;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVAvatar *)0x0) ||
     (pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0),
     pMVar2 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
  bVar3 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                    ((MVPlayerContainer *)pMVar2,actorNumber,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return 0;
  }
  switch(counterType & 0xff) {
  case GameStatCounterType__Enum_Kill:
  case GameStatCounterType__Enum_Collectible:
  case GameStatCounterType__Enum_OculusKill:
    if (((scoreLeftToWin == 1) || (scoreLeftToWin == 5)) || (scoreLeftToWin == 0xf)) {
      *notificationType = NotificationType__Enum_WinningWarning;
      return 1;
    }
    break;
  case GameStatCounterType__Enum_TimeAttackFlag:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this == (MVNetworkGame *)0x0) ||
       (scoreLeftToWin =
             (int32_t)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this,(MethodInfo *)0x0),
       (MVLocalPlayer *)scoreLeftToWin == (MVLocalPlayer *)0x0)) goto code_?;
    pSVar4 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)scoreLeftToWin,(MethodInfo *)0x0
                       );
    if (pSVar4 == (String *)actorNumber) {
      return 0;
    }
  case GameStatCounterType__Enum_Flag:
    if (scoreLeftToWin != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVAvatar *)0x0) ||
         (pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0),
         pMVar2 == (MVRuntimeDataVariableClampedFloat *)0x0)) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        bVar3 = (*pcVar5)();
        return bVar3;
      }
      pMVar6 = MVPlayerContainer::MVPlayerContainer_get_Item
                         ((MVPlayerContainer *)pMVar2,actorNumber,(MethodInfo *)0x0);
      if ((pMVar6 != (MVPlayer *)0x0) &&
         (bVar3 = WinningConditionNotificationManager_IsFlagScoreBestInGame
                            (scoreLeftToWin,actorNumber,(MethodInfo *)0x0), bVar3 != 0)) {
        *notificationType = NotificationType__Enum_FlagHighScore;
        return 1;
      }
    }
  }
  return 0;
}


/* Void UpdateNotification(Int32, GameStatCounterType, Int32) */

void Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_UpdateNotification
               (int32_t actorNumber,GameStatCounterType__Enum counterType,int32_t scoreCount,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = GameStatCounterType__Enum_None;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)&stack0xfffffffb,(MethodInfo *)0x0);
  uVar2 = (undefined1)counterType;
  if (uVar2 == uVar1) {
    scoreLeftToWin =
         WinningConditionNotificationManager_GetScoreLeftToWin
                   (counterType,scoreCount,(MethodInfo *)0x0);
    bVar3 = WinningConditionNotificationManager_ShouldShowNotification
                      (actorNumber,counterType,scoreLeftToWin,
                       (NotificationType__Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar4 = TypeInfo__System__String->static_fields->Empty;
      switch(counterType & 0xff) {
      case GameStatCounterType__Enum_Kill:
      case GameStatCounterType__Enum_Collectible:
      case GameStatCounterType__Enum_OculusKill:
        pSVar4 = (String *)func_?();
        break;
      case GameStatCounterType__Enum_Flag:
      case GameStatCounterType__Enum_TimeAttackFlag:
        pSVar4 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                           (scoreLeftToWin,GameStatCounterType__Enum_TimeAttackFlag,
                            (MethodInfo *)0x0);
      }
      data = (Dictionary_2_System_Object_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      method_00 = (MethodInfo *)func_?();
      pCVar5 = (CrossPlatformInputManager_VirtualButton *)TM::TM__(pSVar4,method_00);
      bVar6 = 0;
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        func_?();
        bVar7 = (byte)(counterType >> 8);
        bVar8 = CARRY1(bRam_?,bVar7) || CARRY1(bRam_? + bVar7,bVar6);
        bRam_? = bRam_? + bVar7 + bVar6 + bVar7 + uVar2 + bVar8 +
                       (CARRY1(bVar7,uVar2) || CARRY1(bVar7 + uVar2,bVar8));
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)data,(String *)method_00,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pSVar4 = (String *)func_?();
      pCVar5 = (CrossPlatformInputManager_VirtualButton *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)data,pSVar4,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pSVar4 = (String *)func_?();
      notificationType = &stack0xfffffff9;
      pCVar5 = (CrossPlatformInputManager_VirtualButton *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)data,pSVar4,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pSVar4 = (String *)func_?();
      pCVar5 = (CrossPlatformInputManager_VirtualButton *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)data,pSVar4,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
        func_?();
      }
      NotificationController::NotificationController_PushNotification_2
                ((NotificationType__Enum)notificationType,data,NotificationLifetime__Enum_High,
                 (MethodInfo *)0x0);
    }
  }
  return;
}

