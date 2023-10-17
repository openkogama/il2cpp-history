
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
  pOStack_4 = (Object__Class *)0x0;
  this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>
                           );
  if (this_01 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__Dictionary__
              );
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).highScores;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffff98,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                         );
      uVar6 = *(undefined8 *)&(pDVar5->_current).value;
      uStack_1 = 0;
      while( true ) {
        pMVar7 = (MethodInfo *)uVar6;
        uStack_1._0_1_ = 1;
        bVar8 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                           &stack0xffffff80,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                          );
        if (bVar8 == 0) break;
        if ((pMVar7 == (MethodInfo *)0x0) ||
           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            pMVar7->invoker_method ==
            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
        goto code_?;
        pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&stack0xffffffa0,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            pMVar7->invoker_method,
                            MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__GetEnumerator__
                           );
        pOStack_4 = (Object__Class *)pLVar9->_list;
        RVar10 = pLVar9->_current;
        uStack_1._0_1_ = 3;
        while( true ) {
          uVar6._4_4_ = (int32_t)&pOStack_4;
          uVar6._0_4_ = (Object *)&UNK_?;
          pMVar7 = 
          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
          ;
          bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
                            );
          if (bVar8 == 0) break;
          if (RVar10 == (RegexCharClass_SingleRange)0x0) goto code_?;
          pIVar11 = *(InvokerMethod *)((int)RVar10 + 8);
          pcVar12 = *(char **)((int)RVar10 + 0xc);
          in_stack_13 = (MethodInfo *)func_?();
          if (in_stack_13 == (MethodInfo *)0x0) goto code_?;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)in_stack_13,ExceptionArgument__Enum_obj,pMVar7);
          in_stack_13->invoker_method = pIVar11;
          in_stack_13->name = pcVar12;
          if (RVar10 == (RegexCharClass_SingleRange)0x0) goto code_?;
          bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_01,
                             *(Object **)((int)RVar10 + 8),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__ContainsKey_int_
                            );
          if (bVar8 != 0) {
            pIVar11 = in_stack_13->invoker_method;
            pMVar7 = *(MethodInfo **)((int)RVar10 + 8);
            pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                                (Int32Enum__Enum)pMVar7,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Item_int_
                               );
            if (pOVar14 == (Object *)0x0) goto code_?;
            pMVar15 = pOVar14[1].monitor;
            pcVar12 = in_stack_13->name;
            in_stack_13 = (MethodInfo *)func_?();
            if (in_stack_13 == (MethodInfo *)0x0) goto code_?;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)in_stack_13,ExceptionArgument__Enum_obj,pMVar7);
            in_stack_13->invoker_method = pIVar11;
            in_stack_13->name = pcVar12 + (int)pMVar15;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,
                     (Object *)in_stack_13->invoker_method,(Object *)in_stack_13,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__set_Item_int__ScoreActorEntry_
                    );
        }
        uStack_1 = CONCAT31(uStack_1._1_3_,1);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&pOStack_4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__Dispose__
                   ,in_stack_13);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff80,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
                 ,pMVar7);
      uStack_1._0_1_ = 0xff;
      uStack_1._1_3_ = 0xffffff;
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                   RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                             (this_01,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Values__
                             );
      this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)func_?();
      if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                  (this_02,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           collection,
                   MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                  );
        if ((this->fields).byAscending == 0) {
          if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate7 ==
              (Func_2_ScoreActorEntry_Int32_ *)0x0) {
            pRVar16 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)func_?()
            ;
            if (pRVar16 == (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
            Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                      (pRVar16,(Object *)0x0,
                       MethodInfo__HighScores___GenerateActorScores_b__5_ScoreActorEntry_,
                       (MethodInfo *)0x0);
            TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate7 =
                 (Func_2_ScoreActorEntry_Int32_ *)pRVar16;
            func_?();
          }
          source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_2
                             ((IEnumerable_1_System_Object_ *)this_02,
                              (Func_2_Object_Object_ *)
                              TypeInfo__HighScores->static_fields->
                              CS___9__CachedAnonymousMethodDelegate7,
                              System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                             );
        }
        else {
          if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate6 ==
              (Func_2_ScoreActorEntry_Int32_ *)0x0) {
            pRVar16 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)func_?()
            ;
            if (pRVar16 == (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
            Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                      (pRVar16,(Object *)0x0,
                       MethodInfo__HighScores___GenerateActorScores_b__4_ScoreActorEntry_,
                       (MethodInfo *)0x0);
            TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate6 =
                 (Func_2_ScoreActorEntry_Int32_ *)pRVar16;
            func_?();
          }
          source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                             ((IEnumerable_1_System_Object_ *)this_02,
                              (Func_2_Object_Single_ *)
                              TypeInfo__HighScores->static_fields->
                              CS___9__CachedAnonymousMethodDelegate6,
                              System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                             );
        }
        pLVar17 = (List_1_ScoreActorEntry_ *)
                  System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                            ((IEnumerable_1_System_Object_ *)source,
                             System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                            );
        *unaff_FS_OFFSET = uStack_3;
        return pLVar17;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar17 = (List_1_ScoreActorEntry_ *)(*pcVar18)();
  return pLVar17;
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
  if (this_01 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).highScores;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffff9c,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                         );
      pOStack_4 = (Object__Class *)pDVar5->_dictionary;
      pOVar6 = (pDVar5->_current).key;
      uVar7 = *(undefined8 *)&(pDVar5->_current).value;
      uStack_1 = 1;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                           &pOStack_4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__MoveNext__
                          );
        if (bVar8 == 0) break;
        pOStack_9 = (Object *)uVar7;
        if (pOStack_9 == (Object *)0x0) goto code_?;
        pMVar10 = pOStack_9[1].monitor;
        value = (MethodInfo *)func_?();
        if (value == (MethodInfo *)0x0) goto code_?;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,in_stack_11);
        value->invoker_method = (InvokerMethod)pOVar6;
        value->name = (char *)pMVar10;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (this_01,(Object *)value,
                   MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                  );
        in_stack_11 = value;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&pOStack_4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__Dispose__
                 ,in_stack_11);
      uStack_1 = 0xffffffff;
      if ((this->fields).byAscending == 0) {
        if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate3 ==
            (Func_2_ScoreTeamEntry_Int32_ *)0x0) {
          pRVar12 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)func_?();
          if (pRVar12 == (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
          Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                    (pRVar12,(Object *)0x0,
                     MethodInfo__HighScores___GenerateTeamScores_b__1_ScoreTeamEntry_,
                     (MethodInfo *)0x0);
          TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate3 =
               (Func_2_ScoreTeamEntry_Int32_ *)pRVar12;
          func_?();
        }
        source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_2
                           ((IEnumerable_1_System_Object_ *)this_01,
                            (Func_2_Object_Object_ *)
                            TypeInfo__HighScores->static_fields->
                            CS___9__CachedAnonymousMethodDelegate3,
                            System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                           );
      }
      else {
        if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate2 ==
            (Func_2_ScoreTeamEntry_Int32_ *)0x0) {
          pRVar12 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)func_?();
          if (pRVar12 == (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
          Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                    (pRVar12,(Object *)0x0,
                     MethodInfo__HighScores___GenerateTeamScores_b__0_ScoreTeamEntry_,
                     (MethodInfo *)0x0);
          TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate2 =
               (Func_2_ScoreTeamEntry_Int32_ *)pRVar12;
          func_?();
        }
        source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                           ((IEnumerable_1_System_Object_ *)this_01,
                            (Func_2_Object_Single_ *)
                            TypeInfo__HighScores->static_fields->
                            CS___9__CachedAnonymousMethodDelegate2,
                            System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                           );
      }
      pLVar13 = (List_1_ScoreTeamEntry_ *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                         ((IEnumerable_1_System_Object_ *)source,
                          System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
                         );
      *unaff_FS_OFFSET = uStack_3;
      return pLVar13;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  pLVar13 = (List_1_ScoreTeamEntry_ *)(*pcVar14)();
  return pLVar13;
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
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  pSStack_8 = StringLiteral_HighScore_pr_team_u000A;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).highScores;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffa0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current.key = (int32_t)(pDVar9->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_01 = (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>
                           );
  if (this_01 != (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Dictionary__
              );
    method_00 = (MethodInfo *)&(this->fields).highScores;
    (this->fields).highScores = this_01;
    func_?(method_00,this_01);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_7);
    (this->fields).gameStatCounterType = (undefined1)gameStatCounterType;
    if (teamCounters != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         (&DStack_9,(Dictionary_2_System_Object_System_Object_ *)teamCounters,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar8->_dictionary;
      DStack_6._version = pDVar8->_version;
      DStack_6._index = pDVar8->_index;
      DStack_6._current.key = (int32_t)(pDVar8->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
      uStack_1 = 1;
      pDStack_11 = &DStack_6;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                          );
        if (bVar12 == 0) break;
        pOStack_13 = (Object *)DStack_6._current.key;
        if ((Object *)DStack_6._current.key != (Object *)0x4) {
          this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).highScores;
          if ((TeamCounter *)DStack_6._current.value == (TeamCounter *)0x0) goto code_?;
          method_00 = (MethodInfo *)
                      TeamCounter::TeamCounter_get_HighScore
                                ((TeamCounter *)DStack_6._current.value,(MethodInfo *)0x0);
          if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,pOStack_13,(Object *)method_00,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Add_MV__WorldObject__MVTeam__HighScore_
                    );
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                 ,method_00);
    }
    (this->fields).presentAsTeamScore = presentAsTeamScore;
    (this->fields).winningConditionPresentStyle = (undefined1)winningConditionPresentStyle;
    (this->fields).byAscending = byAscending;
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

