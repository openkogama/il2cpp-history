
/* Void AddAfterSelf(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_AddAfterSelf
               (JToken *this,Object *content,MethodInfo *method)

{
  if ((this->fields)._parent == (JContainer *)0x0) {
    uVar1 = func_?(&TypeInfo__System__InvalidOperationException);
    this_01 = (InvalidOperationException *)func_?(uVar1);
    func_?(this_01);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_The_parent_is_missing_);
    mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
              (this_01,message,method_00);
    func_?(&MethodInfo__Newtonsoft__Json__Linq__JToken__AddAfterSelf_System__Object_);
    func_?(this_01);
  }
  else {
    iVar2 = JContainer::JContainer_IndexOfItem((this->fields)._parent,this,(MethodInfo *)0x0);
    this_00 = (this->fields)._parent;
    if (this_00 != (JContainer *)0x0) {
      JContainer::JContainer_AddInternal(this_00,iVar2 + 1,content,(MethodInfo *)0x0);
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
  if ((this->fields)._parent == (JContainer *)0x0) {
    uVar1 = func_?(&TypeInfo__System__InvalidOperationException);
    this_01 = (InvalidOperationException *)func_?(uVar1);
    func_?(this_01);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_The_parent_is_missing_);
    mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
              (this_01,message,method_00);
    func_?(&MethodInfo__Newtonsoft__Json__Linq__JToken__AddBeforeSelf_System__Object_);
    func_?(this_01);
  }
  else {
    index = JContainer::JContainer_IndexOfItem((this->fields)._parent,this,(MethodInfo *)0x0);
    this_00 = (this->fields)._parent;
    if (this_00 != (JContainer *)0x0) {
      JContainer::JContainer_AddInternal(this_00,index,content,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken___AfterSelf_d__30);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JToken___AfterSelf_d__30);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0xfffffffe;
    pOVar1 = (Object__Class *)
             mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                       ((MethodInfo *)0x0);
    value[2].klass = pOVar1;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    return (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)value;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar2)();
  return pIVar3;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] Ancestors() */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Ancestors
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken___Ancestors_d__29);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JToken___Ancestors_d__29);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0xfffffffe;
    pOVar1 = (Object__Class *)
             mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                       ((MethodInfo *)0x0);
    value[2].klass = pOVar1;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    return (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)value;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar2)();
  return pIVar3;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] BeforeSelf() */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_BeforeSelf
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken___BeforeSelf_d__31);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JToken___BeforeSelf_d__31);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0xfffffffe;
    pOVar1 = (Object__Class *)
             mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                       ((MethodInfo *)0x0);
    value[2].klass = pOVar1;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    return (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)value;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar2)();
  return pIVar3;
}


/* JEnumerable`1[JToken] Children() */

