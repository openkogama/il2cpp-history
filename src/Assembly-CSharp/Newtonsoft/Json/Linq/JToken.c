
/* Void AddAfterSelf(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_AddAfterSelf
               (JToken *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._parent;
  if (pJVar1 == (JContainer *)0x0) {
    this_00 = (InvalidOperationException *)
              func_?(TypeInfo__System__InvalidOperationException);
    mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
              (this_00,StringLiteral_The_parent_is_missing_,(MethodInfo *)0x0);
    func_?(this_00,0);
  }
  else {
    iVar2 = JContainer::JContainer_IndexOfItem(pJVar1,this,(MethodInfo *)0x0);
    pJVar1 = (this->fields)._parent;
    if (pJVar1 != (JContainer *)0x0) {
      JContainer::JContainer_AddInternal(pJVar1,iVar2 + 1,content,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddBeforeSelf(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_AddBeforeSelf
               (JToken *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._parent;
  if (pJVar1 == (JContainer *)0x0) {
    this_00 = (InvalidOperationException *)
              func_?(TypeInfo__System__InvalidOperationException);
    mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
              (this_00,StringLiteral_The_parent_is_missing_,(MethodInfo *)0x0);
    func_?(this_00,0);
  }
  else {
    index = JContainer::JContainer_IndexOfItem(pJVar1,this,(MethodInfo *)0x0);
    pJVar1 = (this->fields)._parent;
    if (pJVar1 != (JContainer *)0x0) {
      JContainer::JContainer_AddInternal(pJVar1,index,content,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] AfterSelf() */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_AfterSelf
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JToken___AfterSelf_c__Iterator1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    (this_00->fields).originalScale.z = -NAN;
    return (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] Ancestors() */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Ancestors
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JToken___Ancestors_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    (this_00->fields).originalScale.z = -NAN;
    return (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] BeforeSelf() */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_BeforeSelf
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JToken___BeforeSelf_c__Iterator2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    (this_00->fields).originalScale.z = -NAN;
    return (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar1)();
  return pIVar2;
}


/* JEnumerable`1[JToken] Children() */

JEnumerable_1_JToken_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Children
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>->vtable
              ).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>->_1).
      cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>);
  }
  return (JEnumerable_1_JToken_)
         (TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>->
          static_fields->Empty)._enumerable;
}


/* JEnumerable`1[System.Object] Children[Object]() */

JEnumerable_1_System_Object_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Children_1
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (JToken *)0x0) {
    uStack_1 = (*(code *)(this->klass->vtable).Children.method)
                         (this,(this->klass->vtable).Values.methodPtr);
    uVar2 = func_?(TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>
                            ,&uStack_1);
    pMVar3 = method;
    uVar2 = (*(code *)(*method->parameters)->data)(uVar2,*method->parameters);
    this = (JToken *)0x0;
    func_?(&this,uVar2,pMVar3->parameters[2]);
    return (JEnumerable_1_System_Object_)(IEnumerable_1_System_Object_ *)this;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  JVar5._enumerable = (IEnumerable_1_System_Object_ *)(*pcVar4)();
  return (JEnumerable_1_System_Object_)JVar5._enumerable;
}


/* JsonReader CreateReader() */

JsonReader *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_CreateReader
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonReader *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenReader);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonReader::JsonReader__ctor(this_00,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)this,StringLiteral_token,(MethodInfo *)0x0);
  this_00[1].klass = (JsonReader__Class *)this;
  this_00[1].fields._token = (int32_t)this;
  return this_00;
}


/* JToken DeepClone() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_DeepClone
                   (JToken *this,MethodInfo *method)

{
  pJVar1 = (JToken *)
           (*(code *)(this->klass->vtable).__unknown.method)
                     (this,(this->klass->vtable).__unknown_1.methodPtr);
  return pJVar1;
}


/* Boolean DeepEquals(JToken, JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_DeepEquals
               (JToken *t1,JToken *t2,MethodInfo *method)

{
  if (t1 == t2) {
    return 1;
  }
  if ((t1 != (JToken *)0x0) && (t2 != (JToken *)0x0)) {
    cVar1 = (*(code *)(t1->klass->vtable).__unknown_1.method)
                      (t1,t2,(t1->klass->vtable).__unknown_2.methodPtr);
    return cVar1 != '\0';
  }
  return 0;
}


/* JValue EnsureValue(JToken) */

