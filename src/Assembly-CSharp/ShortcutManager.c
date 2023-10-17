
/* Void RegisterShortcutKey(KogamaControls, KeyState, UnityAction) */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager_RegisterShortcutKey
               (ShortcutManager *this,KogamaControls__Enum kogamaControl,KeyState__Enum keyState,
               UnityAction *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Add_KogamaControls__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                   );
    func_?(&TypeInfo__ShortcutManager__ShortcutKey);
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Push_ShortcutManager__ShortcutKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Stack__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__ShortcutManager__ShortcutKey);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)keyState;
    value[2].klass = (Object__Class *)callback;
    value[1].klass = (Object__Class *)kogamaControl;
    func_?(value + 2,callback);
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).shortCutKeys;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)kogamaControl,
                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                        );
      if (bVar1 == 0) {
        this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).shortCutKeys;
        pSVar2 = (Stack_1_System_Object_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>
                                );
        if (pSVar2 == (Stack_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
        Stack_1_System_Object___ctor
                  (pSVar2,
                   MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Stack__
                  );
        if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)kogamaControl,(Object *)pSVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Add_KogamaControls__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>_
                  );
      }
      this_02 = (this->fields).shortCutKeys;
      if (this_02 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
        pSVar2 = (Stack_1_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,kogamaControl,
                            MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                           );
        if (pSVar2 != (Stack_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
          Stack_1_System_Object__Push
                    (pSVar2,value,
                     MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Push_ShortcutManager__ShortcutKey_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnRegisterShortcutKey(KogamaControls, KeyState) */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager_UnRegisterShortcutKey
               (ShortcutManager *this,KogamaControls__Enum kogamaControl,KeyState__Enum keyState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Remove_KogamaControls_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                   );
    func_?(&TypeInfo__KogamaControls);
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Pop__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__get_Count__
                   );
    func_?(&StringLiteral_Couldn_t_find_shortcut_key__);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).shortCutKeys;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)kogamaControl,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                      );
    if (bVar1 == 0) {
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Couldn_t_find_shortcut_key__,pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return;
    }
    pDVar3 = (this->fields).shortCutKeys;
    if (pDVar3 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
      this_01 = (Stack_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,kogamaControl,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                          );
      if (this_01 != (Stack_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
        Stack_1_System_Object__Pop
                  (this_01,
                   MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Pop__
                  );
        pDVar3 = (this->fields).shortCutKeys;
        if (pDVar3 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,kogamaControl,
                              MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                             );
          if (pOVar4 != (Object *)0x0) {
            if (pOVar4[1].monitor == (MonitorData *)0x0) {
              pDVar3 = (this->fields).shortCutKeys;
              if (pDVar3 == (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Remove
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,kogamaControl,
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager_Update
               (ShortcutManager *this,MethodInfo *method)

{
  pIStack_1._0_1_ = 0xff;
  pIStack_1._1_3_ = 0xffffff;
  p_Stack_c = (Il2CppMetadataTypeHandle)&DAT_?;
  pIStack_2 = (Il2CppGenericClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_2;
  pIStack_3 = (Il2CppClass *)&stack0xffffff84;
  pIVar4 = (Il2CppClass *)&stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Value__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__GetEnumerator__
                   );
    cRam_? = '\x01';
    pIVar4 = pIStack_3;
  }
  pIStack_3 = pIVar4;
  SStack_5._stack = (Stack_1_System_Object_ *)0x0;
  SStack_5._version = 0;
  SStack_5._index = 0;
  SStack_5._currentElement = (Object *)0x0;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar6 = MVInputWrapper::MVInputWrapper_get_IsShortcutKeysSuppressed((MethodInfo *)0x0);
  if (bVar6 == 0) {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).shortCutKeys;
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffa8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__GetEnumerator__
                       );
    _Stack_28.dummy = (void *)0x0;
    method_00 = (MethodInfo *)(pDVar8->_current).key;
    uVar9 = *(ulonglong *)&(pDVar8->_current).value;
    pOStack_10 = (Object *)&stack0xffffff90;
    pIStack_1 = (Il2CppInteropData *)0x0;
    while( true ) {
      this_01 = (Stack_1_System_Object_ *)uVar9;
      pIStack_1._0_1_ = 1;
      bVar6 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                         &stack0xffffff90,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__MoveNext__
                        );
      if (bVar6 == 0) break;
      if (this_01 == (Stack_1_System_Object_ *)0x0) goto code_?;
      pSVar11 = mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
               Stack_1_System_Object__GetEnumerator
                         (&SStack_12,this_01,
                          MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__GetEnumerator__
                         );
      _Stack_30.dummy = (void *)0x0;
      SStack_5._stack = pSVar11->_stack;
      SStack_5._version = pSVar11->_version;
      SStack_5._index = pSVar11->_index;
      SStack_5._currentElement = pSVar11->_currentElement;
      pIStack_1._0_1_ = 3;
      pSStack_13 = &SStack_5;
code_?:
      do {
        pIVar4 = (Il2CppClass *)&SStack_5;
        method_00 = (MethodInfo *)&UNK_?;
        bVar6 = mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
                Stack_1_T_Enumerator_System_Object__MoveNext
                          ((Stack_1_T_Enumerator_System_Object_ *)pIVar4,
                           MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__MoveNext__
                          );
        if (bVar6 == 0) goto code_?;
        pOVar14 = mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
                 Stack_1_T_Enumerator_System_Object__get_Current
                           (&SStack_5,
                            MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__get_Current__
                           );
        if (pOVar14 == (Object *)0x0) goto code_?;
        pMVar15 = pOVar14[1].monitor;
        if (pMVar15 == (MonitorData *)0x0) {
          pIStack_16 = (Il2CppClass *)pOVar14[1].klass;
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            SStack_12._version = (int32_t)TypeInfo__MVInputWrapper;
            SStack_12._stack = (Stack_1_System_Object_ *)&UNK_?;
            func_?();
          }
          bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                            ((KogamaControls__Enum)pIStack_16,(MethodInfo *)0x0);
        }
        else if (pMVar15 == (MonitorData *)0x1) {
          pIStack_16 = (Il2CppClass *)pOVar14[1].klass;
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            SStack_12._version = (int32_t)TypeInfo__MVInputWrapper;
            SStack_12._stack = (Stack_1_System_Object_ *)&UNK_?;
            func_?();
          }
          bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                            ((KogamaControls__Enum)pIStack_16,(MethodInfo *)0x0);
        }
        else {
          if (pMVar15 != (MonitorData *)0x2) goto code_?;
          pIStack_16 = (Il2CppClass *)pOVar14[1].klass;
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            SStack_12._version = (int32_t)TypeInfo__MVInputWrapper;
            SStack_12._stack = (Stack_1_System_Object_ *)&UNK_?;
            func_?();
          }
          bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                            ((KogamaControls__Enum)pIStack_16,(MethodInfo *)0x0);
        }
      } while (bVar6 == 0);
      pOVar17 = pOVar14[2].klass;
      if (pOVar17 == (Object__Class *)0x0) goto code_?;
      pIVar4 = (pOVar17->_0).element_class;
      method_00 = (MethodInfo *)&UNK_?;
      (*(code *)(pOVar17->_0).namespaze)();
code_?:
      pIStack_1 = (Il2CppInteropData *)CONCAT31(pIStack_1._1_3_,1);
      uVar9 = ZEXT48(pIVar4);
      mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
      Stack_1_T_Enumerator_System_Object__Dispose
                (&SStack_5,
                 MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__Dispose__
                );
    }
    pIStack_1 = (Il2CppInteropData *)0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Dispose__
               ,method_00);
  }
  *unaff_FS_OFFSET = pIStack_2;
  return;
}


/* ShortcutManager() */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager__ctor
               (ShortcutManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>
                           );
  if (this_00 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Dictionary__
              );
    (this->fields).shortCutKeys = this_00;
    func_?(&(this->fields).shortCutKeys,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

