
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
  bVar2 = true;
  iVar3 = unaff_EBX;
  pNVar4 = notificationType;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar5 = (pMVar1->fields).playerContainer;
    bVar2 = true;
    iVar3 = unaff_EBX;
    if (pMVar5 != (MVPlayerContainer *)0x0) {
      bVar6 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar5,actorNumber,(MethodInfo *)0x0)
      ;
      if (bVar6 == 0) {
        return 0;
      }
      unaff_ESI = (undefined1 *)actorNumber;
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
        bVar2 = pMVar1 == (MVNetworkGame *)0x0;
        iVar3 = scoreLeftToWin;
        if (!bVar2) {
          pMVar5 = (pMVar1->fields).playerContainer;
          bVar2 = pMVar5 == (MVPlayerContainer *)0x0;
          if (!bVar2) {
            pMVar7 = MVPlayerContainer::MVPlayerContainer_get_Item
                                (pMVar5,actorNumber,(MethodInfo *)0x0);
            if (pMVar7 == (MVPlayer *)0x0) {
              return 0;
            }
            bVar6 = WinningConditionNotificationManager_IsFlagScoreBestInGame
                              (scoreLeftToWin,actorNumber,(MethodInfo *)0x0);
            if (bVar6 == 0) {
              return 0;
            }
            goto code_?;
          }
        }
        break;
      default:
        goto code_?;
      case GameStatCounterType__Enum_TimeAttackFlag:
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = pMVar1 == (MVNetworkGame *)0x0;
        iVar3 = unaff_EBX;
        if (!bVar2) {
          pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          bVar2 = pMVar8 == (MVLocalPlayer *)0x0;
          iVar3 = unaff_EBX;
          if (!bVar2) {
            if ((pMVar8->fields)._._ActorNr_k__BackingField == actorNumber) {
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
    }
  }
  do {
    do {
      scoreLeftToWin = iVar3;
      uVar9 = func_?();
      iVar3 = (int)((ulonglong)uVar9 >> 0x20);
      pMVar1 = (MVNetworkGame *)uVar9;
      uVar10 = (undefined2)((ulonglong)uVar9 >> 0x20);
      if (bVar2) {
        pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar3);
        pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar3);
        out(*unaff_ESI,uVar10);
        *pNVar4 = *(NotificationType__Enum *)(unaff_ESI + 1);
        pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar3);
        out(unaff_ESI[5],uVar10);
        notificationType = pNVar4 + 2;
        actorNumber = (int32_t)(unaff_ESI + 10);
        pNVar4[1] = *(NotificationType__Enum *)(unaff_ESI + 6);
        pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar3);
        if (pMVar1->klass == (MVNetworkGame__Class *)0x0) {
          pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar3);
          out(*(undefined1 *)actorNumber,uVar10);
          *notificationType = *(NotificationType__Enum *)(unaff_ESI + 0xb);
          pMVar1->klass = (MVNetworkGame__Class *)((int)pMVar1->klass - iVar3);
          pNVar4[3] = *(NotificationType__Enum *)(unaff_ESI + 0xf);
          pcVar11 = (code *)swi(3);
          bVar6 = (*pcVar11)();
          return bVar6;
        }
