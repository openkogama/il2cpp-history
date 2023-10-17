
/* List`1[System.Int32]
   GetMissingKeysInDictionary(Dictionary`2[TKey,TValue]+KeyCollection[System.Int32,TriggerBoxEvents],
   Dictionary`2[System.Int32,TriggerBoxEvents]) */

List_1_System_Int32_ *
Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_GetMissingKeysInDictionary
          (MVTriggerHandler *this,
          Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *keys,
          Dictionary_2_System_Int32_TriggerBoxEvents_ *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                   );
    func_?(&
                    int_MethodInfo__System__Linq__Enumerable__ElementAt<int>_System__Collections__Generic__IEnumerable<int>__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_TriggerBoxEvents>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_TriggerBoxEvents_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  if (this_00 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    index = 0;
    if (keys != (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)0x0) {
      while( true ) {
        iVar1 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                          ((Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)keys,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_TriggerBoxEvents>__get_Count__
                          );
        if (iVar1 <= index) {
          return (List_1_System_Int32_ *)this_00;
        }
        key = (Object *)
              System.Core.dll::System::Linq::Enumerable::Enumerable_ElementAt
                        ((IEnumerable_1_System_Int32_ *)keys,index,
                         int_MethodInfo__System__Linq__Enumerable__ElementAt<int>_System__Collections__Generic__IEnumerable<int>__int_
                        );
        if (dictionary == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) break;
        keys = (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)
               MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
        ;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)dictionary,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          keys = (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)
                 &UNK_?;
          func_?();
          dictionary = this_00;
        }
        index = index + 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_System_Int32_ *)(*pcVar3)();
  return pLVar4;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_OnDestroy
               (MVTriggerHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).triggerBoxEvents;
  (this->fields).wasResetThisFrame = 1;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                        );
      if (bVar11 == 0) break;
      this_01 = DStack_6._current.value;
      method_00 = (MethodInfo *)MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
      if ((TriggerBoxEvents *)this_01 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                ((TriggerBoxEvents *)this_01,(Collider *)method_00,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pDVar12 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).newTriggerBoxEvents;
    if (pDVar12 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                (pDVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                );
      pDVar12 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this->fields).triggerBoxEvents;
      if (pDVar12 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                  (pDVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnTriggerStay(Collider) */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_OnTriggerStay
               (MVTriggerHandler *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (other != (Collider *)0x0) {
    this_02 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)other,
                         TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if ((this_02 != (Component *)0x0) &&
       (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_02,(MethodInfo *)0x0), this_03 != (GameObject *)0x0)) {
      key = (Object *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)this_03,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this->fields).newTriggerBoxEvents;
      if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                          );
        if (bVar1 != 0) {
          return;
        }
        this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).newTriggerBoxEvents;
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_01,key,(Object *)this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_Reset
               (MVTriggerHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).triggerBoxEvents;
  (this->fields).wasResetThisFrame = 1;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                        );
      if (bVar11 == 0) break;
      this_01 = DStack_6._current.value;
      method_00 = (MethodInfo *)MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
      if ((TriggerBoxEvents *)this_01 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                ((TriggerBoxEvents *)this_01,(Collider *)method_00,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pDVar12 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).newTriggerBoxEvents;
    if (pDVar12 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                (pDVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                );
      pDVar12 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this->fields).triggerBoxEvents;
      if (pDVar12 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                  (pDVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_Start
               (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Did_not_find_collider);
    cRam_? = '\x01';
  }
  x = MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Did_not_find_collider,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_Update
               (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Keys__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    cRam_? = '\x01';
  }
  if ((this->fields).fixedUpdatedWasExecuted == 0) {
    return;
  }
  pDVar1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
           (this->fields).triggerBoxEvents;
  (this->fields).fixedUpdatedWasExecuted = 0;
  (this->fields).wasResetThisFrame = 0;
  if (pDVar1 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)0x0) {
    keys = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
           ::Regex+CachedCodeEntryKey,System::Object]::
           Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                     (pDVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Keys__
                     );
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVTriggerHandler_GetMissingKeysInDictionary
                        (this,(Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_
                               *)keys,(this->fields).newTriggerBoxEvents,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).newTriggerBoxEvents;
    if (pDVar1 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) {
      keys_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                          (pDVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Keys__
                          );
      this_02 = (TriggerBoxEvents *)
                MVTriggerHandler_GetMissingKeysInDictionary
                          (this,(Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_
                                 *)keys_00,(this->fields).triggerBoxEvents,(MethodInfo *)0x0);
      index = 0;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        for (; index < (this_01->fields)._size; index = index + 1) {
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
          pDVar3 = (this->fields).triggerBoxEvents;
          if (pDVar3 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto code_?;
          pTVar4 = (TriggerBoxEvents *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,
                              (Int32Enum__Enum)RVar2,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                             );
          this_01 = keys_00;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
            this_01 = keys_00;
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          puVar5 = &UNK_?;
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)0x0,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            pCVar7 = (Collider *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               ((Component *)this,
                                UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                               );
            (this->fields).triggingCollider = pCVar7;
            func_?();
          }
          if (pTVar4 == (TriggerBoxEvents *)0x0) goto code_?;
          TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                    (pTVar4,(this->fields).triggingCollider,(MethodInfo *)0x0);
          pDVar3 = (this->fields).triggerBoxEvents;
          if (pDVar3 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)puVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Remove_int_
                    );
          keys_00 = this_01;
        }
        puVar5 = (undefined *)0x0;
        if (this_02 != (TriggerBoxEvents *)0x0) {
          while ((int)puVar5 < (int)(this_02->fields).TriggerEnterOverride) {
            RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this_02,(int32_t)puVar5,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
            this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).triggerBoxEvents;
            pDVar3 = (this->fields).newTriggerBoxEvents;
            if ((pDVar3 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) ||
               (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,
                                   (Int32Enum__Enum)RVar2,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                                  ), this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0))
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this_00,(Object *)RVar2,value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                      );
            pDVar3 = (this->fields).triggerBoxEvents;
            if (pDVar3 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto code_?;
            pTVar4 = (TriggerBoxEvents *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,
                                (Int32Enum__Enum)RVar2,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                               );
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pCVar7 = (this->fields).triggingCollider;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)pCVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar6 != 0) {
              pCVar7 = (Collider *)
                       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                 ((Component *)this,
                                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                 );
              (this->fields).triggingCollider = pCVar7;
              func_?();
            }
            pCVar7 = (this->fields).triggingCollider;
            if (pTVar4 == (TriggerBoxEvents *)0x0) goto code_?;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_02 = pTVar4;
            pMVar8 = TriggerBoxEvents::TriggerBoxEvents_GetValidWorldObject
                                (pTVar4,pCVar7,(MethodInfo *)0x0);
            if (pMVar8 != (MVWorldObjectClient *)0x0) {
              pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar9 == (MVNetworkGame *)0x0) ||
                 (pMVar10 = (pMVar9->fields)._NetworkGameStateListener_k__BackingField,
                 pMVar10 == (MVNetworkGameStateListener *)0x0)) goto code_?;
              if ((pMVar10->fields).currentGameState == 1) {
                (pTVar4->fields).isInTrigger = 1;
                woid = _UNK_?;
                if ((pTVar4->fields).TriggerEnterOverride == (EventHandler_1_TriggerEventArgs_ *)0x0
                   ) {
                  if ((pTVar4->fields).TriggerEnter != (EventHandler_1_TriggerEventArgs_ *)0x0) {
                    pEVar11 = (pTVar4->fields).TriggerEnter;
                    pTVar12 = (TriggerEventArgs *)func_?();
                    if (pTVar12 == (TriggerEventArgs *)0x0) goto code_?;
                    TriggerEventArgs::TriggerEventArgs__ctor(pTVar12,woid,(MethodInfo *)0x0);
                    (*(pEVar11->fields)._._.invoke_impl)();
                  }
                }
                else {
                  pEVar11 = (pTVar4->fields).TriggerEnterOverride;
                  pTVar12 = (TriggerEventArgs *)func_?();
                  if (pTVar12 == (TriggerEventArgs *)0x0) goto code_?;
                  pCVar7 = (Collider *)&UNK_?;
                  TriggerEventArgs::TriggerEventArgs__ctor(pTVar12,0,(MethodInfo *)0x0);
                  if (pEVar11 == (EventHandler_1_TriggerEventArgs_ *)0x0) goto code_?;
                  (*(pEVar11->fields)._._.invoke_impl)();
                }
              }
            }
            if ((this->fields).wasResetThisFrame != 0) break;
            puVar5 = (undefined *)((int)&pCVar7->klass + 1);
          }
          pDVar1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)(this->fields).newTriggerBoxEvents;
          if (pDVar1 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                      (pDVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVTriggerHandler() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler__ctor
               (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_TriggerBoxEvents_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>
                          );
  if (pDVar1 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Dictionary__
              );
    (this->fields).triggerBoxEvents = pDVar1;
    func_?(&(this->fields).triggerBoxEvents,pDVar1);
    pDVar1 = (Dictionary_2_System_Int32_TriggerBoxEvents_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>
                            );
    if (pDVar1 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Dictionary__
                );
      (this->fields).newTriggerBoxEvents = pDVar1;
      func_?(&(this->fields).newTriggerBoxEvents,pDVar1);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Collider get_TriggingCollider() */

Collider *
Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_get_TriggingCollider
          (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggingCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = (Collider *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                       );
    (this->fields).triggingCollider = pCVar1;
    func_?(&(this->fields).triggingCollider,pCVar1);
  }
  return (this->fields).triggingCollider;
}

