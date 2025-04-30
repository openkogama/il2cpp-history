
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
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar5 != (MVNetworkGame *)0x0) &&
     (this = (pMVar5->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    this_01 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffcc,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      team = pDVar6->_currentValue;
      uStack_1 = 1;
      while( true ) {
        do {
          bVar7 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&pOStack_8,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar7 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&pOStack_8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,in_stack_9);
            *unaff_FS_OFFSET = uStack_3;
            return iVar4;
          }
        } while ((team == (Object *)0x0) ||
                (actorNumber_00 = (int)team[6].klass, actorNumber_00 == actorNumber));
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar5 == (MVNetworkGame *)0x0) break;
        this_00 = (pMVar5->fields).gameStatCounterManager;
        if (this_00 == (GameStatCounterManager *)0x0) break;
        in_stack_9 = (MethodInfo *)0x0;
        team = (Object *)team[9].klass;
        iVar10 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          (this_00,statType,(MVTeam__Enum)team,actorNumber_00,(MethodInfo *)0x0);
        bVar7 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (iVar10,score,statType,(MethodInfo *)0x0);
        if (bVar7 != 0) {
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
    if (((scoreLeftToWin == 1) || (scoreLeftToWin == 5)) || (scoreLeftToWin == 0xf)) {
      *notificationType = NotificationType__Enum_WinningWarning;
      return 1;
    }
    break;
  case GameStatCounterType__Enum_TimeAttackFlag:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
       pMVar4 == (MVLocalPlayer *)0x0)) goto code_?;
    if ((pMVar4->fields)._._ActorNr_k__BackingField == actorNumber) {
      return 0;
    }
  case GameStatCounterType__Enum_Flag:
    if (scoreLeftToWin != 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EBX = (char *)scoreLeftToWin;
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0)) {
code_?:
        bVar5 = 0;
        uVar6 = func_?();
        uVar7 = (uint)((ulonglong)uVar6 >> 0x20);
        uVar8 = (uint)uVar6 - in_stack_9;
        bVar10 = (uint)uVar6 < in_stack_9 || uVar8 < bVar5;
        puVar11 = (uint *)(uVar8 - bVar5);
        pbVar12 = (byte *)((int)&stack0x00000025 + (int)puVar11 * 2);
        bVar5 = *pbVar12;
        bVar13 = (byte)unaff_EBX;
        bVar14 = *pbVar12;
        *pbVar12 = bVar14 + bVar13 + bVar10;
        *unaff_EBX = *unaff_EBX + bVar13 + (CARRY1(bVar5,bVar13) || CARRY1(bVar14 + bVar13,bVar10));
        *puVar11 = *puVar11 - uVar7;
        *puVar11 = *puVar11 - uVar7;
        uVar8 = *puVar11;
        *puVar11 = *puVar11 - uVar7;
        uVar15 = (int)puVar11 - CONCAT13(in_stack_16,in_stack_9._1_3_);
        piVar17 = (int *)(uVar15 - (uVar8 < uVar7));
        *(char *)((int)piVar17 + 0x3a102945) =
             *(char *)((int)piVar17 + 0x3a102945) + extraout_CH +
             (puVar11 < (uint *)CONCAT13(in_stack_16,in_stack_9._1_3_) ||
             uVar15 < (uVar8 < uVar7));
        *piVar17 = *piVar17 - uVar7;
        pcVar18 = (code *)swi(3);
        bVar3 = (*pcVar18)();
        return bVar3;
      }
      pMVar19 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar2,actorNumber,(MethodInfo *)0x0);
      if ((pMVar19 != (MVPlayer *)0x0) &&
         (bVar3 = WinningConditionNotificationManager_IsFlagScoreBestInGame
                            (scoreLeftToWin,actorNumber,(MethodInfo *)0x0), bVar3 != 0)) {
        *notificationType = NotificationType__Enum_FlagHighScore;
        return 1;
      }
    }
  }
  return 0;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  if ((undefined1)counterType == uStack_1) {
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
    uVar2 = (counterType & 0xff) - GameStatCounterType__Enum_Kill;
    piVar3 = (int *)CONCAT31((int3)((uint)unaff_EBX >> 8),(undefined1)counterType);
    iVar4 = 0;
    if (uVar2 < 8) {
      (**(code **)(&UNK_? + uVar2 * 4))();
      return;
    }
code_?:
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 == (MVNetworkGame *)0x0) ||
       (this = (pMVar5->fields).playerContainer, this == (MVPlayerContainer *)0x0)) {
      uVar6 = func_?();
      pcVar7 = (char *)((ulonglong)uVar6 >> 0x20);
      bVar8 = (in_stack_9 & 0x400) != 0;
      *(int *)uVar6 = *(int *)uVar6 - (int)pcVar7;
      cVar10 = (byte)uVar6 - *(byte *)(iVar4 + 0x29);
      piVar11 = (int *)CONCAT31((int3)((ulonglong)uVar6 >> 8),cVar10);
      cVar10 = (char)((uint)extraout_ECX >> 8) + cVar10 + ((byte)uVar6 < *(byte *)(iVar4 + 0x29));
      *piVar11 = *piVar11 - (int)pcVar7;
      piVar11 = (int *)((int)piVar11 + -0x2d102947);
      *piVar11 = *piVar11 - (int)pcVar7;
      uVar12 = (undefined3)((uint)piVar11 >> 8);
      piVar13 = (int *)CONCAT31(uVar12,(byte)piVar11 + *(byte *)(iVar4 + 0x2a));
      cRam_? = cRam_? + cVar10 + CARRY1((byte)piVar11,*(byte *)(iVar4 + 0x2a));
      *piVar13 = *piVar13 - (int)pcVar7;
      if (*piVar13 == 0) {
        pcVar14 = (char *)((int)piVar13 + 1);
        cVar15 = (char)pcVar14;
        *pcVar7 = *pcVar7 + cVar15;
        *pcVar14 = *pcVar14 + cVar15;
        *pcVar14 = *pcVar14 + cVar15;
        pcVar7 = (char *)(CONCAT22((short)((uint)extraout_ECX >> 0x10),
                                    CONCAT11(cVar10,(char)extraout_ECX)) + -0x16a2f7bb);
        *pcVar7 = *pcVar7 + (char)extraout_ECX;
      }
      else {
        *piVar13 = *piVar13 - (int)pcVar7;
        iVar16 = *piVar13;
        puVar17 = (uint *)(iVar4 + 0x2b);
        *puVar17 = *puVar17 << 0x10 | *puVar17 >> 0x10;
        if (iVar16 == 0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Object,in_stack_18);
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          return;
        }
        *piVar13 = *piVar13 - (int)pcVar7;
        *(int *)CONCAT31(uVar12,0x49) = *(int *)CONCAT31(uVar12,0x49) - (int)pcVar7;
        piVar11 = (int *)CONCAT31(uVar12,0x49);
        *piVar11 = *piVar11 - (int)pcVar7;
        if (*piVar11 != 0) {
          *piVar11 = *piVar11 - (int)pcVar7;
          *(int *)CONCAT31(uVar12,0x49) = *(int *)CONCAT31(uVar12,0x49) - (int)pcVar7;
          *piVar3 = *piVar3 - (int)pcVar7;
          *(int *)((int)piVar3 + -1) = *(int *)((int)piVar3 + -1) - (int)pcVar7;
          *(int *)((int)piVar3 + -2) = *(int *)((int)piVar3 + -2) - (int)pcVar7;
          *(int *)((int)piVar3 + -3) = *(int *)((int)piVar3 + -3) - (int)pcVar7;
          puVar19 = (undefined4 *)(iVar4 + 7 + (uint)bVar8 * -8);
          uVar20 = (undefined2)((ulonglong)uVar6 >> 0x20);
          uVar21 = in(uVar20);
          *(undefined4 *)(iVar4 + 3) = uVar21;
          piVar3[-1] = piVar3[-1] - (int)pcVar7;
          uVar21 = in(uVar20);
          *puVar19 = uVar21;
          *(int *)((int)piVar3 + -5) = *(int *)((int)piVar3 + -5) - (int)pcVar7;
          *(int *)((int)piVar3 + -6) = *(int *)((int)piVar3 + -6) - (int)pcVar7;
          uVar21 = in(uVar20);
          puVar19[(uint)bVar8 * -2 + 1] = uVar21;
          *(int *)((int)piVar3 + -7) = *(int *)((int)piVar3 + -7) - (int)pcVar7;
          piVar3[-2] = piVar3[-2] - (int)pcVar7;
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    bVar23 = MVPlayerContainer::MVPlayerContainer_ContainsKey(this,actorNumber,(MethodInfo *)0x0);
    if (bVar23 == 0) {
      return;
    }
    piVar3 = (int *)actorNumber;
    iVar4 = scoreCount;
    switch(uVar2) {
    case 0xADDR:
      goto code_?;
    default:
      break;
    }
  }
  return;
}

