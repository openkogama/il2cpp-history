
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
  uVar10 = (*pcRam_?)(-(uint)(pBVar1 != (Byte__Array *)0x0) & (uint)pBVar1->vector,0x2800);
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)0x0;
  uStack_11 = uVar10;
  if (uVar10 < 0x2801) {
    if (cRam_? == '\0') {
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
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(
                             TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                             );
    pLStack_12 = this;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,0x10,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
              );
    startIndex = 0;
    if (uVar10 != 0) {
      while( true ) {
        do {
          uVar13 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt16
                            (pBStack_2,startIndex,(MethodInfo *)0x0);
          uVar10 = (uint)uVar13;
          pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,uVar10);
          mscorlib.dll::System::Array::Array_Copy_3
                    ((Array *)pBStack_2,startIndex + 2,(Array *)pBVar1,0,uVar10,(MethodInfo *)0x0);
          startIndex_00 = startIndex + 2 + uVar10;
          startIndex = startIndex_00 + 4;
          crc = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32
                          (pBStack_2,startIndex_00,(MethodInfo *)0x0);
          pFStack_14 = (FileData *)func_?(TypeInfo__MV__WorldObject__AntiCheat__FileData);
          MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor
                    (pFStack_14,pBVar1,crc,(MethodInfo *)0x0);
          this = pLStack_12;
          if (pLStack_12 ==
              (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
            func_?();
            pcVar15 = (code *)swi(3);
            pLVar16 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)(*pcVar15)();
            return pLVar16;
          }
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLStack_12,(Object *)pFStack_14,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__Add_MV__WorldObject__AntiCheat__FileData_
                    );
        } while ((int)startIndex >> 0x1f < 0);
        if ((int)startIndex < 0) break;
        if (uStack_11 <= startIndex) {
          return (List_1_MV_WorldObject_AntiCheat_FileData_ *)this;
        }
      }
    }
  }
  else {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Buffer_is_too_small__causing_und,(MethodInfo *)0x0);
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
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,0x10,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
            );
  startIndex = 0;
  if (numOfWrittenBytes != 0) {
    do {
      uVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt16
                        (crcData,startIndex,(MethodInfo *)0x0);
      length = (uint)uVar1;
      name = (Byte__Array *)func_?(TypeInfo__System__Byte,length);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)crcData,startIndex + 2,(Array *)name,0,length,(MethodInfo *)0x0);
      startIndex_00 = startIndex + 2 + length;
      startIndex = startIndex_00 + 4;
      crc = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32
                      (crcData,startIndex_00,(MethodInfo *)0x0);
      this_00 = (FileData *)func_?(TypeInfo__MV__WorldObject__AntiCheat__FileData);
      MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor
                (this_00,name,crc,(MethodInfo *)0x0);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        pLVar3 = (List_1_MV_WorldObject_AntiCheat_FileData_ *)(*pcVar2)();
        return pLVar3;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__Add_MV__WorldObject__AntiCheat__FileData_
                );
    } while (((int)startIndex >> 0x1f < 0) ||
            ((-1 < (int)startIndex && (startIndex < numOfWrittenBytes))));
  }
  return (List_1_MV_WorldObject_AntiCheat_FileData_ *)this;
}

