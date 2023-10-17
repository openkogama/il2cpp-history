
/* Int32 FirstIndexOf(Byte[], Int32, Byte) */

int32_t Assembly-CSharp.dll::DllProtector::DllProtector_FirstIndexOf
                  (Byte__Array *data,int32_t startIndex,uint8_t val,MethodInfo *method)

{
  if (data == (Byte__Array *)0x0) {
    func_?();
  }
  else {
    for (; (uint)startIndex < data->max_length; startIndex = startIndex + 1) {
      if (data->vector[startIndex] == val) {
        return startIndex;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* List`1[MV.WorldObject.AntiCheat.FileData] GetCRCData() */

List_1_MV_WorldObject_AntiCheat_FileData_ *
Assembly-CSharp.dll::DllProtector::DllProtector_GetCRCData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Buffer_is_too_small__causing_und);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x2800);
  pBStack_2 = pBVar1;
  if (pcRam_? == (code *)0x0) {
    pcStack_3 = pcRam_?;
    uStack_4 = 0;
    uStack_5 = 0xc;
    uStack_6 = 10;
    uStack_7 = 2;
    uStack_8 = 8;
    pcRam_? = (code *)func_?(&puStack_9);
  }
  puVar10 = (uint8_t *)0x0;
  if (pBVar1 != (Byte__Array *)0x0) {
    puVar10 = pBVar1->vector;
  }
  uVar11 = (*pcRam_?)(puVar10,0x2800);
  uStack_12 = uVar11;
  if (0x2800 < uVar11) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Buffer_is_too_small__causing_und,(MethodInfo *)0x0);
    return (List_1_MV_WorldObject_AntiCheat_FileData_ *)0x0;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__BitConverter);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__AntiCheat__FileData);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__Add_MV__WorldObject__AntiCheat__FileData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                   );
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                        );
  if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
code_?:
    func_?();
    pcVar13 = (code *)swi(3);
    pLVar14 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)(*pcVar13)();
    return pLVar14;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
            (this,0x10,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
            );
  startIndex = 0;
  if (uVar11 != 0) {
    do {
      if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__BitConverter);
      }
      uVar15 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt16
                        (pBStack_2,startIndex,(MethodInfo *)0x0);
      uVar11 = (uint)uVar15;
      pBStack_16 = (Byte__Array *)func_?(TypeInfo__System__Byte,uVar11);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)pBStack_2,startIndex + 2,(Array *)pBStack_16,0,uVar11,(MethodInfo *)0x0);
      startIndex_00 = startIndex + 2 + uVar11;
      startIndex = startIndex_00 + 4;
      uStack_17 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32
                           (pBStack_2,startIndex_00,(MethodInfo *)0x0);
      this_00 = (FileData *)func_?(TypeInfo__MV__WorldObject__AntiCheat__FileData);
      if (this_00 == (FileData *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor_2
                (this_00,pBStack_16,uStack_17,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__Add_MV__WorldObject__AntiCheat__FileData_
                );
    } while (((int)startIndex >> 0x1f < 0) || ((-1 < (int)startIndex && (startIndex < uStack_12))));
  }
  return (List_1_MV_WorldObject_AntiCheat_FileData_ *)this;
}


/* UInt32 GetCrcData(Byte[], Int32) */

uint32_t Assembly-CSharp.dll::DllProtector::DllProtector_GetCrcData
                   (Byte__Array *buffer,int32_t len,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    uStack_2 = 0;
    uStack_3 = 0xc;
    uStack_4 = 10;
    uStack_5 = 2;
    uStack_6 = 8;
    pcRam_? = (code *)func_?(&puStack_7);
  }
  uVar8 = (*pcRam_?)(-(uint)(buffer != (Byte__Array *)0x0) & (uint)buffer->vector,len);
  return uVar8;
}


/* List`1[MV.WorldObject.AntiCheat.FileData] ParseCrcData(Byte[], UInt32) */

List_1_MV_WorldObject_AntiCheat_FileData_ *
Assembly-CSharp.dll::DllProtector::DllProtector_ParseCrcData
          (Byte__Array *crcData,uint32_t numOfWrittenBytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__BitConverter);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__AntiCheat__FileData);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__Add_MV__WorldObject__AntiCheat__FileData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                   );
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                        );
  if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)(*pcVar1)();
    return pLVar2;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
            (this,0x10,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
            );
  startIndex = 0;
  if (numOfWrittenBytes != 0) {
    do {
      if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__BitConverter);
      }
      uVar3 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt16
                        (crcData,startIndex,(MethodInfo *)0x0);
      length = (uint)uVar3;
      name = (Byte__Array *)func_?(TypeInfo__System__Byte,length);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)crcData,startIndex + 2,(Array *)name,0,length,(MethodInfo *)0x0);
      startIndex_00 = startIndex + 2 + length;
      startIndex = startIndex_00 + 4;
      crc = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32
                      (crcData,startIndex_00,(MethodInfo *)0x0);
      this_00 = (FileData *)func_?(TypeInfo__MV__WorldObject__AntiCheat__FileData);
      if (this_00 == (FileData *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor_2
                (this_00,name,crc,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__Add_MV__WorldObject__AntiCheat__FileData_
                );
    } while (((int)startIndex >> 0x1f < 0) ||
            ((-1 < (int)startIndex && (startIndex < numOfWrittenBytes))));
  }
  return (List_1_MV_WorldObject_AntiCheat_FileData_ *)this;
}

