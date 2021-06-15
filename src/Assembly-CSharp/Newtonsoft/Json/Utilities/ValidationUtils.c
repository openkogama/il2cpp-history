
/* Void ArgumentConditionTrue(Boolean, String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentConditionTrue
               (bool condition,String *parameterName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (condition != 0) {
    return;
  }
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (this,message,parameterName,(MethodInfo *)0x0);
  func_?(this);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ArgumentIsPositive(Int32, String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentIsPositive
               (int32_t value,String *parameterName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < 1) {
    return;
  }
  actualValue = (Object *)func_?(TypeInfo__System__Int32,&value);
  MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (parameterName,actualValue,message,(MethodInfo *)0x0);
  parameterName =
       (String *)
       MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentIsPositive_int__System__String__System__String_
  ;
  value = 0;
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ArgumentNotNegative(Int32, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNegative(int32_t value,String *parameterName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (0 < value) {
    return;
  }
  actualValue = (Object *)func_?(TypeInfo__System__Int32,&value);
  MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (parameterName,actualValue,StringLiteral_Argument_cannot_be_negative_,(MethodInfo *)0x0)
  ;
  parameterName =
       (String *)
       MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNegative_int__System__String_
  ;
  value = 0;
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ArgumentNotNegative(Int32, String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNegative_1
               (int32_t value,String *parameterName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (0 < value) {
    return;
  }
  actualValue = (Object *)func_?(TypeInfo__System__Int32,&value);
  MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (parameterName,actualValue,message,(MethodInfo *)0x0);
  parameterName =
       (String *)
       MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNegative_int__System__String__System__String_
  ;
  value = 0;
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ArgumentNotNull(Object, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNull(Object *value,String *parameterName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    return;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,parameterName,(MethodInfo *)0x0);
  func_?(this,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ArgumentNotNullOrEmpty(String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmpty(String *value,String *parameterName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (String *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
    if (pIVar1 != (IList_1_VoxelHit_ *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    func_?(args,0);
    func_?(args,parameterName);
    func_?(0,parameterName);
    message = StringUtils::StringUtils_FormatWith
                        (StringLiteral___0___cannot_be_empty_,(IFormatProvider *)provider,args,
                         (MethodInfo *)0x0);
    this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
              (this,message,parameterName,(MethodInfo *)0x0);
    func_?();
    parameterName = (String *)this;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,parameterName,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty_System__String__System__String_
                 );
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ArgumentNotNullOrEmptyOrWhitespace(String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmptyOrWhitespace
               (String *value,String *parameterName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (String *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
    if (pIVar1 != (IList_1_VoxelHit_ *)0x0) {
      bVar2 = StringUtils::StringUtils_IsWhiteSpace(value,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pOVar4 = (Object__Array *)func_?(TypeInfo__System__Object,1);
      func_?(pOVar4,0);
      func_?(pOVar4,parameterName);
      func_?(0);
      pSVar5 = StringUtils::StringUtils_FormatWith
                         (StringLiteral___0___cannot_only_be_whitespace_,(IFormatProvider *)pCVar3,
                          pOVar4,(MethodInfo *)0x0);
      pAVar6 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
                (pAVar6,pSVar5,parameterName,(MethodInfo *)0x0);
      func_?();
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pOVar4 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    func_?(pOVar4,0);
    func_?(pOVar4,parameterName);
    func_?(0,parameterName);
    pSVar5 = StringUtils::StringUtils_FormatWith
                       (StringLiteral___0___cannot_be_empty_,(IFormatProvider *)pCVar3,pOVar4,
                        (MethodInfo *)0x0);
    pAVar6 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
              (pAVar6,pSVar5,parameterName,(MethodInfo *)0x0);
    func_?();
    parameterName = (String *)pAVar6;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,parameterName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty_System__String__System__String_
                 );
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ArgumentNotNullOrEmpty(ICollection, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmpty_1
               (ICollection *collection,String *parameterName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  message = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  if (args == (Object__Array *)0x0) goto code_?;
  if (parameterName == (String *)0x0) {
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)parameterName;
    message = (CultureInfo *)
              StringUtils::StringUtils_FormatWith
                        (StringLiteral_Collection___0___cannot_be_empty,(IFormatProvider *)message,
                         args,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (collection != (ICollection *)0x0) {
      iVar1 = func_?(0,TypeInfo__System__Collections__ICollection);
      if (iVar1 != 0) {
        return;
      }
      goto code_?;
    }
  }
  else {
    iVar1 = func_?(parameterName,(args->klass->_0).element_class);
    if (iVar1 != 0) goto code_?;
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    this = (ArgumentException *)func_?();
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
              (this,(String *)message,parameterName,(MethodInfo *)0x0);
    func_?();
  }
  this_00 = (ArgumentNullException *)func_?();
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,parameterName,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ArgumentNotNullOrEmpty(ICollection, String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmpty_2
               (ICollection *collection,String *parameterName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (collection != (ICollection *)0x0) {
    iVar1 = func_?(0,TypeInfo__System__Collections__ICollection,collection);
    if (iVar1 != 0) {
      return;
    }
    this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
              (this,message,parameterName,(MethodInfo *)0x0);
    func_?(this);
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,parameterName,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ArgumentNotNullOrEmpty[Object](ICollection`1[System.Object], String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmpty_4
               (ICollection_1_System_Object_ *collection,String *parameterName,String *message,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (collection != (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = *method->parameters;
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    iVar2 = func_?(0,pIVar1,collection);
    if (iVar2 != 0) {
      return;
    }
    this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
              (this,message,parameterName,(MethodInfo *)0x0);
    func_?(this);
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,parameterName,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ArgumentNotNullOrEmpty[Type](ICollection`1[System.Type], String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmpty_5
               (ICollection_1_System_Type_ *collection,String *parameterName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    if (parameterName != (String *)0x0) {
      iVar2 = func_?(parameterName,(args->klass->_0).element_class);
      if (iVar2 == 0) goto code_?;
    }
    if (args->max_length != 0) {
      args->vector[0] = (Object *)parameterName;
      pSVar3 = StringUtils::StringUtils_FormatWith
                         (StringLiteral_Collection___0___cannot_be_empty,(IFormatProvider *)provider
                          ,args,(MethodInfo *)0x0);
      (*(code *)(*method->parameters)->data)(collection,parameterName,pSVar3,*method->parameters);
      return;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ArgumentNotZero(Int32, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotZero(int32_t value,String *parameterName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != 0) {
    return;
  }
  value = 0;
  actualValue = (Object *)func_?(TypeInfo__System__Int32,&value);
  MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (parameterName,actualValue,StringLiteral_Argument_cannot_be_zero_,(MethodInfo *)0x0);
  parameterName =
       (String *)
       MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotZero_int__System__String_
  ;
  value = 0;
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ArgumentNotZero(Int32, String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotZero_1
               (int32_t value,String *parameterName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != 0) {
    return;
  }
  value = 0;
  actualValue = (Object *)func_?(TypeInfo__System__Int32,&value);
  MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (parameterName,actualValue,message,(MethodInfo *)0x0);
  parameterName =
       (String *)
       MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotZero_int__System__String__System__String_
  ;
  value = 0;
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ArgumentTypeIsEnum(Type, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentTypeIsEnum(Type *enumType,String *parameterName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ArgumentException *)StringLiteral_enumType;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (enumType != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsEnum(enumType,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    func_?(args,0);
    func_?(args,enumType);
    func_?(0,enumType);
    message = StringUtils::StringUtils_FormatWith
                        (StringLiteral_Type__0__is_not_an_Enum_,(IFormatProvider *)provider,args,
                         (MethodInfo *)0x0);
    this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
              (this,message,parameterName,(MethodInfo *)0x0);
    func_?();
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,(String *)this,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ObjectNotDisposed(Boolean, Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ObjectNotDisposed(bool disposed,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (disposed == 0) {
    return;
  }
  func_?(objectType,0);
  objectName = (String *)func_?(8,objectType);
  this = (ObjectDisposedException *)func_?(TypeInfo__System__ObjectDisposedException);
  mscorlib.dll::System::ObjectDisposedException::ObjectDisposedException__ctor
            (this,objectName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ObjectNotDisposed_bool__System__Type_
                 );
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

