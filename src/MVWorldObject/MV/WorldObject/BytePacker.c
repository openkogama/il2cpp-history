
/* Void Clear() */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Clear
               (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    BytePacker_Delete_1(this,0,(pLVar1->fields)._size,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Delete(Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Delete
               (BytePacker *this,int32_t count,MethodInfo *method)

{
  BytePacker_Delete_1(this,(this->fields)._position,count,(MethodInfo *)0x0);
  return;
}


/* Void Delete(Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Delete_1
               (BytePacker *this,int32_t index,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__RemoveRange_int__int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    cRam_? = '\x01';
  }
  if (index < 0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar2 = (ArgumentOutOfRangeException *)func_?(uVar1);
    func_?(pAVar2);
    pSVar3 = (String *)func_?(&StringLiteral_The_index_has_to_be_a_non_negati);
    pSVar4 = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar2,pSVar4,pSVar3,(MethodInfo *)0x0);
    func_?(&MethodInfo__MV__WorldObject__BytePacker__Delete_int__int_);
    func_?(pAVar2);
code_?:
    uVar1 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (ArgumentException *)func_?(uVar1);
    func_?(this_01);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_The_number_of_bytes_to_delete_ex);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_01,pSVar3,method_00);
    uVar1 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Delete_int__int_);
    func_?(this_01,uVar1);
  }
  else {
    if (count < 0) goto code_?;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._buffer;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if (index + count <= (this_00->fields)._size) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__RemoveRange
                  (this_00,index,count,
                   MethodInfo__System__Collections__Generic__List<unsigned_char>__RemoveRange_int__int_
                  );
        (this->fields)._position = index;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar2 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(pAVar2);
  pSVar3 = (String *)func_?(&StringLiteral_The_count_has_to_be_a_non_negati);
  pSVar4 = (String *)func_?(&StringLiteral_count);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar2,pSVar4,pSVar3,(MethodInfo *)0x0);
  func_?(&MethodInfo__MV__WorldObject__BytePacker__Delete_int__int_);
  func_?(pAVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 Read7BitEncodedInt() */

int32_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Read7BitEncodedInt
                  (BytePacker *this,MethodInfo *method)

{
  uVar1 = 0;
  iVar2 = 0;
  while (iVar2 != 0x23) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
      func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
      ;
      cRam_? = '\x01';
    }
    pLVar3 = (this->fields)._buffer;
    if (pLVar3 == (List_1_System_Byte_ *)0x0) goto code_?;
    index = (this->fields)._position;
    if (index == (pLVar3->fields)._size) goto code_?;
    (this->fields)._position = index + 1;
    BVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
            List_1_System_ByteEnum__get_Item
                      ((List_1_System_ByteEnum_ *)(this->fields)._buffer,index,
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
    ;
    uVar1 = uVar1 | (BVar4 & 0x7f) << ((byte)iVar2 & 0x1f);
    iVar2 = iVar2 + 7;
    if (-1 < (char)BVar4) {
      return uVar1;
    }
  }
  uVar5 = func_?(&TypeInfo__System__FormatException);
  this_00 = (FormatException *)func_?(uVar5);
  func_?(this_00);
  pMVar6 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(&StringLiteral_Error_in_the_byte_stream__too_ma);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar7,pMVar6);
  uVar5 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Read7BitEncodedInt__);
  func_?(this_00,uVar5);
code_?:
  uVar5 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_01 = (EndOfStreamException_1 *)func_?(uVar5);
  func_?(this_01);
  pMVar6 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_01,pSVar7,pMVar6);
  uVar5 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadByte__);
  func_?(this_01,uVar5);
code_?:
  func_?();
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
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 == (List_1_System_Byte_ *)0x0) {
    func_?();
  }
  else {
    index = (this->fields)._position;
    if (index != (pLVar1->fields)._size) {
      (this->fields)._position = index + 1;
      BVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
              List_1_System_ByteEnum__get_Item
                        ((List_1_System_ByteEnum_ *)(this->fields)._buffer,index,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      return (uint8_t)BVar2;
    }
  }
  uVar3 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_00 = (EndOfStreamException_1 *)func_?(uVar3);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,method_00);
  func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadByte__);
  func_?(this_00);
  pcVar4 = (code *)swi(3);
  uVar5 = (*pcVar4)();
  return uVar5;
}


