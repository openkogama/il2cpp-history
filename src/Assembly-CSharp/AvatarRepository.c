
/* Void AddItem(AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarRepository::AvatarRepository_AddItem
               (AvatarRepository *this,AvatarRepositoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Add_int__AvatarRepositoryItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_with_slotPosition__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__already_exists_in_AvatarReposit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((item != (AvatarRepositoryItem *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).avatars,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(item->fields).slotPosition,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(item->fields).slotPosition,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_Avatar_with_slotPosition__,pSVar2,
                          StringLiteral__already_exists_in_AvatarReposit,(MethodInfo *)0x0);
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
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (this->fields).avatars;
    if (this_01 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,(item->fields).slotPosition,
                 (Object *)item,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Add_int__AvatarRepositoryItem_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* AvatarRepositoryItem GetAvatar(Int32) */

AvatarRepositoryItem *
Assembly-CSharp.dll::AvatarRepository::AvatarRepository_GetAvatar
          (AvatarRepository *this,int32_t slotPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Item_int_;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).avatars;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pAVar3 = (AvatarRepositoryItem *)(*pcVar2)();
    return pAVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,slotPosition,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Item_int_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar4 < 0) {
    uVar5 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar5);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pAVar3 = (AvatarRepositoryItem *)(*pcVar2)();
    return pAVar3;
  }
  pDVar6 = (this_00->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0) {
    if (uVar4 < (uint)pDVar6->max_length) {
      return *(AvatarRepositoryItem **)&pDVar6->vector[(int)uVar4].value.y;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pAVar3 = (AvatarRepositoryItem *)(*pcVar2)();
    return pAVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pAVar3 = (AvatarRepositoryItem *)(*pcVar2)();
  return pAVar3;
}


/* List`1[AvatarRepositoryItem] GetAvatars() */

List_1_AvatarRepositoryItem_ *
Assembly-CSharp.dll::AvatarRepository::AvatarRepository_GetAvatars
          (AvatarRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__OrderBy<AvatarRepositoryItem,_int>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>__System__Func<AvatarRepositoryItem,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<AvatarRepositoryItem,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarRepository____c___GetAvatars_b__5_0_AvatarRepositoryItem_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarRepository____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).avatars;
  if (this_00 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_AvatarRepositoryItem_ *)(*pcVar1)();
    return pLVar2;
  }
  source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
           TypeConverterRegistry+ConverterKey,System::Object]::
           Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                     (this_00,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Values__
                     );
  if (*(int *)&(TypeInfo__AvatarRepository____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarRepository____c);
  }
  this_01 = TypeInfo__AvatarRepository____c->static_fields->__9__5_0;
  if (this_01 == (Func_2_AvatarRepositoryItem_Int32_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarRepository____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarRepository____c);
    }
    object = TypeInfo__AvatarRepository____c->static_fields->__9;
    this_01 = (Func_2_AvatarRepositoryItem_Int32_ *)
              FUN_?(TypeInfo__System__Func<AvatarRepositoryItem,_int>);
    mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
              ((Func_2_Object_Int32Enum_ *)this_01,(Object *)object,
               MethodInfo__AvatarRepository____c___GetAvatars_b__5_0_AvatarRepositoryItem_,
               (MethodInfo *)0x0);
    TypeInfo__AvatarRepository____c->static_fields->__9__5_0 = this_01;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__AvatarRepository____c->static_fields->__9__5_0 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  collection = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                         ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Int32_ *)this_01,
                          System__Linq__IOrderedEnumerable<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__OrderBy<AvatarRepositoryItem,_int>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>__System__Func<AvatarRepositoryItem,_int>_
                         );
  pMVar7 = 
  System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
  ;
  if ((
      System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
                 );
  }
  if (collection == (IOrderedEnumerable_1_System_Object_ *)0x0) {
    s = (String *)func_?(&StringLiteral_source);
    pEVar8 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
    FUN_?(pEVar8,pMVar7);
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_AvatarRepositoryItem_ *)(*pcVar1)();
    return pLVar2;
  }
  pvVar9 = (pMVar7->field7_0x38).rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
    pvVar9 = (void *)FUN_?(pvVar9);
  }
  pLVar2 = (List_1_AvatarRepositoryItem_ *)FUN_?(pvVar9);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar2,(IEnumerable_1_System_Object_ *)collection,
             (pMVar7->field7_0x38).rgctx_data[2].method);
  return pLVar2;
}


/* AvatarRepository() */

void Assembly-CSharp.dll::AvatarRepository::AvatarRepository__ctor
               (AvatarRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).avatars = (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::AvatarRepository::AvatarRepository_get_Count
                  (AvatarRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).avatars;
  if (pDVar1 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
    return (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

