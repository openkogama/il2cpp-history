
/* Int32 Read7BitEncodedInt() */

int32_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Read7BitEncodedInt
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  iVar2 = 0;
  while (iVar2 != 0x23) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar3 = (this->fields)._buffer;
    pOVar4 = (Object *)(this->fields)._position;
    if (pLVar3 == (List_1_System_Byte__1 *)0x0) goto code_?;
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    if (pOVar4 == pOVar5) goto code_?;
    index = (this->fields)._position;
    pLVar3 = (this->fields)._buffer;
    (this->fields)._position = index + 1;
    if (pLVar3 == (List_1_System_Byte__1 *)0x0) goto code_?;
    uVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
            List_1_System_Byte__1_get_Item
                      (pLVar3,index,
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
    ;
    bVar7 = (byte)iVar2;
    iVar2 = iVar2 + 7;
    uVar1 = uVar1 | (uVar6 & 0x7f) << (bVar7 & 0x1f);
    if (-1 < (char)uVar6) {
      return uVar1;
    }
  }
  this_00 = (FormatException *)func_?(TypeInfo__System__FormatException);
  mscorlib.dll::System::FormatException::FormatException__ctor_1
            (this_00,StringLiteral_Error_in_the_byte_stream__too_ma,(MethodInfo *)0x0);
  func_?(this_00,0,MethodInfo__MV__WorldObject__BytePacker__Read7BitEncodedInt__);
code_?:
  this_01 = (JsonSchemaException *)func_?(TypeInfo__MV__WorldObject__EndOfStreamException);
  Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_01,StringLiteral_The_end_of_the_stream_is_reached,(MethodInfo *)0x0);
  func_?(this_01,0,MethodInfo__MV__WorldObject__BytePacker__ReadByte__);
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  iVar9 = (*pcVar8)();
  return iVar9;
}


/* Boolean ReadBoolean() */

bool MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBoolean
               (BytePacker *this,MethodInfo *method)

{
  uVar1 = BytePacker_ReadByte(this,(MethodInfo *)0x0);
  return uVar1 != 0;
}


/* Byte ReadByte() */

uint8_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  pOVar2 = (Object *)(this->fields)._position;
  if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    if (pOVar2 == pOVar3) goto code_?;
    index = (this->fields)._position;
    pLVar1 = (this->fields)._buffer;
    (this->fields)._position = index + 1;
    if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
              List_1_System_Byte__1_get_Item
                        (pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      return uVar4;
    }
  }
  func_?();
code_?:
  this_00 = (JsonSchemaException *)func_?(TypeInfo__MV__WorldObject__EndOfStreamException);
  Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_The_end_of_the_stream_is_reached,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar5 = (code *)swi(3);
  uVar4 = (*pcVar5)();
  return uVar4;
}


/* Byte[] ReadBytes(Int32) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
          (BytePacker *this,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  iVar2 = (this->fields)._position;
  if (pLVar1 == (List_1_System_Byte__1 *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    if (iVar2 + count <= (int)pOVar4) {
      pBVar5 = (Byte__Array *)func_?(TypeInfo__System__Byte,count);
      uVar6 = 0;
      if (0 < count) {
        do {
          iVar2 = (this->fields)._position;
          pLVar1 = (this->fields)._buffer;
          (this->fields)._position = iVar2 + 1;
          if (pLVar1 == (List_1_System_Byte__1 *)0x0) goto code_?;
          uVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                  List_1_System_Byte__1_get_Item
                            (pLVar1,iVar2,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          if (pBVar5 == (Byte__Array *)0x0) goto code_?;
          if (pBVar5->max_length <= uVar6) goto code_?;
          pBVar5->vector[uVar6] = uVar7;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < count);
      }
      return pBVar5;
    }
  }
  this_00 = (JsonSchemaException *)func_?(TypeInfo__MV__WorldObject__EndOfStreamException);
  Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_The_number_of_bytes_to_read_exce,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar8 = (code *)swi(3);
  pBVar5 = (Byte__Array *)(*pcVar8)();
  return pBVar5;
}


/* Int16 ReadInt16() */

