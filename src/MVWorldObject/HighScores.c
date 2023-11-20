
/* List`1[ScoreActorEntry] GenerateActorScores() */

List_1_ScoreActorEntry_ *
MVWorldObject.dll::HighScores::HighScores_GenerateActorScores(HighScores *this,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__set_Item_int__ScoreActorEntry_
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>);
    func_?(&
                    System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                   );
    func_?(&
                    System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__get_Current__
                   );
    func_?(&TypeInfo__System__Func<ScoreActorEntry,_int>);
    func_?(&MethodInfo__HighScores___GenerateActorScores_b__4_ScoreActorEntry_);
    func_?(&MethodInfo__HighScores___GenerateActorScores_b__5_ScoreActorEntry_);
    func_?(&TypeInfo__HighScores);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
    func_?(&TypeInfo__ScoreActorEntry);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__Dictionary__
            );
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).highScores;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff98,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                       );
    uVar5 = *(undefined8 *)&(pDVar4->_current).value;
    uStack_1 = 0;
    while( true ) {
      uStack_1._0_1_ = 1;
      bVar6 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffff80,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                        );
      pMVar7 = (MethodInfo *)uVar5;
      if (bVar6 == 0) break;
      if ((pMVar7 == (MethodInfo *)0x0) ||
         ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
          pMVar7->invoker_method ==
          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
      goto code_?;
      method_00 = (MethodInfo *)&stack0xffffffa0;
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)method_00,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          pMVar7->invoker_method,
                          MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__GetEnumerator__
                         );
      method_01 = (Il2CppClass *)pLVar8->_list;
      RVar9 = pLVar8->_current;
      uStack_1._0_1_ = 3;
      while( true ) {
        bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
                          );
        if (bVar6 == 0) break;
        if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
        pOVar10 = *(Object__Class **)((int)RVar9 + 8);
        pMVar11 = *(MonitorData **)((int)RVar9 + 0xc);
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (value,ExceptionArgument__Enum_obj,method_00);
        value[1].klass = pOVar10;
        value[1].monitor = pMVar11;
        if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
        if (this_01 ==
            (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )0x0) goto code_?;
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)this_01,
                           *(int32_t *)((int)RVar9 + 8),
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__ContainsKey_int_
                          );
        if (bVar6 != 0) {
          pOVar10 = value[1].klass;
          pMVar7 = *(MethodInfo **)((int)RVar9 + 8);
          pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)pMVar7,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Item_int_
                             );
          if (pOVar12 == (Object *)0x0) goto code_?;
          pMVar11 = pOVar12[1].monitor;
          pMVar13 = value[1].monitor;
          value = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (value,ExceptionArgument__Enum_obj,pMVar7);
          value[1].klass = pOVar10;
          value[1].monitor = pMVar11 + (int)pMVar13;
        }
        if (value == (Object *)0x0) goto code_?;
        uVar5._4_4_ = (int32_t)
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__set_Item_int__ScoreActorEntry_
        ;
        uVar5._0_4_ = value;
        method_00 = (MethodInfo *)&UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__set_Item
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)value[1].klass,value
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__set_Item_int__ScoreActorEntry_
                  );
      }
      uStack_1 = CONCAT31(uStack_1._1_3_,1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffffb0,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__Dispose__
                 ,(MethodInfo *)method_01);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffff80,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
               ,pMVar7);
    uStack_1._0_1_ = 0xff;
    uStack_1._1_3_ = 0xffffff;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)0x0
       ) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                             ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)this_01,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Values__
                             );
      this_02 = (List_1_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                (this_02,(IEnumerable_1_System_Object_ *)collection,
                 MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                );
      if ((this->fields).byAscending == 0) {
        if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate7 ==
            (Func_2_ScoreActorEntry_Int32_ *)0x0) {
          pOVar14 = (ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    func_?();
          Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType]::
          ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (pOVar14,(Object *)0x0,
                     MethodInfo__HighScores___GenerateActorScores_b__5_ScoreActorEntry_,
                     (MethodInfo *)0x0);
          TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate7 =
               (Func_2_ScoreActorEntry_Int32_ *)pOVar14;
          func_?();
        }
        source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_1
                           ((IEnumerable_1_System_Object_ *)this_02,
                            (Func_2_Object_Int32_ *)
                            TypeInfo__HighScores->static_fields->
                            CS___9__CachedAnonymousMethodDelegate7,
                            System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                           );
      }
      else {
        if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate6 ==
            (Func_2_ScoreActorEntry_Int32_ *)0x0) {
          pOVar14 = (ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    func_?();
          Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType]::
          ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (pOVar14,(Object *)0x0,
                     MethodInfo__HighScores___GenerateActorScores_b__4_ScoreActorEntry_,
                     (MethodInfo *)0x0);
          TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate6 =
               (Func_2_ScoreActorEntry_Int32_ *)pOVar14;
          func_?();
        }
        source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                           ((IEnumerable_1_System_Object_ *)this_02,
                            (Func_2_Object_Int32_ *)
                            TypeInfo__HighScores->static_fields->
                            CS___9__CachedAnonymousMethodDelegate6,
                            System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                           );
      }
      pLVar15 = (List_1_ScoreActorEntry_ *)
                System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                          ((IEnumerable_1_System_Object_ *)source,
                           System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                          );
      *unaff_FS_OFFSET = uStack_3;
      return pLVar15;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  pLVar15 = (List_1_ScoreActorEntry_ *)(*pcVar16)();
  return pLVar15;
}


