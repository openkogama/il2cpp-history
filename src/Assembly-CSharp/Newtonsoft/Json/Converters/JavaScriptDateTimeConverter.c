
/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter::
         JavaScriptDateTimeConverter_ReadJson
                   (JavaScriptDateTimeConverter *this,JsonReader *reader,Type *objectType,
                   Object *existingValue,JsonSerializer *serializer,MethodInfo *method)

{
  pTVar1 = objectType;
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__Int64);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_Date);
    cRam_? = '\x01';
  }
  bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                    (objectType,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    objectType = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType
                           (objectType,(MethodInfo *)0x0);
  }
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    func_?();
    args = (Object__Array *)func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    ppSVar3 = &StringLiteral_Unexpected_token_parsing_date__E;
  }
  else {
    iVar4 = (*(reader->klass->vtable).get_TokenType.methodPtr)(reader);
    if (iVar4 == 0xb) {
      bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                        (pTVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return (Object *)0x0;
      }
      func_?();
      func_?();
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      func_?(args);
      func_?();
      ppSVar3 = &StringLiteral_Cannot_convert_null_value_to__0_;
    }
    else {
      iVar4 = (*(reader->klass->vtable).get_TokenType.methodPtr)(reader);
      if (iVar4 == 3) {
        piVar5 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)(reader);
        if (piVar5 == (int *)0x0) goto code_?;
        pSVar6 = (String *)(**(code **)(*piVar5 + 0xd4))(piVar5);
        iVar7 = mscorlib.dll::System::String::String_Compare_1
                          (pSVar6,StringLiteral_Date,StringComparison__Enum_Ordinal,
                           (MethodInfo *)0x0);
        if (iVar7 == 0) {
          (*(reader->klass->vtable).__unknown.methodPtr)(reader);
          iVar4 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                            (reader,(reader->klass->vtable).get_TokenType.method);
          if (iVar4 != 7) {
            uVar8 = func_?();
            func_?(uVar8);
            provider = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            func_?();
            args = (Object__Array *)func_?();
            func_?(reader);
            func_?(7,reader);
            func_?();
            uVar8 = func_?();
            func_?(args);
            func_?(args,uVar8);
            func_?();
            ppSVar3 = &StringLiteral_Unexpected_token_parsing_date__E;
            goto code_?;
          }
          this_00 = (Exception *)(*(reader->klass->vtable).get_Value.methodPtr)(reader);
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (this_00 == (Exception *)0x0) goto code_?;
          if ((this_00->klass->_0).element_class != (TypeInfo__System__Int64->_0).element_class)
          goto code_?;
          piVar9 = (int64_t *)func_?();
          JsonConvert::JsonConvert_ConvertJavaScriptTicksToDateTime(*piVar9,(MethodInfo *)0x0);
          (*(reader->klass->vtable).__unknown.methodPtr)
                    (reader,(reader->klass->vtable).__unknown.method);
          iVar4 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                            (reader,(reader->klass->vtable).get_TokenType.method);
          handle = TypeRef__System__DateTimeOffset;
          if (iVar4 == 0xf) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
            bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                              ((Object **)objectType,(Object **)pTVar1,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset__ctor_1
                        ((DateTimeOffset *)0x0,(DateTime)0x0,unaff_retaddr);
              pOVar10 = (Object *)func_?();
              return pOVar10;
            }
            pOVar10 = (Object *)func_?();
            return pOVar10;
          }
          goto code_?;
        }
      }
      uVar8 = func_?();
      func_?(uVar8);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?(reader);
      func_?(7,reader);
      func_?();
      uVar8 = func_?();
      func_?(args);
      func_?(args,uVar8);
      func_?();
      func_?(reader);
      uVar8 = func_?(8,reader);
      func_?(args);
      func_?(args,uVar8);
      func_?(1,uVar8);
      ppSVar3 = &StringLiteral_Unexpected_token_or_value_when_p;
    }
  }
code_?:
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(ppSVar3);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)provider,args,method_00);
  uVar8 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar8);
  func_?(this_00);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar6,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Converters__JavaScriptDateTimeConverter__ReadJson_Newtonsoft__Json__JsonReader__System__Type__System__Object__Newtonsoft__Json__JsonSerializer_
                 );
  func_?();
