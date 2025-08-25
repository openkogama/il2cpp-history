
/* Void AddReporter(Int32, MVNetworkReporter) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_AddReporter
               (TransformNetworkManager *this,int32_t woID,MVNetworkReporter *networkReporter,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                   );
    func_?(&StringLiteral_Trying_to_add_reporter_while_net);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).networkedObjects;
  if (pDVar1 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__ContainsKey
                    ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,woID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                    );
  if (bVar2 != 0) {
    pDVar1 = (this->fields).networkedObjects;
    if (pDVar1 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                       );
    str0 = StringLiteral_Trying_to_add_reporter_while_net;
    if (pOVar3 == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)(*(code *)(pOVar3->klass->vtable).ToString.method)();
    }
    networkReporter =
         (MVNetworkReporter *)
         mscorlib.dll::System::String::String_Concat_3(str0,str1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)networkReporter,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pDVar1 = (this->fields).networkedObjects;
    if (pDVar1 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
              );
  }
  pDVar1 = (this->fields).networkedObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,(Object *)networkReporter,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
              );
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddTransformPackage(Int32, NetworkTransformPackage) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_AddTransformPackage
               (TransformNetworkManager *this,int32_t woID,NetworkTransformPackage *p,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                   );
    func_?(&TypeInfo__MVNetworkListener);
    func_?(&StringLiteral__this_is_probably_due_to_ownersh);
    func_?(&StringLiteral_Attempt_to_update_world_object__);
    func_?(&StringLiteral_worldObjectClientManager_WorldOb);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
      cRam_? = '\x01';
    }
    this_00 = (pMVar1->fields).worldObjects;
    pOVar2 = (Object *)0x0;
    if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,
                 (Object **)&stack0xfffffff8,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (pOVar2 == (Object *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
        return;
      }
      pDVar3 = (this->fields).networkedObjects;
      if (pDVar3 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
        owner = (MVWorldObjectClient *)woID;
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,woID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                          );
        if (bVar4 == 0) {
          pDVar3 = (this->fields).networkedObjects;
          pMVar5 = (MVNetworkListener *)func_?();
          MVNetworkListener::MVNetworkListener__ctor(pMVar5,owner,(MethodInfo *)0x0);
          if (pDVar3 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,woID,(Object *)pMVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                    );
        }
        pDVar3 = (this->fields).networkedObjects;
        if (pDVar3 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
          pMVar5 = (MVNetworkListener *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,woID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                             );
          if (pMVar5 != (MVNetworkListener *)0x0) {
            if (((pMVar5->klass->_1).naturalAligment <
                 (TypeInfo__MVNetworkListener->_1).naturalAligment) ||
               ((pMVar5->klass->_1).typeHierarchy
                [(TypeInfo__MVNetworkListener->_1).naturalAligment - 1] !=
                (Il2CppClass *)TypeInfo__MVNetworkListener)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            this_01 = (MVNetworkListener *)0x0;
            if (bVar6) {
              this_01 = pMVar5;
            }
            if (this_01 != (MVNetworkListener *)0x0) {
              MVNetworkListener::MVNetworkListener_AddTransformPackage(this_01,p,(MethodInfo *)0x0);
              return;
            }
            pTVar7 = mscorlib.dll::System::Object::Object_GetType
                               ((Object *)pMVar5,(MethodInfo *)0x0);
            pSVar8 = StringLiteral_worldObjectClientManager_WorldOb;
            if (pTVar7 == (Type *)0x0) {
              str1 = (String *)0x0;
            }
            else {
              str1 = (String *)(*(code *)(pTVar7->klass->vtable).ToString.method)();
            }
            pSVar8 = mscorlib.dll::System::String::String_Concat_4
                               (pSVar8,str1,StringLiteral__this_is_probably_due_to_ownersh,
                                (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)pSVar8,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVNetworkObject GetNetworkObject(Int32) */

MVNetworkObject *
Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_GetNetworkObject
          (TransformNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVNetworkObject_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_MVNetworkObject>_System__Collections__Generic__IReadOnlyDictionary<int,_MVNetworkObject>__int_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (MVNetworkObject *)
           mscorlib.dll::System::Collections::Generic::CollectionExtensions::
           CollectionExtensions_GetValueOrDefault_1
                     ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                      (this->fields).networkedObjects,(Object *)woID,
                      MVNetworkObject_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_MVNetworkObject>_System__Collections__Generic__IReadOnlyDictionary<int,_MVNetworkObject>__int_
                     );
  return pMVar1;
}


