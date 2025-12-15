
/* Void RegisterShortcutKey(KogamaControls, KeyState, UnityAction) */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager_RegisterShortcutKey
               (ShortcutManager *this,KogamaControls__Enum kogamaControl,KeyState__Enum keyState,
               UnityAction *callback,MethodInfo *method)

{
  pUVar1 = callback;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Add_KogamaControls__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ShortcutManager__ShortcutKey);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Push_ShortcutManager__ShortcutKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Stack__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar2 = FUN_?(TypeInfo__ShortcutManager__ShortcutKey);
  bVar3 = iRam_? != 0;
  *(KogamaControls__Enum *)(lVar2 + 0x10) = kogamaControl;
  *(KeyState__Enum *)(lVar2 + 0x14) = keyState;
  *(UnityAction **)(lVar2 + 0x18) = callback;
  if (bVar3) {
    uVar4 = (uint)(lVar2 + 0x18U >> 0xc);
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
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).shortCutKeys;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,kogamaControl,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                       ->klass->rgctx_data[0x21].method);
    if (iVar8 < 0) {
      pDVar9 = (this->fields).shortCutKeys;
      this_01 = (Stack_1_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>
                             );
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
      Stack_1_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Stack__
                );
      if (pDVar9 == (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,kogamaControl,
                 (Object *)this_01,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pUVar1 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Add_KogamaControls__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>_
                 ->klass->rgctx_data[0x22].method);
    }
    pDVar9 = (this->fields).shortCutKeys;
    if ((pDVar9 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) &&
       (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,kogamaControl,
                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                            ), pOVar10 != (Object *)0x0)) {
      pOVar11 = pOVar10[1].klass;
      if (pOVar11 == (Object__Class *)0x0) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar4 = *(uint *)&pOVar10[1].monitor;
      if (uVar4 < *(uint *)&(pOVar11->_0).namespaze) {
        FUN_?(pOVar11,(longlong)(int)uVar4,lVar2);
        piVar13 = (int *)((longlong)&pOVar10[1].monitor + 4);
        *piVar13 = *piVar13 + 1;
        *(uint *)&pOVar10[1].monitor = uVar4 + 1;
        return;
      }
      pOVar11 = pOVar10[1].klass;
      if (pOVar11 != (Object__Class *)0x0) {
        if ((pOVar11->_0).namespaze == (char *)0x0) {
          newSize = 4;
        }
        else {
          newSize = *(int *)&(pOVar11->_0).namespaze * 2;
        }
        mscorlib.dll::System::Array::Array_Resize_105
                  ((BindingRestrictions_TestBuilder_AndNode__Array **)(pOVar10 + 1),newSize,
                   (MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Push_ShortcutManager__ShortcutKey_
                    ->klass->rgctx_data[0xc].method)->klass->rgctx_data[0xd].method);
        if (pOVar10[1].klass != (Object__Class *)0x0) {
          FUN_?(pOVar10[1].klass,(longlong)*(int *)&pOVar10[1].monitor,lVar2);
          piVar13 = (int *)((longlong)&pOVar10[1].monitor + 4);
          *piVar13 = *piVar13 + 1;
          *(int *)&pOVar10[1].monitor = *(int *)&pOVar10[1].monitor + 1;
          return;
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UnRegisterShortcutKey(KogamaControls, KeyState) */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager_UnRegisterShortcutKey
               (ShortcutManager *this,KogamaControls__Enum kogamaControl,KeyState__Enum keyState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,CONCAT44(in_register_00000014,kogamaControl),
                  CONCAT44(in_register_00000084,keyState));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Remove_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KogamaControls);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Pop__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Couldn_t_find_shortcut_key__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).shortCutKeys;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,kogamaControl,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      EStack_2.klass = (Enum__Class *)TypeInfo__KogamaControls;
      EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
      pSStack_3 = (String *)CONCAT44(pSStack_3._4_4_,kogamaControl);
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Couldn_t_find_shortcut_key__,pSVar4,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
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
      pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar5 != (ILogger_1 *)0x0) {
        pSStack_3 = pSVar4;
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,0);
        return;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pDVar7 = (this->fields).shortCutKeys;
    if (pDVar7 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
      this_01 = (Stack_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,kogamaControl,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                          );
      if (this_01 != (Stack_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
        Stack_1_System_Object__Pop
                  (this_01,
                   MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Pop__
                  );
        pDVar7 = (this->fields).shortCutKeys;
        if (pDVar7 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,kogamaControl,
                              MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                             );
          if (pOVar8 != (Object *)0x0) {
            if (*(int *)&pOVar8[1].monitor == 0) {
              pDVar7 = (this->fields).shortCutKeys;
              if (pDVar7 == (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Remove
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,kogamaControl,
                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Remove_KogamaControls_
                        );
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager_Update
               (ShortcutManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<KogamaControls>__Contains_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  SStack_1._stack = (Stack_1_System_Object_ *)0x0;
  SStack_1._version = 0;
  SStack_1._index = 0;
  SStack_1._currentElement = (Object *)0x0;
  pDStack_2 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).shortCutKeys;
  if (pDStack_2 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pDStack_2 >> 0xc);
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
  uStack_8 = (ulonglong)(uint)(pDStack_2->fields)._version;
  uStack_9 = 2;
  uStack_10 = 0;
  uStack_11 = 0;
  aDStack_12[0]._version = (undefined4)uStack_8;
  aDStack_12[0]._index = uStack_8._4_4_;
  aDStack_12[0]._current.key = 0;
  aDStack_12[0]._current._4_4_ = 0;
  aDStack_12[0]._current.value = (Object *)0x0;
  aDStack_12[0]._getEnumeratorRetType = 2;
  aDStack_12[0]._36_4_ = 0;
  uStack_13 = 0;
  pDStack_14 = aDStack_12;
  aDStack_12[0]._dictionary = pDStack_2;
code_?:
  bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          UInt32,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                    (aDStack_12,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__MoveNext__
                    );
  pDVar16 = (Dictionary_2_System_UInt32_System_Object_ *)aDStack_12[0]._current.value;
  if (bVar15 == 0) {
    return;
  }
  item = (Int32Enum__Enum)aDStack_12[0]._current._0_8_;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar17 = TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed;
  if (pMVar17 == (MVInputWrapper_InputSuppression *)0x0) goto code_?;
  cVar18 = (*(pMVar17->klass->vtable).get_IsSuppressed.methodPtr)
                     (pMVar17,(pMVar17->klass->vtable).get_IsSuppressed.method);
  if (cVar18 == '\0') {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar15 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
    if (bVar15 != 0) goto code_?;
    goto code_?;
  }
code_?:
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).alwaysActiveControls;
  if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
  goto code_?;
code_?:
  bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
          HashSet_1_System_Int32Enum__Contains
                    (this_00,item,
                     MethodInfo__System__Collections__Generic__HashSet<KogamaControls>__Contains_KogamaControls_
                    );
  if (bVar15 != 0) {
code_?:
    if (pDVar16 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      uStack_8 = 0;
      uStack_10 = 0;
      pDStack_2 = pDVar16;
      func_?(&pDStack_2);
      SStack_1._version = *(undefined4 *)((longlong)&(pDVar16->fields)._entries + 4);
      uStack_8 = CONCAT44(0xfffffffe,SStack_1._version);
      uStack_10 = 0;
      SStack_1._stack = (Stack_1_System_Object_ *)pDStack_2;
      SStack_1._index = 0xfffffffe;
      SStack_1._currentElement = (Object *)0x0;
      uStack_19 = 0;
      pSStack_20 = &SStack_1;
code_?:
      do {
        bVar15 = mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
                Stack_1_T_Enumerator_System_Object__MoveNext
                          (&SStack_1,
                           MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__MoveNext__
                          );
        pOVar21 = SStack_1._currentElement;
        if (bVar15 == 0) goto code_?;
        pMVar22 = 
        MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__get_Current__
        ;
        if ((longlong)SStack_1._8_8_ < 0) goto code_?;
        if (SStack_1._currentElement == (Object *)0x0) goto code_?;
        iVar23 = *(int *)((longlong)&SStack_1._currentElement[1].klass + 4);
        if (iVar23 == 0) {
          KVar24 = *(KogamaControls__Enum *)&SStack_1._currentElement[1].klass;
          if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar15 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KVar24,(MethodInfo *)0x0);
        }
        else if (iVar23 == 1) {
          KVar24 = *(KogamaControls__Enum *)&SStack_1._currentElement[1].klass;
          if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar15 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown(KVar24,(MethodInfo *)0x0);
        }
        else {
          if (iVar23 != 2) goto code_?;
          KVar24 = *(KogamaControls__Enum *)&SStack_1._currentElement[1].klass;
          if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar15 = MVInputWrapper::MVInputWrapper_GetBooleanControl(KVar24,(MethodInfo *)0x0);
        }
      } while (bVar15 == 0);
      pMVar22 = (MethodInfo *)pOVar21[1].monitor;
      if (pMVar22 != (MethodInfo *)0x0) {
        (*(code *)pMVar22->name)((pMVar22->field8_0x40).genericMethod,pMVar22->return_type);
code_?:
        SStack_1._index = 0xffffffff;
        goto code_?;
      }
      FUN_?();
code_?:
      FUN_?();
code_?:
      lVar25 = func_?(pMVar22->klass);
      uVar26 = func_?(*(undefined8 *)(lVar25 + 0xc0),4);
      FUN_?(&SStack_1,uVar26);
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  goto code_?;
}


/* ShortcutManager() */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager__ctor
               (ShortcutManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<KogamaControls>__Add_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<KogamaControls>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<KogamaControls>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).shortCutKeys =
       (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).shortCutKeys >> 0xc);
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
  this_01 = (HashSet_1_System_Int32Enum_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<KogamaControls>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<KogamaControls>__HashSet__);
  if (this_01 == (HashSet_1_System_Int32Enum_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum__AddIfNotPresent
            (this_01,0xf,
             MethodInfo__System__Collections__Generic__HashSet<KogamaControls>__Add_KogamaControls_
             ->klass->rgctx_data[0x15].method);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum__AddIfNotPresent
            (this_01,0x2a,
             MethodInfo__System__Collections__Generic__HashSet<KogamaControls>__Add_KogamaControls_
             ->klass->rgctx_data[0x15].method);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum__AddIfNotPresent
            (this_01,0x29,
             MethodInfo__System__Collections__Generic__HashSet<KogamaControls>__Add_KogamaControls_
             ->klass->rgctx_data[0x15].method);
  bVar1 = iRam_? != 0;
  (this->fields).alwaysActiveControls = (HashSet_1_KogamaControls_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).alwaysActiveControls >> 0xc);
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

