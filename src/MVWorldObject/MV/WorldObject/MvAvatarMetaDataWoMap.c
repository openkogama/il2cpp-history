
/* Void Add(Int32, MvAvatarMetaData) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
               (MvAvatarMetaDataWoMap *this,int32_t woID,MvAvatarMetaData *avatarMetaData,
               MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__set_Item_int__MV__WorldObject__MvAvatarMetaData_
                  ,CONCAT44(in_register_00000014,woID),avatarMetaData,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarWOIDAvatarMetaData;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,(Object *)avatarMetaData,
               CONCAT31((int3)((uint)uVar1 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__set_Item_int__MV__WorldObject__MvAvatarMetaData_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).avatarWOIDAvatarMetaData;
  pOStackX_8 = (Object *)0x0;
  if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
    ;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,prevAvatarWoID,&pOStackX_8
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                      );
    if (bVar3 == 0) {
      uVar4 = func_?(&TypeInfo__System__ArgumentException);
      this_00 = (InvalidEnumArgumentException *)func_?(uVar4);
      message = (String *)func_?(&StringLiteral_AvatarWo_not_present_in_avatarWO);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_00,message,(MethodInfo *)0x0);
      uVar4 = func_?(&
                                  MethodInfo__MV__WorldObject__MvAvatarMetaDataWoMap__ResetAvatar_int__int_
                                 );
      FUN_?(this_00,uVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pDVar1 = (this->fields).avatarWOIDAvatarMetaData;
    if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,prevAvatarWoID,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Remove_int_
                );
      pDVar1 = (this->fields).avatarWOIDAvatarMetaData;
      if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,newAvatarWoID,pOStackX_8,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar2 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_ToString
                   (MvAvatarMetaDataWoMap *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MvAvatarMetaData>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MvAvatarMetaData>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Count___0__u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WoID__0___MetaData__1__u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).avatarWOIDAvatarMetaData;
  if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
    auStackX_8[0] = (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
    pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
    pSVar3 = StringLiteral_Count___0__u000A;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,pOVar2,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_4._arg0;
    PStack_5._arg1 = PStack_4._arg1;
    PStack_5._arg2 = PStack_4._arg2;
    PStack_5._args = PStack_4._args;
    pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
    PStack_6._arg0 = (Object *)(this->fields).avatarWOIDAvatarMetaData;
    if ((Dictionary_2_System_UInt32_System_Object_ *)PStack_6._arg0 !=
        (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      PStack_6._arg2 = (Object *)0x0;
      PStack_6._args = (Object__Array *)0x0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&PStack_6 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      PStack_6._arg1 =
           (Object *)
           (ulonglong)
           (uint)(((Dictionary_2_System_UInt32_System_Object_ *)PStack_6._arg0)->fields)._version;
      uStack_11 = 2;
      auStack_12._8_8_ = PStack_6._arg1;
      KStack_13.key = 0;
      KStack_13._4_4_ = 0;
      KStack_13.value = (Object *)0x0;
      uStack_14._0_4_ = 2;
      uStack_14._4_4_ = 0;
      uStack_15 = 0;
      puStack_16 = auStack_12;
      auStack_12._0_8_ = PStack_6._arg0;
      while (bVar17 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                                auStack_12,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__MoveNext__
                               ), pOVar2 = KStack_13.value, bVar17 != 0) {
        auStackX_8[0] = KStack_13.key;
        arg0 = (Object *)FUN_?(uRam_?,auStackX_8);
        pSVar18 = StringLiteral_WoID__0___MetaData__1__u000A;
        PStack_5._arg0 = (Object *)0x0;
        PStack_5._arg1 = (Object *)0x0;
        PStack_5._arg2 = (Object *)0x0;
        PStack_5._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                  (&PStack_5,arg0,pOVar2,(MethodInfo *)0x0);
        PStack_6._arg0 = PStack_5._arg0;
        PStack_6._arg1 = PStack_5._arg1;
        PStack_6._arg2 = PStack_5._arg2;
        PStack_6._args = PStack_5._args;
        pSVar18 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar18,&PStack_6,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,pSVar18,(MethodInfo *)0x0);
      }
      return pSVar3;
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar19)();
  return pSVar3;
}


/* Boolean TryGetValue(Int32, MvAvatarMetaData ByRef) */

bool MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_TryGetValue
               (MvAvatarMetaDataWoMap *this,int32_t woID,MvAvatarMetaData **avatarMetaData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
            (this->fields).avatarWOIDAvatarMetaData;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,woID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar3 < 0) {
    *avatarMetaData = (MvAvatarMetaData *)0x0;
    return 0;
  }
  pDVar4 = (this_00->fields)._entries;
  if (pDVar4 == (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((uint)pDVar4->max_length <= uVar3) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  bVar5 = iRam_? != 0;
  *avatarMetaData = *(MvAvatarMetaData **)&pDVar4->vector[(int)uVar3].value.y;
  if (bVar5) {
    uVar3 = (uint)((ulonglong)avatarMetaData >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return 1;
}


/* MvAvatarMetaDataWoMap() */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
               (MvAvatarMetaDataWoMap *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).avatarWOIDAvatarMetaData =
       (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)this_00;
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


/* MvAvatarMetaDataWoMap(BytePacker) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor_1
               (MvAvatarMetaDataWoMap *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MvAvatarMetaData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).avatarWOIDAvatarMetaData =
       (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)this_01;
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
  if (bp == (BytePacker *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar7 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      key = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      this_02 = (MvAvatarMetaData *)FUN_?(TypeInfo__MV__WorldObject__MvAvatarMetaData);
      MvAvatarMetaData::MvAvatarMetaData__ctor(this_02,bp,(MethodInfo *)0x0);
      this_00 = (this->fields).avatarWOIDAvatarMetaData;
      if (this_00 == (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0)
      goto code_?;
      in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object *)this_02,in_R9D,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                 ->klass->rgctx_data[0x22].method);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  return;
}