/* Void RemoveNetworkObject(Int32) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
               (TransformNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).networkedObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_Update
               (TransformNetworkManager *this,MVNetworkGame *game,MethodInfo *method)

{
  pIStack_1 = (Il2CppType *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pcStack_3 = (char *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pcStack_3;
  pIStack_4 = (InvokerMethod)&stack0xffffff88;
  pIVar5 = (InvokerMethod)&stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__Dispose__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVNetworkObject>__get_Key__;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVNetworkObject>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  auStack_8._0_4_ = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  auStack_8._4_4_ = 0;
  auStack_8._8_4_ = 0;
  auStack_8._12_2_ = 0;
  auStack_8._14_2_ = 0;
  if (game != (MVNetworkGame *)0x0) {
    iVar9 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField = iVar9 + -600;
    method_00 = (MethodInfo *)(this->fields).networkedObjects;
    if (method_00 != (MethodInfo *)0x0) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          (auStack_8 + 0x10),(Dictionary_2_System_UInt32_System_Object_ *)method_00
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__GetEnumerator__
                         );
      DStack_7._dictionary = pDVar10->_dictionary;
      DStack_7._version = pDVar10->_version;
      DStack_7._index = pDVar10->_index;
      DStack_7._current.key = (pDVar10->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
      pOStack_11 = (Object *)0x0;
      pIStack_1 = (Il2CppType *)0x1;
      pDStack_12 = &DStack_7;
code_?:
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__MoveNext__
                        );
      if (bVar13 != 0) {
        pMStack_14 = (MethodInfo *)DStack_7._current.key;
        pDStack_15 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_7._current.value;
        pMStack_16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMStack_16 != (MVWorldObjectClientManager *)0x0) {
          if (cRam_? == '\0') {
            in_stack_6 =
                 &
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            ;
            func_?();
            cRam_? = '\x01';
          }
          this_00 = (pMStack_16->fields).worldObjects;
          pIStack_17 = (Il2CppMethodPointer)0x0;
          if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            method_00 = (MethodInfo *)&pIStack_17;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)pMStack_14,
                       (Object **)method_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
            if (pIStack_17 == (Il2CppMethodPointer)0x0) {
              pLVar18 = (this->fields).removeList;
              if (pLVar18 != (List_1_System_Int32_ *)0x0) goto code_?;
            }
            else if (pDStack_15 != (Dictionary_2_System_UInt32_System_Object_ *)0x0)
            goto code_?;
          }
        }
        goto code_?;
      }
      pIStack_1 = (Il2CppType *)0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      pIStack_1 = (Il2CppType *)0xffffffff;
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).removeList;
      if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      pLVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)auStack_20,this_01,
                          MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
      auStack_8._0_4_ = pLVar19->_list;
      auStack_8._4_4_ = pLVar19->_index;
      auStack_8._8_4_ = pLVar19->_version;
      auStack_8._12_4_ = pLVar19->_current;
      pOStack_11 = (Object *)0x0;
      pIStack_1 = (Il2CppType *)0x4;
      pDStack_12 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)auStack_8;
      while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)auStack_8,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                               ), bVar13 != 0) {
        this_02 = (this->fields).networkedObjects;
        if (this_02 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_02,auStack_8._12_4_,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                  );
      }
      pIStack_1 = (Il2CppType *)0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)auStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                 method_00);
      pIStack_1 = (Il2CppType *)0xffffffff;
      pLVar18 = (this->fields).removeList;
      if (pLVar18 != (List_1_System_Int32_ *)0x0) {
        piVar21 = &(pLVar18->fields)._version;
        *piVar21 = *piVar21 + 1;
        (pLVar18->fields)._size = 0;
        *unaff_FS_OFFSET = pcStack_3;
        return;
      }
    }
  }
code_?:
  uVar22 = func_?();
  uVar22 = func_?(uVar22);
  func_?(uVar22);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
code_?:
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)game;
  func_?();
  DStack_7._dictionary = pDStack_15;
  cVar24 = func_?();
  if (cVar24 != '\0') {
    pLVar18 = (this->fields).removeList;
    if (pLVar18 == (List_1_System_Int32_ *)0x0) goto code_?;
code_?:
    method_00 = pMStack_14;
    func_?(pLVar18,pMStack_14,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
    ;
  }
  goto code_?;
}


/* TransformNetworkManager() */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager__ctor
               (TransformNetworkManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Dictionary__
            );
  (this->fields).networkedObjects = (Dictionary_2_System_Int32_MVNetworkObject_ *)this_00;
  func_?(&this->fields,this_00);
  this_01 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  method_00 = (MethodInfo *)&(this->fields).removeList;
  (this->fields).removeList = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Int32 get_DelayedTime() */

int32_t Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_get_DelayedTime
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TransformNetworkManager);
    cRam_? = '\x01';
  }
  return TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField;
}


/* Void set_DelayedTime(Int32) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_set_DelayedTime
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TransformNetworkManager);
    cRam_? = '\x01';
  }
  TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField = value;
  return;
}

