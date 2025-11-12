
/* PlayerList CreatePlayerList(MVTeam, Int32) */

PlayerList *
Assembly-CSharp.dll::PlayerLists::PlayerLists_CreatePlayerList
          (PlayerLists *this,MVTeam__Enum team,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PlayerList_MethodInfo__UnityEngine__Object__Instantiate<PlayerList>_PlayerList__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gridGroup;
  pPVar1 = (this->fields).playerListPrefab;
  if (this_00 != (GridLayoutGroup *)0x0) {
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pPVar1 = (PlayerList *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pPVar1,parent,0,
                        PlayerList_MethodInfo__UnityEngine__Object__Instantiate<PlayerList>_PlayerList__UnityEngine__Transform__bool_
                       );
    if (pPVar1 != (PlayerList *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pPVar1,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        (*(pPVar1->klass->vtable).Initialize.methodPtr)
                  (pPVar1,(ulonglong)team,score,(ulonglong)(this->fields).typeToDisplay,
                   (pPVar1->klass->vtable).Initialize.method);
        return pPVar1;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar1 = (PlayerList *)(*pcVar2)();
  return pPVar1;
}


/* Void CreatePlayerLists(IEnumerable`1[MVPlayer], List`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::PlayerLists::PlayerLists_CreatePlayerLists
               (PlayerLists *this,IEnumerable_1_MVPlayer_ *players,
               List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__Add_MV__WorldObject__MVTeam__PlayerList_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>
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
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
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
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  aDStack_2[0]._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  aDStack_2[0]._version = 0;
  aDStack_2[0]._index = 0;
  aDStack_2[0]._current.key = 0;
  aDStack_2[0]._current._4_4_ = 0;
  aDStack_2[0]._current.value = (Object *)0x0;
  aDStack_2[0]._getEnumeratorRetType = 0;
  aDStack_2[0]._36_4_ = 0;
  LStack_3._list = (List_1_System_Object_ *)0x0;
  LStack_3._index = 0;
  LStack_3._version = 0;
  LStack_3._current = (Object *)0x0;
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
    iVar4 = (teams->fields)._size;
    pGVar5 = (this->fields).gridGroup;
    iStack_6 = iVar4;
    if (pGVar5 == (GridLayoutGroup *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void_MethodInfo__UnityEngine__UI__LayoutGroup__SetProperty<UnityEngine::Vector2>_UnityEngine__Vector2___UnityEngine__Vector2_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    FUN_?(pGVar5,&(pGVar5->fields).m_Spacing);
    this_01 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__Dictionary__
              );
    pDStack_7 = this_01;
    if (iVar4 == 1) {
      uVar8 = 0;
      pPVar9 = PlayerLists_CreatePlayerList(this,MVTeam__Enum_None,0,(MethodInfo *)0x0);
      if (this_01 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0
         ) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,5,(Object *)pPVar9,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__Add_MV__WorldObject__MVTeam__PlayerList_
                   ->klass->rgctx_data[0x22].method);
code_?:
        pDVar10 = (Dictionary_2_System_UInt32_System_Object_ *)
                  PlayerLists_GetSortedTeamLists(this,players,teams,(MethodInfo *)0x0);
        if (pDVar10 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)&pDStack_12 >> 0xc);
            lVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
            do {
              uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
              puVar15 = (ulonglong *)(lVar13 + 0xADDR);
              LOCK();
              bVar16 = uVar14 == *puVar15;
              if (bVar16) {
                *puVar15 = uVar14 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar16);
          }
          uStack_17 = (ulonglong)(uint)(pDVar10->fields)._version;
          uStack_18 = 2;
          uStack_19 = 0;
          uStack_20 = 0;
          aDStack_2[0]._version = (undefined4)uStack_17;
          aDStack_2[0]._index = uStack_17._4_4_;
          aDStack_2[0]._current.key = 0;
          aDStack_2[0]._current._4_4_ = 0;
          aDStack_2[0]._current.value = (Object *)0x0;
          aDStack_2[0]._getEnumeratorRetType = 2;
          aDStack_2[0]._36_4_ = 0;
          pLStack_21 = (List_1_MV_WorldObject_MVTeam_ *)0x0;
          pDStack_22 = aDStack_2;
          pDStack_12 = pDVar10;
          aDStack_2[0]._dictionary = pDVar10;
code_?:
          bVar23 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (aDStack_2,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                             );
          if (bVar23 == 0) {
            return;
          }
          if ((Dictionary_2_System_UInt32_System_Object_ *)aDStack_2[0]._current.value !=
              (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
            uStack_19 = 0;
            pDStack_12 = (Dictionary_2_System_UInt32_System_Object_ *)aDStack_2[0]._current.value;
            if (iRam_? != 0) {
              uVar11 = (uint)((ulonglong)&pDStack_12 >> 0xc);
              lVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar11 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
            uStack_17 = 0;
            if ((Dictionary_2_System_UInt32_System_Object_ *)aDStack_2[0]._current.value !=
                (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
              uStack_17 = (ulonglong)
                          *(uint *)((longlong)
                                    &((Dictionary_2_System_UInt32_System_Object___Fields *)
                                     ((longlong)aDStack_2[0]._current.value + 0x10))->_entries + 4)
                          << 0x20;
              uStack_19 = 0;
              LStack_3._list = (List_1_System_Object_ *)aDStack_2[0]._current.value;
              LStack_3._index = (undefined4)uStack_17;
              LStack_3._version = uStack_17._4_4_;
              LStack_3._current = (Object *)0x0;
              uStack_24 = 0;
              pLStack_25 = &LStack_3;
code_?:
              bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                       Object]::List_1_T_Enumerator_System_Object__MoveNext
                                 (&LStack_3,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                                 );
              pOVar26 = LStack_3._current;
              if (bVar23 != 0) {
                if (LStack_3._current != (Object *)0x0) {
                  IVar27 = *(Int32Enum__Enum *)((longlong)&LStack_3._current[8].klass + 4);
                  if (iVar4 != 1) goto code_?;
                  IVar27 = 5;
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&pLStack_21 >> 0xc);
      lVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
      do {
        uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
        puVar15 = (ulonglong *)(lVar13 + 0xADDR);
        LOCK();
        bVar16 = uVar14 == *puVar15;
        if (bVar16) {
          *puVar15 = uVar14 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar16);
    }
    LStack_1._version = (teams->fields)._version;
    pDStack_22 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)LStack_1._version << 0x20);
    uStack_28 = 0;
    LStack_1._index = 0;
    LStack_1._current = (Object *)0x0;
    uStack_24 = 0;
    pLStack_25 = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)teams;
    pLStack_21 = teams;
    while (LStack_1._list != (List_1_System_Object_ *)0x0) {
      if ((LStack_1._version != ((LStack_1._list)->fields)._version) ||
         ((uint)((LStack_1._list)->fields)._size <= (uint)LStack_1._index)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (LStack_1._list == (List_1_System_Object_ *)0x0) goto code_?;
        if (LStack_1._version != ((LStack_1._list)->fields)._version) goto code_?;
        LStack_1._index = ((LStack_1._list)->fields)._size + 1;
        LStack_1._current = (Object *)((ulonglong)LStack_1._current & 0xffffffff00000000);
        PlayerLists_SortPlayerListsAfterScore
                  (this,(Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)this_01,teams,
                   (uint)(this->fields).typeToDisplay,(MethodInfo *)0x0);
        if (iVar4 < 1) {
          return;
        }
        goto code_?;
      }
      pOVar29 = ((LStack_1._list)->fields)._items;
      if (pOVar29 == (Object__Array *)0x0) goto code_?;
      if ((uint)pOVar29->max_length <= (uint)LStack_1._index) goto code_?;
      IVar27 = *(MVTeam__Enum *)((longlong)pOVar29->vector + (longlong)LStack_1._index * 4);
      LStack_1._current = (Object *)CONCAT44(LStack_1._current._4_4_,IVar27);
      LStack_1._index = LStack_1._index + 1;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar30 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar30 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar31 = (pMVar30->fields).game;
      if (pMVar31 == (MVNetworkGame *)0x0) goto code_?;
      this_00 = (pMVar31->fields).teamManager;
      if (this_00 == (MVTeamManager *)0x0) goto code_?;
      score = MVTeamManager::MVTeamManager_GetScore
                        (this_00,IVar27,(uint)(this->fields).typeToDisplay,(MethodInfo *)0x0);
      uVar8 = 0;
      pPVar9 = PlayerLists_CreatePlayerList(this,IVar27,score,(MethodInfo *)0x0);
      if (this_01 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0
         ) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,IVar27,(Object *)pPVar9,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__Add_MV__WorldObject__MVTeam__PlayerList_
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
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
code_?:
  if (IVar27 != 5) {
code_?:
    if (this_01 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    goto code_?;
    pOVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,IVar27,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                        );
    if (pOVar33 == (Object *)0x0) goto code_?;
    (*(code *)pOVar33->klass[1]._0.name)(pOVar33,pOVar26,pOVar33->klass[1]._0.namespaze);
  }
  goto code_?;
}


/* Dictionary`2[MV.WorldObject.MVTeam,List`1[MVPlayer]] GetSortedTeamLists(IEnumerable`1[MVPlayer],
   List`1[MV.WorldObject.MVTeam]) */

Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *
Assembly-CSharp.dll::PlayerLists::PlayerLists_GetSortedTeamLists
          (PlayerLists *this,IEnumerable_1_MVPlayer_ *players,List_1_MV_WorldObject_MVTeam_ *teams,
          MethodInfo *method)

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
    FUN_?(&TypeInfo__PlayerLists__ScoreSorter);
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
          uVar30 = FUN_?(TypeInfo__PlayerLists__ScoreSorter);
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


/* Void Initialize(PlayerLists, GameStatCounterType) */

void Assembly-CSharp.dll::PlayerLists::PlayerLists_Initialize
               (PlayerLists *this,PlayerLists *playerListsPrefab,
               GameStatCounterType__Enum typeToDisplay,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).playerListsPrefab = playerListsPrefab;
  if (bVar1) {
    (this->fields).typeToDisplay = (uint8_t)typeToDisplay;
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
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerLists::PlayerLists_OnDestroy(PlayerLists *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerLists__ReCreate__);
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
    source = (pMVar3->fields).OnPlayerListChanged;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__PlayerLists__ReCreate__,(MethodInfo *)0x0);
    pFVar5 = (FriendList_OnFriendListUpdatedDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)source,(Delegate *)pNVar4,(MethodInfo *)0x0);
    pFVar6 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
    if (pFVar5 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
      (pMVar3->fields).OnPlayerListChanged = (Action *)0x0;
    }
    else {
      pFVar7 = pFVar6;
      if (pFVar5->klass ==
          (FriendList_OnFriendListUpdatedDelegate__Class *)TypeInfo__System__Action) {
        pFVar7 = pFVar5;
      }
      if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pMVar3->fields).OnPlayerListChanged = (Action *)pFVar7;
      pFVar7 = pFVar6;
      if (pFVar5->klass ==
          (FriendList_OnFriendListUpdatedDelegate__Class *)TypeInfo__System__Action) {
        pFVar7 = pFVar5;
      }
      if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pMVar3->fields).OnPlayerListChanged >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
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
       (pFVar14 = (pMVar2->fields)._Friends_k__BackingField, pFVar14 != (FriendList *)0x0)) {
      pFVar5 = (pFVar14->fields).OnFriendListUpdated;
      pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
               FUN_?(TypeInfo__FriendList__OnFriendListUpdatedDelegate);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar4,(Object *)this,MethodInfo__PlayerLists__ReCreate__,(MethodInfo *)0x0);
      pFVar5 = (FriendList_OnFriendListUpdatedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pFVar5,(Delegate *)pNVar4,(MethodInfo *)0x0);
      if (pFVar5 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
        (pFVar14->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
      }
      else {
        pFVar7 = pFVar6;
        if (pFVar5->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
          pFVar7 = pFVar5;
        }
        if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          FUN_?(pFVar5);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pFVar14->fields).OnFriendListUpdated = pFVar7;
        if (pFVar5->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
          pFVar6 = pFVar5;
        }
        if (pFVar6 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          FUN_?(pFVar5);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&pFVar14->fields >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ReCreate() */

void Assembly-CSharp.dll::PlayerLists::PlayerLists_ReCreate(PlayerLists *this,MethodInfo *method)

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
                  PlayerLists_MethodInfo__UnityEngine__Object__Instantiate<PlayerLists>_PlayerLists_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerLists____c___ReCreate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerLists____c___ReCreate_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerLists____c__DisplayClass10_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerLists____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerLists____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PlayerLists____c__DisplayClass10_0);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__PlayerLists____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PlayerLists____c);
  }
  pEVar2 = TypeInfo__PlayerLists____c->static_fields->__9__10_0;
  if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__PlayerLists____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerLists____c);
    }
    pPVar3 = TypeInfo__PlayerLists____c->static_fields->__9;
    pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)pPVar3,
               MethodInfo__PlayerLists____c___ReCreate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PlayerLists____c->static_fields->__9__10_0 = pEVar2;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__PlayerLists____c->static_fields->__9__10_0 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  original = (this->fields).playerListsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar9 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       PlayerLists_MethodInfo__UnityEngine__Object__Instantiate<PlayerLists>_PlayerLists_
                      );
  iVar10 = iRam_?;
  if (object != (Object *)0x0) {
    object[1].klass = pOVar9;
    if (iVar10 != 0) {
      uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar10 = iRam_?;
      } while (!bVar8);
    }
    pOVar9 = object[1].klass;
    uVar11 = (this->fields).typeToDisplay;
    if (pOVar9 != (Object__Class *)0x0) {
      (pOVar9->_0).byval_arg.data = (_union_86)(this->fields).playerListsPrefab;
      if (iVar10 != 0) {
        uVar4 = (uint)((ulonglong)&(pOVar9->_0).byval_arg >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      *(uint8_t *)&(pOVar9->_0).declaringType = uVar11;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__PlayerLists____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PlayerLists____c);
      }
      pEVar2 = TypeInfo__PlayerLists____c->static_fields->__9__10_1;
      if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__PlayerLists____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PlayerLists____c);
        }
        pPVar3 = TypeInfo__PlayerLists____c->static_fields->__9;
        pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)pPVar3,
                   MethodInfo__PlayerLists____c___ReCreate_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayerLists____c->static_fields->__9__10_1 = pEVar2;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&TypeInfo__PlayerLists____c->static_fields->__9__10_1 >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__PlayerLists____c__DisplayClass10_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      pMVar12 = 
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
        if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar12);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar1,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar5 = (longlong)(pLVar13->fields)._size;
        uVar4 = 0;
        if (0 < lVar5) {
          lVar14 = 0;
          lVar15 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar13->fields)._size <= uVar4) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pTVar17 = (pLVar13->fields)._items;
            if (pTVar17 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar17->max_length <= uVar4) {
              FUN_?();
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar17->vector + lVar15 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar1,(BaseEventData *)0x0,this_01,
                               (pMVar12->field7_0x38).rgctx_data[1].method);
            if (bVar18 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar4 = uVar4 + 1;
            lVar14 = lVar14 + 1;
            lVar15 = lVar15 + 8;
          } while (lVar14 < lVar5);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SortPlayerListsAfterScore(Dictionary`2[MV.WorldObject.MVTeam,PlayerList],
   List`1[MV.WorldObject.MVTeam], GameStatCounterType) */

