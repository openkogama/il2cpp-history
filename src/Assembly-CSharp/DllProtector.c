
/* Int32 FirstIndexOf(Byte[], Int32, Byte) */

int32_t Assembly-CSharp.dll::DllProtector::DllProtector_FirstIndexOf
                  (Byte__Array *data,int32_t startIndex,uint8_t val,MethodInfo *method)

{
  if (data == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  lVar3 = (longlong)startIndex;
  while( true ) {
    if ((uint)data->max_length <= (uint)startIndex) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    if (data->vector[lVar3] == val) break;
    lVar3 = lVar3 + 1;
    startIndex = startIndex + 1;
  }
  return startIndex;
}


/* List`1[MV.WorldObject.AntiCheat.FileData] GetCRCData() */

List_1_MV_WorldObject_AntiCheat_FileData_ *
Assembly-CSharp.dll::DllProtector::DllProtector_GetCRCData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Buffer_is_too_small__causing_und);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  crcData = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0x2800);
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xc;
    uStack_2 = 10;
    uStack_3 = 0;
    uStack_4 = 2;
    uStack_5 = 0xc;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  puVar8 = crcData->vector;
  if (crcData == (Byte__Array *)0x0) {
    puVar8 = (uint8_t *)0x0;
  }
  numOfWrittenBytes = (*pcRam_?)(puVar8);
  if (0x2800 < numOfWrittenBytes) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Buffer_is_too_small__causing_und,(MethodInfo *)0x0);
    return (List_1_MV_WorldObject_AntiCheat_FileData_ *)0x0;
  }
  pLVar9 = DllProtector_ParseCrcData(crcData,numOfWrittenBytes,(MethodInfo *)0x0);
  return pLVar9;
}


/* UInt32 GetCrcData(Byte[], Int32) */

uint32_t Assembly-CSharp.dll::DllProtector::DllProtector_GetCrcData
                   (Byte__Array *buffer,int32_t len,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xc;
    uStack_2 = 10;
    uStack_3 = 0;
    uStack_4 = 2;
    uStack_5 = 0xc;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  puVar8 = buffer->vector;
  if (buffer == (Byte__Array *)0x0) {
    puVar8 = (uint8_t *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*pcRam_?)(puVar8,len);
  return uVar9;
}


/* List`1[MV.WorldObject.AntiCheat.FileData] ParseCrcData(Byte[], UInt32) */

List_1_MV_WorldObject_AntiCheat_FileData_ *
Assembly-CSharp.dll::DllProtector::DllProtector_ParseCrcData
          (Byte__Array *crcData,uint32_t numOfWrittenBytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__AntiCheat__FileData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__Add_MV__WorldObject__AntiCheat__FileData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                        );
  pvVar2 = MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
           ->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pFVar3 = (FileData__Array *)FUN_?(pvVar2);
  bVar4 = iRam_? != 0;
  (pLVar1->fields)._items = pFVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (numOfWrittenBytes != 0) {
    uVar5 = 0;
    if (crcData == (Byte__Array *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                (ExceptionArgument__Enum_value,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      pLVar1 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)(*pcVar9)();
      return pLVar1;
    }
    do {
      if ((uint)crcData->max_length <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                  (ExceptionArgument__Enum_startIndex,
                   ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        pLVar1 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)(*pcVar9)();
        return pLVar1;
      }
      if ((int)crcData->max_length + -2 < (int)uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                  (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                   (MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        pLVar1 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)(*pcVar9)();
        return pLVar1;
      }
      uVar10 = (uint)*(ushort *)(crcData->vector + (int)uVar5);
      destinationArray = (Array *)FUN_?(TypeInfo__System__Byte,uVar10);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)crcData,uVar5 + 2,destinationArray,0,uVar10,(MethodInfo *)0x0);
      uVar10 = uVar5 + 2 + uVar10;
      if ((uint)crcData->max_length <= uVar10) goto code_?;
      if ((int)crcData->max_length + -4 < (int)uVar10) goto code_?;
      uVar5 = uVar10 + 4;
      uVar11 = *(undefined4 *)(crcData->vector + (int)uVar10);
      item = (Object *)FUN_?(TypeInfo__MV__WorldObject__AntiCheat__FileData);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = (Object__Class *)
             FUN_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte___ctor_1
                ((List_1_System_Byte_ *)this,(IEnumerable_1_System_Byte_ *)destinationArray,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                );
      bVar4 = iRam_? != 0;
      item[1].klass = this;
      if (bVar4) {
        uVar10 = (uint)((ulonglong)(item + 1) >> 0xc);
        lVar6 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      *(undefined4 *)&item[1].monitor = uVar11;
      pMVar12 = 
      MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__Add_MV__WorldObject__AntiCheat__FileData_
      ;
      piVar13 = &(pLVar1->fields)._version;
      *piVar13 = *piVar13 + 1;
      pFVar3 = (pLVar1->fields)._items;
      if (pFVar3 == (FileData__Array *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        pLVar1 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)(*pcVar9)();
        return pLVar1;
      }
      uVar10 = (pLVar1->fields)._size;
      if (uVar10 < (uint)pFVar3->max_length) {
        (pLVar1->fields)._size = uVar10 + 1;
        FUN_?();
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,item,pMVar12->klass->rgctx_data[0xe].method);
      }
    } while ((longlong)(int)uVar5 < (longlong)(ulonglong)numOfWrittenBytes);
  }
  return pLVar1;
}

