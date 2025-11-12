
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PlayerListsLayout+<CreatePlayerLists>d__10::
     PlayerListsLayout_CreatePlayerLists_d_10_MoveNext
               (PlayerListsLayout_CreatePlayerLists_d_10 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__HorizontalLayoutGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::HorizontalLayoutGroup>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__LayoutElement_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::LayoutElement>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>
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
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = 0;
  DStack_1._current._4_4_ = 0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  LStack_2._list = (List_1_System_Object_ *)0x0;
  LStack_2._index = 0;
  LStack_2._version = 0;
  LStack_2._current = (Object *)0x0;
  iVar3 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar3 == 0) {
    (this->fields).__1__state = -1;
    pOVar4 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
    (this->fields).__2__current = pOVar4;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    (this->fields).__1__state = 1;
    bVar10 = 1;
  }
  else {
    if (iVar3 == 1) {
      (this->fields).__1__state = -1;
      pLVar11 = (this->fields).teams;
      if (((pLVar11 == (List_1_MV_WorldObject_MVTeam_ *)0x0) ||
          (iVar3 = (pLVar11->fields)._size, this_00 == (PlayerListsLayout *)0x0)) ||
         (pGVar12 = (this_00->fields).bottomGrid, pGVar12 == (GameObject *)0x0)) {
code_?:
        FUN_?();
        pcVar13 = (code *)swi(3);
        bVar10 = (*pcVar13)();
        return bVar10;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar12,0,(MethodInfo *)0x0);
      this_02 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Dictionary__
                );
      pDStack_14 = this_02;
      if (iVar3 != 1) {
        pLVar11 = (this->fields).teams;
        if (pLVar11 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
          if (2 < (pLVar11->fields)._size) {
            pGVar12 = (this_00->fields).bottomGrid;
            if (pGVar12 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar12,1,(MethodInfo *)0x0);
          }
          if ((this->fields).teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
            pTVar15 = (Transform *)0x0;
            pGVar12 = (this_00->fields).topGrid;
            if ((pGVar12 != (GameObject *)0x0) &&
               (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar12,(MethodInfo *)0x0),
               pTVar16 != (Transform *)0x0)) {
              pTVar17 = pTVar15;
              if (pTVar16->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                pTVar17 = pTVar16;
              }
              if (pTVar17 == (Transform *)0x0) {
                FUN_?(pTVar16);
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
                pcVar13 = (code *)swi(3);
                bVar10 = (*pcVar13)();
                return bVar10;
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_18 = 0;
              pDStack_19 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)0x0;
              pvVar20 = (pTVar17->fields)._._.m_CachedPtr;
              if (pvVar20 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                bVar10 = (*pcVar13)();
                return bVar10;
              }
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar21 = func_?(&UNK_?);
                FUN_?(uVar21,0);
                pcVar13 = (code *)swi(3);
                bVar10 = (*pcVar13)();
                return bVar10;
              }
              pcRam_? = pcVar13;
              (*pcRam_?)(pvVar20,&uStack_18);
              pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  ((Component *)pTVar17,
                                   UnityEngine__UI__HorizontalLayoutGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::HorizontalLayoutGroup>__
                                  );
              if ((pOVar4 != (Object *)0x0) &&
                 (pLVar11 = (this->fields).teams, pLVar11 != (List_1_MV_WorldObject_MVTeam_ *)0x0))
              {
                lVar22 = 0x20;
                while( true ) {
                  teams = (this->fields).teams;
                  uVar5 = (uint)pTVar15;
                  if ((pLVar11->fields)._size <= (int)uVar5) {
                    PlayerListsLayout::PlayerListsLayout_SortPlayerListsAfterScore
                              (this_00,(Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)this_02
                               ,teams,(uint)(this_00->fields).typeToDisplay,(MethodInfo *)0x0);
                    goto code_?;
                  }
                  if (teams == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
                  if ((uint)(teams->fields)._size <= uVar5) {
code_?:
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar13 = (code *)swi(3);
                    bVar10 = (*pcVar13)();
                    return bVar10;
                  }
                  pMVar23 = (teams->fields)._items;
                  if (pMVar23 == (MVTeam__Enum__Array *)0x0) break;
                  if ((uint)pMVar23->max_length <= uVar5) {
code_?:
                    FUN_?();
                    pcVar13 = (code *)swi(3);
                    bVar10 = (*pcVar13)();
                    return bVar10;
                  }
                  team = *(MVTeam__Enum *)((longlong)pMVar23->vector + lVar22 + -0x20);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((pMVar24 == (MVGameControllerBase *)0x0) ||
                     (pMVar25 = (pMVar24->fields).game, pMVar25 == (MVNetworkGame *)0x0)) break;
                  this_01 = (pMVar25->fields).teamManager;
                  pLVar11 = (this->fields).teams;
                  if (pLVar11 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
                  if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
                  pMVar23 = (pLVar11->fields)._items;
                  if (pMVar23 == (MVTeam__Enum__Array *)0x0) break;
                  if ((uint)pMVar23->max_length <= uVar5) goto code_?;
                  if (this_01 == (MVTeamManager *)0x0) break;
                  score = MVTeamManager::MVTeamManager_GetScore
                                    (this_01,*(MVTeam__Enum *)
                                              ((longlong)pMVar23->vector + lVar22 + -0x20),
                                     (uint)(this_00->fields).typeToDisplay,(MethodInfo *)0x0);
                  pPVar26 = PlayerListsLayout::PlayerListsLayout_CreatePlayerList
                                      (this_00,team,score,(MethodInfo *)0x0);
                  if ((pPVar26 == (PlayerListBase *)0x0) ||
                     (pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_GetComponent_1
                                          ((Component *)pPVar26,
                                           UnityEngine__UI__LayoutElement_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::LayoutElement>__
                                          ), pOVar4 == (Object *)0x0)) break;
                  (*(code *)pOVar4->klass[2]._0.events)(pOVar4);
                  if ((int)uVar5 < 2) {
                    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pPVar26,(MethodInfo *)0x0);
                    pGVar12 = (this_00->fields).topGrid;
                  }
                  else {
                    (*(code *)pOVar4->klass[2]._1.typeHierarchy)(pOVar4);
                    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pPVar26,(MethodInfo *)0x0);
                    pGVar12 = (this_00->fields).bottomGrid;
                  }
                  if ((pGVar12 == (GameObject *)0x0) ||
                     (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar12,(MethodInfo *)0x0),
                     pTVar16 == (Transform *)0x0)) break;
                  uVar21 = 0;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                            (pTVar16,pTVar17,0,(MethodInfo *)0x0);
                  pLVar11 = (this->fields).teams;
                  if ((pLVar11 == (List_1_MV_WorldObject_MVTeam_ *)0x0) ||
                     (IVar27 = FUN_?(pLVar11,pTVar15),
                     this_02 ==
                     (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0
                     )) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,IVar27,
                             (Object *)pPVar26,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar21 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                             ->klass->rgctx_data[0x22].method);
                  pTVar15 = (Transform *)(ulonglong)(uVar5 + 1);
                  lVar22 = lVar22 + 4;
                  pLVar11 = (this->fields).teams;
                  if (pLVar11 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
                }
              }
            }
          }
        }
        goto code_?;
      }
      uVar21 = 0;
      pPVar26 = PlayerListsLayout::PlayerListsLayout_CreatePlayerList
                          (this_00,MVTeam__Enum_None,0,(MethodInfo *)0x0);
      if ((this_02 ==
           (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) ||
         (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,5,(Object *)pPVar26,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar21 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                     ->klass->rgctx_data[0x22].method), pPVar26 == (PlayerListBase *)0x0))
      goto code_?;
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pPVar26,(MethodInfo *)0x0);
      pGVar12 = (this_00->fields).topGrid;
      if ((pGVar12 == (GameObject *)0x0) ||
         (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar12,(MethodInfo *)0x0), pTVar15 == (Transform *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar15,pTVar16,0,(MethodInfo *)0x0);
code_?:
      pDStack_28 = (Dictionary_2_System_UInt32_System_Object_ *)
                   PlayerListsLayout::PlayerListsLayout_GetSortedTeamLists
                             (this_00,(this->fields).players,(this->fields).teams,(MethodInfo *)0x0)
      ;
      if (pDStack_28 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_28 >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      uStack_29 = (ulonglong)(uint)(pDStack_28->fields)._version;
      uStack_30 = 2;
      uStack_31 = 0;
      uStack_32 = 0;
      DStack_1._version = (undefined4)uStack_29;
      DStack_1._index = uStack_29._4_4_;
      DStack_1._current.key = 0;
      DStack_1._current._4_4_ = 0;
      DStack_1._current.value = (Object *)0x0;
      DStack_1._getEnumeratorRetType = 2;
      DStack_1._36_4_ = 0;
      uStack_18 = 0;
      pDStack_19 = &DStack_1;
      DStack_1._dictionary = pDStack_28;
code_?:
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                        );
      if (bVar10 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_1._current.value !=
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          uStack_31 = 0;
          pDStack_28 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_1._current.value;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&pDStack_28 >> 0xc);
            uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            do {
              uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
              puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          uStack_29 = 0;
          if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_1._current.value !=
              (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
            uStack_29 = (ulonglong)
                        *(uint *)((longlong)
                                  &((Dictionary_2_System_UInt32_System_Object___Fields *)
                                   ((longlong)DStack_1._current.value + 0x10))->_entries + 4) <<
                        0x20;
            uStack_31 = 0;
            LStack_2._list = (List_1_System_Object_ *)DStack_1._current.value;
            LStack_2._index = (undefined4)uStack_29;
            LStack_2._version = uStack_29._4_4_;
            LStack_2._current = (Object *)0x0;
            uStack_33 = 0;
            pLStack_34 = &LStack_2;
code_?:
            bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_2,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                              );
            pOVar4 = LStack_2._current;
            if (bVar10 != 0) {
              if (LStack_2._current != (Object *)0x0) {
                IVar27 = *(Int32Enum__Enum *)((longlong)&LStack_2._current[8].klass + 4);
                if (iVar3 != 1) goto code_?;
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
    bVar10 = 0;
  }
  return bVar10;
code_?:
  if (IVar27 != 5) {
code_?:
    if (this_02 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    goto code_?;
    pOVar35 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,IVar27,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                        );
    if (pOVar35 == (Object *)0x0) goto code_?;
    (*(code *)pOVar35->klass[1]._0.name)(pOVar35,pOVar4,pOVar35->klass[1]._0.namespaze);
  }
  goto code_?;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PlayerListsLayout+<CreatePlayerLists>d__10::
     PlayerListsLayout_CreatePlayerLists_d_10_System_Collections_IEnumerator_Reset
               (PlayerListsLayout_CreatePlayerLists_d_10 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__PlayerListsLayout___CreatePlayerLists_d__10__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