JEnumerable_1_JToken_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Children
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>->_1).
      cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  uStack_1 = (*(this->klass->vtable).Children.methodPtr)(this,(this->klass->vtable).Children.method)
  ;
  uVar2 = func_?(TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>
                          ,&uStack_1);
  pMVar3 = method;
  enumerable = (IEnumerable_1_System_Object_ *)
               (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                         (uVar2,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  this = (JToken *)0x0;
  JEnumerable`1[System::Object]::JEnumerable_1_System_Object___ctor
            ((JEnumerable_1_System_Object_ *)&this,enumerable,
             (pMVar3->field7_0x1c).rgctx_data[2].method);
  return (JEnumerable_1_System_Object_)(IEnumerable_1_System_Object_ *)this;
}


/* JsonReader CreateReader() */

JsonReader *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_CreateReader
          (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenReader);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonReader *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenReader);
  if (pJVar1 != (JsonReader *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_token);
      cRam_? = '\x01';
    }
    JsonReader::JsonReader__ctor(pJVar1,(MethodInfo *)0x0);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)this,StringLiteral_token,(MethodInfo *)0x0);
    pJVar1[1].klass = (JsonReader__Class *)this;
    func_?(pJVar1 + 1,this);
    pJVar1[1].fields._token = (int32_t)this;
    func_?(&pJVar1[1].fields,this);
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonReader *)(*pcVar2)();
  return pJVar1;
}


/* JToken DeepClone() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_DeepClone
                   (JToken *this,MethodInfo *method)

{
  pJVar1 = (JToken *)
           (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method)
  ;
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
    bVar1 = (*(t1->klass->vtable).__unknown_1.methodPtr)
                      (t1,t2,(t1->klass->vtable).__unknown_1.method);
    return bVar1;
  }
  return 0;
}


/* JValue EnsureValue(JToken) */

JValue * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_EnsureValue
                   (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    value = (JToken *)func_?(uVar1);
    func_?(value);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_value);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              ((ArgumentNullException *)value,paramName,method_00);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Linq__JToken__EnsureValue_MethodInfo__Newtonsoft__Json__Linq__JToken_
                           );
    func_?(value,uVar1);
    pJVar2 = extraout_EDX;
code_?:
    func_?(value,pJVar2);
    pcVar3 = (code *)swi(3);
    pJVar4 = (JValue *)(*pcVar3)();
    return pJVar4;
  }
  pJVar5 = value->klass;
  if (((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
       (pJVar5->_1).typeHierarchyDepth) &&
     ((JProperty__Class *)
      (pJVar5->_1).typeHierarchy
      [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
      TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
    pJVar2 = TypeInfo__Newtonsoft__Json__Linq__JProperty;
    if (((pJVar5->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth) ||
       ((JProperty__Class *)
        (pJVar5->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) goto code_?;
    value = JProperty::JProperty_get_Value((JProperty *)value,(MethodInfo *)0x0);
    if ((JValue *)value == (JValue *)0x0) {
      return (JValue *)0x0;
    }
  }
  if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
       (((JValue *)value)->klass->_1).typeHierarchyDepth) &&
     ((((JValue *)value)->klass->_1).typeHierarchy
      [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
    return (JValue *)value;
  }
  return (JValue *)0x0;
}


/* JToken FromObject(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_FromObject
                   (Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonSerializer);
    cRam_? = '\x01';
  }
  this = (JsonSerializer *)func_?(TypeInfo__Newtonsoft__Json__JsonSerializer);
  if (this != (JsonSerializer *)0x0) {
    JsonSerializer::JsonSerializer__ctor(this,(MethodInfo *)0x0);
    pJVar1 = JToken_FromObjectInternal(o,this,(MethodInfo *)0x0);
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar2)();
  return pJVar1;
}


/* JToken FromObjectInternal(Object, JsonSerializer) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_FromObjectInternal
                   (Object *o,JsonSerializer *jsonSerializer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
    func_?(&StringLiteral_o);
    func_?(&StringLiteral_jsonSerializer);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (o,StringLiteral_o,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)jsonSerializer,StringLiteral_jsonSerializer,(MethodInfo *)0x0);
  this = (JsonWriter *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
  if (this != (JsonWriter *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    JsonWriter::JsonWriter__ctor(this,(MethodInfo *)0x0);
    uStack_1 = 1;
    if (jsonSerializer != (JsonSerializer *)0x0) {
      JsonSerializer::JsonSerializer_Serialize_1(jsonSerializer,this,o,(MethodInfo *)0x0);
      if (this != (JsonWriter *)0x0) {
        if (this[1].klass == (JsonWriter__Class *)0x0) {
          pJVar4 = (JsonWriter__Class *)this[1].fields._top;
        }
        else {
          pJVar4 = this[1].klass;
        }
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return (JToken *)pJVar4;
      }
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pJVar6 = (JToken *)(*pcVar5)();
  return pJVar6;
}


/* JToken FromObject(Object, JsonSerializer) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_FromObject_1
                   (Object *o,JsonSerializer *jsonSerializer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
    func_?(&StringLiteral_o);
    func_?(&StringLiteral_jsonSerializer);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (o,StringLiteral_o,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)jsonSerializer,StringLiteral_jsonSerializer,(MethodInfo *)0x0);
  this = (JsonWriter *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
  if (this != (JsonWriter *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    JsonWriter::JsonWriter__ctor(this,(MethodInfo *)0x0);
    uStack_1 = 1;
    if (jsonSerializer != (JsonSerializer *)0x0) {
      JsonSerializer::JsonSerializer_Serialize_1(jsonSerializer,this,o,(MethodInfo *)0x0);
      if (this != (JsonWriter *)0x0) {
        if (this[1].klass == (JsonWriter__Class *)0x0) {
          pJVar4 = (JsonWriter__Class *)this[1].fields._top;
        }
        else {
          pJVar4 = this[1].klass;
        }
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return (JToken *)pJVar4;
      }
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pJVar6 = (JToken *)(*pcVar5)();
  return pJVar6;
}


/* String GetType(JToken) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_GetType
                   (JToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType);
    func_?(&StringLiteral_token);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)token,StringLiteral_token,(MethodInfo *)0x0);
  if (token != (JToken *)0x0) {
    pJVar1 = token->klass;
    pJVar2 = token;
    if (((pJVar1->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth) ||
       ((JProperty__Class *)
        (pJVar1->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
code_?:
      (*(pJVar2->klass->vtable).__unknown_2.methodPtr)();
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString
                         ((Enum *)&stack0xfffffff0,
                          (MethodInfo *)TypeInfo__Newtonsoft__Json__Linq__JTokenType);
      return pSVar3;
    }
    if (((pJVar1->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth) ||
       ((JProperty__Class *)
        (pJVar1->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) goto code_?;
    pJVar2 = JProperty::JProperty_get_Value((JProperty *)token,(MethodInfo *)0x0);
    token = (JToken *)0x0;
    if (pJVar2 != (JToken *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?(token);
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Boolean IsNullable(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_IsNullable
               (JToken *o,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
  if (iVar3 == 0xb) {
    return 1;
  }
  iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
  return iVar3 == 10;
}


/* JToken Load(JsonReader) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Load
                   (JsonReader *reader,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&StringLiteral_reader);
    cRam_? = '\x01';
  }
  pEVar1 = (Exception *)reader;
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  if (pEVar1 == (Exception *)0x0) {
code_?:
    func_?();
  }
  else {
    iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                      (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
    if (iVar2 != 0) {
code_?:
      iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      if (iVar2 == 1) {
        pJVar3 = JObject::JObject_Load((JsonReader *)pEVar1,(MethodInfo *)0x0);
        return (JToken *)pJVar3;
      }
      iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      if (iVar2 == 2) {
        pJVar4 = JArray::JArray_Load((JsonReader *)pEVar1,(MethodInfo *)0x0);
        return (JToken *)pJVar4;
      }
      iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      if (iVar2 == 4) {
        pJVar5 = JProperty::JProperty_Load((JsonReader *)pEVar1,(MethodInfo *)0x0);
        return (JToken *)pJVar5;
      }
      iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      if (iVar2 == 3) {
        pJVar6 = JConstructor::JConstructor_Load((JsonReader *)pEVar1,(MethodInfo *)0x0);
        return (JToken *)pJVar6;
      }
      token = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      bVar7 = JsonReader::JsonReader_IsStartToken(token,(MethodInfo *)0x0);
      if (bVar7 != 0) goto code_?;
      value = (Object *)func_?(8);
      this = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
      if (this != (JValue *)0x0) {
        JValue::JValue__ctor_11(this,value,(MethodInfo *)0x0);
        return (JToken *)this;
      }
      goto code_?;
    }
    cVar8 = (*(((JsonReader *)pEVar1)->klass->vtable).__unknown.methodPtr)
                      (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).__unknown.method);
    if (cVar8 != '\0') goto code_?;
  }
  uVar9 = func_?(&TypeInfo__System__Exception);
  pEVar1 = (Exception *)func_?(uVar9);
  func_?(pEVar1);
  pMVar10 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Error_reading_JToken_from_JsonRe);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar11,pMVar10);
  method = (MethodInfo *)
           func_?(&
                           MethodInfo__Newtonsoft__Json__Linq__JToken__ReadFrom_Newtonsoft__Json__JsonReader_
                          );
  reader = (JsonReader *)pEVar1;
  func_?();
code_?:
  uVar9 = func_?();
  func_?(uVar9);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  reader = (JsonReader *)0x1;
  func_?();
  args = (Object__Array *)func_?();
  func_?(pEVar1);
  func_?(7,pEVar1);
  reader = (JsonReader *)&reader;
  func_?();
  pJVar12 = (JsonReader *)func_?();
  func_?(args);
  func_?(args,pJVar12);
  reader = pJVar12;
  func_?();
  pMVar10 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Error_reading_JToken_from_JsonRe);
  pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar11,(IFormatProvider *)provider,args,pMVar10);
  uVar9 = func_?(&TypeInfo__System__Exception);
  pEVar1 = (Exception *)func_?(uVar9);
  func_?(pEVar1);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar11,(MethodInfo *)0x0);
  uStack13 =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Linq__JToken__ReadFrom_Newtonsoft__Json__JsonReader_
                      );
  pEStack14 = pEVar1;
  func_?();
  pcVar15 = (code *)swi(3);
  pJVar16 = (JToken *)(*pcVar15)();
  return pJVar16;
}


/* Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
     JToken_Newtonsoft_Json_IJsonLineInfo_HasLineInfo(JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__get_HasValue__);
    cRam_? = '\x01';
  }
  if ((this->fields)._lineNumber.hasValue == 0) {
    return 0;
  }
  return (this->fields)._linePosition.hasValue;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
        JToken_Newtonsoft_Json_IJsonLineInfo_get_LineNumber(JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__GetValueOrDefault__);
    cRam_? = '\x01';
  }
  return (this->fields)._lineNumber.value;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
        JToken_Newtonsoft_Json_IJsonLineInfo_get_LinePosition(JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__GetValueOrDefault__);
    cRam_? = '\x01';
  }
  return (this->fields)._linePosition.value;
}


/* IJEnumerable`1[JToken]
   Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.get_Item(Object) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
JToken_Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item
          (JToken *this,Object *key,MethodInfo *method)

{
  pIVar1 = (IJEnumerable_1_JToken_ *)
           (*(this->klass->vtable).get_Item.methodPtr)
                     (this,key,(this->klass->vtable).get_Item.method);
  return pIVar1;
}


/* JToken Parse(String) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Parse
                   (String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextReader);
    func_?(&TypeInfo__System__IO__StringReader);
    cRam_? = '\x01';
  }
  this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  if (this != (StringReader *)0x0) {
    mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,json,(MethodInfo *)0x0);
    this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
    if (this_00 != (JsonTextReader *)0x0) {
      JsonTextReader::JsonTextReader__ctor(this_00,(TextReader *)this,(MethodInfo *)0x0);
      pJVar1 = JToken_ReadFrom((JsonReader *)this_00,(MethodInfo *)0x0);
      return pJVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar2)();
  return pJVar1;
}


/* JToken ReadFrom(JsonReader) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ReadFrom
                   (JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&StringLiteral_reader);
    cRam_? = '\x01';
  }
  pEVar1 = (Exception *)reader;
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  if (pEVar1 == (Exception *)0x0) {
code_?:
    func_?();
  }
  else {
    iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                      (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
    if (iVar2 != 0) {
code_?:
      iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      if (iVar2 == 1) {
        pJVar3 = JObject::JObject_Load((JsonReader *)pEVar1,(MethodInfo *)0x0);
        return (JToken *)pJVar3;
      }
      iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      if (iVar2 == 2) {
        pJVar4 = JArray::JArray_Load((JsonReader *)pEVar1,(MethodInfo *)0x0);
        return (JToken *)pJVar4;
      }
      iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      if (iVar2 == 4) {
        pJVar5 = JProperty::JProperty_Load((JsonReader *)pEVar1,(MethodInfo *)0x0);
        return (JToken *)pJVar5;
      }
      iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      if (iVar2 == 3) {
        pJVar6 = JConstructor::JConstructor_Load((JsonReader *)pEVar1,(MethodInfo *)0x0);
        return (JToken *)pJVar6;
      }
      token = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      bVar7 = JsonReader::JsonReader_IsStartToken(token,(MethodInfo *)0x0);
      if (bVar7 != 0) goto code_?;
      value = (Object *)func_?(8);
      this = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
      if (this != (JValue *)0x0) {
        JValue::JValue__ctor_11(this,value,(MethodInfo *)0x0);
        return (JToken *)this;
      }
      goto code_?;
    }
    cVar8 = (*(((JsonReader *)pEVar1)->klass->vtable).__unknown.methodPtr)
                      (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).__unknown.method);
    if (cVar8 != '\0') goto code_?;
  }
  uVar9 = func_?(&TypeInfo__System__Exception);
  pEVar1 = (Exception *)func_?(uVar9);
  func_?(pEVar1);
  pMVar10 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Error_reading_JToken_from_JsonRe);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar11,pMVar10);
  method = (MethodInfo *)
           func_?(&
                           MethodInfo__Newtonsoft__Json__Linq__JToken__ReadFrom_Newtonsoft__Json__JsonReader_
                          );
  reader = (JsonReader *)pEVar1;
  func_?();
code_?:
  uVar9 = func_?();
  func_?(uVar9);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  reader = (JsonReader *)0x1;
  func_?();
  args = (Object__Array *)func_?();
  func_?(pEVar1);
  func_?(7,pEVar1);
  reader = (JsonReader *)&reader;
  func_?();
  pJVar12 = (JsonReader *)func_?();
  func_?(args);
  func_?(args,pJVar12);
  reader = pJVar12;
  func_?();
  pMVar10 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Error_reading_JToken_from_JsonRe);
  pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar11,(IFormatProvider *)provider,args,pMVar10);
  uVar9 = func_?(&TypeInfo__System__Exception);
  pEVar1 = (Exception *)func_?(uVar9);
  func_?(pEVar1);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar11,(MethodInfo *)0x0);
  uStack13 =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Linq__JToken__ReadFrom_Newtonsoft__Json__JsonReader_
                      );
  pEStack14 = pEVar1;
  func_?();
  pcVar15 = (code *)swi(3);
  pJVar16 = (JToken *)(*pcVar15)();
  return pJVar16;
}


/* Void Remove() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Remove
               (JToken *this,MethodInfo *method)

{
  if ((this->fields)._parent != (JContainer *)0x0) {
    pJVar1 = (this->fields)._parent;
    pJVar2 = pJVar1->klass;
    (*(pJVar2->vtable).RemoveItem.methodPtr)(pJVar1,this,(pJVar2->vtable).RemoveItem.method);
    return;
  }
  uVar3 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (InvalidOperationException *)func_?(uVar3);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_parent_is_missing_);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,method_00);
  func_?(&MethodInfo__Newtonsoft__Json__Linq__JToken__Remove__);
  func_?(this_00);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Replace(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Replace
               (JToken *this,JToken *value,MethodInfo *method)

{
  if ((this->fields)._parent != (JContainer *)0x0) {
    pJVar1 = (this->fields)._parent;
    pJVar2 = pJVar1->klass;
    (*(pJVar2->vtable).ReplaceItem.methodPtr)(pJVar1,this,value,(pJVar2->vtable).ReplaceItem.method)
    ;
    return;
  }
  uVar3 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (InvalidOperationException *)func_?(uVar3);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_parent_is_missing_);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JToken__Replace_MethodInfo__Newtonsoft__Json__Linq__JToken_
                 );
  func_?(this_00);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* JToken SelectToken(String) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_SelectToken
                   (JToken *this,String *path,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JPath);
    cRam_? = '\x01';
  }
  this_00 = (JPath *)func_?(TypeInfo__Newtonsoft__Json__Linq__JPath);
  if (this_00 != (JPath *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
      func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
      func_?(&StringLiteral_expression);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_00,ExceptionArgument__Enum_obj,unaff_EDI);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)path,StringLiteral_expression,(MethodInfo *)0x0);
    (this_00->fields)._expression = path;
    func_?(&this_00->fields,path);
    this_01 = (List_1_System_Object_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
    if (this_01 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<System::Object>__List__);
      (this_00->fields)._Parts_k__BackingField = this_01;
      func_?(&(this_00->fields)._Parts_k__BackingField,this_01);
      JPath::JPath_ParseMain(this_00,(MethodInfo *)0x0);
      pJVar1 = JPath::JPath_Evaluate(this_00,this,0,(MethodInfo *)0x0);
      return pJVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar2)();
  return pJVar1;
}


/* JToken SelectToken(String, Boolean) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_SelectToken_1
                   (JToken *this,String *path,bool errorWhenNoMatch,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JPath);
    cRam_? = '\x01';
  }
  this_00 = (JPath *)func_?(TypeInfo__Newtonsoft__Json__Linq__JPath);
  if (this_00 != (JPath *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
      func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
      func_?(&StringLiteral_expression);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_00,ExceptionArgument__Enum_obj,unaff_EDI);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)path,StringLiteral_expression,(MethodInfo *)0x0);
    (this_00->fields)._expression = path;
    func_?(&this_00->fields,path);
    this_01 = (List_1_System_Object_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
    if (this_01 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<System::Object>__List__);
      (this_00->fields)._Parts_k__BackingField = this_01;
      func_?(&(this_00->fields)._Parts_k__BackingField,this_01);
      JPath::JPath_ParseMain(this_00,(MethodInfo *)0x0);
      pJVar1 = JPath::JPath_Evaluate(this_00,this,errorWhenNoMatch,(MethodInfo *)0x0);
      return pJVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar2)();
  return pJVar1;
}


/* Void SetLineInfo(IJsonLineInfo) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_SetLineInfo
               (JToken *this,IJsonLineInfo *lineInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    cRam_? = '\x01';
  }
  if (lineInfo != (IJsonLineInfo *)0x0) {
    cVar1 = func_?(0,TypeInfo__Newtonsoft__Json__IJsonLineInfo,lineInfo);
    if (cVar1 != '\0') {
      value = func_?(1,TypeInfo__Newtonsoft__Json__IJsonLineInfo,lineInfo);
      value_00 = func_?(2,TypeInfo__Newtonsoft__Json__IJsonLineInfo,lineInfo);
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
        cRam_? = '\x01';
      }
      NStack_2.hasValue = 0;
      NStack_2._1_3_ = 0;
      NStack_2.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_2,value,MethodInfo__System__Nullable<int>__Nullable_int_);
      NVar3 = NStack_2;
      NStack_4.hasValue = 0;
      NStack_4._1_3_ = 0;
      NStack_4.value = 0;
      (this->fields)._lineNumber.hasValue = NStack_2.hasValue;
      *(undefined3 *)&(this->fields)._lineNumber.field_0x1 = NStack_2._1_3_;
      (this->fields)._lineNumber.value = NStack_2.value;
      NStack_2 = NVar3;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_4,value_00,MethodInfo__System__Nullable<int>__Nullable_int_);
      (this->fields)._linePosition.hasValue = NStack_4.hasValue;
      *(undefined3 *)&(this->fields)._linePosition.field_0x1 = NStack_4._1_3_;
      (this->fields)._linePosition.value = NStack_4.value;
    }
  }
  return;
}


/* Void SetLineInfo(Int32, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_SetLineInfo_1
               (JToken *this,int32_t lineNumber,int32_t linePosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    cRam_? = '\x01';
  }
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value = 0;
  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
            (&NStack_1,lineNumber,MethodInfo__System__Nullable<int>__Nullable_int_);
  NVar2 = NStack_1;
  NStack_3.hasValue = 0;
  NStack_3._1_3_ = 0;
  NStack_3.value = 0;
  (this->fields)._lineNumber.hasValue = NStack_1.hasValue;
  *(undefined3 *)&(this->fields)._lineNumber.field_0x1 = NStack_1._1_3_;
  (this->fields)._lineNumber.value = NStack_1.value;
  NStack_1 = NVar2;
  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
            (&NStack_3,linePosition,MethodInfo__System__Nullable<int>__Nullable_int_);
  (this->fields)._linePosition.hasValue = NStack_3.hasValue;
  *(undefined3 *)&(this->fields)._linePosition.field_0x1 = NStack_3._1_3_;
  (this->fields)._linePosition.value = NStack_3.value;
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
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  JStack_1._enumerable =
       (IEnumerable_1_System_Object_ *)
       (*(this->klass->vtable).Children.methodPtr)(this,(this->klass->vtable).Children.method);
  pIVar2 = JEnumerable`1[System::Object]::JEnumerable_1_System_Object__GetEnumerator
                     (&JStack_1,
                      MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__GetEnumerator__
                     );
  return (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)pIVar2;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::
JToken_System_Collections_IEnumerable_GetEnumerator(JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonSerializer);
    cRam_? = '\x01';
  }
  this_00 = (JsonSerializer *)func_?(TypeInfo__Newtonsoft__Json__JsonSerializer);
  if (this_00 != (JsonSerializer *)0x0) {
    JsonSerializer::JsonSerializer__ctor(this_00,(MethodInfo *)0x0);
    pOVar1 = (Object *)
             (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                       (this,this_00,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
    return pOVar1;
  }
  func_?();
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
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenReader);
    func_?(&StringLiteral_jsonSerializer);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)jsonSerializer,StringLiteral_jsonSerializer,(MethodInfo *)0x0);
  this_00 = (JTokenReader *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenReader);
  if (this_00 != (JTokenReader *)0x0) {
    JTokenReader::JTokenReader__ctor(this_00,this,(MethodInfo *)0x0);
    uStack_1 = 1;
    if (jsonSerializer != (JsonSerializer *)0x0) {
      pOVar4 = (Object *)(*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)();
      uStack_1 = 0xffffffff;
      if (this_00 != (JTokenReader *)0x0) {
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return pOVar4;
      }
      *unaff_FS_OFFSET = uStack_3;
      return pOVar4;
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
}


/* String ToString() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ToString
                   (JToken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
                   );
    cRam_? = '\x01';
  }
  pMVar1 = 
  Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
  ;
  iVar2 = *(int *)(
                  Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
                  ->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
    iVar2 = func_?(iVar2);
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_?(iVar2);
  }
  iVar2 = *(int *)(pMVar1->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
    iVar2 = func_?(iVar2);
  }
  pSVar3 = JToken_ToString_1(this,Formatting__Enum_Indented,
                             (JsonConverter__Array *)**(undefined4 **)(iVar2 + 0x5c),
                             (MethodInfo *)0x0);
  return pSVar3;
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
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextWriter);
    func_?(&TypeInfo__System__IO__StringWriter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  formatProvider =
       mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                 ((MethodInfo *)0x0);
  this_00 = (StringWriter *)func_?(TypeInfo__System__IO__StringWriter);
  if (this_00 != (StringWriter *)0x0) {
    mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
              (this_00,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
    uStack_1 = 1;
    this_01 = (JsonTextWriter *)func_?();
    if (this_01 != (JsonTextWriter *)0x0) {
      JsonTextWriter::JsonTextWriter__ctor(this_01,(TextWriter *)this_00,(MethodInfo *)0x0);
      (this_01->fields)._._formatting = formatting;
      (*(this->klass->vtable).__unknown_4.methodPtr)();
      if (this_00 != (StringWriter *)0x0) {
        pSVar4 = (String *)(*(this_00->klass->vtable).ToString.methodPtr)(this_00);
        uStack_1 = 0xffffffff;
        if (this_00 != (StringWriter *)0x0) {
          func_?(0,TypeInfo__System__IDisposable);
          *unaff_FS_OFFSET = uStack_3;
          return pSVar4;
        }
        *unaff_FS_OFFSET = uStack_3;
        return pSVar4;
      }
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* Boolean ValidateBoolean(JToken, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateBoolean
               (JToken *o,bool nullable,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
  if (iVar3 != 9) {
    if (nullable == 0) {
      return 0;
    }
    iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
    if (iVar3 != 0xb) {
      iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
      return iVar3 == 10;
    }
  }
  return 1;
}


/* Boolean ValidateBytes(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateBytes
               (JToken *o,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
  if (iVar3 != 0xe) {
    iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
    if (iVar3 != 0xb) {
      iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
      return iVar3 == 10;
    }
  }
  return 1;
}


/* Boolean ValidateDate(JToken, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateDate
               (JToken *o,bool nullable,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
  if (iVar3 != 0xc) {
    if (nullable == 0) {
      return 0;
    }
    iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
    if (iVar3 != 0xb) {
      iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
      return iVar3 == 10;
    }
  }
  return 1;
}


/* Boolean ValidateFloat(JToken, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateFloat
               (JToken *o,bool nullable,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
  if (iVar3 != 7) {
    iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
    if (iVar3 != 6) {
      if (nullable == 0) {
        return 0;
      }
      iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
      if (iVar3 != 0xb) {
        iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method)
        ;
        return iVar3 == 10;
      }
    }
  }
  return 1;
}


/* Boolean ValidateInteger(JToken, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateInteger
               (JToken *o,bool nullable,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
  if (iVar3 != 6) {
    if (nullable == 0) {
      return 0;
    }
    iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
    if (iVar3 != 0xb) {
      iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
      return iVar3 == 10;
    }
  }
  return 1;
}


/* Boolean ValidateString(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_ValidateString
               (JToken *o,MethodInfo *method)

{
  if (o == (JToken *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
  if (iVar3 != 8) {
    iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
    if (iVar3 != 5) {
      iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
      if (iVar3 != 0xd) {
        iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method)
        ;
        if (iVar3 != 0xb) {
          iVar3 = (*(o->klass->vtable).__unknown_2.methodPtr)
                            (o,(o->klass->vtable).__unknown_2.method);
          return iVar3 == 10;
        }
      }
    }
  }
  return 1;
}


/* Object Value[Object](Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Value
                   (JToken *this,Object *key,MethodInfo *method)

{
  uVar1 = (*(this->klass->vtable).get_Item.methodPtr)
                    (this,key,(this->klass->vtable).get_Item.method);
  pOVar2 = (Object *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (uVar1,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pOVar2;
}


/* IEnumerable`1[System.Object] Values[Object]() */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_Values(JToken *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar1);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar1);
  func_?(this);
  pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar2);
  func_?(0,pTVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Cannot_access_child_value_on__0_);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar1 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (InvalidOperationException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,pSVar3,(MethodInfo *)0x0);
  uStack4 =
       func_?(&
                       System__Collections__Generic__IEnumerable<System::Object>_MethodInfo__Newtonsoft__Json__Linq__JToken__Values<System::Object>__
                      );
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar6 = (IEnumerable_1_System_Object_ *)(*pcVar5)();
  return pIVar6;
}


