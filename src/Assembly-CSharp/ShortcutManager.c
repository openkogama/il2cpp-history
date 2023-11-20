
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
  method_00 = TypeInfo__ShortcutManager__ShortcutKey;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].monitor = (MonitorData *)keyState;
  value[1].klass = (Object__Class *)kogamaControl;
  value[2].klass = (Object__Class *)callback;
  func_?(value + 2,callback);
  pDVar1 = (this->fields).shortCutKeys;
  if (pDVar1 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,kogamaControl,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).shortCutKeys;
      this_00 = (Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)func_?()
      ;
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Dynamic::
      BindingRestrictions+TestBuilder+AndNode]::
      Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Stack__
                );
      if (pDVar1 == (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,kogamaControl,
                 (Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Add_KogamaControls__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>_
                );
    }
    pDVar1 = (this->fields).shortCutKeys;
    if (pDVar1 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
      this_01 = (Stack_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,kogamaControl,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                          );
      if (this_01 != (Stack_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
        Stack_1_System_Object__Push
                  (this_01,value,
                   MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Push_ShortcutManager__ShortcutKey_
                  );
        return;
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
  pDVar1 = (this->fields).shortCutKeys;
  if (pDVar1 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,kogamaControl,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                      );
    if (bVar2 == 0) {
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Couldn_t_find_shortcut_key__,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).shortCutKeys;
    if (pDVar1 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
      this_00 = (Stack_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,kogamaControl,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                          );
      if (this_00 != (Stack_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
        Stack_1_System_Object__Pop
                  (this_00,
                   MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Pop__
                  );
        pDVar1 = (this->fields).shortCutKeys;
        if (pDVar1 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,kogamaControl,
                              MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                             );
          if (pOVar4 != (Object *)0x0) {
            if (pOVar4[1].monitor == (MonitorData *)0x0) {
              pDVar1 = (this->fields).shortCutKeys;
              if (pDVar1 == (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Remove
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,kogamaControl,
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
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  SStack_6._stack = (Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)0x0;
  SStack_6._version = 0;
  SStack_6._index = 0;
  SStack_6._currentElement.Depth = 0;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar7 = MVInputWrapper::MVInputWrapper_get_IsShortcutKeysSuppressed((MethodInfo *)0x0);
  if (bVar7 == 0) {
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).shortCutKeys;
    if (this_00 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__GetEnumerator__
                       );
    uStack_10 = 0;
    method_00 = (MethodInfo *)(pDVar9->_current).key;
    uVar11 = *(ulonglong *)&(pDVar9->_current).value;
    pOStack_12 = (Object *)&stack0xffffff90;
    uStack_1 = 0;
    while( true ) {
      this_01 = (Stack_1_UnityEngine_UIElements_TextureId_ *)uVar11;
      uStack_1._0_1_ = 1;
      bVar7 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffff90,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__MoveNext__
                        );
      if (bVar7 == 0) break;
      if (this_01 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) goto code_?;
      pSVar13 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
               TextureId]::Stack_1_UnityEngine_UIElements_TextureId__GetEnumerator
                         (&SStack_14,this_01,
                          MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__GetEnumerator__
                         );
      SStack_6._currentElement.Node = (Expression_1 *)0x0;
      SStack_6._stack =
           (Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)pSVar13->_stack;
      SStack_6._version = pSVar13->_version;
      SStack_6._index = pSVar13->_index;
      SStack_6._currentElement.Depth = (pSVar13->_currentElement).m_Index;
      uStack_1._0_1_ = 3;
      pSStack_15 = &SStack_6;
code_?:
      do {
        this_02 = &SStack_6;
        method_00 = (MethodInfo *)&UNK_?;
        bVar7 = mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
                Stack_1_T_Enumerator_System_Object__MoveNext
                          ((Stack_1_T_Enumerator_System_Object_ *)this_02,
                           MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__MoveNext__
                          );
        if (bVar7 == 0) goto code_?;
        TVar16 = mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[UnityEngine::
                UIElements::TextureId]::
                Stack_1_T_Enumerator_UnityEngine_UIElements_TextureId__get_Current
                          ((Stack_1_T_Enumerator_UnityEngine_UIElements_TextureId_ *)&SStack_6,
                           MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__get_Current__
                          );
        if (TVar16.m_Index == 0) goto code_?;
        iVar17 = *(int *)(TVar16.m_Index + 0xc);
        if (iVar17 == 0) {
          KStack_18 = *(KogamaControls__Enum *)(TVar16.m_Index + 8);
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            SStack_14._version = (int32_t)TypeInfo__MVInputWrapper;
            SStack_14._stack = (Stack_1_UnityEngine_UIElements_TextureId_ *)&UNK_?;
            func_?();
          }
          bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KStack_18,(MethodInfo *)0x0);
        }
        else if (iVar17 == 1) {
          KStack_18 = *(KogamaControls__Enum *)(TVar16.m_Index + 8);
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            SStack_14._version = (int32_t)TypeInfo__MVInputWrapper;
            SStack_14._stack = (Stack_1_UnityEngine_UIElements_TextureId_ *)&UNK_?;
            func_?();
          }
          bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown(KStack_18,(MethodInfo *)0x0);
        }
        else {
          if (iVar17 != 2) goto code_?;
          KStack_18 = *(KogamaControls__Enum *)(TVar16.m_Index + 8);
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            SStack_14._version = (int32_t)TypeInfo__MVInputWrapper;
            SStack_14._stack = (Stack_1_UnityEngine_UIElements_TextureId_ *)&UNK_?;
            func_?();
          }
          bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl(KStack_18,(MethodInfo *)0x0);
        }
      } while (bVar7 == 0);
      iVar17 = *(int *)(TVar16.m_Index + 0x10);
      if (iVar17 == 0) goto code_?;
      this_02 = *(Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ **)
                 (iVar17 + 0x20);
      method_00 = (MethodInfo *)&UNK_?;
      (**(code **)(iVar17 + 0xc))();
code_?:
      uStack_1 = CONCAT31(uStack_1._1_3_,1);
      uVar11 = ZEXT48(this_02);
      mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
      BindingRestrictions+TestBuilder+AndNode]::
      Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                (&SStack_6,
                 MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<ShortcutManager::ShortcutKey>__Dispose__
                );
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOStack_12,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Dispose__
               ,method_00);
  }
  *unaff_FS_OFFSET = uStack_3;
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
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Dictionary__
            );
  (this->fields).shortCutKeys =
       (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)this_00;
  func_?(&(this->fields).shortCutKeys,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