JValue * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_EnsureValue
                   (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (JToken *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).naturalAligment;
    if (((value->klass->_1).naturalAligment < bVar1) ||
       ((JProperty__Class *)(value->klass->_1).typeHierarchy[bVar1 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pJVar3 = (JToken *)0x0;
    if (bVar2) {
      pJVar3 = value;
    }
    if (pJVar3 != (JToken *)0x0) {
      iVar4 = func_?(value,TypeInfo__Newtonsoft__Json__Linq__JProperty);
      method_00 = (MethodInfo *)0x0;
      if (iVar4 == 0) goto code_?;
      this = (JProperty *)func_?(value,TypeInfo__Newtonsoft__Json__Linq__JProperty);
      value = JProperty::JProperty_get_Value(this,method_00);
    }
    if ((JValue *)value == (JValue *)0x0) {
      return (JValue *)0x0;
    }
    bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
    if ((bVar1 <= (((JValue *)value)->klass->_1).naturalAligment) &&
       ((((JValue *)value)->klass->_1).typeHierarchy[bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      return (JValue *)value;
    }
    return (JValue *)0x0;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this_00,0);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pJVar6 = (JValue *)(*pcVar5)();
  return pJVar6;
}


/* JToken FromObject(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_FromObject
                   (Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (JsonSerializer *)func_?(TypeInfo__Newtonsoft__Json__JsonSerializer);
  JsonSerializer::JsonSerializer__ctor(this,(MethodInfo *)0x0);
  pJVar1 = JToken_FromObjectInternal(o,this,(MethodInfo *)0x0);
  return pJVar1;
}


/* JToken FromObjectInternal(Object, JsonSerializer) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_FromObjectInternal
                   (Object *o,JsonSerializer *jsonSerializer,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (o,StringLiteral_o,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)jsonSerializer,StringLiteral_jsonSerializer,(MethodInfo *)0x0);
  this = (JsonWriter *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?();
  }
  JsonWriter::JsonWriter__ctor(this,(MethodInfo *)0x0);
  uVar1 = 0;
  if ((jsonSerializer != (JsonSerializer *)0x0) &&
     (pJVar2 = this,
     JsonSerializer::JsonSerializer_Serialize_1(jsonSerializer,this,o,(MethodInfo *)0x0),
     this != (JsonWriter *)0x0)) {
    pJVar3 = this[1].klass;
    if (pJVar3 == (JsonWriter__Class *)0x0) {
      pJVar3 = (JsonWriter__Class *)this[1].fields._top;
    }
    pJVar2->klass = (JsonWriter__Class *)0x3d;
    if (this != (JsonWriter *)0x0) {
      func_?();
    }
    *unaff_FS_OFFSET = uVar1;
    return (JToken *)pJVar3;
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar5 = (JToken *)(*pcVar4)();
  return pJVar5;
}


/* JToken FromObject(Object, JsonSerializer) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_FromObject_1
                   (Object *o,JsonSerializer *jsonSerializer,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (o,StringLiteral_o,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)jsonSerializer,StringLiteral_jsonSerializer,(MethodInfo *)0x0);
  this = (JsonWriter *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?();
  }
  JsonWriter::JsonWriter__ctor(this,(MethodInfo *)0x0);
  uVar1 = 0;
  if ((jsonSerializer != (JsonSerializer *)0x0) &&
     (pJVar2 = this,
     JsonSerializer::JsonSerializer_Serialize_1(jsonSerializer,this,o,(MethodInfo *)0x0),
     this != (JsonWriter *)0x0)) {
    pJVar3 = this[1].klass;
    if (pJVar3 == (JsonWriter__Class *)0x0) {
      pJVar3 = (JsonWriter__Class *)this[1].fields._top;
    }
    pJVar2->klass = (JsonWriter__Class *)0x3d;
    if (this != (JsonWriter *)0x0) {
      func_?();
    }
    *unaff_FS_OFFSET = uVar1;
    return (JToken *)pJVar3;
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar5 = (JToken *)(*pcVar4)();
  return pJVar5;
}


/* String GetType(JToken) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_GetType
                   (JToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)token,StringLiteral_token,(MethodInfo *)0x0);
  if (token != (JToken *)0x0) {
    pJVar1 = token->klass;
    bVar2 = (pJVar1->_1).naturalAligment;
    bVar3 = (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).naturalAligment;
    if ((bVar2 < bVar3) ||
       ((JProperty__Class *)(pJVar1->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pJVar5 = (JToken *)0x0;
    if (bVar4) {
      pJVar5 = token;
    }
    if (pJVar5 != (JToken *)0x0) {
      bVar3 = (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).naturalAligment;
      if ((bVar2 < bVar3) ||
         ((JProperty__Class *)(pJVar1->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pJVar5 = (JToken *)0x0;
      if (bVar4) {
        pJVar5 = token;
      }
      pJVar6 = TypeInfo__Newtonsoft__Json__Linq__JProperty;
      if (pJVar5 == (JToken *)0x0) goto code_?;
      if ((bVar2 < bVar3) ||
         ((JProperty__Class *)(pJVar1->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      this = (JProperty *)0x0;
      if (bVar4) {
        this = (JProperty *)token;
      }
      if (this == (JProperty *)0x0) goto code_?;
      token = JProperty::JProperty_get_Value(this,(MethodInfo *)0x0);
    }
    if (token != (JToken *)0x0) {
      (*(code *)(token->klass->vtable).__unknown_2.method)(token);
      piVar7 = (int *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&stack0xfffffff8)
      ;
      if (piVar7 != (int *)0x0) {
        pSVar8 = (String *)(**(code **)(*piVar7 + 0xd8))(piVar7);
        func_?(piVar7);
        return pSVar8;
      }
    }
  }
  func_?();
  pJVar6 = extraout_EDX;
code_?:
  func_?(token,pJVar6);
  pcVar9 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar9)();
  return pSVar8;
}


/* Boolean IsNullable(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_IsNullable
               (JToken *o,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                    (o,(o->klass->vtable).__unknown_3.methodPtr);
  if (iVar3 == 0xb) {
    return 1;
  }
  iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                    (o,(o->klass->vtable).__unknown_3.methodPtr);
  return iVar3 == 10;
}


/* JToken Load(JsonReader) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Load
                   (JsonReader *reader,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IsolatedStorageException *)reader;
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  if (pIVar1 == (IsolatedStorageException *)0x0) {
    func_?(0);
code_?:
    pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (pIVar1,StringLiteral_Error_reading_JToken_from_JsonRe,(MethodInfo *)0x0);
    method = MethodInfo__Newtonsoft__Json__Linq__JToken__ReadFrom_Newtonsoft__Json__JsonReader_;
    reader = (JsonReader *)0x0;
    func_?();
  }
  else {
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 0) {
      cVar3 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).__unknown.method)
                        (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).__unknown_1.methodPtr);
      if (cVar3 == '\0') goto code_?;
    }
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 1) {
      pJVar4 = JObject::JObject_Load((JsonReader *)pIVar1,(MethodInfo *)0x0);
      return (JToken *)pJVar4;
    }
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 2) {
      pJVar5 = JArray::JArray_Load((JsonReader *)pIVar1,(MethodInfo *)0x0);
      return (JToken *)pJVar5;
    }
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 4) {
      pJVar6 = JProperty::JProperty_Load((JsonReader *)pIVar1,(MethodInfo *)0x0);
      return (JToken *)pJVar6;
    }
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 3) {
      pJVar7 = JConstructor::JConstructor_Load((JsonReader *)pIVar1,(MethodInfo *)0x0);
      return (JToken *)pJVar7;
    }
    token = func_?(7,pIVar1);
    bVar8 = JsonReader::JsonReader_IsStartToken(token,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      value = (Object *)func_?(8);
      this = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
      JValue::JValue__ctor_11(this,value,(MethodInfo *)0x0);
      return (JToken *)this;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(pIVar1,0);
  reader = (JsonReader *)func_?(7,pIVar1);
  pJVar9 = (JsonReader *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&reader);
  func_?(args,0);
  func_?(args,pJVar9);
  reader = pJVar9;
  func_?();
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Error_reading_JToken_from_JsonRe,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar1,message,(MethodInfo *)0x0);
  pMStack10 =
       MethodInfo__Newtonsoft__Json__Linq__JToken__ReadFrom_Newtonsoft__Json__JsonReader_;
  uStack11 = 0;
  pIStack12 = pIVar1;
  func_?();
  pcVar13 = (code *)swi(3);
  pJVar14 = (JToken *)(*pcVar13)();
  return pJVar14;
}


/* Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
     JToken_Newtonsoft_Json_IJsonLineInfo_HasLineInfo(JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = (this->fields)._lineNumber.value;
  uStack_2 = *(undefined4 *)&(this->fields)._lineNumber.has_value;
  cVar3 = func_?(&iStack_1,MethodInfo__System__Nullable<int>__get_HasValue__);
  if (cVar3 == '\0') {
    return 0;
  }
  iStack_4 = (this->fields)._linePosition.value;
  uStack_5 = *(undefined4 *)&(this->fields)._linePosition.has_value;
  bVar6 = func_?(&iStack_4,MethodInfo__System__Nullable<int>__get_HasValue__);
  return bVar6;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
        JToken_Newtonsoft_Json_IJsonLineInfo_get_LineNumber(JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = (this->fields)._lineNumber.value;
  uStack_2 = *(undefined4 *)&(this->fields)._lineNumber.has_value;
  cVar3 = func_?(&iStack_1,MethodInfo__System__Nullable<int>__get_HasValue__);
  if (cVar3 == '\0') {
    return 0;
  }
  iVar4 = func_?(&iStack_1,MethodInfo__System__Nullable<int>__get_Value__);
  return iVar4;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
        JToken_Newtonsoft_Json_IJsonLineInfo_get_LinePosition(JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = (this->fields)._linePosition.value;
  uStack_2 = *(undefined4 *)&(this->fields)._linePosition.has_value;
  cVar3 = func_?(&iStack_1,MethodInfo__System__Nullable<int>__get_HasValue__);
  if (cVar3 == '\0') {
    return 0;
  }
  iVar4 = func_?(&iStack_1,MethodInfo__System__Nullable<int>__get_Value__);
  return iVar4;
}


/* IJEnumerable`1[JToken]
   Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.get_Item(Object) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
JToken_Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item
          (JToken *this,Object *key,MethodInfo *method)

{
  pIVar1 = (IJEnumerable_1_JToken_ *)
           (*(code *)(this->klass->vtable).get_Item.method)
                     (this,key,(this->klass->vtable).set_Item.methodPtr);
  return pIVar1;
}


/* JToken Parse(String) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Parse
                   (String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,json,(MethodInfo *)0x0);
  this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
  JsonTextReader::JsonTextReader__ctor(this_00,(TextReader *)this,(MethodInfo *)0x0);
  pJVar1 = JToken_ReadFrom((JsonReader *)this_00,(MethodInfo *)0x0);
  return pJVar1;
}


/* JToken ReadFrom(JsonReader) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ReadFrom
                   (JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IsolatedStorageException *)reader;
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  if (pIVar1 == (IsolatedStorageException *)0x0) {
    func_?(0);
code_?:
    pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (pIVar1,StringLiteral_Error_reading_JToken_from_JsonRe,(MethodInfo *)0x0);
    method = MethodInfo__Newtonsoft__Json__Linq__JToken__ReadFrom_Newtonsoft__Json__JsonReader_;
    reader = (JsonReader *)0x0;
    func_?();
  }
  else {
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 0) {
      cVar3 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).__unknown.method)
                        (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).__unknown_1.methodPtr);
      if (cVar3 == '\0') goto code_?;
    }
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 1) {
      pJVar4 = JObject::JObject_Load((JsonReader *)pIVar1,(MethodInfo *)0x0);
      return (JToken *)pJVar4;
    }
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 2) {
      pJVar5 = JArray::JArray_Load((JsonReader *)pIVar1,(MethodInfo *)0x0);
      return (JToken *)pJVar5;
    }
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 4) {
      pJVar6 = JProperty::JProperty_Load((JsonReader *)pIVar1,(MethodInfo *)0x0);
      return (JToken *)pJVar6;
    }
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 3) {
      pJVar7 = JConstructor::JConstructor_Load((JsonReader *)pIVar1,(MethodInfo *)0x0);
      return (JToken *)pJVar7;
    }
    token = func_?(7,pIVar1);
    bVar8 = JsonReader::JsonReader_IsStartToken(token,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      value = (Object *)func_?(8);
      this = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
      JValue::JValue__ctor_11(this,value,(MethodInfo *)0x0);
      return (JToken *)this;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(pIVar1,0);
  reader = (JsonReader *)func_?(7,pIVar1);
  pJVar9 = (JsonReader *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&reader);
  func_?(args,0);
  func_?(args,pJVar9);
  reader = pJVar9;
  func_?();
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Error_reading_JToken_from_JsonRe,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar1,message,(MethodInfo *)0x0);
  pMStack10 =
       MethodInfo__Newtonsoft__Json__Linq__JToken__ReadFrom_Newtonsoft__Json__JsonReader_;
  uStack11 = 0;
  pIStack12 = pIVar1;
  func_?();
  pcVar13 = (code *)swi(3);
  pJVar14 = (JToken *)(*pcVar13)();
  return pJVar14;
}


/* Void Remove() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Remove
               (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._parent;
  if (pJVar1 != (JContainer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).RemoveItem.method)
              (pJVar1,this,(pJVar1->klass->vtable).GetItem.methodPtr);
    return;
  }
  this_00 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,StringLiteral_The_parent_is_missing_,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Replace(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Replace
               (JToken *this,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._parent;
  if (pJVar1 != (JContainer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).ReplaceItem.method)
              (pJVar1,this,value,(pJVar1->klass->vtable).ContainsItem.methodPtr);
    return;
  }
  this_00 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,StringLiteral_The_parent_is_missing_,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JToken SelectToken(String) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_SelectToken
                   (JToken *this,String *path,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JPath);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)path,StringLiteral_expression,(MethodInfo *)0x0);
  (this_00->fields)._._._._.m_CachedPtr = path;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  (this_00->fields).state = (int32_t)this_01;
  JPath::JPath_ParseMain((JPath *)this_00,(MethodInfo *)0x0);
  pJVar1 = JPath::JPath_Evaluate((JPath *)this_00,this,0,(MethodInfo *)0x0);
  return pJVar1;
}


/* JToken SelectToken(String, Boolean) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_SelectToken_1
                   (JToken *this,String *path,bool errorWhenNoMatch,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JPath);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)path,StringLiteral_expression,(MethodInfo *)0x0);
  (this_00->fields)._._._._.m_CachedPtr = path;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  (this_00->fields).state = (int32_t)this_01;
  JPath::JPath_ParseMain((JPath *)this_00,(MethodInfo *)0x0);
  pJVar1 = JPath::JPath_Evaluate((JPath *)this_00,this,errorWhenNoMatch,(MethodInfo *)0x0);
  return pJVar1;
}


/* Void SetLineInfo(IJsonLineInfo) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_SetLineInfo
               (JToken *this,IJsonLineInfo *lineInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (lineInfo != (IJsonLineInfo *)0x0) {
    cVar1 = func_?(0,TypeInfo__Newtonsoft__Json__IJsonLineInfo,lineInfo);
    if (cVar1 != '\0') {
      uVar2 = func_?(1,TypeInfo__Newtonsoft__Json__IJsonLineInfo,lineInfo);
      uVar3 = func_?(2,TypeInfo__Newtonsoft__Json__IJsonLineInfo,lineInfo);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      uStack_4 = 0;
      func_?(&uStack_4,uVar2,MethodInfo__System__Nullable<int>__Nullable_int_);
      uStack_5 = 0;
      (this->fields)._lineNumber.value = (int32_t)uStack_4;
      *(undefined4 *)&(this->fields)._lineNumber.has_value = uStack_4._4_4_;
      func_?(&uStack_5,uVar3,MethodInfo__System__Nullable<int>__Nullable_int_);
      (this->fields)._linePosition.value = (int32_t)uStack_5;
      *(undefined4 *)&(this->fields)._linePosition.has_value = uStack_5._4_4_;
    }
  }
  return;
}


/* Void SetLineInfo(Int32, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_SetLineInfo_1
               (JToken *this,int32_t lineNumber,int32_t linePosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  func_?(&uStack_1,lineNumber,MethodInfo__System__Nullable<int>__Nullable_int_);
  uStack_2 = 0;
  (this->fields)._lineNumber.value = (int32_t)uStack_1;
  *(undefined4 *)&(this->fields)._lineNumber.has_value = uStack_1._4_4_;
  func_?(&uStack_2,linePosition,MethodInfo__System__Nullable<int>__Nullable_int_);
  (this->fields)._linePosition.value = (int32_t)uStack_2;
  *(undefined4 *)&(this->fields)._linePosition.has_value = uStack_2._4_4_;
  return;
}


/* IEnumerator`1[Newtonsoft.Json.Linq.JToken]
   System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator() */

IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
JToken_System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_1 = (*(code *)(this->klass->vtable).Children.method)
                       (this,(this->klass->vtable).Values.methodPtr);
  pIVar2 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)
           func_?(&uStack_1,
                           MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__GetEnumerator__
                          );
  return pIVar2;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
JToken_System_Collections_IEnumerable_GetEnumerator(JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           func_?(0,
                           TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                           ,this);
  return pIVar1;
}


/* Object ToObject[Object]() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ToObject
                   (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonSerializer *)func_?(TypeInfo__Newtonsoft__Json__JsonSerializer);
  JsonSerializer::JsonSerializer__ctor(this_00,(MethodInfo *)0x0);
  if (this != (JToken *)0x0) {
    pOVar1 = (Object *)(*(code *)(*method->parameters)->data)(this,this_00,*method->parameters);
    return pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object ToObject[Object](JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ToObject_1
                   (JToken *this,JsonSerializer *jsonSerializer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)jsonSerializer,StringLiteral_jsonSerializer,(MethodInfo *)0x0);
  this_00 = (JTokenReader *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenReader);
  JTokenReader::JTokenReader__ctor(this_00,this,(MethodInfo *)0x0);
  uStack_1 = 0;
  if (jsonSerializer == (JsonSerializer *)0x0) {
    func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    pOVar5 = (Object *)(*pcVar4)();
    return pOVar5;
  }
  pOVar5 = (Object *)(*(code *)(*method->parameters)->data)();
  uStack_1 = 0xffffffff;
  if (this_00 != (JTokenReader *)0x0) {
    pJVar6 = this_00->klass;
    uVar7 = 0;
    uVar8._0_1_ = (pJVar6->_1).rank;
    uVar8._1_1_ = (pJVar6->_1).minimumAlignment;
    if (uVar8 != 0) {
      do {
        if (pJVar6->interfaceOffsets[uVar7].interfaceType ==
            (Il2CppClass *)TypeInfo__System__IDisposable) {
          ppMVar9 = &(&(this_00->klass->vtable).Equals)[pJVar6->interfaceOffsets[uVar7].offset].
                     method;
          goto code_?;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
    ppMVar9 = (MethodInfo **)func_?();
code_?:
    (*(code *)*ppMVar9)();
  }
  *unaff_FS_OFFSET = uStack_3;
  return pOVar5;
}


/* String ToString() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ToString
                   (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  converters = (JsonConverter__Array *)func_?(TypeInfo__Newtonsoft__Json__JsonConverter,0);
  pSVar1 = JToken_ToString_1(this,Formatting__Enum_Indented,converters,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Formatting, JsonConverter[]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ToString_1
                   (JToken *this,Formatting__Enum formatting,JsonConverter__Array *converters,
                   MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  formatProvider =
       mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                 ((MethodInfo *)0x0);
  this_00 = (StringWriter *)func_?(TypeInfo__System__IO__StringWriter);
  mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
            (this_00,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
  uStack_1 = 0;
  this_01 = (JsonTextWriter *)func_?(TypeInfo__Newtonsoft__Json__JsonTextWriter);
  JsonTextWriter::JsonTextWriter__ctor(this_01,(TextWriter *)this_00,(MethodInfo *)0x0);
  if (this_01 != (JsonTextWriter *)0x0) {
    (this_01->fields)._._formatting = formatting;
    (*(code *)(this->klass->vtable).__unknown_4.method)();
    if (this_00 != (StringWriter *)0x0) {
      pIVar4 = (this_00->klass->vtable).Dispose.methodPtr;
      pSVar5 = (String *)(*(code *)(this_00->klass->vtable).ToString.method)();
      *(undefined4 *)pIVar4 = 0x3a;
      uStack_1 = 0xffffffff;
      if (this_00 != (StringWriter *)0x0) {
        func_?();
      }
      *unaff_FS_OFFSET = uStack_3;
      return pSVar5;
    }
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}


/* Boolean ValidateBoolean(JToken, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateBoolean
               (JToken *o,bool nullable,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                    (o,(o->klass->vtable).__unknown_3.methodPtr);
  if (iVar3 == 9) {
    return 1;
  }
  if (nullable == 0) {
    return 0;
  }
  bVar2 = JToken_IsNullable(o,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean ValidateBytes(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateBytes
               (JToken *o,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                    (o,(o->klass->vtable).__unknown_3.methodPtr);
  if (iVar3 == 0xe) {
    return 1;
  }
  bVar2 = JToken_IsNullable(o,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean ValidateDate(JToken, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateDate
               (JToken *o,bool nullable,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                    (o,(o->klass->vtable).__unknown_3.methodPtr);
  if (iVar3 == 0xc) {
    return 1;
  }
  if (nullable == 0) {
    return 0;
  }
  bVar2 = JToken_IsNullable(o,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean ValidateFloat(JToken, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateFloat
               (JToken *o,bool nullable,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                    (o,(o->klass->vtable).__unknown_3.methodPtr);
  if (iVar3 != 7) {
    iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                      (o,(o->klass->vtable).__unknown_3.methodPtr);
    if (iVar3 != 6) {
      if (nullable == 0) {
        return 0;
      }
      bVar2 = JToken_IsNullable(o,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 1;
}


/* Boolean ValidateInteger(JToken, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateInteger
               (JToken *o,bool nullable,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                    (o,(o->klass->vtable).__unknown_3.methodPtr);
  if (iVar3 == 6) {
    return 1;
  }
  if (nullable == 0) {
    return 0;
  }
  bVar2 = JToken_IsNullable(o,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean ValidateString(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateString
               (JToken *o,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                    (o,(o->klass->vtable).__unknown_3.methodPtr);
  if (iVar3 != 8) {
    iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                      (o,(o->klass->vtable).__unknown_3.methodPtr);
    if (iVar3 != 5) {
      iVar3 = (*(code *)(o->klass->vtable).__unknown_2.method)
                        (o,(o->klass->vtable).__unknown_3.methodPtr);
      if (iVar3 != 0xd) {
        bVar2 = JToken_IsNullable(o,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  return 1;
}


/* Object Value[Object](Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Value
                   (JToken *this,Object *key,MethodInfo *method)

{
  if (this != (JToken *)0x0) {
    uVar1 = (*(code *)(this->klass->vtable).get_Item.method)
                      (this,key,(this->klass->vtable).set_Item.methodPtr);
    pOVar2 = (Object *)(*(code *)(*method->parameters)->data)(uVar1,*method->parameters);
    return pOVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* IEnumerable`1[System.Object] Values[Object]() */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Values(JToken *this,MethodInfo *method)

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
  func_?(this,0);
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar1);
  func_?(0,pTVar1);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_access_child_value_on__0_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  pMStack2 =
       System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__Newtonsoft__Json__Linq__JToken__Values<System::Object>__
  ;
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (IEnumerable_1_System_Object_ *)(*pcVar3)();
  return pIVar4;
}


/* JTokenEqualityComparer get_EqualityComparer() */

JTokenEqualityComparer *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_get_EqualityComparer(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JToken->static_fields;
  if (pJVar1->_equalityComparer == (JTokenEqualityComparer *)0x0) {
    method_00 = TypeInfo__Newtonsoft__Json__Linq__JTokenEqualityComparer;
    this = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
    TypeInfo__Newtonsoft__Json__Linq__JToken->static_fields->_equalityComparer =
         (JTokenEqualityComparer *)this;
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JToken->static_fields;
  }
  return pJVar1->_equalityComparer;
}


/* JToken get_First() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_get_First
                   (JToken *this,MethodInfo *method)

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
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar1);
  func_?(0,pTVar1);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_access_child_value_on__0_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  pMStack2 = MethodInfo__Newtonsoft__Json__Linq__JToken__get_First__;
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar4 = (JToken *)(*pcVar3)();
  return pJVar4;
}


/* JToken get_Item(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_get_Item
                   (JToken *this,Object *key,MethodInfo *method)

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
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar1);
  func_?(0,pTVar1);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_access_child_value_on__0_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar3 = (JToken *)(*pcVar2)();
  return pJVar3;
}


/* JToken get_Last() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_get_Last
                   (JToken *this,MethodInfo *method)

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
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar1);
  func_?(0,pTVar1);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_access_child_value_on__0_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  pMStack2 = MethodInfo__Newtonsoft__Json__Linq__JToken__get_Last__;
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar4 = (JToken *)(*pcVar3)();
  return pJVar4;
}


/* JToken get_Root() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_get_Root
                   (JToken *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._parent;
  while (pJVar2 = pJVar1, pJVar2 != (JContainer *)0x0) {
    this = (JToken *)pJVar2;
    pJVar1 = (pJVar2->fields)._._parent;
  }
  return this;
}


/* Boolean op_Explicit(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit
               (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pSVar2 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pSVar2);
    func_?(0);
    pSVar2 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Can_not_convert__0__to_Boolean_,(IFormatProvider *)provider,
                        args,(MethodInfo *)0x0);
    this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar2,(MethodInfo *)0x0);
    func_?();
    pOVar3 = extraout_ECX;
    pBVar4 = extraout_EDX;
  }
  else {
    iVar5 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar5 != 9) goto code_?;
    pOVar3 = (pJVar1->fields)._value;
    if (pOVar3 == (Object *)0x0) goto code_?;
    pBVar4 = TypeInfo__System__Boolean;
    if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pbVar6 = (bool *)func_?(pOVar3);
      return *pbVar6;
    }
  }
  func_?(pOVar3,pBVar4);
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* DateTimeOffset op_Explicit(JToken) */

DateTimeOffset *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_1
          (DateTimeOffset *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pSVar2 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pSVar2);
    func_?(0);
    pSVar2 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Can_not_convert__0__to_DateTimeO,(IFormatProvider *)provider,
                        args,(MethodInfo *)0x0);
    this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar2,(MethodInfo *)0x0);
    func_?();
    pOVar3 = extraout_ECX;
    pDVar4 = extraout_EDX;
  }
  else {
    iVar5 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar5 != 0xc) goto code_?;
    pOVar3 = (pJVar1->fields)._value;
    if (pOVar3 == (Object *)0x0) goto code_?;
    pDVar4 = TypeInfo__System__DateTimeOffset;
    if ((pOVar3->klass->_0).element_class == (TypeInfo__System__DateTimeOffset->_0).element_class)
    {
      puVar6 = (undefined4 *)func_?(pOVar3);
      uVar7 = puVar6[1];
      iVar8 = puVar6[2];
      uVar9 = puVar6[3];
      *(undefined4 *)&(__return_storage_ptr__->dt).ticks._ticks = *puVar6;
      *(undefined4 *)((int)&(__return_storage_ptr__->dt).ticks._ticks + 4) = uVar7;
      (__return_storage_ptr__->dt).kind = iVar8;
      *(undefined4 *)&(__return_storage_ptr__->dt).field_0xc = uVar9;
      (__return_storage_ptr__->utc_offset)._ticks = *(int64_t *)(puVar6 + 4);
      return __return_storage_ptr__;
    }
  }
  func_?(pOVar3,pDVar4);
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  pDVar11 = (DateTimeOffset *)(*pcVar10)();
  return pDVar11;
}


