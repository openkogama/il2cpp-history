
/* String[] GetNames() */

String__Array *
Assembly-CSharp.dll::ItemCategories::ItemCategories_GetNames
          (ItemCategories *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_int>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).itemCategoriesNameID;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Keys__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_2 = (pDVar1->fields)._dictionary;
    ppDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (pDStack_2 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_6 = pDStack_2;
      FUN_?();
      pcVar10 = (code *)swi(3);
      pSVar11 = (String__Array *)(*pcVar10)();
      return pSVar11;
    }
    ppDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_2->fields)._version << 0x20);
    uStack_4 = 0;
    uStack_12 = (ulonglong)ppDStack_3;
    pOStack_13 = (Object *)0x0;
    pDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_3 = &pDStack_2;
    while (pDStack_2 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) {
      if (uStack_12._4_4_ != (pDStack_2->fields)._version) goto code_?;
      uVar9 = uStack_12 & 0xffffffff;
      do {
        if (pDStack_2 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        uVar5 = (uint)uVar9;
        if ((uint)(pDStack_2->fields)._count <= uVar5) {
          uStack_12 = CONCAT44(uStack_12._4_4_,(pDStack_2->fields)._count + 1);
          pOStack_13 = (Object *)0x0;
          if (this_01 !=
              (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
               *)0x0) {
            pRVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR
                     ::RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                     List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                               (this_01,
                                MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                               );
            return (String__Array *)pRVar14;
          }
          goto code_?;
        }
        pDVar15 = (pDStack_2->fields)._entries;
        uVar9 = (ulonglong)(uVar5 + 1);
        uStack_12 = CONCAT44(uStack_12._4_4_,uVar5 + 1);
        if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar15->max_length <= uVar5) goto code_?;
      } while ((&pDVar15->vector[0].hashCode)[(longlong)(int)uVar5 * 6] < 0);
      pOStack_13 = *(Object **)((longlong)&pDVar15->vector[0].key + (longlong)(int)uVar5 * 0x18);
      func_?();
      pMVar16 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
      if (this_01 ==
          (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
           *)0x0) goto code_?;
      piVar17 = &(this_01->fields)._version;
      *piVar17 = *piVar17 + 1;
      pRVar14 = (this_01->fields)._items;
      uVar5 = (this_01->fields)._size;
      if (pRVar14 == (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0)
      goto code_?;
      if (uVar5 < (uint)pRVar14->max_length) {
        (this_01->fields)._size = uVar5 + 1;
        FUN_?(pRVar14,(longlong)(int)uVar5,pOStack_13);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_01,pOStack_13,pMVar16->klass->rgctx_data[0xe].method
                  );
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  pSVar11 = (String__Array *)(*pcVar10)();
  return pSVar11;
}


/* String IDToName(Int32) */

String * Assembly-CSharp.dll::ItemCategories::ItemCategories_IDToName
                   (ItemCategories *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_find_category_name);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).itemCategoriesIDName;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar1,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_;
    if (iVar2 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Could_not_find_category_name,(MethodInfo *)0x0);
      return ::StringLiteral__;
    }
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).itemCategoriesIDName;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar1,id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        uVar5 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar5);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pSVar7 = (String *)(*pcVar6)();
        return pSVar7;
      }
      pDVar8 = (pDVar1->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar4 < (uint)pDVar8->max_length) {
          return *(String **)&pDVar8->vector[(int)uVar4].value.y;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pSVar7 = (String *)(*pcVar6)();
        return pSVar7;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pSVar7 = (String *)(*pcVar6)();
      return pSVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar6)();
  return pSVar7;
}


/* Int32 NameToID(String) */

int32_t Assembly-CSharp.dll::ItemCategories::ItemCategories_NameToID
                  (ItemCategories *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_find_category_id);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields).itemCategoriesNameID;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar1,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Could_not_find_category_id,(MethodInfo *)0x0);
      return -1;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields).itemCategoriesNameID;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar1,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar3 < 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  ((Object *)name,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        iVar2 = (*pcVar4)();
        return iVar2;
      }
      pDVar5 = (pDVar1->fields)._entries;
      if (pDVar5 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                     *)0x0) {
        if (uVar3 < (uint)pDVar5->max_length) {
          return pDVar5->vector[(int)uVar3].value.state;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        iVar2 = (*pcVar4)();
        return iVar2;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      iVar2 = (*pcVar4)();
      return iVar2;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar2 = (*pcVar4)();
  return iVar2;
}


/* ItemCategories(Dictionary`2[System.String,System.Int32]) */

void Assembly-CSharp.dll::ItemCategories::ItemCategories__ctor
               (ItemCategories *this,Dictionary_2_System_String_System_Int32_ *itemCategories,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  (this->fields).itemCategoriesIDName = (Dictionary_2_System_Int32_System_String_ *)this_01;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).itemCategoriesIDName >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).itemCategoriesNameID = itemCategories;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar5);
  }
  pDVar7 = (this->fields).itemCategoriesNameID;
  if (pDVar7 == (Dictionary_2_System_String_System_Int32_ *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uStack_9 = 0;
  uStack_10 = 0;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&pDStack_11 >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  uStack_12 = (ulonglong)(uint)(pDVar7->fields)._version;
  uStack_13 = 2;
  DStack_14._version = (undefined4)uStack_12;
  DStack_14._index = uStack_12._4_4_;
  DStack_14._current.key = (Object *)0x0;
  DStack_14._current.value = 0;
  DStack_14._current._12_4_ = 0;
  DStack_14._getEnumeratorRetType = 2;
  DStack_14._36_4_ = 0;
  pDStack_11 = pDVar7;
  DStack_14._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)pDVar7;
  while( true ) {
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Int32Enum]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum__MoveNext
                      (&DStack_14,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                      );
    if (bVar15 == 0) {
      return;
    }
    this_00 = (this->fields).itemCategoriesIDName;
    if (this_00 == (Dictionary_2_System_Int32_System_String_ *)0x0) break;
    pDVar7 = (Dictionary_2_System_String_System_Int32_ *)CONCAT71((int7)((ulonglong)pDVar7 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,DStack_14._current.value,
               DStack_14._current.key,(InsertionBehavior__Enum)pDVar7,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
               ->klass->rgctx_data[0x22].method);
  }
  FUN_?();
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