void Assembly-CSharp.dll::PlayerLists::PlayerLists_SortPlayerListsAfterScore
               (PlayerLists *this,Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *playerLists,
               List_1_MV_WorldObject_MVTeam_ *teams,GameStatCounterType__Enum typeToDisplay,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<PlayerList>__Add_PlayerList_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerList>__Insert_int__PlayerList_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PlayerList>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PlayerList>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PlayerList>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<PlayerList>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<PlayerList>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<PlayerList>__List__);
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
                         MethodInfo__System__Collections__Generic__List<PlayerList>__get_Item_int_);
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
                         MethodInfo__System__Collections__Generic__List<PlayerList>__get_Item_int_);
      if (EVar14 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
      team = (**(code **)(*(longlong *)EVar14 + 0x198))
                       (EVar14,*(undefined8 *)(*(longlong *)EVar14 + 0x1a0));
      if (pMVar17 == (MVTeamManager *)0x0) goto code_?;
      oldScore = MVTeamManager::MVTeamManager_GetScore
                           (pMVar17,team,typeToDisplay & 0xff,(MethodInfo *)0x0);
      bVar18 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                        (newScore,oldScore,typeToDisplay & 0xff,(MethodInfo *)0x0);
      if (bVar18 == 0) goto code_?;
      if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0)
      goto code_?;
      pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                          );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Insert
                ((List_1_System_Object_ *)this_00,index,pOVar19,
                 MethodInfo__System__Collections__Generic__List<PlayerList>__Insert_int__PlayerList_
                );
      bVar13 = true;
      index = index + 1;
      teams = pLStack_11;
    }
  }
  if (!bVar13) {
    if (playerLists != (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0) {
      pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                          );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,pOVar19,
                 MethodInfo__System__Collections__Generic__List<PlayerList>__Add_PlayerList_);
      this_01 = (Component *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
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

void Assembly-CSharp.dll::PlayerLists::PlayerLists_Start(PlayerLists *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerLists__ReCreate__);
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
    players = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0);
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
      teams = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
      PlayerLists_CreatePlayerLists(this,(IEnumerable_1_MVPlayer_ *)players,teams,(MethodInfo *)0x0)
      ;
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
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)this,MethodInfo__PlayerLists__ReCreate__,(MethodInfo *)0x0);
        pFVar5 = (FriendList_OnFriendListUpdatedDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)a,(Delegate *)pNVar4,(MethodInfo *)0x0);
        pFVar6 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
        if (pFVar5 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          (pMVar3->fields).OnPlayerListChanged = (Action *)0x0;
        }
        else {
          pFVar7 = pFVar6;
          if (pFVar5->klass ==
              (FriendList_OnFriendListUpdatedDelegate__Class *)TypeInfo__System__Action) {
            pFVar7 = pFVar5;
          }
          if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (pMVar3->fields).OnPlayerListChanged = (Action *)pFVar7;
          pFVar7 = pFVar6;
          if (pFVar5->klass ==
              (FriendList_OnFriendListUpdatedDelegate__Class *)TypeInfo__System__Action) {
            pFVar7 = pFVar5;
          }
          if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&(pMVar3->fields).OnPlayerListChanged >> 0xc);
          lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar12 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
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
           (pFVar14 = (pMVar2->fields)._Friends_k__BackingField, pFVar14 != (FriendList *)0x0)) {
          pFVar5 = (pFVar14->fields).OnFriendListUpdated;
          pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
                   FUN_?(TypeInfo__FriendList__OnFriendListUpdatedDelegate);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar4,(Object *)this,MethodInfo__PlayerLists__ReCreate__,(MethodInfo *)0x0);
          pFVar5 = (FriendList_OnFriendListUpdatedDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pFVar5,(Delegate *)pNVar4,(MethodInfo *)0x0);
          if (pFVar5 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar14->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          }
          else {
            pFVar7 = pFVar6;
            if (pFVar5->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
              pFVar7 = pFVar5;
            }
            if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
              FUN_?(pFVar5);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            (pFVar14->fields).OnFriendListUpdated = pFVar7;
            if (pFVar5->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
              pFVar6 = pFVar5;
            }
            if (pFVar6 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
              FUN_?(pFVar5);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)&pFVar14->fields >> 0xc);
            lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar12 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

