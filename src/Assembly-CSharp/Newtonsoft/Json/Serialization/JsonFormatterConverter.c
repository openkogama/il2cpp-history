
/* Object Convert(Object, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_Convert
                   (JsonFormatterConverter *this,Object *value,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value != (Object *)0x0) {
    if (((TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth <=
         (value->klass->_1).typeHierarchyDepth) &&
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
      this_00 = (this->fields)._serializer;
      reader = Linq::JToken::JToken_CreateReader((JToken *)value,(MethodInfo *)0x0);
      if (this_00 != (JsonSerializer *)0x0) {
        pOVar1 = JsonSerializer::JsonSerializer_Deserialize_2(this_00,reader,type,(MethodInfo *)0x0)
        ;
        return pOVar1;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentException);
  this_01 = (ArgumentException *)func_?(uVar2);
  func_?(this_01);
  paramName = (String *)func_?(&StringLiteral_value);
  message = (String *)func_?(&StringLiteral_Value_is_not_a_JToken_);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
            (this_01,message,paramName,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__Convert_System__Object__System__Type_
                 );
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}


/* Object Convert(Object, TypeCode) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_Convert_1
                   (JsonFormatterConverter *this,Object *value,TypeCode__Enum typeCode,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value != (Object *)0x0) {
    pOVar1 = value->klass;
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pOVar1->_1).typeHierarchyDepth) &&
       ((pOVar1->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      if (((pOVar1->_1).typeHierarchyDepth <
           (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
         ((pOVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?(value,TypeInfo__Newtonsoft__Json__Linq__JValue);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      value = (Object *)value[5].klass;
    }
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar3 = mscorlib.dll::System::Convert::Convert_ChangeType
                     (value,typeCode,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pOVar3;
}


/* Boolean GetTokenValue[Boolean](Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
     JsonFormatterConverter_GetTokenValue
               (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      pbVar3 = (bool *)func_?();
      return *pbVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Byte GetTokenValue[Byte](Object) */

uint8_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_GetTokenValue_1
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      puVar3 = (uint8_t *)func_?();
      return *puVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  uVar5 = (*pcVar4)();
  return uVar5;
}


/* SByte GetTokenValue[SByte](Object) */

int8_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
       JsonFormatterConverter_GetTokenValue_10
                 (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      piVar3 = (int8_t *)func_?();
      return *piVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Single GetTokenValue[Single](Object) */

float Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
      JsonFormatterConverter_GetTokenValue_11
                (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      pfVar3 = (float *)func_?();
      return *pfVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* UInt16 GetTokenValue[UInt16](Object) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_12
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      puVar3 = (uint16_t *)func_?();
      return *puVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  uVar5 = (*pcVar4)();
  return uVar5;
}


/* UInt32 GetTokenValue[UInt32](Object) */

uint32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_13
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      puVar3 = (uint32_t *)func_?();
      return *puVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  uVar5 = (*pcVar4)();
  return uVar5;
}


/* UInt64 GetTokenValue[UInt64](Object) */

uint64_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_14
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      puVar3 = (uint64_t *)func_?();
      return *puVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  uVar5 = (*pcVar4)();
  return uVar5;
}


/* Char GetTokenValue[Char](Object) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_2
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      puVar3 = (uint16_t *)func_?();
      return *puVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  uVar5 = (*pcVar4)();
  return uVar5;
}


/* DateTime GetTokenValue[DateTime](Object) */

DateTime Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_3
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      puVar3 = (uint64_t *)func_?();
      return (DateTime)*puVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  DVar5._dateData = (*pcVar4)();
  return (DateTime)DVar5._dateData;
}


/* Decimal GetTokenValue[Decimal](Object) */

Decimal * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
          JsonFormatterConverter_GetTokenValue_4
                    (Decimal *__return_storage_ptr__,JsonFormatterConverter *this,Object *value,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      puVar3 = (undefined4 *)func_?();
      uRam_? = *puVar3;
      uRam_? = puVar3[1];
      uRam_? = puVar3[2];
      uRam_? = puVar3[3];
      return (Decimal *)0x0;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  pDVar5 = (Decimal *)(*pcVar4)();
  return pDVar5;
}


/* Double GetTokenValue[Double](Object) */

double Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
       JsonFormatterConverter_GetTokenValue_5
                 (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      pdVar3 = (double *)func_?();
      return *pdVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (double)fVar5;
}


/* Int16 GetTokenValue[Int16](Object) */

