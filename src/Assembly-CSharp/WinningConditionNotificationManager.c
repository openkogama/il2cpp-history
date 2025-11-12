
/* String GenerateNotificationText(Int32, GameStatCounterType, Int32) */

String * Assembly-CSharp.dll::WinningConditionNotificationManager::
         WinningConditionNotificationManager_GenerateNotificationText
                   (int32_t actorNumber,GameStatCounterType__Enum counterType,int32_t scoreLeftToWin
                   ,MethodInfo *method)

{
  aIStackX_18[0].m_value = scoreLeftToWin;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  switch(counterType & 0xff) {
  case GameStatCounterType__Enum_Kill:
  case GameStatCounterType__Enum_Collectible:
  case GameStatCounterType__Enum_OculusKill:
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
    return pSVar1;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    pSVar1 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (scoreLeftToWin,0x80000008,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* String GetContestantName(Int32) */

String * Assembly-CSharp.dll::WinningConditionNotificationManager::
         WinningConditionNotificationManager_GetContestantName
                   (int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  apOStackX_18[0] = (Object *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this = (pMVar4->fields).players;
    if (this != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)this,actorNumber,apOStackX_18,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                        );
      if (bVar5 == 0) {
        return pSVar1;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (pMVar6 = (pMVar3->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
        pLVar7 = MVTeamManager::MVTeamManager_GetTeamList(pMVar6,(MethodInfo *)0x0);
        if (pLVar7 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
          if ((pLVar7->fields)._size < 2) {
            if ((apOStackX_18[0] != (Object *)0x0) &&
               (apOStackX_18[0][7].klass != (Object__Class *)0x0)) {
              return (String *)((apOStackX_18[0][7].klass)->_0).namespaze;
            }
          }
          else {
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((((pMVar3 != (MVNetworkGame *)0x0) &&
                 (pMVar6 = (pMVar3->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) &&
                (apOStackX_18[0] != (Object *)0x0)) &&
               (this_00 = (pMVar6->fields).teamNames,
               this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) {
              pSVar1 = (String *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                  *(Int32Enum__Enum *)((longlong)&apOStackX_18[0][8].klass + 4),
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                 );
              return pSVar1;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar8)();
  return pSVar1;
}


/* String GetPlayerName(Int32) */

String * Assembly-CSharp.dll::WinningConditionNotificationManager::
         WinningConditionNotificationManager_GetPlayerName(int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  apOStackX_18[0] = (Object *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this = (pMVar4->fields).players;
    if (this != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)this,actorNumber,apOStackX_18,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                        );
      if (bVar5 == 0) {
        return pSVar1;
      }
      if ((apOStackX_18[0] != (Object *)0x0) && (apOStackX_18[0][7].klass != (Object__Class *)0x0))
      {
        return (String *)((apOStackX_18[0][7].klass)->_0).namespaze;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* Int32 GetPlayerRanking(GameStatCounterType, Int32, Int32) */

int32_t Assembly-CSharp.dll::WinningConditionNotificationManager::
        WinningConditionNotificationManager_GetPlayerRanking
                  (GameStatCounterType__Enum statType,int32_t actorNumber,int32_t score,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
       (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
      (this = (pMVar3->fields).playerContainer, this == (MVPlayerContainer *)0x0)) ||
     (pDVar4 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this,(MethodInfo *)0x0),
     pDVar4 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_5 = (pDVar4->fields)._dictionary;
    ppDStack_6 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&pDStack_9 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    if (pDStack_5 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      pDStack_9 = pDStack_5;
      FUN_?();
      pcVar13 = (code *)swi(3);
      iVar14 = (*pcVar13)();
      return iVar14;
    }
    ppDStack_6 = (Dictionary_2_System_Int32_MVPlayer_ **)
                  ((ulonglong)(uint)(pDStack_5->fields)._version << 0x20);
    uStack_7 = 0;
    uStack_15 = (ulonglong)ppDStack_6;
    pMStack_16 = (MVPlayer *)0x0;
    pDStack_9 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
    ppDStack_6 = &pDStack_5;
    while (pDStack_5 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      if (uStack_15._4_4_ != (pDStack_5->fields)._version) goto code_?;
      uVar12 = uStack_15 & 0xffffffff;
      do {
        if (pDStack_5 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        uVar8 = (uint)uVar12;
        if ((uint)(pDStack_5->fields)._count <= uVar8) {
          return iVar1;
        }
        pDVar17 = (pDStack_5->fields)._entries;
        uVar12 = (ulonglong)(uVar8 + 1);
        uStack_15 = CONCAT44(uStack_15._4_4_,uVar8 + 1);
        if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
        goto code_?;
        if ((uint)pDVar17->max_length <= uVar8) goto code_?;
      } while (pDVar17->vector[(int)uVar8].hashCode < 0);
      pMStack_16 = pDVar17->vector[(int)uVar8].value;
      func_?();
      pMVar18 = pMStack_16;
      if ((pMStack_16 != (MVPlayer *)0x0) &&
         (actorNumber_00 = (pMStack_16->fields)._ActorNr_k__BackingField,
         actorNumber_00 != actorNumber)) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
        this_00 = (pMVar3->fields).gameStatCounterManager;
        if (this_00 == (GameStatCounterManager *)0x0) goto code_?;
        iVar14 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          (this_00,statType & 0xff,(pMVar18->fields)._Team_k__BackingField,
                           actorNumber_00,(MethodInfo *)0x0);
        bVar19 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (iVar14,score,statType & 0xff,(MethodInfo *)0x0);
        if (bVar19 != 0) {
          iVar1 = iVar1 + 1;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
}


/* Int32 GetScoreLeftToWin(GameStatCounterType, Int32) */

int32_t Assembly-CSharp.dll::WinningConditionNotificationManager::
        WinningConditionNotificationManager_GetScoreLeftToWin
                  (GameStatCounterType__Enum counterType,int32_t scoreCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  switch(counterType & 0xff) {
  case GameStatCounterType__Enum_Kill:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    break;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    return scoreCount;
  case GameStatCounterType__Enum_Collectible:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
    ;
    break;
  default:
    return 0;
  case GameStatCounterType__Enum_OculusKill:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
    ;
  }
  if (this != (WinningConditionManager *)0x0) {
    pOVar3 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType(this,method_00);
    if (pOVar3 != (Object *)0x0) {
      iVar1 = *(int *)&pOVar3[1].monitor;
    }
    return iVar1 - scoreCount;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Boolean IsFlagScoreBestInGame(Int32, Int32) */

bool Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_IsFlagScoreBestInGame
               (int32_t score,int32_t actorNumber,MethodInfo *method)

{
  iVar1 = WinningConditionNotificationManager_GetPlayerRanking
                    (CONCAT31((int3)((uint)score >> 8),8),actorNumber,score,(MethodInfo *)0x0);
  return iVar1 == 1;
}


/* Void SendNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_SendNotification
               (NotificationType__Enum type,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,data,8,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,2);
  key = (Object *)FUN_?(uRam_?,auStackX_18);
  auStackX_18[0] = 8;
  value = (Object *)FUN_?(TypeInfo__NotificationLifetime,auStackX_18);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (data,key,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = TypeInfo__NotificationsManager->static_fields->_activeInstance;
      if (this == (NotificationsManager *)0x0) goto code_?;
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this,type,data,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ShouldShowNotification(Int32, GameStatCounterType, Int32, NotificationType ByRef) */

bool Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_ShouldShowNotification
               (int32_t actorNumber,GameStatCounterType__Enum counterType,int32_t scoreLeftToWin,
               NotificationType__Enum *notificationType,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  *notificationType = NotificationType__Enum_None;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 == (MVGameControllerBase *)0x0) ||
      (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
     (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
  goto code_?;
  bVar5 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar4,actorNumber,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    switch(counterType & 0xff) {
    case GameStatCounterType__Enum_Kill:
    case GameStatCounterType__Enum_Collectible:
    case GameStatCounterType__Enum_OculusKill:
      if (((scoreLeftToWin - 1U & 0xfffffffb) != 0) && (scoreLeftToWin != 0xf)) {
        return 0;
      }
      *notificationType = NotificationType__Enum_WinningWarning;
      return 1;
    case GameStatCounterType__Enum_Flag:
      if (scoreLeftToWin == 0) {
        return 0;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
      goto code_?;
      pMVar6 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar4,actorNumber,(MethodInfo *)0x0);
      if (pMVar6 == (MVPlayer *)0x0) {
        return 0;
      }
      iVar7 = WinningConditionNotificationManager_GetPlayerRanking
                        ((GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),8),
                         actorNumber,scoreLeftToWin,(MethodInfo *)0x0);
      break;
    default:
      goto code_?;
    case GameStatCounterType__Enum_TimeAttackFlag:
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar3 == (MVNetworkGame *)0x0) ||
          (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0)) ||
         (pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar8 == (MVLocalPlayer *)0x0)) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        bVar5 = (*pcVar9)();
        return bVar5;
      }
      if ((pMVar8->fields)._._ActorNr_k__BackingField == actorNumber) {
        return 0;
      }
      if (scoreLeftToWin == 0) {
        return 0;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
      goto code_?;
      pMVar6 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar4,actorNumber,(MethodInfo *)0x0);
      if (pMVar6 == (MVPlayer *)0x0) {
        return 0;
      }
      iVar7 = WinningConditionNotificationManager_GetPlayerRanking
                        ((GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),8),
                         actorNumber,scoreLeftToWin,(MethodInfo *)0x0);
    }
    if (iVar7 == 1) {
      *notificationType = NotificationType__Enum_FlagHighScore;
      return 1;
    }
  }
code_?:
  return 0;
}


/* Void UpdateNotification(Int32, GameStatCounterType, Int32) */

void Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_UpdateNotification
               (int32_t actorNumber,GameStatCounterType__Enum counterType,int32_t scoreCount,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,CONCAT44(in_register_00000014,counterType),
                  CONCAT44(in_register_00000084,scoreCount));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameStatCounterType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aGStackX_10[0] = aGStackX_10[0] & 0xffffff00;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            (aGStackX_10,(MethodInfo *)0x0);
  if ((char)counterType == (undefined1)aGStackX_10[0]) {
    if (cRam_? == '\0') {
      FUN_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((counterType & 0xff) - GameStatCounterType__Enum_Kill < 8) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)
                 *(uint *)(&UNK_? +
                          (longlong)(int)((counterType & 0xff) - GameStatCounterType__Enum_Kill) * 4
                          ) + 0xADDR))();
      return;
    }
    notificationType = aNStack_1;
    aNStack_1[0] = NotificationType__Enum_None;
    bVar2 = WinningConditionNotificationManager_ShouldShowNotification
                      (actorNumber,counterType & 0xff,0,notificationType,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      aGStackX_10[0] = GameStatCounterType__Enum_None;
      if (cRam_? == '\0') {
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar3 = ::StringLiteral__;
      if ((counterType & 0xff) - GameStatCounterType__Enum_Kill < 8) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulonglong)
                   *(uint *)(&UNK_? +
                            (longlong)(int)((counterType & 0xff) - GameStatCounterType__Enum_Kill) *
                            4) + 0xADDR))();
        return;
      }
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aGStackX_10[0]._0_1_ = GameStatCounterType__Enum_Kill;
      pOVar4 = (Object *)FUN_?(uRam_?);
      pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
      if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar6 = CONCAT71((int7)((ulonglong)notificationType >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar4,(Object *)pSVar3,
                 (InsertionBehavior__Enum)uVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      aGStackX_10[0] = CONCAT31(aGStackX_10[0]._1_3_,9);
      pOVar4 = (Object *)FUN_?(uRam_?,aGStackX_10);
      aGStackX_10[0] = actorNumber;
      pOVar7 = (Object *)FUN_?(uRam_?,aGStackX_10);
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar4,pOVar7,
                 (InsertionBehavior__Enum)uVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      aGStackX_10[0]._0_1_ = GameStatCounterType__Enum_FlagCaptured;
      pOVar4 = (Object *)FUN_?(uRam_?,aGStackX_10);
      aGStackX_10[0]._0_1_ = (char)counterType;
      pOVar7 = (Object *)FUN_?(TypeInfo__GameStatCounterType,aGStackX_10);
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar4,pOVar7,
                 (InsertionBehavior__Enum)uVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      aGStackX_10[0] = CONCAT31(aGStackX_10[0]._1_3_,4);
      pOVar4 = (Object *)FUN_?(uRam_?,aGStackX_10);
      aGStackX_10[0] = GameStatCounterType__Enum_None;
      pOVar7 = (Object *)FUN_?(uRam_?,aGStackX_10);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar4,pOVar7,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      WinningConditionNotificationManager_SendNotification
                (aNStack_1[0],(Dictionary_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
    }
  }
  return;
}

