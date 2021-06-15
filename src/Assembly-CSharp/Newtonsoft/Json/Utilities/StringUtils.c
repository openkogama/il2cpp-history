
/* Void ActionTextReaderLine(TextReader, TextWriter, StringUtils+ActionLine) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_ActionTextReaderLine
               (TextReader *textReader,TextWriter *textWriter,StringUtils_ActionLine *lineAction,
               MethodInfo *method)

{
  bVar1 = true;
  if (textReader == (TextReader *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    line = (String *)
           (*(code *)(textReader->klass->vtable).ReadLine.method)
                     (textReader,(textReader->klass->vtable).ReadToEnd.methodPtr);
    if (line == (String *)0x0) {
      return;
    }
    if (bVar1) {
      bVar1 = false;
    }
    else {
      if (textWriter == (TextWriter *)0x0) goto code_?;
      func_?(0x10,textWriter);
    }
    if (lineAction == (StringUtils_ActionLine *)0x0) goto code_?;
    StringUtils+ActionLine::StringUtils_ActionLine_Invoke
              (lineAction,textWriter,line,(MethodInfo *)0x0);
  } while( true );
}


/* Boolean ContainsWhiteSpace(String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_ContainsWhiteSpace
               (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (s != (String *)0x0) {
    index = 0;
    while( true ) {
      pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)s,(MethodInfo *)0x0);
      if ((int)pIVar1 <= index) {
        return 0;
      }
      c = mscorlib.dll::System::String::String_get_Chars(s,index,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Char->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
      if (bVar2 != 0) break;
      index = index + 1;
    }
    return 1;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,StringLiteral_s,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ContainsWhiteSpace_System__String_
                 );
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* StringWriter CreateStringWriter(Int32) */

