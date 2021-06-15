
/* Nullable`1[Newtonsoft.Json.JsonToken] GetEndToken(JContainer) */

Nullable_1_Newtonsoft_Json_JsonToken_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_GetEndToken
          (JTokenReader *this,JContainer *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = c;
  if (c != (JContainer *)0x0) {
    uVar2 = (*(code *)(c->klass->vtable).__unknown_2.method)
                      (c,(c->klass->vtable).get_HasValues.methodPtr);
    switch(uVar2) {
    case 1:
      uVar2 = 0xd;
      break;
    case 2:
      uVar2 = 0xe;
      break;
    case 3:
      uVar2 = 0xf;
      break;
    case 4:
      NVar3.value = 0;
      NVar3.has_value = 0;
      NVar3._5_3_ = 0;
      return NVar3;
    default:
      goto code_?;
    }
    NStack_4.value = 0;
    NStack_4.has_value = 0;
    NStack_4._5_3_ = 0;
    func_?(&NStack_4,uVar2,
                    MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                   );
    return NStack_4;
  }
  func_?(0);
code_?:
  func_?(pJVar1,0);
  c = (JContainer *)func_?(0xd,pJVar1);
  actualValue = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&c);
  NStack_4.value =
       (int32_t)Json::Utilities::MiscellaneousUtils::
                MiscellaneousUtils_CreateArgumentOutOfRangeException
                          (StringLiteral_Type,actualValue,StringLiteral_Unexpected_JContainer_type_,
                           (MethodInfo *)0x0);
  NStack_4._4_4_ = 0;
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::
     JTokenReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo(JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                     (MethodInfo *)0x0);
  if (iVar1 != 0) {
    pJVar2 = (this->fields)._current;
    if (pJVar2 == (this->fields)._parent) {
      pJVar2 = (JToken *)0x0;
    }
    if (pJVar2 != (JToken *)0x0) {
      bVar3 = func_?(0,TypeInfo__Newtonsoft__Json__IJsonLineInfo,pJVar2);
      return bVar3;
    }
  }
  return 0;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::
        JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber
                  (JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                     (MethodInfo *)0x0);
  if (iVar1 != 0) {
    pJVar2 = (this->fields)._current;
    if (pJVar2 == (this->fields)._parent) {
      pJVar2 = (JToken *)0x0;
    }
    if (pJVar2 != (JToken *)0x0) {
      iVar1 = func_?(1,TypeInfo__Newtonsoft__Json__IJsonLineInfo,pJVar2);
      return iVar1;
    }
  }
  return 0;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::
        JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                  (JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                     (MethodInfo *)0x0);
  if (iVar1 != 0) {
    pJVar2 = (this->fields)._current;
    if (pJVar2 == (this->fields)._parent) {
      pJVar2 = (JToken *)0x0;
    }
    if (pJVar2 != (JToken *)0x0) {
      iVar1 = func_?(2,TypeInfo__Newtonsoft__Json__IJsonLineInfo,pJVar2);
      return iVar1;
    }
  }
  return 0;
}


