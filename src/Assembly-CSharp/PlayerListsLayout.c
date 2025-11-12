
/* PlayerListBase CreatePlayerList(MVTeam, Int32) */

PlayerListBase *
Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_CreatePlayerList
          (PlayerListsLayout *this,MVTeam__Enum team,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PlayerListBase_MethodInfo__UnityEngine__Object__Instantiate<PlayerListBase>_PlayerListBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).playerListPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pPVar1 = (PlayerListBase *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pPVar1,
                      PlayerListBase_MethodInfo__UnityEngine__Object__Instantiate<PlayerListBase>_PlayerListBase_
                     );
  if (pPVar1 != (PlayerListBase *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      (*(pPVar1->klass->vtable).__unknown.methodPtr)
                (pPVar1,(ulonglong)team,score,(ulonglong)(this->fields).typeToDisplay,
                 (pPVar1->klass->vtable).__unknown.method);
      return pPVar1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar1 = (PlayerListBase *)(*pcVar2)();
  return pPVar1;
}


/* IEnumerator CreatePlayerLists(IEnumerable`1[MVPlayer], List`1[MV.WorldObject.MVTeam]) */

IEnumerator *
Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_CreatePlayerLists
          (PlayerListsLayout *this,IEnumerable_1_MVPlayer_ *players,
          List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerListsLayout___CreatePlayerLists_d__10);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__PlayerListsLayout___CreatePlayerLists_d__10);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].monitor = (MonitorData *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[3].klass = (IEnumerator__Class *)players;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 3) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  pIVar1[2].klass = (IEnumerator__Class *)teams;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* Dictionary`2[MV.WorldObject.MVTeam,List`1[MVPlayer]] GetSortedTeamLists(IEnumerable`1[MVPlayer],
   List`1[MV.WorldObject.MVTeam]) */

Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *
Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_GetSortedTeamLists
          (PlayerListsLayout *this,IEnumerable_1_MVPlayer_ *players,
          List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerListsLayout__ScoreSorter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apDStackX_18[0] = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  pDStack_1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0;
  uStack_2 = 0;
  KStack_3.key = 0;
  KStack_3._4_4_ = 0;
  KStack_3.value = (Object *)0x0;
  uStack_4._0_4_ = 0;
  uStack_4._4_4_ = 0;
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dictionary__
            );
  pDStack_5 = this_00;
  if (teams == (List_1_MV_WorldObject_MVTeam_ *)0x0) {
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
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
      lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    iStack_12 = (teams->fields)._version;
    uStack_13 = 0;
    uStack_14 = 0;
    uStack_15 = 0;
    uStack_7 = 0;
    ppDStack_16 = (Dictionary_2_System_UInt32_System_Object_ **)&uStack_17;
    uStack_17 = (Dictionary_2_System_UInt32_System_Object_ *)teams;
    while (uStack_17 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if ((iStack_12 != *(int32_t *)((longlong)&(uStack_17->fields)._entries + 4)) ||
         (*(uint *)&(uStack_17->fields)._entries <= uStack_14)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (uStack_17 == (Dictionary_2_System_UInt32_System_Object_ *)0x0)
        goto code_?;
        if (iStack_12 != *(int32_t *)((longlong)&(uStack_17->fields)._entries + 4))
        goto code_?;
        uStack_14 = *(int *)&(uStack_17->fields)._entries + 1;
        uStack_15 = uStack_15 & 0xffffffff00000000;
        if (players == (IEnumerable_1_MVPlayer_ *)0x0) goto code_?;
        apDStackX_18[0] =
             (Dictionary_2_System_UInt32_System_Object_ *)
             FUN_?(0,TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>,players);
        uStack_7 = 0;
        ppDStack_16 = apDStackX_18;
        goto code_?;
      }
      pMVar18 = (MVTeam__Enum__Array *)(uStack_17->fields)._buckets;
      if (pMVar18 == (MVTeam__Enum__Array *)0x0) goto code_?;
      if ((uint)pMVar18->max_length <= uStack_14) goto code_?;
      key = pMVar18->vector[(int)uStack_14];
      uStack_15 = CONCAT44(uStack_15._4_4_,key);
      uStack_14 = uStack_14 + 1;
      this_01 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
      if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0
         ) goto code_?;
      method = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,(Object *)this_01,
                 (InsertionBehavior__Enum)method,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
                 ->klass->rgctx_data[0x22].method);
    }
  }
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
  goto code_?;