/* UInt16 op_Explicit(JToken) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_10
                   (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 == 6) {
      value_00 = (pJVar1->fields)._value;
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      uVar4 = mscorlib.dll::System::Convert::Convert_ToUInt16_14
                        (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      return uVar4;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar5 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar5);
  func_?(0);
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_UInt16_,(IFormatProvider *)pCVar3,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar5,(MethodInfo *)0x0);
  pMStack6 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack7 = 0;
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  uVar4 = (*pcVar9)();
  return uVar4;
}


/* Nullable`1[Int32] op_Explicit(JToken) */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_11
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    NVar1.value = 0;
    NVar1.has_value = 0;
    NVar1._5_3_ = 0;
    return NVar1;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 6) {
      bVar3 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
      if (bVar3 == 0) goto code_?;
    }
    value_00 = (o->fields)._value;
    if (value_00 == (Object *)0x0) {
      NVar4.value = 0;
      NVar4.has_value = 0;
      NVar4._5_3_ = 0;
      return NVar4;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    iVar6 = mscorlib.dll::System::Convert::Convert_ToInt32_17
                      (value_00,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
    NStack_7.value = 0;
    NStack_7.has_value = 0;
    NStack_7._5_3_ = 0;
    func_?(&NStack_7,iVar6,MethodInfo__System__Nullable<int>__Nullable_int_);
    return NStack_7;
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar8 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar8);
  NStack_7 = (Nullable_1_Int32_)(ZEXT48(pSVar8) << 0x20);
  func_?();
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Int32_,(IFormatProvider *)pCVar5,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar8,(MethodInfo *)0x0);
  pMStack9 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  func_?();
  pcVar10 = (code *)swi(3);
  NVar1 = (Nullable_1_Int32_)(*pcVar10)();
  return NVar1;
}


