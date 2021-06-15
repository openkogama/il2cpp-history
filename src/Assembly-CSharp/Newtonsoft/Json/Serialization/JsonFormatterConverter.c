
/* Object Convert(Object, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_Convert
                   (JsonFormatterConverter *this,Object *value,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value != (Object *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JToken->_1).naturalAligment;
    if (((value->klass->_1).naturalAligment < bVar1) ||
       ((value->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    this_02 = (JToken *)0x0;
    if (bVar2) {
      this_02 = (JToken *)value;
    }
    if (this_02 != (JToken *)0x0) {
      this_00 = (this->fields)._serializer;
      reader = Json::Linq::JToken::JToken_CreateReader(this_02,(MethodInfo *)0x0);
      if (this_00 != (JsonSerializer *)0x0) {
        pOVar3 = JsonSerializer::JsonSerializer_Deserialize_2(this_00,reader,type,(MethodInfo *)0x0)
        ;
        return pOVar3;
      }
      goto code_?;
    }
  }
  this_01 = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (this_01,StringLiteral_Value_is_not_a_JToken_,StringLiteral_value,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar4)();
  return pOVar3;
}


/* Object Convert(Object, TypeCode) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_Convert_1
                   (JsonFormatterConverter *this,Object *value,TypeCode__Enum typeCode,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value != (Object *)0x0) {
    pOVar1 = value->klass;
    bVar2 = (pOVar1->_1).naturalAligment;
    bVar3 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
    if ((bVar2 < bVar3) ||
       ((pOVar1->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pOVar5 = (Object *)0x0;
    if (bVar4) {
      pOVar5 = value;
    }
    if (pOVar5 != (Object *)0x0) {
      bVar3 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
      if ((bVar2 < bVar3) ||
         ((pOVar1->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pOVar5 = (Object *)0x0;
      if (bVar4) {
        pOVar5 = value;
      }
      if (pOVar5 != (Object *)0x0) {
        if ((bVar2 < bVar3) ||
           ((pOVar1->_1).typeHierarchy[bVar3 - 1] !=
            (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0;
        if (bVar4) {
          this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)value;
        }
        if (this_00 != (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) {
          value = (Object *)
                  ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                  NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
      pcVar6 = (code *)swi(3);
      pOVar5 = (Object *)(*pcVar6)();
      return pOVar5;
    }
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar5 = mscorlib.dll::System::Convert::Convert_ChangeType_2
                     (value,typeCode,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pOVar5;
}


/* Boolean GetTokenValue[Boolean](Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
     JsonFormatterConverter_GetTokenValue_1
               (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        pbVar2 = (bool *)func_?(value);
        return *pbVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* SByte GetTokenValue[SByte](Object) */

int8_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
       JsonFormatterConverter_GetTokenValue_10
                 (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        piVar2 = (int8_t *)func_?(value);
        return *piVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Single GetTokenValue[Single](Object) */

float Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
      JsonFormatterConverter_GetTokenValue_11
                (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        pfVar2 = (float *)func_?(value);
        return *pfVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* String GetTokenValue[String](Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_12
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value == (Object *)0x0) {
    func_?(0);
  }
  else {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    pJVar1 = (JValue__Class *)
             mscorlib.dll::System::Convert::Convert_ChangeType_1
                       ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                        (MethodInfo *)0x0);
    value = (Object *)method->parameters[1];
    if ((((Il2CppType *)(value + 0x17))->type & 1) == 0) {
      func_?();
    }
    if (pJVar1 == (JValue__Class *)0x0) {
      return (String *)0x0;
    }
    pSVar2 = (String *)func_?();
    if (pSVar2 != (String *)0x0) {
      return pSVar2;
    }
  }
  func_?();
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* UInt16 GetTokenValue[UInt16](Object) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_13
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        puVar2 = (uint16_t *)func_?(value);
        return *puVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}


/* UInt32 GetTokenValue[UInt32](Object) */

uint32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_14
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        puVar2 = (uint32_t *)func_?(value);
        return *puVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}


/* UInt64 GetTokenValue[UInt64](Object) */

uint64_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_15
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        puVar2 = (uint64_t *)func_?(value);
        return *puVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}