int16_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_GetTokenValue_6
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      piVar3 = (int16_t *)func_?();
      return *piVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Int32 GetTokenValue[Int32](Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_GetTokenValue_7
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      piVar3 = (int32_t *)func_?();
      return *piVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Int64 GetTokenValue[Int64](Object) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
        JsonFormatterConverter_GetTokenValue_8
                  (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = mscorlib.dll::System::Convert::Convert_ChangeType_1
                      ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                       (MethodInfo *)0x0);
    pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == pIVar2->element_class) {
      piVar3 = (int64_t *)func_?();
      return *piVar3;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Object GetTokenValue[Object](Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_GetTokenValue_9
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_value);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Object *)0x0) {
    func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((value->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) goto code_?;
    value_00 = value[5].klass;
    handle = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    conversionType =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar2 = mscorlib.dll::System::Convert::Convert_ChangeType_1
                       ((Object *)value_00,conversionType,(IFormatProvider *)provider,
                        (MethodInfo *)0x0);
    value = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
    if (((uint)value[0x17].klass & 0x10000) == 0) {
      value = (Object *)func_?();
    }
    if (pOVar2 == (Object *)0x0) {
      return (Object *)0x0;
    }
    pOVar2 = (Object *)func_?();
    if (pOVar2 != (Object *)0x0) {
      return pOVar2;
    }
  }
  func_?();
  pJVar1 = extraout_EDX;
code_?:
  func_?(value,pJVar1);
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Boolean ToBoolean(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
     JsonFormatterConverter_ToBoolean(JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<bool>_System__Object_
                   );
    cRam_? = '\x01';
  }
  bVar1 = JsonFormatterConverter_GetTokenValue
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
    func_?(&
                    unsigned_char_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<unsigned_char>_System__Object_
                   );
    cRam_? = '\x01';
  }
  uVar1 = JsonFormatterConverter_GetTokenValue_1
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
    func_?(&
                    wchar_t_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<wchar_t>_System__Object_
                   );
    cRam_? = '\x01';
  }
  uVar1 = JsonFormatterConverter_GetTokenValue_2
                    (this,value,
                     wchar_t_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<wchar_t>_System__Object_
                    );
  return uVar1;
}


/* DateTime ToDateTime(Object) */

DateTime Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
         JsonFormatterConverter_ToDateTime
                   (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__DateTime_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<System::DateTime>_System__Object_
                   );
    cRam_? = '\x01';
  }
  DVar1 = JsonFormatterConverter_GetTokenValue_3
                    (this,value,
                     System__DateTime_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<System::DateTime>_System__Object_
                    );
  return (DateTime)DVar1._dateData;
}


/* Decimal ToDecimal(Object) */

Decimal * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
          JsonFormatterConverter_ToDecimal
                    (Decimal *__return_storage_ptr__,JsonFormatterConverter *this,Object *value,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Decimal_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<System::Decimal>_System__Object_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = JsonFormatterConverter_GetTokenValue_4
                     ((Decimal *)&stack0xffffffec,this,value,
                      System__Decimal_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<System::Decimal>_System__Object_
                     );
  iVar2 = pDVar1->hi;
  iVar3 = pDVar1->lo;
  iVar4 = pDVar1->mid;
  __return_storage_ptr__->flags = pDVar1->flags;
  __return_storage_ptr__->hi = iVar2;
  __return_storage_ptr__->lo = iVar3;
  __return_storage_ptr__->mid = iVar4;
  return __return_storage_ptr__;
}


/* Double ToDouble(Object) */

double Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonFormatterConverter::
       JsonFormatterConverter_ToDouble
                 (JsonFormatterConverter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    double_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<double>_System__Object_
                   );
    cRam_? = '\x01';
  }
  dVar1 = JsonFormatterConverter_GetTokenValue_5
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
    func_?(&
                    short_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<short>_System__Object_
                   );
    cRam_? = '\x01';
  }
  iVar1 = JsonFormatterConverter_GetTokenValue_6
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
    func_?(&
                    int_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<int>_System__Object_
                   );
    cRam_? = '\x01';
  }
  iVar1 = JsonFormatterConverter_GetTokenValue_7
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
    func_?(&
                    long_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<long>_System__Object_
                   );
    cRam_? = '\x01';
  }
  iVar1 = JsonFormatterConverter_GetTokenValue_8
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
    func_?(&
                    signed_char_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<signed_char>_System__Object_
                   );
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
    func_?(&
                    float_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<float>_System__Object_
                   );
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
    func_?(&
                    System__String_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<System::String>_System__Object_
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (String *)
           JsonFormatterConverter_GetTokenValue_9
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
    func_?(&
                    unsigned_short_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<unsigned_short>_System__Object_
                   );
    cRam_? = '\x01';
  }
  uVar1 = JsonFormatterConverter_GetTokenValue_12
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
    func_?(&
                    unsigned_int_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<unsigned_int>_System__Object_
                   );
    cRam_? = '\x01';
  }
  uVar1 = JsonFormatterConverter_GetTokenValue_13
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
    func_?(&
                    unsigned_long_MethodInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter__GetTokenValue<unsigned_long>_System__Object_
                   );
    cRam_? = '\x01';
  }
  uVar1 = JsonFormatterConverter_GetTokenValue_14
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
    func_?(&StringLiteral_serializer);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)serializer,StringLiteral_serializer,(MethodInfo *)0x0);
  (this->fields)._serializer = serializer;
  func_?(&this->fields,serializer);
  return;
}