/* Nullable`1[Int16] op_Explicit(JToken) */

Nullable_1_Int16_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_12
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    NVar1.value = 0;
    NVar1.has_value = 0;
    NVar1._3_1_ = 0;
    return NVar1;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 6) {
      bVar3 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
      if (bVar3 == 0) goto code_?;
    }
    value_00 = (o->fields)._value;
    if (value_00 == (Object *)0x0) {
      NVar4.value = 0;
      NVar4.has_value = 0;
      NVar4._3_1_ = 0;
      return NVar4;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    iVar6 = mscorlib.dll::System::Convert::Convert_ToInt16_16
                      (value_00,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
    value = (JToken *)0x0;
    func_?(&value,iVar6,MethodInfo__System__Nullable<short>__Nullable_short_);
    return (Nullable_1_Int16_)value;
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar7 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar7);
  func_?(0);
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Int16_,(IFormatProvider *)pCVar5,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar7,(MethodInfo *)0x0);
  pMStack8 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack9 = 0;
  method = (MethodInfo *)&UNK_?;
  pAStack10 = this;
  func_?();
  pcVar11 = (code *)swi(3);
  NVar1 = (Nullable_1_Int16_)(*pcVar11)();
  return NVar1;
}


/* Nullable`1[UInt16] op_Explicit(JToken) */

