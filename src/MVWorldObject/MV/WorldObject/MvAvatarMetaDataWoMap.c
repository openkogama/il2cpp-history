
/* Void Add(Int32, MvAvatarMetaData) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
               (MvAvatarMetaDataWoMap *this,int32_t woID,MvAvatarMetaData *avatarMetaData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarWOIDAvatarMetaData;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__set_Item
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,(Object *)avatarMetaData,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__set_Item_int__MV__WorldObject__MvAvatarMetaData_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetAvatar(Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_ResetAvatar
               (MvAvatarMetaDataWoMap *this,int32_t prevAvatarWoID,int32_t newAvatarWoID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).avatarWOIDAvatarMetaData;
  if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,prevAvatarWoID,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                      );
    if (bVar2 == 0) goto code_?;
    pDVar1 = (this->fields).avatarWOIDAvatarMetaData;
    if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,prevAvatarWoID,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Remove_int_
                );
      this_00 = (this->fields).avatarWOIDAvatarMetaData;
      if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)pDVar1,
                   (Object *)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                  );
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  this_01 = (ArgumentException *)func_?();
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_01,message,method_00);
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_ToString
                   (MvAvatarMetaDataWoMap *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MvAvatarMetaData>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MvAvatarMetaData>__get_Value__
                   );
    func_?(&StringLiteral_Count___0__u000A);
    func_?(&StringLiteral_WoID__0___MetaData__1__u000A);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).avatarWOIDAvatarMetaData;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iStack_7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__get_Count__
                          );
    pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    pSVar9 = mscorlib.dll::System::String::String_Format
                       (StringLiteral_Count___0__u000A,pOVar8,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).avatarWOIDAvatarMetaData;
    if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffa0,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__GetEnumerator__
                         );
      uStack_11 = 0;
      DStack_6._dictionary = pDVar10->_dictionary;
      DStack_6._version = pDVar10->_version;
      DStack_6._index = pDVar10->_index;
      DStack_6._current.key = (pDVar10->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
      uStack_1 = 1;
      pDStack_12 = &DStack_6;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__MoveNext__
                          );
        if (bVar13 == 0) break;
        uStack_14 = DStack_6._current.key;
        uStack_15 = DStack_6._current.key;
        pOStack_16 = DStack_6._current.value;
        pOVar8 = (Object *)func_?();
        str1 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_WoID__0___MetaData__1__u000A,pOVar8,pOStack_16,
                          (MethodInfo *)0x0);
        pSVar9 = mscorlib.dll::System::String::String_Concat_3(pSVar9,str1,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__Dispose__
                 ,in_stack_17);
      *unaff_FS_OFFSET = uStack_3;
      return pSVar9;
    }
  }
  uVar18 = func_?();
  func_?(uVar18);
  pcVar19 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar19)();
  return pSVar9;
}


/* Boolean TryGetValue(Int32, MvAvatarMetaData ByRef) */

bool MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_TryGetValue
               (MvAvatarMetaDataWoMap *this,int32_t woID,MvAvatarMetaData **avatarMetaData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarWOIDAvatarMetaData;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,
                       (Object **)avatarMetaData,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* MvAvatarMetaDataWoMap(BytePacker) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
               (MvAvatarMetaDataWoMap *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>
                   );
    func_?(&TypeInfo__MV__WorldObject__MvAvatarMetaData);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
            );
  pMVar1 = (MethodInfo *)&this->fields;
  (this->fields).avatarWOIDAvatarMetaData =
       (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)this_01;
  func_?(pMVar1,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
  if (bp == (BytePacker *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(&TypeInfo__System__FormatException);
    this_02 = (FormatException *)func_?(uVar2);
    pMVar1 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Error_in_the_byte_stream__too_ma);
    mscorlib.dll::System::FormatException::FormatException__ctor_1(this_02,message,pMVar1);
    uVar2 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Read7BitEncodedInt__);
    func_?(this_02,uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  if (0 < iVar4) {
    do {
      puVar5 = &UNK_?;
      BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      key = &UNK_?;
      value = (Object *)func_?(TypeInfo__MV__WorldObject__MvAvatarMetaData);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      value[1].klass = (Object__Class *)0xffffffff;
      value[1].monitor = (MonitorData *)::StringLiteral__;
      puVar6 = &UNK_?;
      func_?(&value[1].monitor);
      value[2].klass = (Object__Class *)0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,in_stack_7);
      pOVar8 = (Object__Class *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      value[1].klass = pOVar8;
      count = 0;
      iVar9 = 0;
      do {
        if (iVar9 == 0x23) goto code_?;
        uVar10 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
        count = count | (uVar10 & 0x7f) << ((byte)iVar9 & 0x1f);
        iVar9 = iVar9 + 7;
      } while ((char)uVar10 < '\0');
      pBVar11 = BytePacker::BytePacker_ReadBytes(bp,count,(MethodInfo *)0x0);
      pEVar12 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
      if (pEVar12 == (Encoding *)0x0) goto code_?;
      pMVar13 = (MonitorData *)
               (*(code *)(pEVar12->klass->vtable).GetString.method)
                         (pEVar12,pBVar11,(pEVar12->klass->vtable).GetString_1.methodPtr);
      value[1].monitor = pMVar13;
      func_?(&value[1].monitor,pMVar13);
      pOVar8 = (Object__Class *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      value[2].klass = pOVar8;
      uVar10 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      in_stack_7 = (MethodInfo *)0x0;
      *(bool *)&value[2].monitor = uVar10 != 0;
      uVar10 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      *(bool *)((int)&value[2].monitor + 1) = uVar10 != 0;
      this_00 = (this->fields).avatarWOIDAvatarMetaData;
      if (this_00 == (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                );
    } while ((int)(puVar6 + 1) < (int)puVar5);
  }
  return;
}

