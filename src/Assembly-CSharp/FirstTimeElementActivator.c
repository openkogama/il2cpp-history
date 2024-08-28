
/* Void EvaluateActivatableElements() */

void Assembly-CSharp.dll::FirstTimeElementActivator::
     FirstTimeElementActivator_EvaluateActivatableElements
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__get_Current__
                   );
    func_?(&TypeInfo__IActivatableFirstTimeUiElement);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__GetEnumerator__
                   );
    func_?(&StringLiteral_In_rare_cases_when_entering_play);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  auStack_6._4_4_ = 0;
  auStack_6._8_4_ = 0;
  auStack_6._12_2_ = 0;
  auStack_6._14_2_ = 0;
  pOStack_7 = (Object *)0x0;
  method_00 = (IActivatableFirstTimeUiElement__Class *)(this->fields).activatableUiElements;
  if (method_00 != (IActivatableFirstTimeUiElement__Class *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        (auStack_6 + 0x10),(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__GetEnumerator__
                       );
    pDStack_9 = &DStack_10;
    DStack_10._dictionary = pDVar8->_dictionary;
    DStack_10._version = pDVar8->_version;
    DStack_10._index = pDVar8->_index;
    DStack_10._current.key = (pDVar8->_current).key;
    DStack_10._current.value = (pDVar8->_current).value;
    DStack_10._getEnumeratorRetType = pDVar8->_getEnumeratorRetType;
    pOStack_11 = (Object *)0x0;
    uStack_1 = 1;
code_?:
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      (&DStack_10,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__MoveNext__
                      );
    pOVar13 = DStack_10._current.value;
    if (bVar12 != 0) {
      pIStack_14 = (IActivatableFirstTimeUiElement__Class *)DStack_10._current.key;
      pOStack_15 = DStack_10._current.value;
      if (DStack_10._current.value == (Object *)0x0) goto code_?;
      pOStack_16 = (DStack_10._current.value)->klass;
      uVar17 = 0;
      uStack_18 = 0;
      uVar19._0_1_ = (pOStack_16->_1).rank;
      uVar19._1_1_ = (pOStack_16->_1).minimumAlignment;
      uStack_20 = (uint)uVar19;
      if (uVar19 != 0) {
        do {
          if (pOStack_16->interfaceOffsets[uVar17].interfaceType ==
              (Il2CppClass *)TypeInfo__IActivatableFirstTimeUiElement) {
            ppcVar21 = &(DStack_10._current.value)->klass[1]._0.namespaze +
                       (DStack_10._current.value)->klass->interfaceOffsets[uVar17].offset * 2;
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
      ppcVar21 = (char **)func_?(DStack_10._current.value,
                                          TypeInfo__IActivatableFirstTimeUiElement,5);
code_?:
      cVar22 = (*(code *)*ppcVar21)(pOVar13,(((Il2CppType *)(ppcVar21 + 1))->data).dummy);
      if (cVar22 == '\0') {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_In_rare_cases_when_entering_play,(MethodInfo *)0x0);
        pLVar23 = (this->fields).elementsToRemove;
        if (pLVar23 == (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) goto code_?;
        method_00 = pIStack_14;
        func_?(pLVar23,pIStack_14,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                       );
      }
      else {
        if (pOVar13 == (Object *)0x0) goto code_?;
        method_00 = TypeInfo__IActivatableFirstTimeUiElement;
        cVar22 = func_?(2,TypeInfo__IActivatableFirstTimeUiElement,pOVar13);
        if (cVar22 != '\0') {
          FVar24 = func_?(6,TypeInfo__IActivatableFirstTimeUiElement,pOVar13);
          bVar12 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                            (FVar24,(MethodInfo *)0x0);
          if (bVar12 != 0) {
            if (pOStack_7 != (Object *)0x0) {
              uStack_20 = func_?(1,TypeInfo__IActivatableFirstTimeUiElement,pOVar13);
              iVar25 = func_?(1,TypeInfo__IActivatableFirstTimeUiElement,pOStack_7);
              if ((int)uStack_20 <= iVar25) goto code_?;
            }
            pOStack_7 = pOVar13;
          }
        }
      }
      goto code_?;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dispose__
               ,(MethodInfo *)method_00);
    pOVar13 = pOStack_7;
    uStack_1 = 0xffffffff;
    if ((pOStack_7 != (Object *)0x0) &&
       (cVar22 = func_?(3,TypeInfo__IActivatableFirstTimeUiElement,pOStack_7),
       cVar22 == '\0')) {
      func_?(4,TypeInfo__IActivatableFirstTimeUiElement,pOVar13);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      FVar24 = func_?(0,TypeInfo__IActivatableFirstTimeUiElement,pOVar13);
      if (this_01 == (GameEventManager *)0x0) goto code_?;
      GameEventManager::GameEventManager_NotifyFirstTimeEvent(this_01,FVar24,(MethodInfo *)0x0);
    }
    method_01 = (MethodInfo *)(this->fields).elementsToRemove;
    if (method_01 != (MethodInfo *)0x0) {
      pLVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)auStack_27,
                           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           method_01,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__GetEnumerator__
                          );
      auStack_6._0_4_ = pLVar26->_list;
      auStack_6._4_4_ = pLVar26->_index;
      auStack_6._8_4_ = pLVar26->_version;
      auStack_6._12_4_ = pLVar26->_current;
      pOStack_11 = (Object *)0x0;
      uStack_1 = 4;
      pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)auStack_6;
      while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)auStack_6,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__MoveNext__
                               ), bVar12 != 0) {
        this_00 = (this->fields).activatableUiElements;
        if (this_00 ==
            (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_ *)
            0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,auStack_6._12_4_,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)auStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__Dispose__
                 ,method_01);
      uStack_1 = 0xffffffff;
      pLVar23 = (this->fields).elementsToRemove;
      if (pLVar23 != (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        piVar28 = &(pLVar23->fields)._version;
        *piVar28 = *piVar28 + 1;
        (pLVar23->fields)._size = 0;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar29 = func_?();
  uVar29 = func_?(uVar29);
  func_?(uVar29);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_LateUpdate
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (((this->fields).isReady == 0) || ((this->fields).evaluateActivatableElements == 0)) {
    return;
  }
  (this->fields).evaluateActivatableElements = 0;
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__get_Current__
                   );
    func_?(&TypeInfo__IActivatableFirstTimeUiElement);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__GetEnumerator__
                   );
    func_?(&StringLiteral_In_rare_cases_when_entering_play);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  auStack_6._4_4_ = 0;
  auStack_6._8_4_ = 0;
  auStack_6._12_2_ = 0;
  auStack_6._14_2_ = 0;
  pOStack_7 = (Object *)0x0;
  method_00 = (IActivatableFirstTimeUiElement__Class *)(this->fields).activatableUiElements;
  if (method_00 != (IActivatableFirstTimeUiElement__Class *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        (auStack_6 + 0x10),(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__GetEnumerator__
                       );
    pDStack_9 = &DStack_10;
    DStack_10._dictionary = pDVar8->_dictionary;
    DStack_10._version = pDVar8->_version;
    DStack_10._index = pDVar8->_index;
    DStack_10._current.key = (pDVar8->_current).key;
    DStack_10._current.value = (pDVar8->_current).value;
    DStack_10._getEnumeratorRetType = pDVar8->_getEnumeratorRetType;
    pOStack_11 = (Object *)0x0;
    uStack_1 = 1;
code_?:
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      (&DStack_10,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__MoveNext__
                      );
    pOVar13 = DStack_10._current.value;
    if (bVar12 != 0) {
      pIStack_14 = (IActivatableFirstTimeUiElement__Class *)DStack_10._current.key;
      pOStack_15 = DStack_10._current.value;
      if (DStack_10._current.value == (Object *)0x0) goto code_?;
      pOStack_16 = (DStack_10._current.value)->klass;
      uVar17 = 0;
      uStack_18 = 0;
      uVar19._0_1_ = (pOStack_16->_1).rank;
      uVar19._1_1_ = (pOStack_16->_1).minimumAlignment;
      uStack_20 = (uint)uVar19;
      if (uVar19 != 0) {
        do {
          if (pOStack_16->interfaceOffsets[uVar17].interfaceType ==
              (Il2CppClass *)TypeInfo__IActivatableFirstTimeUiElement) {
            ppcVar21 = &(DStack_10._current.value)->klass[1]._0.namespaze +
                       (DStack_10._current.value)->klass->interfaceOffsets[uVar17].offset * 2;
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
      ppcVar21 = (char **)func_?(DStack_10._current.value,
                                          TypeInfo__IActivatableFirstTimeUiElement,5);
code_?:
      cVar22 = (*(code *)*ppcVar21)(pOVar13,(((Il2CppType *)(ppcVar21 + 1))->data).dummy);
      if (cVar22 == '\0') {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_In_rare_cases_when_entering_play,(MethodInfo *)0x0);
        pLVar23 = (this->fields).elementsToRemove;
        if (pLVar23 == (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) goto code_?;
        method_00 = pIStack_14;
        func_?(pLVar23,pIStack_14,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                       );
      }
      else {
        if (pOVar13 == (Object *)0x0) goto code_?;
        method_00 = TypeInfo__IActivatableFirstTimeUiElement;
        cVar22 = func_?(2,TypeInfo__IActivatableFirstTimeUiElement,pOVar13);
        if (cVar22 != '\0') {
          FVar24 = func_?(6,TypeInfo__IActivatableFirstTimeUiElement,pOVar13);
          bVar12 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                            (FVar24,(MethodInfo *)0x0);
          if (bVar12 != 0) {
            if (pOStack_7 != (Object *)0x0) {
              uStack_20 = func_?(1,TypeInfo__IActivatableFirstTimeUiElement,pOVar13);
              iVar25 = func_?(1,TypeInfo__IActivatableFirstTimeUiElement,pOStack_7);
              if ((int)uStack_20 <= iVar25) goto code_?;
            }
            pOStack_7 = pOVar13;
          }
        }
      }
      goto code_?;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dispose__
               ,(MethodInfo *)method_00);
    pOVar13 = pOStack_7;
    uStack_1 = 0xffffffff;
    if ((pOStack_7 != (Object *)0x0) &&
       (cVar22 = func_?(3,TypeInfo__IActivatableFirstTimeUiElement,pOStack_7),
       cVar22 == '\0')) {
      func_?(4,TypeInfo__IActivatableFirstTimeUiElement,pOVar13);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      FVar24 = func_?(0,TypeInfo__IActivatableFirstTimeUiElement,pOVar13);
      if (this_01 == (GameEventManager *)0x0) goto code_?;
      GameEventManager::GameEventManager_NotifyFirstTimeEvent(this_01,FVar24,(MethodInfo *)0x0);
    }
    method_01 = (MethodInfo *)(this->fields).elementsToRemove;
    if (method_01 != (MethodInfo *)0x0) {
      pLVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)auStack_27,
                           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           method_01,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__GetEnumerator__
                          );
      auStack_6._0_4_ = pLVar26->_list;
      auStack_6._4_4_ = pLVar26->_index;
      auStack_6._8_4_ = pLVar26->_version;
      auStack_6._12_4_ = pLVar26->_current;
      pOStack_11 = (Object *)0x0;
      uStack_1 = 4;
      pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)auStack_6;
      while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)auStack_6,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__MoveNext__
                               ), bVar12 != 0) {
        this_00 = (this->fields).activatableUiElements;
        if (this_00 ==
            (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_ *)
            0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,auStack_6._12_4_,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)auStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__Dispose__
                 ,method_01);
      uStack_1 = 0xffffffff;
      pLVar23 = (this->fields).elementsToRemove;
      if (pLVar23 != (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        piVar28 = &(pLVar23->fields)._version;
        *piVar28 = *piVar28 + 1;
        (pLVar23->fields)._size = 0;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar29 = func_?();
  uVar29 = func_?(uVar29);
  func_?(uVar29);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_OnDestroy
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__FirstTimeElementActivator__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&MethodInfo__FirstTimeElementActivator__OnStackChange__);
    func_?(&MethodInfo__FirstTimeElementActivator__OnXPRewarded__);
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__FirstTimeElementActivator__OnXPRewarded__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->XPRewarded = (Action *)0x0;
code_?:
    func_?();
    this_01 = (EventHandler_1_Object_ *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__FirstTimeElementActivator__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
               ,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)this_01,(MethodInfo *)0x0);
    this_00 = (this->fields).uiStack;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,MethodInfo__FirstTimeElementActivator__OnStackChange__,
               (MethodInfo *)0x0);
    if (this_00 != (UIStack *)0x0) {
      UIStack::UIStack_UnSubscribeToStackChanges(this_00,(Action *)pNVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 != (Action *)0x0) {
      TypeInfo__FirstTimeEventManager->static_fields->XPRewarded = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnJoinStateChanged(MVJoinState) */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_OnJoinStateChanged
               (FirstTimeElementActivator *this,MVJoinState__Enum mvJoinState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVJoinState>);
    func_?(&MethodInfo__FirstTimeElementActivator__OnJoinStateChanged_MVJoinState_);
    cRam_? = '\x01';
  }
  if (mvJoinState == MVJoinState__Enum_Playing) {
    (this->fields).isReady = 1;
    pAVar1 = MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<MVJoinState>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeElementActivator__OnJoinStateChanged_MVJoinState_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged
                ((Action_1_MVJoinState_ *)0x0,(MethodInfo *)0x0);
      return;
    }
    pAVar1 = (Action_1_MVJoinState_ *)func_?();
    if (pAVar1 == (Action_1_MVJoinState_ *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnXPRewarded() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_OnXPRewarded
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_Great_job__XP_rewarded_);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_Play) {
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNoticationInstruction
              (StringLiteral_Great_job__XP_rewarded_,NotificationLifetime__Enum_Low,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void RegisterActivatableElement(IActivatableFirstTimeUiElement) */

void Assembly-CSharp.dll::FirstTimeElementActivator::
     FirstTimeElementActivator_RegisterActivatableElement
               (FirstTimeElementActivator *this,
               IActivatableFirstTimeUiElement *firstTimeEventHandlerListener,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Add_MV__WorldObject__MetaData__FirstTimeEvent__IActivatableFirstTimeUiElement_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__ContainsKey_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&TypeInfo__IActivatableFirstTimeUiElement);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).activatableUiElements;
  if (firstTimeEventHandlerListener != (IActivatableFirstTimeUiElement *)0x0) {
    IVar2 = func_?(0,TypeInfo__IActivatableFirstTimeUiElement,firstTimeEventHandlerListener
                           );
    if (pDVar1 != (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_
                   *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,IVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__ContainsKey_MV__WorldObject__MetaData__FirstTimeEvent_
                        );
      if (bVar3 == 0) {
        pDVar1 = (this->fields).activatableUiElements;
        IVar2 = func_?(0,TypeInfo__IActivatableFirstTimeUiElement,
                                firstTimeEventHandlerListener);
        if (pDVar1 == (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,IVar2,
                   (Object *)firstTimeEventHandlerListener,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Add_MV__WorldObject__MetaData__FirstTimeEvent__IActivatableFirstTimeUiElement_
                  );
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SkipFirstTimeEvent(FirstTimeEvent, FirstTimeActivatableElementBase) */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_SkipFirstTimeEvent
               (FirstTimeElementActivator *this,FirstTimeEvent__Enum firstTimeEvent,
               FirstTimeActivatableElementBase *firstTimeActivatable,MethodInfo *method)

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
                    FirstTimeEventSkipPopup_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventSkipPopup>_FirstTimeEventSkipPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__FirstTimeElementActivator____c___SkipFirstTimeEvent_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__FirstTimeElementActivator____c__DisplayClass15_0___SkipFirstTimeEvent_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeElementActivator____c__DisplayClass15_0);
    func_?(&TypeInfo__FirstTimeElementActivator____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if (this_00 != (FirstTimeState *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
            FirstTimeState_HasFirstTimeEventOccured
                      (this_00,FirstTimeEvent__Enum_SkipEvent,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      value = (Object *)func_?(TypeInfo__FirstTimeElementActivator____c__DisplayClass15_0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,method_00);
      original = (this->fields).firstTimeSkipPopup;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar2 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          FirstTimeEventSkipPopup_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventSkipPopup>_FirstTimeEventSkipPopup_
                         );
      if (value != (Object *)0x0) {
        pOVar3 = value + 1;
        pOVar3->klass = pOVar2;
        func_?(pOVar3,pOVar2);
        pOVar2 = pOVar3->klass;
        if (pOVar2 != (Object__Class *)0x0) {
          (pOVar2->_0).byval_arg.attrs = (undefined2)firstTimeEvent;
          (pOVar2->_0).byval_arg.type = firstTimeEvent._2_1_;
          (pOVar2->_0).byval_arg.field_0x7 = firstTimeEvent._3_1_;
          pIVar4 = &(pOVar2->_0).byval_arg;
          (pIVar4->data).typeHandle = (Il2CppMetadataTypeHandle)firstTimeActivatable;
          func_?(pIVar4,firstTimeActivatable);
          pUVar5 = (this->fields).uiStack;
          if (pUVar5 != (UIStack *)0x0) {
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pUVar5,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__FirstTimeElementActivator____c__DisplayClass15_0___SkipFirstTimeEvent_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar6,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
    else {
      pUVar5 = (this->fields).uiStack;
      if (pUVar5 != (UIStack *)0x0) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pUVar5,(MethodInfo *)0x0);
        if ((TypeInfo__FirstTimeElementActivator____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction_00 = TypeInfo__FirstTimeElementActivator____c->static_fields->__9__15_0;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__FirstTimeElementActivator____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__FirstTimeElementActivator____c->static_fields->__9;
          callbackFunction_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)object,
                     MethodInfo__FirstTimeElementActivator____c___SkipFirstTimeEvent_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__FirstTimeElementActivator____c->static_fields->__9__15_0 = callbackFunction_00;
          func_?(&TypeInfo__FirstTimeElementActivator____c->static_fields->__9__15_0,
                          callbackFunction_00);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar6,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                  (firstTimeEvent,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)firstTimeActivatable,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_Start
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVJoinState>);
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__FirstTimeElementActivator__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&MethodInfo__FirstTimeElementActivator__OnJoinStateChanged_MVJoinState_);
    func_?(&MethodInfo__FirstTimeElementActivator__OnStackChange__);
    func_?(&MethodInfo__FirstTimeElementActivator__OnXPRewarded__);
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  pAVar1 = MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0);
  this_01 = (UnityAction_1_System_Int32Enum_ *)
            func_?(TypeInfo__System__Action<MVJoinState>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeElementActivator__OnJoinStateChanged_MVJoinState_,
             (MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MVJoinState_ *)0x0;
  if (pDVar2 == (Delegate *)0x0) {
code_?:
    MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).uiStack;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__FirstTimeElementActivator__OnStackChange__,
               (MethodInfo *)0x0);
    if (this_00 == (UIStack *)0x0) goto code_?;
    UIStack::UIStack_SubscribeToStackChanges(this_00,(Action *)pNVar3,(MethodInfo *)0x0);
    this_02 = (EventHandler_1_Object_ *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__FirstTimeElementActivator__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
               ,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)this_02,(MethodInfo *)0x0);
    (this->fields).evaluateActivatableElements = 1;
    pAVar4 = TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__FirstTimeElementActivator__OnXPRewarded__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      TypeInfo__FirstTimeEventManager->static_fields->XPRewarded = (Action *)0x0;
code_?:
      func_?();
      return;
    }
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 != (Action *)0x0) {
      TypeInfo__FirstTimeEventManager->static_fields->XPRewarded = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 != (Action *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    pAVar1 = (Action_1_MVJoinState_ *)func_?();
    if (pAVar1 != (Action_1_MVJoinState_ *)0x0) goto code_?;
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UnRegisterActivatableElement(IActivatableFirstTimeUiElement) */

void Assembly-CSharp.dll::FirstTimeElementActivator::
     FirstTimeElementActivator_UnRegisterActivatableElement
               (FirstTimeElementActivator *this,
               IActivatableFirstTimeUiElement *firstTimeEventHandlerListener,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&TypeInfo__IActivatableFirstTimeUiElement);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).activatableUiElements;
  if (firstTimeEventHandlerListener != (IActivatableFirstTimeUiElement *)0x0) {
    key = func_?(0,TypeInfo__IActivatableFirstTimeUiElement,firstTimeEventHandlerListener);
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_ *)0x0)
    {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Remove
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FirstTimeElementActivator() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator__ctor
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dictionary__
            );
  ppDVar1 = &(this->fields).activatableUiElements;
  *ppDVar1 = (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_ *)
             this_00;
  func_?(ppDVar1,this_00);
  this_01 = (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__List__
            );
  ppLVar2 = &(this->fields).elementsToRemove;
  *ppLVar2 = this_01;
  func_?(ppLVar2,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

