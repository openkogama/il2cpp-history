
/* Int32 FirstIndexOf(Byte[], Int32, Byte) */

int32_t Assembly-CSharp.dll::DllProtector::DllProtector_FirstIndexOf
                  (Byte__Array *data,int32_t startIndex,uint8_t val,MethodInfo *method)

{
  if (data == (Byte__Array *)0x0) {
    func_?(0);
  }
  else {
    for (; (uint)startIndex < data->max_length; startIndex = startIndex + 1) {
      if (data->vector[startIndex] == val) {
        return startIndex;
      }
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* List`1[MV.WorldObject.AntiCheat.FileData] GetCRCData() */

List_1_MV_WorldObject_AntiCheat_FileData_ *
Assembly-CSharp.dll::DllProtector::DllProtector_GetCRCData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    if (pcRam_? == (code *)0x0) {
code_?:
      uVar10 = func_?(&UNK_?,0,0);
      func_?(uVar10);
      pcVar11 = (code *)swi(3);
      pLVar12 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)(*pcVar11)();
      return pLVar12;
    }
  }
  puVar13 = (uint8_t *)0x0;
  if (pBVar1 != (Byte__Array *)0x0) {
    puVar13 = pBVar1->vector;
  }
  uStack_14 = (*pcRam_?)(puVar13,0x2800);
  if (0x2800 < uStack_14) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Buffer_is_too_small__causing_und,(MethodInfo *)0x0);
    return (List_1_MV_WorldObject_AntiCheat_FileData_ *)0x0;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_ThemeAttributes_ThemeAttribute_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                        );
  pLStack_15 = this;
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this,0x10,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
            );
  startIndex = 0;
  if (uStack_14 != 0) {
    do {
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__BitConverter);
      }
      uVar16 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt16
                        (pBVar1,startIndex,(MethodInfo *)0x0);
      length = (uint)uVar16;
      pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,length);
      mscorlib.dll::System::Array::Array_Copy_1
                ((Array *)pBStack_2,startIndex + 2,(Array *)pBVar1,0,length,(MethodInfo *)0x0);
      startIndex_00 = startIndex + 2 + length;
      startIndex = startIndex_00 + 4;
      crc = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32
                      (pBStack_2,startIndex_00,(MethodInfo *)0x0);
      pFStack_17 = (FileData *)func_?(TypeInfo__MV__WorldObject__AntiCheat__FileData);
      MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor
                (pFStack_17,pBVar1,crc,(MethodInfo *)0x0);
      this = pLStack_15;
      if (pLStack_15 == (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
        func_?(0);
        goto code_?;
      }
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLStack_15,(UIPushOption__Enum)pFStack_17,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__Add_MV__WorldObject__AntiCheat__FileData_
                );
      pBVar1 = pBStack_2;
    } while (((int)startIndex >> 0x1f < 0) || ((-1 < (int)startIndex && (startIndex < uStack_14))));
  }
  return (List_1_MV_WorldObject_AntiCheat_FileData_ *)this;
}


/* UInt32 GetCrcData(Byte[], Int32) */

uint32_t Assembly-CSharp.dll::DllProtector::DllProtector_GetCrcData
                   (Byte__Array *buffer,int32_t len,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 0xc;
    uStack_2 = 10;
    pcStack_3 = pcRam_?;
    uStack_4 = 2;
    uStack_5 = 8;
    uStack_6 = 0;
    pcRam_? = (code *)func_?(&puStack_7);
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      uVar10 = (*pcVar9)();
      return uVar10;
    }
  }
  uVar10 = (*pcRam_?)(-(uint)(buffer != (Byte__Array *)0x0) & (uint)buffer->vector,len);
  return uVar10;
}


/* List`1[MV.WorldObject.AntiCheat.FileData] ParseCrcData(Byte[], UInt32) */

List_1_MV_WorldObject_AntiCheat_FileData_ *
Assembly-CSharp.dll::DllProtector::DllProtector_ParseCrcData
          (Byte__Array *crcData,uint32_t numOfWrittenBytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_ThemeAttributes_ThemeAttribute_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                        );
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this,0x10,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
            );
  startIndex = 0;
  if (numOfWrittenBytes != 0) {
    do {
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__BitConverter);
      }
      uVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt16
                        (crcData,startIndex,(MethodInfo *)0x0);
      length = (uint)uVar1;
      name = (Byte__Array *)func_?(TypeInfo__System__Byte,length);
      mscorlib.dll::System::Array::Array_Copy_1
                ((Array *)crcData,startIndex + 2,(Array *)name,0,length,(MethodInfo *)0x0);
      startIndex_00 = startIndex + 2 + length;
      startIndex = startIndex_00 + 4;
      crc = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32
                      (crcData,startIndex_00,(MethodInfo *)0x0);
      this_00 = (FileData *)func_?(TypeInfo__MV__WorldObject__AntiCheat__FileData);
      MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor
                (this_00,name,crc,(MethodInfo *)0x0);
      if (this == (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
        func_?(0);
        pcVar2 = (code *)swi(3);
        pLVar3 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)(*pcVar2)();
        return pLVar3;
      }
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)this_00,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__Add_MV__WorldObject__AntiCheat__FileData_
                );
    } while (((int)startIndex >> 0x1f < 0) ||
            ((-1 < (int)startIndex && (startIndex < numOfWrittenBytes))));
  }
  return (List_1_MV_WorldObject_AntiCheat_FileData_ *)this;
}