Nullable_1_UInt16_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_13
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    NVar1.value = 0;
    NVar1.has_value = 0;
    NVar1._3_1_ = 0;
    return NVar1;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 6) {
      bVar3 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
      if (bVar3 == 0) goto code_?;
    }
    value_00 = (o->fields)._value;
    if (value_00 == (Object *)0x0) {
      NVar4.value = 0;
      NVar4.has_value = 0;
      NVar4._3_1_ = 0;
      return NVar4;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    iVar6 = mscorlib.dll::System::Convert::Convert_ToInt16_16
                      (value_00,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
    value = (JToken *)0x0;
    func_?(&value,iVar6,
                    MethodInfo__System__Nullable<unsigned_short>__Nullable_unsigned_short_);
    return (Nullable_1_UInt16_)value;
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar7 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar7);
  func_?(0);
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_UInt16_,(IFormatProvider *)pCVar5,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar7,(MethodInfo *)0x0);
  pMStack8 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack9 = 0;
  method = (MethodInfo *)&UNK_?;
  pAStack10 = this;
  func_?();
  pcVar11 = (code *)swi(3);
  NVar1 = (Nullable_1_UInt16_)(*pcVar11)();
  return NVar1;
}


/* DateTime op_Explicit(JToken) */

DateTime *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_14
          (DateTime *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pSVar2 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pSVar2);
    func_?(0);
    pSVar2 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Can_not_convert__0__to_DateTime_,(IFormatProvider *)provider,
                        args,(MethodInfo *)0x0);
    this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar2,(MethodInfo *)0x0);
    func_?();
    pOVar3 = extraout_ECX;
    pDVar4 = extraout_EDX;
  }
  else {
    iVar5 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar5 != 0xc) goto code_?;
    pOVar3 = (pJVar1->fields)._value;
    if (pOVar3 == (Object *)0x0) goto code_?;
    pDVar4 = TypeInfo__System__DateTime;
    if ((pOVar3->klass->_0).element_class == (TypeInfo__System__DateTime->_0).element_class) {
      puVar6 = (undefined4 *)func_?(pOVar3);
      uVar7 = puVar6[1];
      iVar8 = puVar6[2];
      uVar9 = puVar6[3];
      *(undefined4 *)&(__return_storage_ptr__->ticks)._ticks = *puVar6;
      *(undefined4 *)((int)&(__return_storage_ptr__->ticks)._ticks + 4) = uVar7;
      __return_storage_ptr__->kind = iVar8;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar9;
      return __return_storage_ptr__;
    }
  }
  func_?(pOVar3,pDVar4);
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  pDVar11 = (DateTime *)(*pcVar10)();
  return pDVar11;
}


/* Nullable`1[Int64] op_Explicit(JToken) */

Nullable_1_Int64_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_15
          (Nullable_1_Int64_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    *(undefined4 *)&__return_storage_ptr__->value = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = 0;
    *(undefined4 *)&__return_storage_ptr__->has_value = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
    return __return_storage_ptr__;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar1 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar1 != 6) {
      bVar2 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
      if (bVar2 == 0) goto code_?;
    }
    pOVar3 = (o->fields)._value;
    func_?();
    if ((pOVar3 == (Object *)0x0) ||
       ((pOVar3->klass->_0).element_class == (TypeInfo__System__Int64->_0).element_class)) {
      func_?(pOVar3,TypeInfo__System__Int64,&stack0xfffffff8);
      *(undefined4 *)&__return_storage_ptr__->value = unaff_EBX;
      *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = unaff_EBP;
      *(undefined4 *)&__return_storage_ptr__->has_value = unaff_retaddr;
      *(Nullable_1_Int64_ **)&__return_storage_ptr__->field_0xc = __return_storage_ptr__;
      return __return_storage_ptr__;
    }
    func_?(pOVar3,TypeInfo__System__Int64);
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar4 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar4);
  func_?();
  pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Int64_,(IFormatProvider *)provider,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar4,(MethodInfo *)0x0);
  pMStack5 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack6 = 0;
  func_?();
  pcVar7 = (code *)swi(3);
  pNVar8 = (Nullable_1_Int64_ *)(*pcVar7)();
  return pNVar8;
}


/* Nullable`1[Single] op_Explicit(JToken) */

Nullable_1_Single_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_16
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    NVar1.value = 0.0;
    NVar1.has_value = 0;
    NVar1._5_3_ = 0;
    return NVar1;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 7) {
      iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                        (o,(o->klass->vtable).get_HasValues.methodPtr);
      if (iVar2 != 6) {
        bVar3 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
        if (bVar3 == 0) goto code_?;
      }
    }
    value_00 = (o->fields)._value;
    if (value_00 == (Object *)0x0) {
      NVar4.value = 0.0;
      NVar4.has_value = 0;
      NVar4._5_3_ = 0;
      return NVar4;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    uStack_6._4_4_ =
         mscorlib.dll::System::Convert::Convert_ToSingle_15
                   (value_00,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
    uStack_6._0_4_ = (float)&uStack_6;
    func_?();
    return uStack_6;
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar7 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar7);
  uStack_6 = (Nullable_1_Single_)(ZEXT48(pSVar7) << 0x20);
  func_?();
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Single_,(IFormatProvider *)pCVar5,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar7,(MethodInfo *)0x0);
  pMStack8 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  func_?();
  pcVar9 = (code *)swi(3);
  NVar1 = (Nullable_1_Single_)(*pcVar9)();
  return NVar1;
}


/* Decimal op_Explicit(JToken) */

Decimal * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_17
                    (Decimal *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 7) {
      iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                        (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
      if (iVar2 != 6) goto code_?;
    }
    value_00 = (pJVar1->fields)._value;
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
                       (&DStack_5,value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
    uVar6 = pDVar4->hi;
    uVar7 = pDVar4->lo;
    uVar8 = pDVar4->mid;
    __return_storage_ptr__->flags = pDVar4->flags;
    __return_storage_ptr__->hi = uVar6;
    __return_storage_ptr__->lo = uVar7;
    __return_storage_ptr__->mid = uVar8;
    return __return_storage_ptr__;
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar9 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar9);
  DStack_5.flags = 0;
  DStack_5.hi = (uint32_t)pSVar9;
  func_?();
  pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Decimal_,(IFormatProvider *)pCVar3,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar9,(MethodInfo *)0x0);
  DStack_5.mid = (uint32_t)&UNK_?;
  func_?();
  pcVar10 = (code *)swi(3);
  pDVar4 = (Decimal *)(*pcVar10)();
  return pDVar4;
}


/* Nullable`1[UInt32] op_Explicit(JToken) */

Nullable_1_UInt32_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_18
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    NVar1.value = 0;
    NVar1.has_value = 0;
    NVar1._5_3_ = 0;
    return NVar1;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 6) {
      bVar3 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
      if (bVar3 == 0) goto code_?;
    }
    pOVar4 = (o->fields)._value;
    func_?();
    if ((pOVar4 == (Object *)0x0) ||
       ((pOVar4->klass->_0).element_class == (TypeInfo__System__UInt32->_0).element_class)) {
      func_?(pOVar4,TypeInfo__System__UInt32,&stack0xfffffff0);
      NVar5._4_4_ = uStack_6;
      NVar5.value = unaff_EBX;
      return NVar5;
    }
    func_?(pOVar4,TypeInfo__System__UInt32);
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar7 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar7);
  func_?();
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_UInt32_,(IFormatProvider *)provider,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar7,(MethodInfo *)0x0);
  pMStack8 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  func_?();
  pcVar9 = (code *)swi(3);
  NVar1 = (Nullable_1_UInt32_)(*pcVar9)();
  return NVar1;
}


/* Nullable`1[UInt64] op_Explicit(JToken) */

