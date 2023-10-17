
/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::IsoDateTimeConverter::
         IsoDateTimeConverter_ReadJson
                   (IsoDateTimeConverter *this,JsonReader *reader,Type *objectType,
                   Object *existingValue,JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  bVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                    (objectType,(MethodInfo *)0x0);
  left = objectType;
  if (bVar1 != 0) {
    left = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType(objectType,(MethodInfo *)0x0);
  }
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
  }
  else {
    iVar2 = (*(reader->klass->vtable).get_TokenType.methodPtr)(reader);
    if (iVar2 == 0xb) {
      bVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                        (objectType,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return (Object *)0x0;
      }
      func_?();
      func_?();
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      func_?(args);
      func_?();
      ppSVar4 = &StringLiteral_Cannot_convert_null_value_to__0_;
      goto code_?;
    }
    iVar2 = (*(reader->klass->vtable).get_TokenType.methodPtr)(reader);
    if (iVar2 == 9) {
      piVar5 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)(reader);
      if (piVar5 != (int *)0x0) {
        pSVar6 = (String *)(**(code **)(*piVar5 + 0xd4))(piVar5);
        bVar7 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        handle = TypeRef__System__DateTimeOffset;
        if ((bVar1 & bVar7) != 0) {
          return (Object *)0x0;
        }
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)left,(Object **)right,(MethodInfo *)0x0);
        pSVar8 = (this->fields)._dateTimeFormat;
        if (bVar1 == 0) {
          bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            pCVar3 = IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
            DVar9 = (this->fields)._dateTimeStyles;
            if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            mscorlib.dll::System::DateTime::DateTime_Parse_1
                      (pSVar6,(IFormatProvider *)pCVar3,DVar9,(MethodInfo *)0x0);
            pOVar10 = (Object *)func_?();
            return pOVar10;
          }
          pSVar8 = (this->fields)._dateTimeFormat;
          pCVar3 = IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
          DVar9 = (this->fields)._dateTimeStyles;
          if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          mscorlib.dll::System::DateTime::DateTime_ParseExact
                    (pSVar6,pSVar8,(IFormatProvider *)pCVar3,DVar9,(MethodInfo *)0x0);
          pOVar10 = (Object *)func_?();
          return pOVar10;
        }
        bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pCVar3 = IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
          DVar9 = (this->fields)._dateTimeStyles;
          if ((TypeInfo__System__DateTimeOffset->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          mscorlib.dll::System::DateTimeOffset::DateTimeOffset_Parse_1
                    ((DateTimeOffset *)&stack0xffffffdc,pSVar6,(IFormatProvider *)pCVar3,DVar9,
                     (MethodInfo *)0x0);
          pOVar10 = (Object *)func_?();
          return pOVar10;
        }
        pSVar8 = (this->fields)._dateTimeFormat;
        pCVar3 = IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
        DVar9 = (this->fields)._dateTimeStyles;
        if ((TypeInfo__System__DateTimeOffset->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ParseExact
                  ((DateTimeOffset *)&stack0xffffffdc,pSVar6,pSVar8,(IFormatProvider *)pCVar3,DVar9,
                   (MethodInfo *)0x0);
        pOVar10 = (Object *)func_?();
        return pOVar10;
      }
      goto code_?;
    }
  }
  uVar11 = func_?();
  func_?(uVar11);
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  func_?(reader);
  func_?(7,reader);
  func_?();
  uVar11 = func_?();
  func_?(args);
  func_?(args,uVar11);
  func_?();
  ppSVar4 = &StringLiteral_Unexpected_token_parsing_date__E;
code_?:
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(ppSVar4);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)pCVar3,args,method_00);
  func_?();
  this_00 = (Exception *)func_?();
  func_?(this_00);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar6,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Converters__IsoDateTimeConverter__ReadJson_Newtonsoft__Json__JsonReader__System__Type__System__Object__Newtonsoft__Json__JsonSerializer_
                 );
  func_?();
  pcVar12 = (code *)swi(3);
  pOVar10 = (Object *)(*pcVar12)();
  return pOVar10;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::IsoDateTimeConverter::
     IsoDateTimeConverter_WriteJson
               (IsoDateTimeConverter *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&StringLiteral_yyyy___MM___dd_T_HH___mm___ss_FF);
    cRam_? = '\x01';
  }
  DStack_1._dateData = 0;
  puStack_2 = (undefined *)0x0;
  pJStack_3 = (JsonWriter *)0x0;
  pSStack_4 = (String *)0x0;
  pMStack_5 = (MethodInfo *)0x0;
  if (value == (Object *)0x0) {
code_?:
    uVar6 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar6);
    pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    uVar6 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar6);
    pTVar8 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetObjectType
                       (value,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pTVar8);
    func_?(0,pTVar8);
    method_00 = (MethodInfo *)0x0;
    pSVar9 = (String *)func_?(&StringLiteral_Unexpected_value_when_converting);
    value = (Object *)
            Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar9,(IFormatProvider *)pCVar7,args,method_00);
    uVar6 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar6);
    func_?(this_00);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,(String *)value,(MethodInfo *)0x0);
    puStack_2 = (undefined *)
                 func_?(&
                                 MethodInfo__Newtonsoft__Json__Converters__IsoDateTimeConverter__WriteJson_Newtonsoft__Json__JsonWriter__System__Object__Newtonsoft__Json__JsonSerializer_
                                );
    func_?();
    pDVar10 = extraout_ECX;
