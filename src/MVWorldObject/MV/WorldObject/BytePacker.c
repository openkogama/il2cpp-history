
/* Int32 Read7BitEncodedInt() */

int32_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Read7BitEncodedInt
                  (BytePacker *this,MethodInfo *method)

{
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (iVar2 == 0x23) {
      uVar3 = func_?(&TypeInfo__System__FormatException);
      this_00 = (CookieException *)func_?(uVar3);
      message = (String *)func_?(&StringLiteral_Error_in_the_byte_stream__too_ma);
      System.dll::System::Net::CookieException::CookieException__ctor_1
                (this_00,message,(MethodInfo *)0x0);
      uVar3 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Read7BitEncodedInt__);
      FUN_?(this_00,uVar3);
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    uVar6 = BytePacker_ReadByte(this,(MethodInfo *)0x0);
    uVar1 = uVar1 | (uVar6 & 0x7f) << ((byte)iVar2 & 0x1f);
    iVar2 = iVar2 + 7;
  } while ((char)uVar6 < '\0');
  return uVar1;
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((this->fields)._position == (pLVar1->fields)._size) {
      uVar2 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
      this_00 = (EndOfStreamException_1 *)func_?(uVar2);
      message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
      EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadByte__);
      FUN_?(this_00,uVar2);
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    uVar5 = (this->fields)._position;
    pLVar1 = (this->fields)._buffer;
    (this->fields)._position = uVar5 + 1;
    if ((uint)(pLVar1->fields)._size <= uVar5) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    pBVar6 = (pLVar1->fields)._items;
    if (pBVar6 != (Byte__Array *)0x0) {
      if (uVar5 < (uint)pBVar6->max_length) {
        return pBVar6->vector[(int)uVar5];
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}


/* Byte[] ReadBytes(Int32) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
          (BytePacker *this,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 == (List_1_System_Byte_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pBVar3 = (Byte__Array *)(*pcVar2)();
    return pBVar3;
  }
  if ((pLVar1->fields)._size < (this->fields)._position + count) {
    uVar4 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
    this_00 = (EndOfStreamException_1 *)func_?(uVar4);
    message = (String *)func_?(&StringLiteral_The_number_of_bytes_to_read_exce);
    EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadBytes_int_);
    FUN_?(this_00,uVar4);
    pcVar2 = (code *)swi(3);
    pBVar3 = (Byte__Array *)(*pcVar2)();
    return pBVar3;
  }
  pBVar3 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,count);
  uVar5 = 0;
  uVar6 = uVar5;
  if (0 < count) {
    do {
      uVar7 = (this->fields)._position;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = uVar7 + 1;
      if (pLVar1 == (List_1_System_Byte_ *)0x0) goto code_?;
      if ((uint)(pLVar1->fields)._size <= uVar7) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pBVar3 = (Byte__Array *)(*pcVar2)();
        return pBVar3;
      }
      pBVar8 = (pLVar1->fields)._items;
      if (pBVar8 == (Byte__Array *)0x0) goto code_?;
      if ((uint)pBVar8->max_length <= uVar7) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        pBVar3 = (Byte__Array *)(*pcVar2)();
        return pBVar3;
      }
      if (pBVar3 == (Byte__Array *)0x0) goto code_?;
      if ((uint)pBVar3->max_length <= (uint)uVar6) goto code_?;
      pBVar3->vector[uVar5] = pBVar8->vector[(int)uVar7];
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)((uint)uVar6 + 1);
    } while ((longlong)uVar5 < (longlong)count);
  }
  return pBVar3;
}


/* Int16 ReadInt16() */

int16_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((pLVar1->fields)._size < (this->fields)._position + 2) {
      uVar2 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
      this_00 = (EndOfStreamException_1 *)func_?(uVar2);
      message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
      EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadUInt16__);
      FUN_?(this_00,uVar2);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    uVar5 = (this->fields)._position;
    uVar6 = uVar5 + 1;
    (this->fields)._position = uVar6;
    if ((uint)(pLVar1->fields)._size <= uVar5) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    pBVar7 = (pLVar1->fields)._items;
    if (pBVar7 != (Byte__Array *)0x0) {
      if ((uint)pBVar7->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      uVar8 = pBVar7->vector[(int)uVar5];
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = uVar5 + 2;
      if (pLVar1 != (List_1_System_Byte_ *)0x0) {
        if ((uint)(pLVar1->fields)._size <= uVar6) goto code_?;
        pBVar7 = (pLVar1->fields)._items;
        if (pBVar7 != (Byte__Array *)0x0) {
          if (uVar6 < (uint)pBVar7->max_length) {
            return CONCAT11(uVar8,pBVar7->vector[(longlong)(int)uVar5 + 1]);
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 ReadInt32() */

int32_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((pLVar1->fields)._size < (this->fields)._position + 4) {
      uVar2 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
      this_00 = (EndOfStreamException_1 *)func_?(uVar2);
      message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
      EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadInt32__);
      FUN_?(this_00,uVar2);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    uVar5 = (this->fields)._position;
    uVar6 = uVar5 + 1;
    (this->fields)._position = uVar6;
    if ((uint)(pLVar1->fields)._size <= uVar5) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    pBVar7 = (pLVar1->fields)._items;
    if (pBVar7 != (Byte__Array *)0x0) {
      if ((uint)pBVar7->max_length <= uVar5) goto code_?;
      uVar8 = pBVar7->vector[(int)uVar5];
      uVar9 = uVar5 + 2;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = uVar9;
      if (pLVar1 != (List_1_System_Byte_ *)0x0) {
        if ((uint)(pLVar1->fields)._size <= uVar6) goto code_?;
        pBVar7 = (pLVar1->fields)._items;
        if (pBVar7 != (Byte__Array *)0x0) {
          if ((uint)pBVar7->max_length <= uVar6) goto code_?;
          uVar10 = uVar5 + 3;
          uVar11 = pBVar7->vector[(int)uVar6];
          pLVar1 = (this->fields)._buffer;
          (this->fields)._position = uVar10;
          if (pLVar1 != (List_1_System_Byte_ *)0x0) {
            if ((uint)(pLVar1->fields)._size <= uVar9) goto code_?;
            pBVar7 = (pLVar1->fields)._items;
            if (pBVar7 != (Byte__Array *)0x0) {
              if ((uint)pBVar7->max_length <= uVar9) {
code_?:
                FUN_?();
                pcVar3 = (code *)swi(3);
                iVar4 = (*pcVar3)();
                return iVar4;
              }
              pLVar1 = (this->fields)._buffer;
              uVar12 = pBVar7->vector[(int)uVar9];
              (this->fields)._position = uVar5 + 4;
              if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= uVar10) goto code_?;
                pBVar7 = (pLVar1->fields)._items;
                if (pBVar7 != (Byte__Array *)0x0) {
                  if (uVar10 < (uint)pBVar7->max_length) {
                    return CONCAT31(CONCAT21(CONCAT11(uVar8,uVar11),uVar12),
                                    pBVar7->vector[(longlong)(int)uVar5 + 3]);
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int64 ReadInt64() */

int64_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt64
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((pLVar1->fields)._size < (this->fields)._position + 8) {
      uVar2 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
      this_00 = (EndOfStreamException_1 *)func_?(uVar2);
      message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
      EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadUInt64__);
      FUN_?(this_00,uVar2);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    uVar5 = (this->fields)._position;
    uVar6 = uVar5 + 1;
    (this->fields)._position = uVar6;
    if ((uint)(pLVar1->fields)._size <= uVar5) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    pBVar7 = (pLVar1->fields)._items;
    if (pBVar7 != (Byte__Array *)0x0) {
      if ((uint)pBVar7->max_length <= uVar5) goto code_?;
      uVar8 = pBVar7->vector[(int)uVar5];
      uVar9 = uVar5 + 2;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = uVar9;
      if (pLVar1 != (List_1_System_Byte_ *)0x0) {
        if ((uint)(pLVar1->fields)._size <= uVar6) goto code_?;
        pBVar7 = (pLVar1->fields)._items;
        if (pBVar7 != (Byte__Array *)0x0) {
          if ((uint)pBVar7->max_length <= uVar6) goto code_?;
          uVar10 = uVar5 + 3;
          pLVar1 = (this->fields)._buffer;
          uVar11 = pBVar7->vector[(int)uVar6];
          (this->fields)._position = uVar10;
          if (pLVar1 != (List_1_System_Byte_ *)0x0) {
            if ((uint)(pLVar1->fields)._size <= uVar9) goto code_?;
            pBVar7 = (pLVar1->fields)._items;
            if (pBVar7 != (Byte__Array *)0x0) {
              if ((uint)pBVar7->max_length <= uVar9) goto code_?;
              pLVar1 = (this->fields)._buffer;
              uVar12 = pBVar7->vector[(int)uVar9];
              uVar6 = uVar5 + 4;
              (this->fields)._position = uVar6;
              if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= uVar10) goto code_?;
                pBVar7 = (pLVar1->fields)._items;
                if (pBVar7 != (Byte__Array *)0x0) {
                  if ((uint)pBVar7->max_length <= uVar10) goto code_?;
                  pLVar1 = (this->fields)._buffer;
                  uVar13 = pBVar7->vector[(int)uVar10];
                  uVar9 = uVar5 + 5;
                  (this->fields)._position = uVar9;
                  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                    if ((uint)(pLVar1->fields)._size <= uVar6) goto code_?;
                    pBVar7 = (pLVar1->fields)._items;
                    if (pBVar7 != (Byte__Array *)0x0) {
                      if ((uint)pBVar7->max_length <= uVar6) goto code_?;
                      uVar14 = uVar5 + 6;
                      uVar15 = pBVar7->vector[(int)uVar6];
                      pLVar1 = (this->fields)._buffer;
                      (this->fields)._position = uVar14;
                      if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                        if ((uint)(pLVar1->fields)._size <= uVar9) goto code_?;
                        pBVar7 = (pLVar1->fields)._items;
                        if (pBVar7 != (Byte__Array *)0x0) {
                          if ((uint)pBVar7->max_length <= uVar9) goto code_?;
                          uVar6 = uVar5 + 7;
                          uVar16 = pBVar7->vector[(int)uVar9];
                          pLVar1 = (this->fields)._buffer;
                          (this->fields)._position = uVar6;
                          if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                            if ((uint)(pLVar1->fields)._size <= uVar14) goto code_?;
                            pBVar7 = (pLVar1->fields)._items;
                            if (pBVar7 != (Byte__Array *)0x0) {
                              if ((uint)pBVar7->max_length <= uVar14) {
code_?:
                                FUN_?();
                                pcVar3 = (code *)swi(3);
                                iVar4 = (*pcVar3)();
                                return iVar4;
                              }
                              pLVar1 = (this->fields)._buffer;
                              uVar17 = pBVar7->vector[(int)uVar14];
                              (this->fields)._position = uVar5 + 8;
                              if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                                if ((uint)(pLVar1->fields)._size <= uVar6)
                                goto code_?;
                                pBVar7 = (pLVar1->fields)._items;
                                if (pBVar7 != (Byte__Array *)0x0) {
                                  if (uVar6 < (uint)pBVar7->max_length) {
                                    return CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(uVar8,uVar11),uVar12),uVar13),uVar15),uVar16),
                                                  uVar17),pBVar7->vector[(longlong)(int)uVar10 + 4])
                                    ;
                                  }
                                  goto code_?;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Single ReadSingle() */

float MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadSingle
                (BytePacker *this,MethodInfo *method)

{
  this_00 = BytePacker_ReadBytes(this,4,(MethodInfo *)0x0);
  if (this_00 == (Byte__Array *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar1);
    paramName = (String *)func_?(&StringLiteral_array);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__System__Array__Reverse_MethodInfo__System__Array_);
    FUN_?(this_01,uVar1);
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  if ((this_00->klass->_1).initialized_and_no_error != 0 ||
      ((this_00->klass->_1).initialized != 0 ||
      ((this_00->klass->_1).enumtype != 0 ||
      ((this_00->klass->_1).nullabletype != 0 ||
      ((this_00->klass->_1).is_generic != 0 ||
      ((this_00->klass->_1).has_references != 0 ||
      ((this_00->klass->_1).init_pending != 0 || (this_00->klass->_1).size_init_pending != 0)))))))
  {
    if (this_00->bounds == (Il2CppArrayBounds *)0x0) {
      index = 0;
    }
    else {
      index = this_00->bounds->lower_bound;
    }
    length = mscorlib.dll::System::Array::Array_get_Length((Array *)this_00,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse_1((Array *)this_00,index,length,(MethodInfo *)0x0);
    if ((int)this_00->max_length != 0) {
      if (-1 < (int)this_00->max_length + -4) {
        return *(float *)this_00->vector;
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                 (MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
              (ExceptionArgument__Enum_startIndex,ExceptionResource__Enum_ArgumentOutOfRange_Index,
               (MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  uVar1 = FUN_?();
  FUN_?(uVar1,0);
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
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
      this_00 = (CookieException *)func_?(uVar2);
      pSVar3 = (String *)func_?(&StringLiteral_Error_in_the_byte_stream__too_ma);
      System.dll::System::Net::CookieException::CookieException__ctor_1
                (this_00,pSVar3,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__MV__WorldObject__BytePacker__Read7BitEncodedInt__);
      FUN_?(this_00,uVar2);
      pcVar4 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar4)();
      return pSVar3;
    }
    uVar5 = BytePacker_ReadByte(this,(MethodInfo *)0x0);
    bVar6 = (byte)iVar1 & 0x1f;
    count = count | (uVar5 & 0x7f) << bVar6;
    iVar1 = iVar1 + 7;
  } while ((char)uVar5 < '\0');
  pBVar7 = BytePacker_ReadBytes(this,count,(MethodInfo *)(ulonglong)(uint)(0 << bVar6));
  pEVar8 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar8 != (Encoding *)0x0) {
    UNRECOVERED_JUMPTABLE = (pEVar8->klass->vtable).GetString.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar3 = (String *)
             (*UNRECOVERED_JUMPTABLE)
                       (pEVar8,pBVar7,(pEVar8->klass->vtable).GetString.method,UNRECOVERED_JUMPTABLE
                       );
    return pSVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* UInt64 ReadUInt64() */

uint64_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadUInt64
                   (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((pLVar1->fields)._size < (this->fields)._position + 8) {
      uVar2 = func_?(&TypeInfo__MV__WorldObject__EndOfStreamException);
      this_00 = (EndOfStreamException_1 *)func_?(uVar2);
      message = (String *)func_?(&StringLiteral_The_end_of_the_stream_is_reached);
      EndOfStreamException::EndOfStreamException_1__ctor_1(this_00,message,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__MV__WorldObject__BytePacker__ReadUInt64__);
      FUN_?(this_00,uVar2);
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    uVar5 = (this->fields)._position;
    uVar6 = uVar5 + 1;
    (this->fields)._position = uVar6;
    if ((uint)(pLVar1->fields)._size <= uVar5) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    pBVar7 = (pLVar1->fields)._items;
    if (pBVar7 != (Byte__Array *)0x0) {
      if ((uint)pBVar7->max_length <= uVar5) goto code_?;
      uVar8 = pBVar7->vector[(int)uVar5];
      uVar9 = uVar5 + 2;
      pLVar1 = (this->fields)._buffer;
      (this->fields)._position = uVar9;
      if (pLVar1 != (List_1_System_Byte_ *)0x0) {
        if ((uint)(pLVar1->fields)._size <= uVar6) goto code_?;
        pBVar7 = (pLVar1->fields)._items;
        if (pBVar7 != (Byte__Array *)0x0) {
          if ((uint)pBVar7->max_length <= uVar6) goto code_?;
          uVar10 = uVar5 + 3;
          pLVar1 = (this->fields)._buffer;
          uVar11 = pBVar7->vector[(int)uVar6];
          (this->fields)._position = uVar10;
          if (pLVar1 != (List_1_System_Byte_ *)0x0) {
            if ((uint)(pLVar1->fields)._size <= uVar9) goto code_?;
            pBVar7 = (pLVar1->fields)._items;
            if (pBVar7 != (Byte__Array *)0x0) {
              if ((uint)pBVar7->max_length <= uVar9) goto code_?;
              pLVar1 = (this->fields)._buffer;
              uVar12 = pBVar7->vector[(int)uVar9];
              uVar6 = uVar5 + 4;
              (this->fields)._position = uVar6;
              if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= uVar10) goto code_?;
                pBVar7 = (pLVar1->fields)._items;
                if (pBVar7 != (Byte__Array *)0x0) {
                  if ((uint)pBVar7->max_length <= uVar10) goto code_?;
                  pLVar1 = (this->fields)._buffer;
                  uVar13 = pBVar7->vector[(int)uVar10];
                  uVar9 = uVar5 + 5;
                  (this->fields)._position = uVar9;
                  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                    if ((uint)(pLVar1->fields)._size <= uVar6) goto code_?;
                    pBVar7 = (pLVar1->fields)._items;
                    if (pBVar7 != (Byte__Array *)0x0) {
                      if ((uint)pBVar7->max_length <= uVar6) goto code_?;
                      uVar14 = uVar5 + 6;
                      uVar15 = pBVar7->vector[(int)uVar6];
                      pLVar1 = (this->fields)._buffer;
                      (this->fields)._position = uVar14;
                      if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                        if ((uint)(pLVar1->fields)._size <= uVar9) goto code_?;
                        pBVar7 = (pLVar1->fields)._items;
                        if (pBVar7 != (Byte__Array *)0x0) {
                          if ((uint)pBVar7->max_length <= uVar9) goto code_?;
                          uVar6 = uVar5 + 7;
                          uVar16 = pBVar7->vector[(int)uVar9];
                          pLVar1 = (this->fields)._buffer;
                          (this->fields)._position = uVar6;
                          if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                            if ((uint)(pLVar1->fields)._size <= uVar14) goto code_?;
                            pBVar7 = (pLVar1->fields)._items;
                            if (pBVar7 != (Byte__Array *)0x0) {
                              if ((uint)pBVar7->max_length <= uVar14) {
code_?:
                                FUN_?();
                                pcVar3 = (code *)swi(3);
                                uVar4 = (*pcVar3)();
                                return uVar4;
                              }
                              pLVar1 = (this->fields)._buffer;
                              uVar17 = pBVar7->vector[(int)uVar14];
                              (this->fields)._position = uVar5 + 8;
                              if (pLVar1 != (List_1_System_Byte_ *)0x0) {
                                if ((uint)(pLVar1->fields)._size <= uVar6)
                                goto code_?;
                                pBVar7 = (pLVar1->fields)._items;
                                if (pBVar7 != (Byte__Array *)0x0) {
                                  if (uVar6 < (uint)pBVar7->max_length) {
                                    return CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(uVar8,uVar11),uVar12),uVar13),uVar15),uVar16),
                                                  uVar17),pBVar7->vector[(longlong)(int)uVar10 + 4])
                                    ;
                                  }
                                  goto code_?;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}


/* Byte[] ToArray() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
          (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__;
  pLVar2 = (this->fields)._buffer;
  if (pLVar2 != (List_1_System_Byte_ *)0x0) {
    if ((pLVar2->fields)._size != 0) {
      pvVar3 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__->klass->
               rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      pBVar4 = (Byte__Array *)FUN_?(pvVar3);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)(pLVar2->fields)._items,0,(Array *)pBVar4,0,(pLVar2->fields)._size,
                 (MethodInfo *)0x0);
      return pBVar4;
    }
    pvVar3 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__->klass->
             rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
      FUN_?(pvVar3);
    }
    pIVar5 = pMVar1->klass->rgctx_data[2].klass;
    if ((pIVar5->field_0x135 & 1) == 0) {
      pIVar5 = (Il2CppClass *)FUN_?(pIVar5);
    }
    return *(Byte__Array **)pIVar5->static_fields;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar6)();
  return pBVar4;
}


/* Void Write(Byte) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
               (BytePacker *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    if ((this->fields)._position == (pLVar1->fields)._size) {
      FUN_?(pLVar1,value,
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
      piVar2 = &(this->fields)._position;
      *piVar2 = *piVar2 + 1;
      return;
    }
    uVar3 = (this->fields)._position;
    if ((uint)(pLVar1->fields)._size <= uVar3) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pBVar5 = (pLVar1->fields)._items;
    if (pBVar5 != (Byte__Array *)0x0) {
      if (uVar3 < (uint)pBVar5->max_length) {
        pBVar5->vector[(int)uVar3] = value;
        piVar2 = &(pLVar1->fields)._version;
        *piVar2 = *piVar2 + 1;
        piVar2 = &(this->fields)._position;
        *piVar2 = *piVar2 + 1;
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Write(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_1
               (BytePacker *this,Byte__Array *buffer,MethodInfo *method)

{
  if (buffer != (Byte__Array *)0x0) {
    BytePacker_Write_2(this,buffer,0,(int32_t)buffer->max_length,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Write(Byte[], Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_2
               (BytePacker *this,Byte__Array *buffer,int32_t index,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<unsigned_char>__set_Item_int__unsigned_char_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(this_00,uVar1);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (index < 0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar5 = (ArgumentOutOfRangeException *)func_?(uVar1);
    pSVar2 = (String *)func_?(&StringLiteral_The_index_has_to_be_a_non_negati);
    pSVar3 = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar5,pSVar3,pSVar2,(MethodInfo *)0x0);
    uVar1 = func_?(&
                                 MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                                );
    FUN_?(pAVar5,uVar1);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (count < 0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar5 = (ArgumentOutOfRangeException *)func_?(uVar1);
    pSVar2 = (String *)func_?(&StringLiteral_The_count_has_to_be_a_non_negati);
    pSVar3 = (String *)func_?(&StringLiteral_count);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar5,pSVar3,pSVar2,(MethodInfo *)0x0);
    uVar1 = func_?(&
                                 MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                                );
    FUN_?(pAVar5,uVar1);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)buffer->max_length < index + count) {
    uVar1 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar1);
    pSVar2 = (String *)func_?(&StringLiteral_The_number_of_bytes_to_copy_exce);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar2,(MethodInfo *)0x0);
    uVar1 = func_?(&
                                 MethodInfo__MV__WorldObject__BytePacker__Write_System__Byte_____int__int_
                                );
    FUN_?(this_01,uVar1);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pLVar6 = (this->fields)._buffer;
  if (pLVar6 != (List_1_System_Byte_ *)0x0) {
    iVar7 = (pLVar6->fields)._size;
    iVar8 = (this->fields)._position;
    uVar9 = 0;
    uVar10 = index;
    uVar11 = uVar9;
    iVar12 = iVar8;
    for (; (uVar13 = (uint)uVar11, iVar12 < iVar7 && ((longlong)uVar9 < (longlong)count));
        uVar9 = uVar9 + 1) {
      uVar14 = (this->fields)._position;
      pLVar6 = (this->fields)._buffer;
      (this->fields)._position = uVar14 + 1;
      if ((uint)buffer->max_length <= uVar10) goto code_?;
      if (pLVar6 == (List_1_System_Byte_ *)0x0) goto code_?;
      if ((uint)(pLVar6->fields)._size <= uVar14) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pBVar15 = (pLVar6->fields)._items;
      if (pBVar15 == (Byte__Array *)0x0) goto code_?;
      if ((uint)pBVar15->max_length <= uVar14) goto code_?;
      uVar11 = (ulonglong)(uVar13 + 1);
      pBVar15->vector[(int)uVar14] = buffer->vector[uVar9 + (longlong)index];
      uVar10 = uVar10 + 1;
      piVar16 = &(pLVar6->fields)._version;
      *piVar16 = *piVar16 + 1;
      iVar12 = (this->fields)._position;
    }
    if ((int)uVar13 < count) {
      uVar10 = uVar13 + index;
      lVar17 = (longlong)(int)uVar13;
      do {
        pMVar18 = MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_;
        pLVar6 = (this->fields)._buffer;
        if ((uint)buffer->max_length <= uVar10) {
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        item = buffer->vector[lVar17 + index];
        if (pLVar6 == (List_1_System_Byte_ *)0x0) goto code_?;
        piVar16 = &(pLVar6->fields)._version;
        *piVar16 = *piVar16 + 1;
        pBVar15 = (pLVar6->fields)._items;
        if (pBVar15 == (Byte__Array *)0x0) goto code_?;
        uVar13 = (pLVar6->fields)._size;
        if (uVar13 < (uint)pBVar15->max_length) {
          (pLVar6->fields)._size = uVar13 + 1;
          if ((uint)pBVar15->max_length <= uVar13) goto code_?;
          pBVar15->vector[(int)uVar13] = item;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
          List_1_System_SByte__AddWithResize
                    ((List_1_System_SByte_ *)pLVar6,item,pMVar18->klass->rgctx_data[0xe].method);
        }
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
        uVar10 = uVar10 + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 < count);
    }
    (this->fields)._position = uVar13 + iVar8;
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Write(Int16) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
               (BytePacker *this,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buffer = (Byte__Array *)FUN_?(TypeInfo__System__Byte,2);
  if (buffer != (Byte__Array *)0x0) {
    if (((int)buffer->max_length != 0) &&
       (buffer->vector[0] = (uint8_t)((ushort)value >> 8), 1 < (uint)buffer->max_length)) {
      buffer->vector[1] = (uint8_t)value;
      BytePacker_Write_2(this,buffer,0,(int32_t)buffer->max_length,(MethodInfo *)0x0);
      return;
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Write(Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_6
               (BytePacker *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buffer = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  if (buffer != (Byte__Array *)0x0) {
    if (((((int)buffer->max_length != 0) &&
         (buffer->vector[0] = (uint8_t)((uint)value >> 0x18), 1 < (uint)buffer->max_length)) &&
        (buffer->vector[1] = (uint8_t)((uint)value >> 0x10), 2 < (uint)buffer->max_length)) &&
       (buffer->vector[2] = (uint8_t)((uint)value >> 8), 3 < (uint)buffer->max_length)) {
      buffer->vector[3] = (uint8_t)value;
      BytePacker_Write_2(this,buffer,0,(int32_t)buffer->max_length,(MethodInfo *)0x0);
      return;
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Write(Single) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_7
               (BytePacker *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buffer = (Byte__Array *)FUN_?(TypeInfo__System__Byte);
  if (buffer == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((int)buffer->max_length == 0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(float *)buffer->vector = value;
  if ((buffer->klass->_1).initialized_and_no_error != 0 ||
      ((buffer->klass->_1).initialized != 0 ||
      ((buffer->klass->_1).enumtype != 0 ||
      ((buffer->klass->_1).nullabletype != 0 ||
      ((buffer->klass->_1).is_generic != 0 ||
      ((buffer->klass->_1).has_references != 0 ||
      ((buffer->klass->_1).init_pending != 0 || (buffer->klass->_1).size_init_pending != 0))))))) {
    if (buffer->bounds == (Il2CppArrayBounds *)0x0) {
      index = 0;
    }
    else {
      index = buffer->bounds->lower_bound;
    }
    length = mscorlib.dll::System::Array::Array_get_Length((Array *)buffer,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse_1((Array *)buffer,index,length,(MethodInfo *)0x0);
    BytePacker_Write_2(this,buffer,0,(int32_t)buffer->max_length,(MethodInfo *)0x0);
    return;
  }
  uVar2 = FUN_?();
  FUN_?(uVar2,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* BytePacker() */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor
               (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Byte_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pBVar3 = (Byte__Array *)FUN_?(pvVar2,0x20);
  (pLVar1->fields)._items = pBVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields)._buffer = pLVar1;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* BytePacker(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
               (BytePacker *this,Byte__Array *buffer,MethodInfo *method)

{
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
  if (buffer == (Byte__Array *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar1);
    message = (String *)func_?(&StringLiteral_The_buffer_cannot_be_null_);
    paramName = (String *)func_?(&StringLiteral_buffer);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
              (this_01,paramName,message,(MethodInfo *)0x0);
    uVar1 = func_?(&
                                MethodInfo__MV__WorldObject__BytePacker__BytePacker_System__Byte____
                               );
    FUN_?(this_01,uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (List_1_System_Byte_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte___ctor_1
            (this_00,(IEnumerable_1_System_Byte_ *)buffer,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  bVar3 = iRam_? != 0;
  (this->fields)._buffer = this_00;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* Int32 get_Length() */

int32_t MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                  (BytePacker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._buffer;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_Position(Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
               (BytePacker *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value < 0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar2 = (ArgumentOutOfRangeException *)func_?(uVar1);
    pSVar3 = (String *)func_?(&StringLiteral_The_Position_has_to_be_a_non_neg);
    pSVar4 = (String *)func_?(&StringLiteral_value);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar2,pSVar4,pSVar3,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__MV__WorldObject__BytePacker__set_Position_int_);
    FUN_?(pAVar2,uVar1);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pLVar6 = (this->fields)._buffer;
  if (pLVar6 == (List_1_System_Byte_ *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (value <= (pLVar6->fields)._size) {
    (this->fields)._position = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar2 = (ArgumentOutOfRangeException *)func_?(uVar1);
  pSVar3 = (String *)func_?(&StringLiteral_The_Position_cannot_exceed_the_l);
  pSVar4 = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar2,pSVar4,pSVar3,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__MV__WorldObject__BytePacker__set_Position_int_);
  FUN_?(pAVar2,uVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

