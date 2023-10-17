
/* Void Add(Int32, MvAvatarMetaData) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
               (MvAvatarMetaDataWoMap *this,int32_t woID,MvAvatarMetaData *avatarMetaData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarWOIDAvatarMetaData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)woID,(Object *)avatarMetaData,
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
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarWOIDAvatarMetaData;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar1,(Object *)prevAvatarWoID,(Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                      );
    if (bVar2 == 0) goto code_?;
    this_01 = (this->fields).avatarWOIDAvatarMetaData;
    if (this_01 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,prevAvatarWoID,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Remove_int_
                );
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarWOIDAvatarMetaData;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar1,(Object *)this_01,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                  );
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  this_00 = (ArgumentException *)func_?();
  func_?();
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_00,message,method_00);
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Byte[] ToByteArray() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_ToByteArray
          (MvAvatarMetaDataWoMap *this,MethodInfo *method)

{
  pBVar1 = (BytePacker *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MvAvatarMetaData>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MvAvatarMetaData>__get_Value__
                   );
    cRam_? = '\x01';
  }
  this_02 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (this_02 != (BytePacker *)0x0) {
    pBVar2 = this_02;
    BytePacker::BytePacker__ctor(this_02,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).avatarWOIDAvatarMetaData;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__get_Count__
                        );
      BytePacker::BytePacker_Write_7(this_02,value,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarWOIDAvatarMetaData
      ;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &pDStack_4,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__GetEnumerator__
                           );
        method_00 = (MethodInfo *)(pDVar3->_current).key;
        uVar5 = *(undefined8 *)&(pDVar3->_current).value;
        while( true ) {
          pOVar6 = (Object *)uVar5;
          bVar7 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                             &stack0xffffffac,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__MoveNext__
                            );
          if (bVar7 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffac,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__Dispose__
                       ,method_00);
            pBVar8 = BytePacker::BytePacker_ToArray(this_02,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pBVar1;
            return pBVar8;
          }
          pOVar9 = pOVar6;
          BytePacker::BytePacker_Write_7(pBVar2,(int32_t)method_00,(MethodInfo *)0x0);
          if (pOVar6 == (Object *)0x0) break;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pBVar2 = (BytePacker *)func_?();
          if (pBVar2 == (BytePacker *)0x0) break;
          method_00 = (MethodInfo *)&UNK_?;
          BytePacker::BytePacker__ctor(pBVar2,(MethodInfo *)0x0);
          uVar5._4_4_ = (int32_t)pBVar2;
          uVar5._0_4_ = (Object *)&UNK_?;
          BytePacker::BytePacker_Write_7(pBVar2,(int32_t)pOVar9[1].klass,(MethodInfo *)0x0);
          BytePacker::BytePacker_Write_11(pBVar2,(String *)pOVar9[1].monitor,(MethodInfo *)0x0);
          uVar10 = 0;
          BytePacker::BytePacker_Write_7(pBVar2,(int32_t)pOVar9[2].klass,(MethodInfo *)0x0);
          iVar11 = CONCAT31((int3)((uint)uVar10 >> 8),*(bool *)&pOVar9[2].monitor);
          this_02 = pBVar2;
          BytePacker::BytePacker_Write_3(pBVar2,*(bool *)&pOVar9[2].monitor,(MethodInfo *)0x0);
          pBVar1 = pBVar2;
          BytePacker::BytePacker_Write_3(pBVar2,*(bool *)(iVar11 + 0x15),(MethodInfo *)0x0);
          pBVar8 = BytePacker::BytePacker_ToArray(pBVar2,(MethodInfo *)0x0);
          pBVar2 = this_02;
          BytePacker::BytePacker_Write_1(this_02,pBVar8,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pBVar8 = (Byte__Array *)(*pcVar12)();
  return pBVar8;
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
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).avatarWOIDAvatarMetaData;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    iStack_7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__get_Count__
                          );
    pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    pSVar9 = mscorlib.dll::System::String::String_Format
                       (StringLiteral_Count___0__u000A,pOVar8,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarWOIDAvatarMetaData;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffa0,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__GetEnumerator__
                         );
      uStack_11 = 0;
      DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10->_dictionary;
      DStack_6._version = pDVar10->_version;
      DStack_6._index = pDVar10->_index;
      DStack_6._current.key = (int32_t)(pDVar10->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
      uStack_1 = 1;
      pDStack_12 = &DStack_6;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__MoveNext__
                          );
        if (bVar13 == 0) break;
        pOStack_14 = (Object *)DStack_6._current.key;
        pOStack_15 = (Object *)DStack_6._current.key;
        pOStack_16 = DStack_6._current.value;
        pOVar8 = (Object *)func_?();
        str1 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_WoID__0___MetaData__1__u000A,pOVar8,pOStack_16,
                          (MethodInfo *)0x0);
        pSVar9 = mscorlib.dll::System::String::String_Concat_3(pSVar9,str1,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarWOIDAvatarMetaData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_00,(Object *)woID,(Object **)avatarMetaData,
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


/* MvAvatarMetaDataWoMap() */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
               (MvAvatarMetaDataWoMap *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).avatarWOIDAvatarMetaData = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MvAvatarMetaDataWoMap(BytePacker) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor_1
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
  this_01 = (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>
                           );
  if (this_01 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
              );
    (this->fields).avatarWOIDAvatarMetaData = this_01;
    func_?(&this->fields,this_01);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_1);
    if (bp != (BytePacker *)0x0) {
      iVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          key = (Object *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pMVar4 = TypeInfo__MV__WorldObject__MvAvatarMetaData;
          value = (Object *)func_?();
          if (value == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            func_?(&::StringLiteral__);
            cRam_? = '\x01';
          }
          value[1].klass = (Object__Class *)0xffffffff;
          value[1].monitor = (MonitorData *)::StringLiteral__;
          method_00 = (MethodInfo *)&value[1].monitor;
          func_?(method_00,::StringLiteral__);
          value[2].klass = (Object__Class *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,method_00);
          pOVar5 = (Object__Class *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          value[1].klass = pOVar5;
          pSVar6 = BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
          value[1].monitor = (MonitorData *)pSVar6;
          func_?(&value[1].monitor,pSVar6);
          pOVar5 = (Object__Class *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          value[2].klass = pOVar5;
          bVar7 = BytePacker::BytePacker_ReadBoolean(bp,(MethodInfo *)0x0);
          *(bool *)&value[2].monitor = bVar7;
          bVar7 = BytePacker::BytePacker_ReadBoolean(bp,(MethodInfo *)0x0);
          *(bool *)((int)&value[2].monitor + 1) = bVar7;
          this_00 = (Dictionary_2_System_Object_System_Object_ *)
                    (this->fields).avatarWOIDAvatarMetaData;
          if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                    );
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)pMVar4);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

