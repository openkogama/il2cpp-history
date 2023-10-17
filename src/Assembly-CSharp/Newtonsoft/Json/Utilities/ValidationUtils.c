
/* Void ArgumentConditionTrue(Boolean, String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentConditionTrue
               (bool condition,String *parameterName,String *message,MethodInfo *method)

{
  if (condition != 0) {
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar1);
  func_?(this);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
            (this,message,parameterName,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentConditionTrue_bool__System__String__System__String_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ArgumentIsPositive(Int32, String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentIsPositive
               (int32_t value,String *parameterName,String *message,MethodInfo *method)

{
  if (value < 1) {
    return;
  }
  uVar1 = func_?(&TypeInfo__System__Int32,&value);
  actualValue = (Object *)func_?(uVar1);
  MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (parameterName,actualValue,message,(MethodInfo *)0x0);
  value = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentIsPositive_int__System__String__System__String_
                         );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ArgumentNotNegative(Int32, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNegative(int32_t value,String *parameterName,MethodInfo *method)

{
  if (0 < value) {
    return;
  }
  uVar1 = func_?(&TypeInfo__System__Int32,&value);
  actualValue = (Object *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Argument_cannot_be_negative_);
  MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (parameterName,actualValue,message,method_00);
  value = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNegative_int__System__String_
                         );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ArgumentNotNegative(Int32, String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNegative_1
               (int32_t value,String *parameterName,String *message,MethodInfo *method)

{
  if (0 < value) {
    return;
  }
  uVar1 = func_?(&TypeInfo__System__Int32,&value);
  actualValue = (Object *)func_?(uVar1);
  MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (parameterName,actualValue,message,(MethodInfo *)0x0);
  value = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNegative_int__System__String__System__String_
                         );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ArgumentNotNull(Object, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNull(Object *value,String *parameterName,MethodInfo *method)

{
  if (value != (Object *)0x0) {
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar1);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,parameterName,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?(this);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ArgumentNotNullOrEmpty(String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmpty(String *value,String *parameterName,MethodInfo *method)

{
  if (value != (String *)0x0) {
    if ((value->fields)._stringLength != 0) {
      return;
    }
    uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar1);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar1 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar1);
    func_?(args);
    func_?(args,parameterName);
    func_?(0,parameterName);
    method_00 = (MethodInfo *)0x0;
    pSVar2 = (String *)func_?(&StringLiteral___0___cannot_be_empty_);
    pSVar2 = StringUtils::StringUtils_FormatWith(pSVar2,(IFormatProvider *)provider,args,method_00);
    uVar1 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar1);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
              (this,pSVar2,parameterName,(MethodInfo *)0x0);
    parameterName =
         (String *)
         func_?(&
                         MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty_System__String__System__String_
                        );
    func_?();
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,parameterName,(MethodInfo *)0x0);
  uVar1 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty_System__String__System__String_
                         );
  func_?(this_00,uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ArgumentNotNullOrEmptyOrWhitespace(String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmptyOrWhitespace
               (String *value,String *parameterName,MethodInfo *method)

{
  if (value != (String *)0x0) {
    if ((value->fields)._stringLength != 0) {
      bVar1 = StringUtils::StringUtils_IsWhiteSpace(value,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar2);
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      uVar2 = func_?(&TypeInfo__System__Object,1);
      pOVar4 = (Object__Array *)func_?(uVar2);
      func_?(pOVar4);
      func_?(pOVar4,parameterName);
      func_?(0,parameterName);
      pMVar5 = (MethodInfo *)0x0;
      pSVar6 = (String *)func_?(&StringLiteral___0___cannot_only_be_whitespace_);
      pSVar6 = StringUtils::StringUtils_FormatWith(pSVar6,(IFormatProvider *)pCVar3,pOVar4,pMVar5);
      uVar2 = func_?(&TypeInfo__System__ArgumentException);
      pAVar7 = (ArgumentException *)func_?(uVar2);
      func_?(pAVar7);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
                (pAVar7,pSVar6,parameterName,(MethodInfo *)0x0);
      func_?(&
                      MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmptyOrWhitespace_System__String__System__String_
                     );
      parameterName = (String *)&UNK_?;
      func_?();
    }
    uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar2);
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__Object,1);
    pOVar4 = (Object__Array *)func_?(uVar2);
    func_?(pOVar4);
    func_?(pOVar4,parameterName);
    func_?(0,parameterName);
    pMVar5 = (MethodInfo *)0x0;
    pSVar6 = (String *)func_?(&StringLiteral___0___cannot_be_empty_);
    pSVar6 = StringUtils::StringUtils_FormatWith(pSVar6,(IFormatProvider *)pCVar3,pOVar4,pMVar5);
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    pAVar7 = (ArgumentException *)func_?(uVar2);
    func_?(pAVar7);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
              (pAVar7,pSVar6,parameterName,(MethodInfo *)0x0);
    parameterName =
         (String *)
         func_?(&
                         MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty_System__String__System__String_
                        );
    func_?();
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar2);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,parameterName,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty_System__String__System__String_
                         );
  func_?(this,uVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ArgumentNotNullOrEmpty(ICollection, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmpty_1
               (ICollection *collection,String *parameterName,MethodInfo *method)

{
  paramName = parameterName;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Collection___0___cannot_be_empty);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  if (args == (Object__Array *)0x0) goto code_?;
  if (parameterName == (String *)0x0) {
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)parameterName;
    func_?(args->vector,parameterName);
    format = StringLiteral_Collection___0___cannot_be_empty;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_format);
      cRam_? = '\x01';
    }
    parameterName = StringLiteral_format;
    if (format != (String *)0x0) {
      unaff_EBX = mscorlib.dll::System::String::String_Format_7
                            ((IFormatProvider *)provider,format,args,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Collections__ICollection);
        cRam_? = '\x01';
      }
      if (collection != (ICollection *)0x0) {
        iVar1 = func_?(1,TypeInfo__System__Collections__ICollection,collection);
        if (iVar1 != 0) {
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    iVar1 = func_?(parameterName,(args->klass->_0).element_class);
    if (iVar1 != 0) goto code_?;
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    func_?();
code_?:
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
              (this,unaff_EBX,paramName,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty_System__Collections__ICollection__System__String__System__String_
                   );
    func_?();
code_?:
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar3 = (ArgumentNullException *)func_?(uVar2);
    func_?(pAVar3);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar3,paramName,(MethodInfo *)0x0);
    parameterName =
         (String *)
         func_?(&
                         MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty_System__Collections__ICollection__System__String__System__String_
                        );
    func_?();
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar3 = (ArgumentNullException *)func_?(uVar2);
  func_?(pAVar3);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar3,parameterName,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(pAVar3,uVar2);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ArgumentNotNullOrEmpty(ICollection, String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmpty_2
               (ICollection *collection,String *parameterName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__ICollection);
    cRam_? = '\x01';
  }
  if (collection != (ICollection *)0x0) {
    iVar1 = func_?(1,TypeInfo__System__Collections__ICollection,collection);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
              (this,message,parameterName,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty_System__Collections__ICollection__System__String__System__String_
                   );
    func_?();
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar2);
  func_?(this_00);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,parameterName,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty_System__Collections__ICollection__System__String__System__String_
                 );
  func_?(this_00);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ArgumentNotNullOrEmpty[Object](ICollection`1[System.Object], String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmpty_3
               (ICollection_1_System_Object_ *collection,String *parameterName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Collection___0___cannot_be_empty);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    if (parameterName != (String *)0x0) {
      iVar2 = func_?(parameterName,(args->klass->_0).element_class);
      if (iVar2 == 0) goto code_?;
    }
    if (args->max_length != 0) {
      args->vector[0] = (Object *)parameterName;
      func_?(args->vector,parameterName);
      pSVar3 = StringUtils::StringUtils_FormatWith
                         (StringLiteral_Collection___0___cannot_be_empty,(IFormatProvider *)provider
                          ,args,(MethodInfo *)0x0);
      (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                (collection,parameterName,pSVar3,((method->field7_0x1c).rgctx_data)->method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ArgumentNotNullOrEmpty[Object](ICollection`1[System.Object], String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotNullOrEmpty_4
               (ICollection_1_System_Object_ *collection,String *parameterName,String *message,
               MethodInfo *method)

{
  if (collection != (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    uVar2 = 0;
    uVar3 = (collection->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (collection->klass->interfaceOffsets[uVar2].interfaceType == pIVar1) {
          pVVar4 = &(collection->klass->vtable).get_Count +
                   collection->klass->interfaceOffsets[uVar2].offset;
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    pVVar4 = (VirtualInvokeData *)func_?(collection,pIVar1,0);
code_?:
    iVar5 = (*pVVar4->methodPtr)(collection,pVVar4->method);
    if (iVar5 != 0) {
      return;
    }
    uVar6 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar6);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
              (this,message,parameterName,(MethodInfo *)0x0);
    func_?(&
                    void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Object>_System__Collections__Generic__ICollection<System::Object>__System__String__System__String_
                   );
    func_?();
  }
  uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar6);
  func_?(this_00);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,parameterName,(MethodInfo *)0x0);
  func_?(&
                  void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Object>_System__Collections__Generic__ICollection<System::Object>__System__String__System__String_
                 );
  func_?(this_00);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ArgumentNotZero(Int32, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotZero(int32_t value,String *parameterName,MethodInfo *method)

{
  if (value != 0) {
    return;
  }
  value = 0;
  uVar1 = func_?(&TypeInfo__System__Int32,&value);
  actualValue = (Object *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Argument_cannot_be_zero_);
  MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (parameterName,actualValue,message,method_00);
  value = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotZero_int__System__String_
                         );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ArgumentNotZero(Int32, String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentNotZero_1
               (int32_t value,String *parameterName,String *message,MethodInfo *method)

{
  if (value != 0) {
    return;
  }
  value = 0;
  uVar1 = func_?(&TypeInfo__System__Int32,&value);
  actualValue = (Object *)func_?(uVar1);
  MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
            (parameterName,actualValue,message,(MethodInfo *)0x0);
  value = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotZero_int__System__String__System__String_
                         );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ArgumentTypeIsEnum(Type, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ArgumentTypeIsEnum(Type *enumType,String *parameterName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_enumType);
    cRam_? = '\x01';
  }
  this = (ArgumentException *)StringLiteral_enumType;
  if (enumType != (Type *)0x0) {
    cVar1 = (*(enumType->klass->vtable).get_IsEnum.methodPtr)
                      (enumType,(enumType->klass->vtable).get_IsEnum.method);
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar2);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar2);
    func_?(args);
    func_?(args,enumType);
    func_?(0,enumType);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Type__0__is_not_an_Enum_);
    pSVar3 = StringUtils::StringUtils_FormatWith(pSVar3,(IFormatProvider *)provider,args,method_00);
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
              (this,pSVar3,parameterName,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentTypeIsEnum_System__Type__System__String_
                   );
    func_?();
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar2);
  func_?(this_00);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,(String *)this,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this_00,uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ObjectNotDisposed(Boolean, Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ValidationUtils::
     ValidationUtils_ObjectNotDisposed(bool disposed,Type *objectType,MethodInfo *method)

{
  if (disposed == 0) {
    return;
  }
  func_?(objectType);
  objectName = (String *)func_?(7,objectType);
  uVar1 = func_?(&TypeInfo__System__ObjectDisposedException);
  this = (ObjectDisposedException *)func_?(uVar1);
  func_?(this);
  mscorlib.dll::System::ObjectDisposedException::ObjectDisposedException__ctor_1
            (this,objectName,(MethodInfo *)0x0);
  uVar1 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ObjectNotDisposed_bool__System__Type_
                         );
  func_?(this,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

