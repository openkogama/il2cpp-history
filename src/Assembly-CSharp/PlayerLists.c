
/* PlayerList CreatePlayerList(MVTeam, Int32) */

PlayerList *
Assembly-CSharp.dll::PlayerLists::PlayerLists_CreatePlayerList
          (PlayerLists *this,MVTeam__Enum team,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    PlayerList_MethodInfo__UnityEngine__Object__Instantiate<PlayerList>_PlayerList__UnityEngine__Transform__bool_
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
        (*(code *)(pPVar1->klass->vtable).Initialize.method)();
        return pPVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pPVar1 = (PlayerList *)(*pcVar2)();
  return pPVar1;
}


/* Void CreatePlayerLists(IEnumerable`1[MVPlayer], List`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::PlayerLists::PlayerLists_CreatePlayerLists
               (PlayerLists *this,IEnumerable_1_MVPlayer_ *players,
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
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__Add_MV__WorldObject__MVTeam__PlayerList_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>
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
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__Dictionary__
                );
      pDStack_13 = this_02;
      if (pOStack_10 == (Object *)0x1) {
        pPVar14 = PlayerLists_CreatePlayerList(this,MVTeam__Enum_None,0,(MethodInfo *)0x0);
        if (this_02 ==
            (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,5,(Object *)pPVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__Add_MV__WorldObject__MVTeam__PlayerList_
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
          pPVar14 = PlayerLists_CreatePlayerList
                             (this,(MVTeam__Enum)RStack_17,score,(MethodInfo *)0x0);
          if (this_02 ==
              (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Add
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
                     (Int32Enum__Enum)RStack_17,(Object *)pPVar14,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__Add_MV__WorldObject__MVTeam__PlayerList_
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
        PlayerLists_SortPlayerListsAfterScore
                  (this,(Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)this_02,teams,GStack_19,
                   (MethodInfo *)0x0);
        if ((int)pOStack_9 < 1) {
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      this_03 = (Dictionary_2_System_UInt32_System_Object_ *)
                PlayerLists_GetSortedTeamLists(this,players,teams,(MethodInfo *)0x0);
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
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar26 == (Object *)0x0)) goto code_?;
    method_00 = (MethodInfo *)0x5;
    func_?();
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
    func_?(&TypeInfo__PlayerLists__ScoreSorter);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  piStack_6 = (int *)0x0;
  uVar7._0_4_ = (Object *)0x0;
  uVar7._4_4_ = 0;
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>
                           );
  pDStack_8 = this_00;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dictionary__
            );
  pDStack_9 = this_00;
  if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_11,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)teams,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    uStack_12 = 0;
    pOStack_13 = (Object__Class *)pLVar10->_list;
    uStack_1 = 1;
    key = pLVar10->_current;
    pOStack_14 = (Object *)&pOStack_13;
    while( true ) {
      method_00 = (MethodInfo *)uVar7;
      bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&pOStack_13,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                        );
      if (bVar15 == 0) break;
      RVar16 = key;
      this_01 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
      if (pDStack_8 ==
          (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
      goto code_?;
      uVar7._4_4_ = (int32_t)
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
      ;
      uVar7._0_4_ = (Object *)this_01;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_8,(Int32Enum__Enum)key,
                 (Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
                );
      key = RVar16;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&pOStack_13,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    if (players != (IEnumerable_1_MVPlayer_ *)0x0) {
      pIStack_17 = players->klass;
      uVar18 = 0;
      uVar19._0_1_ = (pIStack_17->_1).rank;
      uVar19._1_1_ = (pIStack_17->_1).minimumAlignment;
      piStack_20 = (int *)(uint)uVar19;
      if (uVar19 != 0) {
        do {
          if (pIStack_17->interfaceOffsets[uVar18].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>) {
            ppMVar21 = &(&players->klass->vtable)[players->klass->interfaceOffsets[uVar18].offset].
                       GetEnumerator.method;
            goto code_?;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar19);
      }
      ppMVar21 = (MethodInfo **)func_?();
code_?:
      piStack_6 = (int *)(*(code *)*ppMVar21)();
      LStack_11._current = (RegexCharClass_SingleRange)&piStack_6;
      LStack_11._version = 0;
      uStack_1 = 4;
      while (pIStack_17 = (IEnumerable_1_MVPlayer___Class *)piStack_6, piStack_6 != (int *)0x0) {
        piStack_20 = (int *)*piStack_6;
        uVar18 = 0;
        uVar19 = *(ushort *)((int)piStack_20 + 0xb6);
        pOStack_14 = (Object *)(uint)uVar19;
        if (uVar19 != 0) {
          do {
            if (*(IEnumerator__Class **)(piStack_20[0x16] + (uint)uVar18 * 8) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar22 = (undefined4 *)
                       (*piStack_6 +
                       (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar18 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar19);
        }
        puVar22 = (undefined4 *)func_?();
code_?:
        cVar23 = (*(code *)*puVar22)();
        if (cVar23 == '\0') {
          uStack_1 = 0xffffffff;
          if (piStack_6 != (int *)0x0) {
            func_?();
          }
          uStack_1 = 0xffffffff;
          if (pDStack_8 !=
              (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
            pDVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System
                      ::Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *
                                 )&stack0xffffffac,
                                 (Dictionary_2_System_UInt32_System_Object_ *)pDStack_8,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                                );
            uVar25 = *(undefined8 *)&(pDVar24->_current).value;
            LStack_11._version = 0;
            uStack_1 = 7;
            LStack_11._current = (RegexCharClass_SingleRange)&stack0xffffff84;
            while( true ) {
              pLVar26 = (List_1_System_Object_ *)uVar25;
              bVar15 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *
                                 )&stack0xffffff84,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                                );
              if (bVar15 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&stack0xffffff84,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                           ,in_stack_27);
                *unaff_FS_OFFSET = uStack_3;
                return (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)pDStack_8;
              }
              this_02 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UxmlObjectListAttributeDescription`1[System::Object]::
              UxmlObjectListAttributeDescription_1_System_Object___ctor(this_02,(MethodInfo *)0x0);
              if (pLVar26 == (List_1_System_Object_ *)0x0) break;
              uVar25._4_4_ = (int32_t)
                             MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
              ;
              uVar25._0_4_ = (Object *)this_02;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Sort_2
                        (pLVar26,(IComparer_1_System_Object_ *)this_02,
                         MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
                        );
            }
          }
          break;
        }
        piStack_20 = piStack_6;
        if (piStack_6 == (int *)0x0) break;
        pOStack_14 = (Object *)*piStack_6;
        uVar18 = 0;
        uVar19 = *(ushort *)((int)&pOStack_14[0x16].monitor + 2);
        pIStack_17 = (IEnumerable_1_MVPlayer___Class *)(uint)uVar19;
        if (uVar19 != 0) {
          do {
            if ((IEnumerator_1_MVPlayer___Class *)
                (&((pOStack_14[0xb].klass)->_0).image)[(uint)uVar18 * 2] ==
                TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>) {
              puVar22 = (undefined4 *)
                       (*piStack_6 +
                       (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar18 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar19);
        }
        puVar22 = (undefined4 *)func_?();
code_?:
        item = (Object *)(*(code *)*puVar22)();
        if (item == (Object *)0x0) break;
        if (item[9].klass != (Object__Class *)0x5) {
          if ((pDStack_8 ==
               (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) ||
             (pLVar26 = (List_1_System_Object_ *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_8,
                                  (Int32Enum__Enum)item[9].klass,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Item_MV__WorldObject__MVTeam_
                                 ), pLVar26 == (List_1_System_Object_ *)0x0)) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (pLVar26,item,
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


/* Void Initialize(PlayerLists, GameStatCounterType) */