/* JTokenEqualityComparer get_EqualityComparer() */

JTokenEqualityComparer *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_get_EqualityComparer(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenEqualityComparer);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken);
    cRam_? = '\x01';
  }
  if (TypeInfo__Newtonsoft__Json__Linq__JToken->static_fields->_equalityComparer ==
      (JTokenEqualityComparer *)0x0) {
    pJVar1 = (JTokenEqualityComparer *)
             func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenEqualityComparer);
    if (pJVar1 == (JTokenEqualityComparer *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pJVar1 = (JTokenEqualityComparer *)(*pcVar2)();
      return pJVar1;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Linq__JToken->static_fields->_equalityComparer = pJVar1;
    func_?(TypeInfo__Newtonsoft__Json__Linq__JToken->static_fields,pJVar1);
  }
  return TypeInfo__Newtonsoft__Json__Linq__JToken->static_fields->_equalityComparer;
}


/* JToken get_First() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_get_First
                   (JToken *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar1);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar1);
  pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar2);
  func_?(0,pTVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Cannot_access_child_value_on__0_);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar1 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (InvalidOperationException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,pSVar3,(MethodInfo *)0x0);
  uStack4 = func_?(&MethodInfo__Newtonsoft__Json__Linq__JToken__get_First__);
  func_?();
  pcVar5 = (code *)swi(3);
  pJVar6 = (JToken *)(*pcVar5)();
  return pJVar6;
}


/* JToken get_Item(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_get_Item
                   (JToken *this,Object *key,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar1);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar1);
  pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar2);
  func_?(0,pTVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Cannot_access_child_value_on__0_);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar1 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (InvalidOperationException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,pSVar3,(MethodInfo *)0x0);
  func_?(&MethodInfo__Newtonsoft__Json__Linq__JToken__get_Item_System__Object_);
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar5 = (JToken *)(*pcVar4)();
  return pJVar5;
}


/* JToken get_Last() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_get_Last
                   (JToken *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar1);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar1);
  pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar2);
  func_?(0,pTVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Cannot_access_child_value_on__0_);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar1 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (InvalidOperationException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,pSVar3,(MethodInfo *)0x0);
  uStack4 = func_?(&MethodInfo__Newtonsoft__Json__Linq__JToken__get_Last__);
  func_?();
  pcVar5 = (code *)swi(3);
  pJVar6 = (JToken *)(*pcVar5)();
  return pJVar6;
}


/* JToken get_Root() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_get_Root
                   (JToken *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._parent;
  if (pJVar1 != (JContainer *)0x0) {
    for (; this = (JToken *)pJVar1, (pJVar1->fields)._._parent != (JContainer *)0x0;
        pJVar1 = (pJVar1->fields)._._parent) {
    }
  }
  return this;
}


/* Boolean op_Explicit(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit
               (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar2);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar2);
    pSVar3 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pSVar3);
    func_?(0);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Boolean_);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar3,(IFormatProvider *)provider,args,method_00);
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar3,(MethodInfo *)0x0);
    func_?(&::
                     MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                   );
    func_?();
    pOVar4 = extraout_ECX;
    pBVar5 = extraout_EDX;
  }
  else {
    iVar6 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar6 != 9) goto code_?;
    pOVar4 = (pJVar1->fields)._value;
    if (pOVar4 == (Object *)0x0) goto code_?;
    pBVar5 = TypeInfo__System__Boolean;
    if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pbVar7 = (bool *)func_?(pOVar4);
      return *pbVar7;
    }
  }
  func_?(pOVar4,pBVar5);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* DateTimeOffset op_Explicit(JToken) */