int16_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  iVar2 = (this->fields)._position;
  if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    if ((int)pOVar3 < iVar2 + 2) goto code_?;
    iVar2 = (this->fields)._position;
    pLVar1 = (this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
              List_1_System_Byte__1_get_Item
                        (pLVar1,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      iVar2 = (this->fields)._position;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
        uVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                List_1_System_Byte__1_get_Item
                          (pLVar1,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        return CONCAT11(uVar4,uVar5);
      }
    }
  }
  func_?(0);
code_?:
  this_00 = (JsonSchemaException *)func_?(TypeInfo__MV__WorldObject__EndOfStreamException);
  Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_The_end_of_the_stream_is_reached,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Int32 ReadInt32() */

int32_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  iVar2 = (this->fields)._position;
  if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    if ((int)pOVar3 < iVar2 + 4) goto code_?;
    iVar2 = (this->fields)._position;
    pLVar1 = (this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
              List_1_System_Byte__1_get_Item
                        (pLVar1,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      iVar2 = (this->fields)._position;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
        uVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                List_1_System_Byte__1_get_Item
                          (pLVar1,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        iVar2 = (this->fields)._position;
        pLVar1 = (this->fields)._buffer;
        (this->fields)._position = iVar2 + 1;
        if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
          uVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                  List_1_System_Byte__1_get_Item
                            (pLVar1,iVar2,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          iVar2 = (this->fields)._position;
          pLVar1 = (this->fields)._buffer;
          (this->fields)._position = iVar2 + 1;
          if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
            uVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                    List_1_System_Byte__1_get_Item
                              (pLVar1,iVar2,
                               MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                              );
            return (uint)uVar7 | (uint)uVar6 << 8 | (uint)uVar5 << 0x10 | (uint)uVar4 << 0x18;
          }
        }
      }
    }
  }
  func_?();
code_?:
  this_00 = (JsonSchemaException *)func_?(TypeInfo__MV__WorldObject__EndOfStreamException);
  Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_The_end_of_the_stream_is_reached,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar8 = (code *)swi(3);
  iVar9 = (*pcVar8)();
  return iVar9;
}


/* Int64 ReadInt64() */

