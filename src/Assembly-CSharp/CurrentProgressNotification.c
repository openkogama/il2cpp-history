
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
  uStack_1 = (undefined *)((uint)uStack_1 & 0xffffff);
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
  unaff_EDI = (Action *)(pMVar4->fields)._._ActorNr_k__BackingField;
  puVar5 = &UNK_?;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)((int)&uStack_1 + 3),(MethodInfo *)0x0);
  uVar6 = 0;
  (this->fields).currentDisplayedStatType = uStack_1._3_1_;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar3 = 0;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  this_04 = (pMVar2->fields).teamManager;
  bVar3 = 0;
  if (this_04 == (MVTeamManager *)0x0) goto code_?;
  pLVar7 = MVTeamManager::MVTeamManager_GetTeamList(this_04,(MethodInfo *)0x0);
  bVar3 = 0;
  if (pLVar7 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
  if ((pLVar7->fields)._size < 2) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pGVar8 = (pMVar2->fields).gameStatCounterManager;
    GVar9 = CONCAT31((int3)((uint)uVar6 >> 8),uStack_1._3_1_);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    bVar3 = 0;
    if ((pMVar4 == (MVLocalPlayer *)0x0) || (bVar3 = 0, pGVar8 == (GameStatCounterManager *)0x0))
    goto code_?;
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
              (pGVar8,GVar9,(pMVar4->fields)._._Team_k__BackingField,(int32_t)unaff_EDI,
               (MethodInfo *)0x0);
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pGVar8 = (pMVar2->fields).gameStatCounterManager;
    GVar9 = CONCAT31((int3)((uint)uVar6 >> 8),uStack_1._3_1_);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    bVar3 = 0;
    if ((pMVar4 == (MVLocalPlayer *)0x0) || (bVar3 = 0, pGVar8 == (GameStatCounterManager *)0x0))
    goto code_?;
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
              (pGVar8,GVar9,(pMVar4->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
  }
  uVar10 = SUB43(this_04,0);
  bVar3 = uStack_1._3_1_;
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
  if (bVar3 - 1 < 8) {
    (**(code **)(&UNK_? + (bVar3 - 1) * 4))();
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar3 = 0;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  this_00 = (pMVar2->fields).playerContainer;
  bVar3 = 0;
  if (this_00 == (MVPlayerContainer *)0x0) goto code_?;
  bVar11 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                    (this_00,(int32_t)puVar5,(MVPlayer **)&stack0xffffffec,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    return;
  }
  pTVar12 = (this->fields).currentProgressText;
  (this->fields)._.timeSinceStart = 0.0;
  if (uStack_1._3_1_ == '\x02') {
    bVar3 = 0;
    if (pTVar12 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar12->klass->vtable).set_text.method)
              (pTVar12,::StringLiteral__,
               (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar12 = (this->fields).scoreText;
    iVar13 = CurrentProgressNotification_GetStartTime(this,(MethodInfo *)0x0);
    if ((this->fields).currentDisplayedStatType == 8) {
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar15 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      bVar3 = 0;
      if (pFVar15 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar16 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,fVar14 - (pFVar15->fields).RunStartTime,(MethodInfo *)0x0);
    }
    else {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar3 = 0;
      if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
      iVar16 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
      iVar16 = iVar16 - iVar13;
    }
    pSVar17 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                        (iVar16,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
code_?:
    bVar3 = 0;
    if (pTVar12 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar12->klass->vtable).set_text.method)
              (pTVar12,pSVar17,(pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (this->fields).shouldShowCurrentTime = 1;
  }
  else {
    if (uStack_1._3_1_ == '\b') {
      bVar3 = 0;
      if (pTVar12 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar12->klass->vtable).set_text.method)
                (pTVar12,::StringLiteral__,
                 (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar12 = (this->fields).scoreText;
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar15 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      bVar3 = 0;
      if (pFVar15 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar13 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,fVar14 - (pFVar15->fields).RunStartTime,(MethodInfo *)0x0);
      pSVar17 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                          (iVar13,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
      goto code_?;
    }
    bVar3 = 0;
    if (pTVar12 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar12->klass->vtable).set_text.method)
              (pTVar12,StringLiteral_YOU_HAVE,
               (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar12 = (this->fields).scoreText;
    pSVar17 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                        (0,CONCAT31(uVar10,uStack_1._3_1_),(MethodInfo *)0x0);
    bVar3 = 0;
    if (pTVar12 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar12->klass->vtable).set_text.method)
              (pTVar12,pSVar17,(pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (this->fields).shouldShowCurrentTime = 0;
  }
  pNVar18 = (this->fields).fader;
  bVar3 = 0;
  if (pNVar18 != (NotificationFade *)0x0) {
    (pNVar18->fields).pauseAt = (pNVar18->fields).duration;
    this_01 = (pNVar18->fields).group;
    (pNVar18->fields).playing = 1;
    bVar3 = 0;
    if (this_01 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,0.0,(MethodInfo *)0x0);
      (pNVar18->fields).currentTime = 0.0;
      puVar5 = (undefined *)((uint)uStack_1 & 0xff000000);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      iVar19 = 0;
      pLVar20 = (this->fields).winningConditionImages;
      puVar21 = uStack_1;
      while (bVar3 = 0, uStack_1 = puVar21,
            pLVar20 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
        cVar22 = (char)((uint)puVar5 >> 0x18);
        if ((pLVar20->fields)._size <= iVar19) {
          uStack_1._3_1_ = (uint8_t)((uint)puVar21 >> 0x18);
          cVar22 = uStack_1._3_1_;
          if (cRam_? == '\0') {
            func_?(&StringLiteral_S);
            func_?(&StringLiteral_KILL);
            func_?(&StringLiteral_STAR);
            func_?(&StringLiteral__LEFT_);
            func_?(&::StringLiteral__);
            func_?(&StringLiteral_CURRENT_TIME);
            cRam_? = '\x01';
            puVar21 = uStack_1;
          }
          uStack_1 = puVar21;
          if ((cVar22 == '\x01') ||
             ((pSVar17 = StringLiteral_STAR, cVar22 != '\x03' &&
              (pSVar17 = ::StringLiteral__, cVar22 == '\x06')))) {
            pSVar17 = StringLiteral_KILL;
          }
          pSVar17 = mscorlib.dll::System::String::String_Concat_3
                              (pSVar17,StringLiteral__LEFT_,(MethodInfo *)0x0);
          if ((cVar22 == '\x02') || (cVar22 == '\b')) {
            pSVar17 = StringLiteral_CURRENT_TIME;
          }
          pTVar12 = (this->fields).warningText;
          bVar3 = 0;
          if (pTVar12 != (Text *)0x0) {
            (*(code *)(pTVar12->klass->vtable).set_text.method)
                      (pTVar12,pSVar17,
                       (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pNVar18 = (this->fields).fader;
            bVar3 = 0;
            if (pNVar18 != (NotificationFade *)0x0) {
              unaff_EDI = (pNVar18->fields).OnFinished;
              this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_03,(Object *)this,
                         MethodInfo__CurrentProgressNotification__DestroyNotification__,
                         (MethodInfo *)0x0);
              pAVar23 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)unaff_EDI,(Delegate *)this_03,(MethodInfo *)0x0);
              if (pAVar23 == (Action *)0x0) {
                (pNVar18->fields).OnFinished = (Action *)0x0;
                func_?();
                return;
              }
              pAVar24 = (Action *)0x0;
              if (pAVar23->klass == TypeInfo__System__Action) {
                pAVar24 = pAVar23;
              }
              bVar3 = 0;
              if (pAVar24 != (Action *)0x0) {
                (pNVar18->fields).OnFinished = pAVar24;
                pAVar24 = (Action *)0x0;
                if (pAVar23->klass == TypeInfo__System__Action) {
                  pAVar24 = pAVar23;
                }
                bVar3 = 0;
                if (pAVar24 != (Action *)0x0) {
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
        pLVar25 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionImages;
        bVar3 = 0;
        if (pLVar25 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        RVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar25,iVar19,
                            MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                           );
        bVar3 = 0;
        if (RVar26 == (RegexCharClass_SingleRange)0x0) break;
        pLVar25 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionImages;
        if (*(char *)((int)RVar26 + 8) == cVar22) {
          bVar3 = 0;
          if (pLVar25 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar25,iVar19,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          bVar3 = 0;
          if (RVar26 == (RegexCharClass_SingleRange)0x0) break;
          bVar3 = 0;
          if (*(Component **)((int)RVar26 + 0xc) == (Component *)0x0) break;
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar26 + 0xc),(MethodInfo *)0x0);
          bVar3 = 0;
          if (this_02 == (GameObject *)0x0) break;
          bVar11 = 1;
        }
        else {
          bVar3 = 0;
          if (pLVar25 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar25,iVar19,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          bVar3 = 0;
          if (RVar26 == (RegexCharClass_SingleRange)0x0) break;
          bVar3 = 0;
          if (*(Component **)((int)RVar26 + 0xc) == (Component *)0x0) break;
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar26 + 0xc),(MethodInfo *)0x0);
          bVar3 = 0;
          if (this_02 == (GameObject *)0x0) break;
          bVar11 = 0;
        }
        puVar5 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,bVar11,(MethodInfo *)0x0);
        iVar19 = iVar19 + 1;
        puVar21 = uStack_1;
        pLVar20 = (this->fields).winningConditionImages;
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar27 = func_?();
  iVar19 = (int)((ulonglong)uVar27 >> 0x20);
  out(0x8f,(int)uVar27);
  pCVar28 = unaff_EBX + -2;
  bVar29 = (byte)((uint)(iVar19 + 1) >> 8);
  bVar30 = *(char *)&pCVar28->klass + bVar29;
  bVar31 = CARRY1(*(byte *)&pCVar28->klass,bVar29) || CARRY1(bVar30,bVar3);
  *(byte *)&pCVar28->klass = bVar30 + bVar3;
  bVar3 = *(char *)&unaff_EDI->klass + extraout_CL;
  bVar32 = CARRY1(*(byte *)&unaff_EDI->klass,extraout_CL) || CARRY1(bVar3,bVar31);
  *(byte *)&unaff_EDI->klass = bVar3 + bVar31;
  bVar30 = (byte)((uint)(iVar19 + 3) >> 8);
  bVar3 = bStack_33 + bVar30;
  bVar31 = CARRY1(bStack_33,bVar30) || CARRY1(bVar3,bVar32);
  bVar3 = bVar3 + bVar32;
  bVar29 = (byte)((uint)(iVar19 + 4) >> 8);
  bVar30 = bVar3 + bVar29;
  bVar32 = CARRY1(bVar3,bVar29) || CARRY1(bVar30,bVar31);
  bVar30 = bVar30 + bVar31;
  pCVar28 = unaff_EBX + -2;
  bVar3 = *(byte *)&pCVar28->klass;
  bVar29 = *(char *)&pCVar28->klass + extraout_CL;
  *(byte *)&pCVar28->klass = bVar29 + bVar32;
  bVar34 = (byte)((uint)(iVar19 + 6) >> 8);
  *(char *)&unaff_EBX[-2].klass =
       *(char *)&unaff_EBX[-2].klass + (char)((uint)(iVar19 + 7) >> 8) +
       (CARRY1(bVar30,bVar34) ||
       CARRY1(bVar30 + bVar34,CARRY1(bVar3,extraout_CL) || CARRY1(bVar29,bVar32)));
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