code_?:
  pDVar19 = apDStackX_18[0];
  if (apDStackX_18[0] != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar20 = apDStackX_18[0]->klass;
    uVar21 = 0;
    uVar22._0_1_ = (pDVar20->_1).rank;
    uVar22._1_1_ = (pDVar20->_1).minimumAlignment;
    if (uVar22 != 0) {
      uVar23 = uVar21;
      do {
        if (pDVar20->interfaceOffsets[uVar23].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
          ppIVar24 = &(&(pDVar20->vtable).Equals)[pDVar20->interfaceOffsets[uVar23].offset].methodPtr;
          goto code_?;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar22);
    }
    ppIVar24 = (Il2CppMethodPointer *)
               FUN_?(apDStackX_18[0],TypeInfo__System__Collections__IEnumerator,0);
code_?:
    cVar25 = (**ppIVar24)(pDVar19,(MethodInfo *)ppIVar24[1]);
    pDVar19 = apDStackX_18[0];
    if (cVar25 == '\0') {
      if (apDStackX_18[0] != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable,apDStackX_18[0]);
      }
      if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0
         ) {
        uStack_13 = 0;
        uStack_26 = 0;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
          lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        ppDStack_16 = (Dictionary_2_System_UInt32_System_Object_ **)
                      (ulonglong)(uint)(this_00->fields)._version;
        uStack_27 = 2;
        uStack_2 = (ulonglong)ppDStack_16;
        KStack_3.key = 0;
        KStack_3._4_4_ = 0;
        KStack_3.value = (Object *)0x0;
        uStack_4._0_4_ = 2;
        uStack_4._4_4_ = 0;
        uStack_7 = 0;
        ppDStack_16 = (Dictionary_2_System_UInt32_System_Object_ **)&pDStack_1;
        pDStack_1 = this_00;
        while( true ) {
          bVar28 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &pDStack_1,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                             );
          pOVar29 = KStack_3.value;
          if (bVar28 == 0) {
            return (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)this_00;
          }
          uVar30 = FUN_?(TypeInfo__PlayerListsLayout__ScoreSorter);
          if (pOVar29 == (Object *)0x0) break;
          pvVar31 = MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
                   ->klass->rgctx_data[0x2f].rgctxDataDummy;
          FUN_?(pOVar29,pvVar31,*(undefined4 *)&pOVar29[1].monitor,uVar30,pvVar31);
        }
        goto code_?;
      }
      goto code_?;
    }
    if (apDStackX_18[0] == (Dictionary_2_System_UInt32_System_Object_ *)0x0)
    goto code_?;
    pDVar20 = apDStackX_18[0]->klass;
    uVar23._0_1_ = (pDVar20->_1).rank;
    uVar23._1_1_ = (pDVar20->_1).minimumAlignment;
    if (uVar23 != 0) {
      do {
        if (pDVar20->interfaceOffsets[uVar21].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>) {
          ppIVar24 = &(&(pDVar20->vtable).Equals)[pDVar20->interfaceOffsets[uVar21].offset].methodPtr;
          goto code_?;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar23);
    }
    ppIVar24 = (Il2CppMethodPointer *)
               FUN_?(apDStackX_18[0],
                             TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>,0);
code_?:
    lVar8 = (**ppIVar24)(pDVar19,(MethodInfo *)ppIVar24[1]);
    if (lVar8 == 0) goto code_?;
    if (*(Int32Enum__Enum *)(lVar8 + 0x84) != 5) {
      if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0
         ) goto code_?;
      pOVar29 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                           *(Int32Enum__Enum *)(lVar8 + 0x84),
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Item_MV__WorldObject__MVTeam_
                          );
      if (pOVar29 == (Object *)0x0) goto code_?;
      FUN_?(pOVar29,lVar8);
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar32 = (code *)swi(3);
  pDVar33 = (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)(*pcVar32)();
  return pDVar33;
}