/* Byte[] ReadBytes(Int32) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
          (BytePacker *this,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 == (List_1_System_Byte_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else if ((this->fields)._position + count <= (pLVar1->fields)._size) {
    pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,count);
    uVar3 = 0;
    if (0 < count) {
      do {
        index = (this->fields)._position;
        this_00 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
        (this->fields)._position = index + 1;
        if (this_00 == (List_1_System_ByteEnum_ *)0x0) goto code_?;
        BVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                List_1_System_ByteEnum__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        if (pBVar2 == (Byte__Array *)0x0) goto code_?;
        if (pBVar2->max_length <= uVar3) goto code_?;
        pBVar2->vector[uVar3] = (uint8_t)BVar4;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < count);
    }
    return pBVar2;
  }
  uVar5 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_01 = (EndOfStreamException_1 *)func_?(uVar5);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_number_of_bytes_to_read_exce);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_01,message,method_00);
  uVar5 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadBytes_int_);
  func_?(this_01,uVar5);
  pcVar6 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar6)();
  return pBVar2;
}


/* Int16 ReadInt16() */

int16_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((pLVar1->fields)._size < (this->fields)._position + 2) goto code_?;
    iVar2 = (this->fields)._position;
    (this->fields)._position = iVar2 + 1;
    BVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
            List_1_System_ByteEnum__get_Item
                      ((List_1_System_ByteEnum_ *)(this->fields)._buffer,iVar2,
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
    ;
    iVar2 = (this->fields)._position;
    this_00 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (this_00 != (List_1_System_ByteEnum_ *)0x0) {
      BVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
              List_1_System_ByteEnum__get_Item
                        (this_00,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      return (ushort)BVar4 & 0xff | (ushort)((BVar3 & 0xff) << 8);
    }
  }
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_01 = (EndOfStreamException_1 *)func_?(uVar5);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_01,message,method_00);
  uVar5 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadUInt16__);
  func_?(this_01,uVar5);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Int32 ReadInt32() */

int32_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((pLVar1->fields)._size < (this->fields)._position + 4) goto code_?;
    iVar2 = (this->fields)._position;
    (this->fields)._position = iVar2 + 1;
    BVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
            List_1_System_ByteEnum__get_Item
                      ((List_1_System_ByteEnum_ *)(this->fields)._buffer,iVar2,
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
    ;
    iVar2 = (this->fields)._position;
    pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
      BVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
              List_1_System_ByteEnum__get_Item
                        (pLVar4,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      iVar2 = (this->fields)._position;
      pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
        BVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                List_1_System_ByteEnum__get_Item
                          (pLVar4,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        iVar2 = (this->fields)._position;
        pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
        (this->fields)._position = iVar2 + 1;
        if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
          BVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                  List_1_System_ByteEnum__get_Item
                            (pLVar4,iVar2,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          return BVar7 & 0xff | (BVar6 & 0xff) << 8 | (BVar5 & 0xff) << 0x10 | BVar3 << 0x18;
        }
      }
    }
  }
  func_?();
code_?:
  uVar8 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_00 = (EndOfStreamException_1 *)func_?(uVar8);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,method_00);
  uVar8 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadInt32__);
  func_?(this_00,uVar8);
  pcVar9 = (code *)swi(3);
  iVar10 = (*pcVar9)();
  return iVar10;
}


/* Int64 ReadInt64() */