DateTimeOffset *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_1
          (DateTimeOffset *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTimeOffset);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar2);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar2);
    pSVar3 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pSVar3);
    func_?(0);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_DateTimeO);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar3,(IFormatProvider *)provider,args,method_00);
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar3,(MethodInfo *)0x0);
    func_?(&::
                     MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                   );
    func_?();
    pOVar4 = extraout_ECX;
    pDVar5 = extraout_EDX;
  }
  else {
    iVar6 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar6 != 0xc) goto code_?;
    pOVar4 = (pJVar1->fields)._value;
    if (pOVar4 == (Object *)0x0) goto code_?;
    pDVar5 = TypeInfo__System__DateTimeOffset;
    if ((pOVar4->klass->_0).element_class == (TypeInfo__System__DateTimeOffset->_0).element_class)
    {
      puVar7 = (undefined4 *)func_?(pOVar4);
      uVar2 = puVar7[1];
      uVar8 = puVar7[2];
      uVar9 = puVar7[3];
      *(undefined4 *)&(__return_storage_ptr__->_dateTime)._dateData = *puVar7;
      *(undefined4 *)((int)&(__return_storage_ptr__->_dateTime)._dateData + 4) = uVar2;
      *(undefined4 *)&__return_storage_ptr__->_offsetMinutes = uVar8;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar9;
      return __return_storage_ptr__;
    }
  }
  func_?(pOVar4,pDVar5);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pDVar11 = (DateTimeOffset *)(*pcVar10)();
  return pDVar11;
}


/* UInt16 op_Explicit(JToken) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_10
                   (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar2 == 6) {
      value_00 = (pJVar1->fields)._value;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      uVar4 = mscorlib.dll::System::Convert::Convert_ToUInt16
                        (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      return uVar4;
    }
  }
  uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar5);
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar5 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar5);
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar6);
  func_?(0);
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_UInt16_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)pCVar3,args,method_00);
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar5);
  func_?(this);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
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
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    cRam_? = '\x01';
  }
  if (value != (JToken *)0x0) {
    pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
    if (pJVar1 == (JValue *)0x0) {
code_?:
      uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar2);
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      uVar2 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar2);
      pSVar4 = JToken_GetType(value,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pSVar4);
      NStack_5 = (Nullable_1_UInt32_)(ZEXT48(pSVar4) << 0x20);
      func_?();
      method_00 = (MethodInfo *)0x0;
      pSVar4 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Int32_);
      pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (pSVar4,(IFormatProvider *)pCVar3,args,method_00);
      uVar2 = func_?(&TypeInfo__System__ArgumentException);
      this = (ArgumentException *)func_?(uVar2);
      func_?(this);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this,pSVar4,(MethodInfo *)0x0);
      uStack6 =
           func_?(&::
                            MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                          );
      func_?();
      pcVar7 = (code *)swi(3);
      NVar8 = (Nullable_1_Int32_)(*pcVar7)();
      return NVar8;
    }
    iVar9 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar9 != 6) {
      iVar9 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Type.method);
      if (iVar9 != 0xb) {
        iVar9 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).get_Type.method);
        if (iVar9 != 10) goto code_?;
      }
    }
    if ((pJVar1->fields)._value != (Object *)0x0) {
      value_00 = (pJVar1->fields)._value;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      value_01 = mscorlib.dll::System::Convert::Convert_ToInt32_1
                           (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      NStack_5.hasValue = 0;
      NStack_5._1_3_ = 0;
      NStack_5.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_5,value_01,MethodInfo__System__Nullable<int>__Nullable_int_);
      NVar10.hasValue = NStack_5.hasValue;
      uVar11._1_3_ = NStack_5._1_3_;
      register0x00000008 = NStack_5.value;
      return NVar10;
    }
  }
  NVar8.hasValue = 0;
  uVar12._1_3_ = 0;
  register0x00000008 = 0;
  return NVar8;
}


/* Nullable`1[Int16] op_Explicit(JToken) */

