
/* Void Add(Int32) */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Add(TimeoutMap *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).weaponTimeOutMap;
  value = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
    Dictionary_2_System_Int32Enum_System_Single__set_Item
              ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,id,value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Contains
               (TimeoutMap *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).weaponTimeOutMap;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_float>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Update(TimeoutMap *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Remove_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                   );
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current.value = 0.0;
  DStack_7._getEnumeratorRetType = 0;
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).removeSet;
  auStack_8._0_4_ = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  auStack_8._4_4_ = 0;
  auStack_8._8_4_ = 0;
  auStack_8._12_4_ = (Object *)0x0;
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    method_00 = (MethodInfo *)(this->fields).weaponTimeOutMap;
    if (method_00 != (MethodInfo *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          (auStack_8 + 0x10),(Dictionary_2_System_Object_System_Object_ *)method_00
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pDVar9->_dictionary;
      DStack_7._version = pDVar9->_version;
      DStack_7._index = pDVar9->_index;
      DStack_7._current.key = (int32_t)(pDVar9->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
      uStack_1 = 1;
      pDStack_11 = &DStack_7;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Single]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                          (&DStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                          );
        if (bVar12 == 0) break;
        fStack_13 = (this->fields).timeOut;
        pOStack_14 = (Object *)DStack_7._current.key;
        HStack_15._current = (Object *)DStack_7._current.value;
        fStack_16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
        if ((float)HStack_15._current + fStack_13 <= fStack_16) {
          pHVar17 = (HashSet_1_System_Object_ *)(this->fields).removeSet;
          if (pHVar17 == (HashSet_1_System_Object_ *)0x0) goto code_?;
          in_stack_6 =
               (MethodInfo **)MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Add
                    (pHVar17,pOStack_14,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      uStack_1 = 0xffffffff;
      pHVar17 = (HashSet_1_System_Object_ *)(this->fields).removeSet;
      if (pHVar17 != (HashSet_1_System_Object_ *)0x0) {
        pHVar18 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                 HashSet_1_System_Object__GetEnumerator
                           (&HStack_15,pHVar17,
                            MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__)
        ;
        uStack_10 = 0;
        auStack_8._0_4_ = pHVar18->_set;
        auStack_8._4_4_ = pHVar18->_index;
        auStack_8._8_4_ = pHVar18->_version;
        auStack_8._12_4_ = pHVar18->_current;
        uStack_1 = 4;
        pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Single_ *)
                     auStack_8;
        while( true ) {
          bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                            ((HashSet_1_T_Enumerator_System_Int32_ *)auStack_8,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          if (bVar12 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)auStack_8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       ,method_00);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          this_01 = (this->fields).weaponTimeOutMap;
          if (this_01 == (Dictionary_2_System_Int32_System_Single_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__Remove
                    (this_01,auStack_8._12_4_,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Remove_int_);
        }
      }
    }
  }
code_?:
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* TimeoutMap(Single) */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap__ctor
               (TimeoutMap *this,float timeOut,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Single_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
  if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
    (this->fields).weaponTimeOutMap = this_00;
    func_?(&(this->fields).weaponTimeOutMap,this_00);
    this_01 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      method_00 = (MethodInfo *)&(this->fields).removeSet;
      (this->fields).removeSet = (HashSet_1_System_Int32_ *)this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      (this->fields).timeOut = timeOut;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