code_?:
    func_?(value,pDVar10);
  }
  else {
    pOVar11 = (Object *)0x0;
    if ((DateTime__Class *)value->klass == TypeInfo__System__DateTime) {
      pOVar11 = value;
    }
    if (pOVar11 == (Object *)0x0) {
      pOVar11 = (Object *)0x0;
      if ((DateTimeOffset__Class *)value->klass == TypeInfo__System__DateTimeOffset) {
        pOVar11 = value;
      }
      if (pOVar11 == (Object *)0x0) goto code_?;
      pDVar10 = (DateTime__Class *)TypeInfo__System__DateTimeOffset;
      if ((value->klass->_0).element_class != (TypeInfo__System__DateTimeOffset->_0).element_class)
      goto code_?;
      puVar12 = (undefined4 *)func_?(value);
      puStack_2 = (undefined *)*puVar12;
      pJStack_3 = (JsonWriter *)puVar12[1];
      pSStack_4 = (String *)puVar12[2];
      pMStack_5 = (MethodInfo *)puVar12[3];
      if (((this->fields)._dateTimeStyles & 0x50) != 0) {
        pDVar13 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToUniversalTime
                           ((DateTimeOffset *)&stack0xffffffd4,(DateTimeOffset *)&puStack_2,
                            (MethodInfo *)0x0);
        puStack_2 = (undefined *)(pDVar13->_dateTime)._dateData;
        pJStack_3 = *(JsonWriter **)((int)&(pDVar13->_dateTime)._dateData + 4);
        pSStack_4._0_2_ = pDVar13->_offsetMinutes;
        pSStack_4._2_2_ = *(undefined2 *)&pDVar13->field_0xa;
        pMStack_5 = *(MethodInfo **)&pDVar13->field_0xc;
      }
      pSVar9 = (this->fields)._dateTimeFormat;
      pSVar14 = StringLiteral_yyyy___MM___dd_T_HH___mm___ss_FF;
      if (pSVar9 != (String *)0x0) {
        pSVar14 = pSVar9;
      }
      pCVar7 = IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
      pSVar9 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToString_3
                         ((DateTimeOffset *)&puStack_2,pSVar14,(IFormatProvider *)pCVar7,
                          (MethodInfo *)0x0);
    }
    else {
      pDVar10 = TypeInfo__System__DateTime;
      if ((value->klass->_0).element_class != (TypeInfo__System__DateTime->_0).element_class)
      goto code_?;
      puVar15 = (uint64_t *)func_?(value);
      DStack_1._dateData = *puVar15;
      if (((this->fields)._dateTimeStyles & 0x50) != 0) {
        DStack_1 = mscorlib.dll::System::DateTime::DateTime_ToUniversalTime
                             (&DStack_1,(MethodInfo *)0x0);
      }
      pSVar9 = (this->fields)._dateTimeFormat;
      pSVar14 = StringLiteral_yyyy___MM___dd_T_HH___mm___ss_FF;
      if (pSVar9 != (String *)0x0) {
        pSVar14 = pSVar9;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pCVar7 = (this->fields)._culture;
      if (pCVar7 == (CultureInfo *)0x0) {
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                           ((MethodInfo *)0x0);
      }
      pSVar9 = mscorlib.dll::System::DateTime::DateTime_ToString_3
                         (&DStack_1,pSVar14,(IFormatProvider *)pCVar7,(MethodInfo *)0x0);
    }
    if (writer != (JsonWriter *)0x0) {
      pMStack_5 = (writer->klass->vtable).WriteValue.method;
      pJStack_3 = writer;
      pSStack_4 = pSVar9;
      (*(writer->klass->vtable).WriteValue.methodPtr)();
      return;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* IsoDateTimeConverter() */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::IsoDateTimeConverter::
     IsoDateTimeConverter__ctor(IsoDateTimeConverter *this,MethodInfo *method)

{
  (this->fields)._dateTimeStyles = 0x80;
  return;
}


/* CultureInfo get_Culture() */

CultureInfo *
Assembly-CSharp.dll::Newtonsoft::Json::Converters::IsoDateTimeConverter::
IsoDateTimeConverter_get_Culture(IsoDateTimeConverter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._culture;
  if (pCVar1 == (CultureInfo *)0x0) {
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                       ((MethodInfo *)0x0);
  }
  return pCVar1;
}


/* String get_DateTimeFormat() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Converters::IsoDateTimeConverter::
         IsoDateTimeConverter_get_DateTimeFormat(IsoDateTimeConverter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._dateTimeFormat;
  if (pSVar1 == (String *)0x0) {
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
  }
  return pSVar1;
}


/* Void set_DateTimeFormat(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::IsoDateTimeConverter::
     IsoDateTimeConverter_set_DateTimeFormat
               (IsoDateTimeConverter *this,String *value,MethodInfo *method)

{
  pSVar1 = Json::Utilities::StringUtils::StringUtils_NullEmptyString(value,(MethodInfo *)0x0);
  (this->fields)._dateTimeFormat = pSVar1;
  func_?(&(this->fields)._dateTimeFormat,pSVar1);
  return;
}

