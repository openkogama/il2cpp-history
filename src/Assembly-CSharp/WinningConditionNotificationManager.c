
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
      uVar6 = func_?();
      piVar7 = (int *)((int)uVar6 + -0x4cefd62f);
      bVar8 = *extraout_ECX;
      *extraout_ECX = *extraout_ECX >> 1;
      cRam_? = cRam_? + (char)piVar7 + (bVar8 & 1);
      bVar8 = *extraout_ECX;
      *extraout_ECX = *extraout_ECX >> 1;
      iVar9 = CONCAT22((short)((ulonglong)uVar6 >> 0x30),
                       CONCAT11((char)((ulonglong)uVar6 >> 0x28) + (char)((uint)unaff_EBX >> 8) +
                                (bVar8 & 1),(char)((ulonglong)uVar6 >> 0x20)));
      bVar8 = *extraout_ECX;
      *extraout_ECX = *extraout_ECX >> 1;
      cRam_? = cRam_? + (char)piVar7 + (bVar8 & 1);
      bVar8 = *extraout_ECX;
      *extraout_ECX = *extraout_ECX >> 1;
      extraout_ECX[iVar9 * 8] = extraout_ECX[iVar9 * 8] + (char)((uint)piVar7 >> 8) + (bVar8 & 1);
      *piVar7 = *piVar7 - iVar9;
      pcVar10 = (code *)swi(3);
      bVar3 = (*pcVar10)();
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Removing unreachable block (ram,0xADDR) */
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
  uStack_1 = GameStatCounterType__Enum_None;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)&uStack_1,(MethodInfo *)0x0);
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),(undefined1)counterType);
  if ((undefined1)counterType != uStack_1) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
    func_?(&
                    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                   );
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    cRam_? = '\x01';
  }
  uVar3 = (counterType & 0xff) - GameStatCounterType__Enum_Kill;
  if (uVar3 < 8) {
    (**(code **)(&UNK_? + uVar3 * 4))();
    return;
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar5 = (int)pMVar4 < 0;
  if (pMVar4 != (MVNetworkGame *)0x0) {
    this = (pMVar4->fields).playerContainer;
    bVar5 = (int)this < 0;
    if (this != (MVPlayerContainer *)0x0) {
      bVar6 = MVPlayerContainer::MVPlayerContainer_ContainsKey(this,actorNumber,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        switch(counterType & 0xff) {
        case GameStatCounterType__Enum_Kill:
        case GameStatCounterType__Enum_Collectible:
        case GameStatCounterType__Enum_OculusKill:
          return;
        case GameStatCounterType__Enum_Flag:
          return;
        default:
          return;
        case GameStatCounterType__Enum_TimeAttackFlag:
          goto code_?;
        }
      }
      return;
    }
  }
code_?:
  cVar7 = '\0';
  uVar8 = func_?();
  pMVar4 = (MVNetworkGame *)((ulonglong)uVar8 >> 0x20);
  puVar9 = (uint *)uVar8;
  bVar10 = (byte)uVar8;
  uVar11 = (undefined2)((ulonglong)uVar8 >> 0x10);
  if ((bool)cVar7 == bVar5) {
    *puVar9 = *puVar9 - (int)pMVar4;
    uVar2 = uVar2 | (uint)pMVar4;
    pMVar12 = (MVNetworkGame *)*puVar9;
    *puVar9 = *puVar9 - (int)pMVar4;
    pbVar13 = unaff_ESI + 1;
    uRam_? = *unaff_ESI;
    bVar14 = (byte)extraout_ECX & 0x1f;
    bVar10 = *extraout_ECX;
    *extraout_ECX = *extraout_ECX >> bVar14;
    bVar5 = ((uint)extraout_ECX & 0x1f) == 0;
    pcVar15 = (char *)(uVar2 + (int)pMVar4 * 8);
    *pcVar15 = *pcVar15 + (byte)extraout_ECX +
              (bVar5 * (pMVar12 < pMVar4) | !bVar5 * ((bVar10 >> bVar14 - 1 & 1) != 0));
    *puVar9 = *puVar9 - (int)pMVar4;
    piVar16 = (int *)((uint)puVar9 | 0xd3);
    *piVar16 = *piVar16 - (int)pMVar4;
    puVar9 = (uint *)(extraout_ECX + -1);
    if (puVar9 == (uint *)0x0 || *piVar16 != 0) {
      *piVar16 = *piVar16 - (int)pMVar4;
      puVar17 = (uint *)(CONCAT31((int3)((ulonglong)uVar8 >> 8),(char)piVar16) | 0xd3);
      *puVar17 = *puVar17 - (int)pMVar4;
      uVar2 = uVar2 | (uint)pMVar4;
      pMVar12 = (MVNetworkGame *)*puVar17;
      *puVar17 = *puVar17 - (int)pMVar4;
      bVar18 = (byte)puVar9;
      uVar3 = *puVar9;
      *puVar9 = *puVar9 >> (bVar18 & 0x1f);
      bVar5 = ((uint)puVar9 & 0x1f) == 0;
      bVar14 = bVar5 * (pMVar12 < pMVar4) | !bVar5 * ((uVar3 >> (bVar18 & 0x1f) - 1 & 1) != 0);
      bVar19 = (byte)((ulonglong)uVar8 >> 8);
      bVar20 = CARRY1(bRam_?,bVar19);
      bVar10 = bRam_? + bVar19;
      bRam_? = bVar10 + bVar14;
      uVar3 = *puVar9;
      *puVar9 = *puVar9 >> (bVar18 & 0x1f);
      bVar5 = ((uint)puVar9 & 0x1f) == 0;
      bVar21 = bVar5 * (bVar20 || CARRY1(bVar10,bVar14)) |
               !bVar5 * ((uVar3 >> (bVar18 & 0x1f) - 1 & 1) != 0);
      pbVar22 = (byte *)((int)&in_stack_23[-0x525b09].fields.ReceivedPlanetOwnershipData + 1);
      bVar10 = *pbVar22;
      bVar14 = *pbVar22;
      *pbVar22 = bVar14 + bVar19 + bVar21;
      bVar24 = (char)puVar17 + bVar19 * ')';
      puVar17 = (uint *)CONCAT22(uVar11,(ushort)bVar24);
      pcVar15 = (char *)((int)&in_stack_23[-1].fields.embeddedSiteConfigData.sites + 3);
      *pcVar15 = *pcVar15 + (char)uVar2 + (CARRY1(bVar10,bVar19) || CARRY1(bVar14 + bVar19,bVar21));
      pMVar4 = (MVNetworkGame *)*puVar17;
      *puVar17 = *puVar17 - (int)in_stack_23;
      uVar3 = *puVar9;
      bRam_? = bVar24;
      *puVar9 = *puVar9 >> (bVar18 & 0x1f);
      bVar5 = ((uint)puVar9 & 0x1f) == 0;
      bVar25 = bVar5 * (pMVar4 < in_stack_23) |
               !bVar5 * ((uVar3 >> (bVar18 & 0x1f) - 1 & 1) != 0);
      bVar10 = *pbVar13;
      bVar21 = (byte)(uVar2 >> 8);
      bVar14 = *pbVar13;
      *pbVar13 = bVar14 + bVar21 + bVar25;
      bVar19 = bVar24 % 0x29;
      piVar16 = (int *)CONCAT31((int3)(CONCAT22(uVar11,CONCAT11(bVar24 / 0x29,bVar24)) >> 8),bVar19);
      unaff_ESI[-0x2b] =
           unaff_ESI[-0x2b] + bVar18 + (CARRY1(bVar10,bVar21) || CARRY1(bVar14 + bVar21,bVar25));
      *piVar16 = *piVar16 - (int)in_stack_23;
      puVar9 = (uint *)CONCAT31((int3)(CONCAT22(uVar11,CONCAT11(bVar19 / 0x29,bVar19)) >> 8),
                                 bVar19 % 0x29);
      pMVar4 = (MVNetworkGame *)*puVar9;
      *puVar9 = *puVar9 - (int)in_stack_23;
      bVar10 = (bVar19 % 0x29) % 0x29;
      bVar5 = CARRY1(*pbVar13,bVar21) || CARRY1(*pbVar13 + bVar21,pMVar4 < in_stack_23);
      *pbVar13 = *pbVar13 + bVar21 + (pMVar4 < in_stack_23);
      puVar9 = (uint *)CONCAT31((int3)(CONCAT22(uVar11,CONCAT11(bVar10 / 0x29,bVar10)) >> 8),
                                 bVar10 % 0x29);
      pMVar4 = in_stack_23;
      in_stack_23 = in_stack_26;
code_?:
      piVar27 = &in_stack_23[-1].fields.embeddedSiteConfigData.siteEnum;
      *(char *)piVar27 = (char)*piVar27 + (char)uVar2 + bVar5;
      pMVar12 = (MVNetworkGame *)*puVar9;
      *puVar9 = *puVar9 - (int)pMVar4;
      pcVar15 = (char *)((int)&in_stack_23[-1].fields._Friends_k__BackingField + 3);
      *pcVar15 = *pcVar15 + (char)pMVar4 + (pMVar12 < pMVar4);
      in((short)pMVar4);
      pGVar28 = (in_stack_23->fields).GameEventManager;
      (pGVar28->fields).AvatarCommandsBuildMode =
           (GameEventManager_AvatarCommandsBuildModeManager *)0x2;
      (in_stack_23->fields).ReceivedItemFromQuery =
           (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
      (in_stack_23->fields).GameEventManager = pGVar28;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Object,in_stack_29);
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      return;
    }
    if (*piVar16 == 0) goto code_?;
  }
  else {
    if (bVar5) {
      pMVar12 = (MVNetworkGame *)*puVar9;
      *puVar9 = *puVar9 - (int)pMVar4;
      bVar14 = bVar10 % 0x29;
      puVar9 = (uint *)CONCAT31((int3)(CONCAT22(uVar11,CONCAT11(bVar10 / 0x29,bVar10)) >> 8),bVar14
                                );
      piVar27 = &in_stack_23[-1].fields.embeddedSiteConfigData.siteEnum;
      *(char *)piVar27 = (char)*piVar27 + (char)uVar2 + (pMVar12 < pMVar4);
      bVar5 = (MVNetworkGame *)*puVar9 < pMVar4;
      *puVar9 = *puVar9 - (int)pMVar4;
      puVar9 = (uint *)CONCAT31((int3)(CONCAT22(uVar11,CONCAT11(bVar14 / 0x29,bVar14)) >> 8),
                                 bVar14 % 0x29);
      goto code_?;
    }
    func_?(puVar9);
  }
  in_stack_23 = in_stack_30;
  *(int *)(uVar2 + 0x6a04c4) = *(int *)(uVar2 + 0x6a04c4) + 1;
code_?:
  NotificationController::NotificationController_PushNotification_2
            ((NotificationType__Enum)in_stack_23,
             (Dictionary_2_System_Object_System_Object_ *)in_stack_26,in_stack_29,
             in_stack_31);
  return;
code_?:
  in_stack_30 = (MVNetworkGame *)0x0;
  in_stack_31 = (MethodInfo *)&UNK_?;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar5 = (int)pMVar4 < 0;
  uVar2 = actorNumber;
  if (pMVar4 != (MVNetworkGame *)0x0) {
    in_stack_31 = (MethodInfo *)&UNK_?;
    pMVar32 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    bVar5 = (int)pMVar32 < 0;
    in_stack_30 = pMVar4;
    if (pMVar32 != (MVLocalPlayer *)0x0) {
      if ((pMVar32->fields)._._ActorNr_k__BackingField != actorNumber) {
        return;
      }
      return;
    }
  }
  goto code_?;
}