Nullable_1_UInt64_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_19
          (Nullable_1_UInt64_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    *(undefined4 *)&__return_storage_ptr__->value = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = 0;
    *(undefined4 *)&__return_storage_ptr__->has_value = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
    return __return_storage_ptr__;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar1 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar1 != 6) {
      bVar2 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
      if (bVar2 == 0) goto code_?;
    }
    pOVar3 = (o->fields)._value;
    func_?();
    if ((pOVar3 == (Object *)0x0) ||
       ((pOVar3->klass->_0).element_class == (TypeInfo__System__UInt64->_0).element_class)) {
      func_?(pOVar3,TypeInfo__System__UInt64,&stack0xfffffff8);
      *(undefined4 *)&__return_storage_ptr__->value = unaff_EBX;
      *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = unaff_EBP;
      *(undefined4 *)&__return_storage_ptr__->has_value = unaff_retaddr;
      *(Nullable_1_UInt64_ **)&__return_storage_ptr__->field_0xc = __return_storage_ptr__;
      return __return_storage_ptr__;
    }
    func_?(pOVar3,TypeInfo__System__UInt64);
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar4 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar4);
  func_?();
  pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_UInt64_,(IFormatProvider *)provider,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar4,(MethodInfo *)0x0);
  pMStack5 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack6 = 0;
  func_?();
  pcVar7 = (code *)swi(3);
  pNVar8 = (Nullable_1_UInt64_ *)(*pcVar7)();
  return pNVar8;
}


/* Nullable`1[Boolean] op_Explicit(JToken) */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_2
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    NVar1.value = 0;
    NVar1.has_value = 0;
    return NVar1;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 9) {
      bVar3 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
      if (bVar3 == 0) goto code_?;
    }
    pOVar4 = (o->fields)._value;
    func_?();
    if ((pOVar4 == (Object *)0x0) ||
       ((pOVar4->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class)) {
      func_?(pOVar4,TypeInfo__System__Boolean,&stack0xfffffff8);
      return unaff_BX;
    }
    func_?(pOVar4,TypeInfo__System__Boolean);
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar5 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar5);
  func_?();
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Boolean_,(IFormatProvider *)provider,args
                      ,(MethodInfo *)0x0);
  this = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar5,(MethodInfo *)0x0);
  pMStack6 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack7 = 0;
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  NVar1 = (Nullable_1_Boolean_)(*pcVar9)();
  return NVar1;
}


/* Double op_Explicit(JToken) */

double Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_20
                 (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pSVar2 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pSVar2);
    func_?(0);
    pSVar2 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Can_not_convert__0__to_Double_,(IFormatProvider *)provider,
                        args,(MethodInfo *)0x0);
    this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar2,(MethodInfo *)0x0);
    func_?();
    pOVar3 = extraout_ECX;
    pDVar4 = extraout_EDX;
  }
  else {
    iVar5 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar5 != 7) {
      iVar5 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                        (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
      if (iVar5 != 6) goto code_?;
    }
    pOVar3 = (pJVar1->fields)._value;
    if (pOVar3 == (Object *)0x0) goto code_?;
    pDVar4 = TypeInfo__System__Double;
    if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Double->_0).element_class) {
      pdVar6 = (double *)func_?(pOVar3);
      return *pdVar6;
    }
  }
  func_?(pOVar3,pDVar4);
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (double)fVar8;
}


/* Single op_Explicit(JToken) */

float Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_21
                (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 7) {
      iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                        (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
      if (iVar2 != 6) goto code_?;
    }
    value_00 = (pJVar1->fields)._value;
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
    fVar4 = mscorlib.dll::System::Convert::Convert_ToSingle_15
                      (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
    return fVar4;
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar5 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar5);
  func_?(0);
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Single_,(IFormatProvider *)pCVar3,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar5,(MethodInfo *)0x0);
  pMStack6 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack7 = 0;
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
}


/* String op_Explicit(JToken) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_22
                   (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    pSVar1 = (String *)0x0;
  }
  else {
    o = JToken_EnsureValue(value,(MethodInfo *)0x0);
    if ((o == (JValue *)0x0) ||
       ((((iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                             (o,(o->klass->vtable).get_HasValues.methodPtr), iVar2 != 8 &&
          (iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                             (o,(o->klass->vtable).get_HasValues.methodPtr), iVar2 != 5)) &&
         (iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                            (o,(o->klass->vtable).get_HasValues.methodPtr), iVar2 != 0xd)) &&
        (bVar3 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0), bVar3 == 0)))) {
code_?:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      args = (Object__Array *)func_?(TypeInfo__System__Object,1);
      pSVar1 = JToken_GetType(value,(MethodInfo *)0x0);
      func_?(args,0);
      func_?(args,pSVar1);
      func_?(0);
      pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (StringLiteral_Can_not_convert__0__to_String_,(IFormatProvider *)provider,
                          args,(MethodInfo *)0x0);
      this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this,pSVar1,(MethodInfo *)0x0);
      pMStack4 =
           ::
           MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
      ;
      uStack5 = 0;
      pAStack6 = this;
      func_?();
      pcVar7 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar7)();
      return pSVar1;
    }
    pSVar8 = (String *)(o->fields)._value;
    pSVar1 = (String *)0x0;
    if (pSVar8 != (String *)0x0) {
      if (pSVar8->klass == TypeInfo__System__String) {
        pSVar1 = pSVar8;
      }
      if (pSVar1 == (String *)0x0) {
        func_?(pSVar8,TypeInfo__System__String);
        goto code_?;
      }
    }
  }
  return pSVar1;
}


/* UInt32 op_Explicit(JToken) */

uint32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_23
                   (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 == 6) {
      value_00 = (pJVar1->fields)._value;
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      uVar4 = mscorlib.dll::System::Convert::Convert_ToUInt32_15
                        (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      return uVar4;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar5 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar5);
  func_?(0);
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_UInt32_,(IFormatProvider *)pCVar3,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar5,(MethodInfo *)0x0);
  pMStack6 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack7 = 0;
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  uVar4 = (*pcVar9)();
  return uVar4;
}


/* UInt64 op_Explicit(JToken) */

uint64_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_24
                   (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 == 6) {
      value_00 = (pJVar1->fields)._value;
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      uVar4 = mscorlib.dll::System::Convert::Convert_ToUInt64_15
                        (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      return uVar4;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar5 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar5);
  func_?(0);
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_UInt64_,(IFormatProvider *)pCVar3,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar5,(MethodInfo *)0x0);
  pMStack6 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack7 = 0;
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  uVar4 = (*pcVar9)();
  return uVar4;
}


/* Byte[] op_Explicit(JToken) */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_25
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o == (JValue *)0x0) {
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pSVar1 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pSVar1);
    func_?(0);
    pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Can_not_convert__0__to_byte_arra,(IFormatProvider *)provider,
                        args,(MethodInfo *)0x0);
    this = (Byte__Array__Class *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              ((ArgumentException *)this,pSVar1,(MethodInfo *)0x0);
    func_?();
  }
  else {
    iVar2 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 0xe) {
      bVar3 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
      if (bVar3 == 0) goto code_?;
    }
    this = TypeInfo__System__Byte;
    pSVar1 = (String *)(o->fields)._value;
    if (pSVar1 == (String *)0x0) {
      return (Byte__Array *)0x0;
    }
    pBVar4 = (Byte__Array *)func_?(pSVar1,TypeInfo__System__Byte);
    if (pBVar4 != (Byte__Array *)0x0) {
      return pBVar4;
    }
  }
  func_?(pSVar1,this);
  pcVar5 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar5)();
  return pBVar4;
}


/* Int64 op_Explicit(JToken) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_3
                  (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pSVar2 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pSVar2);
    func_?(0);
    pSVar2 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Can_not_convert__0__to_Int64_,(IFormatProvider *)provider,args
                        ,(MethodInfo *)0x0);
    this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar2,(MethodInfo *)0x0);
    func_?();
    pOVar3 = extraout_ECX;
    pIVar4 = extraout_EDX;
  }
  else {
    iVar5 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar5 != 6) goto code_?;
    pOVar3 = (pJVar1->fields)._value;
    if (pOVar3 == (Object *)0x0) goto code_?;
    pIVar4 = TypeInfo__System__Int64;
    if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Int64->_0).element_class) {
      piVar6 = (int64_t *)func_?(pOVar3);
      return *piVar6;
    }
  }
  func_?(pOVar3,pIVar4);
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Nullable`1[DateTime] op_Explicit(JToken) */