/* List`1[ScoreTeamEntry] GenerateTeamScores() */

List_1_ScoreTeamEntry_ *
MVWorldObject.dll::HighScores::HighScores_GenerateTeamScores(HighScores *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                   );
    func_?(&
                    System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                   );
    func_?(&
                    System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__get_Current__
                   );
    func_?(&TypeInfo__System__Func<ScoreTeamEntry,_int>);
    func_?(&MethodInfo__HighScores___GenerateTeamScores_b__0_ScoreTeamEntry_);
    func_?(&MethodInfo__HighScores___GenerateTeamScores_b__1_ScoreTeamEntry_);
    func_?(&TypeInfo__HighScores);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<ScoreTeamEntry>);
    func_?(&TypeInfo__ScoreTeamEntry);
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  this_01 = (List_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ScoreTeamEntry>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).highScores;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff9c,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                       );
    pOStack_4 = (Object__Class *)pDVar5->_dictionary;
    pOVar6 = (Object__Class *)(pDVar5->_current).key;
    uVar7 = *(undefined8 *)&(pDVar5->_current).value;
    uStack_1 = 1;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &pOStack_4,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                        );
      if (bVar8 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&pOStack_4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
                   ,in_stack_9);
        uStack_1 = 0xffffffff;
        if ((this->fields).byAscending == 0) {
          if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate3 ==
              (Func_2_ScoreTeamEntry_Int32_ *)0x0) {
            pOVar10 = (ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                     func_?();
            Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP
            ::Metadata::__Il2CppFullySharedGenericType]::
            ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (pOVar10,(Object *)0x0,
                       MethodInfo__HighScores___GenerateTeamScores_b__1_ScoreTeamEntry_,
                       (MethodInfo *)0x0);
            TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate3 =
                 (Func_2_ScoreTeamEntry_Int32_ *)pOVar10;
            func_?();
          }
          source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_1
                             ((IEnumerable_1_System_Object_ *)this_01,
                              (Func_2_Object_Int32_ *)
                              TypeInfo__HighScores->static_fields->
                              CS___9__CachedAnonymousMethodDelegate3,
                              System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                             );
        }
        else {
          if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate2 ==
              (Func_2_ScoreTeamEntry_Int32_ *)0x0) {
            pOVar10 = (ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                     func_?();
            Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP
            ::Metadata::__Il2CppFullySharedGenericType]::
            ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (pOVar10,(Object *)0x0,
                       MethodInfo__HighScores___GenerateTeamScores_b__0_ScoreTeamEntry_,
                       (MethodInfo *)0x0);
            TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate2 =
                 (Func_2_ScoreTeamEntry_Int32_ *)pOVar10;
            func_?();
          }
          source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                             ((IEnumerable_1_System_Object_ *)this_01,
                              (Func_2_Object_Int32_ *)
                              TypeInfo__HighScores->static_fields->
                              CS___9__CachedAnonymousMethodDelegate2,
                              System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                             );
        }
        pLVar11 = (List_1_ScoreTeamEntry_ *)
                 System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                           ((IEnumerable_1_System_Object_ *)source,
                            System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
                           );
        *unaff_FS_OFFSET = uStack_3;
        return pLVar11;
      }
      pOStack_12 = (Object *)uVar7;
      if (pOStack_12 == (Object *)0x0) break;
      pMVar13 = pOStack_12[1].monitor;
      method_00 = (MethodInfo *)&UNK_?;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,method_00);
      value[1].klass = pOVar6;
      value[1].monitor = pMVar13;
      if (this_01 == (List_1_System_Object_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (this_01,value,
                 MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                );
    }
  }
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  pLVar11 = (List_1_ScoreTeamEntry_ *)(*pcVar14)();
  return pLVar11;
}


