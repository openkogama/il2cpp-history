
/* List`1[ScoreActorEntry] GenerateActorScores() */

List_1_ScoreActorEntry_ *
MVWorldObject.dll::HighScores::HighScores_GenerateActorScores(HighScores *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__set_Item_int__ScoreActorEntry_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<ScoreActorEntry,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__GetEnumerator__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScoreActorEntry);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HighScores____c___GenerateActorScores_b__7_0_ScoreActorEntry_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HighScores____c___GenerateActorScores_b__7_1_ScoreActorEntry_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighScores____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>)
  ;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__Dictionary__
            );
  pOVar2 = (Object__Class *)(this->fields).highScores;
  if (pOVar2 != (Object__Class *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pOStack_4 >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    uStack_9 = (ulonglong)*(uint *)&(pOVar2->_0).byval_arg.field_0xc;
    uStack_10 = 2;
    uStack_11 = 0;
    uStack_12 = 0;
    DStack_13._version = (undefined4)uStack_9;
    DStack_13._index = uStack_9._4_4_;
    DStack_13._current.key = 0;
    DStack_13._current._4_4_ = 0;
    DStack_13._current.value = (Object *)0x0;
    DStack_13._getEnumeratorRetType = 2;
    DStack_13._36_4_ = 0;
    uStack_14 = 0;
    pDStack_15 = &DStack_13;
    pOStack_4 = pOVar2;
    DStack_13._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pOVar2;
    while (bVar16 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (&DStack_13,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                              ), bVar16 != 0) {
      if (DStack_13._current.value == (Object *)0x0) goto code_?;
      pOVar2 = DStack_13._current.value[1].klass;
      if (pOVar2 == (Object__Class *)0x0) goto code_?;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pOStack_4 >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      uStack_9 = (ulonglong)*(uint *)((longlong)&(pOVar2->_0).namespaze + 4) << 0x20;
      uStack_11 = 0;
      LStack_1._index = (undefined4)uStack_9;
      LStack_1._version = uStack_9._4_4_;
      LStack_1._current = (Object *)0x0;
      uStack_17 = 0;
      pLStack_18 = &LStack_1;
      pOStack_4 = pOVar2;
      LStack_1._list = (List_1_System_Object_ *)pOVar2;
      while (bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_1,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
                                ), pOVar19 = LStack_1._current, bVar16 != 0) {
        if (LStack_1._current == (Object *)0x0) goto code_?;
        uVar20 = *(undefined4 *)&LStack_1._current[1].klass;
        uVar21 = *(undefined4 *)((longlong)&LStack_1._current[1].klass + 4);
        value = (Object *)FUN_?(TypeInfo__ScoreActorEntry);
        *(undefined4 *)&value[1].klass = uVar20;
        *(undefined4 *)((longlong)&value[1].klass + 4) = uVar21;
        if (this_00 ==
            (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )0x0) goto code_?;
        iVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)this_00,
                            *(int32_t *)&pOVar19[1].klass,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        if (-1 < iVar22) {
          if (value == (Object *)0x0) goto code_?;
          uVar20 = *(undefined4 *)&value[1].klass;
          pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                               *(int32_t *)&pOVar19[1].klass,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Item_int_
                              );
          if (pOVar19 == (Object *)0x0) goto code_?;
          iVar23 = *(int *)((longlong)&pOVar19[1].klass + 4);
          iVar24 = *(int *)((longlong)&value[1].klass + 4);
          value = (Object *)FUN_?(TypeInfo__ScoreActorEntry);
          *(undefined4 *)&value[1].klass = uVar20;
          *(int *)((longlong)&value[1].klass + 4) = iVar24 + iVar23;
        }
        if (value == (Object *)0x0) goto code_?;
        pOVar2 = (Object__Class *)CONCAT71((int7)((ulonglong)pOVar2 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,*(int32_t *)&value[1].klass,
                   value,(InsertionBehavior__Enum)pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__set_Item_int__ScoreActorEntry_
                   ->klass->rgctx_data[0x22].method);
      }
    }
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)0x0
       ) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                             ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Values__
                             );
      this_01 = (List_1_System_Object_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                (this_01,(IEnumerable_1_System_Object_ *)collection,
                 MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                );
      if ((this->fields).byAscending == 0) {
        if (*(int *)&(TypeInfo__HighScores____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        pFVar25 = TypeInfo__HighScores____c->static_fields->__9__7_1;
        if (pFVar25 == (Func_2_ScoreActorEntry_Int32_ *)0x0) {
          if (*(int *)&(TypeInfo__HighScores____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          pHVar26 = TypeInfo__HighScores____c->static_fields->__9;
          pFVar25 = (Func_2_ScoreActorEntry_Int32_ *)
                    FUN_?(TypeInfo__System__Func<ScoreActorEntry,_int>);
          mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                    ((Func_2_Object_Int32Enum_ *)pFVar25,(Object *)pHVar26,
                     MethodInfo__HighScores____c___GenerateActorScores_b__7_1_ScoreActorEntry_,
                     (MethodInfo *)0x0);
          TypeInfo__HighScores____c->static_fields->__9__7_1 = pFVar25;
          func_?(&TypeInfo__HighScores____c->static_fields->__9__7_1);
        }
        collection_00 =
             System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_1
                       ((IEnumerable_1_System_Object_ *)this_01,(Func_2_Object_Int32_ *)pFVar25,
                        System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                       );
        pMVar27 = 
        System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
        ;
        if ((
            System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                       );
        }
        if (collection_00 == (IOrderedEnumerable_1_System_Object_ *)0x0) {
          pSVar28 = (String *)func_?(&StringLiteral_source);
          pEVar29 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                              (pSVar28,(MethodInfo *)0x0);
          FUN_?(pEVar29,pMVar27);
          pcVar30 = (code *)swi(3);
          pLVar31 = (List_1_ScoreActorEntry_ *)(*pcVar30)();
          return pLVar31;
        }
        pvVar32 = (pMVar27->field7_0x38).rgctx_data[1].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar32 + 0x135) & 1) == 0) {
          pvVar32 = (void *)FUN_?(pvVar32);
        }
        pLVar31 = (List_1_ScoreActorEntry_ *)FUN_?(pvVar32);
        pMVar27 = (pMVar27->field7_0x38).rgctx_data[2].method;
      }
      else {
        if (*(int *)&(TypeInfo__HighScores____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        pFVar25 = TypeInfo__HighScores____c->static_fields->__9__7_0;
        if (pFVar25 == (Func_2_ScoreActorEntry_Int32_ *)0x0) {
          if (*(int *)&(TypeInfo__HighScores____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          pHVar26 = TypeInfo__HighScores____c->static_fields->__9;
          pFVar25 = (Func_2_ScoreActorEntry_Int32_ *)
                    FUN_?(TypeInfo__System__Func<ScoreActorEntry,_int>);
          mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                    ((Func_2_Object_Int32Enum_ *)pFVar25,(Object *)pHVar26,
                     MethodInfo__HighScores____c___GenerateActorScores_b__7_0_ScoreActorEntry_,
                     (MethodInfo *)0x0);
          TypeInfo__HighScores____c->static_fields->__9__7_0 = pFVar25;
          func_?(&TypeInfo__HighScores____c->static_fields->__9__7_0);
        }
        collection_00 =
             System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                       ((IEnumerable_1_System_Object_ *)this_01,(Func_2_Object_Int32_ *)pFVar25,
                        System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                       );
        pMVar27 = 
        System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
        ;
        if ((
            System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                       );
        }
        if (collection_00 == (IOrderedEnumerable_1_System_Object_ *)0x0) {
          pSVar28 = (String *)func_?(&StringLiteral_source);
          pEVar29 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                              (pSVar28,(MethodInfo *)0x0);
          FUN_?(pEVar29,pMVar27);
          pcVar30 = (code *)swi(3);
          pLVar31 = (List_1_ScoreActorEntry_ *)(*pcVar30)();
          return pLVar31;
        }
        pvVar32 = (pMVar27->field7_0x38).rgctx_data[1].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar32 + 0x135) & 1) == 0) {
          pvVar32 = (void *)FUN_?(pvVar32);
        }
        pLVar31 = (List_1_ScoreActorEntry_ *)FUN_?(pvVar32);
        pMVar27 = (pMVar27->field7_0x38).rgctx_data[2].method;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                ((List_1_System_Object_ *)pLVar31,(IEnumerable_1_System_Object_ *)collection_00,
                 pMVar27);
      return pLVar31;
    }
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
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar30 = (code *)swi(3);
  pLVar31 = (List_1_ScoreActorEntry_ *)(*pcVar30)();
  return pLVar31;
}


/* List`1[ScoreTeamEntry] GenerateTeamScores() */

List_1_ScoreTeamEntry_ *
MVWorldObject.dll::HighScores::HighScores_GenerateTeamScores(HighScores *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<ScoreTeamEntry,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ScoreTeamEntry>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScoreTeamEntry);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HighScores____c___GenerateTeamScores_b__6_0_ScoreTeamEntry_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HighScores____c___GenerateTeamScores_b__6_1_ScoreTeamEntry_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighScores____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<ScoreTeamEntry>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).highScores;
  if (pDVar1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uStack_8 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_9 = 2;
    uStack_10 = 0;
    uStack_11 = 0;
    DStack_12._version = (undefined4)uStack_8;
    DStack_12._index = uStack_8._4_4_;
    DStack_12._current.key = 0;
    DStack_12._current._4_4_ = 0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_3 = pDVar1;
    DStack_12._dictionary = pDVar1;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                         (&DStack_12,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                         );
      if (bVar13 == 0) {
        if ((this->fields).byAscending == 0) {
          if (*(int *)&(TypeInfo__HighScores____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          pFVar14 = TypeInfo__HighScores____c->static_fields->__9__6_1;
          if (pFVar14 == (Func_2_ScoreTeamEntry_Int32_ *)0x0) {
            if (*(int *)&(TypeInfo__HighScores____c->_1).field_0x1c == 0) {
              FUN_?();
            }
            pHVar15 = TypeInfo__HighScores____c->static_fields->__9;
            pFVar14 = (Func_2_ScoreTeamEntry_Int32_ *)
                      FUN_?(TypeInfo__System__Func<ScoreTeamEntry,_int>);
            mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                      ((Func_2_Object_Int32Enum_ *)pFVar14,(Object *)pHVar15,
                       MethodInfo__HighScores____c___GenerateTeamScores_b__6_1_ScoreTeamEntry_,
                       (MethodInfo *)0x0);
            TypeInfo__HighScores____c->static_fields->__9__6_1 = pFVar14;
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&TypeInfo__HighScores____c->static_fields->__9__6_1 >> 0xc)
              ;
              lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar7 = uVar5 == *puVar6;
                if (bVar7) {
                  *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
          }
          collection = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_1
                                 ((IEnumerable_1_System_Object_ *)this_00,
                                  (Func_2_Object_Int32_ *)pFVar14,
                                  System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                                 );
          pMVar16 = 
          System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
          ;
          if ((
              System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(
                         System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
                         );
          }
          if (collection == (IOrderedEnumerable_1_System_Object_ *)0x0) {
            pSVar17 = (String *)func_?(&StringLiteral_source);
            pEVar18 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                                (pSVar17,(MethodInfo *)0x0);
            FUN_?(pEVar18,pMVar16);
            pcVar19 = (code *)swi(3);
            pLVar20 = (List_1_ScoreTeamEntry_ *)(*pcVar19)();
            return pLVar20;
          }
          pvVar21 = (pMVar16->field7_0x38).rgctx_data[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
            pvVar21 = (void *)FUN_?(pvVar21);
          }
          pLVar20 = (List_1_ScoreTeamEntry_ *)FUN_?(pvVar21);
          pMVar16 = (pMVar16->field7_0x38).rgctx_data[2].method;
        }
        else {
          if (*(int *)&(TypeInfo__HighScores____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          pFVar14 = TypeInfo__HighScores____c->static_fields->__9__6_0;
          if (pFVar14 == (Func_2_ScoreTeamEntry_Int32_ *)0x0) {
            if (*(int *)&(TypeInfo__HighScores____c->_1).field_0x1c == 0) {
              FUN_?();
            }
            pHVar15 = TypeInfo__HighScores____c->static_fields->__9;
            pFVar14 = (Func_2_ScoreTeamEntry_Int32_ *)
                      FUN_?(TypeInfo__System__Func<ScoreTeamEntry,_int>);
            mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                      ((Func_2_Object_Int32Enum_ *)pFVar14,(Object *)pHVar15,
                       MethodInfo__HighScores____c___GenerateTeamScores_b__6_0_ScoreTeamEntry_,
                       (MethodInfo *)0x0);
            TypeInfo__HighScores____c->static_fields->__9__6_0 = pFVar14;
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&TypeInfo__HighScores____c->static_fields->__9__6_0 >> 0xc)
              ;
              lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar7 = uVar5 == *puVar6;
                if (bVar7) {
                  *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
          }
          collection = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                                 ((IEnumerable_1_System_Object_ *)this_00,
                                  (Func_2_Object_Int32_ *)pFVar14,
                                  System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                                 );
          pMVar16 = 
          System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
          ;
          if ((
              System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(
                         System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
                         );
          }
          if (collection == (IOrderedEnumerable_1_System_Object_ *)0x0) {
            pSVar17 = (String *)func_?(&StringLiteral_source);
            pEVar18 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                                (pSVar17,(MethodInfo *)0x0);
            FUN_?(pEVar18,pMVar16);
            pcVar19 = (code *)swi(3);
            pLVar20 = (List_1_ScoreTeamEntry_ *)(*pcVar19)();
            return pLVar20;
          }
          pvVar21 = (pMVar16->field7_0x38).rgctx_data[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
            pvVar21 = (void *)FUN_?(pvVar21);
          }
          pLVar20 = (List_1_ScoreTeamEntry_ *)FUN_?(pvVar21);
          pMVar16 = (pMVar16->field7_0x38).rgctx_data[2].method;
        }
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object___ctor_1
                  ((List_1_System_Object_ *)pLVar20,(IEnumerable_1_System_Object_ *)collection,
                   pMVar16);
        return pLVar20;
      }
      uVar22 = DStack_12._current.key;
      if (DStack_12._current.value == (Object *)0x0) break;
      uVar23 = *(undefined4 *)&DStack_12._current.value[1].monitor;
      item = (Object *)FUN_?(TypeInfo__ScoreTeamEntry);
      *(uint32_t *)&item[1].klass = uVar22;
      *(undefined4 *)((longlong)&item[1].klass + 4) = uVar23;
      pMVar16 = MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_;
      if (this_00 == (List_1_System_Object_ *)0x0) goto code_?;
      piVar24 = &(this_00->fields)._version;
      *piVar24 = *piVar24 + 1;
      pOVar25 = (this_00->fields)._items;
      uVar2 = (this_00->fields)._size;
      if (pOVar25 == (Object__Array *)0x0) goto code_?;
      if (uVar2 < (uint)pOVar25->max_length) {
        (this_00->fields)._size = uVar2 + 1;
        FUN_?(pOVar25,(longlong)(int)uVar2,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize(this_00,item,pMVar16->klass->rgctx_data[0xe].method);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar19 = (code *)swi(3);
  pLVar20 = (List_1_ScoreTeamEntry_ *)(*pcVar19)();
  return pLVar20;
}


/* String ToString() */

String * MVWorldObject.dll::HighScores::HighScores_ToString(HighScores *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HighScore_pr_team_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Team___0_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_HighScore_pr_team_u000A;
  PStack_2._arg0 = (Object *)(this->fields).highScores;
  if ((Dictionary_2_System_UInt32_System_Object_ *)PStack_2._arg0 ==
      (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar3)();
    return pSVar1;
  }
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&PStack_2 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  PStack_2._arg1 =
       (Object *)
       (ulonglong)
       (uint)(((Dictionary_2_System_UInt32_System_Object_ *)PStack_2._arg0)->fields)._version;
  uStack_8 = 2;
  auStack_9._8_8_ = PStack_2._arg1;
  KStack_10.key = 0;
  KStack_10._4_4_ = 0;
  KStack_10.value = (Object *)0x0;
  uStack_11._0_4_ = 2;
  uStack_11._4_4_ = 0;
  uStack_12 = 0;
  puStack_13 = auStack_9;
  auStack_9._0_8_ = PStack_2._arg0;
  while (bVar14 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            auStack_9,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                           ), pOVar15 = KStack_10.value, bVar14 != 0) {
    auStackX_8[0] = KStack_10.key;
    arg0 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam,auStackX_8);
    pSVar16 = StringLiteral_Team___0_u000A;
    PStack_17._arg0 = (Object *)0x0;
    PStack_17._arg1 = (Object *)0x0;
    PStack_17._arg2 = (Object *)0x0;
    PStack_17._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_17,arg0,(MethodInfo *)0x0);
    PStack_2._arg0 = PStack_17._arg0;
    PStack_2._arg1 = PStack_17._arg1;
    PStack_2._arg2 = PStack_17._arg2;
    PStack_2._args = PStack_17._args;
    pSVar16 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar16,&PStack_2,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar16,(MethodInfo *)0x0);
    if (pOVar15 == (Object *)0x0) {
      pSVar16 = (String *)0x0;
    }
    else {
      pSVar16 = (String *)
               (*(pOVar15->klass->vtable).ToString.methodPtr)
                         (pOVar15,(pOVar15->klass->vtable).ToString.method);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar16,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* HighScores(GameStatCounterType, Dictionary`2[MV.WorldObject.MVTeam,TeamCounter], Boolean,
   WinningConditionPresentStyle, Boolean) */

void MVWorldObject.dll::HighScores::HighScores__ctor
               (HighScores *this,GameStatCounterType__Enum gameStatCounterType,
               Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *teamCounters,bool presentAsTeamScore
               ,WinningConditionPresentStyle__Enum winningConditionPresentStyle,bool byAscending,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Add_MV__WorldObject__MVTeam__HighScore_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Dictionary__
            );
  (this->fields).highScores = (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)this_01;
  uVar1 = 0xADDR;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).highScores >> 0xc);
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
  (this->fields).gameStatCounterType = (uint8_t)gameStatCounterType;
  if (teamCounters == (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
code_?:
    (this->fields).presentAsTeamScore = presentAsTeamScore;
    (this->fields).winningConditionPresentStyle = (undefined1)winningConditionPresentStyle;
    (this->fields).byAscending = byAscending;
    return;
  }
  uStack_8 = 0;
  uStack_9 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pDStack_10 >> 0xc);
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
  uStack_11 = (ulonglong)(uint)(teamCounters->fields)._version;
  uStack_12 = 2;
  DStack_13._version = (undefined4)uStack_11;
  DStack_13._index = uStack_11._4_4_;
  DStack_13._current.key = 0;
  DStack_13._current._4_4_ = 0;
  DStack_13._current.value = (Object *)0x0;
  DStack_13._getEnumeratorRetType = 2;
  DStack_13._36_4_ = 0;
  pDStack_10 = teamCounters;
  DStack_13._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)teamCounters;
code_?:
  do {
    bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      (&DStack_13,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                      );
    if (bVar14 == 0) goto code_?;
    key = DStack_13._current.key;
    if (key != 4) {
      this_00 = (this->fields).highScores;
      if ((TeamCounter *)DStack_13._current.value != (TeamCounter *)0x0) {
        value = TeamCounter::TeamCounter_get_HighScore
                          ((TeamCounter *)DStack_13._current.value,(MethodInfo *)0x0);
        if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)0x0) {
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,(Object *)value,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Add_MV__WorldObject__MVTeam__HighScore_
                     ->klass->rgctx_data[0x22].method);
          goto code_?;
        }
        FUN_?();
      }
      FUN_?();
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  } while( true );
}