code_?:
  func_?(this_00);
  pcVar11 = (code *)swi(3);
  pOVar10 = (Object *)(*pcVar11)();
  return pOVar10;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter::
     JavaScriptDateTimeConverter_WriteJson
               (JavaScriptDateTimeConverter *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_Date);
    cRam_? = '\x01';
  }
  DStack_1._dateData = 0;
  DStack_2._dateTime._dateData._0_4_ = 0;
  DStack_2._dateTime._dateData._4_4_ = 0;
  DStack_2._offsetMinutes = 0;
  DStack_2._10_2_ = 0;
  DStack_2._12_4_ = 0;
  pMStack_3 = (MethodInfo *)0x0;
  uStack_4 = 0;
  uStack_5._0_2_ = 0;
  uStack_5._2_2_ = 0;
  uStack_6 = 0;
  if (value == (Object *)0x0) {
code_?:
    uVar7 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar7);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Expected_date_object_value_);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    uVar7 = func_?(&
                            MethodInfo__Newtonsoft__Json__Converters__JavaScriptDateTimeConverter__WriteJson_Newtonsoft__Json__JsonWriter__System__Object__Newtonsoft__Json__JsonSerializer_
                           );
    func_?(this_00,uVar7);
    value = extraout_ECX;
    pDVar8 = extraout_EDX;
code_?:
    func_?(value,pDVar8);
  }
  else {
    pOVar9 = (Object *)0x0;
    if ((DateTime__Class *)value->klass == TypeInfo__System__DateTime) {
      pOVar9 = value;
    }
    if (pOVar9 == (Object *)0x0) {
      pOVar9 = (Object *)0x0;
      if ((DateTimeOffset__Class *)value->klass == TypeInfo__System__DateTimeOffset) {
        pOVar9 = value;
      }
      if (pOVar9 == (Object *)0x0) goto code_?;
      pDVar8 = (DateTime__Class *)TypeInfo__System__DateTimeOffset;
      if ((value->klass->_0).element_class != (TypeInfo__System__DateTimeOffset->_0).element_class)
      goto code_?;
      puVar10 = (undefined4 *)func_?(value);
      DStack_2._dateTime._dateData._0_4_ = *puVar10;
      DStack_2._dateTime._dateData._4_4_ = puVar10[1];
      DStack_2._8_4_ = puVar10[2];
      DStack_2._12_4_ = puVar10[3];
      pDVar11 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToUniversalTime
                         ((DateTimeOffset *)&stack0xffffffc4,&DStack_2,(MethodInfo *)0x0);
      pMStack_3 = (MethodInfo *)(pDVar11->_dateTime)._dateData;
      uStack_4 = *(undefined4 *)((int)&(pDVar11->_dateTime)._dateData + 4);
      uStack_5._0_2_ = pDVar11->_offsetMinutes;
      uStack_5._2_2_ = *(undefined2 *)&pDVar11->field_0xa;
      uStack_6 = *(undefined4 *)&pDVar11->field_0xc;
      dateTime = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcDateTime
                           ((DateTimeOffset *)&pMStack_3,(MethodInfo *)0x0);
    }
    else {
      pDVar8 = TypeInfo__System__DateTime;
      if ((value->klass->_0).element_class != (TypeInfo__System__DateTime->_0).element_class)
      goto code_?;
      puVar12 = (uint64_t *)func_?(value);
      DStack_1._dateData = *puVar12;
      dateTime = mscorlib.dll::System::DateTime::DateTime_ToUniversalTime
                           (&DStack_1,(MethodInfo *)0x0);
    }
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar13 = JsonConvert::JsonConvert_ConvertDateTimeToJavaScriptTicks_1(dateTime,(MethodInfo *)0x0);
    if (writer != (JsonWriter *)0x0) {
      pMStack_3 = (writer->klass->vtable).WriteStartConstructor.method;
      (*(writer->klass->vtable).WriteStartConstructor.methodPtr)();
      (*(writer->klass->vtable).WriteValue_3.methodPtr)(writer,iVar13);
      (*(writer->klass->vtable).WriteEndConstructor.methodPtr)
                (writer,(writer->klass->vtable).WriteEndConstructor.method);
      return;
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

