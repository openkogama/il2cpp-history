
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
    this_00 = (this->fields)._buffer;
    if (this_00 == (List_1_System_Byte_ *)0x0) goto code_?;
    index = (this->fields)._position;
    if (index == (this_00->fields)._size) goto code_?;
    (this->fields)._position = index + 1;
    bVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
            List_1_System_SByte__get_Item
                      ((List_1_System_SByte_ *)this_00,index,
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
    ;
    uVar1 = uVar1 | (bVar3 & 0x7f) << ((byte)iVar2 & 0x1f);
    iVar2 = iVar2 + 7;
    if (-1 < (char)bVar3) {
      return uVar1;
    }
  }
  uVar4 = func_?(&TypeInfo__System__FormatException);
  this_01 = (FormatException *)func_?(uVar4);
  pMVar5 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Error_in_the_byte_stream__too_ma);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_01,pSVar6,pMVar5);
  uVar4 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Read7BitEncodedInt__);
  func_?(this_01,uVar4);
code_?:
  uVar4 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_02 = (EndOfStreamException_1 *)func_?(uVar4);
  pMVar5 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_02,pSVar6,pMVar5);
  uVar4 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadByte__);
  func_?(this_02,uVar4);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
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
  this_00 = (this->fields)._buffer;
  if (this_00 == (List_1_System_Byte_ *)0x0) {
    func_?();
  }
  else {
    index = (this->fields)._position;
    if (index != (this_00->fields)._size) {
      (this->fields)._position = index + 1;
      uVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
              List_1_System_SByte__get_Item
                        ((List_1_System_SByte_ *)this_00,index,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      return uVar1;
    }
  }
  uVar2 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_01 = (EndOfStreamException_1 *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_01,message,method_00);
  func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadByte__);
  func_?(this_01);
  pcVar3 = (code *)swi(3);
  uVar1 = (*pcVar3)();
  return uVar1;
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
        pLVar1 = (this->fields)._buffer;
        (this->fields)._position = index + 1;
        if (pLVar1 == (List_1_System_Byte_ *)0x0) goto code_?;
        uVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                List_1_System_SByte__get_Item
                          ((List_1_System_SByte_ *)pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        if (pBVar2 == (Byte__Array *)0x0) goto code_?;
        if (pBVar2->max_length <= uVar3) goto code_?;
        pBVar2->vector[uVar3] = uVar4;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < count);
    }
    return pBVar2;
  }
  uVar5 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_00 = (EndOfStreamException_1 *)func_?(uVar5);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_number_of_bytes_to_read_exce);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,method_00);
  uVar5 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadBytes_int_);
  func_?(this_00,uVar5);
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
    iVar2 = (this->fields)._position;
    if ((pLVar1->fields)._size < iVar2 + 2) goto code_?;
    (this->fields)._position = iVar2 + 1;
    iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
            List_1_System_SByte__get_Item
                      ((List_1_System_SByte_ *)pLVar1,iVar2,
                       MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
    ;
    iVar2 = (this->fields)._position;
    pLVar1 = (this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar1 != (List_1_System_Byte_ *)0x0) {
      iVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
              List_1_System_SByte__get_Item
                        ((List_1_System_SByte_ *)pLVar1,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      return CONCAT11(iVar3,iVar4);
    }
  }
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_00 = (EndOfStreamException_1 *)func_?(uVar5);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,method_00);
  uVar5 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadUInt16__);
  func_?(this_00,uVar5);
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
    iVar2 = (this->fields)._position;
    if ((pLVar1->fields)._size < iVar2 + 4) goto code_?;
    (this->fields)._position = iVar2 + 1;
    mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::List_1_System_SByte__get_Item
              ((List_1_System_SByte_ *)pLVar1,iVar2,
               MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    iVar2 = (this->fields)._position;
    pLVar1 = (this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar1 != (List_1_System_Byte_ *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
              List_1_System_SByte__get_Item
                        ((List_1_System_SByte_ *)pLVar1,iVar2,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      iVar2 = (this->fields)._position;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar1 != (List_1_System_Byte_ *)0x0) {
        iVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                List_1_System_SByte__get_Item
                          ((List_1_System_SByte_ *)pLVar1,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        iVar2 = (this->fields)._position;
        pLVar1 = (this->fields)._buffer;
        (this->fields)._position = iVar2 + 1;
        if (pLVar1 != (List_1_System_Byte_ *)0x0) {
          iVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                  List_1_System_SByte__get_Item
                            ((List_1_System_SByte_ *)pLVar1,iVar2,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          return CONCAT31(CONCAT21(CONCAT11(0x10,iVar3),iVar4),iVar5);
        }
      }
    }
  }
  func_?();
code_?:
  uVar6 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_00 = (EndOfStreamException_1 *)func_?(uVar6);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,method_00);
  uVar6 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadInt32__);
  func_?(this_00,uVar6);
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
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
    iVar2 = (this->fields)._position;
    if ((pLVar1->fields)._size < iVar2 + 8) goto code_?;
    (this->fields)._position = iVar2 + 1;
    mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::List_1_System_SByte__get_Item
              ((List_1_System_SByte_ *)pLVar1,iVar2,
               MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    iVar2 = (this->fields)._position;
    pLVar1 = (this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar1 != (List_1_System_Byte_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
      List_1_System_SByte__get_Item
                ((List_1_System_SByte_ *)pLVar1,iVar2,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
      iVar2 = (this->fields)._position;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar1 != (List_1_System_Byte_ *)0x0) {
        iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                List_1_System_SByte__get_Item
                          ((List_1_System_SByte_ *)pLVar1,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        index = (this->fields)._position;
        pLVar1 = (this->fields)._buffer;
        uVar4 = CONCAT11((char)((uint)iVar2 >> 0x18),iVar3);
        (this->fields)._position = index + 1;
        if (pLVar1 != (List_1_System_Byte_ *)0x0) {
          iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                  List_1_System_SByte__get_Item
                            ((List_1_System_SByte_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          iVar2 = (this->fields)._position;
          pLVar1 = (this->fields)._buffer;
          uVar5 = CONCAT21(uVar4,iVar3);
          (this->fields)._position = iVar2 + 1;
          if (pLVar1 != (List_1_System_Byte_ *)0x0) {
            iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                    List_1_System_SByte__get_Item
                              ((List_1_System_SByte_ *)pLVar1,iVar2,
                               MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                              );
            iVar2 = (this->fields)._position;
            pLVar1 = (this->fields)._buffer;
            uVar6 = CONCAT31(uVar5,iVar3);
            (this->fields)._position = iVar2 + 1;
            if (pLVar1 != (List_1_System_Byte_ *)0x0) {
              iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                      List_1_System_SByte__get_Item
                                ((List_1_System_SByte_ *)pLVar1,iVar2,
                                 MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                );
              iVar2 = (this->fields)._position;
              pLVar1 = (this->fields)._buffer;
              (this->fields)._position = iVar2 + 1;
              if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                iVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                        List_1_System_SByte__get_Item
                                  ((List_1_System_SByte_ *)pLVar1,iVar2,
                                   MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                  );
                iVar2 = (this->fields)._position;
                pLVar1 = (this->fields)._buffer;
                uVar8 = (uint)CONCAT11(iVar3,iVar7) << 0x10;
                (this->fields)._position = iVar2 + 1;
                if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                  bVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                          List_1_System_SByte__get_Item
                                    ((List_1_System_SByte_ *)pLVar1,iVar2,
                                     MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                    );
                  this._3_1_ = (byte)((uint)index >> 0x18);
                  bVar10 = (byte)(uVar6 >> 8);
                  uVar11 = CONCAT31(CONCAT21(CONCAT11(this._3_1_,(char)(uVar6 >> 0x18)),
                                            (char)(uVar6 >> 0x10)),bVar10);
                  return CONCAT44((((uint)this._3_1_ << 8 | (uVar11 & 0xffffff) >> 0x10) << 8 |
                                  (uVar11 & 0xffff) >> 8) << 8 | (uint)bVar10,
                                  (uint)bVar9 |
                                  (((uVar6 & 0xff) << 8 | uVar8 >> 0x18) << 8 |
                                  uVar8 >> 0x10 & 0xff) << 8);
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
  uVar12 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_00 = (EndOfStreamException_1 *)func_?(uVar12);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,method_00);
  uVar12 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadUInt64__);
  func_?(this_00,uVar12);
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
}


/* Single ReadSingle() */

float MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadSingle
                (BytePacker *this,MethodInfo *method)

{
  value = BytePacker_ReadBytes(this,4,(MethodInfo *)0x0);
  mscorlib.dll::System::Array::Array_Reverse((Array *)value,(MethodInfo *)0x0);
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
    pSVar3 = (String *)(*(code *)(pEVar5->klass->vtable).GetString.method)(pEVar5);
    return pSVar3;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
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
    iVar2 = (this->fields)._position;
    if ((pLVar1->fields)._size < iVar2 + 8) goto code_?;
    (this->fields)._position = iVar2 + 1;
    mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::List_1_System_SByte__get_Item
              ((List_1_System_SByte_ *)pLVar1,iVar2,
               MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    iVar2 = (this->fields)._position;
    pLVar1 = (this->fields)._buffer;
    (this->fields)._position = iVar2 + 1;
    if (pLVar1 != (List_1_System_Byte_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
      List_1_System_SByte__get_Item
                ((List_1_System_SByte_ *)pLVar1,iVar2,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
      iVar2 = (this->fields)._position;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = iVar2 + 1;
      if (pLVar1 != (List_1_System_Byte_ *)0x0) {
        iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                List_1_System_SByte__get_Item
                          ((List_1_System_SByte_ *)pLVar1,iVar2,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        index = (this->fields)._position;
        pLVar1 = (this->fields)._buffer;
        uVar4 = CONCAT11((char)((uint)iVar2 >> 0x18),iVar3);
        (this->fields)._position = index + 1;
        if (pLVar1 != (List_1_System_Byte_ *)0x0) {
          iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                  List_1_System_SByte__get_Item
                            ((List_1_System_SByte_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          iVar2 = (this->fields)._position;
          pLVar1 = (this->fields)._buffer;
          uVar5 = CONCAT21(uVar4,iVar3);
          (this->fields)._position = iVar2 + 1;
          if (pLVar1 != (List_1_System_Byte_ *)0x0) {
            iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                    List_1_System_SByte__get_Item
                              ((List_1_System_SByte_ *)pLVar1,iVar2,
                               MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                              );
            iVar2 = (this->fields)._position;
            pLVar1 = (this->fields)._buffer;
            uVar6 = CONCAT31(uVar5,iVar3);
            (this->fields)._position = iVar2 + 1;
            if (pLVar1 != (List_1_System_Byte_ *)0x0) {
              iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                      List_1_System_SByte__get_Item
                                ((List_1_System_SByte_ *)pLVar1,iVar2,
                                 MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                );
              iVar2 = (this->fields)._position;
              pLVar1 = (this->fields)._buffer;
              (this->fields)._position = iVar2 + 1;
              if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                iVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                        List_1_System_SByte__get_Item
                                  ((List_1_System_SByte_ *)pLVar1,iVar2,
                                   MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                  );
                iVar2 = (this->fields)._position;
                pLVar1 = (this->fields)._buffer;
                uVar8 = (uint)CONCAT11(iVar3,iVar7) << 0x10;
                (this->fields)._position = iVar2 + 1;
                if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                  bVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                          List_1_System_SByte__get_Item
                                    ((List_1_System_SByte_ *)pLVar1,iVar2,
                                     MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                                    );
                  this._3_1_ = (byte)((uint)index >> 0x18);
                  bVar10 = (byte)(uVar6 >> 8);
                  uVar11 = CONCAT31(CONCAT21(CONCAT11(this._3_1_,(char)(uVar6 >> 0x18)),
                                            (char)(uVar6 >> 0x10)),bVar10);
                  return CONCAT44((((uint)this._3_1_ << 8 | (uVar11 & 0xffffff) >> 0x10) << 8 |
                                  (uVar11 & 0xffff) >> 8) << 8 | (uint)bVar10,
                                  (uint)bVar9 |
                                  (((uVar6 & 0xff) << 8 | uVar8 >> 0x18) << 8 |
                                  uVar8 >> 0x10 & 0xff) << 8);
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
  uVar12 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
  this_00 = (EndOfStreamException_1 *)func_?(uVar12);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
  EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,method_00);
  uVar12 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadUInt64__);
  func_?(this_00,uVar12);
  pcVar13 = (code *)swi(3);
  uVar14 = (*pcVar13)();
  return uVar14;
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
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)(this->fields)._buffer;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    pMVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    return (Byte__Array *)pMVar1;
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
  this_00 = (this->fields)._buffer;
  if (this_00 != (List_1_System_Byte_ *)0x0) {
    index = (this->fields)._position;
    if (index != (this_00->fields)._size) {
      mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
      List_1_System_SByte__set_Item
                ((List_1_System_SByte_ *)this_00,index,value,
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
    this_00 = (ArgumentNullException *)func_?(uVar1);
    pSVar2 = (String *)func_?(&StringLiteral_The_buffer_cannot_be_null_);
    pSVar3 = (String *)func_?(&StringLiteral_buffer);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
              (this_00,pSVar3,pSVar2,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                           );
    func_?(this_00,uVar1);
code_?:
    func_?();
code_?:
    func_?();
code_?:
    uVar1 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (ArgumentException *)func_?(uVar1);
    pMVar4 = (MethodInfo *)0x0;
    pSVar2 = (String *)func_?(&StringLiteral_The_number_of_bytes_to_copy_exce);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_01,pSVar2,pMVar4);
    uVar1 = func_?(&
                            MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                           );
    func_?(this_01,uVar1);
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
          uVar9 = index;
          if (iVar6 < iVar7) {
            do {
              if (count <= iVar8) goto code_?;
              index_00 = (this->fields)._position;
              pLVar5 = (this->fields)._buffer;
              (this->fields)._position = index_00 + 1;
              if (buffer->max_length <= uVar9) goto code_?;
              if (pLVar5 == (List_1_System_Byte_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
              List_1_System_SByte__set_Item
                        ((List_1_System_SByte_ *)pLVar5,index_00,buffer->vector[uVar9],
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                        );
              iVar8 = iVar8 + 1;
              uVar9 = uVar9 + 1;
            } while ((this->fields)._position < iVar7);
          }
          if (iVar8 < count) {
            uVar9 = index + iVar8;
            do {
              pMVar4 = 
              MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_;
              pLVar5 = (this->fields)._buffer;
              if (buffer->max_length <= uVar9) goto code_?;
              item = buffer->vector[uVar9];
              if (pLVar5 == (List_1_System_Byte_ *)0x0) goto code_?;
              piVar10 = &(pLVar5->fields)._version;
              *piVar10 = *piVar10 + 1;
              pBVar11 = (pLVar5->fields)._items;
              if (pBVar11 == (Byte__Array *)0x0) goto code_?;
              uVar12 = (pLVar5->fields)._size;
              if (uVar12 < pBVar11->max_length) {
                (pLVar5->fields)._size = uVar12 + 1;
                if (pBVar11->max_length <= uVar12) goto code_?;
                pBVar11->vector[uVar12] = item;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                List_1_System_SByte__AddWithResize
                          ((List_1_System_SByte_ *)pLVar5,item,
                           pMVar4->klass->rgctx_data[0xe].method);
              }
              iVar8 = iVar8 + 1;
              uVar9 = uVar9 + 1;
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
  pAVar13 = (ArgumentOutOfRangeException *)func_?(uVar1);
  pSVar2 = (String *)func_?(&StringLiteral_The_count_has_to_be_a_non_negati);
  pSVar3 = (String *)func_?(&StringLiteral_count);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar13,pSVar3,pSVar2,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                         );
  func_?(pAVar13,uVar1);
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar13 = (ArgumentOutOfRangeException *)func_?(uVar1);
  pSVar2 = (String *)func_?(&StringLiteral_The_index_has_to_be_a_non_negati);
  pSVar3 = (String *)func_?(&StringLiteral_index);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar13,pSVar3,pSVar2,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                         );
  func_?(pAVar13,uVar1);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Write(Int16) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
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

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_6
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


/* Void Write(Single) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_7
               (BytePacker *this,float value,MethodInfo *method)

{
  buffer = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value,(MethodInfo *)0x0);
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
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,0x20,MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
  (this->fields)._buffer = (List_1_System_Byte_ *)this_00;
  func_?(&this->fields,this_00);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (buffer != (Byte__Array *)0x0) {
    this_00 = (List_1_System_Byte_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte___ctor_1
              (this_00,(IEnumerable_1_System_Byte_ *)buffer,
               MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
              );
    (this->fields)._buffer = this_00;
    func_?(&this->fields,this_00);
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this_01 = (ArgumentNullException *)func_?(uVar1);
  message = (String *)func_?(&StringLiteral_The_buffer_cannot_be_null_);
  paramName = (String *)func_?(&StringLiteral_buffer);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
            (this_01,paramName,message,(MethodInfo *)0x0);
  func_?(&MethodInfo__MV__WorldObject__BytePacker__BytePacker_System__Byte____);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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

