
/* String GenerateNotificationText(Int32, GameStatCounterType, Int32) */

String * Assembly-CSharp.dll::WinningConditionNotificationManager::
         WinningConditionNotificationManager_GenerateNotificationText
                   (int32_t actorNumber,GameStatCounterType__Enum counterType,int32_t scoreLeftToWin
                   ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  switch(counterType & 0xff) {
  case GameStatCounterType__Enum_Kill:
  case GameStatCounterType__Enum_Collectible:
  case GameStatCounterType__Enum_OculusKill:
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&scoreLeftToWin,(MethodInfo *)0x0)
    ;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  pMStack_2 = (MVPlayer *)0x0;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this = (pMVar3->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    bVar4 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      (this,actorNumber,&pMStack_2,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return pSVar1;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pMVar5 = (pMVar3->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
      pLVar6 = MVTeamManager::MVTeamManager_GetTeamList(pMVar5,(MethodInfo *)0x0);
      if (pLVar6 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
        if ((pLVar6->fields)._size < 2) {
          if ((pMStack_2 != (MVPlayer *)0x0) &&
             (pUVar7 = (pMStack_2->fields)._UserProfileData_k__BackingField,
             pUVar7 != (UserProfileData *)0x0)) {
            return (pUVar7->fields).UserName;
          }
        }
        else {
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar3 != (MVNetworkGame *)0x0) &&
              (pMVar5 = (pMVar3->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) &&
             (pMStack_2 != (MVPlayer *)0x0)) {
            this_00 = (pMVar5->fields).teamNames;
            if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
              pSVar1 = (String *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                  (pMStack_2->fields)._Team_k__BackingField,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                 );
              return pSVar1;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar8)();
  return pSVar1;
}


/* String GetPlayerName(Int32) */

String * Assembly-CSharp.dll::WinningConditionNotificationManager::
         WinningConditionNotificationManager_GetPlayerName(int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  pMStack_2 = (MVPlayer *)0x0;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this = (pMVar3->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    bVar4 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      (this,actorNumber,&pMStack_2,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return pSVar1;
    }
    if ((pMStack_2 != (MVPlayer *)0x0) &&
       (pUVar5 = (pMStack_2->fields)._UserProfileData_k__BackingField,
       pUVar5 != (UserProfileData *)0x0)) {
      return (pUVar5->fields).UserName;
    }
  }
  func_?();
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  iVar4 = 1;
  pOStack_5 = (Object__Class *)0x0;
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar6 != (MVNetworkGame *)0x0) &&
     (this = (pMVar6->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    this_01 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffcc,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      team = pDVar7->_currentValue;
      uStack_1 = 1;
      while( true ) {
        do {
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&pOStack_5,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar8 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&pOStack_5,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,in_stack_9);
            *unaff_FS_OFFSET = uStack_3;
            return iVar4;
          }
        } while ((team == (Object *)0x0) ||
                (actorNumber_00 = (int)team[6].klass, actorNumber_00 == actorNumber));
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar6 == (MVNetworkGame *)0x0) break;
        this_00 = (pMVar6->fields).gameStatCounterManager;
        if (this_00 == (GameStatCounterManager *)0x0) break;
        in_stack_9 = (MethodInfo *)0x0;
        team = (Object *)team[9].klass;
        iVar10 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          (this_00,statType,(MVTeam__Enum)team,actorNumber_00,(MethodInfo *)0x0);
        bVar8 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (iVar10,score,statType,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  iVar10 = (*pcVar11)();
  return iVar10;
}


/* Int32 GetScoreLeftToWin(GameStatCounterType, Int32) */

int32_t Assembly-CSharp.dll::WinningConditionNotificationManager::
        WinningConditionNotificationManager_GetScoreLeftToWin
                  (GameStatCounterType__Enum counterType,int32_t scoreCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppMStack_1 = &
                 KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    func_?();
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    cRam_? = '\x01';
  }
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
    pOVar4 = (Object__Class *)0x0;
    if (pOVar3 != (Object *)0x0) {
      pOVar4 = pOVar3[2].klass;
    }
    return (int)pOVar4 - scoreCount;
  }
code_?:
  uVar5 = func_?(&ppMStack_1);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
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
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__NotificationController);
  }
  NotificationController::NotificationController_PushNotification_2
            (type,data,NotificationLifetime__Enum_High,(MethodInfo *)0x0);
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean ShouldShowNotification(Int32, GameStatCounterType, Int32, NotificationType ByRef) */

bool Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_ShouldShowNotification
               (int32_t actorNumber,GameStatCounterType__Enum counterType,int32_t scoreLeftToWin,
               NotificationType__Enum *notificationType,MethodInfo *method)

{
  *notificationType = NotificationType__Enum_None;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  puVar2 = unaff_EBX;
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar1->fields).playerContainer, puVar2 = unaff_EBX,
     pMVar3 != (MVPlayerContainer *)0x0)) {
    bVar4 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar3,actorNumber,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return 0;
    }
    unaff_ESI = (char *)actorNumber;
    switch(counterType & 0xff) {
    case GameStatCounterType__Enum_Kill:
    case GameStatCounterType__Enum_Collectible:
    case GameStatCounterType__Enum_OculusKill:
      if (((scoreLeftToWin != 1) && (scoreLeftToWin != 5)) && (scoreLeftToWin != 0xf)) {
        return 0;
      }
      *notificationType = NotificationType__Enum_WinningWarning;
      return 1;
    case GameStatCounterType__Enum_Flag:
      if (scoreLeftToWin == 0) {
        return 0;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      puVar2 = (undefined2 *)scoreLeftToWin;
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar3 = (pMVar1->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
        pMVar5 = MVPlayerContainer::MVPlayerContainer_get_Item
                            (pMVar3,actorNumber,(MethodInfo *)0x0);
        if (pMVar5 == (MVPlayer *)0x0) {
          return 0;
        }
        bVar4 = WinningConditionNotificationManager_IsFlagScoreBestInGame
                          (scoreLeftToWin,actorNumber,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return 0;
        }
        goto code_?;
      }
      break;
    default:
      goto code_?;
    case GameStatCounterType__Enum_TimeAttackFlag:
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      puVar2 = unaff_EBX;
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         puVar2 = unaff_EBX, pMVar6 != (MVLocalPlayer *)0x0)) {
        if ((pMVar6->fields)._._ActorNr_k__BackingField == actorNumber) {
          return 0;
        }
        if (scoreLeftToWin == 0) {
          return 0;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  do {
    scoreLeftToWin = (int32_t)puVar2;
    uVar7 = func_?();
    iVar8 = (int)((ulonglong)uVar7 >> 0x20);
    pMVar1 = (MVNetworkGame *)uVar7;
    pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar8);
    pMVar9 = pMVar1->klass;
    pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar8);
    actorNumber = (int32_t)unaff_ESI;
    if (pMVar1->klass != (MVNetworkGame__Class *)0x0 &&
        SBORROW4((int)pMVar9,iVar8) == (int)pMVar1->klass < 0) {
      pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar8);
      pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar8);
      *(char *)notificationType = *unaff_ESI;
      pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar8);
      pcVar10 = (code *)swi(3);
      bVar4 = (*pcVar10)();
      return bVar4;
    }
