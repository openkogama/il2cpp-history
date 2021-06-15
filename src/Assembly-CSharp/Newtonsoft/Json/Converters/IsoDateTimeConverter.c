
/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::IsoDateTimeConverter::
         IsoDateTimeConverter_ReadJson
                   (IsoDateTimeConverter *this,JsonReader *reader,Type *objectType,
                   Object *existingValue,JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (CultureInfo *)objectType;
  bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                    (objectType,(MethodInfo *)0x0);
  objectType = (Type *)CONCAT13(bVar2,objectType._0_3_);
  if (bVar2 == 0) {
    pTStack_3 = (Type *)pCVar1;
  }
  else {
    pTStack_3 = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType
                          ((Type *)pCVar1,(MethodInfo *)0x0);
  }
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
  }
  else {
    iVar4 = (*(code *)(reader->klass->vtable).get_TokenType.method)(reader);
    if (iVar4 == 0xb) {
      bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                        ((Type *)pCVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return (Object *)0x0;
      }
      goto code_?;
    }
    iVar4 = (*(code *)(reader->klass->vtable).get_TokenType.method)(reader);
    if (iVar4 == 9) {
      piVar5 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)(reader);
      if (piVar5 != (int *)0x0) {
        pSVar6 = (String *)(**(code **)(*piVar5 + 0xd8))(piVar5);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        handle = TypeRef__System__DateTimeOffset;
        if ((bVar2 != 0) && (objectType._3_1_ != '\0')) {
          return (Object *)0x0;
        }
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        pSVar8 = (this->fields)._dateTimeFormat;
        if (pTStack_3 != pTVar7) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            pSVar8 = (this->fields)._dateTimeFormat;
            objectType = (Type *)IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
            DVar9 = (this->fields)._dateTimeStyles;
            if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::DateTime::DateTime_ParseExact
                      ((DateTime *)&stack0xffffffd0,pSVar6,pSVar8,(IFormatProvider *)objectType,
                       DVar9,(MethodInfo *)0x0);
            pOVar10 = (Object *)func_?();
            return pOVar10;
          }
          pCVar1 = IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
          DVar9 = (this->fields)._dateTimeStyles;
          if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
            func_?();
          }
          mscorlib.dll::System::DateTime::DateTime_Parse_2
                    ((DateTime *)&stack0xffffffd0,pSVar6,(IFormatProvider *)pCVar1,DVar9,
                     (MethodInfo *)0x0);
          pOVar10 = (Object *)func_?();
          return pOVar10;
        }
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          pSVar8 = (this->fields)._dateTimeFormat;
          objectType = (Type *)IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
          DVar9 = (this->fields)._dateTimeStyles;
          if ((((uint)(TypeInfo__System__DateTimeOffset->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__System__DateTimeOffset->_1).cctor_started == 0)) {
            func_?();
          }
          mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ParseExact
                    ((DateTimeOffset *)&stack0xffffffe0,pSVar6,pSVar8,(IFormatProvider *)objectType,
                     DVar9,(MethodInfo *)0x0);
          pOVar10 = (Object *)func_?();
          return pOVar10;
        }
        pCVar1 = IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
        DVar9 = (this->fields)._dateTimeStyles;
        if ((((uint)(TypeInfo__System__DateTimeOffset->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__System__DateTimeOffset->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::DateTimeOffset::DateTimeOffset_Parse
                  ((DateTimeOffset *)&stack0xffffffe0,pSVar6,(IFormatProvider *)pCVar1,DVar9,
                   (MethodInfo *)0x0);
        pOVar10 = (Object *)func_?();
        return pOVar10;
      }
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar11 = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(reader,0);
  objectType = (Type *)func_?(7,reader);
  uVar12 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&objectType);
  func_?(pOVar11,0);
  func_?(pOVar11,uVar12);
  func_?();
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Unexpected_token_parsing_date__E,(IFormatProvider *)pCVar1,
                      pOVar11,(MethodInfo *)0x0);
  pIVar13 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar13,pSVar6,(MethodInfo *)0x0);
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pOVar11 = (Object__Array *)func_?();
  func_?(pOVar11);
  func_?(pOVar11,pCVar1);
  func_?();
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Cannot_convert_null_value_to__0_,(IFormatProvider *)provider,
                      pOVar11,(MethodInfo *)0x0);
  pIVar13 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar13,pSVar6,(MethodInfo *)0x0);
  func_?();
  pcVar14 = (code *)swi(3);
  pOVar10 = (Object *)(*pcVar14)();
  return pOVar10;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::IsoDateTimeConverter::
     IsoDateTimeConverter_WriteJson
               (IsoDateTimeConverter *this,JsonWriter *writer,Object *value,
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
  pIStack_6 = (Il2CppMethodPointer)0x0;
  puStack_7 = (undefined *)0x0;
  pIStack_8 = (IsolatedStorageException *)0x0;
  uStack_9 = 0;
  if (value == (Object *)0x0) {
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pTVar11 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetObjectType
                       (value,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pTVar11);
    func_?(0,pTVar11);
    value = (Object *)
            Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Unexpected_value_when_converting,(IFormatProvider *)pCVar10,args
                       ,(MethodInfo *)0x0);
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(this_00,(String *)value,(MethodInfo *)0x0);
    uStack_1 = CONCAT44(uStack_1._4_4_,
                         MethodInfo__Newtonsoft__Json__Converters__IsoDateTimeConverter__WriteJson_Newtonsoft__Json__JsonWriter__System__Object__Newtonsoft__Json__JsonSerializer_
                        );
    uStack_9 = 0;
    pIStack_8 = this_00;
    func_?();
    pDVar12 = extraout_EDX;
code_?:
    func_?(value,pDVar12);
  }
  else {
    pDVar13 = (DateTime__Class *)value->klass;
    pOVar14 = (Object *)0x0;
    if (pDVar13 == TypeInfo__System__DateTime) {
      pOVar14 = value;
    }
    if (pOVar14 == (Object *)0x0) {
      pOVar14 = (Object *)0x0;
      if (pDVar13 == (DateTime__Class *)TypeInfo__System__DateTimeOffset) {
        pOVar14 = value;
      }
      if (pOVar14 == (Object *)0x0) goto code_?;
      pDVar12 = (DateTime__Class *)TypeInfo__System__DateTimeOffset;
      if ((pDVar13->_0).element_class != (TypeInfo__System__DateTimeOffset->_0).element_class)
      goto code_?;
      puVar15 = (undefined4 *)func_?(value);
      pIStack_6 = (Il2CppMethodPointer)*puVar15;
      puStack_7 = (undefined *)puVar15[1];
      pIStack_8 = (IsolatedStorageException *)puVar15[2];
      uStack_9 = puVar15[3];
      uStack_1 = *(undefined8 *)(puVar15 + 4);
      if (((this->fields)._dateTimeStyles & 0x50) != 0) {
        puVar15 = (undefined4 *)func_?(auStack_16,&pIStack_6,0);
        pIStack_6 = (Il2CppMethodPointer)*puVar15;
        puStack_7 = (undefined *)puVar15[1];
        pIStack_8 = (IsolatedStorageException *)puVar15[2];
        uStack_9 = puVar15[3];
        uStack_1 = *(undefined8 *)(puVar15 + 4);
      }
      pSVar17 = (this->fields)._dateTimeFormat;
      pSVar18 = StringLiteral_yyyy___MM___dd_T_HH___mm___ss_FF;
      if (pSVar17 != (String *)0x0) {
        pSVar18 = pSVar17;
      }
      pCVar10 = IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
      uVar19 = func_?(&pIStack_6,pSVar18,pCVar10,0);
    }
    else {
      pDVar12 = TypeInfo__System__DateTime;
      if ((pDVar13->_0).element_class != (TypeInfo__System__DateTime->_0).element_class)
      goto code_?;
      puVar15 = (undefined4 *)func_?(value);
      uStack_2 = *puVar15;
      uStack_3 = puVar15[1];
      uStack_4 = puVar15[2];
      uStack_5 = puVar15[3];
      if (((this->fields)._dateTimeStyles & 0x50) != 0) {
        puVar15 = (undefined4 *)func_?(auStack_20,&uStack_2,0);
        uStack_2 = *puVar15;
        uStack_3 = puVar15[1];
        uStack_4 = puVar15[2];
        uStack_5 = puVar15[3];
      }
      pSVar17 = (this->fields)._dateTimeFormat;
      pSVar18 = StringLiteral_yyyy___MM___dd_T_HH___mm___ss_FF;
      if (pSVar17 != (String *)0x0) {
        pSVar18 = pSVar17;
      }
      pCVar10 = IsoDateTimeConverter_get_Culture(this,(MethodInfo *)0x0);
      uVar19 = func_?(&uStack_2,pSVar18,pCVar10,0);
    }
    if (writer != (JsonWriter *)0x0) {
      pIStack_6 = (writer->klass->vtable).WriteValue_1.methodPtr;
      (*(code *)(writer->klass->vtable).WriteValue.method)(writer,uVar19);
      return;
    }
  }
  pIStack_6 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._culture;
  if (pCVar1 == (CultureInfo *)0x0) {
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._dateTimeFormat;
  if (pSVar1 == (String *)0x0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
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
  return;
}

