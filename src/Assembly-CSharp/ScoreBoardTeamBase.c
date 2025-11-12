
/* Void AddTeamsToScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_AddTeamsToScoreBoard
               (ScoreBoardTeamBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  lVar2 = 0x20;
  while( true ) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 == (MVGameControllerBase *)0x0) ||
        (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
       (pMVar5 = (pMVar4->fields).teamManager, pMVar5 == (MVTeamManager *)0x0)) break;
    pLVar6 = MVTeamManager::MVTeamManager_GetTeamList(pMVar5,(MethodInfo *)0x0);
    if (pLVar6 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
    if ((pLVar6->fields)._size <= (int)uVar1) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 == (MVGameControllerBase *)0x0) ||
        (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
       (pMVar5 = (pMVar4->fields).teamManager, pMVar5 == (MVTeamManager *)0x0)) break;
    pLVar6 = MVTeamManager::MVTeamManager_GetTeamList(pMVar5,(MethodInfo *)0x0);
    if (pLVar6 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
    if ((uint)(pLVar6->fields)._size <= uVar1) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pMVar8 = (pLVar6->fields)._items;
    if (pMVar8 == (MVTeam__Enum__Array *)0x0) break;
    if ((uint)pMVar8->max_length <= uVar1) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    team = *(MVTeam__Enum *)((longlong)pMVar8->vector + lVar2 + -0x20);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 == (MVGameControllerBase *)0x0) ||
        (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
       (this_00 = (pMVar4->fields).gameStatCounterManager, this_00 == (GameStatCounterManager *)0x0)
       ) break;
    scoreCount = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                           (this_00,(uint)(this->fields)._.statType,team,(MethodInfo *)0x0);
    ScoreBoardBase::ScoreBoardBase_SortNewScore
              ((ScoreBoardBase *)this,::StringLiteral__,team,scoreCount,0,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 4;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Color GetBackgroundColor(Int32) */

