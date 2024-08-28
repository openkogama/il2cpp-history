
/* Void PartialRemoveFromHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,MethodInfo *method)

{
  CommonUtils_PartialRemoveFromHashtable_1(target,source,0,(MethodInfo *)0x0);
  return;
}


/* Void PartialRemoveFromHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object], Boolean) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,bool acceptMissingValuesInTarget,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (source != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,(Dictionary_2_System_UInt32_System_Object_ *)source,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (Object *)(pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            bVar11 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_9,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            key = DStack_9._current.key;
            if (bVar11 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&DStack_9,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,unaff_EDI);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pMStack_12 = (MethodInfo *)DStack_9._current.key;
            pOStack_13 = DStack_9._current.value;
            if (DStack_9._current.value != (Object *)0x0) break;
            if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Remove
                      (target,DStack_9._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                      );
          }
          iStack_14 = func_?(DStack_9._current.value,
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                     );
          if (iStack_14 != 0) break;
          if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Remove
                    (target,key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                    );
        }
        if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        source_00 = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        pDVar15 = target;
        method_00 = (MethodInfo *)key;
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)target,
                           key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        acceptMissingValuesInTarget_00 = (bool)pDVar15;
        if (bVar11 == 0) break;
        TVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)target,
                           key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        unaff_EDI = (MethodInfo *)0x0;
        pDVar15 = (Dictionary_2_System_Object_System_Object_ *)
                 func_?(TVar16.m_Index,
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 ,iStack_14,_acceptMissingValuesInTarget);
        CommonUtils_PartialRemoveFromHashtable_1
                  (pDVar15,source_00,acceptMissingValuesInTarget_00,method_00);
      }
    } while (acceptMissingValuesInTarget != 0);
    uVar17 = func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                           );
    iVar18 = func_?(&pMStack_12,uVar17);
    pSVar19 = (String *)func_?(&StringLiteral_Target_hashtable_doesn_t_contain);
    if (iVar18 == 0) {
      str1 = (String *)0x0;
    }
    else {
      func_?(iVar18);
      str1 = (String *)func_?(3,iVar18);
    }
    str2 = (String *)func_?(&::StringLiteral__);
    pSVar19 = mscorlib.dll::System::String::String_Concat_4(pSVar19,str1,str2,(MethodInfo *)0x0);
    func_?();
    this = (ArgumentException *)func_?();
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar19,(MethodInfo *)0x0);
    DStack_7._version =
         (int32_t)&
                  MethodInfo__MV__Common__CommonUtils__PartialRemoveFromHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
    ;
    DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)&UNK_?;
    DStack_7._version = func_?();
    DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)this;
    func_?();
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void PartialUpdateHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_Incompatible_types_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (source != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff9c,(Dictionary_2_System_UInt32_System_Object_ *)source,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
    DStack_9._version = pDVar7->_version;
    DStack_9._index = pDVar7->_index;
    DStack_9._current.key = (Object *)(pDVar7->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      key = (MethodInfo *)DStack_9._current.key;
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar12 = DStack_9._current.value;
      pMStack_13 = (MethodInfo *)DStack_9._current.key;
      pOStack_14 = DStack_9._current.value;
      if (DStack_9._current.value == (Object *)0x0) break;
      if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)target,
                         DStack_9._current.key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar11 == 0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (target,(Object *)key,pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        in_stack_6 = (MethodInfo **)key;
      }
      else {
        in_stack_6 = (MethodInfo **)target;
        pOStack_15 = (Object *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                target,(Object *)key,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
        if (pOStack_15 == (Object *)0x0) goto code_?;
        pDStack_16 = (Dictionary_2_System_Object_System_Object_ *)
                     mscorlib.dll::System::Object::Object_GetType(pOStack_15,(MethodInfo *)0x0);
        pXStack_17 = (XNamespace *)
                     mscorlib.dll::System::Object::Object_GetType(pOVar12,(MethodInfo *)0x0);
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar11 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                          ((XNamespace *)pDStack_16,pXStack_17,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          values = (String__Array *)func_?();
          func_?();
          func_?();
          pOVar12 = pOStack_15;
          func_?();
          pTVar18 = mscorlib.dll::System::Object::Object_GetType(pOVar12,(MethodInfo *)0x0);
          if (pTVar18 != (Type *)0x0) {
            func_?();
            func_?();
          }
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          pOVar12 = (Object *)func_?();
          func_?();
          pTVar18 = mscorlib.dll::System::Object::Object_GetType(pOVar12,(MethodInfo *)0x0);
          if (pTVar18 != (Type *)0x0) {
            func_?();
            func_?();
          }
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          iVar19 = func_?(&pMStack_13);
          if (iVar19 != 0) {
            func_?();
            func_?(3);
          }
          func_?();
          func_?(5);
          func_?(values);
          uVar20 = func_?(&::StringLiteral__);
          func_?(6,uVar20);
          pSVar21 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
          goto code_?;
        }
        pDStack_16 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (pDStack_16 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (target,(Object *)key,pOVar12,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        else {
          source_00 = (Dictionary_2_System_Object_System_Object_ *)
                      func_?(pOVar12,
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                     );
          CommonUtils_PartialUpdateHashtable(pDStack_16,source_00,(MethodInfo *)0x0);
        }
      }
    }
    uVar20 = func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                           );
    iVar19 = func_?(&pMStack_13,uVar20);
    pSVar21 = (String *)func_?(&StringLiteral_Update_table_contains_NULL_valye);
    if (iVar19 == 0) {
      str1 = (String *)0x0;
    }
    else {
      func_?(iVar19);
      str1 = (String *)func_?(3,iVar19);
    }
    str2 = (String *)func_?(&::StringLiteral__);
    pSVar21 = mscorlib.dll::System::String::String_Concat_4(pSVar21,str1,str2,(MethodInfo *)0x0);
code_?:
    uVar20 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar20);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar21,(MethodInfo *)0x0);
    func_?();
    func_?(this);
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Boolean PruneEmptyDictionaries(Dictionary`2[System.Object,System.Object]) */