Nullable_1_Int16_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_12
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&MethodInfo__System__Nullable<short>__Nullable_short_);
    cRam_? = '\x01';
  }
  if (value != (JToken *)0x0) {
    pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
    if (pJVar1 == (JValue *)0x0) {
code_?:
      uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar2);
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      uVar2 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar2);
      pSVar4 = JToken_GetType(value,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pSVar4);
      func_?(0);
      method_00 = (MethodInfo *)0x0;
      pSVar4 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Int16_);
      pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (pSVar4,(IFormatProvider *)pCVar3,args,method_00);
      uVar2 = func_?(&TypeInfo__System__ArgumentException);
      this = (ArgumentException *)func_?(uVar2);
      func_?(this);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this,pSVar4,(MethodInfo *)0x0);
      uStack5 =
           func_?(&::
                            MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                          );
      pAStack6 = this;
      func_?();
      pcVar7 = (code *)swi(3);
      NVar8 = (Nullable_1_Int16_)(*pcVar7)();
      return NVar8;
    }
    iVar9 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar9 != 6) {
      iVar9 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Type.method);
      if (iVar9 != 0xb) {
        iVar9 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).get_Type.method);
        if (iVar9 != 10) goto code_?;
      }
    }
    if ((pJVar1->fields)._value != (Object *)0x0) {
      value_00 = (pJVar1->fields)._value;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      value_01 = mscorlib.dll::System::Convert::Convert_ToInt16
                           (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      value = (JToken *)0x0;
      mscorlib.dll::System::Nullable`1[UInt16]::Nullable_1_UInt16___ctor
                ((Nullable_1_UInt16_ *)&value,value_01,
                 MethodInfo__System__Nullable<short>__Nullable_short_);
      return (Nullable_1_Int16_)value;
    }
  }
  NVar8.hasValue = 0;
  NVar8._1_1_ = 0;
  NVar8.value = 0;
  return NVar8;
}


/* Nullable`1[UInt16] op_Explicit(JToken) */

Nullable_1_UInt16_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_13
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&MethodInfo__System__Nullable<unsigned_short>__Nullable_unsigned_short_);
    cRam_? = '\x01';
  }
  if (value != (JToken *)0x0) {
    pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
    if (pJVar1 == (JValue *)0x0) {
code_?:
      uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar2);
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      uVar2 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar2);
      pSVar4 = JToken_GetType(value,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pSVar4);
      func_?(0);
      method_00 = (MethodInfo *)0x0;
      pSVar4 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_UInt16_);
      pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (pSVar4,(IFormatProvider *)pCVar3,args,method_00);
      uVar2 = func_?(&TypeInfo__System__ArgumentException);
      this = (ArgumentException *)func_?(uVar2);
      func_?(this);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this,pSVar4,(MethodInfo *)0x0);
      uStack5 =
           func_?(&::
                            MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                          );
      pAStack6 = this;
      func_?();
      pcVar7 = (code *)swi(3);
      NVar8 = (Nullable_1_UInt16_)(*pcVar7)();
      return NVar8;
    }
    iVar9 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar9 != 6) {
      iVar9 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Type.method);
      if (iVar9 != 0xb) {
        iVar9 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).get_Type.method);
        if (iVar9 != 10) goto code_?;
      }
    }
    if ((pJVar1->fields)._value != (Object *)0x0) {
      value_00 = (pJVar1->fields)._value;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      value_01 = mscorlib.dll::System::Convert::Convert_ToInt16
                           (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      value = (JToken *)0x0;
      mscorlib.dll::System::Nullable`1[UInt16]::Nullable_1_UInt16___ctor
                ((Nullable_1_UInt16_ *)&value,value_01,
                 MethodInfo__System__Nullable<unsigned_short>__Nullable_unsigned_short_);
      return (Nullable_1_UInt16_)value;
    }
  }
  NVar8.hasValue = 0;
  NVar8._1_1_ = 0;
  NVar8.value = 0;
  return NVar8;
}


/* DateTime op_Explicit(JToken) */

DateTime Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_14
                   (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar2);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar2);
    pSVar3 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pSVar3);
    func_?(0);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_DateTime_);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar3,(IFormatProvider *)provider,args,method_00);
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar3,(MethodInfo *)0x0);
    func_?(&::
                     MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                   );
    func_?();
    pOVar4 = extraout_ECX;
    pDVar5 = extraout_EDX;
  }
  else {
    iVar6 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar6 != 0xc) goto code_?;
    pOVar4 = (pJVar1->fields)._value;
    if (pOVar4 == (Object *)0x0) goto code_?;
    pDVar5 = TypeInfo__System__DateTime;
    if ((pOVar4->klass->_0).element_class == (TypeInfo__System__DateTime->_0).element_class) {
      puVar7 = (uint64_t *)func_?(pOVar4);
      return (DateTime)*puVar7;
    }
  }
  func_?(pOVar4,pDVar5);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  DVar9._dateData = (*pcVar8)();
  return (DateTime)DVar9._dateData;
}


/* Nullable`1[Int64] op_Explicit(JToken) */

Nullable_1_Int64_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_15
          (Nullable_1_Int64_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Nullable<long>);
    cRam_? = '\x01';
  }
  puVar1 = &stack0xfffffff0;
  func_?();
  if (value == (JToken *)0x0) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    *(undefined4 *)&__return_storage_ptr__->value = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = 0;
    return __return_storage_ptr__;
  }
  pJVar2 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar2 != (JValue *)0x0) {
    iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
    if (iVar3 != 6) {
      iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
      if (iVar3 != 0xb) {
        iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
        if (iVar3 != 10) goto code_?;
      }
    }
    pOVar4 = (pJVar2->fields)._value;
    if ((pOVar4 == (Object *)0x0) ||
       ((Il2CppClass *)pOVar4->klass == (TypeInfo__System__Nullable<long>->_0).element_class)) {
      pNVar5 = TypeInfo__System__Nullable<long>;
      func_?(pOVar4);
      *(Nullable_1_Int64___Class **)__return_storage_ptr__ = pNVar5;
      *(undefined1 **)&__return_storage_ptr__->field_0x4 = puVar1;
      *(undefined4 *)&__return_storage_ptr__->value = unaff_EBX;
      *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = unaff_EBP;
      return __return_storage_ptr__;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?();
  func_?(args,pSVar6);
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Int64_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)provider,args,method_00);
  func_?();
  this = (ArgumentException *)func_?();
  func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  pNVar10 = (Nullable_1_Int64_ *)(*pcVar9)();
  return pNVar10;
}


/* Nullable`1[Single] op_Explicit(JToken) */

Nullable_1_Single_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_16
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&MethodInfo__System__Nullable<float>__Nullable_float_);
    cRam_? = '\x01';
  }
  if (value != (JToken *)0x0) {
    pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
    if (pJVar1 == (JValue *)0x0) {
code_?:
      uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar2);
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      uVar2 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar2);
      pSVar4 = JToken_GetType(value,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pSVar4);
      func_?();
      method_00 = (MethodInfo *)0x0;
      pSVar4 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Single_);
      pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (pSVar4,(IFormatProvider *)pCVar3,args,method_00);
      uVar2 = func_?(&TypeInfo__System__ArgumentException);
      this = (ArgumentException *)func_?(uVar2);
      func_?(this);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this,pSVar4,(MethodInfo *)0x0);
      uStack5 =
           func_?(&::
                            MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                          );
      func_?();
      pcVar6 = (code *)swi(3);
      NVar7 = (Nullable_1_Single_)(*pcVar6)();
      return NVar7;
    }
    iVar8 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar8 != 7) {
      iVar8 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Type.method);
      if (iVar8 != 6) {
        iVar8 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).get_Type.method);
        if (iVar8 != 0xb) {
          iVar8 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                            (pJVar1,(pJVar1->klass->vtable).get_Type.method);
          if (iVar8 != 10) goto code_?;
        }
      }
    }
    if ((pJVar1->fields)._value != (Object *)0x0) {
      value_00 = (pJVar1->fields)._value;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      value_01 = mscorlib.dll::System::Convert::Convert_ToSingle
                           (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      NVar9.value = value_01;
      NVar9._0_4_ = (Nullable_1_Single_ *)&stack0xfffffff4;
      mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single___ctor
                ((Nullable_1_Single_ *)&stack0xfffffff4,value_01,
                 MethodInfo__System__Nullable<float>__Nullable_float_);
      return NVar9;
    }
  }
  NVar7.hasValue = 0;
  uVar10._1_3_ = 0;
  register0x00000008 = 0.0;
  return NVar7;
}


/* Decimal op_Explicit(JToken) */

Decimal * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_17
                    (Decimal *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar2 != 7) {
      iVar2 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Type.method);
      if (iVar2 != 6) goto code_?;
    }
    value_00 = (pJVar1->fields)._value;
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    pDVar4 = mscorlib.dll::System::Convert::Convert_ToDecimal_1
                       ((Decimal *)&iStack_5,value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
    iVar6 = pDVar4->hi;
    iVar7 = pDVar4->lo;
    iVar8 = pDVar4->mid;
    __return_storage_ptr__->flags = pDVar4->flags;
    __return_storage_ptr__->hi = iVar6;
    __return_storage_ptr__->lo = iVar7;
    __return_storage_ptr__->mid = iVar8;
    return __return_storage_ptr__;
  }
code_?:
  uVar9 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar9);
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar9 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar9);
  pSVar10 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar10);
  iStack_5 = 0;
  pSStack_11 = pSVar10;
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Decimal_);
  pSVar10 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar10,(IFormatProvider *)pCVar3,args,method_00);
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar9);
  func_?(this);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar10,(MethodInfo *)0x0)
  ;
  func_?(&::
                   MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                 );
  func_?();
  pcVar12 = (code *)swi(3);
  pDVar4 = (Decimal *)(*pcVar12)();
  return pDVar4;
}


/* Nullable`1[UInt32] op_Explicit(JToken) */

Nullable_1_UInt32_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_18
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Nullable<unsigned_int>);
    cRam_? = '\x01';
  }
  puVar1 = &stack0xffffffe8;
  func_?();
  if (value == (JToken *)0x0) {
    NVar2.hasValue = 0;
    uVar3._1_3_ = 0;
    register0x00000008 = 0;
    return NVar2;
  }
  pJVar4 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar4 != (JValue *)0x0) {
    iVar5 = (*(pJVar4->klass->vtable).get_Type.methodPtr)();
    if (iVar5 != 6) {
      iVar5 = (*(pJVar4->klass->vtable).get_Type.methodPtr)();
      if (iVar5 != 0xb) {
        iVar5 = (*(pJVar4->klass->vtable).get_Type.methodPtr)();
        if (iVar5 != 10) goto code_?;
      }
    }
    pOVar6 = (pJVar4->fields)._value;
    if ((pOVar6 == (Object *)0x0) ||
       ((Il2CppClass *)pOVar6->klass == (TypeInfo__System__Nullable<unsigned_int>->_0).element_class
       )) {
      pNVar7 = TypeInfo__System__Nullable<unsigned_int>;
      func_?(pOVar6);
      NVar8.value = (uint32_t)puVar1;
      NVar8._0_4_ = pNVar7;
      return NVar8;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  pSVar9 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?();
  func_?(args,pSVar9);
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar9 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_UInt32_);
  pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar9,(IFormatProvider *)provider,args,method_00);
  func_?();
  this = (ArgumentException *)func_?();
  func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar9,(MethodInfo *)0x0);
  uStack10 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
  func_?();
  pcVar11 = (code *)swi(3);
  NVar2 = (Nullable_1_UInt32_)(*pcVar11)();
  return NVar2;
}


/* Nullable`1[UInt64] op_Explicit(JToken) */

Nullable_1_UInt64_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_19
          (Nullable_1_UInt64_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Nullable<unsigned_long>);
    cRam_? = '\x01';
  }
  puVar1 = &stack0xfffffff0;
  func_?();
  if (value == (JToken *)0x0) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    *(undefined4 *)&__return_storage_ptr__->value = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = 0;
    return __return_storage_ptr__;
  }
  pJVar2 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar2 != (JValue *)0x0) {
    iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
    if (iVar3 != 6) {
      iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
      if (iVar3 != 0xb) {
        iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
        if (iVar3 != 10) goto code_?;
      }
    }
    pOVar4 = (pJVar2->fields)._value;
    if ((pOVar4 == (Object *)0x0) ||
       ((Il2CppClass *)pOVar4->klass ==
        (TypeInfo__System__Nullable<unsigned_long>->_0).element_class)) {
      pNVar5 = TypeInfo__System__Nullable<unsigned_long>;
      func_?(pOVar4);
      *(Nullable_1_UInt64___Class **)__return_storage_ptr__ = pNVar5;
      *(undefined1 **)&__return_storage_ptr__->field_0x4 = puVar1;
      *(undefined4 *)&__return_storage_ptr__->value = unaff_EBX;
      *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = unaff_EBP;
      return __return_storage_ptr__;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?();
  func_?(args,pSVar6);
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_UInt64_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)provider,args,method_00);
  func_?();
  this = (ArgumentException *)func_?();
  func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  pNVar10 = (Nullable_1_UInt64_ *)(*pcVar9)();
  return pNVar10;
}