/* Void Initialize(PlayerListsLayout, GameStatCounterType, UIPushOption) */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_Initialize
               (PlayerListsLayout *this,PlayerListsLayout *playerListsPrefab,
               GameStatCounterType__Enum typeToDisplay,UIPushOption__Enum pushOptions,
               MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).playerListsPrefab = playerListsPrefab;
  if (bVar1) {
    (this->fields).typeToDisplay = (uint8_t)typeToDisplay;
    (this->fields).pushOptions = pushOptions;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields).playerListsPrefab >> 0xc);
  puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar4 = *puVar3;
    LOCK();
    uVar5 = *puVar3;
    if (uVar4 == uVar5) {
      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (uVar4 != uVar5);
  (this->fields).typeToDisplay = (uint8_t)typeToDisplay;
  (this->fields).pushOptions = pushOptions;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_OnDestroy
               (PlayerListsLayout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
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
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
      source = (pMVar4->fields).OnPlayerListChanged;
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,(Object *)this,MethodInfo__PlayerListsLayout__ReCreate__,(MethodInfo *)0x0)
      ;
      pFVar6 = (FriendList_OnFriendListUpdatedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)source,(Delegate *)pNVar5,(MethodInfo *)0x0);
      pFVar7 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
      if (pFVar6 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
        (pMVar4->fields).OnPlayerListChanged = (Action *)0x0;
      }
      else {
        pFVar8 = pFVar7;
        if (pFVar6->klass ==
            (FriendList_OnFriendListUpdatedDelegate__Class *)TypeInfo__System__Action) {
          pFVar8 = pFVar6;
        }
        if (pFVar8 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (pMVar4->fields).OnPlayerListChanged = (Action *)pFVar8;
        pFVar8 = pFVar7;
        if (pFVar6->klass ==
            (FriendList_OnFriendListUpdatedDelegate__Class *)TypeInfo__System__Action) {
          pFVar8 = pFVar6;
        }
        if (pFVar8 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&(pMVar4->fields).OnPlayerListChanged >> 0xc);
        lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pFVar15 = (pMVar3->fields)._Friends_k__BackingField, pFVar15 != (FriendList *)0x0)) {
        pFVar6 = (pFVar15->fields).OnFriendListUpdated;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__FriendList__OnFriendListUpdatedDelegate);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,(Object *)this,MethodInfo__PlayerListsLayout__ReCreate__,
                   (MethodInfo *)0x0);
        pFVar6 = (FriendList_OnFriendListUpdatedDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pFVar6,(Delegate *)pNVar5,(MethodInfo *)0x0);
        if (pFVar6 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          (pFVar15->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
        }
        else {
          pFVar8 = pFVar7;
          if (pFVar6->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar8 = pFVar6;
          }
          if (pFVar8 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            FUN_?(pFVar6);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (pFVar15->fields).OnFriendListUpdated = pFVar8;
          if (pFVar6->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar7 = pFVar6;
          }
          if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            FUN_?(pFVar6);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (iRam_? == 0) {
          return;
        }
        uVar10 = (uint)((ulonglong)&pFVar15->fields >> 0xc);
        lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ReCreate() */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_ReCreate
               (PlayerListsLayout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__PlayerListsLayout____c___ReCreate_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerListsLayout____c___ReCreate_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerListsLayout____c__DisplayClass9_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerListsLayout____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerListsLayout____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PlayerListsLayout____c__DisplayClass9_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__PlayerListsLayout____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerListsLayout____c);
    }
    pEVar7 = TypeInfo__PlayerListsLayout____c->static_fields->__9__9_0;
    if (pEVar7 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__PlayerListsLayout____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PlayerListsLayout____c);
      }
      pPVar8 = TypeInfo__PlayerListsLayout____c->static_fields->__9;
      pEVar7 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar7,(Object *)pPVar8,
                 MethodInfo__PlayerListsLayout____c___ReCreate_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__PlayerListsLayout____c->static_fields->__9__9_0 = pEVar7;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__PlayerListsLayout____c->static_fields->__9__9_0 >> 0xc
                       );
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar6,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar7,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    original = (this->fields).playerListsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar9 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                        );
    iVar10 = iRam_?;
    object[1].klass = pOVar9;
    if (iVar10 != 0) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar10 = iRam_?;
      } while (!bVar1);
    }
    pOVar9 = object[1].klass;
    uVar11 = (this->fields).typeToDisplay;
    iVar12 = (this->fields).pushOptions;
    if (pOVar9 != (Object__Class *)0x0) {
      (pOVar9->_0).byval_arg.data = (_union_86)(this->fields).playerListsPrefab;
      if (iVar10 != 0) {
        uVar2 = (uint)((ulonglong)&(pOVar9->_0).byval_arg >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      *(uint8_t *)&(pOVar9->_0).element_class = uVar11;
      *(int32_t *)((longlong)&(pOVar9->_0).element_class + 4) = iVar12;
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__PlayerListsLayout____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PlayerListsLayout____c);
      }
      pEVar7 = TypeInfo__PlayerListsLayout____c->static_fields->__9__9_1;
      if (pEVar7 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__PlayerListsLayout____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PlayerListsLayout____c);
        }
        pPVar8 = TypeInfo__PlayerListsLayout____c->static_fields->__9;
        pEVar7 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar7,(Object *)pPVar8,
                   MethodInfo__PlayerListsLayout____c___ReCreate_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayerListsLayout____c->static_fields->__9__9_1 = pEVar7;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&TypeInfo__PlayerListsLayout____c->static_fields->__9__9_1 >>
                         0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__PlayerListsLayout____c__DisplayClass9_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      pMVar13 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar13);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar6,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar14 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar3 = (longlong)(pLVar14->fields)._size;
        uVar2 = 0;
        if (0 < lVar3) {
          lVar15 = 0;
          lVar16 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar14 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar14->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pTVar18 = (pLVar14->fields)._items;
            if (pTVar18 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar18->max_length <= uVar2) {
              FUN_?();
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar18->vector + lVar16 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                     ExecuteEvents_Execute_18
                               (pGVar6,(BaseEventData *)0x0,this_01,
                                (pMVar13->field7_0x38).rgctx_data[1].method);
            if (bVar19 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar2 = uVar2 + 1;
            lVar15 = lVar15 + 1;
            lVar16 = lVar16 + 8;
          } while (lVar15 < lVar3);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void SortPlayerListsAfterScore(Dictionary`2[MV.WorldObject.MVTeam,PlayerListBase],
   List`1[MV.WorldObject.MVTeam], GameStatCounterType) */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_SortPlayerListsAfterScore
               (PlayerListsLayout *this,
               Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *playerLists,
               List_1_MV_WorldObject_MVTeam_ *teams,GameStatCounterType__Enum typeToDisplay,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerListBase>__Add_PlayerListBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerListBase>__Insert_int__PlayerListBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PlayerListBase>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<PlayerListBase>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<PlayerListBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<PlayerListBase>__List__);
  if (teams == (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  ppLStack_7 = (List_1_MV_WorldObject_MVTeam_ **)
                ((ulonglong)(uint)(teams->fields)._version << 0x20);
  uStack_8 = 0;
  uStack_9 = (longlong)ppLStack_7;
  uStack_10 = 0;
  uStack_3 = 0;
  ppLStack_7 = &pLStack_11;
  pLStack_11 = teams;
code_?:
  if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    if (uStack_9._4_4_ == (teams->fields)._version) {
      if ((uint)(teams->fields)._size <= (uint)uStack_9) goto code_?;
      pMVar12 = (teams->fields)._items;
      if (pMVar12 != (MVTeam__Enum__Array *)0x0) {
        if ((uint)pMVar12->max_length <= (uint)uStack_9) {
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
          goto code_?;
        }
        key = pMVar12->vector[(int)(uint)uStack_9];
        uStack_10 = CONCAT44(uStack_10._4_4_,key);
        uStack_9 = CONCAT44(uStack_9._4_4_,(uint)uStack_9 + 1);
        bVar13 = false;
        index = 0;
        if (this_00 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0)
        goto code_?;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
         ->klass->field_0x135 & 1) == 0) {
      FUN_?(MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                    ->klass);
      teams = pLStack_11;
    }
    if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      if (uStack_9._4_4_ == (teams->fields)._version) {
        return;
      }
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_?:
  while (index < (this_00->fields)._size) {
    if (bVar13) {
      EVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              EntryPreProcessor+AllocSize]::
              List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Item_int_
                        );
      if (EVar14 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)EVar14,(MethodInfo *)0x0);
      if (pTVar15 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                (pTVar15,(MethodInfo *)0x0);
code_?:
      index = index + 1;
      teams = pLStack_11;
    }
    else {
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar16 == (MVNetworkGame *)0x0) goto code_?;
      pMVar17 = (pMVar16->fields).teamManager;
      if (pMVar17 == (MVTeamManager *)0x0) goto code_?;
      newScore = MVTeamManager::MVTeamManager_GetScore
                           (pMVar17,key,typeToDisplay & 0xff,(MethodInfo *)0x0);
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar16 == (MVNetworkGame *)0x0) goto code_?;
      pMVar17 = (pMVar16->fields).teamManager;
      EVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              EntryPreProcessor+AllocSize]::
              List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Item_int_
                        );
      if (EVar14 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
      team = (**(code **)(*(longlong *)EVar14 + 0x198))
                       (EVar14,*(undefined8 *)(*(longlong *)EVar14 + 0x1a0));
      if (pMVar17 == (MVTeamManager *)0x0) goto code_?;
      oldScore = MVTeamManager::MVTeamManager_GetScore
                           (pMVar17,team,typeToDisplay & 0xff,(MethodInfo *)0x0);
      bVar18 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                        (newScore,oldScore,typeToDisplay & 0xff,(MethodInfo *)0x0);
      if (bVar18 == 0) goto code_?;
      if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0)
      goto code_?;
      pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                          );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Insert
                ((List_1_System_Object_ *)this_00,index,pOVar19,
                 MethodInfo__System__Collections__Generic__List<PlayerListBase>__Insert_int__PlayerListBase_
                );
      bVar13 = true;
      index = index + 1;
      teams = pLStack_11;
    }
  }
  if (!bVar13) {
    if (playerLists != (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0) {
      pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                          );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,pOVar19,
                 MethodInfo__System__Collections__Generic__List<PlayerListBase>__Add_PlayerListBase_
                );
      this_01 = (Component *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                          );
      if (this_01 != (Component *)0x0) {
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (this_01,(MethodInfo *)0x0);
        if (pTVar15 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (pTVar15,(MethodInfo *)0x0);
          teams = pLStack_11;
          goto code_?;
        }
code_?:
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    goto code_?;
  }
  goto code_?;
}