Color * Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_GetBackgroundColor
                  (Color *__return_storage_ptr__,ScoreBoardTeamBase *this,int32_t teamId,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (teamId != -1) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar1 = Styles::Styles_GetTeamColor(&CStack_2,teamId,0,(MethodInfo *)0x0);
    fVar3 = (this->fields)._.backgroundAlpha;
    fVar4 = pCVar1->g;
    fVar5 = pCVar1->b;
    __return_storage_ptr__->r = pCVar1->r;
    __return_storage_ptr__->g = fVar4;
    __return_storage_ptr__->b = fVar5;
    __return_storage_ptr__->a = fVar3;
    return __return_storage_ptr__;
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = Styles::Styles_GetColor
                     (&CStack_2,ColorStyle__Enum_OffWhiteTransparent,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Void HandleParticipantListChanged() */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_HandleParticipantListChanged
               (ScoreBoardTeamBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
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
          (pMVar6 = (pMVar5->fields).teamManager, pMVar6 == (MVTeamManager *)0x0)) ||
         (pLVar7 = MVTeamManager::MVTeamManager_GetTeamList(pMVar6,(MethodInfo *)0x0),
         pLVar7 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
      if ((pLVar7->fields)._size <= (int)uVar2) break;
      pLVar1 = (this->fields)._.scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar8 = (pLVar1->fields)._items;
      if (pSVar8 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
      if ((uint)pSVar8->max_length <= uVar2) goto code_?;
      lVar9 = *(longlong *)((longlong)pSVar8->vector + lVar3 + -0x20);
      if ((lVar9 == 0) || (pOVar10 = *(Object **)(lVar9 + 0x30), pOVar10 == (Object *)0x0))
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
      pOVar11 = pOVar10[1].klass;
      if (pOVar11 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar10,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      gcHandlePtr = (void *)(*pcRam_?)(pOVar11);
      pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (gcHandlePtr,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                          );
      if (pOVar10 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar11 = pOVar10[1].klass;
      if (pOVar11 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar10,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pOVar11);
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
        (pMVar6 = (pMVar5->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) &&
       (pLVar7 = MVTeamManager::MVTeamManager_GetTeamList(pMVar6,(MethodInfo *)0x0),
       uVar14 = _UNK_?, uVar15 = _UNK_?, uVar16 = _UNK_?,
       uVar17 = _UNK_?, pLVar7 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pLVar1 = (this->fields)._.scoreBoardPlayerData;
      uVar18 = (ulonglong)(pLVar7->fields)._size;
      if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
        lVar3 = uVar18 * 8 + 0x20;
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
code_?:
  uVar2 = (uint)uVar18;
  if ((pLVar1->fields)._size <= (int)uVar2) {
    return;
  }
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pSVar8 = (pLVar1->fields)._items;
  if (pSVar8 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
  if ((uint)pSVar8->max_length <= uVar2) {
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  lVar9 = *(longlong *)((longlong)pSVar8->vector + lVar3 + -0x20);
  if (lVar9 == 0) goto code_?;
  plVar19 = *(longlong **)(lVar9 + 0x30);
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar20 = Styles::Styles_HandleUnInitalized((MethodInfo *)0x0);
  uVar21 = uVar17;
  uVar22 = uVar16;
  uVar23 = uVar15;
  uVar24 = uVar14;
  if (bVar20 != 0) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__Styles);
    }
    this_00 = TypeInfo__Styles->static_fields->colorStylesDictionary;
    if ((this_00 == (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0) ||
       (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x1b,
                             MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                            ), pOVar10 == (Object *)0x0)) goto code_?;
    uVar21 = *(undefined4 *)((longlong)&pOVar10[1].klass + 4);
    uVar22 = *(undefined4 *)&pOVar10[1].monitor;
    uVar23 = *(undefined4 *)((longlong)&pOVar10[1].monitor + 4);
    uVar24 = *(undefined4 *)&pOVar10[2].klass;
  }
  if (plVar19 == (longlong *)0x0) goto code_?;
  uStack_25 = uVar21;
  uStack_26 = uVar22;
  uStack_27 = uVar23;
  uStack_28 = uVar24;
  (**(code **)(*plVar19 + 0x2a8))(plVar19,&uStack_25,*(undefined8 *)(*plVar19 + 0x2b0));
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
  pSVar8 = (pLVar1->fields)._items;
  if (pSVar8 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
  if ((uint)pSVar8->max_length <= uVar2) goto code_?;
  lVar9 = *(longlong *)((longlong)pSVar8->vector + lVar3 + -0x20);
  if ((lVar9 == 0) || (plVar19 = *(longlong **)(lVar9 + 0x20), plVar19 == (longlong *)0x0))
  goto code_?;
  (**(code **)(*plVar19 + 0x5e8))(plVar19,::StringLiteral__,*(undefined8 *)(*plVar19 + 0x5f0));
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
  pSVar8 = (pLVar1->fields)._items;
  if (pSVar8 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
  if ((uint)pSVar8->max_length <= uVar2) goto code_?;
  lVar9 = *(longlong *)((longlong)pSVar8->vector + lVar3 + -0x20);
  if ((lVar9 == 0) || (plVar19 = *(longlong **)(lVar9 + 0x18), plVar19 == (longlong *)0x0))
  goto code_?;
  (**(code **)(*plVar19 + 0x5e8))(plVar19,::StringLiteral__,*(undefined8 *)(*plVar19 + 0x5f0));
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
  pSVar8 = (pLVar1->fields)._items;
  if (pSVar8 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
  if ((uint)pSVar8->max_length <= uVar2) goto code_?;
  lVar9 = *(longlong *)((longlong)pSVar8->vector + lVar3 + -0x20);
  if ((lVar9 == 0) || (plVar19 = *(longlong **)(lVar9 + 0x10), plVar19 == (longlong *)0x0))
  goto code_?;
  (**(code **)(*plVar19 + 0x5e8))(plVar19,::StringLiteral__,*(undefined8 *)(*plVar19 + 0x5f0));
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
  pSVar8 = (pLVar1->fields)._items;
  if (pSVar8 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
  if ((uint)pSVar8->max_length <= uVar2) goto code_?;
  lVar9 = *(longlong *)((longlong)pSVar8->vector + lVar3 + -0x20);
  if (lVar9 == 0) goto code_?;
  *(undefined4 *)(lVar9 + 0x2c) = 0xffffffff;
  uVar18 = (ulonglong)(uVar2 + 1);
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  lVar3 = lVar3 + 8;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  goto code_?;
}


/* Void Initialize(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_Initialize
               (ScoreBoardTeamBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

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
  ScoreBoardTeamBase_AddTeamsToScoreBoard(this,(MethodInfo *)0x0);
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


/* Boolean IsNewScoreBetter(Int32, Int32, Int32, Int32) */

bool Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_IsNewScoreBetter
               (ScoreBoardTeamBase *this,int32_t newScore,int32_t oldScore,int32_t newId,
               int32_t oldId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newScore != oldScore) {
code_?:
    switch((this->fields)._.statType) {
    case 1:
    case 3:
    case 6:
      if (oldScore < newScore) {
        return 1;
      }
      break;
    case 2:
    case 8:
      if (oldScore < 0) {
        return 1;
      }
      if (0 < newScore) {
        if (newScore < oldScore) {
          return 1;
        }
        if (oldScore == 0) {
          return 1;
        }
      }
    }
    return 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) &&
     (pLVar4 = MVTeamManager::MVTeamManager_GetPlayersInTeam(pMVar3,newId,(MethodInfo *)0x0),
     pLVar4 != (List_1_MVPlayer_ *)0x0)) {
    if ((pLVar4->fields)._size == 0) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 != (MVNetworkGame *)0x0) &&
        (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) &&
       (pLVar4 = MVTeamManager::MVTeamManager_GetPlayersInTeam(pMVar3,oldId,(MethodInfo *)0x0),
       pLVar4 != (List_1_MVPlayer_ *)0x0)) {
      if ((pLVar4->fields)._size == 0) {
        return 1;
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void OnStatsChange(Int32, Int32) */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_OnStatsChange
               (ScoreBoardTeamBase *this,int32_t actorNumber,int32_t scoreCount,MethodInfo *method)

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
    FUN_?(&::StringLiteral__);
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
    if (apOStack_1[0] != (Object *)0x0) {
      ScoreBoardBase::ScoreBoardBase_SortNewScore
                ((ScoreBoardBase *)this,::StringLiteral__,
                 *(int32_t *)((longlong)&apOStack_1[0][8].klass + 4),scoreCount,0,(MethodInfo *)0x0
                );
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

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_ReSortScoreBoard
               (ScoreBoardTeamBase *this,MethodInfo *method)

{
  ScoreBoardBase::ScoreBoardBase_ResetScoreBoard((ScoreBoardBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  lVar2 = 0x20;
  while( true ) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 == (MVGameControllerBase *)0x0) ||
        (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
       (pMVar5 = (pMVar4->fields).teamManager, pMVar5 == (MVTeamManager *)0x0)) break;
    pLVar6 = MVTeamManager::MVTeamManager_GetTeamList(pMVar5,(MethodInfo *)0x0);
    if (pLVar6 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
    if ((pLVar6->fields)._size <= (int)uVar1) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 == (MVGameControllerBase *)0x0) ||
        (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
       (pMVar5 = (pMVar4->fields).teamManager, pMVar5 == (MVTeamManager *)0x0)) break;
    pLVar6 = MVTeamManager::MVTeamManager_GetTeamList(pMVar5,(MethodInfo *)0x0);
    if (pLVar6 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
    if ((uint)(pLVar6->fields)._size <= uVar1) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pMVar8 = (pLVar6->fields)._items;
    if (pMVar8 == (MVTeam__Enum__Array *)0x0) break;
    if ((uint)pMVar8->max_length <= uVar1) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    team = *(MVTeam__Enum *)((longlong)pMVar8->vector + lVar2 + -0x20);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 == (MVGameControllerBase *)0x0) ||
        (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
       (this_00 = (pMVar4->fields).gameStatCounterManager, this_00 == (GameStatCounterManager *)0x0)
       ) break;
    scoreCount = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                           (this_00,(uint)(this->fields)._.statType,team,(MethodInfo *)0x0);
    ScoreBoardBase::ScoreBoardBase_SortNewScore
              ((ScoreBoardBase *)this,::StringLiteral__,team,scoreCount,0,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 4;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UnSubscribeToCallbacks() */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_UnSubscribeToCallbacks
               (ScoreBoardTeamBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) {
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 == (MVNetworkGame *)0x0) goto DAT_?;
      pAVar5 = (pMVar4->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<IWinningCondition>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_,
                 (MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar7 = TypeInfo__System__Action<IWinningCondition>;
      if (pDVar6 == (Delegate *)0x0) {
        (pMVar4->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar5 = (Action_1_IWinningCondition_ *)
                  FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
        if (pAVar5 == (Action_1_IWinningCondition_ *)0x0) {
          FUN_?(pDVar6,pAVar7);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pMVar4->fields).OnWinningConditionFulfilled = pAVar5;
        pAVar7 = TypeInfo__System__Action<IWinningCondition>;
        lVar8 = FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
        if (lVar8 == 0) {
          FUN_?(pDVar6,pAVar7);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar4->fields).OnWinningConditionFulfilled >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
    }
  }
  return;
}