/* Nullable`1[Boolean] op_Explicit(JToken) */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_2
          (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Nullable<bool>);
    cRam_? = '\x01';
  }
  func_?();
  if (value == (JToken *)0x0) {
    NVar1.hasValue = 0;
    NVar1.value = 0;
    return NVar1;
  }
  pJVar2 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar2 != (JValue *)0x0) {
    iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
    if (iVar3 != 9) {
      iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
      if (iVar3 != 0xb) {
        iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
        if (iVar3 != 10) goto code_?;
      }
    }
    pOVar4 = (pJVar2->fields)._value;
    if ((pOVar4 == (Object *)0x0) ||
       ((Il2CppClass *)pOVar4->klass == (TypeInfo__System__Nullable<bool>->_0).element_class)) {
      pNVar5 = TypeInfo__System__Nullable<bool>;
      func_?(pOVar4);
      return SUB42(pNVar5,0);
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?();
  func_?(args,pSVar6);
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Boolean_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)provider,args,method_00);
  func_?();
  this = (ArgumentException *)func_?();
  func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
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
    func_?(&TypeInfo__System__Double);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar2);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar2);
    pSVar3 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pSVar3);
    func_?(0);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Double_);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar3,(IFormatProvider *)provider,args,method_00);
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar3,(MethodInfo *)0x0);
    func_?(&::
                     MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                   );
    func_?();
    pOVar4 = extraout_ECX;
    pDVar5 = extraout_EDX;
  }
  else {
    iVar6 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar6 != 7) {
      iVar6 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Type.method);
      if (iVar6 != 6) goto code_?;
    }
    pOVar4 = (pJVar1->fields)._value;
    if (pOVar4 == (Object *)0x0) goto code_?;
    pDVar5 = TypeInfo__System__Double;
    if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Double->_0).element_class) {
      pdVar7 = (double *)func_?(pOVar4);
      return *pdVar7;
    }
  }
  func_?(pOVar4,pDVar5);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  fVar9 = (float10)(*pcVar8)();
  return (double)fVar9;
}


/* Single op_Explicit(JToken) */

float Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_21
                (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar2 != 7) {
      iVar2 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Type.method);
      if (iVar2 != 6) goto code_?;
    }
    value_00 = (pJVar1->fields)._value;
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    fVar4 = mscorlib.dll::System::Convert::Convert_ToSingle
                      (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
    return fVar4;
  }
code_?:
  uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar5);
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar5 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar5);
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar6);
  func_?(0);
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Single_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)pCVar3,args,method_00);
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar5);
  func_?(this);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
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
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if (value == (JToken *)0x0) {
    pSVar1 = (String *)0x0;
  }
  else {
    pJVar2 = JToken_EnsureValue(value,(MethodInfo *)0x0);
    if ((pJVar2 == (JValue *)0x0) ||
       ((((iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)
                             (pJVar2,(pJVar2->klass->vtable).get_Type.method), iVar3 != 8 &&
          (iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)
                             (pJVar2,(pJVar2->klass->vtable).get_Type.method), iVar3 != 5)) &&
         (iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)
                            (pJVar2,(pJVar2->klass->vtable).get_Type.method), iVar3 != 0xd)) &&
        ((iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)
                            (pJVar2,(pJVar2->klass->vtable).get_Type.method), iVar3 != 0xb &&
         (iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)
                            (pJVar2,(pJVar2->klass->vtable).get_Type.method), iVar3 != 10)))))) {
code_?:
      uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar4);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar4 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar4);
      pSVar1 = JToken_GetType(value,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pSVar1);
      func_?(0);
      method_00 = (MethodInfo *)0x0;
      pSVar1 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_String_);
      pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (pSVar1,(IFormatProvider *)provider,args,method_00);
      uVar4 = func_?(&TypeInfo__System__ArgumentException);
      this = (ArgumentException *)func_?(uVar4);
      func_?(this);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this,pSVar1,(MethodInfo *)0x0);
      uStack5 =
           func_?(&::
                            MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                          );
      pAStack6 = this;
      func_?();
      pcVar7 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar7)();
      return pSVar1;
    }
    pSVar8 = (String *)(pJVar2->fields)._value;
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
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar2 == 6) {
      value_00 = (pJVar1->fields)._value;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      uVar4 = mscorlib.dll::System::Convert::Convert_ToUInt32_1
                        (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      return uVar4;
    }
  }
  uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar5);
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar5 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar5);
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar6);
  func_?(0);
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_UInt32_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)pCVar3,args,method_00);
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar5);
  func_?(this);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
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
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar2 == 6) {
      value_00 = (pJVar1->fields)._value;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      uVar4 = mscorlib.dll::System::Convert::Convert_ToUInt64
                        (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      return uVar4;
    }
  }
  uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar5);
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar5 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar5);
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar6);
  func_?(0);
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_UInt64_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)pCVar3,args,method_00);
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar5);
  func_?(this);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
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
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar2);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar2);
    pSVar3 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pSVar3);
    func_?(0);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_byte_arra);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar3,(IFormatProvider *)provider,args,method_00);
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this = (Byte__Array__Class *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              ((ArgumentException *)this,pSVar3,(MethodInfo *)0x0);
    func_?(&::
                     MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                   );
    func_?();
  }
  else {
    iVar4 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar4 != 0xe) {
      iVar4 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Type.method);
      if (iVar4 != 0xb) {
        iVar4 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).get_Type.method);
        if (iVar4 != 10) goto code_?;
      }
    }
    this = TypeInfo__System__Byte;
    pSVar3 = (String *)(pJVar1->fields)._value;
    if (pSVar3 == (String *)0x0) {
      return (Byte__Array *)0x0;
    }
    pBVar5 = (Byte__Array *)func_?(pSVar3,TypeInfo__System__Byte);
    if (pBVar5 != (Byte__Array *)0x0) {
      return pBVar5;
    }
  }
  func_?(pSVar3,this);
  pcVar6 = (code *)swi(3);
  pBVar5 = (Byte__Array *)(*pcVar6)();
  return pBVar5;
}


/* Int64 op_Explicit(JToken) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_3
                  (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int64);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 == (JValue *)0x0) {
code_?:
    uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar2);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar2);
    pSVar3 = JToken_GetType(value,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pSVar3);
    func_?(0);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Int64_);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar3,(IFormatProvider *)provider,args,method_00);
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar3,(MethodInfo *)0x0);
    func_?(&::
                     MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                   );
    func_?();
    pOVar4 = extraout_ECX;
    pIVar5 = extraout_EDX;
  }
  else {
    iVar6 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar6 != 6) goto code_?;
    pOVar4 = (pJVar1->fields)._value;
    if (pOVar4 == (Object *)0x0) goto code_?;
    pIVar5 = TypeInfo__System__Int64;
    if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Int64->_0).element_class) {
      piVar7 = (int64_t *)func_?(pOVar4);
      return *piVar7;
    }
  }
  func_?(pOVar4,pIVar5);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  iVar9 = (*pcVar8)();
  return iVar9;
}


/* Nullable`1[DateTime] op_Explicit(JToken) */

Nullable_1_DateTime_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_4
          (Nullable_1_DateTime_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Nullable<System::DateTime>);
    cRam_? = '\x01';
  }
  puVar1 = &stack0xfffffff0;
  func_?();
  if (value == (JToken *)0x0) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    *(undefined4 *)&(__return_storage_ptr__->value)._dateData = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->value)._dateData + 4) = 0;
    return __return_storage_ptr__;
  }
  pJVar2 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar2 != (JValue *)0x0) {
    iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
    if (iVar3 != 0xc) {
      iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
      if (iVar3 != 0xb) {
        iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
        if (iVar3 != 10) goto code_?;
      }
    }
    pOVar4 = (pJVar2->fields)._value;
    if ((pOVar4 == (Object *)0x0) ||
       ((Il2CppClass *)pOVar4->klass ==
        (TypeInfo__System__Nullable<System::DateTime>->_0).element_class)) {
      pNVar5 = TypeInfo__System__Nullable<System::DateTime>;
      func_?(pOVar4);
      *(Nullable_1_DateTime___Class **)__return_storage_ptr__ = pNVar5;
      *(undefined1 **)&__return_storage_ptr__->field_0x4 = puVar1;
      *(undefined4 *)&(__return_storage_ptr__->value)._dateData = unaff_EBX;
      *(undefined4 *)((int)&(__return_storage_ptr__->value)._dateData + 4) = unaff_EBP;
      return __return_storage_ptr__;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?();
  func_?(args,pSVar6);
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_DateTime_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)provider,args,method_00);
  func_?();
  this = (ArgumentException *)func_?();
  func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  pNVar10 = (Nullable_1_DateTime_ *)(*pcVar9)();
  return pNVar10;
}


/* Nullable`1[DateTimeOffset] op_Explicit(JToken) */