Nullable_1_DateTime_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_4
          (Nullable_1_DateTime_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    *(undefined4 *)&(__return_storage_ptr__->value).ticks._ticks = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->value).ticks._ticks + 4) = 0;
    (__return_storage_ptr__->value).kind = 0;
    *(undefined4 *)&(__return_storage_ptr__->value).field_0xc = 0;
    *(undefined8 *)&__return_storage_ptr__->has_value = 0;
    return __return_storage_ptr__;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar1 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar1 != 0xc) {
      bVar2 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
      if (bVar2 == 0) goto code_?;
    }
    pOVar3 = (o->fields)._value;
    func_?();
    if ((pOVar3 == (Object *)0x0) ||
       ((pOVar3->klass->_0).element_class == (TypeInfo__System__DateTime->_0).element_class)) {
      func_?(pOVar3,TypeInfo__System__DateTime,&stack0xfffffff8);
      *(undefined4 *)&(__return_storage_ptr__->value).ticks._ticks = unaff_EBX;
      *(undefined4 *)((int)&(__return_storage_ptr__->value).ticks._ticks + 4) = unaff_EBP;
      (__return_storage_ptr__->value).kind = unaff_retaddr;
      *(Nullable_1_DateTime_ **)&(__return_storage_ptr__->value).field_0xc = __return_storage_ptr__;
      *(ulonglong *)&__return_storage_ptr__->has_value = CONCAT44(method,value);
      return __return_storage_ptr__;
    }
    func_?(pOVar3,TypeInfo__System__DateTime);
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar4 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar4);
  func_?();
  pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_DateTime_,(IFormatProvider *)provider,
                      args,(MethodInfo *)0x0);
  this = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar4,(MethodInfo *)0x0);
  pMStack5 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack6 = 0;
  func_?();
  pcVar7 = (code *)swi(3);
  pNVar8 = (Nullable_1_DateTime_ *)(*pcVar7)();
  return pNVar8;
}


/* Nullable`1[DateTimeOffset] op_Explicit(JToken) */

Nullable_1_DateTimeOffset_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_5
          (Nullable_1_DateTimeOffset_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
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
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar1 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar1 != 0xc) {
      bVar2 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
      if (bVar2 == 0) goto code_?;
    }
    pOVar3 = (o->fields)._value;
    func_?();
    if ((pOVar3 == (Object *)0x0) ||
       ((pOVar3->klass->_0).element_class == (TypeInfo__System__DateTimeOffset->_0).element_class))
    {
      func_?(pOVar3,TypeInfo__System__DateTimeOffset,&stack0xfffffff8);
      *(undefined4 *)&(__return_storage_ptr__->value).dt.ticks._ticks = unaff_EBX;
      *(undefined4 *)((int)&(__return_storage_ptr__->value).dt.ticks._ticks + 4) = unaff_EBP;
      (__return_storage_ptr__->value).dt.kind = unaff_retaddr;
      *(Nullable_1_DateTimeOffset_ **)&(__return_storage_ptr__->value).dt.field_0xc =
           __return_storage_ptr__;
      *(JToken **)&(__return_storage_ptr__->value).utc_offset._ticks = value;
      *(MethodInfo **)((int)&(__return_storage_ptr__->value).utc_offset._ticks + 4) = method;
      *(undefined4 *)&__return_storage_ptr__->has_value = in_stack_4;
      *(undefined4 *)&__return_storage_ptr__->field_0x1c = in_stack_5;
      return __return_storage_ptr__;
    }
    func_?(pOVar3,TypeInfo__System__DateTimeOffset);
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar6);
  func_?();
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_DateTimeO,(IFormatProvider *)provider,
                      args,(MethodInfo *)0x0);
  this = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  func_?();
  pcVar7 = (code *)swi(3);
  pNVar8 = (Nullable_1_DateTimeOffset_ *)(*pcVar7)();
  return pNVar8;
}


/* Nullable`1[Decimal] op_Explicit(JToken) */

Nullable_1_Decimal_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_6
          (Nullable_1_Decimal_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    (__return_storage_ptr__->value).flags = 0;
    (__return_storage_ptr__->value).hi = 0;
    (__return_storage_ptr__->value).lo = 0;
    (__return_storage_ptr__->value).mid = 0;
    *(undefined4 *)&__return_storage_ptr__->has_value = 0;
    return __return_storage_ptr__;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar1 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar1 != 7) {
      iVar1 = (*(code *)(o->klass->vtable).get_Type.method)
                        (o,(o->klass->vtable).get_HasValues.methodPtr);
      if (iVar1 != 6) {
        bVar2 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
        if (bVar2 == 0) goto code_?;
      }
    }
    value_00 = (o->fields)._value;
    if (value_00 == (Object *)0x0) {
      (__return_storage_ptr__->value).flags = 0;
      (__return_storage_ptr__->value).hi = 0;
      (__return_storage_ptr__->value).lo = 0;
      (__return_storage_ptr__->value).mid = 0;
      *(undefined4 *)&__return_storage_ptr__->has_value = 0;
      return __return_storage_ptr__;
    }
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
                       (&DStack_5,value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
    uStack_6 = pDVar4->hi;
    pSStack_7 = (String *)pDVar4->lo;
    uStack_8 = pDVar4->mid;
    pAStack_9 = (ArgumentException *)0x0;
    puStack_10 = (undefined *)0x0;
    func_?(&uStack_6,pDVar4->flags);
    (__return_storage_ptr__->value).flags = uStack_6;
    (__return_storage_ptr__->value).hi = (uint32_t)pSStack_7;
    (__return_storage_ptr__->value).lo = uStack_8;
    (__return_storage_ptr__->value).mid = (uint32_t)puStack_10;
    *(ArgumentException **)&__return_storage_ptr__->has_value = pAStack_9;
    return __return_storage_ptr__;
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar11 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar11);
  uStack_6 = 0;
  pSStack_7 = pSVar11;
  func_?();
  pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Decimal_,(IFormatProvider *)pCVar3,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar11,(MethodInfo *)0x0);
  DStack_5.hi = (uint32_t)
                 ::
                 MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  DStack_5.flags = 0;
  pAStack_9 = this;
  func_?();
  pcVar12 = (code *)swi(3);
  pNVar13 = (Nullable_1_Decimal_ *)(*pcVar12)();
  return pNVar13;
}


/* Nullable`1[Double] op_Explicit(JToken) */

Nullable_1_Double_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_7
          (Nullable_1_Double_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    *(undefined4 *)&__return_storage_ptr__->value = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = 0;
    *(undefined4 *)&__return_storage_ptr__->has_value = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
    return __return_storage_ptr__;
  }
  o = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (o != (JValue *)0x0) {
    iVar1 = (*(code *)(o->klass->vtable).get_Type.method)
                      (o,(o->klass->vtable).get_HasValues.methodPtr);
    if (iVar1 != 7) {
      iVar1 = (*(code *)(o->klass->vtable).get_Type.method)
                        (o,(o->klass->vtable).get_HasValues.methodPtr);
      if (iVar1 != 6) {
        bVar2 = JToken_IsNullable((JToken *)o,(MethodInfo *)0x0);
        if (bVar2 == 0) goto code_?;
      }
    }
    pOVar3 = (o->fields)._value;
    func_?();
    if ((pOVar3 == (Object *)0x0) ||
       ((pOVar3->klass->_0).element_class == (TypeInfo__System__Double->_0).element_class)) {
      func_?(pOVar3,TypeInfo__System__Double,&stack0xfffffff8);
      *(undefined4 *)&__return_storage_ptr__->value = unaff_EBX;
      *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = unaff_EBP;
      *(undefined4 *)&__return_storage_ptr__->has_value = unaff_retaddr;
      *(Nullable_1_Double_ **)&__return_storage_ptr__->field_0xc = __return_storage_ptr__;
      return __return_storage_ptr__;
    }
    func_?(pOVar3,TypeInfo__System__Double);
  }
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar4 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar4);
  func_?();
  pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Double_,(IFormatProvider *)provider,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar4,(MethodInfo *)0x0);
  pMStack5 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack6 = 0;
  func_?();
  pcVar7 = (code *)swi(3);
  pNVar8 = (Nullable_1_Double_ *)(*pcVar7)();
  return pNVar8;
}


/* Int32 op_Explicit(JToken) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_8
                  (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 == 6) {
      value_00 = (pJVar1->fields)._value;
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32_17
                        (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      return iVar4;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar5 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar5);
  func_?(0);
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Int32_,(IFormatProvider *)pCVar3,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar5,(MethodInfo *)0x0);
  pMStack6 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack7 = 0;
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  iVar4 = (*pcVar9)();
  return iVar4;
}


/* Int16 op_Explicit(JToken) */

int16_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_9
                  (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 == 6) {
      value_00 = (pJVar1->fields)._value;
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      iVar4 = mscorlib.dll::System::Convert::Convert_ToInt16_16
                        (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      return iVar4;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar5 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar5);
  func_?(0);
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Can_not_convert__0__to_Int16_,(IFormatProvider *)pCVar3,args,
                      (MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar5,(MethodInfo *)0x0);
  pMStack6 =
       ::
       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
  ;
  uStack7 = 0;
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  iVar4 = (*pcVar9)();
  return iVar4;
}


