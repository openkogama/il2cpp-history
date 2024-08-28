
/* Void Add(String, CachedGetRequest) */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_Add
               (AsyncWWWManager_Cache *this,String *path,CachedGetRequest *cachedGetRequest,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cachedRequests;
  if (this_00 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)path,
               (Object *)cachedGetRequest,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Add_System__String__CachedGetRequest_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_Clear
               (AsyncWWWManager_Cache *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).cachedRequests;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Clear__
              );
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean TryGet(String, CachedGetRequest ByRef) */

bool Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_TryGet
               (AsyncWWWManager_Cache *this,String *path,CachedGetRequest **cachedGetRequest,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cachedRequests;
  if (this_00 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)path,
                       (Object **)cachedGetRequest,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__TryGetValue_System__String__CachedGetRequest__
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void UnsubscribeCached(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
               (AsyncWWWManager_Cache *this,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_CachedGetRequest>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields).cachedRequests;
  if (this_00 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffac,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__GetEnumerator__
                       );
    uStack_7 = 0;
    DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar6->_dictionary;
    DStack_8._version = pDVar6->_version;
    DStack_8._index = pDVar6->_index;
    DStack_8._current.key = (Object *)(pDVar6->_current).key;
    DStack_8._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_8;
    while( true ) {
      while( true ) {
        do {
          bVar10 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_8,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__MoveNext__
                            );
          if (bVar10 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&DStack_8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__Dispose__
                       ,(MethodInfo *)in_stack_11);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          pOVar12 = DStack_8._current.value;
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
            cRam_? = '\x01';
          }
          if (pOVar12 == (Object *)0x0) goto code_?;
          pOVar12 = pOVar12 + 1;
          bVar10 = mscorlib.dll::System::Delegate::Delegate_op_Equality
                            ((Delegate *)pOVar12->klass,(Delegate *)callback,(MethodInfo *)0x0);
        } while (bVar10 == 0);
        in_stack_11 =
             (Object__Class *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pOVar12->klass,(Delegate *)callback,(MethodInfo *)0x0);
        pOStack_13 = in_stack_11;
        if (in_stack_11 != (Object__Class *)0x0) break;
        pOVar12->klass = (Object__Class *)0x0;
        func_?();
      }
      in_stack_11 = (Object__Class *)func_?();
      if (in_stack_11 == (Object__Class *)0x0) break;
      pOVar12->klass = in_stack_11;
      func_?();
    }
    func_?();
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* AsyncWWWManager+Cache() */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache__ctor
               (AsyncWWWManager_Cache *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  ((AsyncWWWManager_Cache__Fields *)method_00)->cachedRequests =
       (Dictionary_2_System_String_CachedGetRequest_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

