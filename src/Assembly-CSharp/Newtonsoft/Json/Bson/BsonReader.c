
/* Int32 BytesInSequence(Byte) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_BytesInSequence
                  (BsonReader *this,uint8_t b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonReader);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
  }
  pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange1;
  if (pBVar1 != (Byte__Array *)0x0) {
    if (pBVar1->max_length < 2) goto code_?;
    if (b <= pBVar1->vector[1]) {
      return 1;
    }
    if ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
    }
    pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange2;
    if (pBVar1 != (Byte__Array *)0x0) {
      if (pBVar1->max_length == 0) goto code_?;
      if (pBVar1->vector[0] <= b) {
        if ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
        }
        pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange2;
        if (pBVar1 == (Byte__Array *)0x0) goto code_?;
        if (pBVar1->max_length < 2) goto code_?;
        if (b <= pBVar1->vector[1]) {
          return 2;
        }
      }
      if ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
      }
      pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange3;
      if (pBVar1 != (Byte__Array *)0x0) {
        if (pBVar1->max_length == 0) goto code_?;
        if (pBVar1->vector[0] <= b) {
          if ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
          }
          pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange3;
          if (pBVar1 == (Byte__Array *)0x0) goto code_?;
          if (pBVar1->max_length < 2) goto code_?;
          if (b <= pBVar1->vector[1]) {
            return 3;
          }
        }
        if ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
        }
        pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange4;
        if (pBVar1 != (Byte__Array *)0x0) {
          if (pBVar1->max_length == 0) goto code_?;
          if (b < pBVar1->vector[0]) {
            return 0;
          }
          if ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
          }
          pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange4;
          if (pBVar1 != (Byte__Array *)0x0) {
            if (1 < pBVar1->max_length) {
              return (-(uint)(pBVar1->vector[1] < b) & 0xfffffffc) + 4;
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_Close
               (BsonReader *this,MethodInfo *method)

{
  JsonReader::JsonReader_Close((JsonReader *)this,(MethodInfo *)0x0);
  if (((this->fields)._._CloseInput_k__BackingField != 0) &&
     ((this->fields)._reader != (BinaryReader *)0x0)) {
    pBVar1 = (this->fields)._reader;
    pBVar2 = pBVar1->klass;
    (*(pBVar2->vtable).Close.methodPtr)(pBVar1,(pBVar2->vtable).Close.method);
  }
  return;
}


/* Void EnsureBuffers() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_EnsureBuffers
               (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if ((this->fields)._byteBuffer == (Byte__Array *)0x0) {
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x80);
    (this->fields)._byteBuffer = pBVar1;
    func_?(&(this->fields)._byteBuffer,pBVar1);
  }
  if ((this->fields)._charBuffer == (Char__Array *)0x0) {
    pEVar2 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar2 == (Encoding *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = (*(pEVar2->klass->vtable).__unknown_5.methodPtr)
                      (pEVar2,0x80,(pEVar2->klass->vtable).__unknown_5.method);
    pCVar5 = (Char__Array *)func_?(TypeInfo__System__Char,uVar4);
    (this->fields)._charBuffer = pCVar5;
    func_?(&(this->fields)._charBuffer,pCVar5);
  }
  return;
}


/* Int32 GetLastFullCharStop(Int32) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_GetLastFullCharStop
                  (BsonReader *this,int32_t start,MethodInfo *method)

{
  iVar1 = 0;
  uVar2 = start;
  do {
    if ((int)uVar2 < 0) {
code_?:
      if (iVar1 != start - uVar2) {
        start = uVar2;
      }
      return start;
    }
    pBVar3 = (this->fields)._byteBuffer;
    if (pBVar3 == (Byte__Array *)0x0) {
      func_?();
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      iVar1 = (*pcVar4)();
      return iVar1;
    }
    if (pBVar3->max_length <= uVar2) goto code_?;
    iVar1 = BsonReader_BytesInSequence(this,pBVar3->vector[uVar2],(MethodInfo *)0x0);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 != start - (uVar2 - 1)) {
          start = uVar2 - 1;
        }
        return start;
      }
      goto code_?;
    }
    uVar2 = uVar2 - 1;
  } while( true );
}


/* String GetString(Int32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_GetString
                   (BsonReader *this,int32_t length,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if (length == 0) {
    return TypeInfo__System__String->static_fields->Empty;
  }
  BsonReader_EnsureBuffers(this,(MethodInfo *)0x0);
  iStack_1 = 0;
  length_00 = 0;
  this_00 = (StringBuilder *)0x0;
  while( true ) {
    iVar2 = length - iStack_1;
    iVar3 = 0x80 - length_00;
    pBVar4 = (this->fields)._reader;
    if (pBVar4 == (BinaryReader *)0x0) break;
    piVar5 = (int *)(*(pBVar4->klass->vtable).get_BaseStream.methodPtr)
                              (pBVar4,(pBVar4->klass->vtable).get_BaseStream.method);
    if (piVar5 == (int *)0x0) break;
    iVar6 = 0x80 - length_00;
    if (iVar2 <= iVar3) {
      iVar6 = length - iStack_1;
    }
    iVar3 = (**(code **)(*piVar5 + 0x184))
                      (piVar5,(this->fields)._byteBuffer,length_00,iVar6,
                       *(undefined4 *)(*piVar5 + 0x188));
    if (iVar3 == 0) {
      uVar7 = func_?(&TypeInfo__System__IO__EndOfStreamException);
      this_01 = (EndOfStreamException *)func_?(uVar7);
      func_?(this_01);
      method_00 = (MethodInfo *)0x0;
      pSVar8 = (String *)func_?(&StringLiteral_Unable_to_read_beyond_the_end_of);
      mscorlib.dll::System::IO::EndOfStreamException::EndOfStreamException__ctor_1
                (this_01,pSVar8,method_00);
      uVar7 = func_?(&MethodInfo__Newtonsoft__Json__Bson__BsonReader__GetString_int_);
      func_?(this_01,uVar7);
      break;
    }
    iStack_1 = iStack_1 + iVar3;
    iVar3 = iVar3 + length_00;
    if (iVar3 == length) {
      pEVar9 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
      if (pEVar9 != (Encoding *)0x0) {
        iVar10 = (*(pEVar9->klass->vtable).__unknown_3.methodPtr)
                          (pEVar9,(this->fields)._byteBuffer,0,iVar3,(this->fields)._charBuffer,0,
                           (pEVar9->klass->vtable).__unknown_3.method);
        pSVar8 = mscorlib.dll::System::String::String_CreateString_3
                           ((String *)0x0,(this->fields)._charBuffer,0,iVar10,(MethodInfo *)0x0);
        return pSVar8;
      }
      break;
    }
    iVar10 = BsonReader_GetLastFullCharStop(this,iVar3 + -1,(MethodInfo *)0x0);
    pSVar11 = this_00;
    if (this_00 == (StringBuilder *)0x0) {
      this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
      if (this_00 == (StringBuilder *)0x0) break;
      pSVar11 = this_00;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_1
                (this_00,length,(MethodInfo *)0x0);
    }
    pEVar9 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar9 == (Encoding *)0x0) break;
    charCount = (*(pEVar9->klass->vtable).__unknown_3.methodPtr)
                          (0,(this->fields)._byteBuffer,0,iVar10 + 1,(this->fields)._charBuffer,0,
                           (pEVar9->klass->vtable).__unknown_3.method);
    if (this_00 == (StringBuilder *)0x0) break;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_1
              (this_00,(this->fields)._charBuffer,0,charCount,(MethodInfo *)0x0);
    if (iVar10 < iVar3 + -1) {
      pSVar11 = (StringBuilder *)0x0;
      length_00 = (iVar3 - iVar10) + -1;
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)(this->fields)._byteBuffer,iVar10 + 1,(Array *)(this->fields)._byteBuffer,0
                 ,length_00,(MethodInfo *)0x0);
    }
    else {
      length_00 = 0;
    }
    this_00 = pSVar11;
    if (length <= iStack_1) {
      pSVar8 = (String *)
               (*(pSVar11->klass->vtable).ToString.methodPtr)
                         (pSVar11,(pSVar11->klass->vtable).ToString.method);
      return pSVar8;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar12)();
  return pSVar8;
}


/* Void MovePosition(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_MovePosition
               (BsonReader *this,int32_t count,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._currentContext;
  if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
    (pBVar2->fields).Position = (pBVar2->fields).Position + count;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PopContext() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_PopContext
               (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._stack;
  if (pLVar1 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt
              ((List_1_System_Object_ *)(this->fields)._stack,(pLVar1->fields)._size + -1,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__RemoveAt_int_
              );
    pLVar1 = (this->fields)._stack;
    if (pLVar1 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
      ppBVar2 = &(this->fields)._currentContext;
      if ((pLVar1->fields)._size != 0) {
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields)._stack,(pLVar1->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Item_int_
                          );
        (this->fields)._currentContext = (BsonReader_ContainerContext *)RVar3;
        func_?(ppBVar2,RVar3);
        return;
      }
      (this->fields)._currentContext = (BsonReader_ContainerContext *)0x0;
      func_?(ppBVar2,0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PushContext(BsonReader+ContainerContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_PushContext
               (BsonReader *this,BsonReader_ContainerContext *newContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__Add_Newtonsoft__Json__Bson__BsonReader__ContainerContext_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._stack;
  if (this_00 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)newContext,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__Add_Newtonsoft__Json__Bson__BsonReader__ContainerContext_
              );
    (this->fields)._currentContext = newContext;
    func_?(&(this->fields)._currentContext,newContext);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean Read() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_Read
               (BsonReader *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  ppMStack_3 = (MethodInfo **)&stack0xffffffd8;
  uStack_4 = 0;
  switch((this->fields)._bsonReaderState) {
  case 0:
    ppMStack_3 = (MethodInfo **)&stack0xffffffd8;
    bVar5 = BsonReader_ReadNormal(this,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_2;
    return bVar5;
  case 1:
  case 2:
  case 3:
    ppMStack_3 = (MethodInfo **)&stack0xffffffd8;
    bVar5 = BsonReader_ReadReference(this,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_2;
    return bVar5;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    ppMStack_3 = (MethodInfo **)&stack0xffffffd8;
    bVar5 = BsonReader_ReadCodeWScope(this,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_2;
    return bVar5;
  default:
    uVar6 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar6);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar6 = func_?();
    args = (Object__Array *)func_?(uVar6);
    uVar6 = func_?();
    func_?(uVar6);
    func_?();
    func_?(args);
    func_?(0);
    pSVar7 = (String *)func_?(&StringLiteral_Unexpected_state___0_);
    pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar7,(IFormatProvider *)provider,args,(MethodInfo *)0x0);
    func_?();
    this_00 = (JsonReaderException *)func_?();
    func_?();
    JsonReaderException::JsonReaderException__ctor_1(this_00,pSVar7,(MethodInfo *)0x0);
    ppMStack_3 = &MethodInfo__Newtonsoft__Json__Bson__BsonReader__Read__;
    ppMStack_3 = (MethodInfo **)func_?();
    cVar8 = (undefined1 *)0xfffffffb < &ppMStack_3;
    func_?();
    piVar9 = (int *)CONCAT31(CONCAT21((short)((uint)extraout_ECX >> 0x10),
                                      (char)((uint)extraout_ECX >> 8) + -0x76 + cVar8),
                             *(undefined1 *)((int)&(provider->fields).cultureID + 3));
    *(char *)piVar9 = (char)*piVar9 + (char)&stack0xfffffffc;
    *piVar9 = (int)(&stack0xfffffffc + *piVar9);
    pcVar10 = (code *)swi(3);
    bVar5 = (*pcVar10)();
    return bVar5;
  }
}


/* Byte[] ReadAsBytes() */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadAsBytes
          (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  pBVar1 = this;
  (*(this->klass->vtable).Read.methodPtr)(this,(this->klass->vtable).Read.method);
  iVar2 = (*(pBVar1->klass->vtable).get_TokenType.methodPtr)
                    (pBVar1,(pBVar1->klass->vtable).get_TokenType.method);
  if (iVar2 == 0xb) {
    return (Byte__Array *)0x0;
  }
  iVar2 = (*(pBVar1->klass->vtable).get_TokenType.methodPtr)
                    (pBVar1,(pBVar1->klass->vtable).get_TokenType.method);
  if (iVar2 == 0x11) {
    pSVar3 = (String *)
             (*(pBVar1->klass->vtable).get_Value.methodPtr)
                       (pBVar1,(pBVar1->klass->vtable).get_Value.method);
    this_00 = TypeInfo__System__Byte;
    if (pSVar3 == (String *)0x0) {
      return (Byte__Array *)0x0;
    }
    pBVar4 = (Byte__Array *)func_?(pSVar3,TypeInfo__System__Byte);
    if (pBVar4 != (Byte__Array *)0x0) {
      return pBVar4;
    }
  }
  else {
    uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar5);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar5 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar5);
    this = (BsonReader *)func_?(7,pBVar1);
    uVar5 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
    uVar5 = func_?(uVar5);
    func_?(args);
    func_?(args,uVar5);
    func_?(0,uVar5);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Error_reading_bytes__Expected_by);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar3,(IFormatProvider *)provider,args,method_00);
    uVar5 = func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
    this_00 = (Byte__Array__Class *)func_?(uVar5);
    func_?(this_00);
    JsonReaderException::JsonReaderException__ctor_1
              ((JsonReaderException *)this_00,pSVar3,(MethodInfo *)0x0);
    this = (BsonReader *)
           func_?(&MethodInfo__Newtonsoft__Json__Bson__BsonReader__ReadAsBytes__);
    func_?();
  }
  func_?(pSVar3,this_00);
  pcVar6 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar6)();
  return pBVar4;
}