int64_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt64
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((pLVar1->fields)._size < (this->fields)._position + 8) goto code_?;
    iVar2 = (this->fields)._position;
    (this->fields)._position = iVar2 + 1;
    BVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
            List_1_System_ByteEnum__get_Item
                      ((List_1_System_ByteEnum_ *)(this->fields)._buffer,iVar2,
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
    ;
    iVar2 = (this->fields)._position;
    pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
      BVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
              List_1_System_ByteEnum__get_Item
                        (pLVar4,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      iVar2 = (this->fields)._position;
      pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
        BVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                List_1_System_ByteEnum__get_Item
                          (pLVar4,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        iVar2 = (this->fields)._position;
        pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
        (this->fields)._position = iVar2 + 1;
        if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
          BVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                  List_1_System_ByteEnum__get_Item
                            (pLVar4,iVar2,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          iVar2 = (this->fields)._position;
          BVar3 = BVar7 & 0xff | (BVar6 & 0xff) << 8 | (BVar5 & 0xff) << 0x10 | BVar3 << 0x18;
          pLVar8 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
          (this->fields)._position = iVar2 + 1;
          if (pLVar8 != (List_1_System_ByteEnum_ *)0x0) {
            BVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                    List_1_System_ByteEnum__get_Item
                              (pLVar8,iVar2,
                               MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                              );
            pLVar8 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
            iVar2 = (this->fields)._position;
            (this->fields)._position = iVar2 + 1;
            if (pLVar8 != (List_1_System_ByteEnum_ *)0x0) {
              BVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                      List_1_System_ByteEnum__get_Item
                                (pLVar8,iVar2,
                                 MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                );
              pLVar8 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
              iVar2 = (this->fields)._position;
              (this->fields)._position = iVar2 + 1;
              if (pLVar8 != (List_1_System_ByteEnum_ *)0x0) {
                BVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                        List_1_System_ByteEnum__get_Item
                                  (pLVar8,iVar2,
                                   MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                  );
                pLVar8 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
                iVar2 = (this->fields)._position;
                (this->fields)._position = iVar2 + 1;
                if (pLVar8 != (List_1_System_ByteEnum_ *)0x0) {
                  BVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                           List_1_System_ByteEnum__get_Item
                                     (pLVar8,iVar2,
                                      MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                     );
                  return CONCAT44(BVar3,BVar9 & 0xff |
                                        (BVar7 & 0xff) << 8 |
                                        (BVar6 & 0xff) << 0x10 | BVar5 << 0x18 | (uint)pLVar4);
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
  uVar10 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_00 = (EndOfStreamException_1 *)func_?(uVar10);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,method_00);
  uVar10 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadUInt64__);
  func_?(this_00,uVar10);
  pcVar11 = (code *)swi(3);
  iVar12 = (*pcVar11)();
  return iVar12;
}


/* Single ReadSingle() */

float MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadSingle
                (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__BitConverter);
    cRam_? = '\x01';
  }
  value = BytePacker_ReadBytes(this,4,(MethodInfo *)0x0);
  mscorlib.dll::System::Array::Array_Reverse((Array *)value,(MethodInfo *)0x0);
  if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(value,0,(MethodInfo *)0x0);
  return fVar1;
}


/* String ReadString() */

String * MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadString
                   (BytePacker *this,MethodInfo *method)

{
  count = 0;
  iVar1 = 0;
  do {
    if (iVar1 == 0x23) {
      uVar2 = func_?(&TypeInfo__System__FormatException);
      this_00 = (FormatException *)func_?(uVar2);
      func_?(this_00);
      method_00 = (MethodInfo *)0x0;
      pSVar3 = (String *)func_?(&StringLiteral_Error_in_the_byte_stream__too_ma);
      mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar3,method_00);
      uVar2 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Read7BitEncodedInt__);
      func_?(this_00,uVar2);
      goto code_?;
    }
    uVar4 = BytePacker_ReadByte(this,(MethodInfo *)0x0);
    count = count | (uVar4 & 0x7f) << ((byte)iVar1 & 0x1f);
    iVar1 = iVar1 + 7;
  } while ((char)uVar4 < '\0');
  BytePacker_ReadBytes(this,count,(MethodInfo *)0x0);
  pEVar5 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar5 != (Encoding *)0x0) {
    pSVar3 = (String *)(*(pEVar5->klass->vtable).GetString.methodPtr)(pEVar5);
    return pSVar3;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}


/* UInt32 ReadUInt32() */

uint32_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadUInt32
                   (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((pLVar1->fields)._size < (this->fields)._position + 4) goto code_?;
    iVar2 = (this->fields)._position;
    (this->fields)._position = iVar2 + 1;
    BVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
            List_1_System_ByteEnum__get_Item
                      ((List_1_System_ByteEnum_ *)(this->fields)._buffer,iVar2,
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
    ;
    iVar2 = (this->fields)._position;
    pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
      BVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
              List_1_System_ByteEnum__get_Item
                        (pLVar4,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      iVar2 = (this->fields)._position;
      pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
        BVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                List_1_System_ByteEnum__get_Item
                          (pLVar4,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        iVar2 = (this->fields)._position;
        pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
        (this->fields)._position = iVar2 + 1;
        if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
          BVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                  List_1_System_ByteEnum__get_Item
                            (pLVar4,iVar2,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          return BVar7 & 0xff | (BVar6 & 0xff) << 8 | (BVar5 & 0xff) << 0x10 | BVar3 << 0x18;
        }
      }
    }
  }
  func_?();
code_?:
  uVar8 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_00 = (EndOfStreamException_1 *)func_?(uVar8);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,method_00);
  uVar8 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadInt32__);
  func_?(this_00,uVar8);
  pcVar9 = (code *)swi(3);
  uVar10 = (*pcVar9)();
  return uVar10;
}


