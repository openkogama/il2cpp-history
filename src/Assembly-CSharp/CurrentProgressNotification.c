
/* Int32 CalculateCurrentTime(Int32) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_CalculateCurrentTime
                  (CurrentProgressNotification *this,int32_t startTime,MethodInfo *method)

{
  if ((this->fields).currentDisplayedStatType == 8) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 != (FlagDebriefingControl *)0x0) {
      iVar3 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                        (this,fVar1 - (pFVar2->fields).RunStartTime,(MethodInfo *)0x0);
      return iVar3;
    }
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      return iVar3 - startTime;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Int32 ConvertSecondsToMilliSeconds(Single) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_ConvertSecondsToMilliSeconds
                  (CurrentProgressNotification *this,float seconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = seconds * _UNK_?;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar2 = (float10)func_?((double)fVar1);
  return (int)fVar2;
}


/* Int32 GetScoreLeftToWin(GameStatCounterType, Int32) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_GetScoreLeftToWin
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


/* Int32 GetStartTime() */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_GetStartTime
                  (CurrentProgressNotification *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar2->fields).startTime < (this->fields).avatarStartTime) {
      return (this->fields).avatarStartTime;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
       pMVar2 != (MVNetworkGameStateListener *)0x0)) {
      return (pMVar2->fields).startTime;
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_Initialize
               (CurrentProgressNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  this_03 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__CurrentProgressNotification__DestroyNotification__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&StringLiteral_YOU_HAVE);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  uVar1 = GameStatCounterType__Enum_None;
  pAVar2 = unaff_EDI;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar4 = (byte)((uint)pAVar2 >> 0x18);
  bVar5 = 0;
  if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
  bVar4 = 0;
  pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
  bVar5 = 0;
  if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
  (this->fields).avatarStartTime = (pMVar6->fields).joinTime;
  unaff_ESI = (String **)&UNK_?;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar5 = 0;
  unaff_EBX = this_03;
  if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
  unaff_ESI = (String **)&UNK_?;
  pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
  bVar5 = 0;
  if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
  unaff_EDI = (Action *)(pMVar6->fields)._._ActorNr_k__BackingField;
  puVar7 = &UNK_?;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)&stack0xfffffff7,(MethodInfo *)0x0);
  uVar8 = 0;
  (this->fields).currentDisplayedStatType = uVar1;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar5 = 0;
  if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
  this_04 = (pMVar3->fields).teamManager;
  bVar5 = 0;
  if (this_04 == (MVTeamManager *)0x0) goto code_?;
  puVar9 = &UNK_?;
  pLVar10 = MVTeamManager::MVTeamManager_GetTeamList(this_04,(MethodInfo *)0x0);
  bVar5 = 0;
  if (pLVar10 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
  this._2_1_ = 0;
  this._3_1_ = 0;
  if ((pLVar10->fields)._size < 2) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar5 = 0;
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    pGVar11 = (pMVar3->fields).gameStatCounterManager;
    data._0_2_ = 0;
    data._2_1_ = '\0';
    GVar12 = CONCAT31((int3)((uint)uVar8 >> 8),(char)((uint)puVar9 >> 0x18));
    this._2_1_ = 0x45;
    this._3_1_ = 0x10;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar5 = 0;
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    data._0_2_ = SUB42(pMVar3,0);
    data._2_1_ = (char)((uint)pMVar3 >> 0x10);
    this._2_1_ = 0x45;
    this._3_1_ = 0x10;
    pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    bVar5 = 0;
    if ((pMVar6 == (MVLocalPlayer *)0x0) || (bVar5 = 0, pGVar11 == (GameStatCounterManager *)0x0))
    goto code_?;
    data._0_2_ = (undefined2)GVar12;
    data._2_1_ = (char)(GVar12 >> 0x10);
    this._2_1_ = (bool)((uint)pGVar11 >> 0x10);
    this._3_1_ = (undefined1)((uint)pGVar11 >> 0x18);
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
              (pGVar11,GVar12,(pMVar6->fields)._._Team_k__BackingField,(int32_t)unaff_EDI,
               (MethodInfo *)0x0);
  }
  else {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar5 = 0;
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    pGVar11 = (pMVar3->fields).gameStatCounterManager;
    data._0_2_ = 0;
    data._2_1_ = '\0';
    GVar12 = CONCAT31((int3)((uint)uVar8 >> 8),(char)((uint)puVar9 >> 0x18));
    this._2_1_ = 0x45;
    this._3_1_ = 0x10;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar5 = 0;
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    data._0_2_ = SUB42(pMVar3,0);
    data._2_1_ = (char)((uint)pMVar3 >> 0x10);
    this._2_1_ = 0x45;
    this._3_1_ = 0x10;
    pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    bVar5 = 0;
    if ((pMVar6 == (MVLocalPlayer *)0x0) || (bVar5 = 0, pGVar11 == (GameStatCounterManager *)0x0))
    goto code_?;
    data._0_2_ = SUB42(pGVar11,0);
    data._2_1_ = (char)((uint)pGVar11 >> 0x10);
    this._2_1_ = 0x45;
    this._3_1_ = 0x10;
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
              (pGVar11,GVar12,(pMVar6->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
  }
  uVar1 = (undefined1)((uint)puVar9 >> 0x18);
  uVar13 = SUB43(this_04,0);
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
  unaff_EDI = (Action *)0x0;
  if ((byte)uVar1 - 1 < 8) {
    (**(code **)(&UNK_? + ((byte)uVar1 - 1) * 4))();
    return;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar5 = 0;
  if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
  this_00 = (pMVar3->fields).playerContainer;
  bVar5 = 0;
  if (this_00 == (MVPlayerContainer *)0x0) goto code_?;
  bVar14 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                    (this_00,(int32_t)puVar7,(MVPlayer **)&stack0xffffffec,(MethodInfo *)0x0);
  if (bVar14 == 0) {
    return;
  }
  uVar1 = (undefined1)((uint)puVar9 >> 0x18);
  pTVar15 = (this_03->fields).currentProgressText;
  (this_03->fields)._.timeSinceStart = 0.0;
  if (uVar1 == GameStatCounterType__Enum_Flag) {
    bVar5 = 0;
    if (pTVar15 == (Text *)0x0) goto code_?;
    unaff_ESI = (String **)::StringLiteral__;
    (*(code *)(pTVar15->klass->vtable).set_text.method)
              (pTVar15,::StringLiteral__,
               (pTVar15->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar15 = (this_03->fields).scoreText;
    iVar16 = CurrentProgressNotification_GetStartTime(this_03,(MethodInfo *)0x0);
    bVar4 = 0;
    if ((this_03->fields).currentDisplayedStatType == 8) {
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      bVar4 = 0;
      pFVar18 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      bVar5 = 0;
      if (pFVar18 == (FlagDebriefingControl *)0x0) goto code_?;
      unaff_ESI = (String **)(fVar17 - (pFVar18->fields).RunStartTime);
      pCVar19 = this_03;
      iVar20 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this_03,(float)unaff_ESI,(MethodInfo *)0x0);
      bVar4 = (byte)((uint)pCVar19 >> 0x18);
    }
    else {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar5 = 0;
      if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
      unaff_ESI = (String **)0x0;
      iVar20 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar3,(MethodInfo *)0x0);
      bVar4 = (byte)((uint)pMVar3 >> 0x18);
      iVar20 = iVar20 - iVar16;
    }
    ppMVar21 = (MethodInfo **)
               WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                         (iVar20,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
code_?:
    bVar5 = 0;
    if (pTVar15 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar15->klass->vtable).set_text.method)
              (pTVar15,ppMVar21,(pTVar15->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
    ;
    (this_03->fields).shouldShowCurrentTime = 1;
  }
  else {
    if (uVar1 == GameStatCounterType__Enum_TimeAttackFlag) {
      bVar5 = 0;
      if (pTVar15 == (Text *)0x0) goto code_?;
      unaff_ESI = (String **)::StringLiteral__;
      (*(code *)(pTVar15->klass->vtable).set_text.method)
                (pTVar15,::StringLiteral__,
                 (pTVar15->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      bVar4 = (byte)((uint)pTVar15 >> 0x18);
      pTVar15 = (this_03->fields).scoreText;
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar18 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      bVar5 = 0;
      if (pFVar18 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar16 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this_03,fVar17 - (pFVar18->fields).RunStartTime,(MethodInfo *)0x0);
      ppMVar21 = (MethodInfo **)
                 WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                           (iVar16,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
      goto code_?;
    }
    bVar5 = 0;
    if (pTVar15 == (Text *)0x0) goto code_?;
    unaff_ESI = (String **)StringLiteral_YOU_HAVE;
    (*(code *)(pTVar15->klass->vtable).set_text.method)
              (pTVar15,StringLiteral_YOU_HAVE,
               (pTVar15->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    bVar4 = (byte)((uint)pTVar15 >> 0x18);
    pTVar15 = (this_03->fields).scoreText;
    ppMVar21 = (MethodInfo **)
               WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                         (0,CONCAT31(uVar13,(char)((uint)puVar9 >> 0x18)),(MethodInfo *)0x0);
    bVar5 = 0;
    if (pTVar15 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar15->klass->vtable).set_text.method)
              (pTVar15,ppMVar21,(pTVar15->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
    ;
    (this_03->fields).shouldShowCurrentTime = 0;
  }
  bVar4 = (byte)((uint)pTVar15 >> 0x18);
  pNVar22 = (this_03->fields).fader;
  bVar5 = 0;
  unaff_ESI = (String **)ppMVar21;
  if (pNVar22 != (NotificationFade *)0x0) {
    (pNVar22->fields).pauseAt = (pNVar22->fields).duration;
    this_01 = (pNVar22->fields).group;
    (pNVar22->fields).playing = 1;
    bVar5 = 0;
    if (this_01 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,0.0,(MethodInfo *)0x0);
      (pNVar22->fields).currentTime = 0.0;
      puVar7 = (undefined *)((uint)puVar9 & 0xff000000);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                       );
        ppMVar21 = &
                   MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
        ;
        pTVar15 = (Text *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      bVar4 = (byte)((uint)pTVar15 >> 0x18);
      pSVar23 = (String *)0x0;
      pLVar24 = (this_03->fields).winningConditionImages;
      unaff_ESI = (String **)ppMVar21;
      while (bVar5 = 0, pLVar24 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0)
      {
        bVar4 = (byte)((uint)pTVar15 >> 0x18);
        cVar25 = (char)((uint)puVar7 >> 0x18);
        if ((pLVar24->fields)._size <= (int)pSVar23) {
          uVar1 = (undefined1)((uint)puVar9 >> 0x18);
          if (cRam_? == '\0') {
            func_?(&StringLiteral_S);
            unaff_ESI = &StringLiteral_KILL;
            func_?();
            bVar4 = 0x11;
            func_?();
            func_?(&StringLiteral__LEFT_);
            func_?(&::StringLiteral__);
            func_?(&StringLiteral_CURRENT_TIME);
            cRam_? = '\x01';
          }
          if ((uVar1 == GameStatCounterType__Enum_Kill) ||
             ((pSVar23 = StringLiteral_STAR, uVar1 != GameStatCounterType__Enum_Collectible &&
              (pSVar23 = ::StringLiteral__, uVar1 == GameStatCounterType__Enum_OculusKill)))) {
            pSVar23 = StringLiteral_KILL;
          }
          pSVar23 = mscorlib.dll::System::String::String_Concat_3
                              (pSVar23,StringLiteral__LEFT_,(MethodInfo *)0x0);
          if ((uVar1 == GameStatCounterType__Enum_Flag) ||
             (uVar1 == GameStatCounterType__Enum_TimeAttackFlag)) {
            pSVar23 = StringLiteral_CURRENT_TIME;
          }
          pTVar15 = (this_03->fields).warningText;
          bVar5 = 0;
          if (pTVar15 != (Text *)0x0) {
            (*(code *)(pTVar15->klass->vtable).set_text.method)
                      (pTVar15,pSVar23,
                       (pTVar15->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            bVar4 = (byte)((uint)pTVar15 >> 0x18);
            pNVar22 = (this_03->fields).fader;
            bVar5 = 0;
            unaff_ESI = (String **)pSVar23;
            if (pNVar22 != (NotificationFade *)0x0) {
              unaff_EDI = (pNVar22->fields).OnFinished;
              this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_02,(Object *)this_03,
                         MethodInfo__CurrentProgressNotification__DestroyNotification__,
                         (MethodInfo *)0x0);
              unaff_ESI = (String **)0x0;
              pAVar2 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)unaff_EDI,(Delegate *)this_02,(MethodInfo *)0x0);
              bVar4 = (byte)((uint)this_02 >> 0x18);
              if (pAVar2 == (Action *)0x0) {
                (pNVar22->fields).OnFinished = (Action *)0x0;
                func_?();
                return;
              }
              pAVar26 = (Action *)0x0;
              if (pAVar2->klass == TypeInfo__System__Action) {
                pAVar26 = pAVar2;
              }
              bVar5 = 0;
              if (pAVar26 != (Action *)0x0) {
                (pNVar22->fields).OnFinished = pAVar26;
                pAVar26 = (Action *)0x0;
                if (pAVar2->klass == TypeInfo__System__Action) {
                  pAVar26 = pAVar2;
                }
                bVar5 = 0;
                if (pAVar26 != (Action *)0x0) {
                  func_?();
                  return;
                }
                goto code_?;
              }
              func_?();
            }
          }
          break;
        }
        pTVar15 = (Text *)(this_03->fields).winningConditionImages;
        bVar5 = 0;
        if (pTVar15 == (Text *)0x0) break;
        unaff_ESI = (String **)pSVar23;
        RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            pTVar15,(int32_t)pSVar23,
                            MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                           );
        bVar4 = (byte)((uint)pTVar15 >> 0x18);
        bVar5 = 0;
        if (RVar27 == (RegexCharClass_SingleRange)0x0) break;
        pLVar28 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this_03->fields).winningConditionImages;
        if (*(char *)((int)RVar27 + 8) == cVar25) {
          bVar5 = 0;
          if (pLVar28 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar28,(int32_t)pSVar23,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          bVar4 = (byte)((uint)pTVar15 >> 0x18);
          bVar5 = 0;
          if (RVar27 == (RegexCharClass_SingleRange)0x0) break;
          bVar5 = 0;
          if (*(Component **)((int)RVar27 + 0xc) == (Component *)0x0) break;
          puVar9 = &UNK_?;
          pGVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar27 + 0xc),(MethodInfo *)0x0);
          bVar4 = (byte)((uint)pTVar15 >> 0x18);
          bVar5 = 0;
          if (pGVar29 == (GameObject *)0x0) break;
          bVar14 = 1;
        }
        else {
          bVar5 = 0;
          if (pLVar28 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar28,(int32_t)pSVar23,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          bVar4 = (byte)((uint)pTVar15 >> 0x18);
          bVar5 = 0;
          if (RVar27 == (RegexCharClass_SingleRange)0x0) break;
          bVar5 = 0;
          if (*(Component **)((int)RVar27 + 0xc) == (Component *)0x0) break;
          puVar9 = &UNK_?;
          pGVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar27 + 0xc),(MethodInfo *)0x0);
          bVar4 = (byte)((uint)pTVar15 >> 0x18);
          bVar5 = 0;
          if (pGVar29 == (GameObject *)0x0) break;
          bVar14 = 0;
        }
        this._2_1_ = 0;
        this._3_1_ = 0;
        puVar7 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar29,bVar14,(MethodInfo *)0x0);
        bVar4 = (byte)((uint)pTVar15 >> 0x18);
        pSVar23 = (String *)((int)&pSVar23->klass + 1);
        pLVar24 = (this_03->fields).winningConditionImages;
      }
    }
  }
code_?:
  func_?();
  this_03 = unaff_EBX;
code_?:
  uVar8 = func_?();
  out(0xe0,uVar8);
  pbVar30 = (byte *)((int)&this_03[-1].fields._.timeSinceStart + 1);
  bVar31 = CARRY1(*pbVar30,extraout_DH) || CARRY1(*pbVar30 + extraout_DH,bVar5);
  *pbVar30 = *pbVar30 + extraout_DH + bVar5;
  bVar5 = *(byte *)&unaff_EDI->klass;
  bVar32 = *(char *)&unaff_EDI->klass + (byte)extraout_ECX;
  *(byte *)&unaff_EDI->klass = bVar32 + bVar31;
  if (extraout_ECX + -1 == 0 || *(char *)&unaff_EDI->klass != '\0') {
    bVar31 = CARRY1((byte)unaff_ESI,extraout_DH) ||
             CARRY1((byte)unaff_ESI + extraout_DH,
                    CARRY1(bVar4,extraout_DH) ||
                    CARRY1(bVar4 + extraout_DH,
                           CARRY1(bVar5,(byte)extraout_ECX) || CARRY1(bVar32,bVar31)));
    pbVar30 = (byte *)((int)&this_03[-1].fields._.timeSinceStart + 1);
    bVar5 = *pbVar30;
    bVar32 = (byte)(extraout_ECX + -1);
    bVar4 = *pbVar30 + bVar32;
    *pbVar30 = bVar4 + bVar31;
    bVar33 = (byte)((uint)unaff_ESI >> 0x10);
    pcVar34 = (char *)((int)&this_03[-1].fields._.timeSinceStart + 1);
    *pcVar34 = *pcVar34 + extraout_DH +
              (CARRY1(bVar33,extraout_DH) ||
              CARRY1(bVar33 + extraout_DH,CARRY1(bVar5,bVar32) || CARRY1(bVar4,bVar31)));
    pcVar35 = (code *)swi(3);
    (*pcVar35)();
    return;
  }
  iVar36 = CONCAT22(data._0_2_,CONCAT11(this._3_1_,this._2_1_));
  index = 0;
  iVar37 = *(int *)(iVar36 + 0x2c);
  if (iVar37 != 0) {
    while( true ) {
      if (*(int *)(iVar37 + 0xc) <= index) {
        return;
      }
      if ((*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)(iVar36 + 0x2c) ==
           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **
                               )(iVar36 + 0x2c),index,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             ), RVar27 == (RegexCharClass_SingleRange)0x0)) break;
      pLVar28 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)(iVar36 + 0x2c)
      ;
      if (*(char *)((int)RVar27 + 8) == data._2_1_) {
        if ((((pLVar28 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar28,index,
                                     MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                    ), RVar27 == (RegexCharClass_SingleRange)0x0)) ||
            (*(Component **)((int)RVar27 + 0xc) == (Component *)0x0)) ||
           (pGVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)((int)RVar27 + 0xc),(MethodInfo *)0x0),
           pGVar29 == (GameObject *)0x0)) break;
        this._2_1_ = 1;
      }
      else {
        if (((pLVar28 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (pLVar28,index,
                                 MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                ), RVar27 == (RegexCharClass_SingleRange)0x0)) ||
           ((*(Component **)((int)RVar27 + 0xc) == (Component *)0x0 ||
            (pGVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (*(Component **)((int)RVar27 + 0xc),(MethodInfo *)0x0),
            pGVar29 == (GameObject *)0x0)))) break;
        this._2_1_ = 0;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar29,this._2_1_,(MethodInfo *)0x0);
      iVar37 = *(int *)(iVar36 + 0x2c);
      index = index + 1;
      if (iVar37 == 0) break;
    }
  }
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void SelectWinningConditionImage(GameStatCounterType, MVPlayer) */

