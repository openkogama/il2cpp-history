
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_Initialize
               (CurrentProgressNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  uStack_2 = (Il2CppMethodPointer)((uint)uStack_2 & 0xffffff);
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar4 = 0;
  cVar5 = '\x01';
  if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
  pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
  bVar4 = 0;
  cVar5 = '\x01';
  if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
  (this->fields).avatarStartTime = (pMVar6->fields).joinTime;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar4 = 0;
  cVar5 = '\x01';
  if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
  pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
  bVar4 = 0;
  cVar5 = '\x01';
  if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
  unaff_EDI = (Action__Class *)(pMVar6->fields)._._ActorNr_k__BackingField;
  puVar7 = &UNK_?;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)((int)&uStack_2 + 3),(MethodInfo *)0x0);
  uVar8 = 0;
  (this->fields).currentDisplayedStatType = uStack_2._3_1_;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar4 = 0;
  cVar5 = '\x01';
  if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
  this_04 = (pMVar3->fields).teamManager;
  bVar4 = 0;
  cVar5 = '\x01';
  if (this_04 == (MVTeamManager *)0x0) goto code_?;
  pLVar9 = MVTeamManager::MVTeamManager_GetTeamList(this_04,(MethodInfo *)0x0);
  bVar4 = 0;
  cVar5 = '\x01';
  if (pLVar9 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
  if ((pLVar9->fields)._size < 2) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\x01';
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    unaff_ESI = (Action__Class *)(pMVar3->fields).gameStatCounterManager;
    GVar10 = CONCAT31((int3)((uint)uVar8 >> 8),uStack_2._3_1_);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\x01';
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\x01';
    if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
    bVar4 = 0;
    cVar5 = '\x01';
    if (unaff_ESI == (Action__Class *)0x0) goto code_?;
    unaff_ESI = (Action__Class *)
                MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          ((GameStatCounterManager *)unaff_ESI,GVar10,
                           (pMVar6->fields)._._Team_k__BackingField,(int32_t)unaff_EDI,
                           (MethodInfo *)0x0);
  }
  else {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\x01';
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    unaff_ESI = (Action__Class *)(pMVar3->fields).gameStatCounterManager;
    GVar10 = CONCAT31((int3)((uint)uVar8 >> 8),uStack_2._3_1_);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\x01';
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\x01';
    if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
    bVar4 = 0;
    cVar5 = '\x01';
    if (unaff_ESI == (Action__Class *)0x0) goto code_?;
    unaff_ESI = (Action__Class *)
                MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                          ((GameStatCounterManager *)unaff_ESI,GVar10,
                           (pMVar6->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
  }
  uVar11 = SUB43(this_04,0);
  uVar12 = uStack_2._3_1_;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  unaff_EDI = (Action__Class *)0x0;
  switch(uVar12) {
  case 1:
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\x01';
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (pMVar3->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    break;
  case 2:
  case 8:
    unaff_EDI = unaff_ESI;
    goto code_?;
  case 3:
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\x01';
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (pMVar3->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
    ;
    break;
  default:
    goto code_?;
  case 6:
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\x01';
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (pMVar3->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
    ;
  }
  bVar4 = 0;
  cVar5 = '\x01';
  if (this_00 == (WinningConditionManager *)0x0) goto code_?;
  pOVar13 = MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType(this_00,method_00);
  pOVar14 = (Object__Class *)0x0;
  if (pOVar13 != (Object *)0x0) {
    pOVar14 = pOVar13[2].klass;
  }
  unaff_EDI = (Action__Class *)((int)pOVar14 - (int)unaff_ESI);
code_?:
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar4 = 0;
  cVar5 = '\x01';
  if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
  this_01 = (pMVar3->fields).playerContainer;
  bVar4 = 0;
  cVar5 = '\x01';
  if (this_01 == (MVPlayerContainer *)0x0) goto code_?;
  bVar15 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                    (this_01,(int32_t)puVar7,(MVPlayer **)&stack0xffffffec,(MethodInfo *)0x0);
  if (bVar15 == 0) {
    return;
  }
  pTVar16 = (this->fields).currentProgressText;
  (this->fields)._.timeSinceStart = 0.0;
  if (uStack_2._3_1_ == '\x02') {
    bVar4 = 0;
    cVar5 = '\x01';
    if (pTVar16 == (Text *)0x0) goto code_?;
    uStack_2 = (pTVar16->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    unaff_ESI = (Action__Class *)(this->fields).scoreText;
    iVar17 = CurrentProgressNotification_GetStartTime(this,(MethodInfo *)0x0);
    if ((this->fields).currentDisplayedStatType == 8) {
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar19 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\x01';
      if (pFVar19 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar20 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,fVar18 - (pFVar19->fields).RunStartTime,(MethodInfo *)0x0);
    }
    else {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\x01';
      if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
      iVar20 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar3,(MethodInfo *)0x0);
      iVar20 = iVar20 - iVar17;
    }
    WinningConditionControl::WinningConditionControl_MakeIntoScoreText
              (iVar20,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
    pAVar21 = unaff_ESI;
code_?:
    bVar4 = 0;
    unaff_ESI = (Action__Class *)0x0;
    cVar5 = '\x01';
    if (pAVar21 == (Action__Class *)0x0) goto code_?;
    (*(code *)((Delegate__Class *)(pAVar21->_0).image)[2].vtable.Clone.method)();
    (this->fields).shouldShowCurrentTime = 1;
  }
  else {
    if (uStack_2._3_1_ == '\b') {
      bVar4 = 0;
      cVar5 = '\x01';
      if (pTVar16 == (Text *)0x0) goto code_?;
      uStack_2 = (pTVar16->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      (*(code *)(pTVar16->klass->vtable).set_text.method)();
      unaff_ESI = (Action__Class *)(this->fields).scoreText;
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar19 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\x01';
      if (pFVar19 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar17 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,fVar18 - (pFVar19->fields).RunStartTime,(MethodInfo *)0x0);
      in_stack_22 = 0;
      WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                (iVar17,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
      pAVar21 = unaff_ESI;
      goto code_?;
    }
    bVar4 = 0;
    cVar5 = '\x01';
    if (pTVar16 == (Text *)0x0) goto code_?;
    uStack_2 = (pTVar16->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    pTVar16 = (this->fields).scoreText;
    in_stack_22 = 0;
    WinningConditionControl::WinningConditionControl_MakeIntoScoreText
              ((int32_t)unaff_EDI,CONCAT31(uVar11,uStack_2._3_1_),(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\x01';
    unaff_ESI = (Action__Class *)0x0;
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    (this->fields).shouldShowCurrentTime = 0;
  }
  unaff_ESI = (Action__Class *)(this->fields).fader;
  bVar4 = 0;
  cVar5 = '\x01';
  if (unaff_ESI != (Action__Class *)0x0) {
    (unaff_ESI->_0).castClass = (Il2CppClass *)(unaff_ESI->_0).this_arg.data;
    this_02 = (List_1_GameStatCounterType_ *)(unaff_ESI->_0).byval_arg.data.typeHandle;
    *(undefined1 *)&(unaff_ESI->_0).this_arg.attrs = 1;
    bVar4 = 0;
    cVar5 = '\x01';
    if (this_02 != (List_1_GameStatCounterType_ *)0x0) {
      puVar7 = &UNK_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                ((CanvasGroup *)this_02,0.0,(MethodInfo *)0x0);
      (unaff_ESI->_0).element_class = (Il2CppClass *)0x0;
      puVar23 = (undefined *)((uint)uStack_2 & 0xff000000);
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      in_stack_22 = (byte)puVar7;
      pLVar24 = (this->fields).winningConditionImages;
      unaff_ESI = (Action__Class *)0x0;
      pIVar25 = uStack_2;
      while( true ) {
        cVar5 = '\x01';
        bVar4 = 0;
        uStack_2 = pIVar25;
        if (pLVar24 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) break;
        in_stack_22 = (byte)puVar7;
        cVar26 = (char)((uint)puVar23 >> 0x18);
        if ((pLVar24->fields)._size <= (int)unaff_ESI) {
          uStack_2._3_1_ = (uint8_t)((uint)pIVar25 >> 0x18);
          cVar5 = uStack_2._3_1_;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
            pIVar25 = uStack_2;
          }
          uStack_2 = pIVar25;
          if ((cVar5 == '\x01') ||
             ((str0 = StringLiteral_STAR, cVar5 != '\x03' &&
              (str0 = ::StringLiteral__, cVar5 == '\x06')))) {
            str0 = StringLiteral_KILL;
          }
          if (1 < (int)unaff_EDI) {
            str0 = mscorlib.dll::System::String::String_Concat_3
                             (str0,StringLiteral_S,(MethodInfo *)0x0);
          }
          in_stack_22 = 0x2e;
          mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral__LEFT_,(MethodInfo *)0x0)
          ;
          pTVar16 = (this->fields).warningText;
          bVar4 = 0;
          cVar5 = '\x01';
          if (pTVar16 != (Text *)0x0) {
            (*(code *)(pTVar16->klass->vtable).set_text.method)();
            pNVar27 = (this->fields).fader;
            bVar4 = 0;
            cVar5 = '\x01';
            if (pNVar27 != (NotificationFade *)0x0) {
              unaff_EDI = (Action__Class *)(pNVar27->fields).OnFinished;
              unaff_ESI = (Action__Class *)func_?();
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        ((NavMesh_OnNavMeshPreUpdate *)unaff_ESI,(Object *)this,
                         MethodInfo__CurrentProgressNotification__DestroyNotification__,
                         (MethodInfo *)0x0);
              pAVar28 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)unaff_EDI,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
              if (pAVar28 == (Action *)0x0) {
                (pNVar27->fields).OnFinished = (Action *)0x0;
                func_?();
                return;
              }
              pAVar29 = (Action *)0x0;
              if (pAVar28->klass == TypeInfo__System__Action) {
                pAVar29 = pAVar28;
              }
              bVar4 = 0;
              cVar5 = pAVar29 == (Action *)0x0;
              if (!(bool)cVar5) {
                (pNVar27->fields).OnFinished = pAVar29;
                pAVar29 = (Action *)0x0;
                if (pAVar28->klass == TypeInfo__System__Action) {
                  pAVar29 = pAVar28;
                }
                bVar4 = 0;
                cVar5 = '\x01';
                unaff_ESI = TypeInfo__System__Action;
                if (pAVar29 == (Action *)0x0) goto code_?;
                goto code_?;
              }
              func_?();
            }
          }
          break;
        }
        pLVar30 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionImages;
        bVar4 = 0;
        cVar5 = '\x01';
        if (pLVar30 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        RVar31 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar30,(int32_t)unaff_ESI,
                            MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                           );
        in_stack_22 = (byte)puVar7;
        bVar4 = 0;
        cVar5 = '\x01';
        if (RVar31 == (RegexCharClass_SingleRange)0x0) break;
        pLVar30 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionImages;
        if (*(char *)((int)RVar31 + 8) == cVar26) {
          bVar4 = 0;
          cVar5 = '\x01';
          if (pLVar30 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar31 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar30,(int32_t)unaff_ESI,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          in_stack_22 = (byte)puVar7;
          bVar4 = 0;
          cVar5 = '\x01';
          if (RVar31 == (RegexCharClass_SingleRange)0x0) break;
          bVar4 = 0;
          cVar5 = '\x01';
          if (*(Component **)((int)RVar31 + 0xc) == (Component *)0x0) break;
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar31 + 0xc),(MethodInfo *)0x0);
          in_stack_22 = (byte)puVar7;
          bVar4 = 0;
          cVar5 = '\x01';
          if (this_03 == (GameObject *)0x0) break;
          bVar15 = 1;
        }
        else {
          bVar4 = 0;
          cVar5 = '\x01';
          if (pLVar30 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar31 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar30,(int32_t)unaff_ESI,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          in_stack_22 = (byte)puVar7;
          bVar4 = 0;
          cVar5 = '\x01';
          if (RVar31 == (RegexCharClass_SingleRange)0x0) break;
          bVar4 = 0;
          cVar5 = '\x01';
          if (*(Component **)((int)RVar31 + 0xc) == (Component *)0x0) break;
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar31 + 0xc),(MethodInfo *)0x0);
          in_stack_22 = (byte)puVar7;
          bVar4 = 0;
          cVar5 = '\x01';
          if (this_03 == (GameObject *)0x0) break;
          bVar15 = 0;
        }
        puVar23 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_03,bVar15,(MethodInfo *)0x0);
        in_stack_22 = (byte)puVar7;
        pLVar24 = (this->fields).winningConditionImages;
        unaff_ESI = (Action__Class *)((int)&(unaff_ESI->_0).image + 1);
        pIVar25 = uStack_2;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pAVar29 = (Action *)(extraout_ECX + -1);
  if (pAVar29 == (Action *)0x0 || cVar5 == '\0') {
    bVar32 = (byte)((uint)pAVar29 >> 8);
    *(byte *)&pAVar29->klass =
         *(char *)&pAVar29->klass + (byte)pAVar29 +
         (CARRY1(in_stack_22,bVar32) || CARRY1(in_stack_22 + bVar32,bVar4));
    pbVar33 = (byte *)((int)&(unaff_ESI->_0).byval_arg.data + 2);
    *pbVar33 = *pbVar33 << 1 | (char)*pbVar33 < '\0';
    uVar34 = SUB42(extraout_EDX,0);
    out(*(undefined4 *)((int)&(unaff_ESI->_0).image + 2),uVar34);
    pbVar33 = &(unaff_ESI->_0).byval_arg.type;
    *pbVar33 = *pbVar33 << 1 | (char)*pbVar33 < '\0';
    out(*(undefined4 *)((int)&(unaff_ESI->_0).gc_desc + 2),uVar34);
    pbVar33 = (byte *)((int)&(unaff_ESI->_0).this_arg.data + 2);
    *pbVar33 = *pbVar33 << 1 | (char)*pbVar33 < '\0';
    pbVar33 = (byte *)((int)&(unaff_ESI->_0).this_arg.data + 2);
    *pbVar33 = *pbVar33 << 1 | (char)*pbVar33 < '\0';
    out(*(undefined4 *)((int)&((Delegate__Fields *)&(unaff_ESI->_0).name)->method_ptr + 2),uVar34);
    pbVar33 = &(unaff_ESI->_0).this_arg.type;
    *pbVar33 = *pbVar33 << 1 | (char)*pbVar33 < '\0';
    pDVar35 = (Delegate__Class *)in(uVar34);
    (unaff_EDI->_0).image = (Il2CppImage *)pDVar35;
    pbVar33 = &(unaff_ESI->_0).this_arg.type;
    *pbVar33 = *pbVar33 << 1 | (char)*pbVar33 < '\0';
    pcVar36 = (code *)swi(3);
    (*pcVar36)();
    return;
  }
  *(byte *)&(unaff_EDI->_0).image = *(byte *)&(unaff_EDI->_0).image ^ (byte)pAVar29;
  unaff_0006ba00 = '\x14';
  unaff_0006be00 = &stack0xfffffffc;
  puVar37 = (undefined4 *)&stack0xfffffffc;
  cVar5 = '\x13';
  do {
    puVar1 = puVar1 + -1;
    puVar37 = puVar37 + -1;
    *puVar37 = *puVar1;
    cVar5 = cVar5 + -1;
    pNVar27 = extraout_EDX;
  } while ('\0' < cVar5);
code_?:
  *(undefined1 **)(&stack0xfffffff8 + (uint)(byte)(unaff_0006ba00 - 1) * -4) = unaff_0006be00;
  pbVar33 = (byte *)((int)&pAVar29[-2].fields._._.invoke_impl + 1);
  *pbVar33 = *pbVar33 & (byte)pNVar27;
  auStack_38[-(uint)(byte)(unaff_0006ba00 - 1)] = &UNK_?;
  func_?();
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