/* Boolean Read() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_Read
               (JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                     (MethodInfo *)0x0);
  t = (JContainer *)(this->fields)._current;
  if (iVar1 == 0) {
    JTokenReader_SetToken(this,(JToken *)t,(MethodInfo *)0x0);
    return 1;
  }
  if (t != (JContainer *)0x0) {
    bVar2 = (TypeInfo__Newtonsoft__Json__Linq__JContainer->_1).naturalAligment;
    if (((t->klass->_1).naturalAligment < bVar2) ||
       ((JContainer__Class *)(t->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JContainer)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    c = (JContainer *)0x0;
    if (bVar3) {
      c = t;
    }
    if ((c != (JContainer *)0x0) && ((JContainer *)(this->fields)._parent != c)) {
      token = (JToken *)
              (*(code *)(c->klass->vtable).get_First.method)
                        (c,(c->klass->vtable).get_Last.methodPtr);
      if (token != (JToken *)0x0) {
        JTokenReader_SetToken(this,token,(MethodInfo *)0x0);
        (this->fields)._current = token;
        (this->fields)._parent = (JToken *)c;
        return 1;
      }
      bVar4 = JTokenReader_SetEnd(this,c,(MethodInfo *)0x0);
      return bVar4;
    }
  }
  bVar4 = JTokenReader_ReadOver(this,(JToken *)t,(MethodInfo *)0x0);
  return bVar4;
}


/* Byte[] ReadAsBytes() */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_ReadAsBytes
          (JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  message = this;
  (*(code *)(this->klass->vtable).Read.method)(this,(this->klass->vtable).ReadAsBytes.methodPtr);
  iVar1 = (*(code *)(message->klass->vtable).get_TokenType.method)
                    (message,(message->klass->vtable).get_Value.methodPtr);
  if (iVar1 == 9) {
    pCVar2 = (Collection_1_VoxelHit_ *)
             (*(code *)(message->klass->vtable).get_Value.method)
                       (message,(message->klass->vtable).get_ValueType.methodPtr);
    if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
      this_00 = (Collection_1_VoxelHit_ *)0x0;
      if (pCVar2->klass == (Collection_1_VoxelHit___Class *)TypeInfo__System__String) {
        this_00 = pCVar2;
      }
      unaff_EDI = (Byte__Array__Class *)0x0;
      pSVar3 = TypeInfo__System__String;
      if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
        pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
        if (pIVar4 == (IList_1_VoxelHit_ *)0x0) {
          pBVar5 = (Byte__Array *)func_?(TypeInfo__System__Byte,0);
        }
        else {
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Convert);
          }
          pBVar5 = mscorlib.dll::System::Convert::Convert_FromBase64String
                             ((String *)this_00,(MethodInfo *)0x0);
        }
        (*(code *)(message->klass->vtable).SetToken.method)
                  (message,0x11,pBVar5,(message->klass->vtable).Dispose.methodPtr);
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
code_?:
    iVar1 = (*(code *)(message->klass->vtable).get_TokenType.method)
                      (message,(message->klass->vtable).get_Value.methodPtr);
    if (iVar1 == 0xb) {
      return (Byte__Array *)0x0;
    }
    iVar1 = (*(code *)(message->klass->vtable).get_TokenType.method)
                      (message,(message->klass->vtable).get_Value.methodPtr);
    if (iVar1 == 0x11) {
      message = (JTokenReader *)
                (*(code *)(message->klass->vtable).get_Value.method)
                          (message,(message->klass->vtable).get_ValueType.methodPtr);
      unaff_EDI = TypeInfo__System__Byte;
      if (message == (JTokenReader *)0x0) {
        return (Byte__Array *)0x0;
      }
      pBVar5 = (Byte__Array *)func_?(message,TypeInfo__System__Byte);
      if (pBVar5 != (Byte__Array *)0x0) {
        return pBVar5;
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    this = (JTokenReader *)func_?(7,message);
    uVar6 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
    func_?(args,0);
    func_?(args,uVar6);
    func_?(0,uVar6);
    message = (JTokenReader *)
              Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Error_reading_bytes__Expected_by,(IFormatProvider *)provider,
                         args,(MethodInfo *)0x0);
    unaff_EDI = (Byte__Array__Class *)
                func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              ((JsonSchemaException *)unaff_EDI,(String *)message,(MethodInfo *)0x0);
    this = (JTokenReader *)MethodInfo__Newtonsoft__Json__Linq__JTokenReader__ReadAsBytes__;
    pCVar2 = (Collection_1_VoxelHit_ *)func_?(unaff_EDI);
    pSVar3 = extraout_ECX;
code_?:
    func_?(pCVar2,pSVar3);
  }
  func_?(0);
code_?:
  func_?(message,unaff_EDI);
  pcVar7 = (code *)swi(3);
  pBVar5 = (Byte__Array *)(*pcVar7)();
  return pBVar5;
}


/* Nullable`1[DateTimeOffset] ReadAsDateTimeOffset() */