code_?:
        bVar12 = pMVar1 == (MVNetworkGame *)0x0;
        unaff_ESI = (undefined1 *)actorNumber;
      }
      else {
        pbVar13 = (byte *)((int)pMVar1 + (int)pNVar4 * 4 + -0x75);
        *pbVar13 = *pbVar13 ^ (byte)((ulonglong)uVar9 >> 0x28);
        cRam_? = cRam_? + (char)uVar9;
        cVar14 = (char)uVar9 + extraout_CH;
        pMVar1 = (MVNetworkGame *)CONCAT31((int3)((ulonglong)uVar9 >> 8),cVar14);
        notificationType = (NotificationType__Enum *)((int)pNVar4 + 1);
        uVar15 = in(uVar10);
        *(undefined1 *)pNVar4 = uVar15;
        pcVar16 = (char *)(scoreLeftToWin + -0x3f7afb3c);
        *pcVar16 = *pcVar16 + cVar14;
        bVar12 = *pcVar16 == '\0';
      }
      bVar2 = true;
      iVar3 = scoreLeftToWin;
      pNVar4 = notificationType;
    } while (bVar12);
    pMVar5 = (pMVar1->fields).playerContainer;
    bVar2 = true;
  } while (pMVar5 == (MVPlayerContainer *)0x0);
  pMVar7 = MVPlayerContainer::MVPlayerContainer_get_Item
                      (pMVar5,(int32_t)unaff_ESI,(MethodInfo *)0x0);
  if ((pMVar7 != (MVPlayer *)0x0) &&
     (bVar6 = WinningConditionNotificationManager_IsFlagScoreBestInGame
                        (scoreLeftToWin,(int32_t)unaff_ESI,(MethodInfo *)0x0), bVar6 != 0)) {
code_?:
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
  data = (Dictionary_2_System_Object_System_Object_ *)
         CONCAT31((int3)((uint)unaff_EBX >> 8),(undefined1)counterType);
  if ((undefined1)counterType != uStack_1) {
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
  uVar2 = (counterType & 0xff) - GameStatCounterType__Enum_Kill;
  if (uVar2 < 8) {
    (**(code **)(&UNK_? + uVar2 * 4))();
    return;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 == (MVNetworkGame *)0x0) ||
     (this = (pMVar3->fields).playerContainer, this == (MVPlayerContainer *)0x0)) {
code_?:
    uVar4 = func_?();
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    uVar5 = (undefined3)((ulonglong)uVar4 >> 8);
    cVar6 = in((short)((ulonglong)uVar4 >> 0x20));
    puVar7 = (uint *)CONCAT31(uVar5,cVar6);
    iVar8 = unaff_ESI + 1;
    *puVar7 = *puVar7 - uVar2;
    if ((int)*puVar7 < 0) {
      uVar9 = *puVar7;
      *puVar7 = *puVar7 - uVar2;
      cVar6 = cVar6 + -0x59 + (uVar9 < uVar2);
      puVar7 = (uint *)CONCAT31(uVar5,cVar6);
      uVar9 = *puVar7;
      uVar10 = *puVar7;
      *puVar7 = *puVar7 - uVar2;
      if (SBORROW4(uVar10,uVar2) != (int)*puVar7 < 0) {
        *puVar7 = (int)puVar7 + (uint)(uVar9 < uVar2) + *puVar7;
        bVar11 = *puVar7 == 0;
        goto code_?;
      }
      uVar9 = *puVar7;
      uVar10 = *puVar7;
      *puVar7 = *puVar7 - uVar2;
      if (SBORROW4(uVar10,uVar2) == (int)*puVar7 < 0) {
        *puVar7 = *puVar7 - uVar2;
        iVar8 = unaff_ESI + 5;
        uVar9 = *puVar7;
        *puVar7 = *puVar7 - uVar2;
        if (SBORROW4(uVar9,uVar2) == (int)*puVar7 < 0) {
          *puVar7 = *puVar7 - uVar2;
          if ((int)*puVar7 < 0) {
            *puVar7 = *puVar7 - uVar2;
            return;
          }
          goto code_?;
        }
        LOCK();
        data[0x1ecac4].monitor = data[0x1ecac4].monitor + 1;
        UNLOCK();
        data = (Dictionary_2_System_Object_System_Object_ *)0x68a10111;
        pNVar12 = (NotificationController__Class *)
                  CONCAT31((int3)(CONCAT22((short)((uint)extraout_ECX >> 0x10),0x1000) >> 8),0x11);
      }
      else {
        puVar7 = (uint *)CONCAT31(uVar5,cVar6 + (uVar9 < uVar2) + '.');
code_?:
        uVar13 = *(undefined6 *)(iVar8 + (int)puVar7 * 8);
        *(int *)((int)&TypeInfo__NotificationController + extraout_ECX) =
             (int)(&stack0xffffffdc +
                  *(int *)((int)&TypeInfo__NotificationController + extraout_ECX));
        pNVar12 = (NotificationController__Class *)((int)uVar13 + 0xADDR);
      }
    }
    else {
      bVar11 = cRam_? == '\0';
code_?:
      pNVar12 = TypeInfo__NotificationController;
      if (bVar11) {
        func_?();
        cRam_? = '\x01';
        pNVar12 = TypeInfo__NotificationController;
      }
    }
    if ((pNVar12->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pNVar12);
    }
    NotificationController::NotificationController_PushNotification_2
              ((NotificationType__Enum)in_stack_14,data,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
  }
  else {
    bVar15 = MVPlayerContainer::MVPlayerContainer_ContainsKey(this,actorNumber,(MethodInfo *)0x0);
    if (bVar15 == 0) {
      return;
    }
    switch(counterType & 0xff) {
    case GameStatCounterType__Enum_Kill:
    case GameStatCounterType__Enum_Collectible:
    case GameStatCounterType__Enum_OculusKill:
      break;
    case GameStatCounterType__Enum_TimeAttackFlag:
      in_stack_14 = (MVNetworkGame *)0x0;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      data = (Dictionary_2_System_Object_System_Object_ *)actorNumber;
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
         in_stack_14 = pMVar3, pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
      if ((pMVar16->fields)._._ActorNr_k__BackingField == actorNumber) {
        return;
      }
    case GameStatCounterType__Enum_Flag:
    }
  }
  return;
}

