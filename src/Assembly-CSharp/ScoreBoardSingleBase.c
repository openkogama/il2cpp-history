
/* Void AddPlayersToScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_AddPlayersToScoreBoard
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
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
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pDVar3 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0),
     pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pDStack_5 = (pDVar3->fields)._dictionary;
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
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_13 = (pDStack_5->fields)._version;
  uStack_7 = 0;
  uStack_14 = 0;
  pMStack_15 = (MVPlayer *)0x0;
  pDStack_9 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  ppDStack_6 = &pDStack_5;
code_?:
  if (pDStack_5 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    if (iStack_13 == (pDStack_5->fields)._version) goto code_?;
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_?:
  do {
    if (pDStack_5 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    if ((uint)(pDStack_5->fields)._count <= uStack_14) {
      return;
    }
    pDVar16 = (pDStack_5->fields)._entries;
    lVar17 = (longlong)(int)uStack_14;
    uVar8 = uStack_14 + 1;
    if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
    goto code_?;
    if ((uint)pDVar16->max_length <= uStack_14) {
      uStack_14 = uVar8;
      FUN_?();
      goto code_?;
    }
    uStack_14 = uVar8;
  } while (pDVar16->vector[lVar17].hashCode < 0);
  pMStack_15 = pDVar16->vector[lVar17].value;
  func_?();
  pMVar18 = pMStack_15;
  if (pMStack_15 != (MVPlayer *)0x0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      this_01 = (pMVar2->fields).gameStatCounterManager;
      if (this_01 != (GameStatCounterManager *)0x0) {
        oldId = 0;
        newScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                             (this_01,(uint)(this->fields)._.statType,
                              (pMVar18->fields)._Team_k__BackingField,
                              (pMVar18->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
        this_02 = (pMVar18->fields)._SubscriptionRules_k__BackingField;
        if (this_02 != (SubscriptionRulesWrapper *)0x0) {
          activateMemberUI =
               MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
               SubscriptionRulesWrapper_HasBenefit
                         (this_02,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
          pLVar19 = (this->fields)._.scoreBoardPlayerData;
          if (pLVar19 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
            lVar17 = FUN_?((this->fields)._.scoreBoardPlayerData,(pLVar19->fields)._size + -1
                                  );
            if (lVar17 != 0) {
              bVar20 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
                                 ((ScoreBoardBase *)this,newScore,*(int32_t *)(lVar17 + 0x2c),0,
                                  oldId,in_stack_21);
              if (bVar20 == 0) goto code_?;
              pUVar22 = (pMVar18->fields)._UserProfileData_k__BackingField;
              if (pUVar22 != (UserProfileData *)0x0) {
                in_stack_21 = (MethodInfo *)0x0;
                ScoreBoardBase::ScoreBoardBase_SortNewScore
                          ((ScoreBoardBase *)this,(pUVar22->fields).UserName,
                           (pMVar18->fields)._ActorNr_k__BackingField,newScore,activateMemberUI,
                           (MethodInfo *)0x0);
                goto code_?;
              }
code_?:
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
    uVar8 = uStack_14;
code_?:
    uStack_14 = uVar8;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    goto code_?;
  }
  goto code_?;
}


/* Void HandleParticipantListChanged() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_HandleParticipantListChanged
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  uVar2 = 0;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    lVar3 = 0x20;
    while ((int)uVar2 < (pLVar1->fields)._size) {
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
         ((pDVar7 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                               (pMVar6,(MethodInfo *)0x0),
          pDVar7 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0 ||
          (pDVar8 = (pDVar7->fields)._dictionary,
          pDVar8 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0)))) goto code_?;
      if ((pDVar8->fields)._count - (pDVar8->fields)._freeCount <= (int)uVar2) break;
      pLVar1 = (this->fields)._.scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar9 = (pLVar1->fields)._items;
      if (pSVar9 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
      if ((uint)pSVar9->max_length <= uVar2) goto code_?;
      lVar10 = *(longlong *)((longlong)pSVar9->vector + lVar3 + -0x20);
      if ((lVar10 == 0) || (pOVar11 = *(Object **)(lVar10 + 0x30), pOVar11 == (Object *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar12 = pOVar11[1].klass;
      if (pOVar12 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar11,(MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcRam_? = pcVar13;
      pvVar15 = (void *)(*pcRam_?)(pOVar12);
      pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar15,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                          );
      if (pOVar11 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar12 = pOVar11[1].klass;
      if (pOVar12 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar11,(MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcRam_? = pcVar13;
      (*pcRam_?)(pOVar12);
      pLVar1 = (this->fields)._.scoreBoardPlayerData;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar4 != (MVGameControllerBase *)0x0) &&
         (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
        (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) &&
       ((pDVar7 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar6,(MethodInfo *)0x0),
        pDVar7 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0 &&
        (pDVar8 = (pDVar7->fields)._dictionary,
        pDVar8 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0)))) {
      uVar2 = (pDVar8->fields)._count - (pDVar8->fields)._freeCount;
      pLVar1 = (this->fields)._.scoreBoardPlayerData;
      if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
        lVar3 = (longlong)(int)uVar2 * 8 + 0x20;
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
code_?:
  if ((pLVar1->fields)._size <= (int)uVar2) {
    return;
  }
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pSVar9 = (pLVar1->fields)._items;
  if (pSVar9 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
  if ((uint)pSVar9->max_length <= uVar2) {
code_?:
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar10 = *(longlong *)((longlong)pSVar9->vector + lVar3 + -0x20);
  if (lVar10 == 0) goto code_?;
  plVar16 = *(longlong **)(lVar10 + 0x10);
  uVar17 = (this->fields)._.statType;
  aIStackX_8[0].m_value = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral______);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch(uVar17) {
  default:
    pSVar18 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    break;
  case 2:
  case 8:
    pSVar18 = StringLiteral______;
  }
  if (plVar16 == (longlong *)0x0) goto code_?;
  (**(code **)(*plVar16 + 0x5e8))(plVar16,pSVar18,*(undefined8 *)(*plVar16 + 0x5f0));
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
  pSVar9 = (pLVar1->fields)._items;
  if (pSVar9 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
  if ((uint)pSVar9->max_length <= uVar2) goto code_?;
  lVar10 = *(longlong *)((longlong)pSVar9->vector + lVar3 + -0x20);
  if ((lVar10 == 0) || (plVar16 = *(longlong **)(lVar10 + 0x18), plVar16 == (longlong *)0x0))
  goto code_?;
  (**(code **)(*plVar16 + 0x5e8))(plVar16,::StringLiteral__,*(undefined8 *)(*plVar16 + 0x5f0));
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
  pSVar9 = (pLVar1->fields)._items;
  if (pSVar9 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
  if ((uint)pSVar9->max_length <= uVar2) goto code_?;
  lVar10 = *(longlong *)((longlong)pSVar9->vector + lVar3 + -0x20);
  if ((lVar10 == 0) || (pOVar11 = *(Object **)(lVar10 + 0x30), pOVar11 == (Object *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar12 = pOVar11[1].klass;
  if (pOVar12 == (Object__Class *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException(pOVar11,(MethodInfo *)0x0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcVar13 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcRam_? = pcVar13;
  pvVar15 = (void *)(*pcRam_?)(pOVar12);
  pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
            Unmarshal_UnmarshalUnityObject
                      (pvVar15,
                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                      );
  if (pOVar11 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar12 = pOVar11[1].klass;
  if (pOVar12 == (Object__Class *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException(pOVar11,(MethodInfo *)0x0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcVar13 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcRam_? = pcVar13;
  (*pcRam_?)(pOVar12);
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  uVar2 = uVar2 + 1;
  lVar3 = lVar3 + 8;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  goto code_?;
}


/* Void Initialize(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_Initialize
               (ScoreBoardSingleBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
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
  ScoreBoardBase::ScoreBoardBase_Initialize
            ((ScoreBoardBase *)this,statType & 0xff,(MethodInfo *)0x0);
  (*(this->klass->vtable).HandleParticipantListChanged.methodPtr)(this);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pDVar3 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0),
     pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_5 = (pDVar3->fields)._dictionary;
  puStack_6 = (undefined4 *)0x0;
  uStack_7 = 0;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  if (uStack_5 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_12 = (uStack_5->fields)._version;
  uStack_7 = 0;
  uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
  uStack_13 = (undefined4)uStack_5;
  uStack_14 = uStack_5._4_4_;
  uStack_15 = 0;
  apMStack_16[0] = (MVPlayer *)0x0;
  uStack_5 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  puStack_6 = &uStack_13;
  do {
    lVar17 = CONCAT44(uStack_14,uStack_13);
    if (lVar17 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iStack_12 != *(int *)(lVar17 + 0x2c)) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (lVar17 == 0) goto code_?;
      if (*(uint *)(lVar17 + 0x20) <= uStack_15) {
        return;
      }
      lVar18 = *(longlong *)(lVar17 + 0x18);
      lVar19 = (longlong)(int)uStack_15;
      uVar8 = uStack_15 + 1;
      if (lVar18 == 0) goto code_?;
      if (*(uint *)(lVar18 + 0x18) <= uStack_15) {
        uStack_15 = uVar8;
        FUN_?();
        goto code_?;
      }
      uStack_15 = uVar8;
    } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
    apMStack_16[0] = *(MVPlayer **)(lVar18 + (lVar19 + 2) * 0x18);
    func_?(apMStack_16);
    if (apMStack_16[0] == (MVPlayer *)0x0) {
code_?:
      FUN_?();
      uVar8 = uStack_15;
code_?:
      uStack_15 = uVar8;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    uVar8 = (apMStack_16[0]->fields)._ActorNr_k__BackingField;
    uVar20 = MVPlayer::MVPlayer_GetGameStat(apMStack_16[0],statType & 0xff,(MethodInfo *)0x0);
    (*(this->klass->vtable).OnStatsChange.methodPtr)
              (this,(ulonglong)uVar8,(ulonglong)uVar20,(this->klass->vtable).OnStatsChange.method);
  } while( true );
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_OnEnable
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  ScoreBoardBase::ScoreBoardBase_ResetScoreBoard((ScoreBoardBase *)this,(MethodInfo *)0x0);
  (*(this->klass->vtable).HandleParticipantListChanged.methodPtr)(this);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
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
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pDVar3 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0),
     pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pDStack_5 = (pDVar3->fields)._dictionary;
  puStack_6 = (undefined1 *)0x0;
  puStack_7 = (undefined *)0x0;
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
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_13 = (pDStack_5->fields)._version;
  puStack_7 = (undefined *)0x0;
  uStack_14 = 0;
  pMStack_15 = (MVPlayer *)0x0;
  pDStack_9 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  puStack_6 = (undefined1 *)&pDStack_5;
code_?:
  if (pDStack_5 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    if (iStack_13 == (pDStack_5->fields)._version) goto code_?;
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_?:
  do {
    if (pDStack_5 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    if ((uint)(pDStack_5->fields)._count <= uStack_14) {
      return;
    }
    pDVar16 = (pDStack_5->fields)._entries;
    lVar17 = (longlong)(int)uStack_14;
    uVar8 = uStack_14 + 1;
    if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
    goto code_?;
    if ((uint)pDVar16->max_length <= uStack_14) {
      uStack_14 = uVar8;
      FUN_?();
      goto code_?;
    }
    uStack_14 = uVar8;
  } while (pDVar16->vector[lVar17].hashCode < 0);
  pMStack_15 = pDVar16->vector[lVar17].value;
  func_?();
  pMVar18 = pMStack_15;
  if (pMStack_15 != (MVPlayer *)0x0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      this_01 = (pMVar2->fields).gameStatCounterManager;
      if (this_01 != (GameStatCounterManager *)0x0) {
        oldId = 0;
        newScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                             (this_01,(uint)(this->fields)._.statType,
                              (pMVar18->fields)._Team_k__BackingField,
                              (pMVar18->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
        this_02 = (pMVar18->fields)._SubscriptionRules_k__BackingField;
        if (this_02 != (SubscriptionRulesWrapper *)0x0) {
          activateMemberUI =
               MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
               SubscriptionRulesWrapper_HasBenefit
                         (this_02,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
          pLVar19 = (this->fields)._.scoreBoardPlayerData;
          if (pLVar19 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
            lVar17 = FUN_?((this->fields)._.scoreBoardPlayerData,(pLVar19->fields)._size + -1
                                  );
            if (lVar17 != 0) {
              bVar20 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
                                 ((ScoreBoardBase *)this,newScore,*(int32_t *)(lVar17 + 0x2c),0,
                                  oldId,in_stack_21);
              if (bVar20 == 0) goto code_?;
              pUVar22 = (pMVar18->fields)._UserProfileData_k__BackingField;
              if (pUVar22 != (UserProfileData *)0x0) {
                in_stack_21 = (MethodInfo *)0x0;
                ScoreBoardBase::ScoreBoardBase_SortNewScore
                          ((ScoreBoardBase *)this,(pUVar22->fields).UserName,
                           (pMVar18->fields)._ActorNr_k__BackingField,newScore,activateMemberUI,
                           (MethodInfo *)0x0);
                goto code_?;
              }
code_?:
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
    uVar8 = uStack_14;
code_?:
    uStack_14 = uVar8;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    goto code_?;
  }
  goto code_?;
}


/* Void OnPlayerListChanged() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_OnPlayerListChanged
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  (*(this->klass->vtable).HandleParticipantListChanged.methodPtr)();
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
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
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pDVar3 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0),
     pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pDStack_5 = (pDVar3->fields)._dictionary;
  ppDStack_6 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
  puStack_7 = (undefined *)0x0;
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
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_13 = (pDStack_5->fields)._version;
  puStack_7 = (undefined *)0x0;
  uStack_14 = 0;
  pMStack_15 = (MVPlayer *)0x0;
  pDStack_9 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  ppDStack_6 = &pDStack_5;
code_?:
  if (pDStack_5 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    if (iStack_13 == (pDStack_5->fields)._version) goto code_?;
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_?:
  do {
    if (pDStack_5 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    if ((uint)(pDStack_5->fields)._count <= uStack_14) {
      return;
    }
    pDVar16 = (pDStack_5->fields)._entries;
    lVar17 = (longlong)(int)uStack_14;
    uVar8 = uStack_14 + 1;
    if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
    goto code_?;
    if ((uint)pDVar16->max_length <= uStack_14) {
      uStack_14 = uVar8;
      FUN_?();
      goto code_?;
    }
    uStack_14 = uVar8;
  } while (pDVar16->vector[lVar17].hashCode < 0);
  pMStack_15 = pDVar16->vector[lVar17].value;
  func_?();
  pMVar18 = pMStack_15;
  if (pMStack_15 != (MVPlayer *)0x0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      this_01 = (pMVar2->fields).gameStatCounterManager;
      if (this_01 != (GameStatCounterManager *)0x0) {
        oldId = 0;
        newScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                             (this_01,(uint)(this->fields)._.statType,
                              (pMVar18->fields)._Team_k__BackingField,
                              (pMVar18->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
        this_02 = (pMVar18->fields)._SubscriptionRules_k__BackingField;
        if (this_02 != (SubscriptionRulesWrapper *)0x0) {
          activateMemberUI =
               MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
               SubscriptionRulesWrapper_HasBenefit
                         (this_02,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
          pLVar19 = (this->fields)._.scoreBoardPlayerData;
          if (pLVar19 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
            lVar17 = FUN_?((this->fields)._.scoreBoardPlayerData,(pLVar19->fields)._size + -1
                                  );
            if (lVar17 != 0) {
              bVar20 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
                                 ((ScoreBoardBase *)this,newScore,*(int32_t *)(lVar17 + 0x2c),0,
                                  oldId,in_stack_21);
              if (bVar20 == 0) goto code_?;
              pUVar22 = (pMVar18->fields)._UserProfileData_k__BackingField;
              if (pUVar22 != (UserProfileData *)0x0) {
                in_stack_21 = (MethodInfo *)0x0;
                ScoreBoardBase::ScoreBoardBase_SortNewScore
                          ((ScoreBoardBase *)this,(pUVar22->fields).UserName,
                           (pMVar18->fields)._ActorNr_k__BackingField,newScore,activateMemberUI,
                           (MethodInfo *)0x0);
                goto code_?;
              }
code_?:
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
    uVar8 = uStack_14;
code_?:
    uStack_14 = uVar8;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    goto code_?;
  }
  goto code_?;
}


/* Void OnStatsChange(Int32, Int32) */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_OnStatsChange
               (ScoreBoardSingleBase *this,int32_t actorNumber,int32_t scoreCount,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apOStack_1[0] = (Object *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pMVar4->fields).players;
    if (this_00 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,actorNumber,apOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                      );
    if (bVar5 == 0) {
      return;
    }
    if ((apOStack_1[0] == (Object *)0x0) ||
       ((SubscriptionRulesWrapper *)apOStack_1[0][7].monitor == (SubscriptionRulesWrapper *)0x0))
    goto code_?;
    bVar5 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      ((SubscriptionRulesWrapper *)apOStack_1[0][7].monitor,
                       SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
    pLVar6 = (this->fields)._.scoreBoardPlayerData;
    if (pLVar6 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    iVar7 = (pLVar6->fields)._size;
    if ((uint)(pLVar6->fields)._size <= iVar7 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pSVar9 = (pLVar6->fields)._items;
    if (pSVar9 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
    if ((uint)pSVar9->max_length <= iVar7 - 1U) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pSVar9->vector[(longlong)iVar7 + -1] == (ScoreBoardBase_ScoreData *)0x0)
    goto code_?;
    iVar7 = (pSVar9->vector[(longlong)iVar7 + -1]->fields).Score;
    switch((this->fields)._.statType) {
    case 1:
    case 3:
    case 6:
      if (scoreCount <= iVar7) {
        return;
      }
      break;
    case 2:
    case 8:
      if (-1 < iVar7) {
        if (scoreCount < 1) {
          return;
        }
        if ((iVar7 <= scoreCount) && (iVar7 != 0)) {
          return;
        }
      }
      break;
    default:
      goto code_?;
    }
    if ((apOStack_1[0] != (Object *)0x0) && (apOStack_1[0][7].klass != (Object__Class *)0x0)) {
      ScoreBoardBase::ScoreBoardBase_SortNewScore
                ((ScoreBoardBase *)this,(String *)((apOStack_1[0][7].klass)->_0).namespaze,
                 actorNumber,scoreCount,bVar5,(MethodInfo *)0x0);
code_?:
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ReSortScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_ReSortScoreBoard
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  ScoreBoardBase::ScoreBoardBase_ResetScoreBoard((ScoreBoardBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
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
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pDVar3 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0),
     pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pDStack_5 = (pDVar3->fields)._dictionary;
  ppDStack_6 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
  puStack_7 = (undefined *)0x0;
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
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_13 = (pDStack_5->fields)._version;
  puStack_7 = (undefined *)0x0;
  uStack_14 = 0;
  pMStack_15 = (MVPlayer *)0x0;
  pDStack_9 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  ppDStack_6 = &pDStack_5;
code_?:
  if (pDStack_5 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    if (iStack_13 == (pDStack_5->fields)._version) goto code_?;
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_?:
  do {
    if (pDStack_5 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    if ((uint)(pDStack_5->fields)._count <= uStack_14) {
      return;
    }
    pDVar16 = (pDStack_5->fields)._entries;
    lVar17 = (longlong)(int)uStack_14;
    uVar8 = uStack_14 + 1;
    if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
    goto code_?;
    if ((uint)pDVar16->max_length <= uStack_14) {
      uStack_14 = uVar8;
      FUN_?();
      goto code_?;
    }
    uStack_14 = uVar8;
  } while (pDVar16->vector[lVar17].hashCode < 0);
  pMStack_15 = pDVar16->vector[lVar17].value;
  func_?();
  pMVar18 = pMStack_15;
  if (pMStack_15 != (MVPlayer *)0x0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      this_01 = (pMVar2->fields).gameStatCounterManager;
      if (this_01 != (GameStatCounterManager *)0x0) {
        oldId = 0;
        newScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                             (this_01,(uint)(this->fields)._.statType,
                              (pMVar18->fields)._Team_k__BackingField,
                              (pMVar18->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
        this_02 = (pMVar18->fields)._SubscriptionRules_k__BackingField;
        if (this_02 != (SubscriptionRulesWrapper *)0x0) {
          activateMemberUI =
               MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
               SubscriptionRulesWrapper_HasBenefit
                         (this_02,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
          pLVar19 = (this->fields)._.scoreBoardPlayerData;
          if (pLVar19 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
            lVar17 = FUN_?((this->fields)._.scoreBoardPlayerData,(pLVar19->fields)._size + -1
                                  );
            if (lVar17 != 0) {
              bVar20 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
                                 ((ScoreBoardBase *)this,newScore,*(int32_t *)(lVar17 + 0x2c),0,
                                  oldId,in_stack_21);
              if (bVar20 == 0) goto code_?;
              pUVar22 = (pMVar18->fields)._UserProfileData_k__BackingField;
              if (pUVar22 != (UserProfileData *)0x0) {
                in_stack_21 = (MethodInfo *)0x0;
                ScoreBoardBase::ScoreBoardBase_SortNewScore
                          ((ScoreBoardBase *)this,(pUVar22->fields).UserName,
                           (pMVar18->fields)._ActorNr_k__BackingField,newScore,activateMemberUI,
                           (MethodInfo *)0x0);
                goto code_?;
              }
code_?:
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
    uVar8 = uStack_14;
code_?:
    uStack_14 = uVar8;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    goto code_?;
  }
  goto code_?;
}

