
/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter::
         JavaScriptDateTimeConverter_ReadJson
                   (JavaScriptDateTimeConverter *this,JsonReader *reader,Type *objectType,
                   Object *existingValue,JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (CultureInfo *)objectType;
  bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                    (objectType,(MethodInfo *)0x0);
  pTVar3 = (Type *)pCVar1;
  if (bVar2 != 0) {
    pTVar3 = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType
                       ((Type *)pCVar1,(MethodInfo *)0x0);
  }
  pJVar4 = reader;
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar5 = (Object__Array *)func_?();
    func_?();
    reader = (JsonReader *)func_?();
    uVar6 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&reader);
    func_?(pOVar5,0);
    func_?(pOVar5,uVar6);
    func_?();
    pJVar4 = (JsonReader *)
              Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Unexpected_token_parsing_date__E,(IFormatProvider *)pCVar1,
                         pOVar5,(MethodInfo *)0x0);
    pIVar7 = (IsolatedStorageException *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar7,(String *)pJVar4,(MethodInfo *)0x0);
    lStack_8 = ZEXT48(
                     MethodInfo__Newtonsoft__Json__Converters__JavaScriptDateTimeConverter__ReadJson_Newtonsoft__Json__JsonReader__System__Type__System__Object__Newtonsoft__Json__JsonSerializer_
                     ) << 0x20;
    pIStack_9 = pIVar7;
    func_?();
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar5 = (Object__Array *)func_?(TypeInfo__System__Object);
    func_?(pJVar4,0);
    reader = (JsonReader *)func_?(7,pJVar4);
    uVar6 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&reader);
    func_?(pOVar5,0);
    func_?(pOVar5,uVar6);
    func_?();
    pJVar4 = (JsonReader *)
              Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Unexpected_token_parsing_date__E,(IFormatProvider *)pCVar1,
                         pOVar5,(MethodInfo *)0x0);
    pIVar7 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar7,(String *)pJVar4,(MethodInfo *)0x0);
    func_?();
  }
  else {
    iVar10 = (*(code *)(reader->klass->vtable).get_TokenType.method)(reader);
    if (iVar10 == 0xb) {
      bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                        ((Type *)pCVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return (Object *)0x0;
      }
      goto code_?;
    }
    iVar10 = (*(code *)(pJVar4->klass->vtable).get_TokenType.method)(pJVar4);
    if (iVar10 == 3) {
      piVar11 = (int *)(*(code *)(pJVar4->klass->vtable).get_Value.method)(pJVar4);
      if (piVar11 == (int *)0x0) goto code_?;
      pSVar12 = (String *)(**(code **)(*piVar11 + 0xd8))(piVar11);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      iVar13 = mscorlib.dll::System::String::String_Compare_5
                        (pSVar12,StringLiteral_Date,StringComparison__Enum_Ordinal,(MethodInfo *)0x0)
      ;
      if (iVar13 == 0) {
        (*(code *)(pJVar4->klass->vtable).__unknown.method)(pJVar4);
        iVar10 = (*(code *)(pJVar4->klass->vtable).get_TokenType.method)
                          (pJVar4,(pJVar4->klass->vtable).get_Value.methodPtr);
        if (iVar10 == 7) {
          uVar6 = (*(code *)(pJVar4->klass->vtable).get_Value.method)(pJVar4);
          iVar10 = func_?(uVar6,TypeInfo__System__Int64);
          reader = *(JsonReader **)(iVar10 + 4);
          if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000
               ) != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
            func_?();
          }
          pDVar14 = JsonConvert::JsonConvert_ConvertJavaScriptTicksToDateTime
                             ((DateTime *)&pMStack_15,ZEXT48(reader),in_stack_16);
          pMStack_15 = *(MethodInfo **)&(pDVar14->ticks)._ticks;
          pIStack_9 = *(IsolatedStorageException **)((int)&(pDVar14->ticks)._ticks + 4);
          lStack_8 = *(longlong *)&pDVar14->kind;
          (*(code *)(pJVar4->klass->vtable).__unknown.method)();
          iVar10 = (*(code *)(pJVar4->klass->vtable).get_TokenType.method)
                            (pJVar4,(pJVar4->klass->vtable).get_Value.methodPtr);
          handle = TypeRef__System__DateTimeOffset;
          if (iVar10 == 0xf) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            pTVar17 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
            if (pTVar3 == pTVar17) {
              uVar18._4_4_ = (int32_t)lStack_8;
              uVar18._0_4_ = (int32_t)pIStack_9;
              puVar19 = &stack0xffffffcc;
              func_?();
              pIStack_9 = (IsolatedStorageException *)pMStack_15;
              pMStack_15 = (MethodInfo *)puVar19;
              lStack_8 = uVar18;
              pOVar20 = (Object *)func_?();
              return pOVar20;
            }
            pOVar20 = (Object *)func_?();
            return pOVar20;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar5 = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(pJVar4,0);
  objectType = (Type *)func_?(7,pJVar4);
  uVar6 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&objectType);
  func_?(pOVar5,0);
  func_?(pOVar5,uVar6);
  func_?();
  pJVar4 = reader;
  func_?(reader,0);
  uVar6 = func_?(8,pJVar4);
  func_?(pOVar5,0);
  func_?(pOVar5,uVar6);
  func_?(1,uVar6);
  pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Unexpected_token_or_value_when_p,(IFormatProvider *)pCVar1,
                      pOVar5,(MethodInfo *)0x0);
  pIVar7 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar7,pSVar12,(MethodInfo *)0x0);
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pOVar5 = (Object__Array *)func_?();
  func_?(pOVar5);
  func_?(pOVar5,pCVar1);
  func_?();
  pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Cannot_convert_null_value_to__0_,(IFormatProvider *)provider,
                      pOVar5,(MethodInfo *)0x0);
  pIVar7 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar7,pSVar12,(MethodInfo *)0x0);
  pMStack_15 = 
  MethodInfo__Newtonsoft__Json__Converters__JavaScriptDateTimeConverter__ReadJson_Newtonsoft__Json__JsonReader__System__Type__System__Object__Newtonsoft__Json__JsonSerializer_
  ;
  func_?();
  pcVar21 = (code *)swi(3);
  pOVar20 = (Object *)(*pcVar21)();
  return pOVar20;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter::
     JavaScriptDateTimeConverter_WriteJson
               (JavaScriptDateTimeConverter *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  pSStack_11 = (String *)0x0;
  pIStack_12 = (Il2CppMethodPointer)0x0;
  uStack_13 = 0;
  uStack_14 = 0;
  if (value == (Object *)0x0) {
code_?:
    this_00 = (DateTime__Class *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              ((IsolatedStorageException *)this_00,StringLiteral_Expected_date_object_value_,
               (MethodInfo *)0x0);
    func_?();
    value = extraout_ECX;
code_?:
    func_?(value,this_00);
  }
  else {
    pDVar15 = (DateTime__Class *)value->klass;
    pOVar16 = (Object *)0x0;
    if (pDVar15 == TypeInfo__System__DateTime) {
      pOVar16 = value;
    }
    if (pOVar16 == (Object *)0x0) {
      pOVar16 = (Object *)0x0;
      if (pDVar15 == (DateTime__Class *)TypeInfo__System__DateTimeOffset) {
        pOVar16 = value;
      }
      if (pOVar16 == (Object *)0x0) goto code_?;
      this_00 = (DateTime__Class *)TypeInfo__System__DateTimeOffset;
      if ((pDVar15->_0).element_class != (TypeInfo__System__DateTimeOffset->_0).element_class)
      goto code_?;
      puVar17 = (undefined4 *)func_?(value);
      uStack_7 = *puVar17;
      uStack_8 = puVar17[1];
      uStack_9 = puVar17[2];
      uStack_10 = puVar17[3];
      uStack_1 = *(undefined8 *)(puVar17 + 4);
      puVar17 = (undefined4 *)func_?(auStack_18,&uStack_7,0);
      pSStack_11 = (String *)*puVar17;
      pIStack_12 = (Il2CppMethodPointer)puVar17[1];
      uStack_13 = puVar17[2];
      uStack_14 = puVar17[3];
      uStack_2 = *(undefined8 *)(puVar17 + 4);
      puVar17 = (undefined4 *)func_?(&uStack_19,&pSStack_11,0);
    }
    else {
      this_00 = TypeInfo__System__DateTime;
      if ((pDVar15->_0).element_class != (TypeInfo__System__DateTime->_0).element_class)
      goto code_?;
      puVar17 = (undefined4 *)func_?(value);
      uStack_3 = *puVar17;
      uStack_4 = puVar17[1];
      uStack_5 = puVar17[2];
      uStack_6 = puVar17[3];
      puVar17 = (undefined4 *)func_?(&uStack_19,&uStack_3,0);
    }
    uStack_19 = *puVar17;
    uStack_20 = puVar17[1];
    uStack_21 = puVar17[2];
    uStack_22 = puVar17[3];
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    dateTime.ticks._ticks._4_4_ = uStack_20;
    dateTime.ticks._ticks._0_4_ = uStack_19;
    dateTime.kind = uStack_21;
    dateTime._12_4_ = uStack_22;
    iVar23 = JsonConvert::JsonConvert_ConvertDateTimeToJavaScriptTicks_1(dateTime,(MethodInfo *)0x0);
    if (writer != (JsonWriter *)0x0) {
      pIStack_12 = (writer->klass->vtable).WriteEndConstructor.methodPtr;
      pSStack_11 = StringLiteral_Date;
      (*(code *)(writer->klass->vtable).WriteStartConstructor.method)(writer);
      (*(code *)(writer->klass->vtable).WriteValue_3.method)
                (writer,iVar23,(writer->klass->vtable).WriteValue_4.methodPtr);
      (*(code *)(writer->klass->vtable).WriteEndConstructor.method)
                (writer,(writer->klass->vtable).WritePropertyName.methodPtr);
      return;
    }
  }
  pIStack_12 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}

