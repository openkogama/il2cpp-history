
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__System__Linq__Enumerable__ElementAt<int>_System__Collections__Generic__IEnumerable<int>__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_TriggerBoxEvents>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  index = 0;
  if (keys != (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)0x0) {
    while (pDVar2 = (keys->fields)._dictionary,
          pDVar2 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
      if ((pDVar2->fields)._count - (pDVar2->fields)._freeCount <= index) {
        return pLVar1;
      }
      key = System.Core.dll::System::Linq::Enumerable::Enumerable_ElementAt_1
                      ((IEnumerable_1_System_Int32_ *)keys,index,
                       int_MethodInfo__System__Linq__Enumerable__ElementAt<int>_System__Collections__Generic__IEnumerable<int>__int_
                      );
      if (dictionary == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) break;
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)dictionary,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar3 < 0) {
        if (pLVar1 == (List_1_System_Int32_ *)0x0) break;
        FUN_?(pLVar1,key,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      index = index + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pLVar1 = (List_1_System_Int32_ *)(*pcVar4)();
  return pLVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_OnDestroy
               (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).wasResetThisFrame = 1;
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).triggerBoxEvents;
  if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    uStack_9 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_10 = 2;
    DStack_11._version = (undefined4)uStack_9;
    DStack_11._index = uStack_9._4_4_;
    DStack_11._current.key = 0;
    DStack_11._current._4_4_ = 0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    pDStack_5 = pDVar1;
    DStack_11._dictionary = pDVar1;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (&DStack_11,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                             ), this_00 = DStack_11._current.value, bVar12 != 0) {
      other = MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
      if ((TriggerBoxEvents *)this_00 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                ((TriggerBoxEvents *)this_00,other,(MethodInfo *)0x0);
    }
    pDVar13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)(this->fields).newTriggerBoxEvents;
    if (pDVar13 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (pDVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                );
      pDVar13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)(this->fields).triggerBoxEvents;
      if (pDVar13 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        TypeConverterRegistry+ConverterKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                  (pDVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  );
        return;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnTriggerStay(Collider) */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_OnTriggerStay
               (MVTriggerHandler *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (MVTriggerHandler *)0x0) {
    pvVar1 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 != '\0') {
      if (other == (Collider *)0x0) goto code_?;
      this_02 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)other,
                           TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                          );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_02 != (Component *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_02->fields)._.m_CachedPtr != (void *)0x0) {
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_02,(MethodInfo *)0x0);
          if (this_03 != (GameObject *)0x0) {
            key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                            ((Object_1 *)this_03,(MethodInfo *)0x0);
            this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                      (this->fields).newTriggerBoxEvents;
            if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
              iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Vector3]::
                      Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                (this_00,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                                 ->klass->rgctx_data[0x21].method);
              if (-1 < iVar5) {
                return;
              }
              this_01 = (this->fields).newTriggerBoxEvents;
              if (this_01 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                          ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,(Object *)this_02
                           ,CONCAT31((int3)((uint)in_R9D >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                           ->klass->rgctx_data[0x22].method);
                return;
              }
            }
          }
          goto code_?;
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_Reset
               (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).wasResetThisFrame = 1;
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).triggerBoxEvents;
  if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    uStack_9 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_10 = 2;
    DStack_11._version = (undefined4)uStack_9;
    DStack_11._index = uStack_9._4_4_;
    DStack_11._current.key = 0;
    DStack_11._current._4_4_ = 0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    pDStack_5 = pDVar1;
    DStack_11._dictionary = pDVar1;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (&DStack_11,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                             ), this_00 = DStack_11._current.value, bVar12 != 0) {
      other = MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
      if ((TriggerBoxEvents *)this_00 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                ((TriggerBoxEvents *)this_00,other,(MethodInfo *)0x0);
    }
    pDVar13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)(this->fields).newTriggerBoxEvents;
    if (pDVar13 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (pDVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                );
      pDVar13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)(this->fields).triggerBoxEvents;
      if (pDVar13 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        TypeConverterRegistry+ConverterKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                  (pDVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  );
        return;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_Start
               (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Did_not_find_collider);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 != (Collider *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = StringLiteral_Did_not_find_collider;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar3 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_Update
               (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).fixedUpdatedWasExecuted == 0) {
    return;
  }
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           (this->fields).triggerBoxEvents;
  (this->fields).fixedUpdatedWasExecuted = 0;
  (this->fields).wasResetThisFrame = 0;
  if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              TypeConverterRegistry+ConverterKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                        (pDVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Keys__
                        );
    pLVar3 = MVTriggerHandler_GetMissingKeysInDictionary
                        (this,(Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_
                               *)pDVar2,(this->fields).newTriggerBoxEvents,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)(this->fields).newTriggerBoxEvents;
    if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                TypeConverterRegistry+ConverterKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                          (pDVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Keys__
                          );
      pLVar4 = MVTriggerHandler_GetMissingKeysInDictionary
                          (this,(Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_
                                 *)pDVar2,(this->fields).triggerBoxEvents,(MethodInfo *)0x0);
      uVar5 = 0;
      uVar6 = 0;
      if (pLVar3 != (List_1_System_Int32_ *)0x0) {
        lVar7 = 0x20;
        for (; (int)uVar6 < (pLVar3->fields)._size; uVar6 = uVar6 + 1) {
          if ((uint)(pLVar3->fields)._size <= uVar6) goto code_?;
          pIVar8 = (pLVar3->fields)._items;
          if (pIVar8 == (Int32__Array *)0x0) goto DAT_?;
          if ((uint)pIVar8->max_length <= uVar6) goto code_?;
          pDVar9 = (this->fields).triggerBoxEvents;
          if (pDVar9 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto DAT_?;
          iVar10 = *(int32_t *)((longlong)pIVar8->vector + lVar7 + -0x20);
          pTVar11 = (TriggerBoxEvents *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,iVar10,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                              );
          pCVar12 = MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
          if (pTVar11 == (TriggerBoxEvents *)0x0) goto DAT_?;
          TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit(pTVar11,pCVar12,(MethodInfo *)0x0);
          pDVar9 = (this->fields).triggerBoxEvents;
          if (pDVar9 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto DAT_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,iVar10,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Remove_int_
                    );
          lVar7 = lVar7 + 4;
        }
        if (pLVar4 != (List_1_System_Int32_ *)0x0) {
          lVar7 = 0x20;
          for (; (int)uVar5 < (pLVar4->fields)._size; uVar5 = uVar5 + 1) {
            if ((uint)(pLVar4->fields)._size <= uVar5) {
code_?:
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pIVar8 = (pLVar4->fields)._items;
            if (pIVar8 == (Int32__Array *)0x0) goto DAT_?;
            if ((uint)pIVar8->max_length <= uVar5) {
code_?:
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pDVar9 = (this->fields).newTriggerBoxEvents;
            this_00 = (this->fields).triggerBoxEvents;
            if (pDVar9 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto DAT_?;
            iVar10 = *(int32_t *)((longlong)pIVar8->vector + lVar7 + -0x20);
            value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,iVar10,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                              );
            if (this_00 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto DAT_?;
            pIVar14 = MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                     ->klass->rgctx_data;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar10,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar14 >> 8),2),
                       pIVar14[0x22].method);
            pDVar9 = (this->fields).triggerBoxEvents;
            if (pDVar9 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto DAT_?;
            pTVar11 = (TriggerBoxEvents *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,iVar10,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                                );
            pCVar12 = MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
            if (pTVar11 == (TriggerBoxEvents *)0x0) goto DAT_?;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__TriggerEventArgs);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar15 = TriggerBoxEvents::TriggerBoxEvents_GetValidWorldObject
                                (pTVar11,pCVar12,(MethodInfo *)0x0);
            if (pMVar15 != (MVWorldObjectClient *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar16 == (MVGameControllerBase *)0x0) ||
                  (pMVar17 = (pMVar16->fields).game, pMVar17 == (MVNetworkGame *)0x0)) ||
                 (pMVar18 = (pMVar17->fields)._NetworkGameStateListener_k__BackingField,
                 pMVar18 == (MVNetworkGameStateListener *)0x0)) goto DAT_?;
              if ((pMVar18->fields).currentGameState == 1) {
                (pTVar11->fields).isInTrigger = 1;
                if ((pTVar11->fields).TriggerEnterOverride ==
                    (EventHandler_1_TriggerEventArgs_ *)0x0) {
                  pEVar19 = (pTVar11->fields).TriggerEnter;
                  if (pEVar19 == (EventHandler_1_TriggerEventArgs_ *)0x0) goto code_?;
                  iVar10 = (pMVar15->fields)._.id;
                  this_01 = (TriggerEventArgs *)FUN_?(TypeInfo__TriggerEventArgs);
                  TriggerEventArgs::TriggerEventArgs__ctor(this_01,iVar10,(MethodInfo *)0x0);
                  pcVar13 = (pEVar19->fields)._._.invoke_impl;
                  pvVar20 = (pEVar19->fields)._._.method;
                  pvVar21 = (pEVar19->fields)._._.method_code;
                }
                else {
                  pEVar19 = (pTVar11->fields).TriggerEnterOverride;
                  iVar10 = (pMVar15->fields)._.id;
                  this_01 = (TriggerEventArgs *)FUN_?(TypeInfo__TriggerEventArgs);
                  TriggerEventArgs::TriggerEventArgs__ctor(this_01,iVar10,(MethodInfo *)0x0);
                  if (pEVar19 == (EventHandler_1_TriggerEventArgs_ *)0x0) goto DAT_?;
                  pcVar13 = (pEVar19->fields)._._.invoke_impl;
                  pvVar20 = (pEVar19->fields)._._.method;
                  pvVar21 = (pEVar19->fields)._._.method_code;
                }
                (*pcVar13)(pvVar21,pTVar11,this_01,pvVar20);
              }
            }
code_?:
            if ((this->fields).wasResetThisFrame != 0) break;
            lVar7 = lVar7 + 4;
          }
          pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)(this->fields).newTriggerBoxEvents;
          if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            TypeConverterRegistry+ConverterKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                      (pDVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                      );
            return;
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVTriggerHandler() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler__ctor
               (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).triggerBoxEvents = (Dictionary_2_System_Int32_TriggerBoxEvents_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).triggerBoxEvents >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).newTriggerBoxEvents = (Dictionary_2_System_Int32_TriggerBoxEvents_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).newTriggerBoxEvents >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Collider get_TriggingCollider() */

Collider *
Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_get_TriggingCollider
          (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggingCollider;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 != (Collider *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pCVar1 = (Collider *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                     );
  bVar2 = iRam_? == 0;
  (this->fields).triggingCollider = pCVar1;
  if (bVar2) {
    return pCVar1;
  }
  uVar3 = (uint)((ulonglong)&(this->fields).triggingCollider >> 0xc);
  puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar5 = *puVar4;
    LOCK();
    uVar6 = *puVar4;
    if (uVar5 == uVar6) {
      *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
    }
    UNLOCK();
  } while (uVar5 != uVar6);
code_?:
  return (this->fields).triggingCollider;
}