bool MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
               (Dictionary_2_System_Object_System_Object_ *target,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  this = (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<System::String>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (target != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffb8,(Dictionary_2_System_UInt32_System_Object_ *)target,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)(pDVar5->_current).value;
    uStack_1 = 1;
    pMVar6 = (MethodInfo *)(pDVar5->_current).key;
    while (pMVar7 = pMVar6,
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                             &stack0xffffff90,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                            ), bVar8 != 0) {
      pMVar6 = pMVar7;
      if (method_00 != (MethodInfo *)0x0) {
        cVar9 = (code)(
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      ->_1).naturalAligment;
        if (((byte)method_00->methodPointer[0xb8] < (byte)cVar9) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(method_00->methodPointer + 100) + -4 + (uint)(byte)cVar9 * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        pMVar11 = (MethodInfo *)0x0;
        if (bVar10) {
          pMVar11 = method_00;
        }
        if (pMVar11 != (MethodInfo *)0x0) {
          cVar9 = (code)(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
          if ((((byte)method_00->methodPointer[0xb8] < (byte)cVar9) ||
              (*(Dictionary_2_System_Object_System_Object___Class **)
                (*(int *)(method_00->methodPointer + 100) + -4 + (uint)(byte)cVar9 * 4) !=
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
             || (method_00 == (MethodInfo *)0x0)) goto code_?;
          pMVar6 = (MethodInfo *)0x0;
          bVar8 = CommonUtils_PruneEmptyDictionaries
                            ((Dictionary_2_System_Object_System_Object_ *)method_00,
                             (MethodInfo *)0x0);
          if (bVar8 != 0) {
            if (this == (MethodInfo *)0x0) goto code_?;
            method_00 = (MethodInfo *)0x0;
            if (pMVar7 != (MethodInfo *)0x0) {
              if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Class *)
                  pMVar7->methodPointer ==
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Class *)
                  TypeInfo__System__String) {
                method_00 = pMVar7;
              }
              if (method_00 == (MethodInfo *)0x0) {
                func_?();
                goto code_?;
              }
            }
            pMVar6 = this;
            func_?();
          }
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffff90,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    if (this != (MethodInfo *)0x0) {
      pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffc0,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)this,
                          MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                         );
      key = pLVar12->_current;
      uStack_1 = 4;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                          );
        if (bVar8 == 0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  (target,(Object *)key,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&pOStack_4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                 ,in_stack_13);
      uStack_1 = 0xffffffff;
      iVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)target,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                        );
      *unaff_FS_OFFSET = uStack_3;
      return iVar14 == 0;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  bVar8 = (*pcVar15)();
  return bVar8;
}

