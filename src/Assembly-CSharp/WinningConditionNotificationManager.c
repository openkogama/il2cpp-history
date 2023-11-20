
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
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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


/* Boolean ShouldShowNotification(Int32, GameStatCounterType, Int32, NotificationType ByRef) */

bool Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_ShouldShowNotification
               (int32_t actorNumber,GameStatCounterType__Enum counterType,int32_t scoreLeftToWin,
               NotificationType__Enum *notificationType,MethodInfo *method)

{
  *notificationType = NotificationType__Enum_None;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0))
  goto code_?;
  bVar3 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar2,actorNumber,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return 0;
  }
  unaff_ESI = (byte *)actorNumber;
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
    unaff_EBX = scoreLeftToWin;
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0))
    goto code_?;
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar2,actorNumber,(MethodInfo *)0x0);
    if (pMVar4 == (MVPlayer *)0x0) {
      return 0;
    }
    bVar3 = WinningConditionNotificationManager_IsFlagScoreBestInGame
                      (scoreLeftToWin,actorNumber,(MethodInfo *)0x0);
    break;
  default:
    goto code_?;
  case GameStatCounterType__Enum_TimeAttackFlag:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
       pMVar5 == (MVLocalPlayer *)0x0)) {
code_?:
      iVar6 = func_?();
      iVar6 = iVar6 + 1;
      in_AF = 9 < ((byte)iVar6 & 0xf) | in_AF;
      bVar7 = (byte)iVar6 + in_AF * '\x06';
      bVar8 = (byte)((uint)unaff_EBX >> 8);
      in_AF = 9 < (bVar7 & 0xf) | in_AF;
      uVar9 = CONCAT31((int3)((uint)iVar6 >> 8),bVar7 + in_AF * -6) & 0xffffff0f;
      bVar10 = (byte)uVar9;
      bVar11 = 9 < bVar10 | in_AF;
      bVar12 = 0x99 < bVar10 | in_AF;
      bVar13 = bVar10 + bVar11 * '\x06' + bVar12 * '`';
      bVar7 = in_stack_14 + bVar13 + bVar12;
      bVar11 = 9 < (bVar13 & 0xf) | bVar11;
      bVar15 = 0x99 < bVar13 ||
              (CARRY1(in_stack_14,bVar13) || CARRY1(in_stack_14 + bVar13,bVar12));
      bVar12 = *unaff_ESI;
      bVar16 = *unaff_ESI;
      *unaff_ESI = bVar16 + bVar8 + bVar15;
      iVar6 = CONCAT31((int3)(CONCAT22((short)(uVar9 >> 0x10),
                                        CONCAT11((char)((uint)iVar6 >> 8) - in_AF,bVar10)) >> 8),
                        bVar13 + bVar11 * '\x06' + bVar15 * '`') + 1;
      bVar10 = (byte)iVar6;
      bVar11 = 9 < (bVar10 & 0xf) | bVar11;
      bVar15 = 0x99 < bVar10 || (CARRY1(bVar12,bVar8) || CARRY1(bVar16 + bVar8,bVar15));
      bVar16 = *unaff_ESI;
      bVar12 = *unaff_ESI;
      *unaff_ESI = bVar12 + bVar8 + bVar15;
      iVar6 = CONCAT31((int3)((uint)iVar6 >> 8),bVar10 + bVar11 * '\x06' + bVar15 * '`') + 1;
      bVar10 = (byte)iVar6;
      bVar11 = 9 < (bVar10 & 0xf) | bVar11;
      bVar15 = 0x99 < bVar10 || (CARRY1(bVar16,bVar8) || CARRY1(bVar12 + bVar8,bVar15));
      bVar16 = bVar10 + bVar11 * '\x06' + bVar15 * '`';
      bVar11 = 9 < (bVar16 & 0xf) | bVar11;
      bVar15 = 0x99 < bVar16 || (CARRY1(bVar7,bVar16) || CARRY1(bVar7 + bVar16,bVar15));
      bVar7 = *unaff_ESI;
      bVar12 = *unaff_ESI;
      *unaff_ESI = bVar12 + bVar8 + bVar15;
      iVar6 = CONCAT31((int3)((uint)iVar6 >> 8),bVar16 + bVar11 * '\x06' + bVar15 * '`') + 1;
      bVar16 = (byte)iVar6;
      bVar15 = 0x99 < bVar16 || (CARRY1(bVar7,bVar8) || CARRY1(bVar12 + bVar8,bVar15));
      pcVar17 = (char *)(CONCAT31((int3)((uint)iVar6 >> 8),
                                 bVar16 + (9 < (bVar16 & 0xf) | bVar11) * '\x06' + bVar15 * '`') * 3 +
                       0x27);
      *pcVar17 = *pcVar17 + (char)((uint)iVar6 >> 8) + bVar15;
      pcVar18 = (code *)swi(3);
      bVar3 = (*pcVar18)();
      return bVar3;
    }
    if ((pMVar5->fields)._._ActorNr_k__BackingField == actorNumber) {
      return 0;
    }
    if (scoreLeftToWin == 0) {
      return 0;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    unaff_EBX = scoreLeftToWin;
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0))
    goto code_?;
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar2,actorNumber,(MethodInfo *)0x0);
    if (pMVar4 == (MVPlayer *)0x0) {
      return 0;
    }
    bVar3 = WinningConditionNotificationManager_IsFlagScoreBestInGame
                      (scoreLeftToWin,actorNumber,(MethodInfo *)0x0);
  }
  if (bVar3 != 0) {
    *notificationType = NotificationType__Enum_FlagHighScore;
    return 1;
  }
