
/* Void Awake() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_Awake
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListButton__OnPlayerListReady__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListButton__PendingCountChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListButton__UpdateButton__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListButton__ViewNotification__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).colorStyleObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 == (ColorStyleObject *)0x0) {
    bVar2 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = (pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0;
  }
  pMVar3 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
  bVar4 = cRam_? == '\0';
  (this->fields).useColorStyle = bVar2;
  if (bVar4) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     (pMVar7 = (pMVar6->fields).playerContainer, pMVar7 == (MVPlayerContainer *)0x0)) {
code_?:
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pAVar9 = (pMVar7->fields).OnPlayerListChanged;
  pNVar10 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar10,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0);
  pMVar11 = (MVTeamManager_OnTeamsUpdatedDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
  if (pMVar11 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
    (pMVar7->fields).OnPlayerListChanged = (Action *)0x0;
  }
  else {
    pMVar12 = pMVar3;
    if (pMVar11->klass == (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
      pMVar12 = pMVar11;
    }
    if (pMVar12 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pMVar7->fields).OnPlayerListChanged = (Action *)pMVar12;
    pMVar12 = pMVar3;
    if (pMVar11->klass == (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
      pMVar12 = pMVar11;
    }
    if (pMVar12 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar13 = (uint)((ulonglong)&(pMVar7->fields).OnPlayerListChanged >> 0xc);
    lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
    do {
      uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar16 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar2 = uVar15 == *puVar16;
      if (bVar2) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     (pMVar17 = (pMVar6->fields).teamManager, pMVar17 == (MVTeamManager *)0x0))
  goto code_?;
  pMVar11 = (pMVar17->fields).OnTeamsUpdated;
  pNVar10 = (NavMesh_OnNavMeshPreUpdate *)
            FUN_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar10,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0);
  pMVar11 = (MVTeamManager_OnTeamsUpdatedDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pMVar11,(Delegate *)pNVar10,(MethodInfo *)0x0);
  if (pMVar11 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
    (pMVar17->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
  }
  else {
    pMVar12 = pMVar3;
    if (pMVar11->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
      pMVar12 = pMVar11;
    }
    if (pMVar12 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pMVar17->fields).OnTeamsUpdated = pMVar12;
    pMVar12 = pMVar3;
    if (pMVar11->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
      pMVar12 = pMVar11;
    }
    if (pMVar12 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar13 = (uint)((ulonglong)&(pMVar17->fields).OnTeamsUpdated >> 0xc);
    lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
    do {
      uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar16 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar2 = uVar15 == *puVar16;
      if (bVar2) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     (pFVar18 = (pMVar6->fields)._Friends_k__BackingField, pFVar18 == (FriendList *)0x0))
  goto code_?;
  a = (pFVar18->fields).OnFriendRequestReceived;
  pNVar10 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar10,(Object *)this,MethodInfo__PlayerListButton__ViewNotification__,
             (MethodInfo *)0x0);
  pMVar11 = (MVTeamManager_OnTeamsUpdatedDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)a,(Delegate *)pNVar10,(MethodInfo *)0x0);
  if (pMVar11 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
    (pFVar18->fields).OnFriendRequestReceived = (UnityAction *)0x0;
  }
  else {
    pMVar12 = pMVar3;
    if (pMVar11->klass ==
        (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__UnityEngine__Events__UnityAction) {
      pMVar12 = pMVar11;
    }
    if (pMVar12 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar18->fields).OnFriendRequestReceived = (UnityAction *)pMVar12;
    pMVar12 = pMVar3;
    if (pMVar11->klass ==
        (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__UnityEngine__Events__UnityAction) {
      pMVar12 = pMVar11;
    }
    if (pMVar12 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar13 = (uint)((ulonglong)&(pFVar18->fields).OnFriendRequestReceived >> 0xc);
    lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
    do {
      uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar16 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar2 = uVar15 == *puVar16;
      if (bVar2) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     (pFVar18 = (pMVar6->fields)._Friends_k__BackingField, pFVar18 == (FriendList *)0x0))
  goto code_?;
  pUVar19 = (pFVar18->fields).OnPendingCountChanged;
  pDVar20 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
  FUN_?(pDVar20,this);
  pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar19,pDVar20,(MethodInfo *)0x0);
  pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
  if (pDVar20 == (Delegate *)0x0) {
    (pFVar18->fields).OnPendingCountChanged = (UnityAction_1_System_Int32_ *)0x0;
  }
  else {
    pUVar19 = (UnityAction_1_System_Int32_ *)
              FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
    if (pUVar19 == (UnityAction_1_System_Int32_ *)0x0) {
      FUN_?(pDVar20,pUVar21);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar18->fields).OnPendingCountChanged = pUVar19;
    pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    lVar14 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
    if (lVar14 == 0) {
      FUN_?(pDVar20,pUVar21);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar13 = (uint)((ulonglong)&(pFVar18->fields).OnPendingCountChanged >> 0xc);
    lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
    do {
      uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar16 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar2 = uVar15 == *puVar16;
      if (bVar2) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     (pMVar7 = (pMVar6->fields).playerContainer, pMVar7 == (MVPlayerContainer *)0x0))
  goto code_?;
  pAVar9 = (pMVar7->fields).OnPlayerListLoaded;
  pNVar10 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar10,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
             (MethodInfo *)0x0);
  pMVar11 = (MVTeamManager_OnTeamsUpdatedDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
  if (pMVar11 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
    (pMVar7->fields).OnPlayerListLoaded = (Action *)0x0;
  }
  else {
    pMVar12 = pMVar3;
    if (pMVar11->klass == (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
      pMVar12 = pMVar11;
    }
    if (pMVar12 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      FUN_?(pMVar11);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pMVar7->fields).OnPlayerListLoaded = (Action *)pMVar12;
    if (pMVar11->klass == (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
      pMVar3 = pMVar11;
    }
    if (pMVar3 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      FUN_?(pMVar11);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar13 = (uint)((ulonglong)&(pMVar7->fields).OnPlayerListLoaded >> 0xc);
    lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
    do {
      uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar16 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar2 = uVar15 == *puVar16;
      if (bVar2) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    LOCK();
    UNLOCK();
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar22 = (this->fields).playersCount;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 == (MVGameControllerBase *)0x0) ||
      (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
     ((pMVar7 = (pMVar6->fields).playerContainer, pMVar7 == (MVPlayerContainer *)0x0 ||
      ((pDVar23 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar7,(MethodInfo *)0x0),
       pDVar23 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0 ||
       (pDVar24 = (pDVar23->fields)._dictionary,
       pDVar24 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0)))))) {
code_?:
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar25 = (pDVar24->fields)._count;
  iVar26 = (pDVar24->fields)._freeCount;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_27 = (undefined1  [8])0x0;
  ppDStack_28 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
  pSVar29 = mscorlib.dll::System::Number::Number_FormatInt32
                      (iVar25 - iVar26,(ReadOnlySpan_1_Char_ *)auStack_27,(IFormatProvider *)0x0,
                       (MethodInfo *)0x0);
  if (pTVar22 == (Text *)0x0) goto code_?;
  (*(pTVar22->klass->vtable).set_text.methodPtr)
            (pTVar22,pSVar29,(pTVar22->klass->vtable).set_text.method);
  PlayerListButton_UpdateTeamColor(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar5 == (MVGameControllerBase *)0x0) ||
       (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
      (pMVar7 = (pMVar6->fields).playerContainer, pMVar7 == (MVPlayerContainer *)0x0)) ||
     (pDVar23 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar7,(MethodInfo *)0x0),
     pDVar23 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0))
  goto code_?;
  pDStack_30 = (pDVar23->fields)._dictionary;
  ppDStack_28 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
  uStack_31 = 0;
  if (iRam_? != 0) {
    uVar13 = (uint)((ulonglong)auStack_27 >> 0xc);
    lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
    do {
      uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar16 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar2 = uVar15 == *puVar16;
      if (bVar2) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (pDStack_30 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    auStack_27 = (undefined1  [8])pDStack_30;
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ppDStack_28 = (Dictionary_2_System_Int32_MVPlayer_ **)
                ((ulonglong)(uint)(pDStack_30->fields)._version << 0x20);
  uStack_31 = 0;
  uStack_32 = (ulonglong)ppDStack_28;
  apMStack_33[0] = (MVPlayer *)0x0;
  auStack_27 = (undefined1  [8])0x0;
  ppDStack_28 = &pDStack_30;
  do {
    do {
      if (pDStack_30 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
      if (uStack_32._4_4_ != (pDStack_30->fields)._version) goto code_?;
      uVar15 = uStack_32 & 0xffffffff;
      do {
        if (pDStack_30 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        uVar13 = (uint)uVar15;
        if ((uint)(pDStack_30->fields)._count <= uVar13) {
          uStack_32 = CONCAT44(uStack_32._4_4_,(pDStack_30->fields)._count + 1);
          apMStack_33[0] = (MVPlayer *)0x0;
          goto code_?;
        }
        pDVar34 = (pDStack_30->fields)._entries;
        uVar15 = (ulonglong)(uVar13 + 1);
        uStack_32 = CONCAT44(uStack_32._4_4_,uVar13 + 1);
        if (pDVar34 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
        goto code_?;
        if ((uint)pDVar34->max_length <= uVar13) {
          FUN_?();
          goto code_?;
        }
      } while (pDVar34->vector[(int)uVar13].hashCode < 0);
      apMStack_33[0] = pDVar34->vector[(int)uVar13].value;
      func_?(apMStack_33);
      pMVar35 = apMStack_33[0];
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar5 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar6 = (pMVar5->fields).game;
      if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
      pFVar18 = (pMVar6->fields)._Friends_k__BackingField;
      if (pFVar18 == (FriendList *)0x0) goto code_?;
      pLVar36 = (pFVar18->fields).pendingNotifications;
      if (pMVar35 == (MVPlayer *)0x0) goto code_?;
      if (pLVar36 == (List_1_System_Int32_ *)0x0) goto code_?;
    } while (((pLVar36->fields)._size == 0) ||
            (iVar25 = FUN_?(pLVar36,(pMVar35->fields)._ProfileID_k__BackingField,
                                    MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                    ->klass->rgctx_data[0x17].rgctxDataDummy), iVar25 == -1));
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).prevPlayerListState;
    if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
    iVar37 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                       (this_00,(pMVar35->fields)._ProfileID_k__BackingField,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                        ->klass->rgctx_data[0x21].method);
  } while (-1 < iVar37);
  this_01 = (this->fields).notification;
  if (this_01 != (Image *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,1,(MethodInfo *)0x0);
code_?:
      this_03 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                 *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
      Text::TextResourceManager+FontAssetRef]::
      Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                (this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
      (this->fields).prevPlayerListState = (Dictionary_2_System_Int32_MVPlayer_ *)this_03;
      if (iRam_? != 0) {
        uVar13 = (uint)((ulonglong)&(this->fields).prevPlayerListState >> 0xc);
        lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
        do {
          uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
          puVar16 = (ulonglong *)(lVar14 + 0xADDR);
          LOCK();
          bVar2 = uVar15 == *puVar16;
          if (bVar2) {
            *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar5 == (MVGameControllerBase *)0x0) ||
          (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
         ((pMVar7 = (pMVar6->fields).playerContainer, pMVar7 == (MVPlayerContainer *)0x0 ||
          (pDVar23 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                               (pMVar7,(MethodInfo *)0x0),
          pDVar23 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0))))
      goto code_?;
      pDVar24 = (pDVar23->fields)._dictionary;
      ppDStack_28 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
      uStack_31 = 0;
      if (iRam_? != 0) {
        uVar13 = (uint)((ulonglong)auStack_27 >> 0xc);
        lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
        do {
          uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
          puVar16 = (ulonglong *)(lVar14 + 0xADDR);
          LOCK();
          bVar2 = uVar15 == *puVar16;
          if (bVar2) {
            *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      if (pDVar24 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        auStack_27 = (undefined1  [8])pDVar24;
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uStack_31 = 0;
      uStack_32 = (ulonglong)(uint)(pDVar24->fields)._version << 0x20;
      apMStack_33[0] = (MVPlayer *)0x0;
      auStack_27 = (undefined1  [8])0x0;
      ppDStack_28 = &pDStack_30;
      pDStack_30 = pDVar24;
      while (pDStack_30 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        if (uStack_32._4_4_ != (pDStack_30->fields)._version) goto code_?;
        uVar15 = uStack_32 & 0xffffffff;
        do {
          if (pDStack_30 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
          uVar13 = (uint)uVar15;
          if ((uint)(pDStack_30->fields)._count <= uVar13) {
            return;
          }
          pDVar34 = (pDStack_30->fields)._entries;
          uVar15 = (ulonglong)(uVar13 + 1);
          uStack_32 = CONCAT44(uStack_32._4_4_,uVar13 + 1);
          if (pDVar34 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
          goto code_?;
          if ((uint)pDVar34->max_length <= uVar13) goto code_?;
        } while (pDVar34->vector[(int)uVar13].hashCode < 0);
        apMStack_33[0] = pDVar34->vector[(int)uVar13].value;
        func_?(apMStack_33);
        pDVar24 = (this->fields).prevPlayerListState;
        if (apMStack_33[0] == (MVPlayer *)0x0) goto code_?;
        if (pDVar24 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                    ->klass->rgctx_data[0x22].method;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar24,
                   (apMStack_33[0]->fields)._ActorNr_k__BackingField,(Object *)apMStack_33[0],
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),method_00)
        ;
      }
      goto code_?;
    }
code_?:
    FUN_?();
  }
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
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
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
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CreatePlayerList() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_CreatePlayerList
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    LOCK();
    UNLOCK();
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
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerListButton___CreatePlayerList_b__17_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerListButton____c___CreatePlayerList_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerListButton____c);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_18[0] = GameStatCounterType__Enum_None;
  this_02 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  (this->fields).prevPlayerListState = (Dictionary_2_System_Int32_MVPlayer_ *)this_02;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).prevPlayerListState >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar6 == (MVGameControllerBase *)0x0) ||
       (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar7->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pDVar8 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0),
     pDVar8 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar1 = uStack_9;
code_?:
    uStack_9 = uVar1;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_10 = (pDVar8->fields)._dictionary;
    puStack_11 = (undefined4 *)0x0;
    uStack_12 = 0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&uStack_10 >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    if (uStack_10 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iStack_14 = (uStack_10->fields)._version;
    uStack_12 = 0;
    uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
    uStack_15 = (undefined4)uStack_10;
    uStack_16 = uStack_10._4_4_;
    uStack_9 = 0;
    apOStack_17[0] = (Object *)0x0;
    uStack_10 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
    puStack_11 = &uStack_15;
    while (lVar2 = CONCAT44(uStack_16,uStack_15), lVar2 != 0) {
      if (iStack_14 != *(int *)(lVar2 + 0x2c)) goto code_?;
      do {
        if (lVar2 == 0) goto code_?;
        if (*(uint *)(lVar2 + 0x20) <= uStack_9) {
          uStack_9 = *(int *)(lVar2 + 0x20) + 1;
          apOStack_17[0] = (Object *)0x0;
          obj = (this->fields).notification;
          if (obj != (Image *)0x0) {
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
            CVar18._.m_CachedPtr = (obj->fields)._._._._._._._;
            if (CVar18._.m_CachedPtr == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcVar13 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar19 = func_?(&UNK_?);
              FUN_?(uVar19,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            gcHandlePtr = (void *)(*pcRam_?)(CVar18._.m_CachedPtr);
            obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                     Unmarshal_UnmarshalUnityObject
                               (gcHandlePtr,
                                UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                               );
            if (obj_00 != (Object *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar20 = obj_00[1].klass;
              if (pOVar20 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcRam_? = pcVar13;
              (*pcRam_?)(pOVar20);
              pGVar21 = (this->fields).currPlayerLists;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar21 != (GameObject *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pGVar21->fields)._.m_CachedPtr != (void *)0x0) {
                  (this->fields).currPlayerLists = (GameObject *)0x0;
                  if (iRam_? != 0) {
                    uVar1 = (uint)((ulonglong)&(this->fields).currPlayerLists >> 0xc);
                    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
                      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
                      LOCK();
                      bVar5 = uVar3 == *puVar4;
                      if (bVar5) {
                        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar5);
                  }
                  pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__PlayerListButton____c->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__PlayerListButton____c);
                  }
                  this_03 = TypeInfo__PlayerListButton____c->static_fields->__9__17_0;
                  if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                    if (*(int *)&(TypeInfo__PlayerListButton____c->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__PlayerListButton____c);
                    }
                    object = TypeInfo__PlayerListButton____c->static_fields->__9;
                    this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                               (Object *)object,
                               MethodInfo__PlayerListButton____c___CreatePlayerList_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    TypeInfo__PlayerListButton____c->static_fields->__9__17_0 = this_03;
                    if (iRam_? != 0) {
                      uVar1 = (uint)((ulonglong)
                                      &TypeInfo__PlayerListButton____c->static_fields->__9__17_0 >>
                                     0xc);
                      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
                        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
                        LOCK();
                        bVar5 = uVar3 == *puVar4;
                        if (bVar5) {
                          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar5);
                    }
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  goto code_?;
                }
              }
              original = (this->fields).playerListsPrefab;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              this_04 = (Component *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)original,
                                   PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                                  );
              if (this_04 != (Component *)0x0) {
                pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_04,(MethodInfo *)0x0);
                (this->fields).currPlayerLists = pGVar21;
                if (iRam_? != 0) {
                  uVar1 = (uint)((ulonglong)&(this->fields).currPlayerLists >> 0xc);
                  lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
                    puVar4 = (ulonglong *)(lVar2 + 0xADDR);
                    LOCK();
                    bVar5 = uVar3 == *puVar4;
                    if (bVar5) {
                      *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                          ((GameStatCounterType__Enum *)auStackX_18,(MethodInfo *)0x0);
                this_04[1].monitor = (MonitorData *)(this->fields).playerListsPrefab;
                if (iRam_? != 0) {
                  uVar1 = (uint)((ulonglong)&this_04[1].monitor >> 0xc);
                  lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
                    puVar4 = (ulonglong *)(lVar2 + 0xADDR);
                    LOCK();
                    bVar5 = uVar3 == *puVar4;
                    if (bVar5) {
                      *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                *(undefined1 *)&this_04[2].fields._.m_CachedPtr = auStackX_18[0];
                *(undefined4 *)((longlong)&this_04[2].fields._.m_CachedPtr + 4) = 2;
                pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)this,
                           MethodInfo__PlayerListButton___CreatePlayerList_b__17_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
code_?:
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar21,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                return;
              }
            }
          }
          goto code_?;
        }
        lVar22 = *(longlong *)(lVar2 + 0x18);
        lVar23 = (longlong)(int)uStack_9;
        uVar1 = uStack_9 + 1;
        if (lVar22 == 0) goto code_?;
        bVar5 = *(uint *)(lVar22 + 0x18) <= uStack_9;
        uStack_9 = uVar1;
        if (bVar5) goto code_?;
      } while (*(int *)(lVar22 + 0x20 + lVar23 * 0x18) < 0);
      apOStack_17[0] = *(Object **)(lVar22 + (lVar23 + 2) * 0x18);
      func_?(apOStack_17);
      this_01 = (this->fields).prevPlayerListState;
      if (apOStack_17[0] == (Object *)0x0) goto code_?;
      if (this_01 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                  ->klass->rgctx_data[0x22].method;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                 *(int32_t *)((longlong)&apOStack_17[0][5].monitor + 4),apOStack_17[0],
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),method_00);
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_OnDestroy
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListButton__OnPlayerListReady__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListButton__PendingCountChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListButton__UpdateButton__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListButton__ViewNotification__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
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
    pAVar5 = (pMVar4->fields).OnPlayerListChanged;
    pNVar6 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar6,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0
              );
    pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
    pMVar8 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    if (pMVar7 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      (pMVar4->fields).OnPlayerListChanged = (Action *)0x0;
    }
    else {
      pMVar9 = pMVar8;
      if (pMVar7->klass == (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action)
      {
        pMVar9 = pMVar7;
      }
      if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (pMVar4->fields).OnPlayerListChanged = (Action *)pMVar9;
      pMVar9 = pMVar8;
      if (pMVar7->klass == (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action)
      {
        pMVar9 = pMVar7;
      }
      if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&(pMVar4->fields).OnPlayerListChanged >> 0xc);
      lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
      do {
        uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar14 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar15 = uVar13 == *puVar14;
        if (bVar15) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (pMVar16 = (pMVar3->fields).teamManager, pMVar16 != (MVTeamManager *)0x0)) {
      pMVar7 = (pMVar16->fields).OnTeamsUpdated;
      pNVar6 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar6,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,
                 (MethodInfo *)0x0);
      pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pMVar7,(Delegate *)pNVar6,(MethodInfo *)0x0);
      if (pMVar7 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        (pMVar16->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      }
      else {
        pMVar9 = pMVar8;
        if (pMVar7->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pMVar9 = pMVar7;
        }
        if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pMVar16->fields).OnTeamsUpdated = pMVar9;
        pMVar9 = pMVar8;
        if (pMVar7->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pMVar9 = pMVar7;
        }
        if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)&(pMVar16->fields).OnTeamsUpdated >> 0xc);
        lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
        do {
          uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
          puVar14 = (ulonglong *)(lVar12 + 0xADDR);
          LOCK();
          bVar15 = uVar13 == *puVar14;
          if (bVar15) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (pFVar17 = (pMVar3->fields)._Friends_k__BackingField, pFVar17 != (FriendList *)0x0)) {
        source = (pFVar17->fields).OnFriendRequestReceived;
        pNVar6 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar6,(Object *)this,MethodInfo__PlayerListButton__ViewNotification__,
                   (MethodInfo *)0x0);
        pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)source,(Delegate *)pNVar6,(MethodInfo *)0x0);
        if (pMVar7 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          (pFVar17->fields).OnFriendRequestReceived = (UnityAction *)0x0;
        }
        else {
          pMVar9 = pMVar8;
          if (pMVar7->klass ==
              (MVTeamManager_OnTeamsUpdatedDelegate__Class *)
              TypeInfo__UnityEngine__Events__UnityAction) {
            pMVar9 = pMVar7;
          }
          if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          (pFVar17->fields).OnFriendRequestReceived = (UnityAction *)pMVar9;
          pMVar9 = pMVar8;
          if (pMVar7->klass ==
              (MVTeamManager_OnTeamsUpdatedDelegate__Class *)
              TypeInfo__UnityEngine__Events__UnityAction) {
            pMVar9 = pMVar7;
          }
          if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&(pFVar17->fields).OnFriendRequestReceived >> 0xc);
          lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
          do {
            uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
            puVar14 = (ulonglong *)(lVar12 + 0xADDR);
            LOCK();
            bVar15 = uVar13 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar15);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 != (MVGameControllerBase *)0x0) &&
            (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
           (pFVar17 = (pMVar3->fields)._Friends_k__BackingField, pFVar17 != (FriendList *)0x0)) {
          pUVar18 = (pFVar17->fields).OnPendingCountChanged;
          pDVar19 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
          FUN_?(pDVar19,this);
          pDVar19 = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pUVar18,pDVar19,(MethodInfo *)0x0);
          pUVar20 = TypeInfo__UnityEngine__Events__UnityAction<int>;
          if (pDVar19 == (Delegate *)0x0) {
            (pFVar17->fields).OnPendingCountChanged = (UnityAction_1_System_Int32_ *)0x0;
          }
          else {
            pUVar18 = (UnityAction_1_System_Int32_ *)
                      FUN_?(pDVar19,TypeInfo__UnityEngine__Events__UnityAction<int>);
            if (pUVar18 == (UnityAction_1_System_Int32_ *)0x0) {
              FUN_?(pDVar19,pUVar20);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            (pFVar17->fields).OnPendingCountChanged = pUVar18;
            pUVar20 = TypeInfo__UnityEngine__Events__UnityAction<int>;
            lVar12 = FUN_?(pDVar19,TypeInfo__UnityEngine__Events__UnityAction<int>);
            if (lVar12 == 0) {
              FUN_?(pDVar19,pUVar20);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)&(pFVar17->fields).OnPendingCountChanged >> 0xc);
            lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
            do {
              uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
              puVar14 = (ulonglong *)(lVar12 + 0xADDR);
              LOCK();
              bVar15 = uVar13 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
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
            pAVar5 = (pMVar4->fields).OnPlayerListLoaded;
            pNVar6 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar6,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
                       (MethodInfo *)0x0);
            pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate *)
                      mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
            if (pMVar7 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
              (pMVar4->fields).OnPlayerListLoaded = (Action *)0x0;
            }
            else {
              pMVar9 = pMVar8;
              if (pMVar7->klass ==
                  (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
                pMVar9 = pMVar7;
              }
              if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
                FUN_?(pMVar7);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              (pMVar4->fields).OnPlayerListLoaded = (Action *)pMVar9;
              if (pMVar7->klass ==
                  (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
                pMVar8 = pMVar7;
              }
              if (pMVar8 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
                FUN_?(pMVar7);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            if (iRam_? == 0) {
              return;
            }
            uVar11 = (uint)((ulonglong)&(pMVar4->fields).OnPlayerListLoaded >> 0xc);
            lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
            do {
              uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
              puVar14 = (ulonglong *)(lVar12 + 0xADDR);
              LOCK();
              bVar15 = uVar13 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPlayerListReady() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_OnPlayerListReady
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&MethodInfo__PlayerListButton__OnPlayerListReady__);
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
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0))
  goto code_?;
  pAVar4 = (pMVar3->fields).OnPlayerListLoaded;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
             (MethodInfo *)0x0);
  pAVar4 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar4,(Delegate *)this_02,(MethodInfo *)0x0);
  if (pAVar4 == (Action *)0x0) {
    (pMVar3->fields).OnPlayerListLoaded = (Action *)0x0;
code_?:
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(pMVar3->fields).OnPlayerListLoaded >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 == (MVGameControllerBase *)0x0) ||
        (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
       ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0 ||
        (pDVar10 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0),
        pDVar10 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)))) {
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pDStack_12 = (pDVar10->fields)._dictionary;
    ppDStack_13 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
    uStack_14 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_15 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    if (pDStack_12 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      pDStack_15 = pDStack_12;
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    ppDStack_13 = (Dictionary_2_System_Int32_MVPlayer_ **)
                  ((ulonglong)(uint)(pDStack_12->fields)._version << 0x20);
    uStack_14 = 0;
    uStack_16 = (ulonglong)ppDStack_13;
    apMStack_17[0] = (MVPlayer *)0x0;
    pDStack_15 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
    ppDStack_13 = &pDStack_12;
    do {
      if (pDStack_12 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
      if (uStack_16._4_4_ != (pDStack_12->fields)._version) goto code_?;
      uVar7 = uStack_16 & 0xffffffff;
      do {
        if (pDStack_12 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        uVar5 = (uint)uVar7;
        if ((uint)(pDStack_12->fields)._count <= uVar5) {
          return;
        }
        pDVar18 = (pDStack_12->fields)._entries;
        uVar7 = (ulonglong)(uVar5 + 1);
        uStack_16 = CONCAT44(uStack_16._4_4_,uVar5 + 1);
        if (pDVar18 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
        goto code_?;
        if ((uint)pDVar18->max_length <= uVar5) {
          FUN_?();
          goto code_?;
        }
      } while (pDVar18->vector[(int)uVar5].hashCode < 0);
      apMStack_17[0] = pDVar18->vector[(int)uVar5].value;
      func_?(apMStack_17);
      pMVar19 = apMStack_17[0];
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar1 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar2 = (pMVar1->fields).game;
      if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
      pFVar20 = (pMVar2->fields)._Friends_k__BackingField;
      if (pFVar20 == (FriendList *)0x0) goto code_?;
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pFVar20->fields).pending;
      if (pMVar19 == (MVPlayer *)0x0) goto code_?;
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      iVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                         (this_00,(pMVar19->fields)._ProfileID_k__BackingField,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                          ->klass->rgctx_data[0x21].method);
    } while (iVar21 < 0);
    this_01 = (this->fields).notification;
    if (this_01 == (Image *)0x0) goto code_?;
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (this_03 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_03,1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pAVar22 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar22 = pAVar4;
    }
    if (pAVar22 == (Action *)0x0) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    (pMVar3->fields).OnPlayerListLoaded = pAVar22;
    pAVar22 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar22 = pAVar4;
    }
    if (pAVar22 != (Action *)0x0) goto code_?;
code_?:
    FUN_?();
  }
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
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void PendingCountChanged(Int32) */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_PendingCountChanged
               (PlayerListButton *this,int32_t pending,MethodInfo *method)

