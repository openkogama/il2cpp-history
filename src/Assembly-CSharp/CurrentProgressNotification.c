
/* Int32 CalculateCurrentTime(Int32) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_CalculateCurrentTime
                  (CurrentProgressNotification *this,int32_t startTime,MethodInfo *method)

{
  if ((this->fields).currentDisplayedStatType == 8) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    pcRam_? = pcVar1;
    fVar4 = (float)(*pcRam_?)();
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pFVar6 = (pMVar5->fields).flagDebriefingControl, pFVar6 != (FlagDebriefingControl *)0x0)) {
      fVar4 = (fVar4 - (pFVar6->fields).RunStartTime) * _UNK_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Math);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      dVar7 = (double)func_?((double)fVar4);
      return (int)dVar7;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (this_00 = (pMVar5->fields).game, this_00 != (MVNetworkGame *)0x0)) {
      iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      return iVar3 - startTime;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}


/* Int32 ConvertSecondsToMilliSeconds(Single) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_ConvertSecondsToMilliSeconds
                  (CurrentProgressNotification *this,float seconds,MethodInfo *method)

{
  fVar1 = seconds * _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar2 = (double)func_?((double)fVar1);
  return (int)dVar2;
}


/* Int32 GetScoreLeftToWin(GameStatCounterType, Int32) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_GetScoreLeftToWin
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


/* Int32 GetStartTime() */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_GetStartTime
                  (CurrentProgressNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    iVar4 = (this->fields).avatarStartTime;
    if (iVar4 <= (pMVar3->fields).startTime) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 == (MVGameControllerBase *)0x0) ||
          (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
         (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
         pMVar3 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      iVar4 = (pMVar3->fields).startTime;
    }
    return iVar4;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_Initialize
               (CurrentProgressNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CurrentProgressNotification__DestroyNotification__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_YOU_HAVE);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)0x0;
  auStackX_20[0] = GameStatCounterType__Enum_None;
  apOStack_2[0] = (Object *)0x0;
  iVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar4 == (MVGameControllerBase *)0x0) ||
       (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
      (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0)) ||
     (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
     pMVar7 == (MVLocalPlayer *)0x0)) goto code_?;
  bVar8 = cRam_? == '\0';
  (this->fields).avatarStartTime = (pMVar7->fields).joinTime;
  if (bVar8) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar4 == (MVGameControllerBase *)0x0) ||
      (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
     ((pMVar6 = (pMVar5->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0 ||
      (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
      pMVar7 == (MVLocalPlayer *)0x0)))) goto code_?;
  iVar9 = (pMVar7->fields)._._ActorNr_k__BackingField;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)auStackX_20,(MethodInfo *)0x0);
  uVar10 = auStackX_20[0];
  bVar8 = cRam_? == '\0';
  (this->fields).currentDisplayedStatType = auStackX_20[0];
  if (bVar8) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar4 == (MVGameControllerBase *)0x0) ||
      (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
     ((this_00 = (pMVar5->fields).teamManager, this_00 == (MVTeamManager *)0x0 ||
      (pLVar11 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0),
      pLVar11 == (List_1_MV_WorldObject_MVTeam_ *)0x0)))) goto code_?;
  if ((pLVar11->fields)._size < 2) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar4 == (MVGameControllerBase *)0x0) ||
       (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0))
    goto code_?;
    pGVar12 = (pMVar5->fields).gameStatCounterManager;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar4 == (MVGameControllerBase *)0x0) ||
         (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
        (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0)) ||
       ((pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
        pMVar7 == (MVLocalPlayer *)0x0 || (pGVar12 == (GameStatCounterManager *)0x0))))
    goto code_?;
    iVar13 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                       (pGVar12,(uint)(byte)uVar10,(pMVar7->fields)._._Team_k__BackingField,iVar9,
                        (MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar4 == (MVGameControllerBase *)0x0) ||
       (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0))
    goto code_?;
    pGVar12 = (pMVar5->fields).gameStatCounterManager;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar4 == (MVGameControllerBase *)0x0) ||
         (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
        (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0)) ||
       ((pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
        pMVar7 == (MVLocalPlayer *)0x0 || (pGVar12 == (GameStatCounterManager *)0x0))))
    goto code_?;
    iVar13 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                       (pGVar12,(uint)(byte)uVar10,(pMVar7->fields)._._Team_k__BackingField,
                        (MethodInfo *)0x0);
  }
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
  score = 0;
  switch(uVar10) {
  case 1:
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
    this_01 = (pMVar5->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    break;
  case 2:
  case 8:
    score = iVar13;
    goto code_?;
  case 3:
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
    this_01 = (pMVar5->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
    ;
    break;
  default:
    goto code_?;
  case 6:
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
    this_01 = (pMVar5->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
    ;
  }
  if (this_01 == (WinningConditionManager *)0x0) goto code_?;
  pOVar14 = MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType(this_01,method_00);
  if (pOVar14 != (Object *)0x0) {
    iVar3 = *(int *)&pOVar14[1].monitor;
  }
  score = iVar3 - iVar13;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar4 == (MVGameControllerBase *)0x0) ||
      (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
     (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (pMVar6->fields).players;
  if (this_02 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
  bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar9,apOStack_2,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                    );
  if (bVar15 == 0) {
    return;
  }
  pTVar16 = (this->fields).currentProgressText;
  (this->fields)._.timeSinceStart = 0.0;
  if (uVar10 == GameStatCounterType__Enum_Flag) {
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(pTVar16->klass->vtable).set_text.methodPtr)();
    pTVar16 = (this->fields).scoreText;
    uVar17 = 0;
    iVar9 = CurrentProgressNotification_GetStartTime(this,(MethodInfo *)0x0);
    if ((this->fields).currentDisplayedStatType == 8) {
      pcVar18 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      pcRam_? = pcVar18;
      fVar19 = (float)(*pcRam_?)();
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar4 == (MVGameControllerBase *)0x0) ||
         (pFVar20 = (pMVar4->fields).flagDebriefingControl, pFVar20 == (FlagDebriefingControl *)0x0)
         ) goto code_?;
      iVar21 = FUN_?((fVar19 - (pFVar20->fields).RunStartTime) * _UNK_?);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar4 == (MVGameControllerBase *)0x0) ||
         (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0))
      goto code_?;
      uVar17 = 0;
      iVar21 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar5,(MethodInfo *)0x0);
      iVar21 = iVar21 - iVar9;
    }
    statType = (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
code_?:
    pSVar22 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                        (iVar21,statType,(MethodInfo *)0x0);
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(pTVar16->klass->vtable).set_text.methodPtr)(pTVar16,pSVar22);
    (this->fields).shouldShowCurrentTime = 1;
  }
  else {
    if (uVar10 == GameStatCounterType__Enum_TimeAttackFlag) {
      if (pTVar16 == (Text *)0x0) goto code_?;
      pSVar22 = ::StringLiteral__;
      (*(pTVar16->klass->vtable).set_text.methodPtr)(pTVar16,::StringLiteral__);
      pTVar16 = (this->fields).scoreText;
      fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar20 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      if (pFVar20 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar21 = FUN_?((fVar19 - (pFVar20->fields).RunStartTime) * _UNK_?);
      statType = (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)pSVar22 >> 8),8);
      goto code_?;
    }
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(pTVar16->klass->vtable).set_text.methodPtr)(pTVar16,StringLiteral_YOU_HAVE);
    pTVar16 = (this->fields).scoreText;
    pSVar22 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                        (score,(uint)(byte)uVar10,(MethodInfo *)0x0);
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(pTVar16->klass->vtable).set_text.methodPtr)(pTVar16,pSVar22);
    (this->fields).shouldShowCurrentTime = 0;
  }
  pNVar23 = (this->fields).fader;
  if (pNVar23 != (NotificationFade *)0x0) {
    this_03 = (pNVar23->fields).group;
    (pNVar23->fields).playing = 1;
    (pNVar23->fields).pauseAt = (pNVar23->fields).duration;
    if (this_03 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_03,0.0,(MethodInfo *)0x0);
      bVar8 = cRam_? == '\0';
      (pNVar23->fields).currentTime = 0.0;
      if (bVar8) {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar24 = (this->fields).winningConditionImages;
      if (pLVar24 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
        lVar25 = 0x20;
        pAVar26 = pAVar1;
        while (uVar27 = (uint)pAVar26, (int)uVar27 < (pLVar24->fields)._size) {
          pLVar24 = (this->fields).winningConditionImages;
          if (pLVar24 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0)
          goto code_?;
          if ((uint)(pLVar24->fields)._size <= uVar27) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pCVar28 = (pLVar24->fields)._items;
          if (pCVar28 == (CurrentProgressNotification_WinninConditionImage__Array *)0x0)
          goto code_?;
          if ((uint)pCVar28->max_length <= uVar27) {
            FUN_?();
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          lVar29 = *(longlong *)((longlong)pCVar28->vector + lVar25 + -0x20);
          if (lVar29 == 0) goto code_?;
          pLVar24 = (this->fields).winningConditionImages;
          if (*(byte *)(lVar29 + 0x10) == uVar10) {
            lVar29 = FUN_?(pLVar24);
            if (((lVar29 == 0) || (*(Component **)(lVar29 + 0x18) == (Component *)0x0)) ||
               (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(*(Component **)(lVar29 + 0x18),(MethodInfo *)0x0)
               , this_04 == (GameObject *)0x0)) goto code_?;
            bVar15 = 1;
          }
          else {
            lVar29 = FUN_?(pLVar24);
            if (((lVar29 == 0) || (*(Component **)(lVar29 + 0x18) == (Component *)0x0)) ||
               (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(*(Component **)(lVar29 + 0x18),(MethodInfo *)0x0)
               , this_04 == (GameObject *)0x0)) goto code_?;
            bVar15 = 0;
          }
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_04,bVar15,(MethodInfo *)0x0);
          pLVar24 = (this->fields).winningConditionImages;
          pAVar26 = (Action *)(ulonglong)(uVar27 + 1);
          lVar25 = lVar25 + 8;
          if (pLVar24 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0)
          goto code_?;
        }
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_S);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_KILL);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_STAR);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral__LEFT_);
          LOCK();
          UNLOCK();
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_CURRENT_TIME);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((uVar10 == GameStatCounterType__Enum_Kill) ||
           ((pSVar22 = StringLiteral_STAR, uVar10 != GameStatCounterType__Enum_Collectible &&
            (pSVar22 = ::StringLiteral__, uVar10 == GameStatCounterType__Enum_OculusKill)))) {
          pSVar22 = StringLiteral_KILL;
        }
        if (1 < score) {
          pSVar22 = mscorlib.dll::System::String::String_Concat_4
                              (pSVar22,StringLiteral_S,(MethodInfo *)0x0);
        }
        pSVar22 = mscorlib.dll::System::String::String_Concat_4
                            (pSVar22,StringLiteral__LEFT_,(MethodInfo *)0x0);
        if ((uVar10 == GameStatCounterType__Enum_Flag) ||
           (uVar10 == GameStatCounterType__Enum_TimeAttackFlag)) {
          pSVar22 = StringLiteral_CURRENT_TIME;
        }
        pTVar16 = (this->fields).warningText;
        if (pTVar16 != (Text *)0x0) {
          (*(pTVar16->klass->vtable).set_text.methodPtr)
                    (pTVar16,pSVar22,(pTVar16->klass->vtable).set_text.method);
          pNVar23 = (this->fields).fader;
          if (pNVar23 != (NotificationFade *)0x0) {
            pAVar26 = (pNVar23->fields).OnFinished;
            this_05 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_05,(Object *)this,
                       MethodInfo__CurrentProgressNotification__DestroyNotification__,
                       (MethodInfo *)0x0);
            pAVar26 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar26,(Delegate *)this_05,(MethodInfo *)0x0);
            if (pAVar26 == (Action *)0x0) {
              (pNVar23->fields).OnFinished = (Action *)0x0;
            }
            else {
              pAVar30 = pAVar1;
              if (pAVar26->klass == TypeInfo__System__Action) {
                pAVar30 = pAVar26;
              }
              if (pAVar30 == (Action *)0x0) {
                FUN_?(pAVar26);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              (pNVar23->fields).OnFinished = pAVar30;
              if (pAVar26->klass == TypeInfo__System__Action) {
                pAVar1 = pAVar26;
              }
              if (pAVar1 == (Action *)0x0) {
                FUN_?(pAVar26);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
            }
            if (iRam_? == 0) {
              return;
            }
            uVar27 = (uint)((ulonglong)&(pNVar23->fields).OnFinished >> 0xc);
            uVar31 = (ulonglong)((uVar27 & 0x1fffff) >> 6);
            do {
              uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
              puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar32 == *puVar33;
              if (bVar8) {
                *puVar33 = uVar32 | 1L << (uVar27 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void SelectWinningConditionImage(GameStatCounterType, MVPlayer) */

void Assembly-CSharp.dll::CurrentProgressNotification::
     CurrentProgressNotification_SelectWinningConditionImage
               (CurrentProgressNotification *this,GameStatCounterType__Enum winningConditionType,
               MVPlayer *player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).winningConditionImages;
  uVar2 = 0;
  if (pLVar1 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
    lVar3 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).winningConditionImages;
      if (pLVar1 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pCVar5 = (pLVar1->fields)._items;
      if (pCVar5 == (CurrentProgressNotification_WinninConditionImage__Array *)0x0) break;
      if ((uint)pCVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pCVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      pLVar1 = (this->fields).winningConditionImages;
      if (*(char *)(lVar6 + 0x10) == (char)winningConditionType) {
        lVar6 = FUN_?(pLVar1);
        if (((lVar6 == 0) || (*(Component **)(lVar6 + 0x18) == (Component *)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)(lVar6 + 0x18),(MethodInfo *)0x0),
           this_00 == (GameObject *)0x0)) break;
        value = 1;
      }
      else {
        lVar6 = FUN_?(pLVar1);
        if (((lVar6 == 0) || (*(Component **)(lVar6 + 0x18) == (Component *)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)(lVar6 + 0x18),(MethodInfo *)0x0),
           this_00 == (GameObject *)0x0)) break;
        value = 0;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,value,(MethodInfo *)0x0);
      pLVar1 = (this->fields).winningConditionImages;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
      if (pLVar1 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetWarningText(GameStatCounterType, Int32) */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_SetWarningText
               (CurrentProgressNotification *this,GameStatCounterType__Enum winningConditionType,
               int32_t scoreLeft,MethodInfo *method)

{
  cVar1 = (char)winningConditionType;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_S);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_KILL);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_STAR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__LEFT_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CURRENT_TIME);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cVar1 == '\x01') ||
     ((pSVar2 = StringLiteral_STAR, cVar1 != '\x03' && (pSVar2 = ::StringLiteral__, cVar1 == '\x06')
      ))) {
    pSVar2 = StringLiteral_KILL;
  }
  if (1 < scoreLeft) {
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,StringLiteral_S,(MethodInfo *)0x0)
    ;
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar2,StringLiteral__LEFT_,(MethodInfo *)0x0);
  if ((cVar1 == '\x02') || (cVar1 == '\b')) {
    pSVar2 = StringLiteral_CURRENT_TIME;
  }
  pTVar3 = (this->fields).warningText;
  if (pTVar3 == (Text *)0x0) {
    FUN_?(0,pSVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pTVar3->klass->vtable).set_text.methodPtr)
            (pTVar3,pSVar2,(pTVar3->klass->vtable).set_text.method);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_Update
               (CurrentProgressNotification *this,MethodInfo *method)

{
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  if ((this->fields).shouldShowCurrentTime != 0) {
    pTVar1 = (this->fields).scoreText;
    startTime = CurrentProgressNotification_GetStartTime(this,(MethodInfo *)0x0);
    uVar2 = (ulonglong)startTime;
    score = CurrentProgressNotification_CalculateCurrentTime(this,startTime,(MethodInfo *)0x0);
    pSVar3 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (score,(GameStatCounterType__Enum)CONCAT71((int7)(uVar2 >> 8),2),
                        (MethodInfo *)0x0);
    if (pTVar1 == (Text *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar3,(pTVar1->klass->vtable).set_text.method);
  }
  return;
}