Nullable_1_DateTimeOffset_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_5
          (Nullable_1_DateTimeOffset_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Nullable<System::DateTimeOffset>);
    cRam_? = '\x01';
  }
  puVar1 = &stack0xfffffff0;
  func_?();
  if (value == (JToken *)0x0) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    *(undefined4 *)&(__return_storage_ptr__->value)._dateTime._dateData = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->value)._dateTime._dateData + 4) = 0;
    *(undefined8 *)&(__return_storage_ptr__->value)._offsetMinutes = 0;
    return __return_storage_ptr__;
  }
  pJVar2 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar2 != (JValue *)0x0) {
    iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
    if (iVar3 != 0xc) {
      iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
      if (iVar3 != 0xb) {
        iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
        if (iVar3 != 10) goto code_?;
      }
    }
    pOVar4 = (pJVar2->fields)._value;
    if ((pOVar4 == (Object *)0x0) ||
       ((Il2CppClass *)pOVar4->klass ==
        (TypeInfo__System__Nullable<System::DateTimeOffset>->_0).element_class)) {
      pNVar5 = TypeInfo__System__Nullable<System::DateTimeOffset>;
      func_?(pOVar4);
      *(Nullable_1_DateTimeOffset___Class **)__return_storage_ptr__ = pNVar5;
      *(undefined1 **)&__return_storage_ptr__->field_0x4 = puVar1;
      *(undefined4 *)&(__return_storage_ptr__->value)._dateTime._dateData = unaff_EBX;
      *(undefined4 *)((int)&(__return_storage_ptr__->value)._dateTime._dateData + 4) = unaff_EBP;
      *(ulonglong *)&(__return_storage_ptr__->value)._offsetMinutes =
           CONCAT44(__return_storage_ptr__,unaff_retaddr);
      return __return_storage_ptr__;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?();
  func_?(args,pSVar6);
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_DateTimeO);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)provider,args,method_00);
  func_?();
  this = (ArgumentException *)func_?();
  func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  pNVar10 = (Nullable_1_DateTimeOffset_ *)(*pcVar9)();
  return pNVar10;
}


/* Nullable`1[Decimal] op_Explicit(JToken) */

Nullable_1_Decimal_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_6
          (Nullable_1_Decimal_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&MethodInfo__System__Nullable<System::Decimal>__Nullable_System__Decimal_);
    cRam_? = '\x01';
  }
  if (value != (JToken *)0x0) {
    pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
    if (pJVar1 == (JValue *)0x0) {
code_?:
      uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar2);
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      uVar2 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar2);
      pSVar4 = JToken_GetType(value,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pSVar4);
      func_?();
      method_00 = (MethodInfo *)0x0;
      pSVar4 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Decimal_);
      pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (pSVar4,(IFormatProvider *)pCVar3,args,method_00);
      uVar2 = func_?(&TypeInfo__System__ArgumentException);
      this = (ArgumentException *)func_?(uVar2);
      func_?(this);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this,pSVar4,(MethodInfo *)0x0);
      func_?(&::
                       MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                     );
      func_?();
      pcVar5 = (code *)swi(3);
      pNVar6 = (Nullable_1_Decimal_ *)(*pcVar5)();
      return pNVar6;
    }
    iVar7 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar7 != 7) {
      iVar7 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Type.method);
      if (iVar7 != 6) {
        iVar7 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).get_Type.method);
        if (iVar7 != 0xb) {
          iVar7 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                            (pJVar1,(pJVar1->klass->vtable).get_Type.method);
          if (iVar7 != 10) goto code_?;
        }
      }
    }
    if ((pJVar1->fields)._value != (Object *)0x0) {
      value_00 = (pJVar1->fields)._value;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      pDVar8 = mscorlib.dll::System::Convert::Convert_ToDecimal_1
                         ((Decimal *)&stack0xffffffec,value_00,(IFormatProvider *)pCVar3,
                          (MethodInfo *)0x0);
      iVar9 = pDVar8->hi;
      iVar10 = pDVar8->lo;
      iVar11 = pDVar8->mid;
      auVar12._0_4_ = pDVar8->hi;
      auVar12._4_4_ = pDVar8->lo;
      auVar12._8_4_ = pDVar8->mid;
      iVar13 = 0;
      iVar14 = 0;
      iVar15 = 0;
      mscorlib.dll::System::Nullable`1[Decimal]::Nullable_1_Decimal___ctor
                ((Nullable_1_Decimal_ *)&stack0xffffffd4,(Decimal)ZEXT1224(auVar12),in_stack_16
                );
      *(int32_t *)__return_storage_ptr__ = iVar9;
      *(int32_t *)&__return_storage_ptr__->field_0x4 = iVar10;
      (__return_storage_ptr__->value).flags = iVar11;
      (__return_storage_ptr__->value).hi = iVar13;
      (__return_storage_ptr__->value).lo = iVar14;
      (__return_storage_ptr__->value).mid = iVar15;
      return __return_storage_ptr__;
    }
  }
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
  (__return_storage_ptr__->value).flags = 0;
  (__return_storage_ptr__->value).hi = 0;
  (__return_storage_ptr__->value).lo = 0;
  (__return_storage_ptr__->value).mid = 0;
  return __return_storage_ptr__;
}


/* Nullable`1[Double] op_Explicit(JToken) */

Nullable_1_Double_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_7
          (Nullable_1_Double_ *__return_storage_ptr__,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Nullable<double>);
    cRam_? = '\x01';
  }
  puVar1 = &stack0xfffffff0;
  func_?();
  if (value == (JToken *)0x0) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    *(undefined4 *)&__return_storage_ptr__->value = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = 0;
    return __return_storage_ptr__;
  }
  pJVar2 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar2 != (JValue *)0x0) {
    iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
    if (iVar3 != 7) {
      iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
      if (iVar3 != 6) {
        iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
        if (iVar3 != 0xb) {
          iVar3 = (*(pJVar2->klass->vtable).get_Type.methodPtr)();
          if (iVar3 != 10) goto code_?;
        }
      }
    }
    pOVar4 = (pJVar2->fields)._value;
    if ((pOVar4 == (Object *)0x0) ||
       ((Il2CppClass *)pOVar4->klass == (TypeInfo__System__Nullable<double>->_0).element_class)) {
      pNVar5 = TypeInfo__System__Nullable<double>;
      func_?(pOVar4);
      *(Nullable_1_Double___Class **)__return_storage_ptr__ = pNVar5;
      *(undefined1 **)&__return_storage_ptr__->field_0x4 = puVar1;
      *(undefined4 *)&__return_storage_ptr__->value = unaff_EBX;
      *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = unaff_EBP;
      return __return_storage_ptr__;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?();
  func_?(args,pSVar6);
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Double_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)provider,args,method_00);
  func_?();
  this = (ArgumentException *)func_?();
  func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
  pAStack8 = this;
  func_?();
  pcVar9 = (code *)swi(3);
  pNVar10 = (Nullable_1_Double_ *)(*pcVar9)();
  return pNVar10;
}


