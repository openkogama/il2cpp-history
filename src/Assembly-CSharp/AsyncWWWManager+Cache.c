
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
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (this->fields).cachedRequests;
  if (this_00 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffac,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (Object *)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_6;
    do {
      do {
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__Dispose__
                     ,(MethodInfo *)in_stack_11);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pOVar12 = DStack_6._current.value;
        if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
          cRam_? = '\x01';
        }
        if (pOVar12 == (Object *)0x0) goto code_?;
        bVar10 = mscorlib.dll::System::Delegate::Delegate_op_Equality
                          ((Delegate *)pOVar12[1].klass,(Delegate *)callback,(MethodInfo *)0x0);
      } while (bVar10 == 0);
      pDStack_13 = mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pOVar12[1].klass,(Delegate *)callback,(MethodInfo *)0x0);
      in_stack_11 = (Object__Class *)0x0;
      if (pDStack_13 != (Delegate *)0x0) {
        in_stack_11 = (Object__Class *)func_?();
        if (in_stack_11 == (Object__Class *)0x0) {
          func_?();
          break;
        }
      }
      pOVar12[1].klass = in_stack_11;
      func_?();
    } while( true );
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
  (this->fields).cachedRequests = (Dictionary_2_System_String_CachedGetRequest_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