int64_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt64
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  iVar2 = (this->fields)._position;
  if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    if ((int)pOVar3 < iVar2 + 8) goto code_?;
    iVar2 = (this->fields)._position;
    pLVar1 = (this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
              List_1_System_Byte__1_get_Item
                        (pLVar1,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      iVar2 = (this->fields)._position;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
        uVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                List_1_System_Byte__1_get_Item
                          (pLVar1,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        index = (this->fields)._position;
        pLVar1 = (this->fields)._buffer;
        (this->fields)._position = index + 1;
        if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
          uVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                  List_1_System_Byte__1_get_Item
                            (pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          iVar2 = (this->fields)._position;
          pLVar1 = (this->fields)._buffer;
          (this->fields)._position = iVar2 + 1;
          if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
            uVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                    List_1_System_Byte__1_get_Item
                              (pLVar1,iVar2,
                               MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                              );
            iVar2 = (this->fields)._position;
            uVar8 = (uint)uVar7 | (uint)uVar6 << 8 | (uint)uVar5 << 0x10 | (uint)uVar4 << 0x18;
            pLVar1 = (this->fields)._buffer;
            (this->fields)._position = iVar2 + 1;
            if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
              uVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                      List_1_System_Byte__1_get_Item
                                (pLVar1,iVar2,
                                 MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                );
              pLVar1 = (this->fields)._buffer;
              iVar2 = (this->fields)._position;
              (this->fields)._position = iVar2 + 1;
              if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
                uVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                        List_1_System_Byte__1_get_Item
                                  (pLVar1,iVar2,
                                   MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                  );
                pLVar1 = (this->fields)._buffer;
                iVar2 = (this->fields)._position;
                (this->fields)._position = iVar2 + 1;
                if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
                  uVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                          List_1_System_Byte__1_get_Item
                                    (pLVar1,iVar2,
                                     MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                    );
                  pLVar1 = (this->fields)._buffer;
                  iVar2 = (this->fields)._position;
                  (this->fields)._position = iVar2 + 1;
                  if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
                    uVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                            List_1_System_Byte__1_get_Item
                                      (pLVar1,iVar2,
                                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                      );
                    return CONCAT44(uVar8,(uint)uVar7 |
                                          (uint)uVar6 << 8 |
                                          (uint)uVar5 << 0x10 | (uint)uVar4 << 0x18 | index);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  this_00 = (JsonSchemaException *)func_?(TypeInfo__MV__WorldObject__EndOfStreamException);
  Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_The_end_of_the_stream_is_reached,(MethodInfo *)0x0);
  func_?(this_00,0,MethodInfo__MV__WorldObject__BytePacker__ReadUInt64__);
  pcVar9 = (code *)swi(3);
  iVar10 = (*pcVar9)();
  return iVar10;
}


/* Single ReadSingle() */

float MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadSingle
                (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = BytePacker_ReadBytes(this,4,(MethodInfo *)0x0);
  mscorlib.dll::System::Array::Array_Reverse((Array *)value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?();
  }
  fVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(value,0,(MethodInfo *)0x0);
  return fVar1;
}


/* String ReadString() */

String * MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadString
                   (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  count = 0;
  iVar1 = 0;
  do {
    if (iVar1 == 0x23) {
      this_00 = (FormatException *)func_?(TypeInfo__System__FormatException);
      mscorlib.dll::System::FormatException::FormatException__ctor_1
                (this_00,StringLiteral_Error_in_the_byte_stream__too_ma,(MethodInfo *)0x0);
      func_?(this_00,0,MethodInfo__MV__WorldObject__BytePacker__Read7BitEncodedInt__);
      goto code_?;
    }
    uVar2 = BytePacker_ReadByte(this,(MethodInfo *)0x0);
    count = count | (uVar2 & 0x7f) << ((byte)iVar1 & 0x1f);
    iVar1 = iVar1 + 7;
  } while ((char)uVar2 < '\0');
  BytePacker_ReadBytes(this,count,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?();
  }
  pEVar3 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar3 != (Encoding *)0x0) {
    pSVar4 = (String *)(*(code *)(pEVar3->klass->vtable).GetString_1.method)(pEVar3);
    return pSVar4;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* UInt64 ReadUInt64() */

uint64_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadUInt64
                   (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  iVar2 = (this->fields)._position;
  if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    if ((int)pOVar3 < iVar2 + 8) goto code_?;
    iVar2 = (this->fields)._position;
    pLVar1 = (this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
              List_1_System_Byte__1_get_Item
                        (pLVar1,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      iVar2 = (this->fields)._position;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
        uVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                List_1_System_Byte__1_get_Item
                          (pLVar1,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        index = (this->fields)._position;
        pLVar1 = (this->fields)._buffer;
        (this->fields)._position = index + 1;
        if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
          uVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                  List_1_System_Byte__1_get_Item
                            (pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          iVar2 = (this->fields)._position;
          pLVar1 = (this->fields)._buffer;
          (this->fields)._position = iVar2 + 1;
          if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
            uVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                    List_1_System_Byte__1_get_Item
                              (pLVar1,iVar2,
                               MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                              );
            iVar2 = (this->fields)._position;
            uVar8 = (uint)uVar7 | (uint)uVar6 << 8 | (uint)uVar5 << 0x10 | (uint)uVar4 << 0x18;
            pLVar1 = (this->fields)._buffer;
            (this->fields)._position = iVar2 + 1;
            if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
              uVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                      List_1_System_Byte__1_get_Item
                                (pLVar1,iVar2,
                                 MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                );
              pLVar1 = (this->fields)._buffer;
              iVar2 = (this->fields)._position;
              (this->fields)._position = iVar2 + 1;
              if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
                uVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                        List_1_System_Byte__1_get_Item
                                  (pLVar1,iVar2,
                                   MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                  );
                pLVar1 = (this->fields)._buffer;
                iVar2 = (this->fields)._position;
                (this->fields)._position = iVar2 + 1;
                if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
                  uVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                          List_1_System_Byte__1_get_Item
                                    (pLVar1,iVar2,
                                     MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                    );
                  pLVar1 = (this->fields)._buffer;
                  iVar2 = (this->fields)._position;
                  (this->fields)._position = iVar2 + 1;
                  if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
                    uVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                            List_1_System_Byte__1_get_Item
                                      (pLVar1,iVar2,
                                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                      );
                    return CONCAT44(uVar8,(uint)uVar7 |
                                          (uint)uVar6 << 8 |
                                          (uint)uVar5 << 0x10 | (uint)uVar4 << 0x18 | index);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  this_00 = (JsonSchemaException *)func_?(TypeInfo__MV__WorldObject__EndOfStreamException);
  Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_The_end_of_the_stream_is_reached,(MethodInfo *)0x0);
  func_?(this_00,0,MethodInfo__MV__WorldObject__BytePacker__ReadUInt64__);
  pcVar9 = (code *)swi(3);
  uVar10 = (*pcVar9)();
  return uVar10;
}


/* Byte[] ToArray() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
          (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)(this->fields)._buffer;
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    return (Byte__Array *)pVVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pBVar3 = (Byte__Array *)(*pcVar2)();
  return pBVar3;
}


/* Void Write(Byte) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
               (BytePacker *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)(this->fields)._position;
  pLVar2 = (this->fields)._buffer;
  if (pLVar2 != (List_1_System_Byte__1 *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    pLVar2 = (this->fields)._buffer;
    if (pOVar1 == pOVar3) {
      if (pLVar2 != (List_1_System_Byte__1 *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte__1_Add
                  (pLVar2,value,
                   MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                  );
        piVar4 = &(this->fields)._position;
        *piVar4 = *piVar4 + 1;
        return;
      }
    }
    else if (pLVar2 != (List_1_System_Byte__1 *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
      List_1_System_Byte__1_set_Item
                (pLVar2,(this->fields)._position,value,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                );
      piVar4 = &(this->fields)._position;
      *piVar4 = *piVar4 + 1;
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Write(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_1
               (BytePacker *this,Byte__Array *buffer,MethodInfo *method)

{
  if (buffer != (Byte__Array *)0x0) {
    BytePacker_Write_2(this,buffer,0,buffer->max_length,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Write(Byte[], Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_2
               (BytePacker *this,Byte__Array *buffer,int32_t index,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (buffer == (Byte__Array *)0x0) {
    this_01 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
              ((ArgumentNullException *)this_01,StringLiteral_buffer,
               StringLiteral_The_buffer_cannot_be_null_,(MethodInfo *)0x0);
    goto code_?;
  }
  if (-1 < index) {
    if (-1 < count) {
      if (count + index <= (int)buffer->max_length) {
        pLVar1 = (this->fields)._buffer;
        if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                              MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__
                             );
          iVar3 = 0;
          index_00 = (this->fields)._position;
          iVar4 = index_00;
          uVar5 = index;
          while (index_00 < (int)pOVar2) {
            if (count <= iVar3) goto code_?;
            pLVar1 = (this->fields)._buffer;
            (this->fields)._position = index_00 + 1;
            if (buffer->max_length <= uVar5) goto code_?;
            if (pLVar1 == (List_1_System_Byte__1 *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
            List_1_System_Byte__1_set_Item
                      (pLVar1,index_00,buffer->vector[uVar5],
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                      );
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + 1;
            index_00 = (this->fields)._position;
          }
          if (iVar3 < count) {
            uVar5 = index + iVar3;
            do {
              if (buffer->max_length <= uVar5) goto code_?;
              pLVar1 = (this->fields)._buffer;
              if (pLVar1 == (List_1_System_Byte__1 *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
              List_1_System_Byte__1_Add
                        (pLVar1,buffer->vector[uVar5],
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                        );
              iVar3 = iVar3 + 1;
              uVar5 = uVar5 + 1;
            } while (iVar3 < count);
          }
code_?:
          (this->fields)._position = iVar4 + iVar3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
  this_01 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  paramName = StringLiteral_index;
  message = StringLiteral_The_index_has_to_be_a_non_negati;
code_?:
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this_01,paramName,message,(MethodInfo *)0x0);
code_?:
  func_?(this_01,0,
                  MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
code_?:
  func_?(0);
code_?:
  this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,StringLiteral_The_number_of_bytes_to_copy_exce,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_);
code_?:
  this_01 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  paramName = StringLiteral_count;
  message = StringLiteral_The_count_has_to_be_a_non_negati;
  goto code_?;
}


/* Void Write(Int16) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
               (BytePacker *this,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  buffer = (Byte__Array *)func_?(TypeInfo__System__Byte,2);
  if (buffer == (Byte__Array *)0x0) {
    func_?();
  }
  else if (buffer->max_length != 0) {
    buffer->vector[0] = (uint8_t)((ushort)value >> 8);
    if (1 < buffer->max_length) {
      buffer->vector[1] = (uint8_t)value;
      BytePacker_Write_2(this,buffer,0,buffer->max_length,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Write(Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_6
               (BytePacker *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  buffer = (Byte__Array *)func_?(TypeInfo__System__Byte,4);
  if (buffer == (Byte__Array *)0x0) {
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    if (buffer->max_length == 0) goto code_?;
    buffer->vector[0] = (uint8_t)((uint)value >> 0x18);
    if (buffer->max_length < 2) goto code_?;
    buffer->vector[1] = (uint8_t)((uint)value >> 0x10);
    if (2 < buffer->max_length) {
      buffer->vector[2] = (uint8_t)((uint)value >> 8);
      if (3 < buffer->max_length) {
        buffer->vector[3] = (uint8_t)value;
        BytePacker_Write_2(this,buffer,0,buffer->max_length,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Write(Single) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_7
               (BytePacker *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  buffer = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value,(MethodInfo *)0x0);
  mscorlib.dll::System::Array::Array_Reverse((Array *)buffer,(MethodInfo *)0x0);
  if (buffer != (Byte__Array *)0x0) {
    BytePacker_Write_2((BytePacker *)0x0,buffer,0,buffer->max_length,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* BytePacker() */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor
               (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (List_1_System_Byte__1 *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte__1__ctor_1
            (this_00,0x20,MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
  (this->fields)._buffer = this_00;
  return;
}


/* BytePacker(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
               (BytePacker *this,Byte__Array *buffer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (buffer != (Byte__Array *)0x0) {
    this_00 = (List_1_VoxelHit_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this_00,(IEnumerable_1_VoxelHit_ *)buffer,
               MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
              );
    (this->fields)._buffer = (List_1_System_Byte__1 *)this_00;
    return;
  }
  this_01 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
            (this_01,StringLiteral_buffer,StringLiteral_The_buffer_cannot_be_null_,(MethodInfo *)0x0
            );
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_Length() */

int32_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._buffer;
  if (this_00 != (List_1_System_Byte__1 *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_Position(Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
               (BytePacker *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < 0) {
    this_01 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    message = StringLiteral_The_Position_has_to_be_a_non_neg;
  }
  else {
    this_00 = (this->fields)._buffer;
    if (this_00 == (List_1_System_Byte__1 *)0x0) goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    if (value <= (int)pOVar1) {
      (this->fields)._position = value;
      return;
    }
    this_01 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    message = StringLiteral_The_Position_cannot_exceed_the_l;
  }
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this_01,StringLiteral_value,message,(MethodInfo *)0x0);
  func_?(this_01,0);
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