{
  this_00 = (this->fields).notification;
  if ((this_00 == (Image *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0 < pending,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0 < pending);
  return;
}


/* Void UpdateButton() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_UpdateButton
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    LOCK();
    UNLOCK();
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playersCount;
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
     ((pDVar5 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar4,(MethodInfo *)0x0),
      pDVar5 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0 ||
      (pDVar6 = (pDVar5->fields)._dictionary, pDVar6 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0)
      ))) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar8 = (pDVar6->fields)._count;
  iVar9 = (pDVar6->fields)._freeCount;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_10 = (undefined1  [8])0x0;
  ppDStack_11 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
  pSVar12 = mscorlib.dll::System::Number::Number_FormatInt32
                      (iVar8 - iVar9,(ReadOnlySpan_1_Char_ *)auStack_10,(IFormatProvider *)0x0,
                       (MethodInfo *)0x0);
  if (pTVar1 == (Text *)0x0) goto code_?;
  (*(pTVar1->klass->vtable).set_text.methodPtr)
            (pTVar1,pSVar12,(pTVar1->klass->vtable).set_text.method);
  PlayerListButton_UpdateTeamColor(this,(MethodInfo *)0x0);
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
      (pDVar5 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar4,(MethodInfo *)0x0),
      pDVar5 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0))))
  goto code_?;
  pDStack_13 = (pDVar5->fields)._dictionary;
  ppDStack_11 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
  uStack_14 = 0;
  if (iRam_? != 0) {
    uVar15 = (uint)((ulonglong)auStack_10 >> 0xc);
    lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
    do {
      uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
      puVar18 = (ulonglong *)(lVar16 + 0xADDR);
      LOCK();
      bVar19 = uVar17 == *puVar18;
      if (bVar19) {
        *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (!bVar19);
  }
  if (pDStack_13 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    auStack_10 = (undefined1  [8])pDStack_13;
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppDStack_11 = (Dictionary_2_System_Int32_MVPlayer_ **)
                ((ulonglong)(uint)(pDStack_13->fields)._version << 0x20);
  uStack_14 = 0;
  uStack_20 = (ulonglong)ppDStack_11;
  apMStack_21[0] = (MVPlayer *)0x0;
  auStack_10 = (undefined1  [8])0x0;
  ppDStack_11 = &pDStack_13;
  do {
    do {
      if (pDStack_13 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
      if (uStack_20._4_4_ != (pDStack_13->fields)._version) goto code_?;
      uVar17 = uStack_20 & 0xffffffff;
      do {
        if (pDStack_13 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        uVar15 = (uint)uVar17;
        if ((uint)(pDStack_13->fields)._count <= uVar15) {
          uStack_20 = CONCAT44(uStack_20._4_4_,(pDStack_13->fields)._count + 1);
          apMStack_21[0] = (MVPlayer *)0x0;
          goto code_?;
        }
        pDVar22 = (pDStack_13->fields)._entries;
        uVar17 = (ulonglong)(uVar15 + 1);
        uStack_20 = CONCAT44(uStack_20._4_4_,uVar15 + 1);
        if (pDVar22 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
        goto code_?;
        if ((uint)pDVar22->max_length <= uVar15) {
          FUN_?();
          goto code_?;
        }
      } while (pDVar22->vector[(int)uVar15].hashCode < 0);
      apMStack_21[0] = pDVar22->vector[(int)uVar15].value;
      func_?(apMStack_21);
      pMVar23 = apMStack_21[0];
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar2 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar3 = (pMVar2->fields).game;
      if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
      pFVar24 = (pMVar3->fields)._Friends_k__BackingField;
      if (pFVar24 == (FriendList *)0x0) goto code_?;
      pLVar25 = (pFVar24->fields).pendingNotifications;
      if (pMVar23 == (MVPlayer *)0x0) goto code_?;
      if (pLVar25 == (List_1_System_Int32_ *)0x0) goto code_?;
    } while (((pLVar25->fields)._size == 0) ||
            (iVar8 = FUN_?(pLVar25,(pMVar23->fields)._ProfileID_k__BackingField,
                                    MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                    ->klass->rgctx_data[0x17].rgctxDataDummy), iVar8 == -1));
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).prevPlayerListState;
    if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
    iVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                       (this_00,(pMVar23->fields)._ProfileID_k__BackingField,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                        ->klass->rgctx_data[0x21].method);
  } while (-1 < iVar26);
  this_01 = (this->fields).notification;
  if (this_01 != (Image *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,1,(MethodInfo *)0x0);
code_?:
      this_03 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                 *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
      Text::TextResourceManager+FontAssetRef]::
      Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                (this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
      (this->fields).prevPlayerListState = (Dictionary_2_System_Int32_MVPlayer_ *)this_03;
      if (iRam_? != 0) {
        uVar15 = (uint)((ulonglong)&(this->fields).prevPlayerListState >> 0xc);
        lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
        do {
          uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
          puVar18 = (ulonglong *)(lVar16 + 0xADDR);
          LOCK();
          bVar19 = uVar17 == *puVar18;
          if (bVar19) {
            *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
          }
          UNLOCK();
        } while (!bVar19);
      }
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
         (pDVar5 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar4,(MethodInfo *)0x0)
         , pDVar5 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0))
      goto code_?;
      pDVar6 = (pDVar5->fields)._dictionary;
      ppDStack_11 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
      uStack_14 = 0;
      if (iRam_? != 0) {
        uVar15 = (uint)((ulonglong)auStack_10 >> 0xc);
        lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
        do {
          uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
          puVar18 = (ulonglong *)(lVar16 + 0xADDR);
          LOCK();
          bVar19 = uVar17 == *puVar18;
          if (bVar19) {
            *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
          }
          UNLOCK();
        } while (!bVar19);
      }
      if (pDVar6 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        auStack_10 = (undefined1  [8])pDVar6;
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_14 = 0;
      uStack_20 = (ulonglong)(uint)(pDVar6->fields)._version << 0x20;
      apMStack_21[0] = (MVPlayer *)0x0;
      auStack_10 = (undefined1  [8])0x0;
      ppDStack_11 = &pDStack_13;
      pDStack_13 = pDVar6;
      while (pDStack_13 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        if (uStack_20._4_4_ != (pDStack_13->fields)._version) goto code_?;
        uVar17 = uStack_20 & 0xffffffff;
        do {
          if (pDStack_13 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
          uVar15 = (uint)uVar17;
          if ((uint)(pDStack_13->fields)._count <= uVar15) {
            return;
          }
          pDVar22 = (pDStack_13->fields)._entries;
          uVar17 = (ulonglong)(uVar15 + 1);
          uStack_20 = CONCAT44(uStack_20._4_4_,uVar15 + 1);
          if (pDVar22 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
          goto code_?;
          if ((uint)pDVar22->max_length <= uVar15) goto code_?;
        } while (pDVar22->vector[(int)uVar15].hashCode < 0);
        apMStack_21[0] = pDVar22->vector[(int)uVar15].value;
        func_?(apMStack_21);
        pDVar6 = (this->fields).prevPlayerListState;
        if (apMStack_21[0] == (MVPlayer *)0x0) goto code_?;
        if (pDVar6 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                    ->klass->rgctx_data[0x22].method;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,
                   (apMStack_21[0]->fields)._ActorNr_k__BackingField,(Object *)apMStack_21[0],
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),method_00)
        ;
      }
      goto code_?;
    }
code_?:
    FUN_?();
  }
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
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
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
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdatePlayersCount() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_UpdatePlayersCount
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playersCount;
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
    pDVar4 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if ((pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0) &&
       (pDVar5 = (pDVar4->fields)._dictionary, pDVar5 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0)
       ) {
      iVar6 = (pDVar5->fields)._count;
      iVar7 = (pDVar5->fields)._freeCount;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_8[0]._pointer._value = (void *)0x0;
      aRStack_8[0]._length = 0;
      aRStack_8[0]._12_4_ = 0;
      pSVar9 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar6 - iVar7,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pTVar1,pSVar9,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateTeamColor() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_UpdateTeamColor
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
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
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if (pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      if ((pDVar4->fields)._count - (pDVar4->fields)._freeCount < 2) {
        team = MVTeam__Enum_None;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 == (MVGameControllerBase *)0x0) ||
            (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
           ((this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0 ||
            (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_00,(MethodInfo *)0x0), pMVar5 == (MVLocalPlayer *)0x0))))
        goto code_?;
        team = (pMVar5->fields)._._Team_k__BackingField;
      }
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      colorStyle = Styles::Styles_GetTeamColorStyle(team,0,0,(MethodInfo *)0x0);
      pCVar6 = Styles::Styles_GetColor(&CStack_7,colorStyle,(MethodInfo *)0x0);
      fVar8 = pCVar6->r;
      fVar9 = pCVar6->g;
      uVar10._0_4_ = pCVar6->r;
      uVar10._4_4_ = pCVar6->g;
      fVar11 = pCVar6->b;
      fVar12 = pCVar6->a;
      uVar13._0_4_ = pCVar6->b;
      uVar13._4_4_ = pCVar6->a;
      if ((this->fields).useColorStyle == 0) {
        pBVar14 = (this->fields).button;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        Styles::Styles_SetStyle_4
                  (pBVar14,ButtonStyle__Enum_RegularButton,team,SoundStyle__Enum_NoSound,
                   (MethodInfo *)0x0);
      }
      else {
        this_01 = (this->fields).colorStyleObject;
        if (this_01 == (ColorStyleObject *)0x0) goto code_?;
        ColorStyleObject::ColorStyleObject_UpdateColorStyle(this_01,colorStyle,(MethodInfo *)0x0);
      }
      if ((this->fields).updateGradient != 0) {
        pGVar15 = (this->fields).gradientEffect;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar15 != (GradientEffect *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pGVar15->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
            pGVar15 = (this->fields).gradientEffect;
            if (pGVar15 == (GradientEffect *)0x0) goto code_?;
            (pGVar15->fields).top.r = fVar8;
            (pGVar15->fields).top.g = fVar9;
            (pGVar15->fields).top.b = fVar11;
            (pGVar15->fields).top.a = fVar12;
            pGVar15 = (this->fields).gradientEffect;
            CStack_7.a = (this->fields).gradientDarkenAmount;
            CStack_7.r = fVar8 * CStack_7.a;
            CStack_7.g = fVar9 * CStack_7.a;
            CStack_7.b = fVar11 * CStack_7.a;
            CStack_7.a = fVar12 * CStack_7.a;
            if (pGVar15 == (GradientEffect *)0x0) goto code_?;
            (pGVar15->fields).bottom.r = CStack_7.r;
            (pGVar15->fields).bottom.g = CStack_7.g;
            (pGVar15->fields).bottom.b = CStack_7.b;
            (pGVar15->fields).bottom.a = CStack_7.a;
          }
        }
      }
      if ((this->fields).updateButtonColors != 0) {
        pBVar14 = (this->fields).button;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pBVar14 != (Button *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pBVar14->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
            pBVar14 = (this->fields).button;
            if (pBVar14 != (Button *)0x0) {
              CStack_16.r = (pBVar14->fields)._.m_Colors.m_NormalColor.r;
              CStack_16.g = (pBVar14->fields)._.m_Colors.m_NormalColor.g;
              CStack_16.b = (pBVar14->fields)._.m_Colors.m_NormalColor.b;
              CStack_16.a = (pBVar14->fields)._.m_Colors.m_NormalColor.a;
              CStack_17.r = (pBVar14->fields)._.m_Colors.m_HighlightedColor.r;
              CStack_17.g = (pBVar14->fields)._.m_Colors.m_HighlightedColor.g;
              CStack_17.b = (pBVar14->fields)._.m_Colors.m_HighlightedColor.b;
              CStack_17.a = (pBVar14->fields)._.m_Colors.m_HighlightedColor.a;
              uVar18._0_4_ = (pBVar14->fields)._.m_Colors.m_DisabledColor.r;
              uVar18._4_4_ = (pBVar14->fields)._.m_Colors.m_DisabledColor.g;
              uVar19._0_4_ = (pBVar14->fields)._.m_Colors.m_DisabledColor.b;
              uVar19._4_4_ = (pBVar14->fields)._.m_Colors.m_DisabledColor.a;
              uVar20._0_4_ = (pBVar14->fields)._.m_Colors.m_ColorMultiplier;
              uVar20._4_4_ = (pBVar14->fields)._.m_Colors.m_FadeDuration;
              fStack_21 = (pBVar14->fields)._.m_Colors.m_PressedColor.r;
              fStack_22 = (pBVar14->fields)._.m_Colors.m_PressedColor.g;
              fStack_23 = (pBVar14->fields)._.m_Colors.m_PressedColor.b;
              fStack_24 = (pBVar14->fields)._.m_Colors.m_PressedColor.a;
              fStack_25 = (pBVar14->fields)._.m_Colors.m_SelectedColor.r;
              fStack_26 = (pBVar14->fields)._.m_Colors.m_SelectedColor.g;
              fStack_27 = (pBVar14->fields)._.m_Colors.m_SelectedColor.b;
              fStack_28 = (pBVar14->fields)._.m_Colors.m_SelectedColor.a;
              if (*(int *)&(TypeInfo__UnityEngine__UI__ColorBlock->_1).field_0x1c == 0) {
                FUN_?();
              }
              CStack_17.g = fVar9 * _UNK_?;
              CStack_17.r = fVar8 * _UNK_?;
              CStack_17.a = fVar12 * _UNK_?;
              CStack_17.b = fVar11 * _UNK_?;
              fStack_21 = fVar8 * _UNK_?;
              fStack_22 = fVar9 * _UNK_?;
              fStack_23 = fVar11 * _UNK_?;
              fStack_24 = fVar12 * _UNK_?;
              pBVar14 = (this->fields).button;
              fStack_25 = fVar8 * _UNK_?;
              fStack_26 = fVar9 * _UNK_?;
              fStack_27 = fVar11 * _UNK_?;
              fStack_28 = fVar12 * _UNK_?;
              CStack_16._0_8_ = uVar10;
              CStack_16._8_8_ = uVar13;
              if (pBVar14 != (Button *)0x0) {
                aCStack_29[0].m_PressedColor.g = fStack_22;
                aCStack_29[0].m_PressedColor.r = fStack_21;
                aCStack_29[0].m_PressedColor.a = fStack_24;
                aCStack_29[0].m_PressedColor.b = fStack_23;
                aCStack_29[0].m_HighlightedColor.r = fVar8 * _UNK_?;
                aCStack_29[0].m_HighlightedColor.g = fVar9 * _UNK_?;
                aCStack_29[0].m_HighlightedColor.b = fVar11 * _UNK_?;
                aCStack_29[0].m_HighlightedColor.a = fVar12 * _UNK_?;
                aCStack_29[0].m_SelectedColor.g = fStack_26;
                aCStack_29[0].m_SelectedColor.r = fStack_25;
                aCStack_29[0].m_SelectedColor.a = fStack_28;
                aCStack_29[0].m_SelectedColor.b = fStack_27;
                aCStack_29[0].m_NormalColor._0_8_ = uVar10;
                aCStack_29[0].m_NormalColor._8_8_ = uVar13;
                aCStack_29[0].m_DisabledColor._0_8_ = uVar18;
                aCStack_29[0].m_DisabledColor._8_8_ = uVar19;
                aCStack_29[0]._80_8_ = uVar20;
                UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                          ((Selectable *)pBVar14,aCStack_29,(MethodInfo *)0x0);
                return;
              }
            }
            goto code_?;
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void ViewNotification() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_ViewNotification
               (PlayerListButton *this,MethodInfo *method)

{
  this_00 = (this->fields).notification;
  if ((this_00 == (Image *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void <CreatePlayerList>b__17_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton__CreatePlayerList_b__17_1
               (PlayerListButton *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).currPlayerLists != (GameObject *)0x0) && (x != (IUIStack *)0x0)) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* PlayerListButton() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton__ctor
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).updateGradient = 1;
  (this->fields).updateButtonColors = 1;
  (this->fields).gradientDarkenAmount = 0.86;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  bVar1 = iRam_? != 0;
  (this->fields).prevPlayerListState = (Dictionary_2_System_Int32_MVPlayer_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).prevPlayerListState >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