/* Byte GetTokenValue[Byte](Object) */

uint8_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_GetTokenValue_2
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        puVar2 = (uint8_t *)func_?(value);
        return *puVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}


/* Char GetTokenValue[Char](Object) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_3
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        puVar2 = (uint16_t *)func_?(value);
        return *puVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}


/* DateTime GetTokenValue[DateTime](Object) */

DateTime *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
JsonFormatterConverter_GetTokenValue_4
          (DateTime *__return_storage_ptr__,JsonFormatterConverter *this,Object *value,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar2 = (DateTime *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)0x0,(Type *)pDVar2,(IFormatProvider *)provider,(MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        puVar3 = (undefined4 *)func_?(value);
        pMVar4 = (MonitorData *)puVar3[1];
        pvVar5 = (void *)puVar3[2];
        uVar6 = puVar3[3];
        *(Type__Class **)&(pDVar2->ticks)._ticks = (Type__Class *)*puVar3;
        *(MonitorData **)((int)&(pDVar2->ticks)._ticks + 4) = pMVar4;
        (((Type__Fields *)&pDVar2->kind)->_impl).value = pvVar5;
        *(undefined4 *)&pDVar2->field_0xc = uVar6;
        return pDVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar7 = (code *)swi(3);
  pDVar2 = (DateTime *)(*pcVar7)();
  return pDVar2;
}


/* Decimal GetTokenValue[Decimal](Object) */

Decimal * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
          JsonFormatterConverter_GetTokenValue_5
                    (Decimal *__return_storage_ptr__,JsonFormatterConverter *this,Object *value,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar2 = (Decimal *)mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)0x0,(Type *)pDVar2,(IFormatProvider *)provider,(MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        puVar3 = (undefined4 *)func_?(value);
        pMVar4 = (MonitorData *)puVar3[1];
        pvVar5 = (void *)puVar3[2];
        uVar6 = puVar3[3];
        pDVar2->flags = (uint32_t)*puVar3;
        pDVar2->hi = (uint32_t)pMVar4;
        (((Type__Fields *)&pDVar2->lo)->_impl).value = pvVar5;
        pDVar2->mid = uVar6;
        return pDVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar7 = (code *)swi(3);
  pDVar2 = (Decimal *)(*pcVar7)();
  return pDVar2;
}


/* Double GetTokenValue[Double](Object) */

double Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
       JsonFormatterConverter_GetTokenValue_6
                 (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        pdVar2 = (double *)func_?(value);
        return *pdVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (double)fVar4;
}


/* Int16 GetTokenValue[Int16](Object) */

int16_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_GetTokenValue_7
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        piVar2 = (int16_t *)func_?(value);
        return *piVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 GetTokenValue[Int32](Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_GetTokenValue_8
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        piVar2 = (int32_t *)func_?(value);
        return *piVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int64 GetTokenValue[Int64](Object) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_GetTokenValue_9
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  if (value != (Object *)0x0) {
    this_00 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
              func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (this_00 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
    NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_00,(MethodInfo *)0x0);
    handle.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    conversionType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)value_00,
                       (MethodInfo *)0x0);
    pJVar1 = (JValue__Class *)method->parameters[1];
    if (((uint)(pJVar1->vtable).Equals.methodPtr & 0x10000) == 0) {
      func_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (pJVar1->_0).element_class) {
        piVar2 = (int64_t *)func_?(value);
        return *piVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean ToBoolean(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
     JsonFormatterConverter_ToBoolean(JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = JsonFormatterConverter_GetTokenValue_1
                    (this,value,
                     bool_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<bool>_System__Object_
                    );
  return bVar1;
}


/* Byte ToByte(Object) */

uint8_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_ToByte(JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = JsonFormatterConverter_GetTokenValue_2
                    (this,value,
                     unsigned_char_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<unsigned_char>_System__Object_
                    );
  return uVar1;
}


/* Char ToChar(Object) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_ToChar
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = JsonFormatterConverter_GetTokenValue_3
                    (this,value,
                     wchar_t_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<wchar_t>_System__Object_
                    );
  return uVar1;
}


/* DateTime ToDateTime(Object) */

DateTime *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
JsonFormatterConverter_ToDateTime
          (DateTime *__return_storage_ptr__,JsonFormatterConverter *this,Object *value,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = JsonFormatterConverter_GetTokenValue_4
                     (&DStack_2,this,value,
                      System__DateTime_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<System::DateTime>_System__Object_
                     );
  uVar3 = *(undefined4 *)((int)&(pDVar1->ticks)._ticks + 4);
  iVar4 = pDVar1->kind;
  uVar5 = *(undefined4 *)&pDVar1->field_0xc;
  *(int *)&(__return_storage_ptr__->ticks)._ticks = (int)(pDVar1->ticks)._ticks;
  *(undefined4 *)((int)&(__return_storage_ptr__->ticks)._ticks + 4) = uVar3;
  __return_storage_ptr__->kind = iVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
  return __return_storage_ptr__;
}


/* Decimal ToDecimal(Object) */

Decimal * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
          JsonFormatterConverter_ToDecimal
                    (Decimal *__return_storage_ptr__,JsonFormatterConverter *this,Object *value,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = JsonFormatterConverter_GetTokenValue_5
                     (&DStack_2,this,value,
                      System__Decimal_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<System::Decimal>_System__Object_
                     );
  uVar3 = pDVar1->hi;
  uVar4 = pDVar1->lo;
  uVar5 = pDVar1->mid;
  __return_storage_ptr__->flags = pDVar1->flags;
  __return_storage_ptr__->hi = uVar3;
  __return_storage_ptr__->lo = uVar4;
  __return_storage_ptr__->mid = uVar5;
  return __return_storage_ptr__;
}


/* Double ToDouble(Object) */

double Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
       JsonFormatterConverter_ToDouble
                 (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  dVar1 = JsonFormatterConverter_GetTokenValue_6
                    (this,value,
                     double_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<double>_System__Object_
                    );
  return dVar1;
}


/* Int16 ToInt16(Object) */

int16_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_ToInt16
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = JsonFormatterConverter_GetTokenValue_7
                    (this,value,
                     short_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<short>_System__Object_
                    );
  return iVar1;
}


/* Int32 ToInt32(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_ToInt32
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = JsonFormatterConverter_GetTokenValue_8
                    (this,value,
                     int_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<int>_System__Object_
                    );
  return iVar1;
}


/* Int64 ToInt64(Object) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_ToInt64
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = JsonFormatterConverter_GetTokenValue_9
                    (this,value,
                     long_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<long>_System__Object_
                    );
  return iVar1;
}


/* SByte ToSByte(Object) */

int8_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
       JsonFormatterConverter_ToSByte(JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = JsonFormatterConverter_GetTokenValue_10
                    (this,value,
                     signed_char_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<signed_char>_System__Object_
                    );
  return iVar1;
}


/* Single ToSingle(Object) */

float Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
      JsonFormatterConverter_ToSingle(JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = JsonFormatterConverter_GetTokenValue_11
                    (this,value,
                     float_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<float>_System__Object_
                    );
  return fVar1;
}


/* String ToString(Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_ToString
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = JsonFormatterConverter_GetTokenValue_12
                     (this,value,
                      System__String_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<System::String>_System__Object_
                     );
  return pSVar1;
}


/* UInt16 ToUInt16(Object) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_ToUInt16
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = JsonFormatterConverter_GetTokenValue_13
                    (this,value,
                     unsigned_short_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<unsigned_short>_System__Object_
                    );
  return uVar1;
}


/* UInt32 ToUInt32(Object) */

uint32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_ToUInt32
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = JsonFormatterConverter_GetTokenValue_14
                    (this,value,
                     unsigned_int_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<unsigned_int>_System__Object_
                    );
  return uVar1;
}


/* UInt64 ToUInt64(Object) */

uint64_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_ToUInt64
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = JsonFormatterConverter_GetTokenValue_15
                    (this,value,
                     unsigned_long_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<unsigned_long>_System__Object_
                    );
  return uVar1;
}


/* JsonFormatterConverter(JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
     JsonFormatterConverter__ctor
               (JsonFormatterConverter *this,JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)serializer,StringLiteral_serializer,(MethodInfo *)0x0);
  (this->fields)._serializer = serializer;
  return;
}

