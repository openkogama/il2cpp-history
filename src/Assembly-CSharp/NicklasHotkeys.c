
/* Void Handle() */

void Assembly-CSharp.dll::NicklasHotkeys::NicklasHotkeys_Handle(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__get_Current__
                   );
    func_?(&TypeInfo__UnityEngine__KeyCode);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__get_Value__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__NicklasHotkeys);
    func_?(&StringLiteral_Successfully_invoked_hot_key_);
    func_?(&StringLiteral_Failed_invocation_of_hot_key_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = KeyCode__Enum_None;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  if ((TypeInfo__NicklasHotkeys->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__NicklasHotkeys);
  }
  this = (Dictionary_2_System_UInt32_System_Object_ *)
         TypeInfo__NicklasHotkeys->static_fields->keyBindings;
  if (this != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,this,
                        MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    do {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__MoveNext__
                        );
      key = DStack_6._current.key;
      if (bVar11 == 0) goto code_?;
      pOStack_12 = DStack_6._current.value;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar11 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                        (key,(MethodInfo *)0x0);
    } while (bVar11 == 0);
    if (pOStack_12 != (Object *)0x0) {
      cVar13 = (*(code *)pOStack_12[1].monitor)(pOStack_12[4].klass,key,pOStack_12[2].monitor);
      DStack_8._current.value = (Object *)0xffffffff;
      DStack_8._getEnumeratorRetType = key;
      DStack_8._current.key = (uint32_t)TypeInfo__UnityEngine__KeyCode;
      if (cVar13 == '\0') {
        pSVar14 = mscorlib.dll::System::Enum::Enum_ToString
                           ((Enum *)&DStack_8._current,(MethodInfo *)0x0);
        pSVar14 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_Failed_invocation_of_hot_key_,pSVar14,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar14,(MethodInfo *)0x0);
      }
      else {
        pSVar14 = mscorlib.dll::System::Enum::Enum_ToString
                           ((Enum *)&DStack_8._current,(MethodInfo *)0x0);
        pSVar14 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_Successfully_invoked_hot_key_,pSVar14,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar14,(MethodInfo *)0x0);
      }
code_?:
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Dispose__
                 ,unaff_EBX);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean PushNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::NicklasHotkeys::NicklasHotkeys_PushNotification
               (NotificationType__Enum type,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = TypeInfo__NotificationsManager->static_fields->_activeInstance;
  if (this != (NotificationsManager *)0x0) {
    NotificationsManager::NotificationsManager_InstantiateNotification
              (this,type,data,(MethodInfo *)0x0);
    return 1;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* NicklasHotkeys() */

void Assembly-CSharp.dll::NicklasHotkeys::NicklasHotkeys__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Add_UnityEngine__KeyCode__System__Func<UnityEngine::KeyCode,_bool>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>
                   );
    func_?(&TypeInfo__System__Func<UnityEngine::KeyCode,_bool>);
    func_?(&TypeInfo__NicklasHotkeys);
    func_?(&MethodInfo__NicklasHotkeys____c____cctor_b__3_0_UnityEngine__KeyCode_);
    func_?(&TypeInfo__NicklasHotkeys____c);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Dictionary__
            );
  if ((TypeInfo__NicklasHotkeys____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__NicklasHotkeys____c);
  }
  object = (Object *)TypeInfo__NicklasHotkeys____c->static_fields->__9;
  this_00 = (Predicate_1_UInt32_ *)
            func_?(TypeInfo__System__Func<UnityEngine::KeyCode,_bool>);
  mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
            (this_00,object,MethodInfo__NicklasHotkeys____c____cctor_b__3_0_UnityEngine__KeyCode_,
             (MethodInfo *)0x0);
  if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x2c,(Object *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Add_UnityEngine__KeyCode__System__Func<UnityEngine::KeyCode,_bool>_
              );
    TypeInfo__NicklasHotkeys->static_fields->keyBindings =
         (Dictionary_2_UnityEngine_KeyCode_System_Func_2_UnityEngine_KeyCode_Boolean_ *)this;
    func_?();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

