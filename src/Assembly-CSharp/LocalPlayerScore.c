
/* Void Activate() */

void Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_Activate
               (LocalPlayerScore *this,MethodInfo *method)

{
  aIStackX_8[0].m_value = aIStackX_8[0].m_value & 0xffffff00;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)aIStackX_8,(MethodInfo *)0x0);
  if ((this->fields).statTypeToShow == 0) {
    uVar1 = (byte)aIStackX_8[0].m_value;
  }
  else {
    uVar1 = (this->fields).statTypeToShow;
  }
  if (uVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
        (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0)) ||
       (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
       pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
    actorNumber = (pMVar5->fields)._._ActorNr_k__BackingField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 == (MVGameControllerBase *)0x0) ||
        (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
       ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0 ||
        (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
        pMVar5 == (MVLocalPlayer *)0x0)))) goto code_?;
    team = (pMVar5->fields)._._Team_k__BackingField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 == (MVGameControllerBase *)0x0) ||
        (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
       (this_00 = (pMVar3->fields).gameStatCounterManager, this_00 == (GameStatCounterManager *)0x0)
       ) goto code_?;
    localScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                           (this_00,(uint)uVar1,team,actorNumber,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
        (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0)) ||
       ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
        pMVar5 == (MVLocalPlayer *)0x0 ||
        (this_01 = (pMVar5->fields)._._SubscriptionRules_k__BackingField,
        this_01 == (SubscriptionRulesWrapper *)0x0)))) goto code_?;
    bVar6 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      (this_01,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pGVar7 = (this->fields).memberUI;
      if (pGVar7 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,1,(MethodInfo *)0x0);
    }
    uVar8 = LocalPlayerScore_GetLocalPlayerRanking
                      (this,(uint)uVar1,team,actorNumber,localScore,(MethodInfo *)0x0);
    if ((this->fields).scoreBoardCount < (int)uVar8) {
      aIStackX_8[0].m_value = uVar8;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Styles);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar7 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,1,(MethodInfo *)0x0);
        pTVar9 = (this->fields).rankingText;
        pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
        if (pTVar9 != (Text *)0x0) {
          (*(pTVar9->klass->vtable).set_text.methodPtr)
                    (pTVar9,pSVar10,(pTVar9->klass->vtable).set_text.method);
          pTVar9 = (this->fields).memberRankingText;
          pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
          if (pTVar9 != (Text *)0x0) {
            (*(pTVar9->klass->vtable).set_text.methodPtr)(pTVar9,pSVar10);
            pTVar9 = (this->fields).scoreText;
            pSVar10 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                (localScore,(uint)uVar1,(MethodInfo *)0x0);
            if (pTVar9 != (Text *)0x0) {
              (*(pTVar9->klass->vtable).set_text.methodPtr)(pTVar9,pSVar10);
              pIVar11 = (this->fields).background;
              if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                FUN_?();
              }
              pCVar12 = Styles::Styles_GetTeamColor(&CStack_13,team,0,(MethodInfo *)0x0);
              if (pIVar11 != (Image *)0x0) {
                CStack_13.r = pCVar12->r;
                CStack_13.g = pCVar12->g;
                CStack_13.b = pCVar12->b;
                CStack_13.a = pCVar12->a;
                (*(pIVar11->klass->vtable).set_color.methodPtr)
                          (pIVar11,&CStack_13,(pIVar11->klass->vtable).set_color.method);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (pGVar7 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Int32 GetLocalPlayerRanking(GameStatCounterType, MVTeam, Int32, Int32) */

int32_t Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_GetLocalPlayerRanking
                  (LocalPlayerScore *this,GameStatCounterType__Enum statType,MVTeam__Enum localTeam,
                  int32_t localActorNumber,int32_t localScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                  ,CONCAT44(in_register_00000014,statType),CONCAT44(in_register_00000084,localTeam))
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
       (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar3->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pDVar4 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0),
     pDVar4 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_5 = (pDVar4->fields)._dictionary;
    ppDStack_6 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&pDStack_9 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    if (pDStack_5 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      pDStack_9 = pDStack_5;
      FUN_?();
      pcVar13 = (code *)swi(3);
      iVar14 = (*pcVar13)();
      return iVar14;
    }
    ppDStack_6 = (Dictionary_2_System_Int32_MVPlayer_ **)
                  ((ulonglong)(uint)(pDStack_5->fields)._version << 0x20);
    uStack_7 = 0;
    uStack_15 = (ulonglong)ppDStack_6;
    pMStack_16 = (MVPlayer *)0x0;
    pDStack_9 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
    ppDStack_6 = &pDStack_5;
    while (pDStack_5 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      if (uStack_15._4_4_ != (pDStack_5->fields)._version) goto code_?;
      uVar12 = uStack_15 & 0xffffffff;
      do {
        if (pDStack_5 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        uVar8 = (uint)uVar12;
        if ((uint)(pDStack_5->fields)._count <= uVar8) {
          return iVar1;
        }
        pDVar17 = (pDStack_5->fields)._entries;
        uVar12 = (ulonglong)(uVar8 + 1);
        uStack_15 = CONCAT44(uStack_15._4_4_,uVar8 + 1);
        if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
        goto code_?;
        if ((uint)pDVar17->max_length <= uVar8) goto code_?;
      } while (pDVar17->vector[(int)uVar8].hashCode < 0);
      pMStack_16 = pDVar17->vector[(int)uVar8].value;
      func_?();
      pMVar18 = pMStack_16;
      if ((pMStack_16 != (MVPlayer *)0x0) &&
         (actorNumber = (pMStack_16->fields)._ActorNr_k__BackingField,
         actorNumber != localActorNumber)) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
        this_01 = (pMVar3->fields).gameStatCounterManager;
        if (this_01 == (GameStatCounterManager *)0x0) goto code_?;
        iVar14 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          (this_01,statType & 0xff,(pMVar18->fields)._Team_k__BackingField,
                           actorNumber,(MethodInfo *)0x0);
        bVar19 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (iVar14,localScore,statType & 0xff,(MethodInfo *)0x0);
        if (bVar19 != 0) {
          iVar1 = iVar1 + 1;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
}


/* Void Initialize() */

void Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_Initialize
               (LocalPlayerScore *this,MethodInfo *method)

{
  pTVar1 = (this->fields).playerNameText;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (((pMVar4 != (MVLocalPlayer *)0x0) &&
        (pUVar5 = (pMVar4->fields)._._UserProfileData_k__BackingField,
        pUVar5 != (UserProfileData *)0x0)) && (pTVar1 != (Text *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,(pUVar5->fields).UserName,(pTVar1->klass->vtable).set_text.method);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Show(GameStatCounterType, MVTeam, Int32, Int32) */

void Assembly-CSharp.dll::LocalPlayerScore::LocalPlayerScore_Show
               (LocalPlayerScore *this,GameStatCounterType__Enum statType,MVTeam__Enum localTeam,
               int32_t currentRanking,int32_t localScore,MethodInfo *method)

{
  aIStackX_20[0].m_value = currentRanking;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).rankingText;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_20,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
      pTVar1 = (this->fields).memberRankingText;
      pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_20,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar2);
        pTVar1 = (this->fields).scoreText;
        pSVar2 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                           (localScore,statType & 0xff,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar2);
          pIVar3 = (this->fields).background;
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          pCVar4 = Styles::Styles_GetTeamColor(&CStack_5,localTeam,0,(MethodInfo *)0x0);
          if (pIVar3 != (Image *)0x0) {
            CStack_5.r = pCVar4->r;
            CStack_5.g = pCVar4->g;
            CStack_5.b = pCVar4->b;
            CStack_5.a = pCVar4->a;
            (*(pIVar3->klass->vtable).set_color.methodPtr)
                      (pIVar3,&CStack_5,(pIVar3->klass->vtable).set_color.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