void Assembly-CSharp.dll::PlayerLists::PlayerLists_Initialize
               (PlayerLists *this,PlayerLists *playerListsPrefab,
               GameStatCounterType__Enum typeToDisplay,MethodInfo *method)

{
  ppPVar1 = &(this->fields).playerListsPrefab;
  *ppPVar1 = playerListsPrefab;
  func_?(ppPVar1,playerListsPrefab);
  (this->fields).typeToDisplay = (undefined1)typeToDisplay;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerLists::PlayerLists_OnDestroy(PlayerLists *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    func_?(&MethodInfo__PlayerLists__ReCreate__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).playerContainer;
    if (pMVar2 != (MVPlayerContainer *)0x0) {
      pAVar3 = (pMVar2->fields).OnPlayerListChanged;
      ppAVar4 = &(pMVar2->fields).OnPlayerListChanged;
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,(Object *)this,MethodInfo__PlayerLists__ReCreate__,(MethodInfo *)0x0);
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)pNVar5,(MethodInfo *)0x0);
      if (pAVar3 == (Action *)0x0) {
        *ppAVar4 = (Action *)0x0;
      }
      else {
        pAVar6 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar3;
        }
        if (pAVar6 == (Action *)0x0) goto code_?;
        *ppAVar4 = pAVar6;
        pAVar6 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar3;
        }
        if (pAVar6 == (Action *)0x0) goto code_?;
      }
      func_?();
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pFVar7 = (pMVar1->fields)._Friends_k__BackingField, pFVar7 != (FriendList *)0x0)) {
        pFVar8 = (pFVar7->fields).OnFriendListUpdated;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                 func_?(TypeInfo__FriendList__OnFriendListUpdatedDelegate);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,(Object *)&UNK_?,MethodInfo__PlayerLists__ReCreate__,
                   (MethodInfo *)0x0);
        pFVar8 = (FriendList_OnFriendListUpdatedDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pFVar8,(Delegate *)pNVar5,(MethodInfo *)0x0);
        if (pFVar8 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          (pFVar7->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          func_?();
          return;
        }
        pFVar9 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
        if (pFVar8->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
          pFVar9 = pFVar8;
        }
        if (pFVar9 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
          (pFVar7->fields).OnFriendListUpdated = pFVar9;
          pFVar9 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          if (pFVar8->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar9 = pFVar8;
          }
          if (pFVar9 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ReCreate() */

void Assembly-CSharp.dll::PlayerLists::PlayerLists_ReCreate(PlayerLists *this,MethodInfo *method)

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
                    PlayerLists_MethodInfo__UnityEngine__Object__Instantiate<PlayerLists>_PlayerLists_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PlayerLists____c___ReCreate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerLists____c___ReCreate_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerLists____c__DisplayClass10_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerLists____c__DisplayClass10_0);
    func_?(&TypeInfo__PlayerLists____c);
    cRam_? = '\x01';
  }
  this_00 = (ExecuteEvents_EventFunction_1_IUIStack___Class *)
            func_?(TypeInfo__PlayerLists____c__DisplayClass10_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__PlayerLists____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__PlayerLists____c);
  }
  pEVar2 = TypeInfo__PlayerLists____c->static_fields->__9__10_0;
  if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__PlayerLists____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PlayerLists____c);
    }
    pPVar3 = TypeInfo__PlayerLists____c->static_fields->__9;
    this_00 = 
    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
    ;
    pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pPVar3,
               MethodInfo__PlayerLists____c___ReCreate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PlayerLists____c->static_fields->__9__10_0 = pEVar2;
    func_?(&TypeInfo__PlayerLists____c->static_fields->__9__10_0,pEVar2);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  object = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  original = (this->fields).playerListsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PlayerLists_MethodInfo__UnityEngine__Object__Instantiate<PlayerLists>_PlayerLists_
                     );
  if (this_00 != (ExecuteEvents_EventFunction_1_IUIStack___Class *)0x0) {
    ppcVar5 = &(this_00->_0).name;
    *ppcVar5 = (char *)pOVar4;
    func_?();
    pcVar6 = *ppcVar5;
    uVar7 = (this->fields).typeToDisplay;
    if (pcVar6 != (char *)0x0) {
      *(PlayerLists **)(pcVar6 + 0x10) = (this->fields).playerListsPrefab;
      func_?();
      pcVar6[0x34] = uVar7;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__PlayerLists____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar2 = TypeInfo__PlayerLists____c->static_fields->__9__10_1;
      if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__PlayerLists____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pPVar3 = TypeInfo__PlayerLists____c->static_fields->__9;
        pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pPVar3,
                   MethodInfo__PlayerLists____c___ReCreate_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayerLists____c->static_fields->__9__10_1 = pEVar2;
        func_?();
        pGVar1 = (GameObject *)&UNK_?;
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__PlayerLists____c__DisplayClass10_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SortPlayerListsAfterScore(Dictionary`2[MV.WorldObject.MVTeam,PlayerList],
   List`1[MV.WorldObject.MVTeam], GameStatCounterType) */

void Assembly-CSharp.dll::PlayerLists::PlayerLists_SortPlayerListsAfterScore
               (PlayerLists *this,Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *playerLists,
               List_1_MV_WorldObject_MVTeam_ *teams,GameStatCounterType__Enum typeToDisplay,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
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
    func_?(&MethodInfo__System__Collections__Generic__List<PlayerList>__Add_PlayerList_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerList>__Insert_int__PlayerList_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<PlayerList>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<PlayerList>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<PlayerList>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<PlayerList>);
    cRam_? = '\x01';
  }
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<PlayerList>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<PlayerList>__List__);
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
        index = 0;
        bVar7 = false;
        key = this_02;
        while( true ) {
          if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          if ((this_01->fields)._size <= index) break;
          if (bVar7) {
            this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_01,index,
                                 MethodInfo__System__Collections__Generic__List<PlayerList>__get_Item_int_
                                );
            if (this_02 == (RegexCharClass_SingleRange)0x0) goto code_?;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_02,(MethodInfo *)0x0);
            if (pTVar8 == (Transform *)0x0) goto code_?;
            in_stack_6 = (MethodInfo *)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar8,(MethodInfo *)0x0);