/* Nullable`1[DateTimeOffset] ReadAsDateTimeOffset() */

Nullable_1_DateTimeOffset_ *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadAsDateTimeOffset
          (Nullable_1_DateTimeOffset_ *__return_storage_ptr__,BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&
                    MethodInfo__System__Nullable<System::DateTimeOffset>__Nullable_System__DateTimeOffset_
                   );
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).Read.methodPtr)(this,(this->klass->vtable).Read.method);
  iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  if (iVar1 == 0xb) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    *(undefined4 *)&(__return_storage_ptr__->value)._dateTime._dateData = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->value)._dateTime._dateData + 4) = 0;
    *(undefined8 *)&(__return_storage_ptr__->value)._offsetMinutes = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  if (iVar1 == 0x10) {
    pMVar2 = (MethodInfo *)
             (*(this->klass->vtable).get_Value.methodPtr)
                       (this,(this->klass->vtable).get_Value.method);
    uVar3 = CONCAT44(TypeInfo__System__DateTime,pMVar2);
    DStack_4._dateTime._dateData._0_4_ = 0;
    DStack_4._dateTime._dateData._4_4_ = 0;
    DStack_4._offsetMinutes = 0;
    DStack_4._10_2_ = 0;
    DStack_4._12_4_ = 0;
    if (pMVar2 == (MethodInfo *)0x0) goto code_?;
    if (*(Il2CppClass **)(pMVar2->methodPointer + 0x20) ==
        (TypeInfo__System__DateTime->_0).element_class) {
      iVar1 = func_?();
      dateTime._dateData._4_4_ = 0;
      dateTime._dateData._0_4_ = *(uint *)(iVar1 + 4);
      mscorlib.dll::System::DateTimeOffset::DateTimeOffset__ctor_1(&DStack_4,dateTime,pMVar2);
      uStack_5 = (undefined4)DStack_4._dateTime._dateData;
      uStack_6 = DStack_4._dateTime._dateData._4_4_;
      iStack_7 = DStack_4._offsetMinutes;
      uStack_8 = DStack_4._10_2_;
      uStack_9 = DStack_4._12_4_;
      uVar10 = func_?(TypeInfo__System__DateTimeOffset,&uStack_5);
      (*(this->klass->vtable).SetToken.methodPtr)
                (this,0x10,uVar10,(this->klass->vtable).SetToken.method);
      piVar11 = (int *)(*(this->klass->vtable).get_Value.methodPtr)
                                (this,(this->klass->vtable).get_Value.method);
      pMVar2 = 
      MethodInfo__System__Nullable<System::DateTimeOffset>__Nullable_System__DateTimeOffset_;
      pJStack_12 = (JsonReaderException *)0x0;
      uStack_13 = 0;
      iStack_14 = 0;
      iStack_15 = 0;
      uStack_16._0_4_ = 0;
      uStack_16._4_4_ = 0;
      if (piVar11 == (int *)0x0) goto code_?;
      pDVar17 = TypeInfo__System__DateTimeOffset;
      if (*(Il2CppClass **)(*piVar11 + 0x20) == (TypeInfo__System__DateTimeOffset->_0).element_class)
      {
        iVar1 = func_?(piVar11);
        value.mid = (int32_t)pMVar2;
        value._0_12_ = *(undefined1 (*) [12])(iVar1 + 4);
        value.ulomidLE._0_4_ = unaff_EDI;
        value.ulomidLE._4_4_ = unaff_ESI;
        mscorlib.dll::System::Nullable`1[Decimal]::Nullable_1_Decimal___ctor
                  ((Nullable_1_Decimal_ *)&pJStack_12,value,in_stack_18);
        *(JsonReaderException **)__return_storage_ptr__ = pJStack_12;
        *(undefined4 *)&__return_storage_ptr__->field_0x4 = uStack_13;
        *(int32_t *)&(__return_storage_ptr__->value)._dateTime._dateData = iStack_14;
        *(int32_t *)((int)&(__return_storage_ptr__->value)._dateTime._dateData + 4) = iStack_15;
        *(undefined8 *)&(__return_storage_ptr__->value)._offsetMinutes = uStack_16;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  else {
    uVar10 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar10);
    pCStack_19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
    uVar10 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar10);
    uStack_20 = func_?(7,this);
    uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&uStack_20);
    uVar10 = func_?(uVar10);
    func_?(args);
    func_?(args,uVar10);
    func_?(0,uVar10);
    pMVar2 = (MethodInfo *)0x0;
    provider = pCStack_19;
    pSVar21 = (String *)func_?(&StringLiteral_Error_reading_date__Expected_byt);
    pSVar21 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar21,(IFormatProvider *)provider,args,pMVar2);
    uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
    this_00 = (JsonReaderException *)func_?(uVar10);
    func_?(this_00);
    JsonReaderException::JsonReaderException__ctor_1(this_00,pSVar21,(MethodInfo *)0x0);
    uStack_13 = func_?(&
                                MethodInfo__Newtonsoft__Json__Bson__BsonReader__ReadAsDateTimeOffset__
                               );
    pJStack_12 = this_00;
    func_?();
    piVar11 = extraout_ECX;
    pDVar17 = extraout_EDX;
code_?:
    uVar3 = func_?(piVar11,pDVar17);
  }
  func_?(uVar3);
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  pNVar23 = (Nullable_1_DateTimeOffset_ *)(*pcVar22)();
  return pNVar23;
}


/* Nullable`1[Decimal] ReadAsDecimal() */

Nullable_1_Decimal_ *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadAsDecimal
          (Nullable_1_Decimal_ *__return_storage_ptr__,BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Decimal);
    func_?(&MethodInfo__System__Nullable<System::Decimal>__Nullable_System__Decimal_);
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).Read.methodPtr)(this,(this->klass->vtable).Read.method);
  iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  if (iVar1 == 0xb) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    (__return_storage_ptr__->value).flags = 0;
    (__return_storage_ptr__->value).hi = 0;
    (__return_storage_ptr__->value).lo = 0;
    (__return_storage_ptr__->value).mid = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  if (iVar1 == 7) {
code_?:
    pCStack_2 = (CultureInfo *)
                 (*(this->klass->vtable).get_Value.methodPtr)
                           (this,(this->klass->vtable).get_Value.method);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    pDVar4 = mscorlib.dll::System::Convert::Convert_ToDecimal_1
                       (&DStack_5,(Object *)pCStack_2,(IFormatProvider *)pCVar3,(MethodInfo *)0x0)
    ;
    DStack_5.ulomidLE._0_4_ = pDVar4->flags;
    DStack_5.ulomidLE._4_4_ = pDVar4->hi;
    iStack_6 = pDVar4->lo;
    iStack_7 = pDVar4->mid;
    uVar8 = func_?(TypeInfo__System__Decimal,&DStack_5.ulomidLE);
    (*(this->klass->vtable).SetToken.methodPtr)(this,8,uVar8,(this->klass->vtable).SetToken.method);
    piVar9 = (int *)(*(this->klass->vtable).get_Value.methodPtr)
                              (this,(this->klass->vtable).get_Value.method);
    pMVar10 = MethodInfo__System__Nullable<System::Decimal>__Nullable_System__Decimal_;
    uVar8 = 0;
    iVar11 = 0;
    method_00 = (MethodInfo *)0x0;
    if (piVar9 == (int *)0x0) goto code_?;
    if (*(Il2CppClass **)(*piVar9 + 0x20) == (TypeInfo__System__Decimal->_0).element_class) {
      iVar1 = func_?();
      value.mid = (int32_t)pMVar10;
      value._0_12_ = *(undefined1 (*) [12])(iVar1 + 4);
      value.ulomidLE._0_4_ = uVar8;
      value.ulomidLE._4_4_ = iVar11;
      mscorlib.dll::System::Nullable`1[Decimal]::Nullable_1_Decimal___ctor
                ((Nullable_1_Decimal_ *)&stack0xffffffa0,value,method_00);
      *(MethodInfo **)__return_storage_ptr__ = pMVar10;
      *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar8;
      (__return_storage_ptr__->value).flags = iVar11;
      (__return_storage_ptr__->value).hi = (int32_t)method_00;
      (__return_storage_ptr__->value).lo = 0;
      (__return_storage_ptr__->value).mid = 0;
      return __return_storage_ptr__;
    }
  }
  else {
    iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                      (this,(this->klass->vtable).get_TokenType.method);
    if (iVar1 == 8) goto code_?;
    uVar8 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar8);
    pCStack_2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
    uVar8 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar8);
    uStack_12 = func_?(7,this);
    uVar8 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&uStack_12);
    uVar8 = func_?(uVar8);
    func_?(args);
    func_?(args,uVar8);
    func_?(0,uVar8);
    pMVar10 = (MethodInfo *)0x0;
    pCVar3 = pCStack_2;
    pSVar13 = (String *)func_?(&StringLiteral_Error_reading_decimal__Expected_);
    pSVar13 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar13,(IFormatProvider *)pCVar3,args,pMVar10);
    uVar8 = func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
    this_00 = (JsonReaderException *)func_?(uVar8);
    func_?(this_00);
    JsonReaderException::JsonReaderException__ctor_1(this_00,pSVar13,(MethodInfo *)0x0);
    func_?(&MethodInfo__Newtonsoft__Json__Bson__BsonReader__ReadAsDecimal__);
    func_?();
    piVar9 = extraout_ECX;
  }
  func_?(piVar9);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pNVar15 = (Nullable_1_Decimal_ *)(*pcVar14)();
  return pNVar15;
}


/* Byte[] ReadBinary() */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadBinary
          (BsonReader *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._currentContext;
  if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
    piVar2 = &(pBVar1->fields).Position;
    *piVar2 = *piVar2 + 4;
    pBVar3 = (this->fields)._reader;
    if (pBVar3 != (BinaryReader *)0x0) {
      iVar4 = (*(pBVar3->klass->vtable).ReadInt32.methodPtr)
                        (pBVar3,(pBVar3->klass->vtable).ReadInt32.method);
      pBVar1 = (this->fields)._currentContext;
      if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
        piVar2 = &(pBVar1->fields).Position;
        *piVar2 = *piVar2 + 1;
        pBVar3 = (this->fields)._reader;
        if (pBVar3 != (BinaryReader *)0x0) {
          cVar5 = (*(pBVar3->klass->vtable).ReadByte.methodPtr)
                            (pBVar3,(pBVar3->klass->vtable).ReadByte.method);
          if ((cVar5 == '\x02') && ((this->fields)._jsonNet35BinaryCompatibility == 0)) {
            pBVar1 = (this->fields)._currentContext;
            if (pBVar1 == (BsonReader_ContainerContext *)0x0) goto code_?;
            piVar2 = &(pBVar1->fields).Position;
            *piVar2 = *piVar2 + 4;
            pBVar3 = (this->fields)._reader;
            if (pBVar3 == (BinaryReader *)0x0) goto code_?;
            iVar4 = (*(pBVar3->klass->vtable).ReadInt32.methodPtr)
                              (pBVar3,(pBVar3->klass->vtable).ReadInt32.method);
          }
          pBVar1 = (this->fields)._currentContext;
          if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
            piVar2 = &(pBVar1->fields).Position;
            *piVar2 = *piVar2 + iVar4;
            pBVar3 = (this->fields)._reader;
            if (pBVar3 != (BinaryReader *)0x0) {
              pBVar6 = (Byte__Array *)
                       (*(pBVar3->klass->vtable).ReadBytes.methodPtr)
                                 (pBVar3,iVar4,(pBVar3->klass->vtable).ReadBytes.method);
              return pBVar6;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pBVar6 = (Byte__Array *)(*pcVar7)();
  return pBVar6;
}


/* Byte ReadByte() */

uint8_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadByte
                  (BsonReader *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pBVar2 = (this->fields)._currentContext;
  if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
    piVar3 = &(pBVar2->fields).Position;
    *piVar3 = *piVar3 + 1;
    pBStack_4 = (this->fields)._reader;
    if (pBStack_4 != (BinaryReader *)0x0) {
      pMStack_1 = (pBStack_4->klass->vtable).ReadByte.method;
      uVar5 = (*(pBStack_4->klass->vtable).ReadByte.methodPtr)();
      return uVar5;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  uVar5 = (*pcVar8)();
  return uVar5;
}


/* Byte[] ReadBytes(Int32) */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadBytes
          (BsonReader *this,int32_t count,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pBVar2 = (this->fields)._currentContext;
  if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
    (pBVar2->fields).Position = (pBVar2->fields).Position + count;
    pBStack_3 = (this->fields)._reader;
    if (pBStack_3 != (BinaryReader *)0x0) {
      pMStack_1 = (pBStack_3->klass->vtable).ReadBytes.method;
      iStack_4 = count;
      pBVar5 = (Byte__Array *)(*(pBStack_3->klass->vtable).ReadBytes.methodPtr)();
      return pBVar5;
    }
  }
  uVar6 = func_?(&pBStack_3);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pBVar5 = (Byte__Array *)(*pcVar7)();
  return pBVar5;
}


/* Boolean ReadCodeWScope() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadCodeWScope
               (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  switch((this->fields)._bsonReaderState) {
  case 4:
    (*(this->klass->vtable).SetToken.methodPtr)();
    (this->fields)._bsonReaderState = 5;
    return 1;
  case 5:
    BsonReader_ReadInt32(this,(MethodInfo *)0x0);
    BsonReader_ReadLengthString(this,(MethodInfo *)0x0);
    (*(this->klass->vtable).SetToken.methodPtr)();
    (this->fields)._bsonReaderState = 6;
    return 1;
  case 6:
    if ((this->fields)._._currentState == 8) {
      func_?();
      return 1;
    }
    JsonReader::JsonReader_SetToken
              ((JsonReader *)this,JsonToken__Enum_StartObject,(MethodInfo *)0x0);
    (this->fields)._bsonReaderState = 7;
    newContext = (BsonReader_ContainerContext *)func_?();
    bVar1 = 0;
    if (newContext != (BsonReader_ContainerContext *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)newContext,ExceptionArgument__Enum_obj,unaff_retaddr);
      (newContext->fields).Type = 3;
      BsonReader_PushContext(this,newContext,(MethodInfo *)0x0);
      iVar2 = BsonReader_ReadInt32(this,(MethodInfo *)0x0);
      (newContext->fields).Length = iVar2;
      return 1;
    }
    break;
  case 7:
    bVar3 = BsonReader_ReadNormal(this,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      iVar4 = (*(this->klass->vtable).get_TokenType.methodPtr)();
      if (iVar4 == 0xd) {
        (this->fields)._bsonReaderState = 8;
      }
      return bVar3;
    }
    return 0;
  case 8:
    JsonReader::JsonReader_SetToken((JsonReader *)this,JsonToken__Enum_EndObject,(MethodInfo *)0x0);
    (this->fields)._bsonReaderState = 0;
    return 1;
  default:
    func_?();
    this = (BsonReader *)func_?();
    func_?();
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
              ((ArgumentOutOfRangeException *)this,(MethodInfo *)0x0);
    func_?();
    bVar1 = (undefined1 *)0xffffffe7 < &stack0xffffffe8;
    func_?();
  }
  bVar5 = func_?();
  bVar6 = *(char *)&this->klass + bVar5;
  bVar7 = CARRY1(*(byte *)&this->klass,bVar5) || CARRY1(bVar6,bVar1);
  *(byte *)&this->klass = bVar6 + bVar1;
  if ((POPCOUNT(*(undefined1 *)&this->klass) & 1U) != 0) {
    pcVar8 = (code *)swi(3);
    bVar3 = (*pcVar8)();
    return bVar3;
  }
  bVar1 = *extraout_ECX;
  bVar5 = (byte)((uint)unaff_EBX >> 8);
  bVar6 = *extraout_ECX + bVar5;
  *extraout_ECX = bVar6 + bVar7;
  if ((POPCOUNT(*extraout_ECX) & 1U) != 0) {
    pcVar8 = (code *)swi(3);
    bVar3 = (*pcVar8)();
    return bVar3;
  }
  pcVar9 = (char *)(extraout_EDX + -0x19efb485);
  *pcVar9 = *pcVar9 + (char)((uint)extraout_ECX >> 8) +
            (CARRY1(bVar1,bVar5) || CARRY1(bVar6,bVar7));
  if ((POPCOUNT(*pcVar9) & 1U) == 0) {
    pcVar8 = (code *)swi(3);
    bVar3 = (*pcVar8)();
    return bVar3;
  }
  pbVar10 = (byte *)(unaff_EBX + -0x367abbb2);
  *pbVar10 = *pbVar10 | (byte)extraout_ECX;
  if (*pbVar10 != 0) {
    *(int *)(extraout_ECX + 0x10) = *(int *)(extraout_ECX + 0x10) + 1;
    pBVar11 = (this->fields)._reader;
    if (pBVar11 != (BinaryReader *)0x0) {
      iVar12 = (*(pBVar11->klass->vtable).ReadSByte.methodPtr)();
      (this->fields)._currentElementType = iVar12;
      pSVar13 = BsonReader_ReadString(this,(MethodInfo *)0x0);
      return (bool)pSVar13;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar3 = (*pcVar8)();
  return bVar3;
}


/* Double ReadDouble() */

double Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadDouble
                 (BsonReader *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pBVar2 = (this->fields)._currentContext;
  if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
    piVar3 = &(pBVar2->fields).Position;
    *piVar3 = *piVar3 + 8;
    pBStack_4 = (this->fields)._reader;
    if (pBStack_4 != (BinaryReader *)0x0) {
      pMStack_1 = (pBStack_4->klass->vtable).ReadDouble.method;
      fVar5 = (float10)(*(pBStack_4->klass->vtable).ReadDouble.methodPtr)();
      return (double)fVar5;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  fVar5 = (float10)(*pcVar8)();
  return (double)fVar5;
}


/* String ReadElement() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadElement
                   (BsonReader *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._currentContext;
  if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
    piVar2 = &(pBVar1->fields).Position;
    *piVar2 = *piVar2 + 1;
    pBVar3 = (this->fields)._reader;
    if (pBVar3 != (BinaryReader *)0x0) {
      iVar4 = (*(pBVar3->klass->vtable).ReadSByte.methodPtr)
                        (pBVar3,(pBVar3->klass->vtable).ReadSByte.method);
      (this->fields)._currentElementType = iVar4;
      pSVar5 = BsonReader_ReadString(this,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}


/* Int32 ReadInt32() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadInt32
                  (BsonReader *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pBVar2 = (this->fields)._currentContext;
  if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
    piVar3 = &(pBVar2->fields).Position;
    *piVar3 = *piVar3 + 4;
    pBStack_4 = (this->fields)._reader;
    if (pBStack_4 != (BinaryReader *)0x0) {
      pMStack_1 = (pBStack_4->klass->vtable).ReadInt32.method;
      iVar5 = (*(pBStack_4->klass->vtable).ReadInt32.methodPtr)();
      return iVar5;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  iVar5 = (*pcVar8)();
  return iVar5;
}


/* Int64 ReadInt64() */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadInt64
                  (BsonReader *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pBVar2 = (this->fields)._currentContext;
  if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
    piVar3 = &(pBVar2->fields).Position;
    *piVar3 = *piVar3 + 8;
    pBStack_4 = (this->fields)._reader;
    if (pBStack_4 != (BinaryReader *)0x0) {
      pMStack_1 = (pBStack_4->klass->vtable).ReadInt64.method;
      iVar5 = (*(pBStack_4->klass->vtable).ReadInt64.methodPtr)();
      return iVar5;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  iVar5 = (*pcVar8)();
  return iVar5;
}


/* String ReadLengthString() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadLengthString
                   (BsonReader *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._currentContext;
  if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
    piVar2 = &(pBVar1->fields).Position;
    *piVar2 = *piVar2 + 4;
    pBVar3 = (this->fields)._reader;
    if (pBVar3 != (BinaryReader *)0x0) {
      iVar4 = (*(pBVar3->klass->vtable).ReadInt32.methodPtr)
                        (pBVar3,(pBVar3->klass->vtable).ReadInt32.method);
      pBVar1 = (this->fields)._currentContext;
      if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
        piVar2 = &(pBVar1->fields).Position;
        *piVar2 = *piVar2 + iVar4;
        pSVar5 = BsonReader_GetString(this,iVar4 + -1,(MethodInfo *)0x0);
        pBVar3 = (this->fields)._reader;
        if (pBVar3 != (BinaryReader *)0x0) {
          (*(pBVar3->klass->vtable).ReadByte.methodPtr)
                    (pBVar3,(pBVar3->klass->vtable).ReadByte.method);
          return pSVar5;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}


/* Boolean ReadNormal() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadNormal
               (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pBVar1 = this;
  switch((this->fields)._._currentState) {
  case 0:
    bVar2 = (this->fields)._readRootValueAsArray;
    unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),bVar2);
    JsonReader::JsonReader_SetToken
              ((JsonReader *)this,(bVar2 != 0) + JsonToken__Enum_StartObject,(MethodInfo *)0x0);
    pBVar3 = (BsonReader_ContainerContext *)
             func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader__ContainerContext);
    if (pBVar3 != (BsonReader_ContainerContext *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)pBVar3,ExceptionArgument__Enum_obj,unaff_EBP);
      (pBVar3->fields).Type = (bVar2 != 0) + 3;
      BsonReader_PushContext(pBVar1,pBVar3,(MethodInfo *)0x0);
      iVar4 = BsonReader_ReadInt32(pBVar1,(MethodInfo *)0x0);
      (pBVar3->fields).Length = iVar4;
      return 1;
    }
    break;
  case 1:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    return 0;
  case 2:
    BsonReader_ReadType(this,(uint)(byte)(this->fields)._currentElementType,(MethodInfo *)0x0);
    return 1;
  case 3:
  case 5:
  case 8:
    pBVar3 = (this->fields)._currentContext;
    if (pBVar3 == (BsonReader_ContainerContext *)0x0) {
      return 0;
    }
    iVar5 = (pBVar3->fields).Length + -1;
    iVar6 = (pBVar3->fields).Position;
    if (iVar6 < iVar5) {
      if ((pBVar3->fields).Type == 4) {
        BsonReader_ReadElement(this,(MethodInfo *)0x0);
        BsonReader_ReadType(pBVar1,(uint)(byte)(pBVar1->fields)._currentElementType,
                            (MethodInfo *)0x0);
        return 1;
      }
      BsonReader_ReadElement(this,(MethodInfo *)0x0);
      func_?(0xf,pBVar1,4);
      return 1;
    }
    if (iVar6 != iVar5) goto code_?;
    uVar7 = BsonReader_ReadByte(this,(MethodInfo *)0x0);
    if (uVar7 != 0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pLVar8 = (pBVar1->fields)._stack;
    if (pLVar8 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)(pBVar1->fields)._stack,(pLVar8->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__RemoveAt_int_
                );
      pLVar8 = (pBVar1->fields)._stack;
      if (pLVar8 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
        if ((pLVar8->fields)._size == 0) {
          RVar9.First = 0;
          RVar9.Last = 0;
        }
        else {
          this = (BsonReader *)
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Item_int_
          ;
          RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              (pBVar1->fields)._stack,(pLVar8->fields)._size + -1,
                              MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Item_int_
                             );
        }
        (pBVar1->fields)._currentContext = (BsonReader_ContainerContext *)RVar9;
        method = (MethodInfo *)&UNK_?;
        func_?();
        if ((pBVar1->fields)._currentContext != (BsonReader_ContainerContext *)0x0) {
          pBVar10 = (pBVar1->fields)._currentContext;
          (pBVar10->fields).Position = (pBVar10->fields).Position + (pBVar3->fields).Length;
        }
        method = (MethodInfo *)pBVar1;
        this = (BsonReader *)&UNK_?;
        JsonReader::JsonReader_SetToken
                  ((JsonReader *)pBVar1,((pBVar3->fields).Type != 3) + JsonToken__Enum_EndObject,
                   (MethodInfo *)0x0);
        return 1;
      }
    }
    break;
  default:
    uVar11 = func_?();
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar11);
    func_?(this_00);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
              (this_00,(MethodInfo *)0x0);
    func_?(&MethodInfo__Newtonsoft__Json__Bson__BsonReader__ReadNormal__);
    func_?();
code_?:
    uVar11 = func_?();
    pJVar12 = (JsonReaderException *)func_?(uVar11);
    func_?(pJVar12);
    method_00 = (Enum__Class *)0x0;
    pSVar13 = (String *)func_?(&StringLiteral_Read_past_end_of_current_contain);
    JsonReaderException::JsonReaderException__ctor_1(pJVar12,pSVar13,(MethodInfo *)method_00);
    func_?();
    func_?();
  }
  func_?();
code_?:
  func_?();
  pBVar1 = (BsonReader *)func_?();
  func_?();
  method_01 = (MethodInfo *)0x0;
  pSVar13 = (String *)func_?();
  JsonReaderException::JsonReaderException__ctor_1((JsonReaderException *)pBVar1,pSVar13,method_01)
  ;
  this = (BsonReader *)func_?();
  bVar14 = (undefined1 *)0xffffffef < &stack0xfffffff8;
  uVar15 = func_?();
  piVar16 = (int *)((ulonglong)uVar15 >> 0x20);
  iVar6 = (int)uVar15;
  pbVar17 = (byte *)(unaff_EBX + 0x5d104b7f);
  bVar18 = (byte)((ulonglong)uVar15 >> 8);
  bVar19 = *pbVar17;
  bVar20 = *pbVar17 + bVar18;
  bVar21 = CARRY1(*pbVar17,bVar18) || CARRY1(bVar20,bVar14);
  *pbVar17 = bVar20 + bVar14;
  if (*pbVar17 != 0 && (SCARRY1(bVar19,bVar18) != SCARRY1(bVar20,bVar14)) == (char)*pbVar17 < '\0') {
    pbVar17 = (byte *)(unaff_EBX + 0x7e);
    bVar19 = *pbVar17;
    bVar18 = (byte)((ulonglong)uVar15 >> 0x28);
    bVar20 = *pbVar17 + bVar18;
    *pbVar17 = bVar20 + bVar21;
    *(char *)((int)extraout_ECX + 0x104b7f) =
         *(char *)((int)extraout_ECX + 0x104b7f) + (char)((uint)extraout_ECX >> 8) +
         (CARRY1(bVar19,bVar18) || CARRY1(bVar20,bVar21));
    *piVar16 = *piVar16 + iVar6;
    iVar6 = iVar6 + *(int *)(unaff_EBX + -1 + iVar6);
    *extraout_ECX =
         *extraout_ECX + CONCAT31((int3)((uint)iVar6 >> 8),(char)iVar6 + '\x01') + *extraout_ECX;
    pcVar22 = (code *)swi(3);
    bVar2 = (*pcVar22)();
    return bVar2;
  }
  iVar6 = (pBVar1->fields)._._currentState;
  if (iVar6 == 2) {
    if ((pBVar1->fields)._bsonReaderState == 2) {
      BsonReader_ReadLengthString(pBVar1,(MethodInfo *)0x0);
      (*(pBVar1->klass->vtable).SetToken.methodPtr)();
      return 1;
    }
    if ((pBVar1->fields)._bsonReaderState == 3) {
      BsonReader_ReadBytes(pBVar1,0xc,(MethodInfo *)0x0);
      (*(pBVar1->klass->vtable).SetToken.methodPtr)();
      return 1;
    }
  }
  else {
    if (iVar6 == 3) {
      (*(pBVar1->klass->vtable).SetToken.methodPtr)();
      (pBVar1->fields)._bsonReaderState = 2;
      return 1;
    }
    if (iVar6 == 8) {
      if ((pBVar1->fields)._bsonReaderState == 2) {
        (*(pBVar1->klass->vtable).SetToken.methodPtr)();
        (pBVar1->fields)._bsonReaderState = 3;
        return 1;
      }
      if ((pBVar1->fields)._bsonReaderState == 3) {
        JsonReader::JsonReader_SetToken
                  ((JsonReader *)pBVar1,JsonToken__Enum_EndObject,(MethodInfo *)0x0);
        (pBVar1->fields)._bsonReaderState = 0;
        return 1;
      }
    }
    else {
      StreamingAsset`2[System::Object,System::Object]::
      StreamingAsset_2_System_Object_System_Object__get_Asset
                ((StreamingAsset_2_System_Object_System_Object_ *)pBVar1,(MethodInfo *)0x0);
      this = (BsonReader *)&this;
    }
  }
  func_?();
  func_?();
  pSVar13 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
  this = (BsonReader *)0x0;
  str0 = (String *)func_?();
  pSVar13 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar13,(MethodInfo *)this);
  this = (BsonReader *)&TypeInfo__Newtonsoft__Json__JsonReaderException;
  func_?();
  pJVar12 = (JsonReaderException *)func_?();
  func_?();
  JsonReaderException::JsonReaderException__ctor_1(pJVar12,pSVar13,(MethodInfo *)0x0);
  iStack23 = func_?();
  pJStack24 = pJVar12;
  func_?();
  pcVar22 = (code *)swi(3);
  bVar2 = (*pcVar22)();
  return bVar2;
}