/* Int32 op_Explicit(JToken) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Explicit_8
                  (JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar2 == 6) {
      value_00 = (pJVar1->fields)._value;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32_1
                        (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      return iVar4;
    }
  }
  uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar5);
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar5 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar5);
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar6);
  func_?(0);
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Int32_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)pCVar3,args,method_00);
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar5);
  func_?(this);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
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
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  pJVar1 = JToken_EnsureValue(value,(MethodInfo *)0x0);
  if (pJVar1 != (JValue *)0x0) {
    iVar2 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar2 == 6) {
      value_00 = (pJVar1->fields)._value;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      iVar4 = mscorlib.dll::System::Convert::Convert_ToInt16
                        (value_00,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      return iVar4;
    }
  }
  uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar5);
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar5 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar5);
  pSVar6 = JToken_GetType(value,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar6);
  func_?(0);
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Can_not_convert__0__to_Int16_);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)pCVar3,args,method_00);
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar5);
  func_?(this);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
  uStack7 =
       func_?(&::
                        MethodInfo__Newtonsoft__Json__Linq__JToken__op_Explicit_MethodInfo__Newtonsoft__Json__Linq__JToken_
                      );
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
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Boolean);
      cRam_? = '\x01';
    }
    bStack2 = value;
    method_00 = TypeInfo__System__Boolean;
    pMVar3 = (MonitorData *)func_?(TypeInfo__System__Boolean,&stack0x00000007);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pJVar1[1].monitor = pMVar3;
    func_?(&pJVar1[1].monitor,pMVar3);
    pJVar1[1].klass = (JToken__Class *)0x9;
    return pJVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar4)();
  return pJVar1;
}


/* JToken op_Implicit(DateTimeOffset) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_1
                   (DateTimeOffset value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  uStack_1 = (undefined4)value._dateTime._dateData;
  uStack_2 = value._dateTime._dateData._4_4_;
  iStack_3 = value._offsetMinutes;
  uStack_4 = value._10_2_;
  uStack_5 = value._12_4_;
  value_00 = (Object *)func_?(TypeInfo__System__DateTimeOffset,&uStack_1);
  pJVar6 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar6 != (JToken *)0x0) {
    pJVar7 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar6,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar6[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar6[1].monitor,value_00);
    pJVar6[1].klass = pJVar7;
    return pJVar6;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pJVar6 = (JToken *)(*pcVar8)();
  return pJVar6;
}


/* JToken op_Implicit(Int32) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_10
                   (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  this = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (this != (JValue *)0x0) {
    JValue::JValue__ctor_2(this,(ulonglong)(uint)(value >> 0x1f),unaff_ESI);
    return (JToken *)this;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar1)();
  return pJVar2;
}


/* JToken op_Implicit(Nullable`1[Int32]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_11
                   (Nullable_1_Int32_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<int>);
    cRam_? = '\x01';
  }
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<int>,&value);
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    pJVar2 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar1[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar1[1].monitor,value_00);
    pJVar1[1].klass = pJVar2;
    return pJVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken op_Implicit(DateTime) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_12
                   (DateTime value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__DateTime);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__System__DateTime;
    pMVar2 = (MonitorData *)func_?(TypeInfo__System__DateTime,&value);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pJVar1[1].monitor = pMVar2;
    func_?(&pJVar1[1].monitor,pMVar2);
    pJVar1[1].klass = (JToken__Class *)0xc;
    return pJVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken op_Implicit(Nullable`1[Int64]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_13
                   (Nullable_1_Int64_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<long>);
    cRam_? = '\x01';
  }
  NStack_1.hasValue = value.hasValue;
  NStack_1._1_3_ = value._1_3_;
  NStack_1._4_4_ = value._4_4_;
  NStack_1.value._0_4_ = (undefined4)value.value;
  NStack_1.value._4_4_ = value.value._4_4_;
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<long>,&NStack_1);
  pJVar2 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar2 != (JToken *)0x0) {
    pJVar3 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar2,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar2[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar2[1].monitor,value_00);
    pJVar2[1].klass = pJVar3;
    return pJVar2;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar4)();
  return pJVar2;
}


/* JToken op_Implicit(Nullable`1[Single]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_14
                   (Nullable_1_Single_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<float>);
    cRam_? = '\x01';
  }
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<float>,&value);
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    pJVar2 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar1[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar1[1].monitor,value_00);
    pJVar1[1].klass = pJVar2;
    return pJVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken op_Implicit(Decimal) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_15
                   (Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  iStack_1 = value.flags;
  iStack_2 = value.hi;
  iStack_3 = value.lo;
  iStack_4 = value.mid;
  value_00 = (Object *)func_?(TypeInfo__System__Decimal,&iStack_1);
  pJVar5 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar5 != (JToken *)0x0) {
    pJVar6 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar5,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar5[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar5[1].monitor,value_00);
    pJVar5[1].klass = pJVar6;
    return pJVar5;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pJVar5 = (JToken *)(*pcVar7)();
  return pJVar5;
}


/* JToken op_Implicit(Nullable`1[Int16]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_16
                   (Nullable_1_Int16_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<short>);
    cRam_? = '\x01';
  }
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<short>,&value);
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    pJVar2 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar1[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar1[1].monitor,value_00);
    pJVar1[1].klass = pJVar2;
    return pJVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken op_Implicit(Nullable`1[UInt16]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_17
                   (Nullable_1_UInt16_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<unsigned_short>);
    cRam_? = '\x01';
  }
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<unsigned_short>,&value);
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    pJVar2 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar1[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar1[1].monitor,value_00);
    pJVar1[1].klass = pJVar2;
    return pJVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken op_Implicit(Nullable`1[UInt32]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_18
                   (Nullable_1_UInt32_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<unsigned_int>);
    cRam_? = '\x01';
  }
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<unsigned_int>,&value);
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    pJVar2 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar1[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar1[1].monitor,value_00);
    pJVar1[1].klass = pJVar2;
    return pJVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken op_Implicit(Nullable`1[UInt64]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_19
                   (Nullable_1_UInt64_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<unsigned_long>);
    cRam_? = '\x01';
  }
  NStack_1.hasValue = value.hasValue;
  NStack_1._1_3_ = value._1_3_;
  NStack_1._4_4_ = value._4_4_;
  NStack_1.value._0_4_ = (undefined4)value.value;
  NStack_1.value._4_4_ = value.value._4_4_;
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<unsigned_long>,&NStack_1);
  pJVar2 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar2 != (JToken *)0x0) {
    pJVar3 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar2,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar2[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar2[1].monitor,value_00);
    pJVar2[1].klass = pJVar3;
    return pJVar2;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar4)();
  return pJVar2;
}


/* JToken op_Implicit(Nullable`1[Boolean]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_2
                   (Nullable_1_Boolean_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<bool>);
    cRam_? = '\x01';
  }
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<bool>,&value);
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    pJVar2 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar1[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar1[1].monitor,value_00);
    pJVar1[1].klass = pJVar2;
    return pJVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken op_Implicit(Double) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_20
                   (double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Double);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__System__Double;
    pMVar2 = (MonitorData *)func_?(TypeInfo__System__Double,&value);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pJVar1[1].monitor = pMVar2;
    func_?(&pJVar1[1].monitor,pMVar2);
    pJVar1[1].klass = (JToken__Class *)0x7;
    return pJVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken op_Implicit(Single) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_21
                   (float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Double);
      cRam_? = '\x01';
    }
    dStack_2 = (double)value;
    method_00 = TypeInfo__System__Double;
    pMVar3 = (MonitorData *)func_?(TypeInfo__System__Double,&dStack_2);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pJVar1[1].monitor = pMVar3;
    func_?(&pJVar1[1].monitor,pMVar3);
    pJVar1[1].klass = (JToken__Class *)0x7;
    return pJVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar4)();
  return pJVar1;
}


/* JToken op_Implicit(String) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_22
                   (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    pJVar1[1].monitor = (MonitorData *)value;
    func_?(&pJVar1[1].monitor,value);
    pJVar1[1].klass = (JToken__Class *)0x8;
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar2)();
  return pJVar1;
}


/* JToken op_Implicit(UInt32) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_23
                   (uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  this = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (this != (JValue *)0x0) {
    JValue::JValue__ctor_2(this,0,unaff_ESI);
    return (JToken *)this;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar1)();
  return pJVar2;
}


/* JToken op_Implicit(UInt64) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_24
                   (uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__UInt64);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__System__UInt64;
    pMVar2 = (MonitorData *)func_?(TypeInfo__System__UInt64,&value);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pJVar1[1].monitor = pMVar2;
    func_?(&pJVar1[1].monitor,pMVar2);
    pJVar1[1].klass = (JToken__Class *)0x6;
    return pJVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken op_Implicit(Byte[]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_25
                   (Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JToken *)0x0) {
    pJVar2 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)value,
                        (MethodInfo *)0x0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar1[1].monitor = (MonitorData *)value;
    func_?(&pJVar1[1].monitor,value);
    pJVar1[1].klass = pJVar2;
    return pJVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken op_Implicit(Int64) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_3
                   (int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  this = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (this != (JValue *)0x0) {
    JValue::JValue__ctor_2(this,(ulonglong)value >> 0x20,unaff_ESI);
    return (JToken *)this;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar1)();
  return pJVar2;
}


/* JToken op_Implicit(Nullable`1[DateTime]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_4
                   (Nullable_1_DateTime_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<System::DateTime>);
    cRam_? = '\x01';
  }
  NStack_1.hasValue = value.hasValue;
  NStack_1._1_3_ = value._1_3_;
  NStack_1._4_4_ = value._4_4_;
  NStack_1.value._dateData._0_4_ = (undefined4)value.value._dateData;
  NStack_1.value._dateData._4_4_ = value.value._dateData._4_4_;
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<System::DateTime>,&NStack_1);
  pJVar2 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar2 != (JToken *)0x0) {
    pJVar3 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar2,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar2[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar2[1].monitor,value_00);
    pJVar2[1].klass = pJVar3;
    return pJVar2;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar4)();
  return pJVar2;
}


/* JToken op_Implicit(Nullable`1[DateTimeOffset]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_5
                   (Nullable_1_DateTimeOffset_ value,MethodInfo *method)

{
  NVar1 = value;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<System::DateTimeOffset>);
    cRam_? = '\x01';
  }
  NStack_2.hasValue = value.hasValue;
  NStack_2._1_3_ = value._1_3_;
  NStack_2._4_4_ = value._4_4_;
  NStack_2.value._dateTime._dateData._0_4_ = (undefined4)value.value._dateTime._dateData;
  NStack_2.value._dateTime._dateData._4_4_ = value.value._dateTime._dateData._4_4_;
  NStack_2.value._8_8_ = NVar1.value._8_8_;
  value_00 = (Object *)
             func_?(TypeInfo__System__Nullable<System::DateTimeOffset>,&NStack_2);
  pJVar3 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar3 != (JToken *)0x0) {
    pJVar4 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar3,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar3[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar3[1].monitor,value_00);
    pJVar3[1].klass = pJVar4;
    return pJVar3;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pJVar3 = (JToken *)(*pcVar5)();
  return pJVar3;
}


/* JToken op_Implicit(Nullable`1[Decimal]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_6
                   (Nullable_1_Decimal_ value,MethodInfo *method)

{
  NVar1 = value;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<System::Decimal>);
    cRam_? = '\x01';
  }
  auStack_2[0]._0_1_ = value.hasValue;
  auStack_2[0]._1_3_ = value._1_3_;
  auStack_2[1] = value._4_4_;
  iStack_3 = value.value.flags;
  iStack_4 = value.value.hi;
  uStack_5 = NVar1.value._8_8_;
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<System::Decimal>,auStack_2);
  pJVar6 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar6 != (JToken *)0x0) {
    pJVar7 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar6,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar6[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar6[1].monitor,value_00);
    pJVar6[1].klass = pJVar7;
    return pJVar6;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pJVar6 = (JToken *)(*pcVar8)();
  return pJVar6;
}


/* JToken op_Implicit(Nullable`1[Double]) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_7
                   (Nullable_1_Double_ value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__System__Nullable<double>);
    cRam_? = '\x01';
  }
  NStack_1.hasValue = value.hasValue;
  NStack_1._1_3_ = value._1_3_;
  NStack_1._4_4_ = value._4_4_;
  NStack_1.value._0_4_ = value.value._0_4_;
  NStack_1.value._4_4_ = value.value._4_4_;
  value_00 = (Object *)func_?(TypeInfo__System__Nullable<double>,&NStack_1);
  pJVar2 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar2 != (JToken *)0x0) {
    pJVar3 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value_00,(MethodInfo *)0x0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar2,ExceptionArgument__Enum_obj,unaff_EDI);
    pJVar2[1].monitor = (MonitorData *)value_00;
    func_?(&pJVar2[1].monitor,value_00);
    pJVar2[1].klass = pJVar3;
    return pJVar2;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar4)();
  return pJVar2;
}


/* JToken op_Implicit(Int16) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_8
                   (int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  this = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (this != (JValue *)0x0) {
    JValue::JValue__ctor_2(this,(ulonglong)(uint)((int)value >> 0x1f),unaff_ESI);
    return (JToken *)this;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar1)();
  return pJVar2;
}


/* JToken op_Implicit(UInt16) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_op_Implicit_9
                   (uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  this = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (this != (JValue *)0x0) {
    JValue::JValue__ctor_2(this,0,unaff_ESI);
    return (JToken *)this;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar1)();
  return pJVar2;
}


/* Void set_Item(Object, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken::JToken_set_Item
               (JToken *this,Object *key,JToken *value,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar1);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar1);
  pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar2);
  func_?(0,pTVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Cannot_set_child_value_on__0__);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar1 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (InvalidOperationException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,pSVar3,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JToken__set_Item_System__Object__MethodInfo__Newtonsoft__Json__Linq__JToken_
                 );
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

