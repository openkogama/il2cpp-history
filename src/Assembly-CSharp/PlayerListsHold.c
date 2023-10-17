
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
        (*(pPVar1->klass->vtable).Initialize.methodPtr)();
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
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
    ;
    func_?();
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
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  LStack_8._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current.First = 0;
  LStack_8._current.Last = 0;
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  LStack_9._list = (List_1_System_Object_ *)0x0;
  LStack_9._index = 0;
  LStack_9._version = 0;
  LStack_9._current = (Object *)0x0;
  if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                 (teams->fields)._size;
    this_00 = (this->fields).gridGroup;
    if ((int)pDStack_10 < 3) {
      if ((int)pDStack_10 < 2) {
        LStack_11._version = (int32_t)(this->fields).cellSize1Team.x;
        LStack_11._current = (RegexCharClass_SingleRange)(this->fields).cellSize1Team.y;
      }
      else {
        LStack_11._version = (int32_t)(this->fields).cellSize2Teams.x;
        LStack_11._current = (RegexCharClass_SingleRange)(this->fields).cellSize2Teams.y;
      }
    }
    else {
      LStack_11._version = (int32_t)(this->fields).cellSize4Teams.x;
      LStack_11._current = (RegexCharClass_SingleRange)(this->fields).cellSize4Teams.y;
    }
    pDStack_12 = pDStack_10;
    pDStack_13 = pDStack_10;
    if (this_00 != (GridLayoutGroup *)0x0) {
      value.y = (float)LStack_11._current;
      value.x = (float)LStack_11._version;
      UnityEngine.UI.dll::UnityEngine::UI::GridLayoutGroup::GridLayoutGroup_set_cellSize
                (this_00,value,(MethodInfo *)0x0);
      auStack_14._0_4_ =
           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>
      ;
      pDVar15 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pDStack_16 = pDVar15;
      if (pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pDVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Dictionary__
                  );
        pDStack_17 = pDVar15;
        if (pDStack_13 == (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)0x1
           ) {
          pPVar18 = PlayerListsHold_CreatePlayerList(this,MVTeam__Enum_None,0,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar15,(Object *)0x5,(Object *)pPVar18,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Add_MV__WorldObject__MVTeam__PlayerListHold_
                    );
        }
        else {
          pLVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             (&LStack_11,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              teams,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                             );
          LStack_8._list = pLVar19->_list;
          LStack_8._index = pLVar19->_index;
          LStack_8._version = pLVar19->_version;
          LStack_8._current = pLVar19->_current;
          LStack_11._version = 0;
          uStack_1._0_1_ = 1;
          uStack_1._1_3_ = 0;
          LStack_11._current = (RegexCharClass_SingleRange)&LStack_8;
          while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                   (&LStack_8,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                                   ), bVar20 != 0) {
            RStack_21 = LStack_8._current;
            pMVar22 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar22 == (MVNetworkGame *)0x0) goto code_?;
            this_01 = (pMVar22->fields).teamManager;
            GStack_23 = CONCAT31(GStack_23._1_3_,(this->fields).typeToDisplay);
            if (this_01 == (MVTeamManager *)0x0) goto code_?;
            score = MVTeamManager::MVTeamManager_GetScore
                              (this_01,(MVTeam__Enum)RStack_21,GStack_23,(MethodInfo *)0x0);
            in_stack_6 = (MethodInfo **)&UNK_?;
            pPVar18 = PlayerListsHold_CreatePlayerList
                               (this,(MVTeam__Enum)RStack_21,score,(MethodInfo *)0x0);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDStack_16,(Object *)RStack_21,(Object *)pPVar18,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Add_MV__WorldObject__MVTeam__PlayerListHold_
                      );
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          uStack_1._0_1_ = 0xff;
          uStack_1._1_3_ = 0xffffff;
          GStack_23 = CONCAT31(GStack_23._1_3_,(this->fields).typeToDisplay);
          PlayerListsHold_SortPlayerListsAfterScore
                    (this,(Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)pDStack_16,teams,
                     GStack_23,(MethodInfo *)0x0);
          if ((int)pDStack_12 < 1) {
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
        pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                 PlayerListsHold_GetSortedTeamLists(this,players,teams,(MethodInfo *)0x0);
        if (pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                              auStack_14,pDVar15,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                             );
          uStack_25 = 0;
          DStack_7._dictionary =
               (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar24->_dictionary;
          DStack_7._version = pDVar24->_version;
          DStack_7._index = pDVar24->_index;
          DStack_7._current.key = (int32_t)(pDVar24->_current).key;
          DStack_7._16_8_ = *(undefined8 *)&(pDVar24->_current).value;
          pDStack_12 = &DStack_7;
          uStack_1 = 0;
          while( true ) {
            uStack_1._0_1_ = 4;
            bVar20 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                              (&DStack_7,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                              );
            if (bVar20 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)pDStack_12,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                         ,unaff_ESI);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                DStack_7._current.value ==
                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
            method_00 = (MethodInfo *)&UNK_?;
            pLVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)(auStack_14 + 8),
                                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )DStack_7._current.value,
                                MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__
                               );
            LStack_11._version = 0;
            LStack_9._list = (List_1_System_Object_ *)pLVar19->_list;
            LStack_9._index = pLVar19->_index;
            LStack_9._version = pLVar19->_version;
            LStack_9._current = *(Object **)&pLVar19->_current;
            uStack_1._0_1_ = 6;
            LStack_11._current = (RegexCharClass_SingleRange)&LStack_9;
