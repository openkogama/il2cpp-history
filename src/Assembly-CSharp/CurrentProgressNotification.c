
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
      fVar1 = (fVar1 - (pFVar2->fields).RunStartTime) * _UNK_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar3 = (float10)func_?((double)fVar1);
      return (int)fVar3;
    }
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      return iVar4 - startTime;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Int32 ConvertSecondsToMilliSeconds(Single) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_ConvertSecondsToMilliSeconds
                  (CurrentProgressNotification *this,float seconds,MethodInfo *method)

{
  fVar1 = seconds * _UNK_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
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
  uVar1 = 0;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar3 = 0;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
  bVar3 = 0;
  if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
  (this->fields).avatarStartTime = (pMVar4->fields).joinTime;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar3 = 0;
  unaff_EBX = this;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
  bVar3 = 0;
  if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
  statType = (GameStatCounterType__Enum *)(pMVar4->fields)._._ActorNr_k__BackingField;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat(statType,(MethodInfo *)0x0)
  ;
  (this->fields).currentDisplayedStatType = uVar1;
  uVar5 = 0x1046eb1d00000000;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar3 = 0;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  this_05 = (pMVar2->fields).teamManager;
  bVar3 = 0;
  if (this_05 == (MVTeamManager *)0x0) goto code_?;
  pLVar6 = MVTeamManager::MVTeamManager_GetTeamList(this_05,(MethodInfo *)0x0);
  uVar7 = (undefined1)((uint)this_05 >> 0x18);
  bVar3 = 0;
  if (pLVar6 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
  if ((pLVar6->fields)._size < 2) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pGVar8 = (pMVar2->fields).gameStatCounterManager;
    GStack_9 = CONCAT31(0x1046eb,uVar7);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    bVar3 = 0;
    if ((pMVar4 == (MVLocalPlayer *)0x0) || (bVar3 = 0, pGVar8 == (GameStatCounterManager *)0x0))
    goto code_?;
    iVar10 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                       (pGVar8,GStack_9,(pMVar4->fields)._._Team_k__BackingField,(int32_t)statType,
                        (MethodInfo *)0x0);
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pGVar8 = (pMVar2->fields).gameStatCounterManager;
    GStack_9 = CONCAT31(0x1046eb,uVar7);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    bVar3 = 0;
    if ((pMVar4 == (MVLocalPlayer *)0x0) || (bVar3 = 0, pGVar8 == (GameStatCounterManager *)0x0))
    goto code_?;
    iVar10 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                       (pGVar8,GStack_9,(pMVar4->fields)._._Team_k__BackingField,(MethodInfo *)0x0)
    ;
  }
  iVar11 = (uint)CONCAT11(uVar7,uVar7) << 0x10;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    uVar7 = (undefined1)((uint)iVar11 >> 0x10);
    cRam_? = '\x01';
  }
  cVar12 = (char)((uint)iVar11 >> 0x18);
  iVar11 = 0;
  switch(uVar7) {
  case 1:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    break;
  case 2:
  case 8:
    iVar11 = iVar10;
    goto code_?;
  case 3:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
    ;
    break;
  default:
    goto code_?;
  case 6:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
    ;
  }
  bVar3 = 0;
  if (this_00 == (WinningConditionManager *)0x0) goto code_?;
  pOVar13 = MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType(this_00,method_00);
  pOVar14 = (Object__Class *)0x0;
  if (pOVar13 != (Object *)0x0) {
    pOVar14 = pOVar13[2].klass;
  }
  iVar11 = (int)pOVar14 - iVar10;
