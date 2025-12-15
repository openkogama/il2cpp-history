
/* Void EvaluateActivatableElements() */

void Assembly-CSharp.dll::FirstTimeElementActivator::
     FirstTimeElementActivator_EvaluateActivatableElements
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IActivatableFirstTimeUiElement);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStack_1 = (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  pDVar4 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).activatableUiElements;
  if (pDVar4 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    puStack_11 = (undefined1 *)(ulonglong)(uint)(pDVar4->fields)._version;
    uStack_12 = 2;
    uStack_13 = 0;
    uStack_14 = 0;
    uStack_15 = (ulonglong)puStack_11;
    KStack_16.key = 0;
    KStack_16._4_4_ = 0;
    KStack_16.value = (Object *)0x0;
    uStack_17._0_4_ = 2;
    uStack_17._4_4_ = 0;
    uStack_6 = 0;
    puStack_11 = (undefined1 *)&pDStack_18;
    pOVar19 = (Object *)0x0;
    pDStack_18 = pDVar4;
code_?:
    bVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
             ::UInt32,System::Object]::
             Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &pDStack_18,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__MoveNext__
                       );
    pOVar21 = KStack_16.value;
    uVar22 = KStack_16._0_8_;
    if (bVar20 != 0) {
      if (KStack_16.value == (Object *)0x0) goto code_?;
      pOVar23 = (KStack_16.value)->klass;
      uVar24 = 0;
      uVar25._0_1_ = (pOVar23->_1).rank;
      uVar25._1_1_ = (pOVar23->_1).minimumAlignment;
      if (uVar25 != 0) {
        do {
          if (pOVar23->interfaceOffsets[uVar24].interfaceType ==
              (Il2CppClass *)TypeInfo__IActivatableFirstTimeUiElement) {
            puVar26 = (undefined8 *)
                      ((longlong)&(pOVar23->vtable).Equals +
                      (longlong)(pOVar23->interfaceOffsets[uVar24].offset + 5) * 0x10);
            goto code_?;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar25);
      }
      puVar26 = (undefined8 *)
                FUN_?(KStack_16.value,TypeInfo__IActivatableFirstTimeUiElement,5);
code_?:
      cVar27 = (*(code *)*puVar26)();
      if (cVar27 == '\0') {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_In_rare_cases_when_entering_play,(MethodInfo *)0x0);
        this_00 = (List_1_System_UInt32Enum_ *)(this->fields).elementsToRemove;
        if (this_00 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__Add
                  (this_00,(UInt32Enum__Enum)uVar22,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
      }
      else {
        if (pOVar21 == (Object *)0x0) goto code_?;
        cVar27 = FUN_?(2,TypeInfo__IActivatableFirstTimeUiElement,pOVar21);
        if (cVar27 != '\0') {
          firstTimeEvent = FUN_?(6,TypeInfo__IActivatableFirstTimeUiElement,pOVar21);
          bVar20 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                             (firstTimeEvent,(MethodInfo *)0x0);
          if (bVar20 != 0) {
            if (pOVar19 != (Object *)0x0) {
              iVar28 = FUN_?(1,TypeInfo__IActivatableFirstTimeUiElement,pOVar21);
              iVar29 = FUN_?(1,TypeInfo__IActivatableFirstTimeUiElement,pOVar19);
              if (iVar28 <= iVar29) goto code_?;
            }
            pOVar19 = pOVar21;
          }
        }
      }
      goto code_?;
    }
    if ((pOVar19 == (Object *)0x0) ||
       (cVar27 = FUN_?(3,TypeInfo__IActivatableFirstTimeUiElement,pOVar19), cVar27 != '\0'))
    {
code_?:
      pLVar30 = (this->fields).elementsToRemove;
      if (pLVar30 != (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        puStack_11 = (undefined1 *)((ulonglong)(uint)(pLVar30->fields)._version << 0x20);
        uStack_13 = 0;
        uStack_2 = (longlong)puStack_11;
        uStack_3 = 0;
        uStack_6 = 0;
        puStack_11 = (undefined1 *)&pLStack_1;
        pLStack_1 = pLVar30;
        while (pLStack_1 != (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
          if (uStack_2._4_4_ != (pLStack_1->fields)._version) {
code_?:
            if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__MoveNext__
                 ->klass->field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (pLStack_1 == (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)
            goto code_?;
            if (uStack_2._4_4_ != (pLStack_1->fields)._version) goto code_?;
            uStack_2 = CONCAT44(uStack_2._4_4_,(pLStack_1->fields)._size + 1);
            uStack_3 = uStack_3 & 0xffffffff00000000;
            pLVar30 = (this->fields).elementsToRemove;
            if (pLVar30 != (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
              piVar31 = &(pLVar30->fields)._version;
              *piVar31 = *piVar31 + 1;
              (pLVar30->fields)._size = 0;
              return;
            }
            goto code_?;
          }
          lVar7 = (longlong)(int)(uint)uStack_2;
          if ((uint)(pLStack_1->fields)._size <= (uint)uStack_2) goto code_?;
          pFVar32 = (pLStack_1->fields)._items;
          if (pFVar32 == (FirstTimeEvent__Enum__Array *)0x0) goto code_?;
          if ((uint)pFVar32->max_length <= (uint)uStack_2) goto code_?;
          uStack_3 = CONCAT44(uStack_3._4_4_,pFVar32->vector[lVar7]);
          uStack_2 = CONCAT44(uStack_2._4_4_,(uint)uStack_2 + 1);
          this_01 = (this->fields).activatableUiElements;
          if (this_01 ==
              (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_ *
              )0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Remove
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,pFVar32->vector[lVar7]
                     ,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                    );
        }
        goto code_?;
      }
    }
    else {
      FUN_?(4,TypeInfo__IActivatableFirstTimeUiElement,pOVar19);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar33 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar33 != (MVGameControllerBase *)0x0) &&
         (pMVar34 = (pMVar33->fields).game, pMVar34 != (MVNetworkGame *)0x0)) {
        pGVar35 = (pMVar34->fields).GameEventManager;
        uVar36 = FUN_?(0,TypeInfo__IActivatableFirstTimeUiElement,pOVar19);
        if (pGVar35 != (GameEventManager *)0x0) {
          if ((pGVar35->fields).OnFirstTimeEvent !=
              (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
            pAVar37 = (pGVar35->fields).OnFirstTimeEvent;
            (*(pAVar37->fields)._._.invoke_impl)
                      ((pAVar37->fields)._._.method_code,uVar36,(pAVar37->fields)._._.method);
          }
          goto code_?;
        }
      }
    }
  }
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
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IActivatableFirstTimeUiElement);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStack_1 = (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  pDVar4 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).activatableUiElements;
  if (pDVar4 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    puStack_11 = (undefined1 *)(ulonglong)(uint)(pDVar4->fields)._version;
    uStack_12 = 2;
    uStack_13 = 0;
    uStack_14 = 0;
    uStack_15 = (ulonglong)puStack_11;
    KStack_16.key = 0;
    KStack_16._4_4_ = 0;
    KStack_16.value = (Object *)0x0;
    uStack_17._0_4_ = 2;
    uStack_17._4_4_ = 0;
    uStack_6 = 0;
    puStack_11 = (undefined1 *)&pDStack_18;
    pOVar19 = (Object *)0x0;
    pDStack_18 = pDVar4;
code_?:
    bVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
             ::UInt32,System::Object]::
             Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &pDStack_18,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__MoveNext__
                       );
    pOVar21 = KStack_16.value;
    uVar22 = KStack_16._0_8_;
    if (bVar20 != 0) {
      if (KStack_16.value == (Object *)0x0) goto code_?;
      pOVar23 = (KStack_16.value)->klass;
      uVar24 = 0;
      uVar25._0_1_ = (pOVar23->_1).rank;
      uVar25._1_1_ = (pOVar23->_1).minimumAlignment;
      if (uVar25 != 0) {
        do {
          if (pOVar23->interfaceOffsets[uVar24].interfaceType ==
              (Il2CppClass *)TypeInfo__IActivatableFirstTimeUiElement) {
            puVar26 = (undefined8 *)
                      ((longlong)&(pOVar23->vtable).Equals +
                      (longlong)(pOVar23->interfaceOffsets[uVar24].offset + 5) * 0x10);
            goto code_?;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar25);
      }
      puVar26 = (undefined8 *)
                FUN_?(KStack_16.value,TypeInfo__IActivatableFirstTimeUiElement,5);
code_?:
      cVar27 = (*(code *)*puVar26)();
      if (cVar27 == '\0') {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_In_rare_cases_when_entering_play,(MethodInfo *)0x0);
        this_00 = (List_1_System_UInt32Enum_ *)(this->fields).elementsToRemove;
        if (this_00 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__Add
                  (this_00,(UInt32Enum__Enum)uVar22,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
      }
      else {
        if (pOVar21 == (Object *)0x0) goto code_?;
        cVar27 = FUN_?(2,TypeInfo__IActivatableFirstTimeUiElement,pOVar21);
        if (cVar27 != '\0') {
          firstTimeEvent = FUN_?(6,TypeInfo__IActivatableFirstTimeUiElement,pOVar21);
          bVar20 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                             (firstTimeEvent,(MethodInfo *)0x0);
          if (bVar20 != 0) {
            if (pOVar19 != (Object *)0x0) {
              iVar28 = FUN_?(1,TypeInfo__IActivatableFirstTimeUiElement,pOVar21);
              iVar29 = FUN_?(1,TypeInfo__IActivatableFirstTimeUiElement,pOVar19);
              if (iVar28 <= iVar29) goto code_?;
            }
            pOVar19 = pOVar21;
          }
        }
      }
      goto code_?;
    }
    if ((pOVar19 == (Object *)0x0) ||
       (cVar27 = FUN_?(3,TypeInfo__IActivatableFirstTimeUiElement,pOVar19), cVar27 != '\0'))
    {
code_?:
      pLVar30 = (this->fields).elementsToRemove;
      if (pLVar30 != (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        puStack_11 = (undefined1 *)((ulonglong)(uint)(pLVar30->fields)._version << 0x20);
        uStack_13 = 0;
        uStack_2 = (longlong)puStack_11;
        uStack_3 = 0;
        uStack_6 = 0;
        puStack_11 = (undefined1 *)&pLStack_1;
        pLStack_1 = pLVar30;
        while (pLStack_1 != (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
          if (uStack_2._4_4_ != (pLStack_1->fields)._version) {
code_?:
            if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__MoveNext__
                 ->klass->field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (pLStack_1 == (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)
            goto code_?;
            if (uStack_2._4_4_ != (pLStack_1->fields)._version) goto code_?;
            uStack_2 = CONCAT44(uStack_2._4_4_,(pLStack_1->fields)._size + 1);
            uStack_3 = uStack_3 & 0xffffffff00000000;
            pLVar30 = (this->fields).elementsToRemove;
            if (pLVar30 != (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
              piVar31 = &(pLVar30->fields)._version;
              *piVar31 = *piVar31 + 1;
              (pLVar30->fields)._size = 0;
              return;
            }
            goto code_?;
          }
          lVar7 = (longlong)(int)(uint)uStack_2;
          if ((uint)(pLStack_1->fields)._size <= (uint)uStack_2) goto code_?;
          pFVar32 = (pLStack_1->fields)._items;
          if (pFVar32 == (FirstTimeEvent__Enum__Array *)0x0) goto code_?;
          if ((uint)pFVar32->max_length <= (uint)uStack_2) goto code_?;
          uStack_3 = CONCAT44(uStack_3._4_4_,pFVar32->vector[lVar7]);
          uStack_2 = CONCAT44(uStack_2._4_4_,(uint)uStack_2 + 1);
          this_01 = (this->fields).activatableUiElements;
          if (this_01 ==
              (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_ *
              )0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Remove
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,pFVar32->vector[lVar7]
                     ,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                    );
        }
        goto code_?;
      }
    }
    else {
      FUN_?(4,TypeInfo__IActivatableFirstTimeUiElement,pOVar19);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar33 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar33 != (MVGameControllerBase *)0x0) &&
         (pMVar34 = (pMVar33->fields).game, pMVar34 != (MVNetworkGame *)0x0)) {
        pGVar35 = (pMVar34->fields).GameEventManager;
        uVar36 = FUN_?(0,TypeInfo__IActivatableFirstTimeUiElement,pOVar19);
        if (pGVar35 != (GameEventManager *)0x0) {
          if ((pGVar35->fields).OnFirstTimeEvent !=
              (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
            pAVar37 = (pGVar35->fields).OnFirstTimeEvent;
            (*(pAVar37->fields)._._.invoke_impl)
                      ((pAVar37->fields)._._.method_code,uVar36,(pAVar37->fields)._._.method);
          }
          goto code_?;
        }
      }
    }
  }
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
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_OnDestroy
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeElementActivator__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeElementActivator__OnStackChange__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeElementActivator__OnXPRewarded__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__FirstTimeElementActivator__OnXPRewarded__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->XPRewarded = (Action *)0x0;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__FirstTimeEventManager->static_fields->XPRewarded = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&TypeInfo__FirstTimeEventManager->static_fields->XPRewarded >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  this_00 = (UnityAction_2_System_Object_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeElementActivator__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
             ,(MethodInfo *)0x0);
  FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
            ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)this_00,(MethodInfo *)0x0);
  pUVar9 = (this->fields).uiStack;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__FirstTimeElementActivator__OnStackChange__,
             (MethodInfo *)0x0);
  if (pUVar9 == (UIStack *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)(pUVar9->fields).uiStackChangedPublisher,(Delegate *)pNVar2,
                      (MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    (pUVar9->fields).uiStackChangedPublisher = (Action *)0x0;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pUVar9->fields).uiStackChangedPublisher = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(pUVar9->fields).uiStackChangedPublisher >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void OnJoinStateChanged(MVJoinState) */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_OnJoinStateChanged
               (FirstTimeElementActivator *this,MVJoinState__Enum mvJoinState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVJoinState>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeElementActivator__OnJoinStateChanged_MVJoinState_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (mvJoinState == MVJoinState__Enum_Playing) {
    bVar1 = cRam_? == '\0';
    (this->fields).isReady = 1;
    if (bVar1) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar4 = (pMVar2->fields).onJoinStateChanged;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(TypeInfo__System__Action<MVJoinState>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeElementActivator__OnJoinStateChanged_MVJoinState_,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar6 = TypeInfo__System__Action<MVJoinState>;
    pAVar4 = (Action_1_MVJoinState_ *)0x0;
    if (pDVar5 != (Delegate *)0x0) {
      pAVar4 = (Action_1_MVJoinState_ *)FUN_?(pDVar5);
      if (pAVar4 == (Action_1_MVJoinState_ *)0x0) {
        FUN_?(pDVar5,pAVar6);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar4,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnXPRewarded() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_OnXPRewarded
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Great_job__XP_rewarded_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields).gameMode == 1) {
    return;
  }
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = StringLiteral_Great_job__XP_rewarded_;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,2,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_8[0] = 1;
  pOVar3 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (this_01 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar3,(Object *)value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar4 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_01,2,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  value_00 = (Object *)FUN_?(TypeInfo__NotificationLifetime,&stack0x00000018);
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar3,value_00,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
      if (this_00 == (NotificationsManager *)0x0) goto code_?;
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this_00,NotificationType__Enum_FirstTimeXPRewarded,
                 (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RegisterActivatableElement(IActivatableFirstTimeUiElement) */

void Assembly-CSharp.dll::FirstTimeElementActivator::
     FirstTimeElementActivator_RegisterActivatableElement
               (FirstTimeElementActivator *this,
               IActivatableFirstTimeUiElement *firstTimeEventHandlerListener,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Add_MV__WorldObject__MetaData__FirstTimeEvent__IActivatableFirstTimeUiElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__ContainsKey_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IActivatableFirstTimeUiElement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
            (this->fields).activatableUiElements;
  if (firstTimeEventHandlerListener != (IActivatableFirstTimeUiElement *)0x0) {
    IVar1 = FUN_?(0,TypeInfo__IActivatableFirstTimeUiElement,firstTimeEventHandlerListener);
    if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (this_00,IVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__ContainsKey_MV__WorldObject__MetaData__FirstTimeEvent_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        this_01 = (this->fields).activatableUiElements;
        IVar1 = FUN_?(0,TypeInfo__IActivatableFirstTimeUiElement,
                              firstTimeEventHandlerListener);
        if (this_01 ==
            (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_ *)
            0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,IVar1,
                   (Object *)firstTimeEventHandlerListener,CONCAT31((int3)((uint)in_R9D >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Add_MV__WorldObject__MetaData__FirstTimeEvent__IActivatableFirstTimeUiElement_
                   ->klass->rgctx_data[0x22].method);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SkipFirstTimeEvent(FirstTimeEvent, FirstTimeActivatableElementBase) */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_SkipFirstTimeEvent
               (FirstTimeElementActivator *this,FirstTimeEvent__Enum firstTimeEvent,
               FirstTimeActivatableElementBase *firstTimeActivatable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  FirstTimeEventSkipPopup_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventSkipPopup>_FirstTimeEventSkipPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeElementActivator____c___SkipFirstTimeEvent_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeElementActivator____c__DisplayClass15_0___SkipFirstTimeEvent_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeElementActivator____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeElementActivator____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if ((pFVar1 != (FirstTimeState *)0x0) &&
     (this_00 = (pFVar1->fields).bitArray, this_00 != (BitArray *)0x0)) {
    if (((this_00->fields).m_length < 1) ||
       (bVar2 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (this_00,0,(MethodInfo *)0x0), bVar2 == 0)) {
      object_00 = (Object *)
                  FUN_?(TypeInfo__FirstTimeElementActivator____c__DisplayClass15_0);
      original = (this->fields).firstTimeSkipPopup;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar3 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          FirstTimeEventSkipPopup_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventSkipPopup>_FirstTimeEventSkipPopup_
                         );
      if (object_00 != (Object *)0x0) {
        object_00[1].klass = pOVar3;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        iVar9 = iRam_?;
        pOVar3 = object_00[1].klass;
        if (pOVar3 != (Object__Class *)0x0) {
          (pOVar3->_0).byval_arg.attrs = (short)firstTimeEvent;
          (pOVar3->_0).byval_arg.type = (char)((uint)firstTimeEvent >> 0x10);
          (pOVar3->_0).byval_arg.field_0xb = (char)((uint)firstTimeEvent >> 0x18);
          (pOVar3->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)firstTimeActivatable;
          if (iVar9 != 0) {
            uVar4 = (uint)((ulonglong)&(pOVar3->_0).byval_arg >> 0xc);
            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          pUVar10 = (this->fields).uiStack;
          if (pUVar10 != (UIStack *)0x0) {
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pUVar10,(MethodInfo *)0x0);
            this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_02,object_00,
                       MethodInfo__FirstTimeElementActivator____c__DisplayClass15_0___SkipFirstTimeEvent_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar11,(BaseEventData *)0x0,this_02,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
    else {
      pUVar10 = (this->fields).uiStack;
      if (pUVar10 != (UIStack *)0x0) {
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pUVar10,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__FirstTimeElementActivator____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FirstTimeElementActivator____c);
        }
        this_01 = TypeInfo__FirstTimeElementActivator____c->static_fields->__9__15_0;
        if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__FirstTimeElementActivator____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__FirstTimeElementActivator____c);
          }
          object = TypeInfo__FirstTimeElementActivator____c->static_fields->__9;
          this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                     MethodInfo__FirstTimeElementActivator____c___SkipFirstTimeEvent_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__FirstTimeElementActivator____c->static_fields->__9__15_0 = this_01;
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)
                            &TypeInfo__FirstTimeElementActivator____c->static_fields->__9__15_0 >>
                           0xc);
            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar11,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                  (firstTimeEvent,(MethodInfo *)0x0);
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
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)firstTimeActivatable,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_Start
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVJoinState>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeElementActivator__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeElementActivator__OnJoinStateChanged_MVJoinState_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeElementActivator__OnStackChange__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeElementActivator__OnXPRewarded__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pAVar2 = (pMVar1->fields).onJoinStateChanged;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(TypeInfo__System__Action<MVJoinState>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__FirstTimeElementActivator__OnJoinStateChanged_MVJoinState_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar4 = TypeInfo__System__Action<MVJoinState>;
    pAVar5 = (Action *)0x0;
    pAVar2 = (Action_1_MVJoinState_ *)pAVar5;
    if ((pDVar3 != (Delegate *)0x0) &&
       (pAVar2 = (Action_1_MVJoinState_ *)FUN_?(pDVar3),
       pAVar2 == (Action_1_MVJoinState_ *)0x0)) {
      FUN_?(pDVar3,pAVar4);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar2,(MethodInfo *)0x0);
    this_00 = (this->fields).uiStack;
    pNVar7 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar7,(Object *)this,MethodInfo__FirstTimeElementActivator__OnStackChange__,
               (MethodInfo *)0x0);
    if (this_00 != (UIStack *)0x0) {
      UIStack::UIStack_SubscribeToStackChanges(this_00,(Action *)pNVar7,(MethodInfo *)0x0);
      this_02 = (UnityAction_2_System_Object_System_Int32_ *)
                FUN_?(
                             TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
      UnityAction_2_System_Object_System_Int32___ctor
                (this_02,(Object *)this,
                 MethodInfo__FirstTimeElementActivator__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 ,(MethodInfo *)0x0);
      FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
                ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                  *)this_02,(MethodInfo *)0x0);
      (this->fields).evaluateActivatableElements = 1;
      pAVar8 = TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
      pNVar7 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar7,(Object *)this,MethodInfo__FirstTimeElementActivator__OnXPRewarded__,
                 (MethodInfo *)0x0);
      pAVar8 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar8,(Delegate *)pNVar7,(MethodInfo *)0x0);
      if (pAVar8 == (Action *)0x0) {
        TypeInfo__FirstTimeEventManager->static_fields->XPRewarded = (Action *)0x0;
      }
      else {
        pAVar9 = pAVar5;
        if (pAVar8->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar8;
        }
        if (pAVar9 == (Action *)0x0) {
          FUN_?(pAVar8,TypeInfo__System__Action);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TypeInfo__FirstTimeEventManager->static_fields->XPRewarded = pAVar9;
        if (pAVar8->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar8;
        }
        if (pAVar5 == (Action *)0x0) {
          FUN_?(pAVar8);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&TypeInfo__FirstTimeEventManager->static_fields->XPRewarded >>
                       0xc);
        puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar12 = *puVar11;
          LOCK();
          uVar13 = *puVar11;
          if (uVar12 == uVar13) {
            *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (uVar12 != uVar13);
      }
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IActivatableFirstTimeUiElement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).activatableUiElements;
  if ((firstTimeEventHandlerListener == (IActivatableFirstTimeUiElement *)0x0) ||
     (uVar2 = FUN_?(0,TypeInfo__IActivatableFirstTimeUiElement,
                             firstTimeEventHandlerListener),
     pMVar3 = 
     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
     , pDVar1 == (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_
                  *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = (ulonglong)uVar2;
  if ((pDVar1->fields)._buckets != (Int32__Array *)0x0) {
    pIVar6 = (pDVar1->fields)._comparer;
    if (pIVar6 != (IEqualityComparer_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
      pvVar7 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
        pvVar7 = (void *)FUN_?(pvVar7);
      }
      uVar2 = FUN_?(1,pvVar7,pIVar6,uVar5);
    }
    pIVar8 = (pDVar1->fields)._buckets;
    if (pIVar8 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar9 = (int)(uVar2 & 0x7fffffff) % (int)pIVar8->max_length;
    if ((uint)pIVar8->max_length <= uVar9) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar10 = pIVar8->vector[(int)uVar9] - 1;
    uVar11 = 0xffffffff;
    while (uVar12 = uVar10, -1 < (int)uVar12) {
      pDVar13 = (pDVar1->fields)._entries;
      if (pDVar13 == (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement___Array
                     *)0x0) goto code_?;
      if ((uint)pDVar13->max_length <= uVar12) goto code_?;
      if (pDVar13->vector[(int)uVar12].hashCode == (uVar2 & 0x7fffffff)) {
        pIVar14 = pMVar3->klass->rgctx_data;
        if ((pDVar1->fields)._comparer ==
            (IEqualityComparer_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
          pEVar15 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::
                    Int32Enum]::EqualityComparer_1_System_Int32Enum__get_Default(pIVar14[3].method);
          if (pEVar15 == (EqualityComparer_1_System_Int32Enum_ *)0x0) goto code_?;
          cVar16 = (*(pEVar15->klass->vtable).__unknown.methodPtr)
                             (pEVar15,(ulonglong)(uint)pDVar13->vector[(int)uVar12].key,uVar5,
                              (pEVar15->klass->vtable).__unknown.method);
        }
        else {
          pvVar7 = pIVar14[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
            FUN_?(pvVar7);
          }
          cVar16 = FUN_?();
        }
        if (cVar16 != '\0') {
          if ((int)uVar11 < 0) {
            pIVar8 = (pDVar1->fields)._buckets;
            if (pIVar8 == (Int32__Array *)0x0) goto code_?;
            if ((uint)pIVar8->max_length <= uVar9) goto code_?;
            pIVar8->vector[(int)uVar9] = pDVar13->vector[(int)uVar12].next + 1;
          }
          else {
            pDVar17 = (pDVar1->fields)._entries;
            if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement___Array
                           *)0x0) goto code_?;
            if ((uint)pDVar17->max_length <= uVar11) goto code_?;
            pDVar17->vector[(int)uVar11].next = pDVar13->vector[(int)uVar12].next;
          }
          pDVar13->vector[(int)uVar12].hashCode = -1;
          pDVar13->vector[(int)uVar12].next = (pDVar1->fields)._freeList;
          pDVar13->vector[(int)uVar12].value = (IActivatableFirstTimeUiElement *)0x0;
          piVar18 = &(pDVar1->fields)._freeCount;
          *piVar18 = *piVar18 + 1;
          piVar18 = &(pDVar1->fields)._version;
          *piVar18 = *piVar18 + 1;
          (pDVar1->fields)._freeList = uVar12;
          return;
        }
      }
      uVar11 = uVar12;
      uVar10 = pDVar13->vector[(int)uVar12].next;
    }
  }
  return;
}


/* FirstTimeElementActivator() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator__ctor
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).activatableUiElements =
       (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_ *)
       this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).activatableUiElements >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).elementsToRemove = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).elementsToRemove >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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

