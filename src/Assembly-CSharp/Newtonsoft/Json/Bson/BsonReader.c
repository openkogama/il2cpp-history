
/* Int32 BytesInSequence(Byte) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_BytesInSequence
                  (BsonReader *this,uint8_t b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonReader->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
  }
  pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange1;
  if (pBVar1 == (Byte__Array *)0x0) goto code_?;
  if (pBVar1->max_length < 2) {
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (b <= pBVar1->vector[1]) {
      return 1;
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonReader->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
    }
    pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange2;
    if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    if (pBVar1->max_length == 0) goto code_?;
    if (pBVar1->vector[0] <= b) {
      if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonReader->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
      }
      pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange2;
      if (pBVar1 == (Byte__Array *)0x0) goto code_?;
      if (1 < pBVar1->max_length) {
        if (b <= pBVar1->vector[1]) {
          return 2;
        }
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonReader->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
    }
    pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange3;
    if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    if (pBVar1->max_length == 0) goto code_?;
    if (pBVar1->vector[0] <= b) {
      if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonReader->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
      }
      pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange3;
      if (pBVar1 == (Byte__Array *)0x0) goto code_?;
      if (1 < pBVar1->max_length) {
        if (b <= pBVar1->vector[1]) {
          return 3;
        }
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonReader->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
    }
    pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange4;
    if (pBVar1 == (Byte__Array *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    if (pBVar1->max_length != 0) {
      if (b < pBVar1->vector[0]) {
        return 0;
      }
      if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonReader->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader);
      }
      pBVar1 = TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange4;
      if (pBVar1 != (Byte__Array *)0x0) {
        if (1 < pBVar1->max_length) {
          if (pBVar1->vector[1] < b) {
            return 0;
          }
          return 4;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_Close
               (BsonReader *this,MethodInfo *method)

{
  bVar1 = (this->fields)._._CloseInput_k__BackingField;
  (this->fields)._._currentState = 7;
  (this->fields)._._token = 0;
  (this->fields)._._value = (Object *)0x0;
  (this->fields)._._valueType = (Type *)0x0;
  if ((bVar1 != 0) && (pBVar2 = (this->fields)._reader, pBVar2 != (BinaryReader *)0x0)) {
    (*(code *)(pBVar2->klass->vtable).Close.method)
              (pBVar2,(pBVar2->klass->vtable).Dispose.methodPtr);
  }
  return;
}


/* Void EnsureBuffers() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_EnsureBuffers
               (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._byteBuffer == (Byte__Array *)0x0) {
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x80);
    (this->fields)._byteBuffer = pBVar1;
  }
  if ((this->fields)._charBuffer == (Char__Array *)0x0) {
    if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Text__Encoding);
    }
    pEVar2 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar2 == (Encoding *)0x0) {
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = (*(code *)(pEVar2->klass->vtable).__unknown_5.method)
                      (pEVar2,0x80,(pEVar2->klass->vtable).GetPreamble.methodPtr);
    pCVar5 = (Char__Array *)func_?(TypeInfo__System__Char,uVar4);
    (this->fields)._charBuffer = pCVar5;
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
      uVar4 = func_?(0);
      func_?(uVar4);
      pcVar5 = (code *)swi(3);
      iVar1 = (*pcVar5)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (length == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    return TypeInfo__System__String->static_fields->Empty;
  }
  BsonReader_EnsureBuffers(this,(MethodInfo *)0x0);
  iVar1 = 0;
  length_00 = (StringBuilder *)0x0;
  this_00 = (StringBuilder *)0x0;
  while( true ) {
    iVar2 = length - iVar1;
    iVar3 = 0x80 - (int)length_00;
    pBVar4 = (this->fields)._reader;
    if (pBVar4 == (BinaryReader *)0x0) break;
    piVar5 = (int *)(*(code *)(pBVar4->klass->vtable).get_BaseStream.method)
                              (pBVar4,(pBVar4->klass->vtable).Close.methodPtr);
    if (piVar5 == (int *)0x0) break;
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    iVar2 = (**(code **)(*piVar5 + 0x130))
                      (piVar5,(this->fields)._byteBuffer,length_00,iVar2,
                       *(undefined4 *)(*piVar5 + 0x134));
    if (iVar2 == 0) {
      this_01 = (StackOverflowException *)
                func_?(TypeInfo__System__IO__EndOfStreamException);
      mscorlib.dll::System::StackOverflowException::StackOverflowException__ctor_1
                (this_01,StringLiteral_Unable_to_read_beyond_the_end_of,(MethodInfo *)0x0);
      func_?(this_01,0,MethodInfo__Newtonsoft__Json__Bson__BsonReader__GetString_int_);
      break;
    }
    iVar1 = iVar1 + iVar2;
    iVar2 = (int)&length_00->klass + iVar2;
    if (iVar2 == length) {
      if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Text__Encoding);
      }
      pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
      if (pEVar6 != (Encoding *)0x0) {
        iVar7 = (*(code *)(pEVar6->klass->vtable).__unknown_3.method)
                          (pEVar6,(this->fields)._byteBuffer,0,iVar2,(this->fields)._charBuffer,0,
                           (pEVar6->klass->vtable).GetChars.methodPtr);
        pSVar8 = mscorlib.dll::System::String::String_CreateString_5
                           ((String *)0x0,(this->fields)._charBuffer,0,iVar7,(MethodInfo *)0x0);
        return pSVar8;
      }
      break;
    }
    iVar7 = BsonReader_GetLastFullCharStop(this,iVar2 + -1,(MethodInfo *)0x0);
    pSVar9 = this_00;
    if (this_00 == (StringBuilder *)0x0) {
      this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder,iVar7);
      pSVar9 = this_00;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_3
                (this_00,length,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Text__Encoding);
    }
    pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar6 == (Encoding *)0x0) break;
    pIVar10 = (pEVar6->klass->vtable).GetChars.methodPtr;
    iVar7 = (*(code *)(pEVar6->klass->vtable).__unknown_3.method)
                      (pEVar6,(this->fields)._byteBuffer,0,iVar7 + 1,(this->fields)._charBuffer,0);
    if (this_00 == (StringBuilder *)0x0) break;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_7
              (this_00,(this->fields)._charBuffer,0,iVar7,(MethodInfo *)0x0);
    if ((int)pIVar10 < iVar2 + -1) {
      sourceArray = (this->fields)._byteBuffer;
      iVar1 = 0;
      length_00 = (StringBuilder *)((iVar2 - (int)pIVar10) + -1);
      pSVar9 = length_00;
      mscorlib.dll::System::Array::Array_Copy_1
                ((Array *)sourceArray,(int32_t)sourceArray,(Array *)sourceArray,0,(int32_t)length_00
                 ,(MethodInfo *)0x0);
    }
    else {
      length_00 = (StringBuilder *)0x0;
    }
    this_00 = pSVar9;
    if (length <= iVar1) {
      pSVar8 = (String *)
               (*(code *)(pSVar9->klass->vtable).ToString.method)
                         (pSVar9,(pSVar9->klass->vtable).
                                  System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr
                         );
      return pSVar8;
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar11)();
  return pSVar8;
}


/* Void MovePosition(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_MovePosition
               (BsonReader *this,int32_t count,MethodInfo *method)

{
  pBVar1 = (this->fields)._currentContext;
  if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
    piVar2 = &(pBVar1->fields).Position;
    *piVar2 = *piVar2 + count;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PopContext() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_PopContext
               (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVPlayer_ *)(this->fields)._stack;
  if (this_00 != (List_1_MVPlayer_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Count__
                       );
    mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
              (this_00,(int32_t)((int)&pOVar1[-1].monitor + 3),
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__RemoveAt_int_
              );
    pLVar2 = (this->fields)._stack;
    if (pLVar2 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Count__
                         );
      if (pOVar1 == (Object *)0x0) {
        (this->fields)._currentContext = (BsonReader_ContainerContext *)0x0;
        return;
      }
      pLVar2 = (this->fields)._stack;
      if (pLVar2 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                            MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Count__
                           );
        pBVar3 = (BsonReader_ContainerContext *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                            (int32_t)((int)&pOVar1[-1].monitor + 3),
                            MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Item_int_
                           );
        (this->fields)._currentContext = pBVar3;
        return;
      }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._stack;
  if (this_00 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)newContext,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__Add_Newtonsoft__Json__Bson__BsonReader__ContainerContext_
              );
    (this->fields)._currentContext = newContext;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean Read() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_Read
               (BsonReader *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  switch((this->fields)._bsonReaderState) {
  case 0:
    bVar4 = BsonReader_ReadNormal(this,(MethodInfo *)0x0);
    break;
  case 1:
  case 2:
  case 3:
    bVar4 = BsonReader_ReadReference(this,(MethodInfo *)0x0);
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    bVar4 = BsonReader_ReadCodeWScope(this,(MethodInfo *)0x0);
    break;
  default:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object);
    func_?();
    func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader__BsonReaderState);
    func_?(args);
    func_?(args);
    func_?(0);
    message = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Unexpected_state___0_,(IFormatProvider *)provider,args,
                         (MethodInfo *)0x0);
    this_00 = (JsonSchemaException *)func_?();
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (this_00,message,(MethodInfo *)0x0);
    uVar5 = func_?();
    piVar6 = (int *)((ulonglong)uVar5 >> 0x20);
    pcVar7 = (char *)uVar5;
    pbVar8 = &stack0x0000000c + (int)piVar6 * 2;
    bVar9 = *pbVar8 & 1;
    *pbVar8 = *pbVar8 >> 1 | *pbVar8 << 7;
    out((short)((ulonglong)uVar5 >> 0x20),pcVar7);
    bVar10 = (byte)((uint)provider >> 8);
    bVar11 = (byte)extraout_ECX + bVar10;
    piVar12 = (int *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar11 + bVar9);
    *pcVar7 = *pcVar7 + (char)uVar5 + (CARRY1((byte)extraout_ECX,bVar10) || CARRY1(bVar11,bVar9));
    *piVar12 = (int)(pcVar7 + *piVar12);
    *piVar6 = (int)(pcVar7 + *piVar6);
    pcVar13 = (code *)swi(3);
    bVar4 = (*pcVar13)();
    return bVar4;
  }
  *unaff_FS_OFFSET = uStack_3;
  return bVar4;
}


/* Byte[] ReadAsBytes() */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadAsBytes
          (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = this;
  (*(code *)(this->klass->vtable).Read.method)(this,(this->klass->vtable).ReadAsBytes.methodPtr);
  iVar2 = (*(code *)(pBVar1->klass->vtable).get_TokenType.method)
                    (pBVar1,(pBVar1->klass->vtable).get_Value.methodPtr);
  if (iVar2 == 0xb) {
    return (Byte__Array *)0x0;
  }
  iVar2 = (*(code *)(pBVar1->klass->vtable).get_TokenType.method)
                    (pBVar1,(pBVar1->klass->vtable).get_Value.methodPtr);
  if (iVar2 == 0x11) {
    message = (String *)
              (*(code *)(pBVar1->klass->vtable).get_Value.method)
                        (pBVar1,(pBVar1->klass->vtable).get_ValueType.methodPtr);
    this_00 = TypeInfo__System__Byte;
    if (message == (String *)0x0) {
      return (Byte__Array *)0x0;
    }
    pBVar3 = (Byte__Array *)func_?(message,TypeInfo__System__Byte);
    if (pBVar3 != (Byte__Array *)0x0) {
      return pBVar3;
    }
  }
  else {
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    this = (BsonReader *)func_?(7,pBVar1);
    uVar4 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
    func_?(args,0);
    func_?(args,uVar4);
    func_?(0,uVar4);
    message = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Error_reading_bytes__Expected_by,(IFormatProvider *)provider,
                         args,(MethodInfo *)0x0);
    this_00 = (Byte__Array__Class *)func_?(TypeInfo__Newtonsoft__Json__JsonReaderException)
    ;
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              ((JsonSchemaException *)this_00,message,(MethodInfo *)0x0);
    this = (BsonReader *)MethodInfo__Newtonsoft__Json__Bson__BsonReader__ReadAsBytes__;
    func_?(this_00);
  }
  func_?(message,this_00);
  pcVar5 = (code *)swi(3);
  pBVar3 = (Byte__Array *)(*pcVar5)();
  return pBVar3;
}


