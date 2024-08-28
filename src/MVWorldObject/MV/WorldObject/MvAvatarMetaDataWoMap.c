
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
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).avatarWOIDAvatarMetaData;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iStack_6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__get_Count__
                          );
    pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    pSVar8 = mscorlib.dll::System::String::String_Format
                       (StringLiteral_Count___0__u000A,pOVar7,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).avatarWOIDAvatarMetaData;
    if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffa0,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_11._dictionary = pDVar9->_dictionary;
      DStack_11._version = pDVar9->_version;
      DStack_11._index = pDVar9->_index;
      DStack_11._current.key = (pDVar9->_current).key;
      DStack_11._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
      uStack_1 = 1;
      pDStack_12 = &DStack_11;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__MoveNext__
                          );
        if (bVar13 == 0) break;
        uStack_14 = DStack_11._current.key;
        uStack_15 = DStack_11._current.key;
        pOStack_16 = DStack_11._current.value;
        pOVar7 = (Object *)func_?();
        str1 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_WoID__0___MetaData__1__u000A,pOVar7,pOStack_16,
                          (MethodInfo *)0x0);
        pSVar8 = mscorlib.dll::System::String::String_Concat_3(pSVar8,str1,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_11,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__Dispose__
                 ,in_stack_17);
      *unaff_FS_OFFSET = uStack_3;
      return pSVar8;
    }
  }
  uVar18 = func_?();
  func_?(uVar18);
  pcVar19 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar19)();
  return pSVar8;
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
            );
  pMVar1 = (MethodInfo *)&this->fields;
  ((MvAvatarMetaDataWoMap__Fields *)pMVar1)->avatarWOIDAvatarMetaData =
       (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)this_00;
  func_?(pMVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
  if (bp != (BytePacker *)0x0) {
    iVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    this = (MvAvatarMetaDataWoMap *)0x0;
    if (0 < iVar2) {
      do {
        puVar3 = &UNK_?;
        BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        key = &UNK_?;
        value = (Object *)func_?(TypeInfo__MV__WorldObject__MvAvatarMetaData);
        if (cRam_? == '\0') {
          func_?(&::StringLiteral__);
          cRam_? = '\x01';
        }
        ppMVar4 = &value[1].monitor;
        value[1].klass = (Object__Class *)0xffffffff;
        *ppMVar4 = (MonitorData *)::StringLiteral__;
        puVar5 = (undefined4 *)&UNK_?;
        value_00 = (Object *)ppMVar4;
        func_?(ppMVar4,::StringLiteral__);
        value[2].klass = (Object__Class *)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (value,ExceptionArgument__Enum_obj,in_stack_6);
        pOVar7 = (Object__Class *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        value[1].klass = pOVar7;
        count = 0;
        iVar8 = 0;
        do {
          if (iVar8 == 0x23) goto code_?;
          uVar9 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
          count = count | (uVar9 & 0x7f) << ((byte)iVar8 & 0x1f);
          iVar8 = iVar8 + 7;
        } while ((char)uVar9 < '\0');
        pBVar10 = BytePacker::BytePacker_ReadBytes(bp,count,(MethodInfo *)0x0);
        pEVar11 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        if (pEVar11 == (Encoding *)0x0) goto code_?;
        pMVar12 = (MonitorData *)
                 (*(code *)(pEVar11->klass->vtable).GetString.method)
                           (pEVar11,pBVar10,(pEVar11->klass->vtable).GetString_1.methodPtr);
        *ppMVar4 = pMVar12;
        func_?(ppMVar4,pMVar12);
        pOVar7 = (Object__Class *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        value_00[2].klass = pOVar7;
        uVar9 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
        in_stack_6 = (MethodInfo *)0x0;
        *(bool *)&value_00[2].monitor = uVar9 != 0;
        uVar9 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
        *(bool *)((int)&value_00[2].monitor + 1) = uVar9 != 0;
        if ((Dictionary_2_System_Int32_System_Object_ *)*puVar5 ==
            (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)*puVar5,(int32_t)key,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                  );
        this = (MvAvatarMetaDataWoMap *)((int)&this->klass + 1);
      } while ((int)this < (int)puVar3);
    }
    return;
  }
code_?:
  func_?();
code_?:
  uVar13 = func_?(&TypeInfo__System__FormatException);
  this_01 = (FormatException *)func_?(uVar13);
  pMVar1 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Error_in_the_byte_stream__too_ma);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_01,message,pMVar1);
  uVar13 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Read7BitEncodedInt__);
  func_?(this_01,uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