code_?:
            bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_9,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                              );
            pOVar26 = LStack_9._current;
            if (bVar20 != 0) {
              if ((RegexCharClass_SingleRange)LStack_9._current != (RegexCharClass_SingleRange)0x0)
              {
                key = *(Int32Enum__Enum *)((int)LStack_9._current + 0x48);
                if (pDStack_13 !=
                    (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)0x1)
                goto code_?;
                key = 5;
                goto code_?;
              }
              break;
            }
            uStack_1 = CONCAT31(uStack_1._1_3_,4);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&LStack_9,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                       ,method_00);
          }
        }
      }
    }
  }
code_?:
  uVar27 = func_?();
  func_?(uVar27);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
code_?:
  if (key != 5) {
code_?:
    pOVar29 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_16,key,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                        );
    if (pOVar29 == (Object *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x5;
    func_?(5,pOVar29,pOVar26);
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
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
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
  piStack_6 = (int *)0x0;
  uVar7._0_4_ = (Object *)0x0;
  uVar7._4_4_ = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>
                           );
  pDStack_8 = this_00;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dictionary__
              );
    pDStack_9 = this_00;
    if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_11,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)teams
                          ,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                         );
      uStack_12 = 0;
      RVar13 = pLVar10->_current;
      uStack_1 = 1;
      pLStack_14 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)&stack0xffffff98;
      while( true ) {
        method_00 = (MethodInfo *)uVar7;
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffff98,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                          );
        if (bVar15 == 0) break;
        RStack_16 = RVar13;
        this_01 = (LowLevelList_1_System_Object_ *)func_?();
        if (this_01 == (LowLevelList_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  (this_01,MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
        uVar7._4_2_ = RStack_16.First;
        uVar7._6_2_ = RStack_16.Last;
        uVar7._0_4_ = (Object *)pDStack_8;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDStack_8,(Object *)RStack_16,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff98,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      if (players != (IEnumerable_1_MVPlayer_ *)0x0) {
        piStack_6 = (int *)func_?();
        LStack_11._current = (RegexCharClass_SingleRange)&piStack_6;
        LStack_11._version = 0;
        uStack_1 = 4;
        while( true ) {
          piStack_17 = piStack_6;
          if (piStack_6 == (int *)0x0) break;
          piStack_18 = (int *)*piStack_6;
          uVar19 = 0;
          RStack_16.First = 0;
          RStack_16.Last = 0;
          uVar20 = *(ushort *)((int)piStack_18 + 0xb2);
          pLStack_14 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)(uint)uVar20;
          if (uVar20 != 0) {
            do {
              if (*(IEnumerator__Class **)(piStack_18[0x16] + (uint)uVar19 * 8) ==
                  TypeInfo__System__Collections__IEnumerator) {
                puVar21 = (undefined4 *)
                         (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar19 * 8) * 8 + 0xbc +
                         *piStack_6);
                goto code_?;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar20);
          }
          puVar21 = (undefined4 *)func_?();
code_?:
          cVar22 = (*(code *)*puVar21)();
          if (cVar22 == '\0') {
            uStack_1 = 0xffffffff;
            if (piStack_6 != (int *)0x0) {
              func_?();
            }
            uStack_1 = 0xffffffff;
            pDVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                                &stack0xffffffa8,pDStack_8,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                               );
            uVar24 = *(undefined8 *)&(pDVar23->_current).value;
            LStack_11._version = 0;
            uStack_1 = 7;
            LStack_11._current = (RegexCharClass_SingleRange)&stack0xffffff80;
            goto code_?;
          }
          piStack_18 = piStack_6;
          if (piStack_6 == (int *)0x0) break;
          piStack_17 = (int *)*piStack_6;
          uVar19 = 0;
          pLStack_14 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0;
          uVar20 = *(ushort *)((int)piStack_17 + 0xb2);
          RStack_16.Last = 0;
          RStack_16.First = uVar20;
          if (uVar20 != 0) {
            do {
              if (*(IEnumerator_1_MVPlayer___Class **)(piStack_17[0x16] + (uint)uVar19 * 8) ==
                  TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>) {
                puVar21 = (undefined4 *)
                         (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar19 * 8) * 8 + 0xbc +
                         *piStack_6);
                goto code_?;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar20);
          }
          puVar21 = (undefined4 *)func_?();
code_?:
          item = (Object *)(*(code *)*puVar21)();
          if (item == (Object *)0x0) break;
          if ((*(char *)&item[8].monitor != '\x03') && (item[9].klass != (Object__Class *)0x5)) {
            this_02 = (List_1_System_Object_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_8,
                                 (Int32Enum__Enum)item[9].klass,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Item_MV__WorldObject__MVTeam_
                                );
            if (this_02 == (List_1_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (this_02,item,
                       MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  func_?();
  pcVar25 = (code *)swi(3);
  pDVar26 = (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)(*pcVar25)();
  return pDVar26;
code_?:
  pLVar27 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)uVar24;
  bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          Int32Enum,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                    ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                     &stack0xffffff80,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                    );
  if (bVar15 == 0) {
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffff80,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
               ,in_stack_28);
    *unaff_FS_OFFSET = uStack_3;
    return (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)pDStack_8;
  }
  pLStack_14 = pLVar27;
  this_03 = (TweenRunner_1_FloatTween_ *)func_?();
  if (this_03 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
  TweenRunner_1_FloatTween___ctor(this_03,(MethodInfo *)0x0);
  if (pLStack_14 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
  goto code_?;
  uVar24._4_4_ = (int32_t)
                 MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
  ;
  uVar24._0_4_ = (Object *)this_03;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort_2
            (pLStack_14,(IComparer_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_03,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
            );
  goto code_?;
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
      if (pNVar4 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
          if (pNVar4 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar4,(Object *)this,MethodInfo__PlayerListsHold__ReCreate__,
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
  this_00 = (TweenRunner_1_FloatTween_ *)
            func_?(TypeInfo__PlayerListsHold____c__DisplayClass10_0);
  if (this_00 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
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
      if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
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
    pMVar3 = (MonoBehaviour *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        PlayerListsHold_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsHold>_PlayerListsHold_
                       );
    (this_00->fields).m_CoroutineContainer = pMVar3;
    func_?(&this_00->fields);
    pMVar3 = (this_00->fields).m_CoroutineContainer;
    uVar4 = (this->fields).typeToDisplay;
    if (pMVar3 != (MonoBehaviour *)0x0) {
      pMVar5 = (MonoBehaviour__Class *)(this->fields).playerListsPrefab;
      pMVar3[1].klass = pMVar5;
      func_?(pMVar3 + 1,pMVar5);
      *(uint8_t *)&pMVar3[4].klass = uVar4;
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__PlayerListsHold____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__PlayerListsHold____c);
      }
      pEVar1 = TypeInfo__PlayerListsHold____c->static_fields->__9__10_1;
      if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__PlayerListsHold____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__PlayerListsHold____c);
        }
        pPVar2 = TypeInfo__PlayerListsHold____c->static_fields->__9;
        pEVar1 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar1,(Object *)pPVar2,
                   MethodInfo__PlayerListsHold____c___ReCreate_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayerListsHold____c->static_fields->__9__10_1 = pEVar1;
        func_?(&TypeInfo__PlayerListsHold____c->static_fields->__9__10_1,pEVar1);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar1,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
                   MethodInfo__PlayerListsHold____c__DisplayClass10_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar6,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<PlayerListHold>);
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__List<PlayerListHold>__List__);
    if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffc4,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)teams
                          ,
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
                              *)&stack0xffffffb4,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                            );
          if (bVar5 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb4,
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
            if ((this_01->fields)._size <= index) break;
            if (bVar7) {
              this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_01,index,
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
              this_02 = (RegexCharClass_SingleRange)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                                   (Int32Enum__Enum)key,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                                  );
              in_stack_6 =
                   MethodInfo__System__Collections__Generic__List<PlayerListHold>__Insert_int__PlayerListHold_
              ;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Insert
                        ((List_1_System_Object_ *)this_01,index,(Object *)this_02,
                         MethodInfo__System__Collections__Generic__List<PlayerListHold>__Insert_int__PlayerListHold_
                        );
              bVar7 = true;
              index = index + 1;
            }
          }
        } while (bVar7);
        if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0) break;
        this_02 = (RegexCharClass_SingleRange)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                             (Int32Enum__Enum)key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                            );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)this_02,
                   MethodInfo__System__Collections__Generic__List<PlayerListHold>__Add_PlayerListHold_
                  );
        in_stack_6 = (MethodInfo *)&UNK_?;
        this_04 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                             (Int32Enum__Enum)key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
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
        if (pNVar4 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar4,(Object *)this,MethodInfo__PlayerListsHold__ReCreate__,(MethodInfo *)0x0
                    );
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
            if (pNVar4 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar4,(Object *)this,MethodInfo__PlayerListsHold__ReCreate__,
                         (MethodInfo *)0x0);
              pFVar7 = (FriendList_OnFriendListUpdatedDelegate *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pFVar7,(Delegate *)pNVar4,(MethodInfo *)0x0);
              if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                (pFVar6->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0
                ;
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
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

