
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
  unaff_ESI = (NotificationType__Enum *)actorNumber;
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
    unaff_EBX = (char *)scoreLeftToWin;
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
      *notificationType = *unaff_ESI;
      bVar7 = *extraout_ECX;
      bVar8 = (byte)((uint)extraout_ECX >> 8);
      *extraout_ECX = *extraout_ECX + bVar8;
      *unaff_EBX = *unaff_EBX + (char)((ulonglong)uVar6 >> 0x20) + CARRY1(bVar7,bVar8);
      *(int *)uVar6 = *(int *)uVar6 - (int)((ulonglong)uVar6 >> 0x20);
      notificationType[1] = unaff_ESI[1];
      bVar7 = *extraout_ECX;
      *extraout_ECX = *extraout_ECX + bVar8;
      *(char *)(unaff_ESI + -0x187bf5be) =
           (char)unaff_ESI[-0x187bf5be] + (char)unaff_EBX + CARRY1(bVar7,bVar8);
      *extraout_ECX = *extraout_ECX + bVar8;
      *extraout_ECX = *extraout_ECX + bVar8;
      *extraout_ECX = *extraout_ECX + bVar8;
      pcVar9 = (code *)swi(3);
      bVar3 = (*pcVar9)();
      return bVar3;
    }
    if ((pMVar5->fields)._._ActorNr_k__BackingField == actorNumber) {
      return 0;
    }
    if (scoreLeftToWin == 0) {
      return 0;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    unaff_EBX = (char *)scoreLeftToWin;
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


/* Void UpdateNotification(Int32, GameStatCounterType, Int32) */

void Assembly-CSharp.dll::WinningConditionNotificationManager::
     WinningConditionNotificationManager_UpdateNotification
               (int32_t actorNumber,GameStatCounterType__Enum counterType,int32_t scoreCount,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    ppDStackY_34 = (Dictionary_2_System_Object_System_Object___Class **)&UNK_?;
    func_?();
    ppDStackY_34 = &
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
    ;
    ppGStackY_38 = (GameStatCounterType__Enum__Class **)&UNK_?;
    func_?();
    ppGStackY_38 = &TypeInfo__GameStatCounterType;
    ppIStackY_3c = (Int32__Class **)&UNK_?;
    func_?();
    ppIStackY_3c = &TypeInfo__System__Int32;
    puStackY_40 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  uStack_1 = GameStatCounterType__Enum_None;
  ppDStackY_34 = (Dictionary_2_System_Object_System_Object___Class **)&UNK_?;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)&uStack_1,(MethodInfo *)0x0);
  GVar2 = counterType;
  iVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),(undefined1)counterType);
  if ((undefined1)counterType != uStack_1) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  uVar4 = (GVar2 & 0xff) - GameStatCounterType__Enum_Kill;
  if (uVar4 < 8) {
    (**(code **)(&UNK_? + uVar4 * 4))();
    return;
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  iVar6 = actorNumber;
  if ((pMVar5 != (MVNetworkGame *)0x0) &&
     (this = (pMVar5->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    bVar7 = MVPlayerContainer::MVPlayerContainer_ContainsKey(this,actorNumber,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      switch(counterType & 0xff) {
      case GameStatCounterType__Enum_Kill:
      case GameStatCounterType__Enum_Collectible:
      case GameStatCounterType__Enum_OculusKill:
        break;
      case GameStatCounterType__Enum_TimeAttackFlag:
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        iVar3 = iVar6;
        if ((pMVar5 == (MVNetworkGame *)0x0) ||
           (pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
           pMVar8 == (MVLocalPlayer *)0x0)) goto code_?;
        if ((pMVar8->fields)._._ActorNr_k__BackingField == iVar6) {
          return;
        }
      case GameStatCounterType__Enum_Flag:
      }
    }
    return;
  }
code_?:
  cVar9 = '\0';
  uVar10 = func_?();
  piVar11 = (int *)((ulonglong)uVar10 >> 0x20);
  cVar9 = ((char)uVar10 + -2) - cVar9;
  piVar12 = (int *)CONCAT31((int3)((ulonglong)uVar10 >> 8),cVar9);
  *piVar12 = *piVar12 - (int)piVar11;
  bVar13 = (byte)((uint)extraout_ECX >> 8);
  uVar14 = (undefined2)((uint)extraout_ECX >> 0x10);
  uVar15 = SUB41(extraout_ECX,0);
  bVar16 = bVar13 + *extraout_ECX;
  pbVar17 = (byte *)CONCAT22(uVar14,CONCAT11(bVar16,uVar15));
  pcVar18 = (char *)((int)piVar11 + 0x2ac1029 + (int)piVar12);
  *pcVar18 = *pcVar18 + bVar16 + CARRY1(bVar13,*extraout_ECX);
  *piVar12 = *piVar12 - (int)piVar11;
  *piVar11 = *piVar11 + 0x2ac1029;
  *piVar12 = *piVar12 - (int)piVar11;
  bVar13 = bVar16 + *pbVar17;
  pbVar19 = (byte *)CONCAT22(uVar14,CONCAT11(bVar13,uVar15));
  cRam_? = cRam_? + cVar9 + CARRY1(bVar16,*pbVar17);
  *piVar12 = *piVar12 - (int)piVar11;
  cVar20 = bVar13 + *pbVar19;
  puVar21 = (uint *)CONCAT22(uVar14,CONCAT11(cVar20,uVar15));
  *(char *)((int)piVar11 + 5) = *(char *)((int)piVar11 + 5) + cVar9 + CARRY1(bVar13,*pbVar19);
  *piVar12 = *piVar12 - (int)piVar11;
  *(int *)((int)piVar12 + 0x2fa1029) = *(int *)((int)piVar12 + 0x2fa1029) - ((int)piVar11 + 1);
  iVar22 = (int)piVar11 + 2;
  piVar12 = (int *)((int)piVar12 + 0x6132052);
  *piVar12 = *piVar12 - iVar22;
  *piVar12 = *piVar12 - iVar22;
  out((short)iVar22,(char)piVar12);
  uVar4 = *puVar21;
  puVar23 = &stack0xfffffffc + *puVar21;
  puVar24 = puVar23 + *puVar21;
  cVar25 = (char)((uint)iVar3 >> 8);
  cVar9 = cVar20 + cVar25 + CARRY4((uint)puVar23,*puVar21);
  puVar21 = (uint *)CONCAT22(uVar14,CONCAT11(cVar9,uVar15));
  puVar23 = puVar24 + *puVar21;
  cVar9 = cVar9 + cVar25 + CARRY4((uint)puVar24,*puVar21);
  puVar21 = (uint *)CONCAT22(uVar14,CONCAT11(cVar9,uVar15));
  uVar26 = *puVar21;
  puVar24 = puVar23 + *puVar21;
  uVar27 = *puVar21;
  cVar9 = cVar9 + cVar25 + CARRY4((uint)puVar24,*puVar21);
  puVar21 = (uint *)CONCAT22(uVar14,CONCAT11(cVar9,uVar15));
  uVar28 = *puVar21;
  puVar29 = puVar24 + uVar27 + *puVar21;
  uVar30 = *puVar21;
  puVar29[uVar30 - 0x75] = puVar29[uVar30 - 0x75] + (char)iVar22 + CARRY4((uint)puVar29,*puVar21);
  in(CONCAT11((char)((uint)iVar22 >> 8) + (char)iVar3 * '\x02' +
              CARRY4((uint)&stack0xfffffffc,uVar4) + CARRY4((uint)puVar23,uVar26) + cVar9 +
              CARRY4((uint)(puVar24 + uVar27),uVar28),(char)iVar22));
  iVar22 = *(int *)(puVar29 + uVar30 + 8);
  *(undefined4 *)(iVar22 + 0x10) = 2;
  *(undefined4 *)(puVar29 + uVar30 + 0xc) = 0;
  *(int *)(puVar29 + uVar30 + 8) = iVar22;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  return;
}

