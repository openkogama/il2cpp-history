
/* Void Activate() */

void Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_Activate
               (LocalPlayerScore *this,MethodInfo *method)

{
  uVar1 = GameStatCounterType__Enum_None;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
  this_02 = this;
  if ((this->fields).statTypeToShow != 0) {
    uVar1 = (this->fields).statTypeToShow;
  }
  if (uVar1 != GameStatCounterType__Enum_None) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
       pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
    actorNumber = (pMVar3->fields)._._ActorNr_k__BackingField;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
    team = (pMVar3->fields)._._Team_k__BackingField;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar2->fields).gameStatCounterManager, this_00 == (GameStatCounterManager *)0x0)
       ) goto code_?;
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
              (this_00,GameStatCounterType__Enum_None,team,actorNumber,(MethodInfo *)0x0);
    statType = GameStatCounterType__Enum_None;
    localScore = &UNK_?;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    method = (MethodInfo *)&UNK_?;
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    if ((pMVar3 == (MVLocalPlayer *)0x0) ||
       (this_01 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
       this_01 == (SubscriptionRulesWrapper *)0x0)) goto code_?;
    bVar4 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      (this_01,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pGVar5 = (this_02->fields).memberUI;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
    }
    pLVar6 = (LocalPlayerScore *)
             LocalPlayerScore_GetLocalPlayerRanking
                       (this_02,statType,team,actorNumber,(int32_t)localScore,(MethodInfo *)0x0);
    if ((this_02->fields).scoreBoardCount < (int)pLVar6) {
      this = pLVar6;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_02,(MethodInfo *)0x0);
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,1,(MethodInfo *)0x0);
        pTVar7 = (this_02->fields).rankingText;
        mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
        if (pTVar7 != (Text *)0x0) {
          (*(code *)(pTVar7->klass->vtable).set_text.method)();
          pTVar7 = (this_02->fields).memberRankingText;
          mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
          if (pTVar7 != (Text *)0x0) {
            (*(code *)(pTVar7->klass->vtable).set_text.method)();
            pTVar7 = (this_02->fields).scoreText;
            WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                      ((int32_t)localScore,statType,(MethodInfo *)0x0);
            if (pTVar7 != (Text *)0x0) {
              (*(code *)(pTVar7->klass->vtable).set_text.method)();
              pIVar8 = (this_02->fields).background;
              if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              Styles::Styles_GetTeamColor((Color *)&puStack_9,team,0,(MethodInfo *)0x0);
              if (pIVar8 != (Image *)0x0) {
                (*(code *)(pIVar8->klass->vtable).set_color.method)();
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    in_stack_10 = (MethodInfo *)0x0;
  }
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_02,in_stack_10);
  if (pGVar5 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Int32 GetLocalPlayerRanking(GameStatCounterType, MVTeam, Int32, Int32) */

int32_t Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_GetLocalPlayerRanking
                  (LocalPlayerScore *this,GameStatCounterType__Enum statType,MVTeam__Enum localTeam,
                  int32_t localActorNumber,int32_t localScore,MethodInfo *method)

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
     (this_00 = (pMVar6->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffcc,this_02,
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
                (actorNumber = (int)team[6].klass, actorNumber == localActorNumber));
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar6 == (MVNetworkGame *)0x0) break;
        this_01 = (pMVar6->fields).gameStatCounterManager;
        if (this_01 == (GameStatCounterManager *)0x0) break;
        in_stack_9 = (MethodInfo *)0x0;
        team = (Object *)team[9].klass;
        iVar10 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          (this_01,statType,(MVTeam__Enum)team,actorNumber,(MethodInfo *)0x0);
        bVar8 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (iVar10,localScore,statType,(MethodInfo *)0x0);
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


/* Void Initialize() */

void Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_Initialize
               (LocalPlayerScore *this,MethodInfo *method)

{
  pTVar1 = (this->fields).playerNameText;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (((pMVar2 != (MVLocalPlayer *)0x0) &&
        (pUVar3 = (pMVar2->fields)._._UserProfileData_k__BackingField,
        pUVar3 != (UserProfileData *)0x0)) && (pTVar1 != (Text *)0x0)) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1,(pUVar3->fields).UserName);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Show(GameStatCounterType, MVTeam, Int32, Int32) */

void Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_Show
               (LocalPlayerScore *this,GameStatCounterType__Enum statType,MVTeam__Enum localTeam,
               int32_t currentRanking,int32_t localScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).rankingText;
    mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&currentRanking,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      pTVar1 = (this->fields).memberRankingText;
      mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&currentRanking,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)();
        pTVar1 = (this->fields).scoreText;
        WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                  (localScore,statType,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)();
          pIVar2 = (this->fields).background;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          Styles::Styles_GetTeamColor((Color *)&stack0xffffffec,localTeam,0,(MethodInfo *)0x0);
          if (pIVar2 != (Image *)0x0) {
            (*(code *)(pIVar2->klass->vtable).set_color.method)(pIVar2);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