Nullable_1_DateTimeOffset_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_ReadAsDateTimeOffset
          (Nullable_1_DateTimeOffset_ *__return_storage_ptr__,JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  pIVar2 = (this->klass->vtable).ReadAsBytes.methodPtr;
  pJVar3 = this;
  (*(code *)(this->klass->vtable).Read.method)();
  iVar4 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                    (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr,pJVar3,pIVar2);
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
  iVar4 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)();
  if (iVar4 == 0x10) {
    piVar5 = (int *)(*(code *)(pJVar1->klass->vtable).get_Value.method)();
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
      (*(code *)(pJVar1->klass->vtable).SetToken.method)
                (pJVar1,0x10,uVar17,(pJVar1->klass->vtable).Dispose.methodPtr);
      piVar5 = (int *)(*(code *)(pJVar1->klass->vtable).get_Value.method)
                                (pJVar1,(pJVar1->klass->vtable).get_ValueType.methodPtr);
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
    __return_storage_ptr__ = (Nullable_1_DateTimeOffset_ *)func_?(7,pJVar1,pOVar26,uVar17);
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
    pMStack_20 = MethodInfo__Newtonsoft__Json__Linq__JTokenReader__ReadAsDateTimeOffset__;
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
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_ReadAsDecimal
          (Nullable_1_Decimal_ *__return_storage_ptr__,JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  (*(code *)(this->klass->vtable).Read.method)(this,(this->klass->vtable).ReadAsBytes.methodPtr);
  iVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                    (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
  if (iVar2 == 0xb) {
    (__return_storage_ptr__->value).flags = 0;
    (__return_storage_ptr__->value).hi = 0;
    (__return_storage_ptr__->value).lo = 0;
    (__return_storage_ptr__->value).mid = 0;
    *(undefined4 *)&__return_storage_ptr__->has_value = 0;
    return __return_storage_ptr__;
  }
  iVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                    (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
  if (iVar2 == 7) {
code_?:
    value = (Object *)
            (*(code *)(pJVar1->klass->vtable).get_Value.method)
                      (pJVar1,(pJVar1->klass->vtable).get_ValueType.methodPtr);
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
    (*(code *)(pJVar1->klass->vtable).SetToken.method)
              (pJVar1,8,uVar10,(pJVar1->klass->vtable).Dispose.methodPtr);
    pDStack_11 = (Decimal__Class *)
                 (*(code *)(pJVar1->klass->vtable).get_Value.method)
                           (pJVar1,(pJVar1->klass->vtable).get_ValueType.methodPtr);
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
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                      (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 8) goto code_?;
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    __return_storage_ptr__ = (Nullable_1_Decimal_ *)func_?(7,pJVar1);
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
    pMStack_13 = MethodInfo__Newtonsoft__Json__Linq__JTokenReader__ReadAsDecimal__;
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


/* Boolean ReadInto(JContainer) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_ReadInto
               (JTokenReader *this,JContainer *c,MethodInfo *method)

{
  if (c == (JContainer *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  token = (JToken *)
          (*(code *)(c->klass->vtable).get_First.method)(c,(c->klass->vtable).get_Last.methodPtr);
  if (token != (JToken *)0x0) {
    JTokenReader_SetToken(this,token,(MethodInfo *)0x0);
    (this->fields)._current = token;
    (this->fields)._parent = (JToken *)c;
    return 1;
  }
  bVar2 = JTokenReader_SetEnd(this,c,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean ReadOver(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_ReadOver
               (JTokenReader *this,JToken *t,MethodInfo *method)

{
  if (t != (this->fields)._root) {
    if (t == (JToken *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    token = (t->fields)._next;
    if ((token != (JToken *)0x0) && (token != t)) {
      pJVar3 = (t->fields)._parent;
      if (pJVar3 == (JContainer *)0x0) goto code_?;
      pJVar4 = (JToken *)
               (*(code *)(pJVar3->klass->vtable).get_Last.method)
                         (pJVar3,(pJVar3->klass->vtable).Children.methodPtr);
      if (t != pJVar4) {
        (this->fields)._current = token;
        JTokenReader_SetToken(this,token,(MethodInfo *)0x0);
        return 1;
      }
    }
    pJVar3 = (t->fields)._parent;
    if (pJVar3 != (JContainer *)0x0) {
      bVar2 = JTokenReader_SetEnd(this,pJVar3,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 0;
}


/* String SafeToString(Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_SafeToString
                   (JTokenReader *this,Object *value,MethodInfo *method)

{
  if (value == (Object *)0x0) {
    return (String *)0x0;
  }
  pSVar1 = (String *)
           (*(code *)(value->klass->vtable).ToString.method)(value,value->klass[1]._0.image);
  return pSVar1;
}


/* Boolean SetEnd(JContainer) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_SetEnd
               (JTokenReader *this,JContainer *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  t = c;
  if (c == (JContainer *)0x0) {
    func_?(0);
code_?:
    func_?(t,0);
    c = (JContainer *)func_?(0xd,t);
    actualValue = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&c);
    pAVar2 = Json::Utilities::MiscellaneousUtils::
             MiscellaneousUtils_CreateArgumentOutOfRangeException
                       (StringLiteral_Type,actualValue,StringLiteral_Unexpected_JContainer_type_,
                        (MethodInfo *)0x0);
    uStack_3 = CONCAT44(uStack_3._4_4_,
                         MethodInfo__Newtonsoft__Json__Linq__JTokenReader__GetEndToken_Newtonsoft__Json__Linq__JContainer_
                        );
    uStack_4 = ZEXT48(pAVar2);
    pJVar5 = (JContainer__Class *)func_?();
    t->klass = pJVar5;
    pNVar6 = &(t->fields)._._lineNumber;
    *(byte *)&pNVar6->value = (byte)pNVar6->value >> 1;
    return (bool)pJVar5;
  }
  uVar7 = (*(code *)(c->klass->vtable).__unknown_2.method)
                    (c,(c->klass->vtable).get_HasValues.methodPtr);
  switch(uVar7) {
  case 1:
    uStack_8 = 0;
    func_?(&uStack_8,0xd,
                    MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                   );
    uVar7 = (undefined4)uStack_8;
    uVar9 = uStack_8._4_4_;
    goto code_?;
  case 2:
    uStack_3 = 0;
    func_?(&uStack_3,0xe,
                    MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                   );
    uVar7 = (undefined4)uStack_3;
    uVar9 = uStack_3._4_4_;
    goto code_?;
  case 3:
    uStack_4 = 0;
    func_?(&uStack_4,0xf,
                    MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                   );
    break;
  case 4:
    uStack_4 = 0;
    break;
  default:
    goto code_?;
  }
  uVar7 = (undefined4)uStack_4;
  uVar9 = uStack_4._4_4_;
code_?:
  uStack_1 = CONCAT44(uVar9,uVar7);
  cVar10 = func_?(&uStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__get_HasValue__)
  ;
  if (cVar10 != '\0') {
    newToken = func_?(&uStack_1,
                               MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__get_Value__
                              );
    JsonReader::JsonReader_SetToken((JsonReader *)this,newToken,(MethodInfo *)0x0);
    (this->fields)._current = (JToken *)t;
    (this->fields)._parent = (JToken *)t;
    return 1;
  }
  bVar11 = JTokenReader_ReadOver(this,(JToken *)t,(MethodInfo *)0x0);
  return bVar11;
}


/* Void SetToken(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_SetToken
               (JTokenReader *this,JToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = token;
  if (token == (JToken *)0x0) goto code_?;
  uVar2 = (*(code *)(token->klass->vtable).__unknown_2.method)
                    (token,(token->klass->vtable).__unknown_3.methodPtr);
  switch(uVar2) {
  case 1:
    token = (JToken *)0x1;
    goto Assembly_CSharp_dll_Newtonsoft_Json_JsonReader_JsonReader_SetToken;
  case 2:
    token = (JToken *)0x2;
    goto Assembly_CSharp_dll_Newtonsoft_Json_JsonReader_JsonReader_SetToken;
  case 3:
    token = (JToken *)0x3;
Assembly_CSharp_dll_Newtonsoft_Json_JsonReader_JsonReader_SetToken:
    method = (MethodInfo *)0x0;
    (*(code *)(this->klass->vtable).SetToken.method)
              (this,token,0,(this->klass->vtable).Dispose.methodPtr);
    return;
  case 4:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JProperty);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JProperty);
      func_?(0xf,this,4,*(undefined4 *)(iVar3 + 0x30));
      return;
    }
    break;
  case 5:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      func_?(0xf,this,5,*(undefined4 *)(iVar3 + 0x28));
      return;
    }
    break;
  case 6:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      func_?(0xf,this,7,*(undefined4 *)(iVar3 + 0x28));
      return;
    }
    break;
  case 7:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      func_?(0xf,this,8,*(undefined4 *)(iVar3 + 0x28));
      return;
    }
    break;
  case 8:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      func_?(0xf,this,9,*(undefined4 *)(iVar3 + 0x28));
      return;
    }
    break;
  case 9:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      func_?(0xf,this,10,*(undefined4 *)(iVar3 + 0x28));
      return;
    }
    break;
  case 10:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      func_?(0xf,this,0xb,*(undefined4 *)(iVar3 + 0x28));
      return;
    }
    break;
  case 0xb:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      func_?(0xf,this,0xc,*(undefined4 *)(iVar3 + 0x28));
      return;
    }
    break;
  case 0xc:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      func_?(0xf,this,0x10,*(undefined4 *)(iVar3 + 0x28));
      return;
    }
    break;
  case 0xd:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      func_?(0xf,this,6,*(undefined4 *)(iVar3 + 0x28));
      return;
    }
    break;
  case 0xe:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      func_?(0xf,this,0x11,*(undefined4 *)(iVar3 + 0x28));
      return;
    }
    break;
  case 0xf:
  case 0x10:
  case 0x11:
    iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (iVar3 != 0) {
      iVar3 = func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JValue);
      pSVar4 = JTokenReader_SafeToString(this,*(Object **)(iVar3 + 0x28),(MethodInfo *)0x0);
      func_?(0xf,this,9,pSVar4);
      return;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  func_?(0);
code_?:
  func_?(pJVar1,0);
  token = (JToken *)func_?(0xd,pJVar1);
  actualValue = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&token);
  Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (StringLiteral_Type,actualValue,StringLiteral_Unexpected_JTokenType_,(MethodInfo *)0x0);
  uVar5 = func_?();
  uVar6 = extraout_EDX >> 8;
  uVar7 = uVar6 * 0x100;
  uVar8 = (undefined2)uVar7;
  out(pJVar1->klass,uVar8);
  pbVar9 = (byte *)(unaff_EDI + -0x2e);
  bVar10 = *pbVar9;
  bVar11 = (byte)uVar5;
  *pbVar9 = *pbVar9 + bVar11;
  out(pJVar1->monitor,uVar8);
  pbVar9 = (byte *)(uVar6 * 0x900 + 0x6f);
  bVar12 = *pbVar9 + (byte)unaff_EBX;
  bVar13 = CARRY1(*pbVar9,(byte)unaff_EBX) || CARRY1(bVar12,CARRY1(bVar10,bVar11));
  *pbVar9 = bVar12 + CARRY1(bVar10,bVar11);
  pbVar9 = (byte *)(extraout_ECX - 0x2e);
  bVar12 = (byte)(uVar7 >> 8);
  bVar10 = *pbVar9 + bVar12;
  bVar14 = CARRY1(*pbVar9,bVar12) || CARRY1(bVar10,bVar13);
  *pbVar9 = bVar10 + bVar13;
  out((pJVar1->fields)._parent,uVar8);
  pbVar9 = (byte *)(extraout_ECX + 0xe1106fd2);
  bVar10 = *pbVar9;
  bVar15 = (byte)(extraout_ECX >> 8);
  bVar12 = *pbVar9;
  *pbVar9 = bVar12 + bVar15 + bVar14;
  pbVar9 = (byte *)(unaff_EDI + 0x10);
  bVar16 = (byte)extraout_ECX;
  bVar11 = *pbVar9;
  *pbVar9 = *pbVar9 >> (bVar16 & 0x1f);
  bVar13 = (extraout_ECX & 0x1f) == 0;
  bVar13 = unaff_EBX < uVar7 ||
           unaff_EBX + uVar6 * -0x100 <
           (uint)(byte)(bVar13 * (CARRY1(bVar10,bVar15) || CARRY1(bVar12 + bVar15,bVar14)) |
                       !bVar13 * ((bVar11 >> (bVar16 & 0x1f) - 1 & 1) != 0));
  out((pJVar1->fields)._previous,uVar8);
  bVar10 = *(byte *)(extraout_ECX - 0x2d);
  *(byte *)(extraout_ECX - 0x2d) = bVar10 + bVar13;
  out((pJVar1->fields)._next,uVar8);
  *(char *)(extraout_ECX + 0xc1106fd3) =
       *(char *)(extraout_ECX + 0xc1106fd3) + bVar16 + CARRY1(bVar10,bVar13);
  *(uint *)(unaff_EDI + 0x10) = *(uint *)(unaff_EDI + 0x10) >> (bVar16 & 0x1f);
  *(uint *)(unaff_EDI + 0x10) = *(uint *)(unaff_EDI + 0x10) >> (bVar16 & 0x1f);
  out((pJVar1->fields)._lineNumber.value,uVar8);
  pbVar9 = (byte *)(extraout_ECX - 0x2c);
  bVar10 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar15;
  out(*(undefined4 *)&(pJVar1->fields)._lineNumber.has_value,uVar8);
  *(char *)(extraout_ECX + 0xd5106fd4) =
       *(char *)(extraout_ECX + 0xd5106fd4) + (char)((ushort)uVar5 >> 8) + CARRY1(bVar10,bVar15);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* JTokenReader(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader__ctor
               (JTokenReader *this,JToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)token,StringLiteral_token,(MethodInfo *)0x0);
  (this->fields)._root = token;
  (this->fields)._current = token;
  return;
}


/* Boolean get_IsEndElement() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_get_IsEndElement
               (JTokenReader *this,MethodInfo *method)

{
  return (this->fields)._current == (this->fields)._parent;
}