code_?:
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar3 = 0;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  this_01 = (pMVar2->fields).playerContainer;
  bVar3 = 0;
  if (this_01 == (MVPlayerContainer *)0x0) goto code_?;
  bVar15 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                    (this_01,(int32_t)((ulonglong)uVar5 >> 0x20),(MVPlayer **)&stack0xfffffff0,
                     (MethodInfo *)0x0);
  if (bVar15 == 0) {
    return;
  }
  pTVar16 = (this->fields).currentProgressText;
  (this->fields)._.timeSinceStart = 0.0;
  if (cVar12 == '\x02') {
    bVar3 = 0;
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    pTVar16 = (this->fields).scoreText;
    iVar17 = CurrentProgressNotification_GetStartTime(this,(MethodInfo *)0x0);
    if ((this->fields).currentDisplayedStatType == 8) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar18 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      bVar3 = 0;
      if (pFVar18 == (FlagDebriefingControl *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar19 = (float10)func_?();
      iVar20 = (int32_t)fVar19;
    }
    else {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar3 = 0;
      if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
      iVar20 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
      iVar20 = iVar20 - iVar17;
    }
    WinningConditionControl::WinningConditionControl_MakeIntoScoreText
              (iVar20,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
code_?:
    bVar3 = 0;
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    (this->fields).shouldShowCurrentTime = 1;
  }
  else {
    if (cVar12 == '\b') {
      bVar3 = 0;
      if (pTVar16 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar16->klass->vtable).set_text.method)();
      pTVar16 = (this->fields).scoreText;
      fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar18 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      bVar3 = 0;
      if (pFVar18 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar17 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,fVar21 - (pFVar18->fields).RunStartTime,(MethodInfo *)0x0);
      WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                (iVar17,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
      goto code_?;
    }
    bVar3 = 0;
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    pTVar16 = (this->fields).scoreText;
    WinningConditionControl::WinningConditionControl_MakeIntoScoreText
              (iVar11,CONCAT31((int3)((ulonglong)uVar5 >> 0x28),cVar12),(MethodInfo *)0x0);
    bVar3 = 0;
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    (this->fields).shouldShowCurrentTime = 0;
  }
  pNVar22 = (this->fields).fader;
  bVar3 = 0;
  if (pNVar22 != (NotificationFade *)0x0) {
    (pNVar22->fields).pauseAt = (pNVar22->fields).duration;
    this_02 = (pNVar22->fields).group;
    (pNVar22->fields).playing = 1;
    bVar3 = 0;
    if (this_02 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_02,0.0,(MethodInfo *)0x0);
      (pNVar22->fields).currentTime = 0.0;
      iVar10 = (uint)CONCAT11(cVar12,cVar12) << 0x10;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      index = 0;
      pLVar23 = (this->fields).winningConditionImages;
      while (bVar3 = 0, pLVar23 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0)
      {
        if ((pLVar23->fields)._size <= index) {
          cVar12 = (char)((uint)iVar10 >> 0x18);
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((cVar12 == '\x01') ||
             ((str0 = StringLiteral_STAR, cVar12 != '\x03' &&
              (str0 = ::StringLiteral__, cVar12 == '\x06')))) {
            str0 = StringLiteral_KILL;
          }
          if (1 < iVar11) {
            str0 = mscorlib.dll::System::String::String_Concat_3
                             (str0,StringLiteral_S,(MethodInfo *)0x0);
          }
          mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral__LEFT_,(MethodInfo *)0x0)
          ;
          pTVar16 = (this->fields).warningText;
          bVar3 = 0;
          if (pTVar16 != (Text *)0x0) {
            (*(code *)(pTVar16->klass->vtable).set_text.method)();
            pNVar22 = (this->fields).fader;
            bVar3 = 0;
            if (pNVar22 != (NotificationFade *)0x0) {
              pAVar24 = (pNVar22->fields).OnFinished;
              this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_04,(Object *)this,
                         MethodInfo__CurrentProgressNotification__DestroyNotification__,
                         (MethodInfo *)0x0);
              pAVar24 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar24,(Delegate *)this_04,(MethodInfo *)0x0);
              if (pAVar24 == (Action *)0x0) {
                (pNVar22->fields).OnFinished = (Action *)0x0;
                func_?();
                return;
              }
              pAVar25 = (Action *)0x0;
              if (pAVar24->klass == TypeInfo__System__Action) {
                pAVar25 = pAVar24;
              }
              bVar3 = 0;
              if (pAVar25 != (Action *)0x0) {
                (pNVar22->fields).OnFinished = pAVar25;
                pAVar25 = (Action *)0x0;
                if (pAVar24->klass == TypeInfo__System__Action) {
                  pAVar25 = pAVar24;
                }
                bVar3 = 0;
                if (pAVar25 != (Action *)0x0) {
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
        pLVar26 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionImages;
        bVar3 = 0;
        if (pLVar26 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar26,index,
                            MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                           );
        bVar3 = 0;
        if (RVar27 == (RegexCharClass_SingleRange)0x0) break;
        pLVar26 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionImages;
        if (*(char *)((int)RVar27 + 8) == (char)((uint)iVar10 >> 0x10)) {
          bVar3 = 0;
          if (pLVar26 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar26,index,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          bVar3 = 0;
          if (RVar27 == (RegexCharClass_SingleRange)0x0) break;
          bVar3 = 0;
          if (*(Component **)((int)RVar27 + 0xc) == (Component *)0x0) break;
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar27 + 0xc),(MethodInfo *)0x0);
          bVar3 = 0;
          if (this_03 == (GameObject *)0x0) break;
          GStack_9._0_1_ = 1;
        }
        else {
          bVar3 = 0;
          if (pLVar26 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar26,index,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          bVar3 = 0;
          if (RVar27 == (RegexCharClass_SingleRange)0x0) break;
          bVar3 = 0;
          if (*(Component **)((int)RVar27 + 0xc) == (Component *)0x0) break;
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar27 + 0xc),(MethodInfo *)0x0);
          bVar3 = 0;
          if (this_03 == (GameObject *)0x0) break;
          GStack_9._0_1_ = 0;
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_03,(undefined1)GStack_9,(MethodInfo *)0x0);
        index = index + 1;
        pLVar23 = (this->fields).winningConditionImages;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  in(extraout_DX);
  bVar28 = (byte)((uint)extraout_ECX >> 8);
  bVar29 = bVar28 + (byte)unaff_EBX;
  in(extraout_DX);
  pcVar30 = (char *)(CONCAT22((short)((uint)extraout_ECX >> 0x10),
                             CONCAT11(bVar29 + bVar3,(char)extraout_ECX)) + -0x14);
  *pcVar30 = *pcVar30 + (char)((uint)unaff_EBX >> 8) +
            (CARRY1(bVar28,(byte)unaff_EBX) || CARRY1(bVar29,bVar3));
  in(extraout_DX);
  in(extraout_DX);
  in(extraout_DX);
  in(extraout_DX);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
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