/* String ToString() */

String * MVWorldObject.dll::HighScores::HighScores_ToString(HighScores *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Value__
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&StringLiteral_HighScore_pr_team_u000A);
    func_?(&StringLiteral_Team___0_u000A);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = StringLiteral_HighScore_pr_team_u000A;
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  pSStack_8 = StringLiteral_HighScore_pr_team_u000A;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).highScores;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary = pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current.key = (pDVar9->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                        );
      if (bVar12 == 0) break;
      pOStack_13 = DStack_7._current.value;
      arg0 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format
                       (StringLiteral_Team___0_u000A,arg0,(MethodInfo *)0x0);
      pSStack_8 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat
                         ((Object *)pSStack_8,pOStack_13,(MethodInfo *)0x0);
      pSStack_8 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
               ,in_stack_14);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar6;
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar16)();
  return pSVar6;
}


/* HighScores(GameStatCounterType, Dictionary`2[MV.WorldObject.MVTeam,TeamCounter], Boolean,
   WinningConditionPresentStyle, Boolean) */

void MVWorldObject.dll::HighScores::HighScores__ctor
               (HighScores *this,GameStatCounterType__Enum gameStatCounterType,
               Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *teamCounters,bool presentAsTeamScore
               ,WinningConditionPresentStyle__Enum winningConditionPresentStyle,bool byAscending,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Add_MV__WorldObject__MVTeam__HighScore_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
                   );
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Dictionary__
            );
  method_01 = (MethodInfo *)&(this->fields).highScores;
  (this->fields).highScores = (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)this_01;
  func_?(method_01,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_01);
  (this->fields).gameStatCounterType = (undefined1)gameStatCounterType;
  if (teamCounters != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa8,(Dictionary_2_System_UInt32_System_Object_ *)teamCounters,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    method_00 = (Object__Class *)pDVar4->_dictionary;
    key = (pDVar4->_current).key;
    uVar5 = *(undefined8 *)&(pDVar4->_current).value;
    uStack_1 = 1;
code_?:
    do {
      bVar6 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                        );
      if (bVar6 == 0) goto code_?;
      pTStack_7 = (TeamCounter *)uVar5;
      if (key != 4) {
        this_00 = (this->fields).highScores;
        if (pTStack_7 != (TeamCounter *)0x0) {
          method_00 = (Object__Class *)
                      TeamCounter::TeamCounter_get_HighScore(pTStack_7,(MethodInfo *)0x0);
          if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                       (Object *)method_00,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Add_MV__WorldObject__MVTeam__HighScore_
                      );
            goto code_?;
          }
        }
        func_?();
        func_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    } while( true );
  }
code_?:
  (this->fields).presentAsTeamScore = presentAsTeamScore;
  (this->fields).winningConditionPresentStyle = (undefined1)winningConditionPresentStyle;
  (this->fields).byAscending = byAscending;
  *unaff_FS_OFFSET = uStack_3;
  return;
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)&stack0xffffffc0,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
             ,(MethodInfo *)method_00);
  goto code_?;
}