/* JToken op_Implicit(Boolean) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit
                   (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack1 = value;
  method_00 = TypeInfo__System__Boolean;
  pSVar2 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Boolean,&stack0x00000007);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = pSVar2;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x9
  ;
  return (JToken *)this;
}


/* JToken op_Implicit(DateTimeOffset) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_1
                   (DateTimeOffset value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (undefined4)value.dt.ticks._ticks;
  uStack_2 = value.dt.ticks._ticks._4_4_;
  iStack_3 = value.dt.kind;
  uStack_4 = value.dt._12_4_;
  iStack_5 = (int64_t)value.utc_offset._ticks;
  value_00 = (ScaleAnimationBase__Class *)
             func_?(TypeInfo__System__DateTimeOffset,&uStack_1);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar6 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar6;
  return (JToken *)this;
}


/* JToken op_Implicit(Int32) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_10
                   (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = value >> 0x1f;
  iStack_2 = value;
  method_00 = TypeInfo__System__Int64;
  pSVar3 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Int64,&iStack_2);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = pSVar3;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x6
  ;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[Int32]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_11
                   (Nullable_1_Int32_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  aiStack_1[0] = value.value;
  aiStack_1[1] = value._4_4_;
  value_00 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Nullable<int>,aiStack_1)
  ;
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar2 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar2;
  return (JToken *)this;
}


/* JToken op_Implicit(DateTime) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_12
                   (DateTime value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__DateTime;
  pSVar1 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__DateTime,&value);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = pSVar1;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0xc
  ;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[Int64]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_13
                   (Nullable_1_Int64_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (undefined4)value.value;
  uStack_2 = value.value._4_4_;
  bStack_3 = value.has_value;
  uStack_4 = value._9_3_;
  uStack_5 = value._12_4_;
  value_00 = (ScaleAnimationBase__Class *)
             func_?(TypeInfo__System__Nullable<long>,&uStack_1);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar6 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar6;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[Single]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_14
                   (Nullable_1_Single_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  afStack_1[0] = value.value;
  afStack_1[1] = (float)value._4_4_;
  value_00 = (ScaleAnimationBase__Class *)
             func_?(TypeInfo__System__Nullable<float>,afStack_1);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar2 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar2;
  return (JToken *)this;
}


/* JToken op_Implicit(Decimal) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_15
                   (Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = value.flags;
  uStack_2 = value.hi;
  uStack_3 = value.lo;
  uStack_4 = value.mid;
  value_00 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Decimal,&uStack_1);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar5 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar5;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[Int16]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_16
                   (Nullable_1_Int16_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Nullable<short>,&value);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar1 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar1;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[UInt16]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_17
                   (Nullable_1_UInt16_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00 = (ScaleAnimationBase__Class *)
             func_?(TypeInfo__System__Nullable<unsigned_short>,&value);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar1 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar1;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[UInt32]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_18
                   (Nullable_1_UInt32_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1[0] = value.value;
  auStack_1[1] = value._4_4_;
  value_00 = (ScaleAnimationBase__Class *)
             func_?(TypeInfo__System__Nullable<unsigned_int>,auStack_1);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar2 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar2;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[UInt64]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_19
                   (Nullable_1_UInt64_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (undefined4)value.value;
  uStack_2 = value.value._4_4_;
  bStack_3 = value.has_value;
  uStack_4 = value._9_3_;
  uStack_5 = value._12_4_;
  value_00 = (ScaleAnimationBase__Class *)
             func_?(TypeInfo__System__Nullable<unsigned_long>,&uStack_1);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar6 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar6;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[Boolean]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_2
                   (Nullable_1_Boolean_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Nullable<bool>,&value);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar1 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar1;
  return (JToken *)this;
}


/* JToken op_Implicit(Double) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_20
                   (double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Double;
  pSVar1 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Double,&value);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = pSVar1;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x7
  ;
  return (JToken *)this;
}


/* JToken op_Implicit(Single) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_21
                   (float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  dStack_1 = (double)value;
  method_00 = TypeInfo__System__Double;
  pSVar2 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Double,&dStack_1);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = pSVar2;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x7
  ;
  return (JToken *)this;
}


/* JToken op_Implicit(String) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_22
                   (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = (ScaleAnimationBase__Class *)value;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x8
  ;
  return (JToken *)this;
}


/* JToken op_Implicit(UInt32) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_23
                   (uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1[0] = value;
  auStack_1[1] = 0;
  method_00 = TypeInfo__System__Int64;
  pSVar2 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Int64,auStack_1);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = pSVar2;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x6
  ;
  return (JToken *)this;
}


/* JToken op_Implicit(UInt64) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_24
                   (uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__UInt64;
  uStack_1 = value;
  pSVar2 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__UInt64,&uStack_1);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = pSVar2;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x6
  ;
  return (JToken *)this;
}


/* JToken op_Implicit(Byte[]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_25
                   (Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar1 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = (ScaleAnimationBase__Class *)value;
  (this->fields).OnScaleAnimationStopped = pSVar1;
  return (JToken *)this;
}


/* JToken op_Implicit(Int64) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_3
                   (int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Int64;
  iStack_1 = value;
  pSVar2 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Int64,&iStack_1);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = pSVar2;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x6
  ;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[DateTime]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_4
                   (Nullable_1_DateTime_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (undefined4)value.value.ticks._ticks;
  uStack_2 = value.value.ticks._ticks._4_4_;
  iStack_3 = value.value.kind;
  uStack_4 = value.value._12_4_;
  uStack_5 = value._16_8_;
  value_00 = (ScaleAnimationBase__Class *)
             func_?(TypeInfo__System__Nullable<System::DateTime>,&uStack_1);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar6 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar6;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[DateTimeOffset]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_5
                   (Nullable_1_DateTimeOffset_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (undefined4)value.value.dt.ticks._ticks;
  uStack_2 = value.value.dt.ticks._ticks._4_4_;
  iStack_3 = value.value.dt.kind;
  uStack_4 = value.value.dt._12_4_;
  uStack_5 = (undefined4)value.value.utc_offset._ticks;
  uStack_6 = value.value.utc_offset._ticks._4_4_;
  bStack_7 = value.has_value;
  uStack_8 = value._25_3_;
  uStack_9 = value._28_4_;
  value_00 = (ScaleAnimationBase__Class *)
             func_?(TypeInfo__System__Nullable<System::DateTimeOffset>,&uStack_1);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar10 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar10;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[Decimal]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_6
                   (Nullable_1_Decimal_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_1 = value.has_value;
  uStack_2 = value._17_3_;
  uStack_3 = value.value.flags;
  uStack_4 = value.value.hi;
  uStack_5 = value.value.lo;
  uStack_6 = value.value.mid;
  value_00 = (ScaleAnimationBase__Class *)
             func_?(TypeInfo__System__Nullable<System::Decimal>,&uStack_3);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar7;
  return (JToken *)this;
}


/* JToken op_Implicit(Nullable`1[Double]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_7
                   (Nullable_1_Double_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = value.value._0_4_;
  uStack_2 = value.value._4_4_;
  bStack_3 = value.has_value;
  uStack_4 = value._9_3_;
  uStack_5 = value._12_4_;
  value_00 = (ScaleAnimationBase__Class *)
             func_?(TypeInfo__System__Nullable<double>,&uStack_1);
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (ScaleAnimationBase *)func_?();
  pSVar6 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value_00,
                      (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = value_00;
  (this->fields).OnScaleAnimationStopped = pSVar6;
  return (JToken *)this;
}


/* JToken op_Implicit(Int16) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_8
                   (int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = (int)value;
  iStack_2 = iStack_1 >> 0x1f;
  method_00 = TypeInfo__System__Int64;
  pSVar3 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Int64,&iStack_1);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = pSVar3;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x6
  ;
  return (JToken *)this;
}


/* JToken op_Implicit(UInt16) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_9
                   (uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1[0] = (uint)value;
  auStack_1[1] = 0;
  method_00 = TypeInfo__System__Int64;
  pSVar2 = (ScaleAnimationBase__Class *)func_?(TypeInfo__System__Int64,auStack_1);
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  this[1].klass = pSVar2;
  (this->fields).OnScaleAnimationStopped = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x6
  ;
  return (JToken *)this;
}


/* Void set_Item(Object, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_set_Item
               (JToken *this,Object *key,JToken *value,MethodInfo *method)

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
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar1);
  func_?(0,pTVar1);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_set_child_value_on__0__,(IFormatProvider *)provider,args
                       ,(MethodInfo *)0x0);
  this_00 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