StringWriter *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_CreateStringWriter
          (int32_t capacity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_3(this,capacity,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  formatProvider =
       mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                 ((MethodInfo *)0x0);
  this_00 = (StringWriter *)func_?(TypeInfo__System__IO__StringWriter);
  mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_3
            (this_00,this,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
  return this_00;
}


/* String EnsureEndsWith(String, String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_EnsureEndsWith
                   (String *target,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (target == (String *)0x0) {
    this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    pSVar1 = StringLiteral_target;
  }
  else {
    if (value != (String *)0x0) {
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)target,(MethodInfo *)0x0);
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
      if ((int)pIVar2 < (int)pIVar3) {
code_?:
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar1 = mscorlib.dll::System::String::String_Concat_2(target,value,(MethodInfo *)0x0);
        return pSVar1;
      }
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)target,(MethodInfo *)0x0);
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
      pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      iVar5 = mscorlib.dll::System::String::String_Compare_6
                        (target,(int)pIVar2 - (int)pIVar3,value,0,(int32_t)pIVar4,
                         StringComparison__Enum_OrdinalIgnoreCase,(MethodInfo *)0x0);
      if (iVar5 == 0) {
        return target;
      }
      this = (Collection_1_VoxelHit_ *)
             mscorlib.dll::System::String::String_TrimEnd
                       (target,(Char__Array *)0x0,(MethodInfo *)0x0);
      if (this != (Collection_1_VoxelHit_ *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this,(MethodInfo *)0x0);
        pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0)
        ;
        pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0)
        ;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        iVar5 = mscorlib.dll::System::String::String_Compare_6
                          ((String *)this,(int)pIVar2 - (int)pIVar3,value,0,(int32_t)pIVar4,
                           StringComparison__Enum_OrdinalIgnoreCase,(MethodInfo *)0x0);
        if (iVar5 == 0) {
          return target;
        }
        goto code_?;
      }
      func_?();
    }
    this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    pSVar1 = StringLiteral_value;
  }
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,pSVar1,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__Newtonsoft__Json__Utilities__StringUtils__EnsureEndsWith_System__String__System__String_
                 );
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* Object ForgivingCaseSensitiveFind[Object](IEnumerable`1[System.Object], Func`2[Object,String],
   String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::
         StringUtils_ForgivingCaseSensitiveFind
                   (IEnumerable_1_System_Object_ *source,Func_2_Object_String_ *valueSelector,
                   String *testValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(iVar2,method->parameters[1]);
  if (iVar2 == 0) {
code_?:
    func_?(0);
  }
  else {
    *(Func_2_Object_String_ **)(iVar2 + 8) = valueSelector;
    *(String **)(iVar2 + 0xc) = testValue;
    if (source == (IEnumerable_1_System_Object_ *)0x0) {
      this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
      paramName = StringLiteral_source;
      goto code_?;
    }
    if (valueSelector != (Func_2_Object_String_ *)0x0) {
      pIVar1 = method->parameters[3];
      if ((pIVar1[0x17].type & 1) == 0) {
        func_?(pIVar1);
      }
      uVar3 = func_?(pIVar1);
      pIVar1 = method->parameters[4];
      (*(code *)pIVar1->data)(uVar3,iVar2,method->parameters[2],pIVar1);
      uVar3 = (*(code *)method->parameters[5]->data)(source,uVar3,method->parameters[5]);
      iVar4 = (*(code *)method->parameters[6]->data)(uVar3,method->parameters[6]);
      if (iVar4 != 0) {
        if (1 < *(int *)(iVar4 + 0xc)) {
          pIVar1 = method->parameters[3];
          if ((pIVar1[0x17].type & 1) == 0) {
            func_?(pIVar1);
          }
          uVar3 = func_?(pIVar1);
          pIVar1 = method->parameters[4];
          (*(code *)pIVar1->data)(uVar3,iVar2,method->parameters[7],pIVar1);
          uVar3 = (*(code *)method->parameters[5]->data)(source,uVar3,method->parameters[5]);
          pOVar5 = (Object *)(*(code *)method->parameters[8]->data)(uVar3,method->parameters[8]);
          return pOVar5;
        }
        if (*(int *)(iVar4 + 0xc) != 1) {
          return (Object *)0x0;
        }
        pOVar5 = (Object *)func_?(0);
        return pOVar5;
      }
      goto code_?;
    }
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  paramName = StringLiteral_valueSelector;
code_?:
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  System__Object_MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ForgivingCaseSensitiveFind<System::Object>_System__Collections__Generic__IEnumerable<System::Object>__System__Func<System::Object,_System::String>__System__String_
                 );
  pcVar6 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar6)();
  return pOVar5;
}


/* KeyValuePair`2[System.Object,System.Object]
   ForgivingCaseSensitiveFind[KeyValuePair`2[System.Object,System.Object]](IEnumerable`1[KeyValuePair`2[System.Object,System.Object]],
   Func`2[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],String], String) */

KeyValuePair_2_System_Object_System_Object_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::
StringUtils_ForgivingCaseSensitiveFind_2
          (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *source,
          Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_String_
          *valueSelector,String *testValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(iVar2,method->parameters[1]);
  if (iVar2 == 0) {
code_?:
    func_?(0);
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    *(Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_String_ **)
     (iVar2 + 8) = valueSelector;
    *(String **)(iVar2 + 0xc) = testValue;
    if (source == (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
      this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
      paramName = StringLiteral_source;
      goto code_?;
    }
    if (valueSelector !=
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_String_ *)0x0)
    {
      pIVar1 = method->parameters[3];
      if ((pIVar1[0x17].type & 1) == 0) {
        func_?(pIVar1);
      }
      uVar3 = func_?(pIVar1);
      pIVar1 = method->parameters[4];
      (*(code *)pIVar1->data)(uVar3,iVar2,method->parameters[2],pIVar1);
      uVar3 = (*(code *)method->parameters[5]->data)(source,uVar3,method->parameters[5]);
      iVar4 = (*(code *)method->parameters[6]->data)(uVar3,method->parameters[6]);
      if (iVar4 != 0) {
        if (1 < *(int *)(iVar4 + 0xc)) {
          pIVar1 = method->parameters[3];
          if ((pIVar1[0x17].type & 1) == 0) {
            func_?(pIVar1);
          }
          uVar3 = func_?(pIVar1);
          pIVar1 = method->parameters[4];
          (*(code *)pIVar1->data)(uVar3,iVar2,method->parameters[7],pIVar1);
          uVar3 = (*(code *)method->parameters[5]->data)(source,uVar3,method->parameters[5]);
          KVar5 = (KeyValuePair_2_System_Object_System_Object_)
                  (*(code *)method->parameters[8]->data)(uVar3,method->parameters[8]);
          return KVar5;
        }
        if (*(int *)(iVar4 + 0xc) == 1) {
          return *(KeyValuePair_2_System_Object_System_Object_ *)(iVar4 + 0x10);
        }
        KVar5.key = (Object *)0x0;
        KVar5.value = (Object *)0x0;
        return KVar5;
      }
      goto code_?;
    }
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  paramName = StringLiteral_valueSelector;
code_?:
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  System__Collections__Generic__KeyValuePair<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ForgivingCaseSensitiveFind<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>_>__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_System::String>__System__String_
                 );
  pcVar6 = (code *)swi(3);
  KVar5 = (KeyValuePair_2_System_Object_System_Object_)(*pcVar6)();
  return KVar5;
}


/* String FormatWith(String, IFormatProvider, Object[]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_FormatWith
                   (String *format,IFormatProvider *provider,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_format;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (format != (String *)0x0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Format_4(provider,format,args,(MethodInfo *)0x0);
    return pSVar1;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,pSVar1,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* Nullable`1[Int32] GetLength(String) */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_GetLength
          (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (String *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
    NStack_2.value = 0;
    NStack_2.has_value = 0;
    NStack_2._5_3_ = 0;
    func_?(&NStack_2,pIVar1,MethodInfo__System__Nullable<int>__Nullable_int_);
    return NStack_2;
  }
  NVar3.value = 0;
  NVar3.has_value = 0;
  NVar3._5_3_ = 0;
  return NVar3;
}


/* Void IfNotNullOrEmpty(String, Action`1[String]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_IfNotNullOrEmpty
               (String *value,Action_1_String_ *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((bVar1 == 0) && (action != (Action_1_String_ *)0x0)) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
               action,(Dictionary_2_System_String_System_Object_ *)value,
               MethodInfo__System__Action<System::String>__Invoke_System__String_);
  }
  return;
}


/* Void IfNotNullOrEmpty(String, Action`1[String], Action`1[String]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_IfNotNullOrEmpty_1
               (String *value,Action_1_String_ *trueAction,Action_1_String_ *falseAction,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    falseAction = trueAction;
  }
  if (falseAction != (Action_1_String_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
               falseAction,(Dictionary_2_System_String_System_Object_ *)value,
               MethodInfo__System__Action<System::String>__Invoke_System__String_);
  }
  return;
}


/* String Indent(String, Int32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_Indent
                   (String *s,int32_t indentation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Utilities__StringUtils___Indent_c__AnonStorey0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this == (ScaleAnimationBase *)0x0) {
code_?:
    func_?(0);
  }
  else {
    *(undefined2 *)&(this->fields)._._._._.m_CachedPtr = 0x20;
    (this->fields).state = indentation;
    if (s == (String *)0x0) goto code_?;
    if (0 < indentation) {
      this_00 = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
      mscorlib.dll::System::IO::StringReader::StringReader__ctor(this_00,s,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      formatProvider =
           mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
      this_01 = (StringWriter *)func_?();
      mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
                (this_01,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
      lineAction = (StringUtils_ActionLine *)
                   func_?(TypeInfo__Newtonsoft__Json__Utilities__StringUtils__ActionLine);
      pMVar1 = 
      MethodInfo__Newtonsoft__Json__Utilities__StringUtils___Indent_c__AnonStorey0____m__0_System__IO__TextWriter__System__String_
      ;
      (lineAction->fields)._._.method_ptr =
           MethodInfo__Newtonsoft__Json__Utilities__StringUtils___Indent_c__AnonStorey0____m__0_System__IO__TextWriter__System__String_
           ->methodPointer;
      (lineAction->fields)._._.method = pMVar1;
      (lineAction->fields)._._.m_target = (Object *)this;
      StringUtils_ActionTextReaderLine
                ((TextReader *)this_00,(TextWriter *)this_01,lineAction,(MethodInfo *)0x0);
      if (this_01 != (StringWriter *)0x0) {
        pSVar2 = (String *)
                 (*(code *)(this_01->klass->vtable).ToString.method)
                           (this_01,(this_01->klass->vtable).Dispose.methodPtr);
        return pSVar2;
      }
      goto code_?;
    }
  }
  this_02 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (this_02,StringLiteral_Must_be_greater_than_zero_,StringLiteral_indentation,
             (MethodInfo *)0x0);
  func_?(this_02);
code_?:
  this_03 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_03,StringLiteral_s,(MethodInfo *)0x0);
  func_?(this_03,0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String Indent(String, Int32, Char) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_Indent_1
                   (String *s,int32_t indentation,uint16_t indentChar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Utilities__StringUtils___Indent_c__AnonStorey0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this == (ScaleAnimationBase *)0x0) {
code_?:
    func_?(0);
  }
  else {
    *(uint16_t *)&(this->fields)._._._._.m_CachedPtr = indentChar;
    (this->fields).state = indentation;
    if (s == (String *)0x0) goto code_?;
    if (0 < indentation) {
      this_00 = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
      mscorlib.dll::System::IO::StringReader::StringReader__ctor(this_00,s,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      formatProvider =
           mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
      this_01 = (StringWriter *)func_?();
      mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
                (this_01,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
      lineAction = (StringUtils_ActionLine *)
                   func_?(TypeInfo__Newtonsoft__Json__Utilities__StringUtils__ActionLine);
      pMVar1 = 
      MethodInfo__Newtonsoft__Json__Utilities__StringUtils___Indent_c__AnonStorey0____m__0_System__IO__TextWriter__System__String_
      ;
      (lineAction->fields)._._.method_ptr =
           MethodInfo__Newtonsoft__Json__Utilities__StringUtils___Indent_c__AnonStorey0____m__0_System__IO__TextWriter__System__String_
           ->methodPointer;
      (lineAction->fields)._._.method = pMVar1;
      (lineAction->fields)._._.m_target = (Object *)this;
      StringUtils_ActionTextReaderLine
                ((TextReader *)this_00,(TextWriter *)this_01,lineAction,(MethodInfo *)0x0);
      if (this_01 != (StringWriter *)0x0) {
        pSVar2 = (String *)
                 (*(code *)(this_01->klass->vtable).ToString.method)
                           (this_01,(this_01->klass->vtable).Dispose.methodPtr);
        return pSVar2;
      }
      goto code_?;
    }
  }
  this_02 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (this_02,StringLiteral_Must_be_greater_than_zero_,StringLiteral_indentation,
             (MethodInfo *)0x0);
  func_?(this_02);
code_?:
  this_03 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_03,StringLiteral_s,(MethodInfo *)0x0);
  func_?(this_03,0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Boolean IsNullOrEmptyOrWhiteSpace(String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::
     StringUtils_IsNullOrEmptyOrWhiteSpace(String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(s,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = StringUtils_IsWhiteSpace(s,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


/* Boolean IsWhiteSpace(String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_IsWhiteSpace
               (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (s != (String *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)s,(MethodInfo *)0x0);
    if (pIVar1 != (IList_1_VoxelHit_ *)0x0) {
      index = 0;
      while( true ) {
        pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)s,(MethodInfo *)0x0);
        if ((int)pIVar1 <= index) {
          return 1;
        }
        c = mscorlib.dll::System::String::String_get_Chars(s,index,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Char->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
        if (bVar2 == 0) break;
        index = index + 1;
      }
    }
    return 0;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,StringLiteral_s,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__StringUtils__IsWhiteSpace_System__String_
                 );
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* String NullEmptyString(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_NullEmptyString
                   (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(s,(MethodInfo *)0x0);
  pSVar2 = (String *)0x0;
  if (bVar1 == 0) {
    pSVar2 = s;
  }
  return pSVar2;
}


/* String NumberLines(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_NumberLines
                   (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Utilities__StringUtils___NumberLines_c__AnonStorey1;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (s == (String *)0x0) {
    this_02 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,StringLiteral_s,(MethodInfo *)0x0);
    func_?(this_02,0);
  }
  else {
    this_00 = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
    mscorlib.dll::System::IO::StringReader::StringReader__ctor(this_00,s,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    formatProvider =
         mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                   ((MethodInfo *)0x0);
    this_01 = (StringWriter *)func_?();
    mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
              (this_01,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
    if (this != (ScaleAnimationBase *)0x0) {
      (this->fields)._._._._.m_CachedPtr = (void *)0x1;
      pSStack1 = TypeInfo__Newtonsoft__Json__Utilities__StringUtils__ActionLine;
      lineAction = (StringUtils_ActionLine *)func_?();
      pMVar2 = 
      MethodInfo__Newtonsoft__Json__Utilities__StringUtils___NumberLines_c__AnonStorey1____m__0_System__IO__TextWriter__System__String_
      ;
      (lineAction->fields)._._.method_ptr =
           MethodInfo__Newtonsoft__Json__Utilities__StringUtils___NumberLines_c__AnonStorey1____m__0_System__IO__TextWriter__System__String_
           ->methodPointer;
      (lineAction->fields)._._.method = pMVar2;
      (lineAction->fields)._._.m_target = (Object *)this;
      StringUtils_ActionTextReaderLine
                ((TextReader *)this_00,(TextWriter *)this_01,lineAction,(MethodInfo *)0x0);
      if (this_01 != (StringWriter *)0x0) {
        pSStack1 =
             (StringUtils_ActionLine__Class *)(this_01->klass->vtable).Dispose.methodPtr;
        pSStack3 = this_01;
        pSVar4 = (String *)(*(code *)(this_01->klass->vtable).ToString.method)();
        return pSVar4;
      }
    }
  }
  pSStack1 = (StringUtils_ActionLine__Class *)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* String ReplaceNewLines(String, String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_ReplaceNewLines
                   (String *s,String *replacement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,s,(MethodInfo *)0x0);
  this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this_00,(MethodInfo *)0x0);
  bVar1 = true;
  if (this != (StringReader *)0x0) {
    while( true ) {
      this = (StringReader *)
             (*(code *)(this->klass->vtable).ReadLine.method)
                       (this,(this->klass->vtable).ReadToEnd.methodPtr);
      if (this == (StringReader *)0x0) break;
      if (bVar1) {
        bVar1 = false;
      }
      else {
        if (this_00 == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (this_00,replacement,(MethodInfo *)0x0);
      }
      if (this_00 == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                (this_00,(String *)this,(MethodInfo *)0x0);
    }
    if (this_00 != (StringBuilder *)0x0) {
      pSVar2 = (String *)
               (*(code *)(this_00->klass->vtable).ToString.method)
                         (this_00,(this_00->klass->vtable).
                                  System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr
                         );
      return pSVar2;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String ToCamelCase(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_ToCamelCase
                   (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(s,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (s == (String *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    uVar4 = mscorlib.dll::System::String::String_get_Chars(s,0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Char->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::Char::Char_IsUpper(uVar4,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      uVar4 = mscorlib.dll::System::String::String_get_Chars(s,0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      culture = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Char->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Char::Char_ToLower_1(uVar4,culture,(MethodInfo *)0x0);
      mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                ((MethodInfo *)0x0);
      pSVar3 = (String *)func_?();
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)s,(MethodInfo *)0x0);
      if (1 < (int)pIVar5) {
        str1 = mscorlib.dll::System::String::String_Substring(s,1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat_2(pSVar3,str1,(MethodInfo *)0x0);
      }
      return pSVar3;
    }
  }
  return s;
}


/* String ToCharAsUnicode(Char) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_ToCharAsUnicode
                   (uint16_t c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = c >> 8 & 0xf;
  uVar2 = c >> 4 & 0xf;
  val = (Char__Array *)func_?(TypeInfo__System__Char,6);
  if (val == (Char__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if (val->max_length == 0) goto code_?;
    val->vector[0] = 0x5c;
    if (val->max_length < 2) goto code_?;
    val->vector[1] = 0x75;
    if (val->max_length < 3) goto code_?;
    val->vector[2] = (-(ushort)(9 < c >> 0xc) & 0x27) + 0x30 + (c >> 0xc);
    if (val->max_length < 4) goto code_?;
    val->vector[3] = (-(ushort)(9 < uVar1) & 0x27) + 0x30 + uVar1;
    if (4 < val->max_length) {
      val->vector[4] = (-(ushort)(9 < uVar2) & 0x27) + 0x30 + uVar2;
      if (5 < val->max_length) {
        val->vector[5] = (-(ushort)(9 < (c & 0xf)) & 0x27) + 0x30 + (c & 0xf);
        pSVar4 = mscorlib.dll::System::String::String_CreateString_6
                           ((String *)0x0,val,(MethodInfo *)0x0);
        return pSVar4;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* String Truncate(String, Int32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_Truncate
                   (String *s,int32_t maximumLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral____;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (pSVar1 == (String *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_suffix,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Truncate_System__String__int__System__String_
                   );
code_?:
    func_?();
  }
  else {
    if (maximumLength < 1) goto code_?;
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pSVar1,(MethodInfo *)0x0);
    if (0 < maximumLength - (int)pIVar2) {
      if (s == (String *)0x0) {
        return (String *)0x0;
      }
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)s,(MethodInfo *)0x0);
      if ((int)pIVar3 <= maximumLength) {
        return s;
      }
      pSVar4 = mscorlib.dll::System::String::String_Substring_1
                         (s,0,maximumLength - (int)pIVar2,(MethodInfo *)0x0);
      if (pSVar4 != (String *)0x0) {
        pSVar4 = mscorlib.dll::System::String::String_Trim(pSVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar4,pSVar1,(MethodInfo *)0x0);
        return pSVar1;
      }
      goto code_?;
    }
  }
  pAVar5 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (pAVar5,StringLiteral_Length_of_suffix_string_is_great,(MethodInfo *)0x0);
  func_?(pAVar5,0);
code_?:
  pAVar5 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (pAVar5,StringLiteral_Maximum_length_must_be_greater_t,StringLiteral_maximumLength,
             (MethodInfo *)0x0);
  func_?(pAVar5,0,
                  MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Truncate_System__String__int__System__String_
                 );
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* String Truncate(String, Int32, String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_Truncate_1
                   (String *s,int32_t maximumLength,String *suffix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (suffix == (String *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_suffix,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Truncate_System__String__int__System__String_
                   );
code_?:
    func_?();
  }
  else {
    if (maximumLength < 1) goto code_?;
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)suffix,(MethodInfo *)0x0);
    if (0 < maximumLength - (int)pIVar1) {
      if (s == (String *)0x0) {
        return (String *)0x0;
      }
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)s,(MethodInfo *)0x0);
      if ((int)pIVar2 <= maximumLength) {
        return s;
      }
      pSVar3 = mscorlib.dll::System::String::String_Substring_1
                         (s,0,maximumLength - (int)pIVar1,(MethodInfo *)0x0);
      if (pSVar3 != (String *)0x0) {
        pSVar3 = mscorlib.dll::System::String::String_Trim(pSVar3,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat_2(pSVar3,suffix,(MethodInfo *)0x0);
        return pSVar3;
      }
      goto code_?;
    }
  }
  pAVar4 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (pAVar4,StringLiteral_Length_of_suffix_string_is_great,(MethodInfo *)0x0);
  func_?(pAVar4,0);
code_?:
  pAVar4 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (pAVar4,StringLiteral_Maximum_length_must_be_greater_t,StringLiteral_maximumLength,
             (MethodInfo *)0x0);
  func_?(pAVar4,0,
                  MethodInfo__Newtonsoft__Json__Utilities__StringUtils__Truncate_System__String__int__System__String_
                 );
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* Void WriteCharAsUnicode(TextWriter, Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils::StringUtils_WriteCharAsUnicode
               (TextWriter *writer,uint16_t c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_writer;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (writer != (TextWriter *)0x0) {
    uVar1 = c >> 8 & 0xf;
    uVar2 = c >> 4 & 0xf;
    (*(code *)(writer->klass->vtable).Write.method)
              (writer,0x5c,(writer->klass->vtable).Write_1.methodPtr);
    (*(code *)(writer->klass->vtable).Write.method)
              (writer,0x75,(writer->klass->vtable).Write_1.methodPtr);
    (*(code *)(writer->klass->vtable).Write.method)
              (writer,(-(ushort)(9 < c >> 0xc) & 0x27) + 0x30 + (c >> 0xc),
               (writer->klass->vtable).Write_1.methodPtr);
    (*(code *)(writer->klass->vtable).Write.method)
              (writer,(-(ushort)(9 < uVar1) & 0x27) + 0x30 + uVar1,
               (writer->klass->vtable).Write_1.methodPtr);
    (*(code *)(writer->klass->vtable).Write.method)
              (writer,(-(ushort)(9 < uVar2) & 0x27) + 0x30 + uVar2,
               (writer->klass->vtable).Write_1.methodPtr);
    (*(code *)(writer->klass->vtable).Write.method)
              (writer,(-(ushort)(9 < (c & 0xf)) & 0x27) + 0x30 + (c & 0xf),
               (writer->klass->vtable).Write_1.methodPtr);
    return;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

