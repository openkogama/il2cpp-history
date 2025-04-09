
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  index = 0;
  if (keys != (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)0x0) {
    do {
      iVar1 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
              StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        ((Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)keys,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_TriggerBoxEvents>__get_Count__
                        );
      if (iVar1 <= index) {
        return (List_1_System_Int32_ *)this_00;
      }
      key = System.Core.dll::System::Linq::Enumerable::Enumerable_ElementAt_2
                      ((IEnumerable_1_System_Object_ *)keys,index,
                       int_MethodInfo__System__Linq__Enumerable__ElementAt<int>_System__Collections__Generic__IEnumerable<int>__int_
                      );
      if (dictionary == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) break;
      keys = (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)
             MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
      ;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)dictionary,(int32_t)key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        if (this_00 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) break;
        keys = (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)
               &UNK_?;
        func_?();
        dictionary = this_00;
      }
      index = index + 1;
    } while( true );
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
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).triggerBoxEvents;
  (this->fields).wasResetThisFrame = 1;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                        );
      if (bVar11 == 0) break;
      this_01 = DStack_9._current.value;
      method_00 = (MethodInfo *)MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
      if ((TriggerBoxEvents *)this_01 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                ((TriggerBoxEvents *)this_01,(Collider *)method_00,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pDVar12 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(this->fields).newTriggerBoxEvents;
    if (pDVar12 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (pDVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                );
      pDVar12 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this->fields).triggerBoxEvents;
      if (pDVar12 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
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
    this_00 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)other,
                         TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if ((this_00 != (Component *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
      key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)this_01,(MethodInfo *)0x0);
      pDVar2 = (this->fields).newTriggerBoxEvents;
      if (pDVar2 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                          );
        if (bVar1 != 0) {
          return;
        }
        pDVar2 = (this->fields).newTriggerBoxEvents;
        if (pDVar2 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,key,(Object *)this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).triggerBoxEvents;
  (this->fields).wasResetThisFrame = 1;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                        );
      if (bVar11 == 0) break;
      this_01 = DStack_9._current.value;
      method_00 = (MethodInfo *)MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
      if ((TriggerBoxEvents *)this_01 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                ((TriggerBoxEvents *)this_01,(Collider *)method_00,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pDVar12 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(this->fields).newTriggerBoxEvents;
    if (pDVar12 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (pDVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                );
      pDVar12 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this->fields).triggerBoxEvents;
      if (pDVar12 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)(this->fields).triggerBoxEvents;
  (this->fields).fixedUpdatedWasExecuted = 0;
  (this->fields).wasResetThisFrame = 0;
  if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
    keys = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
           StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
           Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                     (pDVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Keys__
                     );
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVTriggerHandler_GetMissingKeysInDictionary
                        (this,(Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_
                               *)keys,(this->fields).newTriggerBoxEvents,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(this->fields).newTriggerBoxEvents;
    if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      keys_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          (pDVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Keys__
                          );
      this_02 = (TriggerBoxEvents *)
                MVTriggerHandler_GetMissingKeysInDictionary
                          (this,(Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_
                                 *)keys_00,(this->fields).triggerBoxEvents,(MethodInfo *)0x0);
      index_00 = 0;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        for (; index_00 < (this_01->fields)._size; index_00 = index_00 + 1) {
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index_00,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
          pDVar3 = (this->fields).triggerBoxEvents;
          if (pDVar3 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__get_Item
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)RVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                    );
          this_01 = keys_00;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
            this_01 = keys_00;
          }
          pCVar4 = (this->fields).triggingCollider;
          ppCVar5 = &(this->fields).triggingCollider;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar6 = (TriggerBoxEvents *)&UNK_?;
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pCVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            pCVar8 = (Collider *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               ((Component *)this,
                                UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                               );
            *ppCVar5 = pCVar8;
            func_?();
          }
          if (pTVar6 == (TriggerBoxEvents *)0x0) goto code_?;
          TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit(pTVar6,*ppCVar5,(MethodInfo *)0x0);
          pDVar3 = (this->fields).triggerBoxEvents;
          if (pDVar3 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)pCVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Remove_int_
                    );
          keys_00 = this_01;
        }
        index = (undefined1 *)0x0;
        if (this_02 != (TriggerBoxEvents *)0x0) {
          while ((int)index < (int)(this_02->fields)._.m_CancellationTokenSource) {
            RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this_02,(int32_t)index,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
            pDVar3 = (this->fields).triggerBoxEvents;
            this_00 = (this->fields).newTriggerBoxEvents;
            if ((this_00 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) ||
               (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                   (int32_t)RVar2,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                                  ), pDVar3 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0))
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)RVar2,value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                      );
            pDVar3 = (this->fields).triggerBoxEvents;
            if (pDVar3 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto code_?;
            pTVar6 = (TriggerBoxEvents *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)RVar2,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                                );
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pCVar4 = (this->fields).triggingCollider;
            ppCVar5 = &(this->fields).triggingCollider;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)pCVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              pCVar4 = (Collider *)
                       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                 ((Component *)this,
                                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                 );
              *ppCVar5 = pCVar4;
              func_?();
            }
            pCVar4 = *ppCVar5;
            if (pTVar6 == (TriggerBoxEvents *)0x0) goto code_?;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_02 = pTVar6;
            pMVar9 = TriggerBoxEvents::TriggerBoxEvents_GetValidWorldObject
                                (pTVar6,pCVar4,(MethodInfo *)0x0);
            if (pMVar9 != (MVWorldObjectClient *)0x0) {
              pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar10 == (MVNetworkGame *)0x0) ||
                 (pMVar11 = (pMVar10->fields)._NetworkGameStateListener_k__BackingField,
                 pMVar11 == (MVNetworkGameStateListener *)0x0)) goto code_?;
              if ((pMVar11->fields).currentGameState == 1) {
                pEVar12 = (pTVar6->fields).TriggerEnterOverride;
                (pTVar6->fields).isInTrigger = 1;
                pLVar13 = pLRam00000008;
                if (pEVar12 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
                  pEVar12 = (pTVar6->fields).TriggerEnter;
                  if (pEVar12 == (EventHandler_1_TriggerEventArgs_ *)0x0) goto code_?;
                  this_03 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?()
                  ;
                  if (cRam_? == '\0') {
                    func_?();
                    this_03 = (UxmlObjectListAttributeDescription_1_System_Object_ *)&UNK_?;
                    cRam_? = '\x01';
                  }
                  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                    this_03 = (UxmlObjectListAttributeDescription_1_System_Object_ *)&UNK_?;
                  }
                }
                else {
                  this_03 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?()
                  ;
                  if (cRam_? == '\0') {
                    func_?();
                    this_03 = (UxmlObjectListAttributeDescription_1_System_Object_ *)&UNK_?;
                    cRam_? = '\x01';
                  }
                  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                    this_03 = (UxmlObjectListAttributeDescription_1_System_Object_ *)&UNK_?;
                  }
                }
                UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                UxmlObjectListAttributeDescription`1[System::Object]::
                UxmlObjectListAttributeDescription_1_System_Object___ctor(this_03,(MethodInfo *)0x0)
                ;
                (this_03->fields)._._defaultValue_k__BackingField = pLVar13;
                (*(pEVar12->fields)._._.invoke_impl)((pEVar12->fields)._._.method_code);
              }
            }
code_?:
            if ((this->fields).wasResetThisFrame != 0) break;
            index = (undefined1 *)((int)&pCVar4->klass + 1);
          }
          pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(this->fields).newTriggerBoxEvents;
          if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Dictionary__
            );
  ppDVar2 = &(this->fields).triggerBoxEvents;
  *ppDVar2 = (Dictionary_2_System_Int32_TriggerBoxEvents_ *)pDVar1;
  func_?(ppDVar2,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Dictionary__
            );
  ppDVar2 = &(this->fields).newTriggerBoxEvents;
  *ppDVar2 = (Dictionary_2_System_Int32_TriggerBoxEvents_ *)pDVar1;
  func_?(ppDVar2,pDVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
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
  ppCVar2 = &(this->fields).triggingCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pCVar1 = (Collider *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                       );
    *ppCVar2 = pCVar1;
    func_?(ppCVar2,pCVar1);
  }
  return *ppCVar2;
}