/* Boolean ReadReference() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadReference
               (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__id);
    func_?(&StringLiteral__ref);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._._currentState;
  if (iVar1 == 2) {
    if ((this->fields)._bsonReaderState == 2) {
      pSVar2 = BsonReader_ReadLengthString(this,(MethodInfo *)0x0);
      (*(this->klass->vtable).SetToken.methodPtr)
                (this,9,pSVar2,(this->klass->vtable).SetToken.method);
      return 1;
    }
    if ((this->fields)._bsonReaderState == 3) {
      pBVar3 = BsonReader_ReadBytes(this,0xc,(MethodInfo *)0x0);
      (*(this->klass->vtable).SetToken.methodPtr)
                (this,0x11,pBVar3,(this->klass->vtable).SetToken.method);
      return 1;
    }
  }
  else {
    if (iVar1 == 3) {
      (*(this->klass->vtable).SetToken.methodPtr)
                (this,4,StringLiteral__ref,(this->klass->vtable).SetToken.method);
      (this->fields)._bsonReaderState = 2;
      return 1;
    }
    if (iVar1 != 8) {
      piVar4 = (int32_t *)0x0;
      StreamingAsset`2[System::Object,System::Object]::
      StreamingAsset_2_System_Object_System_Object__get_Asset
                ((StreamingAsset_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
      ppBVar5 = (BsonReader_BsonReaderState__Enum__Class **)this;
      goto code_?;
    }
    if ((this->fields)._bsonReaderState == 2) {
      (*(this->klass->vtable).SetToken.methodPtr)
                (this,4,StringLiteral__id,(this->klass->vtable).SetToken.method);
      (this->fields)._bsonReaderState = 3;
      return 1;
    }
    if ((this->fields)._bsonReaderState == 3) {
      JsonReader::JsonReader_SetToken
                ((JsonReader *)this,JsonToken__Enum_EndObject,(MethodInfo *)0x0);
      (this->fields)._bsonReaderState = 0;
      return 1;
    }
  }
  piVar4 = &(this->fields)._bsonReaderState;
  ppBVar5 = &TypeInfo__Newtonsoft__Json__Bson__BsonReader__BsonReaderState;
code_?:
  uVar6 = func_?(ppBVar5,piVar4);
  func_?(uVar6);
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_7,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  str0 = (String *)func_?(&StringLiteral_Unexpected_state_when_reading_BS);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar2,method_00);
  uVar6 = func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
  this_00 = (JsonReaderException *)func_?(uVar6);
  func_?(this_00);
  JsonReaderException::JsonReaderException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
  func_?(&MethodInfo__Newtonsoft__Json__Bson__BsonReader__ReadReference__);
  EStack_7.monitor = (MonitorData *)&UNK_?;
  pJStack_8 = this_00;
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* String ReadString() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadString
                   (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    cRam_? = '\x01';
  }
  BsonReader_EnsureBuffers(this,(MethodInfo *)0x0);
  this_00 = (StringBuilder *)0x0;
  pMStack_1 = (MethodInfo *)0x0;
  uStack_2 = 0;
code_?:
  uVar3 = uStack_2;
  uVar4 = uStack_2;
  if (0x7f < (int)uStack_2) goto code_?;
code_?:
  do {
    pBVar5 = (this->fields)._reader;
    if (pBVar5 == (BinaryReader *)0x0) goto code_?;
    uVar6 = (*(pBVar5->klass->vtable).ReadByte.methodPtr)
                      (pBVar5,(pBVar5->klass->vtable).ReadByte.method);
    uVar4 = uVar3;
    if (uVar6 == 0) break;
    pBVar7 = (this->fields)._byteBuffer;
    uVar4 = uVar3 + 1;
    if (pBVar7 == (Byte__Array *)0x0) goto code_?;
    if (pBVar7->max_length <= uVar3) goto code_?;
    pBVar7->vector[uVar3] = uVar6;
    uVar3 = uVar4;
  } while ((int)uVar4 < 0x80);
code_?:
  iVar8 = uVar4 - uStack_2;
  if (((int)uVar4 < 0x80) && (this_00 == (StringBuilder *)0x0)) {
    pEVar9 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar9 != (Encoding *)0x0) {
      iVar10 = (*(pEVar9->klass->vtable).__unknown_3.methodPtr)
                        (pEVar9,(this->fields)._byteBuffer,0,iVar8,(this->fields)._charBuffer,0,
                         (pEVar9->klass->vtable).__unknown_3.method);
      pBVar11 = (this->fields)._currentContext;
      if (pBVar11 != (BsonReader_ContainerContext *)0x0) {
        piVar12 = &(pBVar11->fields).Position;
        *piVar12 = (int)pMStack_1 + *piVar12 + iVar8 + 1;
        pSVar13 = mscorlib.dll::System::String::String_CreateString_3
                            ((String *)0x0,(this->fields)._charBuffer,0,iVar10,(MethodInfo *)0x0);
        return pSVar13;
      }
    }
  }
  else {
    iVar10 = BsonReader_GetLastFullCharStop(this,uVar4 - 1,(MethodInfo *)0x0);
    pEVar9 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar9 == (Encoding *)0x0) goto code_?;
    pMStack_1 = (pEVar9->klass->vtable).__unknown_3.method;
    iVar10 = (*(pEVar9->klass->vtable).__unknown_3.methodPtr)
                      (pEVar9,(this->fields)._byteBuffer,0,iVar10 + 1,(this->fields)._charBuffer);
    if (this_00 == (StringBuilder *)0x0) {
      this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
      if (this_00 == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_1
                (this_00,0x100,(MethodInfo *)0x0);
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_1
              (this_00,(this->fields)._charBuffer,0,iVar10,(MethodInfo *)0x0);
    if (0 < iVar8 + -1) goto code_?;
    if (0x7f < (int)uVar4) {
      uStack_2 = 0;
      uVar3 = 0;
      goto code_?;
    }
    pBVar11 = (this->fields)._currentContext;
    if (pBVar11 != (BsonReader_ContainerContext *)0x0) {
      piVar12 = &(pBVar11->fields).Position;
      *piVar12 = (int)&pMStack_1->methodPointer + *piVar12 + 1;
      pSVar13 = (String *)
                (*(this_00->klass->vtable).ToString.methodPtr)
                          (this_00,(this_00->klass->vtable).ToString.method);
      return pSVar13;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pSVar13 = (String *)(*pcVar14)();
  return pSVar13;
code_?:
  uStack_2 = iVar8 - 1;
  mscorlib.dll::System::Array::Array_Copy_3
            ((Array *)(this->fields)._byteBuffer,1,(Array *)(this->fields)._byteBuffer,0,uStack_2,
             (MethodInfo *)0x0);
  goto code_?;
}


/* Void ReadType(BsonType) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadType
               (BsonReader *this,BsonType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonReader__ContainerContext);
    func_?();
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__Double);
    func_?(&TypeInfo__System__Int64);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  switch((undefined1)type) {
  case 1:
    pBVar1 = (this->fields)._currentContext;
    if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
      piVar2 = &(pBVar1->fields).Position;
      *piVar2 = *piVar2 + 8;
      pBVar3 = (this->fields)._reader;
      if (pBVar3 != (BinaryReader *)0x0) {
        type = (BsonType__Enum)(pBVar3->klass->vtable).ReadDouble.methodPtr;
        fVar4 = (float10)(*(code *)type)(pBVar3,(pBVar3->klass->vtable).ReadDouble.method);
        uStack_5 = (double)fVar4;
        uVar6 = func_?(TypeInfo__System__Double,&uStack_5);
        func_?(0xf,this,8,uVar6);
        return;
      }
    }
    break;
  case 2:
  case 0xe:
    pSVar7 = BsonReader_ReadLengthString(this,(MethodInfo *)0x0);
    (*(this->klass->vtable).SetToken.methodPtr)
              (this,9,pSVar7,(this->klass->vtable).SetToken.method);
    return;
  case 3:
    JsonReader::JsonReader_SetToken
              ((JsonReader *)this,JsonToken__Enum_StartObject,(MethodInfo *)0x0);
    pBVar8 = unaff_EDI;
    pBVar1 = (BsonReader_ContainerContext *)func_?();
    unaff_EDI = this;
    if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)pBVar1,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar8);
      (pBVar1->fields).Type = 3;
      BsonReader_PushContext(this,pBVar1,(MethodInfo *)0x0);
      iVar9 = BsonReader_ReadInt32(this,(MethodInfo *)0x0);
      (pBVar1->fields).Length = iVar9;
      return;
    }
    break;
  case 4:
    JsonReader::JsonReader_SetToken((JsonReader *)this,JsonToken__Enum_StartArray,(MethodInfo *)0x0)
    ;
    pBVar8 = unaff_EDI;
    pBVar1 = (BsonReader_ContainerContext *)func_?();
    unaff_EDI = this;
    if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)pBVar1,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar8);
      (pBVar1->fields).Type = 4;
      BsonReader_PushContext(this,pBVar1,(MethodInfo *)0x0);
      iVar9 = BsonReader_ReadInt32(this,(MethodInfo *)0x0);
      (pBVar1->fields).Length = iVar9;
      return;
    }
    break;
  case 5:
    pBVar1 = (this->fields)._currentContext;
    if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
      piVar2 = &(pBVar1->fields).Position;
      *piVar2 = *piVar2 + 4;
      pBVar3 = (this->fields)._reader;
      if (pBVar3 != (BinaryReader *)0x0) {
        unaff_EDI = (BsonReader *)
                    (*(pBVar3->klass->vtable).ReadInt32.methodPtr)
                              (pBVar3,(pBVar3->klass->vtable).ReadInt32.method);
        pBVar1 = (this->fields)._currentContext;
        if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
          piVar2 = &(pBVar1->fields).Position;
          *piVar2 = *piVar2 + 1;
          pBVar3 = (this->fields)._reader;
          if (pBVar3 != (BinaryReader *)0x0) {
            cVar10 = (*(pBVar3->klass->vtable).ReadByte.methodPtr)
                              (pBVar3,(pBVar3->klass->vtable).ReadByte.method);
            if ((cVar10 == '\x02') && ((this->fields)._jsonNet35BinaryCompatibility == 0)) {
              pBVar1 = (this->fields)._currentContext;
              if (pBVar1 == (BsonReader_ContainerContext *)0x0) break;
              piVar2 = &(pBVar1->fields).Position;
              *piVar2 = *piVar2 + 4;
              pBVar3 = (this->fields)._reader;
              if (pBVar3 == (BinaryReader *)0x0) break;
              unaff_EDI = (BsonReader *)
                          (*(pBVar3->klass->vtable).ReadInt32.methodPtr)
                                    (pBVar3,(pBVar3->klass->vtable).ReadInt32.method);
            }
            pBVar1 = (this->fields)._currentContext;
            if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
              piVar2 = &(pBVar1->fields).Position;
              *piVar2 = (int)&unaff_EDI->klass + *piVar2;
              pBVar3 = (this->fields)._reader;
              if (pBVar3 != (BinaryReader *)0x0) {
                uVar6 = (*(pBVar3->klass->vtable).ReadBytes.methodPtr)
                                   (pBVar3,unaff_EDI,(pBVar3->klass->vtable).ReadBytes.method);
                func_?(0xf,this,0x11,uVar6);
                return;
              }
            }
          }
        }
      }
    }
    break;
  case 6:
    JsonReader::JsonReader_SetToken((JsonReader *)this,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
    return;
  case 7:
    pBVar11 = BsonReader_ReadBytes(this,0xc,(MethodInfo *)0x0);
    func_?(0xf,this,0x11,pBVar11);
    return;
  case 8:
    uVar12 = BsonReader_ReadByte(this,(MethodInfo *)0x0);
    uStack_5._0_5_ = CONCAT14(uVar12,(MonitorData *)uStack_5);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    bVar13 = mscorlib.dll::System::Convert::Convert_ToBoolean_2
                       ((uint8_t)((ulonglong)uStack_5 >> 0x20),(MethodInfo *)0x0);
    type = CONCAT13(bVar13,(undefined3)type);
    uVar6 = func_?(TypeInfo__System__Boolean,(byte *)((int)&type + 3));
    func_?(0xf,this,10,uVar6);
    return;
  case 9:
    javaScriptTicks = BsonReader_ReadInt64(this,(MethodInfo *)0x0);
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    value = JsonConvert::JsonConvert_ConvertJavaScriptTicksToDateTime
                      (javaScriptTicks,(MethodInfo *)0x0);
    iVar14 = (this->fields)._dateTimeKindHandling;
    if (iVar14 == 0) {
      if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = mscorlib.dll::System::DateTime::DateTime_SpecifyKind
                        (value,DateTimeKind__Enum_Unspecified,(MethodInfo *)0x0);
    }
    else if (iVar14 == 2) {
      value = mscorlib.dll::System::DateTime::DateTime_ToLocalTime
                        ((DateTime *)&stack0xffffffe8,(MethodInfo *)0x0);
    }
    auStack_15 = (undefined1  [4])TypeInfo__System__DateTime;
    uStack_5 = (double)CONCAT44((int)(value._dateData >> 0x20),&uStack_5);
    func_?();
    func_?(0xf,this);
    return;
  case 10:
    JsonReader::JsonReader_SetToken((JsonReader *)this,JsonToken__Enum_Null,(MethodInfo *)0x0);
    return;
  case 0xb:
    pSVar7 = BsonReader_ReadString(this,(MethodInfo *)0x0);
    pSVar16 = BsonReader_ReadString(this,(MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_5
                        (::StringLiteral__,pSVar7,::StringLiteral__,pSVar16,(MethodInfo *)0x0);
    func_?(0xf,this,9,pSVar7);
    return;
  case 0xc:
    JsonReader::JsonReader_SetToken
              ((JsonReader *)this,JsonToken__Enum_StartObject,(MethodInfo *)0x0);
    (this->fields)._bsonReaderState = 1;
    return;
  case 0xd:
    pSVar7 = BsonReader_ReadLengthString(this,(MethodInfo *)0x0);
    func_?(0xf,this,9,pSVar7);
    return;
  case 0xf:
    JsonReader::JsonReader_SetToken
              ((JsonReader *)this,JsonToken__Enum_StartObject,(MethodInfo *)0x0);
    (this->fields)._bsonReaderState = 4;
    return;
  case 0x10:
    iVar9 = BsonReader_ReadInt32(this,(MethodInfo *)0x0);
    uStack_5 = (double)(longlong)iVar9;
    uVar6 = func_?(TypeInfo__System__Int64,&uStack_5);
    func_?(0xf,this,7,uVar6);
    return;
  case 0x11:
  case 0x12:
    uStack_5 = (double)BsonReader_ReadInt64(this,(MethodInfo *)0x0);
    uVar6 = func_?(TypeInfo__System__Int64,&uStack_5);
    (*(this->klass->vtable).SetToken.methodPtr)(this,7,uVar6,(this->klass->vtable).SetToken.method)
    ;
    return;
  default:
    uVar6 = func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonType);
    func_?(uVar6);
    pSVar7 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_15,(MethodInfo *)0x0);
    pMVar17 = (MethodInfo *)0x0;
    pSVar16 = (String *)func_?(&StringLiteral_Unexpected_BsonType_value__);
    pSVar7 = mscorlib.dll::System::String::String_Concat_3(pSVar16,pSVar7,pMVar17);
    uVar6 = func_?();
    unaff_EDI = (BsonReader *)func_?(uVar6);
    func_?(unaff_EDI);
    pMVar17 = (MethodInfo *)0x0;
    pSVar16 = (String *)func_?(&StringLiteral_type);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              ((ArgumentOutOfRangeException *)unaff_EDI,pSVar16,pSVar7,pMVar17);
    uVar6 = func_?();
    uStack_5 = (double)CONCAT44(uVar6,unaff_EDI);
    func_?();
  }
  uVar18 = func_?();
  *(char *)(uVar18 + 0xd6104b85) = *(char *)(uVar18 + 0xd6104b85) + (byte)extraout_ECX;
  uVar18 = uVar18 & 0xffffff86;
  bVar19 = (byte)((uint)extraout_ECX >> 8);
  bVar20 = (byte)((uint)(unaff_EBX + -2) >> 8);
  LOCK();
  bVar21 = *(byte *)(unaff_EBX + 0xe);
  *(byte *)(unaff_EBX + 0xe) = (byte)extraout_ECX;
  UNLOCK();
  pbVar22 = (byte *)((int)&(((ArgumentException__Fields *)&unaff_EDI[-0x1828fcc].fields._)->_)._.
                          _className + 3);
  bVar23 = (byte)uVar18 + *pbVar22;
  iVar14 = CONCAT31((int3)(uVar18 >> 8),bVar23 + CARRY1(bVar19,bVar20));
  pcVar24 = (char *)(iVar14 + 0x32104b87);
  *pcVar24 = *pcVar24 + bVar21 +
             (CARRY1((byte)uVar18,*pbVar22) || CARRY1(bVar23,CARRY1(bVar19,bVar20)));
  *(byte *)(unaff_EBX + 0xd) = bVar21;
  pcVar24 = (char *)((int)&unaff_EDI->klass + 1);
  *(byte *)(unaff_EBX + 0xd) = bVar21;
  puVar25 = (uint *)(iVar14 + -0x7761efb5);
  *puVar25 = *puVar25 | 0x88bd104b;
  iVar14 = CONCAT22((short)((uint)extraout_ECX >> 0x10),
                    CONCAT11(bVar19 + bVar20 + (char)(uVar18 >> 8),bVar21));
  *(byte *)(unaff_EBX + 0xc) = bVar21;
  pbVar22 = (byte *)(iVar14 + -0x76c8efb5);
  bVar23 = *pbVar22;
  *pcVar24 = *pcVar24 + extraout_DH + CARRY1(bVar21,*pbVar22);
  *(uint *)(unaff_EBX + 0xb) = CONCAT31((int3)((uint)iVar14 >> 8),bVar21 + bVar23);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* BsonType ReadType() */