/* Void Start() */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_Start
               (PlayerListsLayout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListsLayout__ReCreate__);
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
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    pIVar4 = (IEnumerator__Class *)
             MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
      pIVar5 = (IEnumerator__Class *)
                MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PlayerListsLayout___CreatePlayerLists_d__10);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      routine = (IEnumerator *)FUN_?(TypeInfo__PlayerListsLayout___CreatePlayerLists_d__10);
      iVar6 = iRam_?;
      pFVar7 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
      *(undefined4 *)&routine[1].klass = 0;
      routine[2].monitor = (MonitorData *)this;
      if (iVar6 != 0) {
        uVar8 = (uint)((ulonglong)&routine[2].monitor >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
          iVar6 = iRam_?;
        } while (!bVar12);
      }
      routine[3].klass = pIVar4;
      iVar13 = 0;
      if (iVar6 != 0) {
        uVar8 = (uint)((ulonglong)(routine + 3) >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
          iVar13 = iRam_?;
        } while (!bVar12);
      }
      routine[2].klass = pIVar5;
      if (iVar13 != 0) {
        uVar8 = (uint)((ulonglong)(routine + 2) >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
        a = (pMVar3->fields).OnPlayerListChanged;
        pNVar14 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar14,(Object *)this,MethodInfo__PlayerListsLayout__ReCreate__,
                   (MethodInfo *)0x0);
        pFVar15 = (FriendList_OnFriendListUpdatedDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)a,(Delegate *)pNVar14,(MethodInfo *)0x0);
        if (pFVar15 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          (pMVar3->fields).OnPlayerListChanged = (Action *)0x0;
        }
        else {
          pFVar16 = pFVar7;
          if (pFVar15->klass ==
              (FriendList_OnFriendListUpdatedDelegate__Class *)TypeInfo__System__Action) {
            pFVar16 = pFVar15;
          }
          if (pFVar16 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            FUN_?();
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          (pMVar3->fields).OnPlayerListChanged = (Action *)pFVar16;
          pFVar16 = pFVar7;
          if (pFVar15->klass ==
              (FriendList_OnFriendListUpdatedDelegate__Class *)TypeInfo__System__Action) {
            pFVar16 = pFVar15;
          }
          if (pFVar16 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            FUN_?();
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&(pMVar3->fields).OnPlayerListChanged >> 0xc);
          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
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
           (pFVar18 = (pMVar2->fields)._Friends_k__BackingField, pFVar18 != (FriendList *)0x0)) {
          pFVar15 = (pFVar18->fields).OnFriendListUpdated;
          pNVar14 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__FriendList__OnFriendListUpdatedDelegate);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar14,(Object *)this,MethodInfo__PlayerListsLayout__ReCreate__,
                     (MethodInfo *)0x0);
          pFVar15 = (FriendList_OnFriendListUpdatedDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pFVar15,(Delegate *)pNVar14,(MethodInfo *)0x0);
          if (pFVar15 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar18->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          }
          else {
            pFVar16 = pFVar7;
            if (pFVar15->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
              pFVar16 = pFVar15;
            }
            if (pFVar16 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
              FUN_?(pFVar15);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            (pFVar18->fields).OnFriendListUpdated = pFVar16;
            if (pFVar15->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
              pFVar7 = pFVar15;
            }
            if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
              FUN_?(pFVar15);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)&pFVar18->fields >> 0xc);
            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