code_?:
            index = index + 1;
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
                                (this_01,index,
                                 MethodInfo__System__Collections__Generic__List<PlayerList>__get_Item_int_
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
            if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0)
            goto code_?;
            this_02 = (RegexCharClass_SingleRange)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                                 (Int32Enum__Enum)key,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                                );
            in_stack_6 =
                 MethodInfo__System__Collections__Generic__List<PlayerList>__Insert_int__PlayerList_
            ;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Insert
                      ((List_1_System_Object_ *)this_01,index,(Object *)this_02,
                       MethodInfo__System__Collections__Generic__List<PlayerList>__Insert_int__PlayerList_
                      );
            bVar7 = true;
            index = index + 1;
          }
        }
      } while (bVar7);
      if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0) break;
      this_02 = (RegexCharClass_SingleRange)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                           (Int32Enum__Enum)key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                          );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)this_02,
                 MethodInfo__System__Collections__Generic__List<PlayerList>__Add_PlayerList_);
      in_stack_6 = (MethodInfo *)&UNK_?;
      this_04 = (Component *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                           (Int32Enum__Enum)key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                          );
      if (this_04 == (Component *)0x0) break;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (this_04,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) break;
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
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

void Assembly-CSharp.dll::PlayerLists::PlayerLists_Start(PlayerLists *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    func_?(&MethodInfo__PlayerLists__ReCreate__);
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
      PlayerLists_CreatePlayerLists(this,(IEnumerable_1_MVPlayer_ *)players,teams,(MethodInfo *)0x0)
      ;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
        pAVar3 = (pMVar2->fields).OnPlayerListChanged;
        ppAVar4 = &(pMVar2->fields).OnPlayerListChanged;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,(Object *)this,MethodInfo__PlayerLists__ReCreate__,(MethodInfo *)0x0);
        pAVar3 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar3,(Delegate *)pNVar5,(MethodInfo *)0x0);
        if (pAVar3 == (Action *)0x0) {
          *ppAVar4 = (Action *)0x0;
        }
        else {
          pAVar6 = (Action *)0x0;
          if (pAVar3->klass == TypeInfo__System__Action) {
            pAVar6 = pAVar3;
          }
          if (pAVar6 == (Action *)0x0) goto code_?;
          *ppAVar4 = pAVar6;
          pAVar6 = (Action *)0x0;
          if (pAVar3->klass == TypeInfo__System__Action) {
            pAVar6 = pAVar3;
          }
          if (pAVar6 == (Action *)0x0) goto code_?;
        }
        func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pFVar7 = (pMVar1->fields)._Friends_k__BackingField, pFVar7 != (FriendList *)0x0)) {
          pFVar8 = (pFVar7->fields).OnFriendListUpdated;
          pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar5,(Object *)&UNK_?,MethodInfo__PlayerLists__ReCreate__,
                     (MethodInfo *)0x0);
          pFVar8 = (FriendList_OnFriendListUpdatedDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pFVar8,(Delegate *)pNVar5,(MethodInfo *)0x0);
          if (pFVar8 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar7->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
            func_?();
            return;
          }
          pFVar9 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          if (pFVar8->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar9 = pFVar8;
          }
          if (pFVar9 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar7->fields).OnFriendListUpdated = pFVar9;
            pFVar9 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
            if (pFVar8->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
              pFVar9 = pFVar8;
            }
            if (pFVar9 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

