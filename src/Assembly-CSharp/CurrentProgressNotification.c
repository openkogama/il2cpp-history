
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
    iVar3 = (this->fields).avatarStartTime;
    if (iVar3 <= (pMVar2->fields).startTime) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
         pMVar2 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      iVar3 = (pMVar2->fields).startTime;
    }
    return iVar3;
  }
code_?:
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
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
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
  bVar3 = 0;
  if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
  iVar5 = (pMVar4->fields)._._ActorNr_k__BackingField;
  puVar6 = &UNK_?;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)((int)&uStack_1 + 3),(MethodInfo *)0x0);
  uVar7 = 0;
  (this->fields).currentDisplayedStatType = uStack_1._3_1_;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar3 = 0;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  this_04 = (pMVar2->fields).teamManager;
  bVar3 = 0;
  if (this_04 == (MVTeamManager *)0x0) goto code_?;
  pLVar8 = MVTeamManager::MVTeamManager_GetTeamList(this_04,(MethodInfo *)0x0);
  bVar3 = 0;
  if (pLVar8 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
  if ((pLVar8->fields)._size < 2) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pGVar9 = (pMVar2->fields).gameStatCounterManager;
    GVar10 = CONCAT31((int3)((uint)uVar7 >> 8),uStack_1._3_1_);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    bVar3 = 0;
    if ((pMVar4 == (MVLocalPlayer *)0x0) || (bVar3 = 0, pGVar9 == (GameStatCounterManager *)0x0))
    goto code_?;
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
              (pGVar9,GVar10,(pMVar4->fields)._._Team_k__BackingField,iVar5,(MethodInfo *)0x0);
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pGVar9 = (pMVar2->fields).gameStatCounterManager;
    GVar10 = CONCAT31((int3)((uint)uVar7 >> 8),uStack_1._3_1_);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    bVar3 = 0;
    if ((pMVar4 == (MVLocalPlayer *)0x0) || (bVar3 = 0, pGVar9 == (GameStatCounterManager *)0x0))
    goto code_?;
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
              (pGVar9,GVar10,(pMVar4->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
  }
  in_stack_11 = 0;
  uVar12 = SUB43(this_04,0);
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
  bVar13 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                    (this_00,(int32_t)puVar6,(MVPlayer **)&stack0xffffffec,(MethodInfo *)0x0);
  if (bVar13 == 0) {
    return;
  }
  pTVar14 = (this->fields).currentProgressText;
  (this->fields)._.timeSinceStart = 0.0;
  if (uStack_1._3_1_ == '\x02') {
    bVar3 = 0;
    if (pTVar14 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar14->klass->vtable).set_text.method)
              (pTVar14,::StringLiteral__,
               (pTVar14->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar14 = (this->fields).scoreText;
    iVar5 = CurrentProgressNotification_GetStartTime(this,(MethodInfo *)0x0);
    if ((this->fields).currentDisplayedStatType == 8) {
      fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar16 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      bVar3 = 0;
      if (pFVar16 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar17 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,fVar15 - (pFVar16->fields).RunStartTime,(MethodInfo *)0x0);
    }
    else {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar3 = 0;
      if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
      iVar17 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
      iVar17 = iVar17 - iVar5;
    }
    pSVar18 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                        (iVar17,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
code_?:
    bVar3 = 0;
    if (pTVar14 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar14->klass->vtable).set_text.method)
              (pTVar14,pSVar18,(pTVar14->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (this->fields).shouldShowCurrentTime = 1;
  }
  else {
    if (uStack_1._3_1_ == '\b') {
      bVar3 = 0;
      if (pTVar14 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar14->klass->vtable).set_text.method)
                (pTVar14,::StringLiteral__,
                 (pTVar14->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar14 = (this->fields).scoreText;
      fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar16 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      bVar3 = 0;
      if (pFVar16 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar5 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,fVar15 - (pFVar16->fields).RunStartTime,(MethodInfo *)0x0);
      pSVar18 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                          (iVar5,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
      goto code_?;
    }
    bVar3 = 0;
    if (pTVar14 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar14->klass->vtable).set_text.method)
              (pTVar14,StringLiteral_YOU_HAVE,
               (pTVar14->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar14 = (this->fields).scoreText;
    pSVar18 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                        (0,CONCAT31(uVar12,uStack_1._3_1_),(MethodInfo *)0x0);
    bVar3 = 0;
    if (pTVar14 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar14->klass->vtable).set_text.method)
              (pTVar14,pSVar18,(pTVar14->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (this->fields).shouldShowCurrentTime = 0;
  }
  pNVar19 = (this->fields).fader;
  bVar3 = 0;
  if (pNVar19 != (NotificationFade *)0x0) {
    (pNVar19->fields).pauseAt = (pNVar19->fields).duration;
    this_01 = (pNVar19->fields).group;
    (pNVar19->fields).playing = 1;
    bVar3 = 0;
    if (this_01 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,0.0,(MethodInfo *)0x0);
      (pNVar19->fields).currentTime = 0.0;
      puVar6 = (undefined *)((uint)uStack_1 & 0xff000000);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      iVar20 = 0;
      pLVar21 = (this->fields).winningConditionImages;
      puVar22 = uStack_1;
      while (bVar3 = 0, uStack_1 = puVar22,
            pLVar21 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
        cVar23 = (char)((uint)puVar6 >> 0x18);
        if ((pLVar21->fields)._size <= iVar20) {
          uStack_1._3_1_ = (uint8_t)((uint)puVar22 >> 0x18);
          cVar23 = uStack_1._3_1_;
          if (cRam_? == '\0') {
            func_?(&StringLiteral_S);
            func_?(&StringLiteral_KILL);
            func_?(&StringLiteral_STAR);
            func_?(&StringLiteral__LEFT_);
            func_?(&::StringLiteral__);
            func_?(&StringLiteral_CURRENT_TIME);
            cRam_? = '\x01';
            puVar22 = uStack_1;
          }
          uStack_1 = puVar22;
          if ((cVar23 == '\x01') ||
             ((pSVar18 = StringLiteral_STAR, cVar23 != '\x03' &&
              (pSVar18 = ::StringLiteral__, cVar23 == '\x06')))) {
            pSVar18 = StringLiteral_KILL;
          }
          pSVar18 = mscorlib.dll::System::String::String_Concat_3
                              (pSVar18,StringLiteral__LEFT_,(MethodInfo *)0x0);
          if ((cVar23 == '\x02') || (cVar23 == '\b')) {
            pSVar18 = StringLiteral_CURRENT_TIME;
          }
          pTVar14 = (this->fields).warningText;
          bVar3 = 0;
          if (pTVar14 != (Text *)0x0) {
            (*(code *)(pTVar14->klass->vtable).set_text.method)
                      (pTVar14,pSVar18,
                       (pTVar14->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pNVar19 = (this->fields).fader;
            bVar3 = 0;
            if (pNVar19 != (NotificationFade *)0x0) {
              pAVar24 = (pNVar19->fields).OnFinished;
              this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_03,(Object *)this,
                         MethodInfo__CurrentProgressNotification__DestroyNotification__,
                         (MethodInfo *)0x0);
              pAVar24 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar24,(Delegate *)this_03,(MethodInfo *)0x0);
              if (pAVar24 == (Action *)0x0) {
                (pNVar19->fields).OnFinished = (Action *)0x0;
                func_?();
                return;
              }
              pAVar25 = (Action *)0x0;
              if (pAVar24->klass == TypeInfo__System__Action) {
                pAVar25 = pAVar24;
              }
              bVar3 = 0;
              if (pAVar25 != (Action *)0x0) {
                (pNVar19->fields).OnFinished = pAVar25;
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
                           (pLVar26,iVar20,
                            MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                           );
        bVar3 = 0;
        if (RVar27 == (RegexCharClass_SingleRange)0x0) break;
        pLVar26 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionImages;
        if (*(char *)((int)RVar27 + 8) == cVar23) {
          bVar3 = 0;
          if (pLVar26 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar26,iVar20,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          bVar3 = 0;
          if (RVar27 == (RegexCharClass_SingleRange)0x0) break;
          bVar3 = 0;
          if (*(Component **)((int)RVar27 + 0xc) == (Component *)0x0) break;
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar27 + 0xc),(MethodInfo *)0x0);
          bVar3 = 0;
          if (this_02 == (GameObject *)0x0) break;
          bVar13 = 1;
        }
        else {
          bVar3 = 0;
          if (pLVar26 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar26,iVar20,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          bVar3 = 0;
          if (RVar27 == (RegexCharClass_SingleRange)0x0) break;
          bVar3 = 0;
          if (*(Component **)((int)RVar27 + 0xc) == (Component *)0x0) break;
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar27 + 0xc),(MethodInfo *)0x0);
          bVar3 = 0;
          if (this_02 == (GameObject *)0x0) break;
          bVar13 = 0;
        }
        puVar6 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,bVar13,(MethodInfo *)0x0);
        iVar20 = iVar20 + 1;
        puVar22 = uStack_1;
        pLVar21 = (this->fields).winningConditionImages;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  iVar20 = in_stack_11 + 1;
  bVar28 = (byte)((uint)iVar20 >> 8);
  pcVar29 = (char *)(CONCAT22((short)((uint)iVar20 >> 0x10),
                             CONCAT11(bVar28 * '\x02' + bVar3,(char)iVar20)) + -0xADDR);
  *pcVar29 = *pcVar29 + (char)iVar20 + '\x01' +
            (CARRY1(bVar28,bVar28) || CARRY1(bVar28 * '\x02',bVar3));
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).winningConditionImages;
  if (pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while( true ) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pCVar1->fields).winningConditionImages;
      if (*(char *)((int)RVar3 + 8) == (undefined1)winningConditionType) {
        if ((((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar2,index,
                                    MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                   ), RVar3 == (RegexCharClass_SingleRange)0x0)) ||
            (*(Component **)((int)RVar3 + 0xc) == (Component *)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)((int)RVar3 + 0xc),(MethodInfo *)0x0),
           this_00 == (GameObject *)0x0)) break;
        this._0_1_ = 1;
      }
      else {
        if (((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar2,index,
                                MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                               ), RVar3 == (RegexCharClass_SingleRange)0x0)) ||
           ((*(Component **)((int)RVar3 + 0xc) == (Component *)0x0 ||
            (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (*(Component **)((int)RVar3 + 0xc),(MethodInfo *)0x0),
            this_00 == (GameObject *)0x0)))) break;
        this._0_1_ = 0;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,(bool)this,(MethodInfo *)0x0);
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pCVar1->fields).winningConditionImages;
      index = index + 1;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    startTime = (this->fields).avatarStartTime;
    if (startTime <= (pMVar3->fields).startTime) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 == (MVNetworkGame *)0x0) ||
         (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
         pMVar3 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      startTime = (pMVar3->fields).startTime;
    }
    score = CurrentProgressNotification_CalculateCurrentTime(this,startTime,(MethodInfo *)0x0);
    pSStack4 =
         WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                   (score,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      pIStack5 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      pTStack6 = pTVar1;
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