code_?:
  return 0;
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
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
  iVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),(undefined1)counterType);
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
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar3->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    break;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    score = (undefined *)scoreCount;
    goto code_?;
  case GameStatCounterType__Enum_Collectible:
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar3->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
    ;
    break;
  default:
    goto code_?;
  case GameStatCounterType__Enum_OculusKill:
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar3->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
    ;
  }
  if (this != (WinningConditionManager *)0x0) {
    pOVar4 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType(this,method_00);
    pOVar5 = (Object__Class *)0x0;
    if (pOVar4 != (Object *)0x0) {
      pOVar5 = pOVar4[2].klass;
    }
    score = (undefined *)((int)pOVar5 - scoreCount);
code_?:
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pMVar6 = (pMVar3->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) {
      bVar7 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar6,actorNumber,(MethodInfo *)0x0)
      ;
      if (bVar7 != 0) {
        iVar2 = actorNumber;
        switch(counterType & 0xff) {
        case GameStatCounterType__Enum_Kill:
        case GameStatCounterType__Enum_Collectible:
        case GameStatCounterType__Enum_OculusKill:
          if (((score == (undefined *)0x1) || (score == (undefined *)0x5)) ||
             (score == (undefined *)0xf)) {
code_?:
            score_00.m_value = (int32_t)score;
            if (cRam_? == '\0') {
              score_00.m_value = (int32_t)&UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            unaff_ESI = ::StringLiteral__;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(counterType & 0xff) {
            case GameStatCounterType__Enum_None:
code_?:
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar3 != (MVNetworkGame *)0x0) &&
                 (pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
                 pMVar8 != (MVLocalPlayer *)0x0)) {
                if ((pMVar8->fields)._._ActorNr_k__BackingField == actorNumber) {
                  return;
                }
code_?:
                if (score == (undefined *)0x0) {
                  return;
                }
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar3 != (MVNetworkGame *)0x0) &&
                   (pMVar6 = (pMVar3->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0))
                goto code_?;
              }
              goto code_?;
            default:
              unaff_ESI = mscorlib.dll::System::Int32::Int32_ToString
                                    ((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
              break;
            case GameStatCounterType__Enum_Flag:
            case GameStatCounterType__Enum_TimeAttackFlag:
              unaff_ESI = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                    (score_00.m_value,GameStatCounterType__Enum_TimeAttackFlag,
                                     (MethodInfo *)0x0);
              break;
            case GameStatCounterType__Enum_Time_1:
            case GameStatCounterType__Enum_FlagCaptured:
            case GameStatCounterType__Enum_GameCoin:
              break;
            }
            this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            this_01 = TypeInfo__System__Byte;
            pOVar4 = (Object *)func_?();
            value = TM::TM__(unaff_ESI,(MethodInfo *)0x0);
            if (this_01 != (Byte__Class *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,(Object *)value
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar4 = (Object *)func_?(TypeInfo__System__Byte);
              pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe0);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar4 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
              pOVar9 = (Object *)func_?(TypeInfo__GameStatCounterType,&stack0xfffffff8);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar4 = (Object *)func_?();
              notificationType = TypeInfo__System__Int32;
              pOVar9 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar9,
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
                         (Dictionary_2_System_Object_System_Object_ *)this_01,
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
code_?:
  bVar10 = 0;
  uVar11 = func_?();
  iVar12 = (int)((ulonglong)uVar11 >> 0x20);
  bVar13 = (byte)uVar11;
  in_AF = 9 < (bVar13 & 0xf) | in_AF;
  bVar10 = 0x99 < bVar13 | bVar10;
  bVar13 = bVar13 + in_AF * '\x06' + bVar10 * '`';
  bVar14 = (byte)((ulonglong)uVar11 >> 8);
  bVar15 = bVar14 * '\x02' + bVar10;
  pbVar16 = (byte *)(extraout_ECX + 1);
  in_AF = 9 < (bVar13 & 0xf) | in_AF;
  uVar17 = (undefined3)(CONCAT22((short)((ulonglong)uVar11 >> 0x10),CONCAT11(bVar15,bVar13)) >> 8);
  bVar18 = 0x99 < bVar13 || (CARRY1(bVar14,bVar14) || CARRY1(bVar14 * '\x02',bVar10));
  bVar14 = bVar13 + in_AF * '\x06' + bVar18 * '`';
  iVar19 = CONCAT31(uVar17,bVar14);
  pbVar20 = (byte *)(iVar12 + 0x28 + iVar19 * 2);
  bVar21 = (byte)pbVar16;
  bVar22 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,bVar18);
  *pbVar20 = *pbVar20 + bVar21 + bVar18;
  pbVar20 = (byte *)(iVar12 + 0x28 + iVar19 * 2);
  bVar18 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,bVar22);
  *pbVar20 = *pbVar20 + bVar21 + bVar22;
  bVar13 = *pbVar16;
  bVar10 = *pbVar16;
  *pbVar16 = bVar10 + bVar15 + bVar18;
  in_AF = 9 < (bVar14 & 0xf) | in_AF;
  bVar18 = 0x99 < bVar14 || (CARRY1(bVar13,bVar15) || CARRY1(bVar10 + bVar15,bVar18));
  bVar14 = bVar14 + in_AF * '\x06' + bVar18 * '`';
  pbVar20 = (byte *)(iVar12 + 0x29 + CONCAT31(uVar17,bVar14) * 2);
  bVar22 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,bVar18);
  *pbVar20 = *pbVar20 + bVar21 + bVar18;
  pbVar20 = (byte *)(extraout_ECX + 0x43);
  bVar10 = *pbVar20;
  bVar13 = *pbVar20;
  *pbVar20 = bVar13 + bVar21 + bVar22;
  in_AF = 9 < (bVar14 & 0xf) | in_AF;
  bVar18 = 0x99 < bVar14 || (CARRY1(bVar10,bVar21) || CARRY1(bVar13 + bVar21,bVar22));
  bVar14 = bVar14 + in_AF * '\x06' + bVar18 * '`';
  pbVar20 = (byte *)(iVar12 + -0x18efd8bc);
  bVar10 = *pbVar20;
  bVar23 = (byte)iVar2;
  bVar13 = *pbVar20;
  *pbVar20 = bVar13 + bVar23 + bVar18;
  in_AF = 9 < (bVar14 & 0xf) | in_AF;
  bVar18 = 0x99 < bVar14 || (CARRY1(bVar10,bVar23) || CARRY1(bVar13 + bVar23,bVar18));
  bVar14 = bVar14 + in_AF * '\x06' + bVar18 * '`';
  pbVar20 = (byte *)(iVar12 + -0x1defd8bb);
  bVar10 = *pbVar20;
  bVar13 = *pbVar20;
  *pbVar20 = bVar13 + bVar23 + bVar18;
  in_AF = 9 < (bVar14 & 0xf) | in_AF;
  bVar18 = 0x99 < bVar14 || (CARRY1(bVar10,bVar23) || CARRY1(bVar13 + bVar23,bVar18));
  bVar13 = bVar14 + in_AF * '\x06' + bVar18 * '`';
  bVar14 = (byte)(iVar12 + 3);
  bVar10 = bVar14 + bVar15;
  iVar19 = CONCAT31((int3)((uint)(iVar12 + 3) >> 8),bVar10 + bVar18);
  in_AF = 9 < (bVar13 & 0xf) | in_AF;
  bVar18 = 0x99 < bVar13 || (CARRY1(bVar14,bVar15) || CARRY1(bVar10,bVar18));
  bVar14 = bVar13 + in_AF * '\x06' + bVar18 * '`';
  pbVar20 = (byte *)(iVar19 + -0x1defd8be);
  bVar10 = *pbVar20;
  bVar13 = *pbVar20;
  *pbVar20 = bVar13 + bVar23 + bVar18;
  in_AF = 9 < (bVar14 & 0xf) | in_AF;
  bVar18 = 0x99 < bVar14 || (CARRY1(bVar10,bVar23) || CARRY1(bVar13 + bVar23,bVar18));
  bVar14 = bVar14 + in_AF * '\x06' + bVar18 * '`';
  pbVar20 = (byte *)(extraout_ECX + 0x7e102743);
  bVar10 = *pbVar20;
  bVar15 = (byte)((uint)iVar2 >> 8);
  bVar13 = *pbVar20 + bVar15;
  *pbVar20 = bVar13 + bVar18;
  in_AF = 9 < (bVar14 & 0xf) | in_AF;
  bVar18 = 0x99 < bVar14 || (CARRY1(bVar10,bVar15) || CARRY1(bVar13,bVar18));
  bVar14 = bVar14 + in_AF * '\x06' + bVar18 * '`';
  pbVar20 = (byte *)((int)&unaff_ESI[0x7e10274].klass + 3);
  bVar10 = *pbVar20;
  bVar13 = *pbVar20;
  *pbVar20 = bVar13 + bVar21 + bVar18;
  bVar18 = 0x99 < bVar14 || (CARRY1(bVar10,bVar21) || CARRY1(bVar13 + bVar21,bVar18));
  pcVar24 = (char *)((int)&unaff_ESI[4].klass + 3);
  *pcVar24 = *pcVar24 + (char)((uint)(iVar2 + 3) >> 8) +
            (0x99 < (byte)(bVar14 + (9 < (bVar14 & 0xf) | in_AF) * '\x06' + bVar18 * '`') ||
            (CARRY1(in_stack_25,bVar23 + 2) || CARRY1(in_stack_25 + bVar23 + 2,bVar18)))
  ;
  in((short)iVar19);
  *(undefined4 *)(actorNumber + 0x10) = 2;
  puVar26 = (undefined1 *)0x49102744;
  if (cRam_? == '\0') {
    ppORam49102740 = &TypeInfo__UnityEngine__Object;
    puVar27 = (undefined1 *)0x4910273c;
    puRam_? = &UNK_?;
    func_?();
    puVar26 = puVar27 + 4;
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    *(Object_1__Class **)(puVar26 + -4) = TypeInfo__UnityEngine__Object;
    *(undefined **)(puVar26 + -8) = &UNK_?;
    func_?();
  }
  uRam_? = 0;
  return;
code_?:
  pMVar28 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar6,actorNumber,(MethodInfo *)0x0);
  if (pMVar28 == (MVPlayer *)0x0) {
    return;
  }
  bVar7 = WinningConditionNotificationManager_IsFlagScoreBestInGame
                    ((int32_t)score,actorNumber,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    return;
  }
  goto code_?;
}

