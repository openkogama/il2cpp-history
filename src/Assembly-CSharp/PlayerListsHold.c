
/* PlayerListHold CreatePlayerList(MVTeam, Int32) */

PlayerListHold *
Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_CreatePlayerList
          (PlayerListsHold *this,MVTeam__Enum team,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    PlayerListHold_MethodInfo__UnityEngine__Object__Instantiate<PlayerListHold>_PlayerListHold__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gridGroup;
  pPVar1 = (this->fields).playerListPrefab;
  if (this_00 != (GridLayoutGroup *)0x0) {
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pPVar1 = (PlayerListHold *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pPVar1,parent,0,
                        PlayerListHold_MethodInfo__UnityEngine__Object__Instantiate<PlayerListHold>_PlayerListHold__UnityEngine__Transform__bool_
                       );
    if (pPVar1 != (PlayerListHold *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pPVar1,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        (*(code *)(pPVar1->klass->vtable).Initialize.method)();
        return pPVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pPVar1 = (PlayerListHold *)(*pcVar2)();
  return pPVar1;
}


/* Void CreatePlayerLists(IEnumerable`1[MVPlayer], List`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_CreatePlayerLists
               (PlayerListsHold *this,IEnumerable_1_MVPlayer_ *players,
               List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff54;
  puVar5 = &stack0xffffff54;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Add_MV__WorldObject__MVTeam__PlayerListHold_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.First = 0;
  LStack_6._current.Last = 0;
  if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    pOStack_7 = (Object *)(teams->fields)._size;
    this_00 = (this->fields).gridGroup;
    if ((int)pOStack_7 < 3) {
      if ((int)pOStack_7 < 2) {
        LStack_8._version = (int32_t)(this->fields).cellSize1Team.x;
        LStack_8._current = (RegexCharClass_SingleRange)(this->fields).cellSize1Team.y;
      }
      else {
        LStack_8._version = (int32_t)(this->fields).cellSize2Teams.x;
        LStack_8._current = (RegexCharClass_SingleRange)(this->fields).cellSize2Teams.y;
      }
    }
    else {
      LStack_8._version = (int32_t)(this->fields).cellSize4Teams.x;
      LStack_8._current = (RegexCharClass_SingleRange)(this->fields).cellSize4Teams.y;
    }
    pOStack_9 = pOStack_7;
    pOStack_10 = pOStack_7;
    if (this_00 != (GridLayoutGroup *)0x0) {
      value.y = (float)LStack_8._current;
      value.x = (float)LStack_8._version;
      pMVar11 = (MethodInfo *)LStack_8._version;
      UnityEngine.UI.dll::UnityEngine::UI::GridLayoutGroup::GridLayoutGroup_set_cellSize
                (this_00,value,(MethodInfo *)0x0);
      this_02 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                func_?();
      pDStack_12 = this_02;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Dictionary__
                );
      pDStack_13 = this_02;
      if (pOStack_10 == (Object *)0x1) {
        pPVar14 = PlayerListsHold_CreatePlayerList(this,MVTeam__Enum_None,0,(MethodInfo *)0x0);
        if (this_02 ==
            (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,5,(Object *)pPVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Add_MV__WorldObject__MVTeam__PlayerListHold_
                  );
      }
      else {
        pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_8,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            teams,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                           );
        LStack_6._list = pLVar15->_list;
        LStack_6._index = pLVar15->_index;
        LStack_6._version = pLVar15->_version;
        LStack_6._current = pLVar15->_current;
        LStack_8._version = 0;
        uStack_1._0_1_ = 1;
        uStack_1._1_3_ = 0;
        LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
        while (bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text
                       ::RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                 (&LStack_6,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                                 ), bVar16 != 0) {
          RStack_17 = LStack_6._current;
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar18 == (MVNetworkGame *)0x0) goto code_?;
          this_01 = (pMVar18->fields).teamManager;
          GStack_19 = CONCAT31(GStack_19._1_3_,(this->fields).typeToDisplay);
          if (this_01 == (MVTeamManager *)0x0) goto code_?;
          score = MVTeamManager::MVTeamManager_GetScore
                            (this_01,(MVTeam__Enum)RStack_17,GStack_19,(MethodInfo *)0x0);
          pMVar11 = (MethodInfo *)&UNK_?;
          pPVar14 = PlayerListsHold_CreatePlayerList
                             (this,(MVTeam__Enum)RStack_17,score,(MethodInfo *)0x0);
          if (this_02 ==
              (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Add
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
                     (Int32Enum__Enum)RStack_17,(Object *)pPVar14,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Add_MV__WorldObject__MVTeam__PlayerListHold_
                    );
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                   ,pMVar11);
        uStack_1._0_1_ = 0xff;
        uStack_1._1_3_ = 0xffffff;
        GStack_19 = CONCAT31(GStack_19._1_3_,(this->fields).typeToDisplay);
        PlayerListsHold_SortPlayerListsAfterScore
                  (this,(Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)this_02,teams,
                   GStack_19,(MethodInfo *)0x0);
        if ((int)pOStack_9 < 1) {
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      this_03 = (Dictionary_2_System_UInt32_System_Object_ *)
                PlayerListsHold_GetSortedTeamLists(this,players,teams,(MethodInfo *)0x0);
      if (this_03 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffff60,this_03,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                           );
        uStack_21 = 0;
        pMVar11 = (MethodInfo *)pDVar20->_version;
        uVar22 = *(undefined8 *)&(pDVar20->_current).value;
        pOStack_9 = (Object *)&stack0xffffff84;
        uStack_1 = 0;
        while( true ) {
          this_04 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)uVar22;
          uStack_1._0_1_ = 4;
          bVar16 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             &stack0xffffff84,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                            );
          if (bVar16 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      (pOStack_9,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                       ,pMVar11);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (this_04 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffff68,this_04,
                              MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__
                             );
          LStack_8._version = 0;
          method_00 = (MethodInfo *)pLVar15->_list;
          RVar23 = pLVar15->_current;
          uStack_1._0_1_ = 6;
          LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffff9c;
code_?:
          pMVar11 = (MethodInfo *)&UNK_?;
          bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff9c,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                            );
          if (bVar16 != 0) {
            if (RVar23 != (RegexCharClass_SingleRange)0x0) {
              key = *(Int32Enum__Enum *)((int)RVar23 + 0x48);
              if (pOStack_10 != (Object *)0x1) goto code_?;
              key = 5;
              goto code_?;
            }
            break;
          }
          uStack_1 = CONCAT31(uStack_1._1_3_,4);
          uVar22._4_4_ = (int32_t)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
          ;
          uVar22._0_4_ = (Object *)&stack0xffffff9c;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffff9c,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                     ,method_00);
        }
      }
    }
  }
code_?:
  uVar24 = func_?();
  func_?(uVar24);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
code_?:
  if (key != 5) {
code_?:
    if ((pDStack_12 ==
         (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) ||
       (pOVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_12,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar26 == (Object *)0x0)) goto code_?;
    method_00 = (MethodInfo *)0x5;
    func_?();
  }
  goto code_?;
}


/* Dictionary`2[MV.WorldObject.MVTeam,List`1[MVPlayer]] GetSortedTeamLists(IEnumerable`1[MVPlayer],
   List`1[MV.WorldObject.MVTeam]) */

Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *
Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_GetSortedTeamLists
          (PlayerListsHold *this,IEnumerable_1_MVPlayer_ *players,
          List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff78;
  puVar5 = &stack0xffffff78;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVPlayer>);
    func_?(&TypeInfo__PlayerListsHold__ScoreSorter);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  puStack_6 = (uint *)0x0;
  pOStack_7 = (Object__Class *)0x0;
  uVar8._0_4_ = (Object *)0x0;
  uVar8._4_4_ = 0;
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>
                           );
  pDStack_9 = this_00;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dictionary__
            );
  pDStack_10 = this_00;
  if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_12,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)teams,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    uStack_13 = 0;
    pOStack_7 = (Object__Class *)pLVar11->_list;
    uStack_1 = 1;
    key = pLVar11->_current;
    pOStack_14 = (Object *)&pOStack_7;
    while( true ) {
      pMVar15 = (MethodInfo *)uVar8;
      bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&pOStack_7,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                        );
      if (bVar16 == 0) break;
      RVar17 = key;
      this_01 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
      if (pDStack_9 ==
          (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
      goto code_?;
      uVar8._4_4_ = (int32_t)
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
      ;
      uVar8._0_4_ = (Object *)this_01;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_9,(Int32Enum__Enum)key,
                 (Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
                );
      key = RVar17;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&pOStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
               ,pMVar15);
    uStack_1 = 0xffffffff;
    if (players != (IEnumerable_1_MVPlayer_ *)0x0) {
      puStack_6 = (uint *)func_?();
      LStack_12._current = (RegexCharClass_SingleRange)&puStack_6;
      LStack_12._version = 0;
      uStack_1 = 4;
      while( true ) {
        puStack_18 = puStack_6;
        if (puStack_6 == (uint *)0x0) break;
        uStack_19 = *puStack_6;
        uVar20 = 0;
        uVar21 = *(ushort *)(uStack_19 + 0xb6);
        pOStack_14 = (Object *)(uint)uVar21;
        if (uVar21 != 0) {
          do {
            if (*(IEnumerator__Class **)(*(int *)(uStack_19 + 0x58) + (uint)uVar20 * 8) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar22 = (undefined4 *)
                       (*puStack_6 +
                       (*(int *)(*(int *)(*puStack_6 + 0x58) + 4 + (uint)uVar20 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar21);
        }
        puVar22 = (undefined4 *)func_?();
code_?:
        cVar23 = (*(code *)*puVar22)();
        if (cVar23 == '\0') {
          uStack_1 = 0xffffffff;
          if (puStack_6 != (uint *)0x0) {
            func_?();
          }
          uStack_1 = 0xffffffff;
          if (pDStack_9 !=
              (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
            pDVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System
                     ::Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                                &stack0xffffffac,
                                (Dictionary_2_System_UInt32_System_Object_ *)pDStack_9,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                               );
            uVar25 = *(undefined8 *)&(pDVar24->_current).value;
            LStack_12._version = 0;
            uStack_1 = 7;
            LStack_12._current = (RegexCharClass_SingleRange)&stack0xffffff84;
            while( true ) {
              pMVar15 = (MethodInfo *)uVar25;
              bVar16 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *
                                 )&stack0xffffff84,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                                );
              if (bVar16 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&stack0xffffff84,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                           ,in_stack_26);
                *unaff_FS_OFFSET = uStack_3;
                return (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)pDStack_9;
              }
              method_00 = pMVar15;
              pOVar27 = (Object *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        (pOVar27,ExceptionArgument__Enum_obj,method_00);
              if (pMVar15 == (MethodInfo *)0x0) break;
              uVar25._4_4_ = (int32_t)
                             MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
              ;
              uVar25._0_4_ = pOVar27;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Sort_2
                        ((List_1_System_Object_ *)pMVar15,(IComparer_1_System_Object_ *)pOVar27,
                         MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
                        );
            }
          }
          break;
        }
        puStack_18 = puStack_6;
        if (puStack_6 == (uint *)0x0) break;
        pOStack_14 = (Object *)*puStack_6;
        uVar20 = 0;
        uVar21 = *(ushort *)((int)&pOStack_14[0x16].monitor + 2);
        uStack_19 = (uint)uVar21;
        if (uVar21 != 0) {
          do {
            if ((IEnumerator_1_MVPlayer___Class *)
                (&((pOStack_14[0xb].klass)->_0).image)[(uint)uVar20 * 2] ==
                TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>) {
              puVar22 = (undefined4 *)
                       (*puStack_6 +
                       (*(int *)(*(int *)(*puStack_6 + 0x58) + 4 + (uint)uVar20 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar21);
        }
        puVar22 = (undefined4 *)func_?();
code_?:
        pOVar27 = (Object *)(*(code *)*puVar22)();
        if (pOVar27 == (Object *)0x0) break;
        if ((*(char *)&pOVar27[8].monitor != '\x03') && (pOVar27[9].klass != (Object__Class *)0x5)) {
          if (pDStack_9 ==
              (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
          break;
          this_02 = (List_1_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_9,
                               (Int32Enum__Enum)pOVar27[9].klass,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Item_MV__WorldObject__MVTeam_
                              );
          if (this_02 == (List_1_System_Object_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_02,pOVar27,
                     MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  func_?();
  pcVar28 = (code *)swi(3);
  pDVar29 = (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)(*pcVar28)();
  return pDVar29;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_OnDestroy
               (PlayerListsHold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    func_?(&MethodInfo__PlayerListsHold__ReCreate__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).playerContainer;
    if (pMVar2 != (MVPlayerContainer *)0x0) {
      pAVar3 = (pMVar2->fields).OnPlayerListChanged;
      pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar4,(Object *)this,MethodInfo__PlayerListsHold__ReCreate__,(MethodInfo *)0x0);
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
      if (pAVar3 == (Action *)0x0) {
        (pMVar2->fields).OnPlayerListChanged = (Action *)0x0;
      }
      else {
        pAVar5 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar3;
        }
        if (pAVar5 == (Action *)0x0) goto code_?;
        (pMVar2->fields).OnPlayerListChanged = pAVar5;
        pAVar5 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar3;
        }
        if (pAVar5 == (Action *)0x0) goto code_?;
      }
      func_?();
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pFVar6 = (pMVar1->fields)._Friends_k__BackingField, pFVar6 != (FriendList *)0x0)) {
        pFVar7 = (pFVar6->fields).OnFriendListUpdated;
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
                 func_?(TypeInfo__FriendList__OnFriendListUpdatedDelegate);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)&UNK_?,MethodInfo__PlayerListsHold__ReCreate__,
                   (MethodInfo *)0x0);
        pFVar7 = (FriendList_OnFriendListUpdatedDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pFVar7,(Delegate *)pNVar4,(MethodInfo *)0x0);
        if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          (pFVar6->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          func_?();
          return;
        }
        pFVar8 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
        if (pFVar7->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
          pFVar8 = pFVar7;
        }
        if (pFVar8 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          (pFVar6->fields).OnFriendListUpdated = pFVar8;
          pFVar8 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          if (pFVar7->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar8 = pFVar7;
          }
          if (pFVar8 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ReCreate() */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_ReCreate
               (PlayerListsHold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    PlayerListsHold_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsHold>_PlayerListsHold_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PlayerListsHold____c___ReCreate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerListsHold____c___ReCreate_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerListsHold____c__DisplayClass10_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerListsHold____c__DisplayClass10_0);
    func_?(&TypeInfo__PlayerListsHold____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerListsHold____c__DisplayClass10_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
            ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__PlayerListsHold____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__PlayerListsHold____c);
  }
  pEVar1 = TypeInfo__PlayerListsHold____c->static_fields->__9__10_0;
  if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__PlayerListsHold____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PlayerListsHold____c);
    }
    pPVar2 = TypeInfo__PlayerListsHold____c->static_fields->__9;
    pEVar1 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar1,(Object *)pPVar2,
               MethodInfo__PlayerListsHold____c___ReCreate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PlayerListsHold____c->static_fields->__9__10_0 = pEVar1;
    func_?(&TypeInfo__PlayerListsHold____c->static_fields->__9__10_0,pEVar1);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            ((GameObject *)
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
             ,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar1,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  original = (this->fields).playerListsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar3 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PlayerListsHold_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsHold>_PlayerListsHold_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar3;
    func_?();
    pOVar3 = value[1].klass;
    uVar4 = (this->fields).typeToDisplay;
    if (pOVar3 != (Object__Class *)0x0) {
      (pOVar3->_0).byval_arg.data = (_union_86)(this->fields).playerListsPrefab;
      func_?();
      *(uint8_t *)&(pOVar3->_0).typeMetadataHandle = uVar4;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__PlayerListsHold____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar1 = TypeInfo__PlayerListsHold____c->static_fields->__9__10_1;
      if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__PlayerListsHold____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pPVar2 = TypeInfo__PlayerListsHold____c->static_fields->__9;
        pEVar1 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar1,(Object *)pPVar2,
                   MethodInfo__PlayerListsHold____c___ReCreate_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayerListsHold____c->static_fields->__9__10_1 = pEVar1;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar1,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__PlayerListsHold____c__DisplayClass10_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar5,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SortPlayerListsAfterScore(Dictionary`2[MV.WorldObject.MVTeam,PlayerListHold],
   List`1[MV.WorldObject.MVTeam], GameStatCounterType) */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_SortPlayerListsAfterScore
               (PlayerListsHold *this,
               Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *playerLists,
               List_1_MV_WorldObject_MVTeam_ *teams,GameStatCounterType__Enum typeToDisplay,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerListHold>__Add_PlayerListHold_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerListHold>__Insert_int__PlayerListHold_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<PlayerListHold>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<PlayerListHold>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<PlayerListHold>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<PlayerListHold>);
    cRam_? = '\x01';
  }
  this_01 = (RegexCharClass_SingleRange)
            func_?(TypeInfo__System__Collections__Generic__List<PlayerListHold>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<PlayerListHold>__List__);
  if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffc8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)teams,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    this_02 = pLVar4->_current;
    uStack_1 = 1;
    do {
      do {
        bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffb8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                          );
        if (bVar5 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                     ,in_stack_6);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        index = (MethodInfo *)0x0;
        bVar7 = false;
        key = this_02;
        if (this_01 == (RegexCharClass_SingleRange)0x0) goto code_?;
        while ((int)index < *(int *)((int)this_01 + 0xc)) {
          if (bVar7) {
            this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)this_01,(int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<PlayerListHold>__get_Item_int_
                                );
            if (this_02 == (RegexCharClass_SingleRange)0x0) goto code_?;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_02,(MethodInfo *)0x0);
            if (pTVar8 == (Transform *)0x0) goto code_?;
            in_stack_6 = (MethodInfo *)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar8,(MethodInfo *)0x0);
code_?:
            index = (MethodInfo *)((int)&index->methodPointer + 1);
          }
          else {
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar9 == (MVNetworkGame *)0x0) ||
               (this_00 = (pMVar9->fields).teamManager, this_00 == (MVTeamManager *)0x0))
            goto code_?;
            MVTeamManager::MVTeamManager_GetScore
                      (this_00,(MVTeam__Enum)key,typeToDisplay,(MethodInfo *)0x0);
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar9 == (MVNetworkGame *)0x0) goto code_?;
            in_stack_6 = (MethodInfo *)&UNK_?;
            this_03 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)this_01,(int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<PlayerListHold>__get_Item_int_
                                );
            if (this_03 == (RegexCharClass_SingleRange)0x0) goto code_?;
            newScore = 6;
            team = func_?();
            if (this_03 == (RegexCharClass_SingleRange)0x0) goto code_?;
            oldScore = MVTeamManager::MVTeamManager_GetScore
                                 ((MVTeamManager *)this_03,team,typeToDisplay,(MethodInfo *)0x0);
            bVar5 = MVWorldObject.dll::GameStatCounterManager::
                    GameStatCounterManager_IsNewScoreBetter
                              (newScore,oldScore,typeToDisplay,(MethodInfo *)0x0);
            if (bVar5 == 0) goto code_?;
            if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0)
            goto code_?;
            this_02 = this_01;
            item = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                              (Int32Enum__Enum)key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                             );
            in_stack_6 = index;
            this_01 = this_02;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Insert
                      ((List_1_System_Object_ *)this_02,(int32_t)index,item,
                       MethodInfo__System__Collections__Generic__List<PlayerListHold>__Insert_int__PlayerListHold_
                      );
            bVar7 = true;
            index = (MethodInfo *)((int)&index->methodPointer + 1);
          }
        }
      } while (bVar7);
      if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0) break;
      this_02 = (RegexCharClass_SingleRange)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                           (Int32Enum__Enum)key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                          );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)this_02,
                 MethodInfo__System__Collections__Generic__List<PlayerListHold>__Add_PlayerListHold_
                );
      in_stack_6 = (MethodInfo *)&UNK_?;
      this_04 = (Component *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                           (Int32Enum__Enum)key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                          );
      if (this_04 == (Component *)0x0) break;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (this_04,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) break;
      this_01.First = 0;
      this_01.Last = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                (pTVar8,(MethodInfo *)0x0);
    } while( true );
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_Start
               (PlayerListsHold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    func_?(&MethodInfo__PlayerListsHold__ReCreate__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
    players = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar2,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
      teams = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
      PlayerListsHold_CreatePlayerLists
                (this,(IEnumerable_1_MVPlayer_ *)players,teams,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
        pAVar3 = (pMVar2->fields).OnPlayerListChanged;
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)this,MethodInfo__PlayerListsHold__ReCreate__,(MethodInfo *)0x0);
        pAVar3 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
        if (pAVar3 == (Action *)0x0) {
          (pMVar2->fields).OnPlayerListChanged = (Action *)0x0;
        }
        else {
          pAVar5 = (Action *)0x0;
          if (pAVar3->klass == TypeInfo__System__Action) {
            pAVar5 = pAVar3;
          }
          if (pAVar5 == (Action *)0x0) goto code_?;
          (pMVar2->fields).OnPlayerListChanged = pAVar5;
          pAVar5 = (Action *)0x0;
          if (pAVar3->klass == TypeInfo__System__Action) {
            pAVar5 = pAVar3;
          }
          if (pAVar5 == (Action *)0x0) goto code_?;
        }
        func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pFVar6 = (pMVar1->fields)._Friends_k__BackingField, pFVar6 != (FriendList *)0x0)) {
          pFVar7 = (pFVar6->fields).OnFriendListUpdated;
          pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar4,(Object *)&UNK_?,MethodInfo__PlayerListsHold__ReCreate__,
                     (MethodInfo *)0x0);
          pFVar7 = (FriendList_OnFriendListUpdatedDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pFVar7,(Delegate *)pNVar4,(MethodInfo *)0x0);
          if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar6->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
            func_?();
            return;
          }
          pFVar8 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          if (pFVar7->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar8 = pFVar7;
          }
          if (pFVar8 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar6->fields).OnFriendListUpdated = pFVar8;
            pFVar8 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
            if (pFVar7->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
              pFVar8 = pFVar7;
            }
            if (pFVar8 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