BsonType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadType_1
          (BsonReader *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pBVar2 = (this->fields)._currentContext;
  if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
    piVar3 = &(pBVar2->fields).Position;
    *piVar3 = *piVar3 + 1;
    pBStack_4 = (this->fields)._reader;
    if (pBStack_4 != (BinaryReader *)0x0) {
      pMStack_1 = (pBStack_4->klass->vtable).ReadSByte.method;
      BVar5 = (*(pBStack_4->klass->vtable).ReadSByte.methodPtr)();
      return BVar5;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  BVar5 = (*pcVar8)();
  return BVar5;
}


/* BsonReader() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    pBStack_1 = (Byte__Array__Class *)&TypeInfo__System__Byte;
    func_?();
    cRam_? = '\x01';
  }
  pBStack_1 = TypeInfo__System__Byte;
  pBVar2 = (Byte__Array *)func_?();
  if (pBVar2 != (Byte__Array *)0x0) {
    if (1 < pBVar2->max_length) {
      pBVar2->vector[1] = 0x7f;
      TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange1 = pBVar2;
      pBStack_1 = (Byte__Array__Class *)TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields;
      func_?();
      puStack_3 = (undefined *)0x2;
      pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte);
      if (pBVar2 == (Byte__Array *)0x0) goto code_?;
      if ((pBVar2->max_length != 0) && (pBVar2->vector[0] = 0xc2, 1 < pBVar2->max_length)) {
        pBVar2->vector[1] = 0xdf;
        TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange2 = pBVar2;
        pBStack_1 = (Byte__Array__Class *)
                    &TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange2;
        func_?();
        puStack_3 = (undefined *)0x2;
        pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte);
        if (pBVar2 == (Byte__Array *)0x0) goto code_?;
        if ((pBVar2->max_length != 0) && (pBVar2->vector[0] = 0xe0, 1 < pBVar2->max_length)) {
          pBVar2->vector[1] = 0xef;
          TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange3 = pBVar2;
          pBStack_1 = (Byte__Array__Class *)
                      &TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange3;
          func_?();
          puStack_3 = (undefined *)0x2;
          pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte);
          if (pBVar2 == (Byte__Array *)0x0) goto code_?;
          if ((pBVar2->max_length != 0) && (pBVar2->vector[0] = 0xf0, 1 < pBVar2->max_length)) {
            pBVar2->vector[1] = 0xf4;
            TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange4 = pBVar2;
            pBStack_1 = (Byte__Array__Class *)
                        &TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange4;
            func_?();
            return;
          }
        }
      }
    }
    pBStack_1 = (Byte__Array__Class *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  uVar5 = func_?(&puStack_3);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* BsonReader(Stream) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader__ctor
               (BsonReader *this,Stream *stream,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IO__BinaryReader);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>
                   );
    func_?(&StringLiteral_stream);
    cRam_? = '\x01';
  }
  JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)stream,StringLiteral_stream,(MethodInfo *)0x0);
  this_00 = (BinaryReader *)func_?(TypeInfo__System__IO__BinaryReader);
  if (this_00 != (BinaryReader *)0x0) {
    mscorlib.dll::System::IO::BinaryReader::BinaryReader__ctor(this_00,stream,(MethodInfo *)0x0);
    (this->fields)._reader = this_00;
    func_?();
    this_01 = (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>
                             );
    if (this_01 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__List__
                );
      (this->fields)._stack = this_01;
      func_?();
      (this->fields)._readRootValueAsArray = 0;
      (this->fields)._dateTimeKindHandling = 2;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* BsonReader(Stream, Boolean, DateTimeKind) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader__ctor_1
               (BsonReader *this,Stream *stream,bool readRootValueAsArray,
               DateTimeKind__Enum dateTimeKindHandling,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IO__BinaryReader);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>
                   );
    func_?(&StringLiteral_stream);
    cRam_? = '\x01';
  }
  JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)stream,StringLiteral_stream,(MethodInfo *)0x0);
  this_00 = (BinaryReader *)func_?(TypeInfo__System__IO__BinaryReader);
  if (this_00 != (BinaryReader *)0x0) {
    mscorlib.dll::System::IO::BinaryReader::BinaryReader__ctor(this_00,stream,(MethodInfo *)0x0);
    (this->fields)._reader = this_00;
    func_?();
    this_01 = (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>
                             );
    if (this_01 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__List__
                );
      (this->fields)._stack = this_01;
      func_?();
      (this->fields)._readRootValueAsArray = readRootValueAsArray;
      (this->fields)._dateTimeKindHandling = dateTimeKindHandling;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_JsonNet35BinaryCompatibility() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::
     BsonReader_get_JsonNet35BinaryCompatibility(BsonReader *this,MethodInfo *method)

{
  return (this->fields)._jsonNet35BinaryCompatibility;
}


/* Void set_JsonNet35BinaryCompatibility(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::
     BsonReader_set_JsonNet35BinaryCompatibility(BsonReader *this,bool value,MethodInfo *method)

{
  (this->fields)._jsonNet35BinaryCompatibility = value;
  return;
}