void Assembly-CSharp.dll::CurrentProgressNotification::
     CurrentProgressNotification_SelectWinningConditionImage
               (CurrentProgressNotification *this,GameStatCounterType__Enum winningConditionType,
               MVPlayer *player,MethodInfo *method)

{
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar2 = (this->fields).winningConditionImages;
  if (pLVar2 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
    while( true ) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pCVar1->fields).winningConditionImages;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                            ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pCVar1->fields).winningConditionImages;
      if (*(char *)((int)RVar4 + 8) == (undefined1)winningConditionType) {
        if ((((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar3,index,
                                    MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                   ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
            (*(Component **)((int)RVar4 + 0xc) == (Component *)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)((int)RVar4 + 0xc),(MethodInfo *)0x0),
           this_00 == (GameObject *)0x0)) break;
        this._0_1_ = 1;
      }
      else {
        if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar3,index,
                                MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                               ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
           ((*(Component **)((int)RVar4 + 0xc) == (Component *)0x0 ||
            (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (*(Component **)((int)RVar4 + 0xc),(MethodInfo *)0x0),
            this_00 == (GameObject *)0x0)))) break;
        this._0_1_ = 0;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,(bool)this,(MethodInfo *)0x0);
      pLVar2 = (pCVar1->fields).winningConditionImages;
      index = index + 1;
      if (pLVar2 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetWarningText(GameStatCounterType, Int32) */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_SetWarningText
               (CurrentProgressNotification *this,GameStatCounterType__Enum winningConditionType,
               int32_t scoreLeft,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_S);
    func_?(&StringLiteral_KILL);
    func_?(&StringLiteral_STAR);
    func_?(&StringLiteral__LEFT_);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_CURRENT_TIME);
    cRam_? = '\x01';
  }
  if (((undefined1)winningConditionType == GameStatCounterType__Enum_Kill) ||
     ((str0 = StringLiteral_STAR,
      (undefined1)winningConditionType != GameStatCounterType__Enum_Collectible &&
      (str0 = ::StringLiteral__,
      (undefined1)winningConditionType == GameStatCounterType__Enum_OculusKill)))) {
    str0 = StringLiteral_KILL;
  }
  if (1 < scoreLeft) {
    str0 = mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral_S,(MethodInfo *)0x0);
  }
  mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral__LEFT_,(MethodInfo *)0x0);
  pTVar1 = (this->fields).warningText;
  if (pTVar1 == (Text *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(pTVar1->klass->vtable).set_text.method)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_Update
               (CurrentProgressNotification *this,MethodInfo *method)

{
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  if ((this->fields).shouldShowCurrentTime == 0) {
    return;
  }
  pTVar1 = (this->fields).scoreText;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar3->fields).startTime < (this->fields).avatarStartTime) {
      iVar4 = (this->fields).avatarStartTime;
    }
    else {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 == (MVNetworkGame *)0x0) ||
         (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
         pMVar3 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      iVar4 = (pMVar3->fields).startTime;
    }
    iVar4 = CurrentProgressNotification_CalculateCurrentTime(this,iVar4,(MethodInfo *)0x0);
    pSStack5 =
         WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                   (iVar4,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      pIStack6 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      pTStack7 = pTVar1;
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