code_?:
    unaff_ESI = (char *)(actorNumber + 1);
    cVar11 = *(char *)actorNumber;
    *(undefined2 *)scoreLeftToWin = in_CS;
    pcVar12 = (char *)(scoreLeftToWin + -0x3f7afb3c);
    *pcVar12 = *pcVar12 + cVar11;
    puVar2 = (undefined2 *)scoreLeftToWin;
  } while ((*pcVar12 == '\0') ||
          (pMVar3 = *(MVPlayerContainer **)(CONCAT31((int3)((uint)pMVar1 >> 8),cVar11) + 0xe4),
          pMVar3 == (MVPlayerContainer *)0x0));
  pMVar5 = MVPlayerContainer::MVPlayerContainer_get_Item
                      (pMVar3,(int32_t)unaff_ESI,(MethodInfo *)0x0);
  if ((pMVar5 != (MVPlayer *)0x0) &&
     (bVar4 = WinningConditionNotificationManager_IsFlagScoreBestInGame
                        (scoreLeftToWin,(int32_t)unaff_ESI,(MethodInfo *)0x0), bVar4 != 0)) {
code_?:
    *notificationType = NotificationType__Enum_FlagHighScore;
    return 1;
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
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__GameStatCounterType);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  uVar1 = GameStatCounterType__Enum_None;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)&stack0xfffffffb,(MethodInfo *)0x0);
  if ((undefined1)counterType != uVar1) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                   );
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    cRam_? = '\x01';
  }
  score = (undefined *)0x0;
  switch(counterType & 0xff) {
  case GameStatCounterType__Enum_Kill:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    cVar3 = (int)pMVar2 < 0;
    cVar4 = (POPCOUNT((uint)pMVar2 & 0xff) & 1U) == 0;
    cVar5 = true;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    break;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    score = (undefined *)scoreCount;
    goto code_?;
  case GameStatCounterType__Enum_Collectible:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    cVar3 = (int)pMVar2 < 0;
    cVar4 = (POPCOUNT((uint)pMVar2 & 0xff) & 1U) == 0;
    cVar5 = true;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
    ;
    break;
  default:
    goto code_?;
  case GameStatCounterType__Enum_OculusKill:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    cVar3 = (int)pMVar2 < 0;
    cVar4 = (POPCOUNT((uint)pMVar2 & 0xff) & 1U) == 0;
    cVar5 = true;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
    ;
  }
  cVar5 = true;
  cVar4 = (POPCOUNT((uint)this & 0xff) & 1U) == 0;
  cVar3 = (int)this < 0;
  if (this != (WinningConditionManager *)0x0) {
    pOVar6 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType(this,method_00);
    pOVar7 = (Object__Class *)0x0;
    if (pOVar6 != (Object *)0x0) {
      pOVar7 = pOVar6[2].klass;
    }
    score = (undefined *)((int)pOVar7 - scoreCount);
code_?:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    cVar3 = (int)pMVar2 < 0;
    cVar5 = pMVar2 == (MVNetworkGame *)0x0;
    cVar4 = (POPCOUNT((uint)pMVar2 & 0xff) & 1U) == 0;
    if (!(bool)cVar5) {
      pMVar8 = (pMVar2->fields).playerContainer;
      cVar3 = (int)pMVar8 < 0;
      cVar5 = pMVar8 == (MVPlayerContainer *)0x0;
      cVar4 = (POPCOUNT((uint)pMVar8 & 0xff) & 1U) == 0;
      if (!(bool)cVar5) {
        bVar9 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                          (pMVar8,actorNumber,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          switch(counterType & 0xff) {
          case GameStatCounterType__Enum_Kill:
          case GameStatCounterType__Enum_Collectible:
          case GameStatCounterType__Enum_OculusKill:
            if (((score == (undefined *)0x1) || (score == (undefined *)0x5)) ||
               (score == (undefined *)0xf)) {
code_?:
              score_00.m_value = (int32_t)score;
              in_stack_10 = unaff_ESI;
              if (cRam_? == '\0') {
                score_00.m_value = (int32_t)&UNK_?;
                func_?();
                cRam_? = '\x01';
                in_stack_10 = unaff_ESI;
              }
              pSVar11 = ::StringLiteral__;
              unaff_ESI = ::StringLiteral__;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(counterType & 0xff) {
              case GameStatCounterType__Enum_None:
code_?:
                in_stack_12 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                this_00 = (Dictionary_2_System_Object_System_Object___Class *)
                          MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                cVar3 = (int)this_00 < 0;
                cVar4 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
                cVar5 = true;
                if (this_00 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  in_stack_10 = (String *)0x0;
                  pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                     ((MVNetworkGame *)this_00,(MethodInfo *)0x0);
                  cVar3 = (int)pMVar13 < 0;
                  cVar4 = (POPCOUNT((uint)pMVar13 & 0xff) & 1U) == 0;
                  cVar5 = true;
                  in_stack_12 = this_00;
                  if (pMVar13 != (MVLocalPlayer *)0x0) {
                    if ((pMVar13->fields)._._ActorNr_k__BackingField == actorNumber) {
                      return;
                    }
code_?:
                    if (score == (undefined *)0x0) {
                      return;
                    }
                    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    cVar3 = (int)pMVar2 < 0;
                    cVar4 = (POPCOUNT((uint)pMVar2 & 0xff) & 1U) == 0;
                    cVar5 = true;
                    if (pMVar2 != (MVNetworkGame *)0x0) {
                      pMVar8 = (pMVar2->fields).playerContainer;
                      cVar3 = (int)pMVar8 < 0;
                      cVar4 = (POPCOUNT((uint)pMVar8 & 0xff) & 1U) == 0;
                      cVar5 = true;
                      if (pMVar8 != (MVPlayerContainer *)0x0) goto code_?;
                    }
                  }
                }
                goto code_?;
              default:
                pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
                break;
              case GameStatCounterType__Enum_Flag:
              case GameStatCounterType__Enum_TimeAttackFlag:
                pSVar11 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                   (score_00.m_value,GameStatCounterType__Enum_TimeAttackFlag,
                                    (MethodInfo *)0x0);
                break;
              case GameStatCounterType__Enum_Time_1:
              case GameStatCounterType__Enum_FlagCaptured:
              case GameStatCounterType__Enum_GameCoin:
                break;
              }
              in_stack_12 =
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
              ;
              this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                        (this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              this_02 = TypeInfo__System__Byte;
              pOVar6 = (Object *)func_?();
              pSVar11 = TM::TM__(pSVar11,(MethodInfo *)0x0);
              cVar3 = (int)this_02 < 0;
              cVar4 = (POPCOUNT((uint)this_02 & 0xff) & 1U) == 0;
              cVar5 = true;
              if (this_02 != (Byte__Class *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar6,
                           (Object *)pSVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pOVar6 = (Object *)func_?(TypeInfo__System__Byte);
                pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe0);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar6,pOVar14,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pOVar6 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
                pOVar14 = (Object *)func_?(TypeInfo__GameStatCounterType,&stack0xfffffff8);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar6,pOVar14,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pOVar6 = (Object *)func_?();
                notificationType = TypeInfo__System__Int32;
                pOVar14 = (Object *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar6,pOVar14,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                NotificationController::NotificationController_PushNotification_2
                          ((NotificationType__Enum)notificationType,
                           (Dictionary_2_System_Object_System_Object_ *)this_02,
                           NotificationLifetime__Enum_High,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
            break;
          case GameStatCounterType__Enum_Flag:
            goto code_?;
          case GameStatCounterType__Enum_TimeAttackFlag:
            goto code_?;
          }
        }
        return;
      }
    }
  }
code_?:
  bVar15 = 0;
  uVar16 = func_?();
  iVar17 = (int)((ulonglong)uVar16 >> 0x20);
  piVar18 = (int *)CONCAT22((short)((ulonglong)uVar16 >> 0x10),
                            CONCAT11(cVar3 << 7 | cVar5 << 6 | in_AF << 4 | cVar4 << 2 | 2U |
                                     bVar15,(char)uVar16));
  *piVar18 = *piVar18 - iVar17;
  *(undefined1 **)((int)piVar18 + -0x5fdbefd7) = &stack0xffffffe0;
  *piVar18 = *piVar18 - iVar17;
  *(undefined2 *)((int)piVar18 + -0x5f73efd7) = in_FS;
  *piVar18 = *piVar18 - iVar17;
  piVar18 = (int *)CONCAT31((int3)((uint)unaff_EBP >> 8),uRam_?);
  *piVar18 = *piVar18 - (int)in_stack_10;
  *(BADSPACEBASE **)((int)piVar18 + -0x5f25efd7) = register0x00000010;
  *piVar18 = *piVar18 - (int)in_stack_10;
  piVar18 = piRam_?;
  *piRam_? = *piRam_? - (int)in_stack_10;
  piVar18 = (int *)CONCAT22((short)((uint)piVar18 >> 0x10),
                            CONCAT11((byte)((uint)piVar18 >> 8) &
                                     *(byte *)((int)&in_stack_12[-0x2b6213].vtable.ToString.
                                                     methodPtr + 1),(char)piVar18));
  *piVar18 = *piVar18 - (int)in_stack_10;
  *piVar18 = *piVar18 - (int)in_stack_10;
  piVar18 = (int *)CONCAT31((int3)((uint)piVar18 >> 8),piRam_?._0_1_);
  iVar17 = *piVar18;
  *piVar18 = *piVar18 - (int)in_stack_10;
  pcVar19 = (code *)swi(4);
  if (SBORROW4(iVar17,(int)in_stack_10)) {
    (*pcVar19)();
    in_stack_10 = extraout_EDX;
  }
  piVar18 = piRam_?;
  *piRam_? = *piRam_? - (int)in_stack_10;
  *piVar18 = *piVar18 - (int)in_stack_10;
  *piRam_? = *piRam_? - (int)in_stack_10;
  *(undefined4 *)(actorNumber + 0x10) = 2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  return;
code_?:
  pMVar20 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar8,actorNumber,(MethodInfo *)0x0);
  if (pMVar20 == (MVPlayer *)0x0) {
    return;
  }
  bVar9 = WinningConditionNotificationManager_IsFlagScoreBestInGame
                    ((int32_t)score,actorNumber,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    return;
  }
  goto code_?;
}