/* UInt64 ReadUInt64() */

uint64_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadUInt64
                   (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((pLVar1->fields)._size < (this->fields)._position + 8) goto code_?;
    iVar2 = (this->fields)._position;
    (this->fields)._position = iVar2 + 1;
    BVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
            List_1_System_ByteEnum__get_Item
                      ((List_1_System_ByteEnum_ *)(this->fields)._buffer,iVar2,
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
    ;
    iVar2 = (this->fields)._position;
    pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
      BVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
              List_1_System_ByteEnum__get_Item
                        (pLVar4,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      iVar2 = (this->fields)._position;
      pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
        BVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                List_1_System_ByteEnum__get_Item
                          (pLVar4,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        iVar2 = (this->fields)._position;
        pLVar4 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
        (this->fields)._position = iVar2 + 1;
        if (pLVar4 != (List_1_System_ByteEnum_ *)0x0) {
          BVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                  List_1_System_ByteEnum__get_Item
                            (pLVar4,iVar2,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          iVar2 = (this->fields)._position;
          BVar3 = BVar7 & 0xff | (BVar6 & 0xff) << 8 | (BVar5 & 0xff) << 0x10 | BVar3 << 0x18;
          pLVar8 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
          (this->fields)._position = iVar2 + 1;
          if (pLVar8 != (List_1_System_ByteEnum_ *)0x0) {
            BVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                    List_1_System_ByteEnum__get_Item
                              (pLVar8,iVar2,
                               MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                              );
            pLVar8 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
            iVar2 = (this->fields)._position;
            (this->fields)._position = iVar2 + 1;
            if (pLVar8 != (List_1_System_ByteEnum_ *)0x0) {
              BVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                      List_1_System_ByteEnum__get_Item
                                (pLVar8,iVar2,
                                 MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                );
              pLVar8 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
              iVar2 = (this->fields)._position;
              (this->fields)._position = iVar2 + 1;
              if (pLVar8 != (List_1_System_ByteEnum_ *)0x0) {
                BVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                        List_1_System_ByteEnum__get_Item
                                  (pLVar8,iVar2,
                                   MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                  );
                pLVar8 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
                iVar2 = (this->fields)._position;
                (this->fields)._position = iVar2 + 1;
                if (pLVar8 != (List_1_System_ByteEnum_ *)0x0) {
                  BVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                           List_1_System_ByteEnum__get_Item
                                     (pLVar8,iVar2,
                                      MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                     );
                  return CONCAT44(BVar3,BVar9 & 0xff |
                                        (BVar7 & 0xff) << 8 |
                                        (BVar6 & 0xff) << 0x10 | BVar5 << 0x18 | (uint)pLVar4);
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
  uVar10 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_00 = (EndOfStreamException_1 *)func_?(uVar10);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,method_00);
  uVar10 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadUInt64__);
  func_?(this_00,uVar10);
  pcVar11 = (code *)swi(3);
  uVar12 = (*pcVar11)();
  return uVar12;
}


/* Byte[] ToArray() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
          (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)(this->fields)._buffer;
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    pUVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    return (Byte__Array *)pUVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pBVar5 = (Byte__Array *)(*pcVar4)();
  return pBVar5;
}


/* Void Write(Byte) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
               (BytePacker *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
  if (this_00 != (List_1_System_ByteEnum_ *)0x0) {
    index = (this->fields)._position;
    if (index != (this_00->fields)._size) {
      mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
      List_1_System_ByteEnum__set_Item
                (this_00,index,_value,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                );
      piVar1 = &(this->fields)._position;
      *piVar1 = *piVar1 + 1;
      return;
    }
    func_?(this_00,_value,
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
    piVar1 = &(this->fields)._position;
    *piVar1 = *piVar1 + 1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Write7BitEncodedInt(Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write7BitEncodedInt
               (BytePacker *this,int32_t value,MethodInfo *method)

{
  for (value_00 = value; 0x7f < value_00; value_00 = value_00 >> 7) {
    value._1_3_ = (undefined3)((uint)value >> 8);
    value = CONCAT31(value._1_3_,(char)value_00) | 0x80;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
      func_?(&
                      MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                     );
      cRam_? = '\x01';
    }
    pLVar1 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
    if (pLVar1 == (List_1_System_ByteEnum_ *)0x0) goto code_?;
    iVar2 = (this->fields)._position;
    if (iVar2 == (pLVar1->fields)._size) {
      func_?(pLVar1,value,
                      MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                     );
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
      List_1_System_ByteEnum__set_Item
                (pLVar1,iVar2,value,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                );
    }
    piVar3 = &(this->fields)._position;
    *piVar3 = *piVar3 + 1;
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
  if (pLVar1 != (List_1_System_ByteEnum_ *)0x0) {
    iVar2 = (this->fields)._position;
    if (iVar2 != (pLVar1->fields)._size) {
      mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
      List_1_System_ByteEnum__set_Item
                (pLVar1,iVar2,value_00,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                );
      piVar3 = &(this->fields)._position;
      *piVar3 = *piVar3 + 1;
      return;
    }
    func_?(pLVar1,value_00,
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
    piVar3 = &(this->fields)._position;
    *piVar3 = *piVar3 + 1;
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Write(Single) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_10
               (BytePacker *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__BitConverter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__BitConverter);
  }
  buffer = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_5(value,(MethodInfo *)0x0);
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


/* Void Write(String) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_11
               (BytePacker *this,String *value,MethodInfo *method)

{
  if (value == (String *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_00);
    message = (String *)func_?(&StringLiteral_The_string_cannot_be_null_);
    paramName = (String *)func_?(&StringLiteral_value);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
              (this_00,paramName,message,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Write_System__String_);
    func_?(this_00,uVar1);
  }
  else {
    pEVar2 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if ((pEVar2 != (Encoding *)0x0) &&
       (buffer = (Byte__Array *)
                 (*(pEVar2->klass->vtable).GetBytes_1.methodPtr)
                           (pEVar2,value,(pEVar2->klass->vtable).GetBytes_1.method),
       buffer != (Byte__Array *)0x0)) {
      for (value_00 = buffer->max_length; 0x7f < value_00; value_00 = value_00 >> 7) {
        value._1_3_ = (undefined3)((uint)value >> 8);
        value = (String *)(CONCAT31(value._1_3_,(char)value_00) | 0x80);
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                         );
          cRam_? = '\x01';
        }
        pLVar3 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
        if (pLVar3 == (List_1_System_ByteEnum_ *)0x0) goto code_?;
        iVar4 = (this->fields)._position;
        if (iVar4 == (pLVar3->fields)._size) {
          func_?(pLVar3,value,
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                         );
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
          List_1_System_ByteEnum__set_Item
                    (pLVar3,iVar4,(ByteEnum__Enum)value,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                    );
        }
        piVar5 = &(this->fields)._position;
        *piVar5 = *piVar5 + 1;
      }
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                       );
        func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__)
        ;
        func_?(&
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                       );
        cRam_? = '\x01';
      }
      pLVar3 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
      if (pLVar3 != (List_1_System_ByteEnum_ *)0x0) {
        iVar4 = (this->fields)._position;
        if (iVar4 == (pLVar3->fields)._size) {
          func_?(pLVar3,value_00,
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                         );
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
          List_1_System_ByteEnum__set_Item
                    (pLVar3,iVar4,value_00,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                    );
        }
        piVar5 = &(this->fields)._position;
        *piVar5 = *piVar5 + 1;
        BytePacker_Write_2(this,buffer,0,buffer->max_length,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Write(Byte[], Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_2
               (BytePacker *this,Byte__Array *buffer,int32_t index,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                   );
    cRam_? = '\x01';
  }
  if (buffer == (Byte__Array *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_01);
    pSVar2 = (String *)func_?(&StringLiteral_The_buffer_cannot_be_null_);
    pSVar3 = (String *)func_?(&StringLiteral_buffer);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
              (this_01,pSVar3,pSVar2,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                           );
    func_?(this_01,uVar1);
code_?:
    func_?();
code_?:
    func_?();
code_?:
    uVar1 = func_?(&TypeInfo__System__ArgumentException);
    this_02 = (ArgumentException *)func_?(uVar1);
    func_?(this_02);
    pMVar4 = (MethodInfo *)0x0;
    pSVar2 = (String *)func_?(&StringLiteral_The_number_of_bytes_to_copy_exce);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_02,pSVar2,pMVar4);
    uVar1 = func_?(&
                            MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                           );
    func_?(this_02,uVar1);
  }
  else {
    if (index < 0) goto code_?;
    if (-1 < count) {
      if (index + count <= (int)buffer->max_length) {
        pLVar5 = (this->fields)._buffer;
        if (pLVar5 != (List_1_System_Byte_ *)0x0) {
          iVar6 = (this->fields)._position;
          iVar7 = (pLVar5->fields)._size;
          iVar8 = 0;
          iVar9 = (this->fields)._position;
          uVar10 = index;
          while (iVar9 < iVar7) {
            if (count <= iVar8) goto code_?;
            iStack_11 = (this->fields)._position;
            this_00 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
            (this->fields)._position = iStack_11 + 1;
            if (buffer->max_length <= uVar10) goto code_?;
            if (this_00 == (List_1_System_ByteEnum_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
            List_1_System_ByteEnum__set_Item
                      (this_00,iStack_11,(uint)buffer->vector[uVar10],
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                      );
            iVar8 = iVar8 + 1;
            uVar10 = uVar10 + 1;
            iVar9 = (this->fields)._position;
          }
          if (iVar8 < count) {
            uVar10 = index + iVar8;
            do {
              pMVar4 = 
              MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_;
              pLVar5 = (this->fields)._buffer;
              if (buffer->max_length <= uVar10) goto code_?;
              uVar12 = buffer->vector[uVar10];
              iStack_11 = CONCAT31(iStack_11._1_3_,uVar12);
              if (pLVar5 == (List_1_System_Byte_ *)0x0) goto code_?;
              piVar13 = &(pLVar5->fields)._version;
              *piVar13 = *piVar13 + 1;
              pBVar14 = (pLVar5->fields)._items;
              if (pBVar14 == (Byte__Array *)0x0) goto code_?;
              uVar15 = (pLVar5->fields)._size;
              if (uVar15 < pBVar14->max_length) {
                (pLVar5->fields)._size = uVar15 + 1;
                if (pBVar14->max_length <= uVar15) goto code_?;
                pBVar14->vector[uVar15] = uVar12;
              }
              else {
                (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                          (pLVar5,iStack_11,pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
              }
              iVar8 = iVar8 + 1;
              uVar10 = uVar10 + 1;
            } while (iVar8 < count);
          }
code_?:
          (this->fields)._position = iVar6 + iVar8;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar16 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(pAVar16);
  pSVar2 = (String *)func_?(&StringLiteral_The_count_has_to_be_a_non_negati);
  pSVar3 = (String *)func_?(&StringLiteral_count);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar16,pSVar3,pSVar2,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                         );
  func_?(pAVar16,uVar1);
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar16 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(pAVar16);
  pSVar2 = (String *)func_?(&StringLiteral_The_index_has_to_be_a_non_negati);
  pSVar3 = (String *)func_?(&StringLiteral_index);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar16,pSVar3,pSVar2,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                         );
  func_?(pAVar16,uVar1);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Write(Boolean) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_3
               (BytePacker *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_ByteEnum_ *)(this->fields)._buffer;
  if (this_00 != (List_1_System_ByteEnum_ *)0x0) {
    index = (this->fields)._position;
    if (index != (this_00->fields)._size) {
      mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
      List_1_System_ByteEnum__set_Item
                (this_00,index,_value,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                );
      piVar1 = &(this->fields)._position;
      *piVar1 = *piVar1 + 1;
      return;
    }
    func_?(this_00,_value,
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
    piVar1 = &(this->fields)._position;
    *piVar1 = *piVar1 + 1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Write(Int16) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_5
               (BytePacker *this,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  buffer = (Byte__Array *)func_?();
  if (buffer != (Byte__Array *)0x0) {
    if (buffer->max_length != 0) {
      buffer->vector[0] = (uint8_t)((ushort)value >> 8);
      if (1 < buffer->max_length) {
        buffer->vector[1] = (uint8_t)value;
        BytePacker_Write_2(this,buffer,0,buffer->max_length,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Write(Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_7
               (BytePacker *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  buffer = (Byte__Array *)func_?(TypeInfo__System__Byte,4);
  if (buffer == (Byte__Array *)0x0) {
    func_?();
  }
  else if (buffer->max_length != 0) {
    buffer->vector[0] = (uint8_t)((uint)value >> 0x18);
    if (((1 < buffer->max_length) &&
        (buffer->vector[1] = (uint8_t)((uint)value >> 0x10), 2 < buffer->max_length)) &&
       (buffer->vector[2] = (uint8_t)((uint)value >> 8), 3 < buffer->max_length)) {
      buffer->vector[3] = (uint8_t)value;
      BytePacker_Write_2(this,buffer,0,buffer->max_length,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Write(Int64) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_9
               (BytePacker *this,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  buffer = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  if (buffer == (Byte__Array *)0x0) {
    func_?();
  }
  else if (buffer->max_length != 0) {
    buffer->vector[0] = (uint8_t)((ulonglong)value >> 0x18);
    if ((((1 < buffer->max_length) &&
         (buffer->vector[1] = (uint8_t)((ulonglong)value >> 0x10), 2 < buffer->max_length)) &&
        (buffer->vector[2] = (uint8_t)((ulonglong)value >> 8), 3 < buffer->max_length)) &&
       (buffer->vector[3] = (uint8_t)value, 4 < buffer->max_length)) {
      buffer->vector[4] = (uint8_t)((uint)in_stack_1 >> 0x18);
      if ((5 < buffer->max_length) &&
         (buffer->vector[5] = (uint8_t)((uint)in_stack_1 >> 0x10), 6 < buffer->max_length)) {
        buffer->vector[6] = (uint8_t)((uint)in_stack_1 >> 8);
        if (7 < buffer->max_length) {
          buffer->vector[7] = (uint8_t)in_stack_1;
          BytePacker_Write_2(this,buffer,0,buffer->max_length,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* BytePacker() */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor
               (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
              (this_00,0x20,MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_
              );
    (this->fields)._buffer = (List_1_System_Byte_ *)this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* BytePacker(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
               (BytePacker *this,Byte__Array *buffer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (buffer == (Byte__Array *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_01);
    message = (String *)func_?(&StringLiteral_The_buffer_cannot_be_null_);
    paramName = (String *)func_?(&StringLiteral_buffer);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
              (this_01,paramName,message,(MethodInfo *)0x0);
    func_?(&MethodInfo__MV__WorldObject__BytePacker__BytePacker_System__Byte____);
    func_?();
  }
  else {
    this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this_00,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                         buffer,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                );
      (this->fields)._buffer = (List_1_System_Byte_ *)this_00;
      func_?(&this->fields,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* BytePacker(Byte[], Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_2
               (BytePacker *this,Byte__Array *buffer,int32_t index,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (buffer == (Byte__Array *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_01);
    pSVar2 = (String *)func_?(&StringLiteral_The_buffer_cannot_be_null_);
    pSVar3 = (String *)func_?(&StringLiteral_buffer);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
              (this_01,pSVar3,pSVar2,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__MV__WorldObject__BytePacker__BytePacker_System__Byte_____int__int_
                           );
    func_?(this_01,uVar1);
code_?:
    func_?();
code_?:
    func_?();
code_?:
    uVar1 = func_?(&TypeInfo__System__ArgumentException);
    this_02 = (ArgumentException *)func_?(uVar1);
    func_?(this_02);
    pMVar4 = (MethodInfo *)0x0;
    pSVar2 = (String *)func_?(&StringLiteral_The_number_of_bytes_to_copy_exce);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_02,pSVar2,pMVar4);
    uVar1 = func_?(&
                            MethodInfo__MV__WorldObject__BytePacker__BytePacker_System__Byte_____int__int_
                           );
    func_?(this_02,uVar1);
  }
  else {
    if (index < 0) goto code_?;
    if (-1 < count) {
      if (index + count <= (int)buffer->max_length) {
        this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
        if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
                    (this_00,count,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
          (this->fields)._buffer = (List_1_System_Byte_ *)this_00;
          func_?(&this->fields,this_00);
          if (index < count) {
            uVar5 = 0;
            do {
              pMVar4 = 
              MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_;
              pLVar6 = (this->fields)._buffer;
              if (buffer->max_length <= uVar5) goto code_?;
              uVar7 = buffer->vector[uVar5];
              in_stack_8 = CONCAT31((int3)((uint)in_stack_8 >> 8),uVar7);
              if (pLVar6 == (List_1_System_Byte_ *)0x0) goto code_?;
              piVar9 = &(pLVar6->fields)._version;
              *piVar9 = *piVar9 + 1;
              pBVar10 = (pLVar6->fields)._items;
              if (pBVar10 == (Byte__Array *)0x0) goto code_?;
              uVar11 = (pLVar6->fields)._size;
              if (uVar11 < pBVar10->max_length) {
                (pLVar6->fields)._size = uVar11 + 1;
                if (pBVar10->max_length <= uVar11) goto code_?;
                pBVar10->vector[uVar11] = uVar7;
              }
              else {
                (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                          (pLVar6,in_stack_8,pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
              }
              uVar5 = uVar5 + 1;
            } while ((int)(index + uVar5) < count);
          }
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar12 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(pAVar12);
  pSVar2 = (String *)func_?(&StringLiteral_The_count_has_to_be_a_non_negati);
  pSVar3 = (String *)func_?(&StringLiteral_count);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar12,pSVar3,pSVar2,(MethodInfo *)0x0);
  uVar1 = func_?(&
                          MethodInfo__MV__WorldObject__BytePacker__BytePacker_System__Byte_____int__int_
                         );
  func_?(pAVar12,uVar1);
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar12 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(pAVar12);
  pSVar2 = (String *)func_?(&StringLiteral_The_index_has_to_be_a_non_negati);
  pSVar3 = (String *)func_?(&StringLiteral_index);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar12,pSVar3,pSVar2,(MethodInfo *)0x0);
  uVar1 = func_?(&
                          MethodInfo__MV__WorldObject__BytePacker__BytePacker_System__Byte_____int__int_
                         );
  func_?(pAVar12,uVar1);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Int32 get_Length() */

int32_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._buffer;
  if (pLVar2 != (List_1_System_Byte_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_Position(Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
               (BytePacker *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    cRam_? = '\x01';
  }
  if (value < 0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar2 = (ArgumentOutOfRangeException *)func_?(uVar1);
    func_?(pAVar2);
    pSVar3 = (String *)func_?(&StringLiteral_The_Position_has_to_be_a_non_neg);
    pSVar4 = (String *)func_?(&StringLiteral_value);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar2,pSVar4,pSVar3,(MethodInfo *)0x0);
    func_?(&MethodInfo__MV__WorldObject__BytePacker__set_Position_int_);
    func_?(pAVar2);
  }
  else {
    pLVar5 = (this->fields)._buffer;
    if (pLVar5 == (List_1_System_Byte_ *)0x0) goto code_?;
    if (value <= (pLVar5->fields)._size) {
      (this->fields)._position = value;
      return;
    }
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar2 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(pAVar2);
  pSVar3 = (String *)func_?(&StringLiteral_The_Position_cannot_exceed_the_l);
  pSVar4 = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar2,pSVar4,pSVar3,(MethodInfo *)0x0);
  func_?(&MethodInfo__MV__WorldObject__BytePacker__set_Position_int_);
  func_?(pAVar2);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