/* Nullable`1[DateTimeOffset] ReadAsDateTimeOffset() */

Nullable_1_DateTimeOffset_ *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadAsDateTimeOffset
          (Nullable_1_DateTimeOffset_ *__return_storage_ptr__,BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = this;
  pIVar2 = (this->klass->vtable).ReadAsBytes.methodPtr;
  pBVar3 = this;
  (*(code *)(this->klass->vtable).Read.method)();
  iVar4 = (*(code *)(pBVar1->klass->vtable).get_TokenType.method)
                    (pBVar1,(pBVar1->klass->vtable).get_Value.methodPtr,pBVar3,pIVar2);
  if (iVar4 == 0xb) {
    *(undefined4 *)&(__return_storage_ptr__->value).dt.ticks._ticks = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->value).dt.ticks._ticks + 4) = 0;
    (__return_storage_ptr__->value).dt.kind = 0;
    *(undefined4 *)&(__return_storage_ptr__->value).dt.field_0xc = 0;
    *(undefined4 *)&(__return_storage_ptr__->value).utc_offset._ticks = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->value).utc_offset._ticks + 4) = 0;
    *(undefined4 *)&__return_storage_ptr__->has_value = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
    return __return_storage_ptr__;
  }
  iVar4 = (*(code *)(pBVar1->klass->vtable).get_TokenType.method)();
  if (iVar4 == 0x10) {
    piVar5 = (int *)(*(code *)(pBVar1->klass->vtable).get_Value.method)();
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    if (piVar5 == (int *)0x0) goto code_?;
    if (*(Il2CppClass **)(*piVar5 + 0x20) == (TypeInfo__System__DateTime->_0).element_class) {
      puVar11 = (undefined4 *)func_?(piVar5);
      func_?(&uStack_7,*puVar11,puVar11[1],puVar11[2],puVar11[3],0);
      uStack_12 = uStack_7;
      uStack_13 = uStack_8;
      uStack_14 = uStack_9;
      uStack_15 = uStack_10;
      uStack_16 = uStack_6;
      uVar17 = func_?(TypeInfo__System__DateTimeOffset,&uStack_12);
      (*(code *)(pBVar1->klass->vtable).SetToken.method)
                (pBVar1,0x10,uVar17,(pBVar1->klass->vtable).Dispose.methodPtr);
      piVar5 = (int *)(*(code *)(pBVar1->klass->vtable).get_Value.method)
                                (pBVar1,(pBVar1->klass->vtable).get_ValueType.methodPtr);
      pJStack_18 = (JsonSchemaException *)0x0;
      uStack_19 = 0;
      pMStack_20 = (MethodInfo *)0x0;
      uStack_21 = 0;
      uStack_22 = 0;
      uStack_23 = 0;
      uStack_24 = 0;
      uStack_25 = 0;
      if (piVar5 == (int *)0x0) goto code_?;
      if (*(Il2CppClass **)(*piVar5 + 0x20) == (TypeInfo__System__DateTimeOffset->_0).element_class)
      {
        puVar11 = (undefined4 *)func_?(piVar5);
        func_?(&pJStack_18,*puVar11,puVar11[1],puVar11[2],puVar11[3],
                        *(undefined8 *)(puVar11 + 4),
                        MethodInfo__System__Nullable<System::DateTimeOffset>__Nullable_System__DateTimeOffset_
                       );
        *(JsonSchemaException **)&(__return_storage_ptr__->value).dt.ticks._ticks = pJStack_18;
        *(undefined4 *)((int)&(__return_storage_ptr__->value).dt.ticks._ticks + 4) = uStack_19;
        (__return_storage_ptr__->value).dt.kind = (int32_t)pMStack_20;
        *(undefined4 *)&(__return_storage_ptr__->value).dt.field_0xc = uStack_21;
        *(undefined4 *)&(__return_storage_ptr__->value).utc_offset._ticks = uStack_22;
        *(undefined4 *)((int)&(__return_storage_ptr__->value).utc_offset._ticks + 4) = uStack_23;
        *(undefined4 *)&__return_storage_ptr__->has_value = uStack_24;
        *(undefined4 *)&__return_storage_ptr__->field_0x1c = uStack_25;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  else {
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar17 = 1;
    pOVar26 = TypeInfo__System__Object;
    args = (Object__Array *)func_?();
    __return_storage_ptr__ = (Nullable_1_DateTimeOffset_ *)func_?(7,pBVar1,pOVar26,uVar17);
    uVar17 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&__return_storage_ptr__);
    func_?(args,0);
    func_?(args,uVar17);
    func_?(0,uVar17);
    message = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Error_reading_date__Expected_byt,(IFormatProvider *)provider,
                         args,(MethodInfo *)0x0);
    this_00 = (JsonSchemaException *)func_?();
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (this_00,message,(MethodInfo *)0x0);
    pMStack_20 = MethodInfo__Newtonsoft__Json__Bson__BsonReader__ReadAsDateTimeOffset__;
    uStack_19 = 0;
    pJStack_18 = this_00;
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?(0);
  pcVar27 = (code *)swi(3);
  pNVar28 = (Nullable_1_DateTimeOffset_ *)(*pcVar27)();
  return pNVar28;
}


/* Nullable`1[Decimal] ReadAsDecimal() */

Nullable_1_Decimal_ *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadAsDecimal
          (Nullable_1_Decimal_ *__return_storage_ptr__,BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = this;
  (*(code *)(this->klass->vtable).Read.method)(this,(this->klass->vtable).ReadAsBytes.methodPtr);
  iVar2 = (*(code *)(pBVar1->klass->vtable).get_TokenType.method)
                    (pBVar1,(pBVar1->klass->vtable).get_Value.methodPtr);
  if (iVar2 == 0xb) {
    (__return_storage_ptr__->value).flags = 0;
    (__return_storage_ptr__->value).hi = 0;
    (__return_storage_ptr__->value).lo = 0;
    (__return_storage_ptr__->value).mid = 0;
    *(undefined4 *)&__return_storage_ptr__->has_value = 0;
    return __return_storage_ptr__;
  }
  iVar2 = (*(code *)(pBVar1->klass->vtable).get_TokenType.method)
                    (pBVar1,(pBVar1->klass->vtable).get_Value.methodPtr);
  if (iVar2 == 7) {
code_?:
    value = (Object *)
            (*(code *)(pBVar1->klass->vtable).get_Value.method)
                      (pBVar1,(pBVar1->klass->vtable).get_ValueType.methodPtr);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    pDVar4 = mscorlib.dll::System::Convert::Convert_ToDecimal_13
                       (&DStack_5,value,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
    uStack_6 = pDVar4->flags;
    uStack_7 = pDVar4->hi;
    uStack_8 = pDVar4->lo;
    uStack_9 = pDVar4->mid;
    uVar10 = func_?(TypeInfo__System__Decimal,&uStack_6);
    (*(code *)(pBVar1->klass->vtable).SetToken.method)
              (pBVar1,8,uVar10,(pBVar1->klass->vtable).Dispose.methodPtr);
    pDStack_11 = (Decimal__Class *)
                 (*(code *)(pBVar1->klass->vtable).get_Value.method)
                           (pBVar1,(pBVar1->klass->vtable).get_ValueType.methodPtr);
    uStack_12 = 0;
    pMStack_13 = (MethodInfo *)0x0;
    uStack_14 = 0;
    if (pDStack_11 == (Decimal__Class *)0x0) goto code_?;
    message = TypeInfo__System__Decimal;
    if ((((JsonSchemaException *)pDStack_11)->klass->_0).element_class ==
        (TypeInfo__System__Decimal->_0).element_class) {
      puVar15 = (undefined4 *)func_?();
      pJStack_16 = (JsonSchemaException *)puVar15[3];
      pDStack_11 = (Decimal__Class *)
                   MethodInfo__System__Nullable<System::Decimal>__Nullable_System__Decimal_;
      func_?(&pJStack_16,*puVar15,puVar15[1],puVar15[2]);
      (__return_storage_ptr__->value).flags = (uint32_t)pJStack_16;
      (__return_storage_ptr__->value).hi = (uint32_t)pDStack_11;
      (__return_storage_ptr__->value).lo = (uint32_t)pMStack_13;
      (__return_storage_ptr__->value).mid = uStack_14;
      *(undefined4 *)&__return_storage_ptr__->has_value = uStack_12;
      return __return_storage_ptr__;
    }
  }
  else {
    iVar2 = (*(code *)(pBVar1->klass->vtable).get_TokenType.method)
                      (pBVar1,(pBVar1->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 8) goto code_?;
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    __return_storage_ptr__ = (Nullable_1_Decimal_ *)func_?(7,pBVar1);
    uVar10 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&__return_storage_ptr__);
    func_?(args,0);
    func_?(args,uVar10);
    func_?(0,uVar10);
    message = (Decimal__Class *)
              Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Error_reading_decimal__Expected_,(IFormatProvider *)pCVar3,
                         args,(MethodInfo *)0x0);
    this_00 = (JsonSchemaException *)
              func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (this_00,(String *)message,(MethodInfo *)0x0);
    pMStack_13 = MethodInfo__Newtonsoft__Json__Bson__BsonReader__ReadAsDecimal__;
    pDStack_11 = (Decimal__Class *)0x0;
    pJStack_16 = this_00;
    func_?();
    pDStack_11 = (Decimal__Class *)extraout_EDX;
  }
  pJStack_16 = (JsonSchemaException *)pDStack_11;
  pDStack_11 = message;
  func_?();
code_?:
  pDStack_11 = (Decimal__Class *)0x0;
  func_?();
  pcVar17 = (code *)swi(3);
  pNVar18 = (Nullable_1_Decimal_ *)(*pcVar17)();
  return pNVar18;
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
      iVar4 = (*(code *)(pBVar3->klass->vtable).ReadInt32.method)
                        (pBVar3,(pBVar3->klass->vtable).ReadInt64.methodPtr);
      pBVar1 = (this->fields)._currentContext;
      if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
        piVar2 = &(pBVar1->fields).Position;
        *piVar2 = *piVar2 + 1;
        pBVar3 = (this->fields)._reader;
        if (pBVar3 != (BinaryReader *)0x0) {
          cVar5 = (*(code *)(pBVar3->klass->vtable).ReadByte.method)
                            (pBVar3,(pBVar3->klass->vtable).ReadBytes.methodPtr);
          if ((cVar5 == '\x02') && ((this->fields)._jsonNet35BinaryCompatibility == 0)) {
            pBVar1 = (this->fields)._currentContext;
            if (pBVar1 == (BsonReader_ContainerContext *)0x0) goto code_?;
            piVar2 = &(pBVar1->fields).Position;
            *piVar2 = *piVar2 + 4;
            pBVar3 = (this->fields)._reader;
            if (pBVar3 == (BinaryReader *)0x0) goto code_?;
            iVar4 = (*(code *)(pBVar3->klass->vtable).ReadInt32.method)
                              (pBVar3,(pBVar3->klass->vtable).ReadInt64.methodPtr);
          }
          pBVar1 = (this->fields)._currentContext;
          if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
            piVar2 = &(pBVar1->fields).Position;
            *piVar2 = *piVar2 + iVar4;
            pBVar3 = (this->fields)._reader;
            if (pBVar3 != (BinaryReader *)0x0) {
              pBVar6 = (Byte__Array *)
                       (*(code *)(pBVar3->klass->vtable).ReadBytes.method)
                                 (pBVar3,iVar4,(pBVar3->klass->vtable).ReadChar.methodPtr);
              return pBVar6;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  pBVar6 = (Byte__Array *)(*pcVar7)();
  return pBVar6;
}


/* Byte ReadByte() */

uint8_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadByte
                  (BsonReader *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._currentContext;
  if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
    piVar2 = &(pBVar1->fields).Position;
    *piVar2 = *piVar2 + 1;
    pBVar3 = (this->fields)._reader;
    if (pBVar3 != (BinaryReader *)0x0) {
      uVar4 = (*(code *)(pBVar3->klass->vtable).ReadByte.method)
                        (pBVar3,(pBVar3->klass->vtable).ReadBytes.methodPtr);
      return uVar4;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  uVar4 = (*pcVar5)();
  return uVar4;
}


/* Byte[] ReadBytes(Int32) */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadBytes
          (BsonReader *this,int32_t count,MethodInfo *method)

{
  pBVar1 = (this->fields)._currentContext;
  if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
    piVar2 = &(pBVar1->fields).Position;
    *piVar2 = *piVar2 + count;
    pBVar3 = (this->fields)._reader;
    if (pBVar3 != (BinaryReader *)0x0) {
      pBVar4 = (Byte__Array *)
               (*(code *)(pBVar3->klass->vtable).ReadBytes.method)
                         (pBVar3,count,(pBVar3->klass->vtable).ReadChar.methodPtr);
      return pBVar4;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar5)();
  return pBVar4;
}


/* Boolean ReadCodeWScope() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadCodeWScope
               (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch((this->fields)._bsonReaderState) {
  case 4:
    (*(code *)(this->klass->vtable).SetToken.method)
              (this,4,StringLiteral__code,(this->klass->vtable).Dispose.methodPtr);
    (this->fields)._bsonReaderState = 5;
    return 1;
  case 5:
    BsonReader_ReadInt32(this,(MethodInfo *)0x0);
    pSVar1 = BsonReader_ReadLengthString(this,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).SetToken.method)
              (this,9,pSVar1,(this->klass->vtable).Dispose.methodPtr);
    (this->fields)._bsonReaderState = 6;
    return 1;
  case 6:
    break;
  case 7:
    bVar2 = BsonReader_ReadNormal(this,(MethodInfo *)0x0);
    if ((bVar2 != 0) && (iVar3 = func_?(7,this), iVar3 == 0xd)) {
      (this->fields)._bsonReaderState = 8;
    }
    return bVar2;
  case 8:
    (*(code *)(this->klass->vtable).SetToken.method)
              (this,0xd,0,(this->klass->vtable).Dispose.methodPtr);
    (this->fields)._bsonReaderState = 0;
    return 1;
  default:
    this_01 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
              (this_01,(MethodInfo *)0x0);
    func_?(this_01,0,MethodInfo__Newtonsoft__Json__Bson__BsonReader__ReadCodeWScope__);
    bVar4 = in(extraout_DX);
    cRam_? = cRam_? + (char)extraout_DX + (bVar4 < 0x55);
    pcVar5 = (code *)swi(3);
    bVar2 = (*pcVar5)();
    return bVar2;
  }
  if ((this->fields)._._currentState == 8) {
    func_?(0xf,this,4,StringLiteral__scope);
    return 1;
  }
  (*(code *)(this->klass->vtable).SetToken.method)(this,1,0,(this->klass->vtable).Dispose.methodPtr)
  ;
  (this->fields)._bsonReaderState = 7;
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonReader__ContainerContext;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  *(undefined1 *)&(this_00->fields)._._._._.m_CachedPtr = 3;
  BsonReader_PushContext(this,(BsonReader_ContainerContext *)this_00,(MethodInfo *)0x0);
  iVar6 = BsonReader_ReadInt32(this,(MethodInfo *)0x0);
  (this_00->fields).state = iVar6;
  return 1;
}


/* Double ReadDouble() */

double Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadDouble
                 (BsonReader *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._currentContext;
  if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
    piVar2 = &(pBVar1->fields).Position;
    *piVar2 = *piVar2 + 8;
    pBVar3 = (this->fields)._reader;
    if (pBVar3 != (BinaryReader *)0x0) {
      fVar4 = (float10)(*(code *)(pBVar3->klass->vtable).ReadDouble.method)
                                 (pBVar3,(pBVar3->klass->vtable).ReadInt16.methodPtr);
      return (double)fVar4;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  fVar4 = (float10)(*pcVar5)();
  return (double)fVar4;
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
      iVar4 = (*(code *)(pBVar3->klass->vtable).ReadSByte.method)
                        (pBVar3,(pBVar3->klass->vtable).ReadString.methodPtr);
      (this->fields)._currentElementType = iVar4;
      pSVar5 = BsonReader_ReadString(this,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}


/* Int32 ReadInt32() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadInt32
                  (BsonReader *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._currentContext;
  if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
    piVar2 = &(pBVar1->fields).Position;
    *piVar2 = *piVar2 + 4;
    pBVar3 = (this->fields)._reader;
    if (pBVar3 != (BinaryReader *)0x0) {
      iVar4 = (*(code *)(pBVar3->klass->vtable).ReadInt32.method)
                        (pBVar3,(pBVar3->klass->vtable).ReadInt64.methodPtr);
      return iVar4;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Int64 ReadInt64() */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadInt64
                  (BsonReader *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._currentContext;
  if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
    piVar2 = &(pBVar1->fields).Position;
    *piVar2 = *piVar2 + 8;
    pBVar3 = (this->fields)._reader;
    if (pBVar3 != (BinaryReader *)0x0) {
      iVar4 = (*(code *)(pBVar3->klass->vtable).ReadInt64.method)
                        (pBVar3,(pBVar3->klass->vtable).ReadSByte.methodPtr);
      return iVar4;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
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
      iVar4 = (*(code *)(pBVar3->klass->vtable).ReadInt32.method)
                        (pBVar3,(pBVar3->klass->vtable).ReadInt64.methodPtr);
      pBVar1 = (this->fields)._currentContext;
      if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
        piVar2 = &(pBVar1->fields).Position;
        *piVar2 = *piVar2 + iVar4;
        pSVar5 = BsonReader_GetString(this,iVar4 + -1,(MethodInfo *)0x0);
        pBVar3 = (this->fields)._reader;
        if (pBVar3 != (BinaryReader *)0x0) {
          (*(code *)(pBVar3->klass->vtable).ReadByte.method)
                    (pBVar3,(pBVar3->klass->vtable).ReadBytes.methodPtr);
          return pSVar5;
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}


/* Boolean ReadNormal() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadNormal
               (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch((this->fields)._._currentState) {
  case 0:
    bVar1 = (this->fields)._readRootValueAsArray;
    JsonReader::JsonReader_SetToken
              ((JsonReader *)this,(bVar1 != 0) + JsonToken__Enum_StartObject,(MethodInfo *)0x0);
    method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonReader__ContainerContext;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    *(char *)&(this_00->fields)._._._._.m_CachedPtr = (bVar1 != 0) + '\x03';
    BsonReader_PushContext(this,(BsonReader_ContainerContext *)this_00,(MethodInfo *)0x0);
    iVar2 = BsonReader_ReadInt32(this,(MethodInfo *)0x0);
    (this_00->fields).state = iVar2;
    return 1;
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
    iVar4 = (pBVar3->fields).Length + -1;
    iVar5 = (pBVar3->fields).Position;
    if (iVar5 < iVar4) {
      if ((pBVar3->fields).Type == 4) {
        BsonReader_ReadElement(this,(MethodInfo *)0x0);
        BsonReader_ReadType(this,(uint)(byte)(this->fields)._currentElementType,(MethodInfo *)0x0);
        return 1;
      }
      pSVar6 = BsonReader_ReadElement(this,(MethodInfo *)0x0);
      func_?(0xf,this,4,pSVar6);
      return 1;
    }
    if (iVar5 == iVar4) {
      uVar7 = BsonReader_ReadByte(this,(MethodInfo *)0x0);
      if (uVar7 == 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        unaff_EBX = (List_1_MVPlayer_ *)(this->fields)._stack;
        if (unaff_EBX != (List_1_MVPlayer_ *)0x0) {
          pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)unaff_EBX
                               ,
                               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Count__
                              );
          mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                    (unaff_EBX,(int32_t)((int)&pOVar8[-1].monitor + 3),
                     MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__RemoveAt_int_
                    );
          pLVar9 = (this->fields)._stack;
          if (pLVar9 != (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0) {
            pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9,
                                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Count__
                                );
            if (pOVar8 == (Object *)0x0) {
              pBVar10 = (BsonReader_ContainerContext *)0x0;
            }
            else {
              pLVar9 = (this->fields)._stack;
              unaff_EBX = (List_1_MVPlayer_ *)0x0;
              if (pLVar9 == (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)0x0)
              goto code_?;
              pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   pLVar9,
                                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Count__
                                  );
              pBVar10 = (BsonReader_ContainerContext *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar9,
                                   (int32_t)((int)&pOVar8[-1].monitor + 3),
                                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__get_Item_int_
                                  );
            }
            (this->fields)._currentContext = pBVar10;
            if (pBVar10 != (BsonReader_ContainerContext *)0x0) {
              BsonReader_MovePosition(this,(pBVar3->fields).Length,(MethodInfo *)0x0);
            }
            JsonReader::JsonReader_SetToken
                      ((JsonReader *)this,((pBVar3->fields).Type != 3) + JsonToken__Enum_EndObject,
                       (MethodInfo *)0x0);
            return 1;
          }
        }
        goto code_?;
      }
      this_01 = (ArgumentOutOfRangeException *)
                func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
      pSVar6 = StringLiteral_Unexpected_end_of_object_byte_va;
    }
    else {
      this_01 = (ArgumentOutOfRangeException *)
                func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
      pSVar6 = StringLiteral_Read_past_end_of_current_contain;
    }
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              ((JsonSchemaException *)this_01,pSVar6,(MethodInfo *)0x0);
    break;
  default:
    this_01 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
              (this_01,(MethodInfo *)0x0);
  }
  func_?(this_01);
code_?:
  iVar5 = func_?(0);
  bVar11 = CARRY1(in_stack_12,(byte)((uint)unaff_EBX >> 8));
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),(byte)iVar5 | *(byte *)(iVar5 + 0x55)) + 1;
  ppMVar13 = &unaff_EBX[3].monitor;
  bVar14 = *(byte *)ppMVar13;
  cVar15 = *(char *)ppMVar13;
  *(byte *)ppMVar13 = cVar15 + extraout_DH + bVar11;
  bVar16 = (byte)iVar5;
  bVar17 = (byte)((uint)iVar5 >> 8);
  *(byte *)&unaff_EBX[3].monitor =
       *(char *)&unaff_EBX[3].monitor + extraout_DH +
       (CARRY1(bVar17,bVar16) ||
       CARRY1(bVar17 + bVar16,CARRY1(bVar14,extraout_DH) || CARRY1(cVar15 + extraout_DH,bVar11)));
  pcVar18 = (code *)swi(3);
  bVar1 = (*pcVar18)(&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,
                    &stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc);
  return bVar1;
}


/* Boolean ReadReference() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadReference
               (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = this;
  pBVar2 = (BsonReader *)(this->fields)._._currentState;
  if (pBVar2 == (BsonReader *)0x2) {
    pBVar2 = (BsonReader *)(this->fields)._bsonReaderState;
    if (pBVar2 == (BsonReader *)0x2) {
      pSVar3 = BsonReader_ReadLengthString(this,(MethodInfo *)0x0);
      (*(code *)(pBVar1->klass->vtable).SetToken.method)
                (pBVar1,9,pSVar3,(pBVar1->klass->vtable).Dispose.methodPtr);
      return 1;
    }
    if (pBVar2 == (BsonReader *)0x3) {
      pBVar4 = BsonReader_ReadBytes(this,0xc,(MethodInfo *)0x0);
      (*(code *)(pBVar1->klass->vtable).SetToken.method)
                (pBVar1,0x11,pBVar4,(pBVar1->klass->vtable).Dispose.methodPtr);
      return 1;
    }
    this = pBVar2;
    arg1 = (Object *)
           func_?(TypeInfo__Newtonsoft__Json__Bson__BsonReader__BsonReaderState,&this);
    if (((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) == 0)
    goto code_?;
    uVar5 = (TypeInfo__System__String->_1).cctor_started;
  }
  else {
    if (pBVar2 == (BsonReader *)0x3) {
      (*(code *)(this->klass->vtable).SetToken.method)
                (this,4,StringLiteral__ref,(this->klass->vtable).Dispose.methodPtr);
      (pBVar1->fields)._bsonReaderState = 2;
      return 1;
    }
    pBVar6 = (BsonReader_BsonReaderState__Enum__Class *)
             TypeInfo__Newtonsoft__Json__JsonReader__State;
    if (pBVar2 == (BsonReader *)0x8) {
      pBVar2 = (BsonReader *)(this->fields)._bsonReaderState;
      if (pBVar2 == (BsonReader *)0x2) {
        (*(code *)(this->klass->vtable).SetToken.method)
                  (this,4,StringLiteral__id,(this->klass->vtable).Dispose.methodPtr);
        (pBVar1->fields)._bsonReaderState = 3;
        return 1;
      }
      pBVar6 = TypeInfo__Newtonsoft__Json__Bson__BsonReader__BsonReaderState;
      if (pBVar2 == (BsonReader *)0x3) {
        JsonReader::JsonReader_SetToken
                  ((JsonReader *)this,JsonToken__Enum_EndObject,(MethodInfo *)0x0);
        (pBVar1->fields)._bsonReaderState = 0;
        return 1;
      }
    }
    this = pBVar2;
    arg1 = (Object *)func_?(pBVar6,&this);
    if (((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) == 0)
    goto code_?;
    uVar5 = (TypeInfo__System__String->_1).cctor_started;
  }
  if (uVar5 == 0) {
    func_?(TypeInfo__System__String);
  }
code_?:
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Unexpected_state_when_reading_BS,arg1,
                      (MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
  method = MethodInfo__Newtonsoft__Json__Bson__BsonReader__ReadReference__;
  this = (BsonReader *)0x0;
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* String ReadString() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadString
                   (BsonReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  BsonReader_EnsureBuffers(this,(MethodInfo *)0x0);
  this_00 = (StringBuilder *)0x0;
  uVar1 = 0;
code_?:
  length = 0;
  uVar2 = length;
  do {
    while ((int)length < 0x80) {
      pBVar3 = (this->fields)._reader;
      if (pBVar3 == (BinaryReader *)0x0) goto code_?;
      uVar4 = (*(code *)(pBVar3->klass->vtable).ReadByte.method)
                        (pBVar3,(pBVar3->klass->vtable).ReadBytes.methodPtr);
      if (uVar4 == 0) break;
      pBVar5 = (this->fields)._byteBuffer;
      if (pBVar5 == (Byte__Array *)0x0) goto code_?;
      if (pBVar5->max_length <= length) goto code_?;
      pBVar5->vector[length] = uVar4;
      length = length + 1;
    }
    iVar6 = length - uVar2;
    uVar1 = uVar1 + iVar6;
    if (((int)length < 0x80) && (this_00 == (StringBuilder *)0x0)) {
      if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Text__Encoding);
      }
      pEVar7 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
      if (pEVar7 != (Encoding *)0x0) {
        iVar8 = (*(code *)(pEVar7->klass->vtable).__unknown_3.method)
                          (pEVar7,(this->fields)._byteBuffer,0,iVar6,(this->fields)._charBuffer,0,
                           (pEVar7->klass->vtable).GetChars.methodPtr);
        pBVar9 = (this->fields)._currentContext;
        if (pBVar9 != (BsonReader_ContainerContext *)0x0) {
          piVar10 = &(pBVar9->fields).Position;
          *piVar10 = *piVar10 + uVar1 + 1;
          pSVar11 = mscorlib.dll::System::String::String_CreateString_5
                              ((String *)0x0,(this->fields)._charBuffer,0,iVar8,(MethodInfo *)0x0);
          return pSVar11;
        }
      }
      goto code_?;
    }
    iVar8 = BsonReader_GetLastFullCharStop(this,length - 1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Text__Encoding);
    }
    pEVar7 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar7 == (Encoding *)0x0) goto code_?;
    sourceIndex = iVar8 + 1;
    charCount = (*(code *)(pEVar7->klass->vtable).__unknown_3.method)
                          (pEVar7,(this->fields)._byteBuffer,0,sourceIndex,
                           (this->fields)._charBuffer,0,(pEVar7->klass->vtable).GetChars.methodPtr);
    if (this_00 == (StringBuilder *)0x0) {
      this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_3
                (this_00,0x100,(MethodInfo *)0x0);
      if (this_00 == (StringBuilder *)0x0) goto code_?;
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_7
              (this_00,(this->fields)._charBuffer,0,charCount,(MethodInfo *)0x0);
    if (iVar6 + -1 <= iVar8) break;
    pBVar5 = (this->fields)._byteBuffer;
    this_00 = (StringBuilder *)0x0;
    length = (iVar6 - iVar8) - 1;
    uVar1 = length;
    mscorlib.dll::System::Array::Array_Copy_1
              ((Array *)pBVar5,sourceIndex,(Array *)pBVar5,0,length,(MethodInfo *)0x0);
    uVar2 = length;
  } while( true );
  if ((int)length < 0x80) {
    pBVar9 = (this->fields)._currentContext;
    if (pBVar9 != (BsonReader_ContainerContext *)0x0) {
      piVar10 = &(pBVar9->fields).Position;
      *piVar10 = *piVar10 + uVar1 + 1;
      pSVar11 = (String *)
                (*(code *)(this_00->klass->vtable).ToString.method)
                          (this_00,(this_00->klass->vtable).
                                   System_Runtime_Serialization_ISerializable_GetObjectData.
                                   methodPtr);
      return pSVar11;
    }
code_?:
    func_?(0);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
    pcVar13 = (code *)swi(3);
    pSVar11 = (String *)(*pcVar13)();
    return pSVar11;
  }
  goto code_?;
}


/* Void ReadType(BsonType) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadType
               (BsonReader *this,BsonType__Enum type,MethodInfo *method)

{
  pMVar1 = unaff_EBX;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  switch((undefined1)type) {
  case 1:
    pBVar2 = (this->fields)._currentContext;
    bVar3 = 0;
    if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
      piVar4 = &(pBVar2->fields).Position;
      *piVar4 = *piVar4 + 8;
      pBVar5 = (this->fields)._reader;
      bVar3 = 0;
      if (pBVar5 != (BinaryReader *)0x0) {
        fVar6 = (float10)(*(code *)(pBVar5->klass->vtable).ReadDouble.method)(pBVar5);
        uStack_7 = (double)fVar6;
        uVar8 = func_?(TypeInfo__System__Double,&uStack_7);
        func_?(0xf,this,8,uVar8);
        return;
      }
    }
    break;
  case 2:
  case 0xe:
    pSVar9 = BsonReader_ReadLengthString(this,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).SetToken.method)(this,9,pSVar9);
    return;
  case 3:
    JsonReader::JsonReader_SetToken
              ((JsonReader *)this,JsonToken__Enum_StartObject,(MethodInfo *)0x0);
    pBVar10 = TypeInfo__Newtonsoft__Json__Bson__BsonReader__ContainerContext;
    pSVar11 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar11,0.0,(MethodInfo *)pBVar10);
    *(undefined1 *)&(pSVar11->fields)._._._._.m_CachedPtr = 3;
    BsonReader_PushContext(this,(BsonReader_ContainerContext *)pSVar11,(MethodInfo *)0x0);
    iVar12 = BsonReader_ReadInt32(this,(MethodInfo *)0x0);
    (pSVar11->fields).state = iVar12;
    return;
  case 4:
    JsonReader::JsonReader_SetToken((JsonReader *)this,JsonToken__Enum_StartArray,(MethodInfo *)0x0)
    ;
    pBVar10 = TypeInfo__Newtonsoft__Json__Bson__BsonReader__ContainerContext;
    pSVar11 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar11,0.0,(MethodInfo *)pBVar10);
    *(undefined1 *)&(pSVar11->fields)._._._._.m_CachedPtr = 4;
    BsonReader_PushContext(this,(BsonReader_ContainerContext *)pSVar11,(MethodInfo *)0x0);
    iVar12 = BsonReader_ReadInt32(this,(MethodInfo *)0x0);
    (pSVar11->fields).state = iVar12;
    return;
  case 5:
    pBVar2 = (this->fields)._currentContext;
    bVar3 = 0;
    if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
      piVar4 = &(pBVar2->fields).Position;
      *piVar4 = *piVar4 + 4;
      pBVar5 = (this->fields)._reader;
      bVar3 = 0;
      if (pBVar5 != (BinaryReader *)0x0) {
        unaff_EDI = (ArgumentOutOfRangeException *)
                    (*(code *)(pBVar5->klass->vtable).ReadInt32.method)(pBVar5);
        pBVar2 = (this->fields)._currentContext;
        bVar3 = 0;
        if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
          piVar4 = &(pBVar2->fields).Position;
          *piVar4 = *piVar4 + 1;
          pBVar5 = (this->fields)._reader;
          bVar3 = 0;
          if (pBVar5 != (BinaryReader *)0x0) {
            cVar13 = (*(code *)(pBVar5->klass->vtable).ReadByte.method)(pBVar5);
            if ((cVar13 == '\x02') && ((this->fields)._jsonNet35BinaryCompatibility == 0)) {
              pBVar2 = (this->fields)._currentContext;
              bVar3 = 0;
              if (pBVar2 == (BsonReader_ContainerContext *)0x0) break;
              piVar4 = &(pBVar2->fields).Position;
              *piVar4 = *piVar4 + 4;
              pBVar5 = (this->fields)._reader;
              bVar3 = 0;
              if (pBVar5 == (BinaryReader *)0x0) break;
              unaff_EDI = (ArgumentOutOfRangeException *)
                          (*(code *)(pBVar5->klass->vtable).ReadInt32.method)(pBVar5);
            }
            pBVar2 = (this->fields)._currentContext;
            bVar3 = 0;
            if (pBVar2 != (BsonReader_ContainerContext *)0x0) {
              piVar4 = &(pBVar2->fields).Position;
              *piVar4 = (int)&unaff_EDI->klass + *piVar4;
              pBVar5 = (this->fields)._reader;
              bVar3 = 0;
              if (pBVar5 != (BinaryReader *)0x0) {
                uVar8 = (*(code *)(pBVar5->klass->vtable).ReadBytes.method)(pBVar5,unaff_EDI);
                func_?(0xf,this,0x11,uVar8);
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
    BsonReader_ReadBytes(this,0xc,(MethodInfo *)0x0);
    func_?(0xf,this,0x11);
    return;
  case 8:
    uVar14 = BsonReader_ReadByte(this,(MethodInfo *)0x0);
    uStack_7._4_1_ = uVar14;
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    mscorlib.dll::System::Convert::Convert_ToBoolean_6(SUB81(uStack_7,4),(MethodInfo *)0x0);
    func_?();
    func_?(0xf,this,10);
    return;
  case 9:
    uVar15 = BsonReader_ReadInt64(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar16 = JsonConvert::JsonConvert_ConvertJavaScriptTicksToDateTime
                        ((DateTime *)&stack0xffffffec,uVar15 >> 0x20,pMVar1);
    iVar17 = (this->fields)._dateTimeKindHandling;
    if (iVar17 == 0) {
      pMVar1 = *(MethodInfo **)&(pDVar16->ticks)._ticks;
      uVar8 = *(undefined4 *)((int)&(pDVar16->ticks)._ticks + 4);
      uStack_7._0_4_ = pDVar16->kind;
      uStack_7._4_4_ = *(undefined4 *)&pDVar16->field_0xc;
      if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
        func_?();
      }
      value.ticks._ticks._4_4_ = (int32_t)uStack_7;
      value.ticks._ticks._0_4_ = uVar8;
      value.kind = uStack_7._4_4_;
      value._12_4_ = 0;
      pDVar16 = mscorlib.dll::System::DateTime::DateTime_SpecifyKind
                          ((DateTime *)&stack0xffffffec,value,DateTimeKind__Enum_Unspecified,pMVar1
                          );
    }
    else if (iVar17 == 2) {
      pDVar16 = (DateTime *)func_?();
    }
    uStack_7._0_4_ = pDVar16->kind;
    uStack_7._4_4_ = *(undefined4 *)&pDVar16->field_0xc;
    func_?();
    func_?();
    return;
  case 10:
    JsonReader::JsonReader_SetToken((JsonReader *)this,JsonToken__Enum_Null,(MethodInfo *)0x0);
    return;
  case 0xb:
    pSVar9 = BsonReader_ReadString(this,(MethodInfo *)0x0);
    str3 = BsonReader_ReadString(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    mscorlib.dll::System::String::String_Concat_4
              (::StringLiteral__,pSVar9,::StringLiteral__,str3,(MethodInfo *)0x0);
    func_?();
    return;
  case 0xc:
    JsonReader::JsonReader_SetToken
              ((JsonReader *)this,JsonToken__Enum_StartObject,(MethodInfo *)0x0);
    (this->fields)._bsonReaderState = 1;
    return;
  case 0xd:
    BsonReader_ReadLengthString(this,(MethodInfo *)0x0);
    func_?(0xf,this,9);
    return;
  case 0xf:
    JsonReader::JsonReader_SetToken
              ((JsonReader *)this,JsonToken__Enum_StartObject,(MethodInfo *)0x0);
    (this->fields)._bsonReaderState = 4;
    return;
  case 0x10:
    iVar12 = BsonReader_ReadInt32(this,(MethodInfo *)0x0);
    uStack_7 = (double)(longlong)iVar12;
    uVar8 = func_?(TypeInfo__System__Int64);
    func_?(0xf,this,7,uVar8);
    return;
  case 0x11:
  case 0x12:
    uStack_7 = (double)BsonReader_ReadInt64(this,(MethodInfo *)0x0);
    uVar8 = func_?(TypeInfo__System__Int64);
    (*(code *)(this->klass->vtable).SetToken.method)
              (this,7,uVar8,(this->klass->vtable).Dispose.methodPtr);
    return;
  default:
    arg1 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonType);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    this = (BsonReader *)
           mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Unexpected_BsonType_value__,arg1,(MethodInfo *)0x0);
    unaff_EDI = (ArgumentOutOfRangeException *)func_?();
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (unaff_EDI,StringLiteral_type,(String *)this,(MethodInfo *)0x0);
    bVar3 = (undefined1 *)0xffffffdf < &stack0xffffffcc;
    func_?();
  }
  func_?();
  uVar18 = *(undefined6 *)((int)&this[1].monitor + 1);
  bVar19 = (byte)extraout_EDX;
  bVar20 = CARRY1(in_stack_21,bVar19) || CARRY1(in_stack_21 + bVar19,bVar3);
  pbVar22 = (byte *)((int)&(this->fields)._currentContext + 3);
  bVar23 = (byte)unaff_EBX;
  bVar24 = CARRY1(*pbVar22,bVar23) || CARRY1(*pbVar22 + bVar23,bVar20);
  *pbVar22 = *pbVar22 + bVar23 + bVar20;
  pbVar22 = (byte *)(extraout_EDX + 0x7c105547);
  bVar25 = (byte)((uint6)uVar18 >> 8);
  bVar3 = *pbVar22 + bVar25;
  bVar20 = CARRY1(*pbVar22,bVar25) || CARRY1(bVar3,bVar24);
  *pbVar22 = bVar3 + bVar24;
  pbVar22 = (byte *)(extraout_EDX + -0x4befaab8);
  bVar24 = CARRY1(*pbVar22,bVar19) || CARRY1(*pbVar22 + bVar19,bVar20);
  *pbVar22 = *pbVar22 + bVar19 + bVar20;
  bVar3 = *(char *)&unaff_EBX->methodPointer + bVar19;
  bVar20 = CARRY1(*(byte *)&unaff_EBX->methodPointer,bVar19) || CARRY1(bVar3,bVar24);
  *(byte *)&unaff_EBX->methodPointer = bVar3 + bVar24;
  bVar3 = (byte)((uint)((int)uVar18 + -2) >> 8);
  bVar24 = CARRY1(bVar3,bVar3) || CARRY1(bVar3 * '\x02',bVar20);
  bVar26 = bVar3 * '\x02' + bVar20;
  bVar3 = (byte)((uint)unaff_EBX >> 8);
  bVar27 = bVar19 + bVar3;
  bVar20 = CARRY1(bVar19,bVar3) || CARRY1(bVar27,bVar24);
  bVar27 = bVar27 + bVar24;
  pbVar22 = (byte *)((int)&unaff_EDI[1].fields._._._.inner_exception + 3);
  bVar25 = *pbVar22;
  bVar3 = *pbVar22;
  *pbVar22 = bVar3 + bVar27 + bVar20;
  bVar19 = (byte)((uint)extraout_EDX >> 8);
  bVar20 = CARRY1(bVar26,bVar23) ||
           CARRY1(bVar26 + bVar23,
                  CARRY1(in_stack_28,bVar27) ||
                  CARRY1(in_stack_28 + bVar27,
                         CARRY1(in_stack_29,bVar19) ||
                         CARRY1(in_stack_29 + bVar19,
                                CARRY1(bVar25,bVar27) || CARRY1(bVar3 + bVar27,bVar20))));
  pbVar22 = (byte *)(CONCAT31((int3)((uint)extraout_EDX >> 8),bVar27) + -2);
  bVar25 = *pbVar22;
  bVar27 = (byte)pbVar22;
  bVar3 = *pbVar22;
  *pbVar22 = bVar3 + bVar27 + bVar20;
  *pbVar22 = *pbVar22 + bVar27 + (CARRY1(bVar25,bVar27) || CARRY1(bVar3 + bVar27,bVar20));
  pcVar30 = (code *)swi(3);
  (*pcVar30)(&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,
            &stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,
            &stack0xfffffffc,&stack0xfffffffc);
  return;
}


/* BsonType ReadType() */

BsonType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader_ReadType_1
          (BsonReader *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._currentContext;
  if (pBVar1 != (BsonReader_ContainerContext *)0x0) {
    piVar2 = &(pBVar1->fields).Position;
    *piVar2 = *piVar2 + 1;
    pBVar3 = (this->fields)._reader;
    if (pBVar3 != (BinaryReader *)0x0) {
      BVar4 = (*(code *)(pBVar3->klass->vtable).ReadSByte.method)
                        (pBVar3,(pBVar3->klass->vtable).ReadString.methodPtr);
      return BVar4;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  BVar4 = (*pcVar5)();
  return BVar4;
}


/* BsonReader() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,2);
  if (pBVar1 == (Byte__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pBVar1->max_length < 2) goto code_?;
    pBVar1->vector[1] = 0x7f;
    TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange1 = pBVar1;
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,2);
    if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    if (pBVar1->max_length == 0) goto code_?;
    pBVar1->vector[0] = 0xc2;
    if (pBVar1->max_length < 2) goto code_?;
    pBVar1->vector[1] = 0xdf;
    TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange2 = pBVar1;
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,2);
    if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    if (pBVar1->max_length == 0) goto code_?;
    pBVar1->vector[0] = 0xe0;
    if (pBVar1->max_length < 2) goto code_?;
    pBVar1->vector[1] = 0xef;
    TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange3 = pBVar1;
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,2);
    if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    if (pBVar1->max_length != 0) {
      pBVar1->vector[0] = 0xf0;
      if (1 < pBVar1->max_length) {
        pBVar1->vector[1] = 0xf4;
        TypeInfo__Newtonsoft__Json__Bson__BsonReader->static_fields->_seqRange4 = pBVar1;
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* BsonReader(Stream) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader__ctor
               (BsonReader *this,Stream *stream,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)stream,StringLiteral_stream,(MethodInfo *)0x0);
  this_00 = (BinaryReader *)func_?(TypeInfo__System__IO__BinaryReader);
  mscorlib.dll::System::IO::BinaryReader::BinaryReader__ctor(this_00,stream,(MethodInfo *)0x0);
  (this->fields)._reader = this_00;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__List__
            );
  (this->fields)._stack = (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)this_01;
  (this->fields)._readRootValueAsArray = 0;
  (this->fields)._dateTimeKindHandling = 2;
  return;
}


/* BsonReader(Stream, Boolean, DateTimeKind) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonReader::BsonReader__ctor_1
               (BsonReader *this,Stream *stream,bool readRootValueAsArray,
               DateTimeKind__Enum dateTimeKindHandling,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)stream,StringLiteral_stream,(MethodInfo *)0x0);
  this_00 = (BinaryReader *)func_?(TypeInfo__System__IO__BinaryReader);
  mscorlib.dll::System::IO::BinaryReader::BinaryReader__ctor(this_00,stream,(MethodInfo *)0x0);
  (this->fields)._reader = this_00;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonReader::ContainerContext>__List__
            );
  (this->fields)._stack = (List_1_Newtonsoft_Json_Bson_BsonReader_ContainerContext_ *)this_01;
  (this->fields)._readRootValueAsArray = readRootValueAsArray;
  (this->fields)._dateTimeKindHandling = dateTimeKindHandling;
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

