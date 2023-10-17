
/* Void Add(String, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_Add
               (JObject *this,String *propertyName,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    cRam_? = '\x01';
  }
  this_00 = (JProperty *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
  if (this_00 != (JProperty *)0x0) {
    JProperty::JProperty__ctor_3(this_00,propertyName,(Object *)value,(MethodInfo *)0x0);
    (*(this->klass->vtable).Add.methodPtr)(this,this_00,(this->klass->vtable).Add.method);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_CloneToken
                   (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject);
    cRam_? = '\x01';
  }
  this_00 = (JContainer *)func_?(TypeInfo__Newtonsoft__Json__Linq__JObject);
  if (this_00 != (JContainer *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
      func_?(&TypeInfo__System__StringComparer);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__StringComparer);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__StringComparer);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__StringComparer);
    }
    target = TypeInfo__System__StringComparer->static_fields->s_ordinal;
    this_01 = (JContainer__Class *)
              func_?(TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
    if (this_01 != (JContainer__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
                       );
        cRam_? = '\x01';
      }
      mscorlib.dll::System::WeakReference`1[Object]::WeakReference_1_Object___ctor
                ((WeakReference_1_Object_ *)this_01,(Object *)target,
                 MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
                );
      this_00[1].klass = this_01;
      func_?(this_00 + 1,this_01);
      JContainer::JContainer__ctor_1(this_00,(JContainer *)this,(MethodInfo *)0x0);
      return (JToken *)this_00;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar1)();
  return pJVar2;
}


/* Boolean DeepEquals(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_DeepEquals
               (JObject *this,JToken *node,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject);
    cRam_? = '\x01';
  }
  if (((node == (JToken *)0x0) ||
      ((node->klass->_1).typeHierarchyDepth <
       (TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth)) ||
     ((JObject__Class *)
      (node->klass->_1).typeHierarchy
      [(TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth - 1] !=
      TypeInfo__Newtonsoft__Json__Linq__JObject)) {
    return 0;
  }
  piVar1 = (int *)(*(this->klass->vtable).get_First.methodPtr)
                            (this,(this->klass->vtable).get_First.method);
  piVar2 = (int *)(*(node->klass->vtable).get_First.methodPtr)
                            (node,(node->klass->vtable).get_First.method);
  if (piVar1 != piVar2) {
    while (piVar1 != (int *)0x0) {
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      cVar3 = (**(code **)(*piVar1 + 0x11c))(piVar1,piVar2,*(undefined4 *)(*piVar1 + 0x120));
      if (cVar3 == '\0') {
        return 0;
      }
      piVar4 = (int *)(*(this->klass->vtable).get_Last.methodPtr)
                                (this,(this->klass->vtable).get_Last.method);
      if (piVar1 == piVar4) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)piVar1[4];
      }
      piVar4 = (int *)(*(node->klass->vtable).get_Last.methodPtr)
                                (node,(node->klass->vtable).get_Last.method);
      if (piVar2 == piVar4) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)piVar2[4];
      }
    }
    if (piVar2 != (int *)0x0) {
      return 0;
    }
  }
  return 1;
}


/* JObject FromObject(Object) */

JObject * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_FromObject
                    (Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonSerializer);
    cRam_? = '\x01';
  }
  this = (JsonSerializer *)func_?(TypeInfo__Newtonsoft__Json__JsonSerializer);
  if (this != (JsonSerializer *)0x0) {
    JsonSerializer::JsonSerializer__ctor(this,(MethodInfo *)0x0);
    pJVar1 = JObject_FromObject_1(o,this,(MethodInfo *)0x0);
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JObject *)(*pcVar2)();
  return pJVar1;
}


/* JObject FromObject(Object, JsonSerializer) */

JObject * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_FromObject_1
                    (Object *o,JsonSerializer *jsonSerializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject);
    cRam_? = '\x01';
  }
  pJVar1 = (JObject *)JToken::JToken_FromObjectInternal(o,jsonSerializer,(MethodInfo *)0x0);
  if (pJVar1 != (JObject *)0x0) {
    iVar2 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar2 != 1) goto code_?;
  }
  if (pJVar1 == (JObject *)0x0) {
    return (JObject *)0x0;
  }
  if (((TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth <=
       (pJVar1->klass->_1).typeHierarchyDepth) &&
     ((JObject__Class *)
      (pJVar1->klass->_1).typeHierarchy
      [(TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth - 1] ==
      TypeInfo__Newtonsoft__Json__Linq__JObject)) {
    return pJVar1;
  }
  func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JObject);
code_?:
  uVar3 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar3);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar3 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar3);
  func_?(pJVar1);
  jsonSerializer = (JsonSerializer *)func_?(0xd,pJVar1);
  uVar3 = func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType,&jsonSerializer);
  uVar3 = func_?(uVar3);
  func_?(args);
  func_?(args,uVar3);
  func_?(0,uVar3);
  method_00 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral_Object_serialized_to__0___JObjec);
  pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar4,(IFormatProvider *)provider,args,method_00);
  uVar3 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar3);
  func_?(this);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar4,(MethodInfo *)0x0);
  uStack5 =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Linq__JObject__FromObject_System__Object__Newtonsoft__Json__JsonSerializer_
                      );
  jsonSerializer = (JsonSerializer *)&UNK_?;
  method = (MethodInfo *)this;
  func_?();
  pcVar6 = (code *)swi(3);
  pJVar1 = (JObject *)(*pcVar6)();
  return pJVar1;
}


/* Int32 GetDeepHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_GetDeepHashCode
                  (JObject *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  uVar4 = 0;
  iVar5 = (*(this->klass->vtable).get_ChildrenTokens.methodPtr)
                    (this,(this->klass->vtable).get_ChildrenTokens.method);
  if (iVar5 != 0) {
    piVar6 = (int *)func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                                    ,iVar5);
    uStack_1 = 1;
    while( true ) {
      if (piVar6 == (int *)0x0) break;
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar6);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar6 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar6);
          *unaff_FS_OFFSET = uStack_3;
          return uVar4;
        }
        *unaff_FS_OFFSET = uStack_3;
        return uVar4;
      }
      if (piVar6 == (int *)0x0) break;
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar6 + 0xb2);
      if (uVar9 != 0) {
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)
               (*(int *)(*piVar6 + 0x58) + (uint)uVar8 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar10 = (undefined4 *)
                     (*piVar6 + 0xbc + *(int *)(*(int *)(*piVar6 + 0x58) + 4 + (uint)uVar8 * 8) * 8
                     );
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar10 = (undefined4 *)
               func_?(piVar6,
                               TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                               ,0);
code_?:
      piVar11 = (int *)(*(code *)*puVar10)(piVar6,puVar10[1]);
      if (piVar11 == (int *)0x0) break;
      uVar12 = (**(code **)(*piVar11 + 0x174))(piVar11,*(undefined4 *)(*piVar11 + 0x178));
      uVar4 = uVar4 ^ uVar12;
    }
  }
  uVar13 = func_?();
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  iVar15 = (*pcVar14)();
  return iVar15;
}


/* IEnumerator`1[KeyValuePair`2[System.String,Newtonsoft.Json.Linq.JToken]] GetEnumerator() */

IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_GetEnumerator
          (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject___GetEnumerator_d__49);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JObject___GetEnumerator_d__49)
  ;
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    return (IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ *)(*pcVar1)();
  return pIVar2;
}


/* Type GetTokenPropertyType(JToken) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_GetTokenPropertyType
                 (JToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeRef__System__Object);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Object;
  if (token == (JToken *)0x0) {
    func_?();
    pJVar1 = extraout_EDX;
  }
  else {
    pJVar2 = token->klass;
    if (((pJVar2->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
       ((pJVar2->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)token,(MethodInfo *)0x0);
      return pTVar3;
    }
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar2->_1).typeHierarchyDepth) &&
       ((pJVar2->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      if (token[1].monitor != (MonitorData *)0x0) {
        pTVar3 = mscorlib.dll::System::Object::Object_GetType
                           ((Object *)token[1].monitor,(MethodInfo *)0x0);
        return pTVar3;
      }
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      return pTVar3;
    }
  }
  func_?(token,pJVar1);
  pcVar4 = (code *)swi(3);
  pTVar3 = (Type *)(*pcVar4)();
  return pTVar3;
}


/* Void InsertItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_InsertItem
               (JObject *this,int32_t index,JToken *item,MethodInfo *method)

{
  if ((item != (JToken *)0x0) &&
     (iVar1 = (*(item->klass->vtable).__unknown_2.methodPtr)
                        (item,(item->klass->vtable).__unknown_2.method), iVar1 == 5)) {
    return;
  }
  JContainer::JContainer_InsertItem((JContainer *)this,index,item,(MethodInfo *)0x0);
  return;
}


/* Void InternalPropertyChanged(JProperty) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_InternalPropertyChanged
               (JObject *this,JProperty *childProperty,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  if (childProperty != (JProperty *)0x0) {
    pMStack_1 = (this->klass->vtable).OnPropertyChanged.method;
    pSStack_2 = (childProperty->fields)._name;
    pJStack_3 = this;
    (*(this->klass->vtable).OnPropertyChanged.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* JObject Load(JsonReader) */

JObject * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_Load
                    (JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject);
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
      if (iVar2 != 1) goto code_?;
      pJVar3 = (JObject *)func_?(TypeInfo__Newtonsoft__Json__Linq__JObject);
      if (pJVar3 != (JObject *)0x0) {
        JObject__ctor(pJVar3,(MethodInfo *)0x0);
        pMVar4 = (MethodInfo *)0x0;
        lineInfo = (IJsonLineInfo *)
                   func_?(pEVar1,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
        JToken::JToken_SetLineInfo((JToken *)pJVar3,lineInfo,pMVar4);
        JContainer::JContainer_ReadTokenFrom
                  ((JContainer *)pJVar3,(JsonReader *)pEVar1,(MethodInfo *)0x0);
        return pJVar3;
      }
      goto code_?;
    }
    cVar5 = (*(((JsonReader *)pEVar1)->klass->vtable).__unknown.methodPtr)
                      (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).__unknown.method);
    if (cVar5 != '\0') goto code_?;
  }
  uVar6 = func_?(&TypeInfo__System__Exception);
  pEVar1 = (Exception *)func_?(uVar6);
  func_?(pEVar1);
  pMVar4 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(&StringLiteral_Error_reading_JObject_from_JsonR);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar7,pMVar4);
  reader = (JsonReader *)
           func_?(&
                           MethodInfo__Newtonsoft__Json__Linq__JObject__Load_Newtonsoft__Json__JsonReader_
                          );
  func_?();
code_?:
  uVar6 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar6);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar6 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar6);
  func_?(pEVar1);
  reader = (JsonReader *)func_?(7,pEVar1);
  uVar6 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&reader);
  uVar6 = func_?(uVar6);
  func_?(args);
  func_?(args,uVar6);
  func_?(0,uVar6);
  pMVar4 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(&StringLiteral_Error_reading_JObject_from_JsonR);
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar7,(IFormatProvider *)provider,args,pMVar4);
  uVar6 = func_?(&TypeInfo__System__Exception);
  pEVar1 = (Exception *)func_?(uVar6);
  func_?(pEVar1);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar7,(MethodInfo *)0x0);
  uStack8 =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Linq__JObject__Load_Newtonsoft__Json__JsonReader_
                      );
  method = (MethodInfo *)&UNK_?;
  pEStack9 = pEVar1;
  func_?();
  pcVar10 = (code *)swi(3);
  pJVar3 = (JObject *)(*pcVar10)();
  return pJVar3;
}


/* Void OnPropertyChanged(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_OnPropertyChanged
               (JObject *this,String *propertyName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__PropertyChangedEventArgs);
    cRam_? = '\x01';
  }
  if ((this->fields).PropertyChanged != (PropertyChangedEventHandler *)0x0) {
    pPVar1 = (this->fields).PropertyChanged;
    this_00 = (PropertyChangedEventArgs *)
              func_?(TypeInfo__System__ComponentModel__PropertyChangedEventArgs);
    if (this_00 == (PropertyChangedEventArgs *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    System.dll::System::ComponentModel::PropertyChangedEventArgs::PropertyChangedEventArgs__ctor
              (this_00,propertyName,(MethodInfo *)0x0);
    (*(pPVar1->fields)._._.invoke_impl)
              ((pPVar1->fields)._._.method_code,this,this_00,(pPVar1->fields)._._.method);
  }
  return;
}


/* JObject Parse(String) */

JObject * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_Parse
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
      pJVar1 = JObject_Load((JsonReader *)this_00,(MethodInfo *)0x0);
      return pJVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JObject *)(*pcVar2)();
  return pJVar1;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JProperty] Properties() */

IEnumerable_1_Newtonsoft_Json_Linq_JProperty_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_Properties
          (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__Cast<Newtonsoft::Json::Linq::JProperty>_System__Collections__IEnumerable_
                   );
    cRam_? = '\x01';
  }
  source = (IEnumerable *)
           (*(this->klass->vtable).get_ChildrenTokens.methodPtr)
                     (this,(this->klass->vtable).get_ChildrenTokens.method);
  pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                     (source,
                      System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__Cast<Newtonsoft::Json::Linq::JProperty>_System__Collections__IEnumerable_
                     );
  return (IEnumerable_1_Newtonsoft_Json_Linq_JProperty_ *)pIVar1;
}


/* JProperty Property(String) */

JProperty *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_Property
          (JObject *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    cRam_? = '\x01';
  }
  pJStack_1 = (JProperty *)0x0;
  pJVar2 = (this->fields)._properties;
  pJVar3 = (JProperty__Class *)0x0;
  if (pJVar2 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                     );
      cRam_? = '\x01';
    }
    if (((pJVar2->fields)._.dict == (Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)0x0)
       || (name == (String *)0x0)) {
      return (JProperty *)0x0;
    }
    pJVar3 = (JProperty__Class *)(this->fields)._properties;
    if (pJVar3 != (JProperty__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                       );
        cRam_? = '\x01';
      }
      pvVar4 = (pJVar3->_0).byval_arg.data.dummy;
      if (pvVar4 != (void *)0x0) {
        func_?(7,
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                        ,pvVar4,name,&pJStack_1);
        if (pJStack_1 == (JProperty *)0x0) {
          return (JProperty *)0x0;
        }
        pJVar5 = pJStack_1;
        pJVar3 = TypeInfo__Newtonsoft__Json__Linq__JProperty;
        if ((((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
              (pJStack_1->klass->_1).typeHierarchyDepth) &&
            ((JProperty__Class *)
             (pJStack_1->klass->_1).typeHierarchy
             [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
             TypeInfo__Newtonsoft__Json__Linq__JProperty)) && (pJStack_1 != (JProperty *)0x0)) {
          return pJStack_1;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pJVar5 = extraout_EDX;
code_?:
  func_?(pJVar5,pJVar3);
  pcVar6 = (code *)swi(3);
  pJVar5 = (JProperty *)(*pcVar6)();
  return pJVar5;
}


/* JEnumerable`1[JToken] PropertyValues() */

JEnumerable_1_JToken_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_PropertyValues
          (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__System__Linq__Enumerable__Select<Newtonsoft::Json::Linq::JProperty,_Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>__System__Func<Newtonsoft::Json::Linq::JProperty,_Newtonsoft::Json::Linq::JToken>_
                   );
    func_?(&
                    TypeInfo__System__Func<Newtonsoft::Json::Linq::JProperty,_Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__JEnumerable_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JObject____c___PropertyValues_b__21_0_Newtonsoft__Json__Linq__JProperty_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__Cast<Newtonsoft::Json::Linq::JProperty>_System__Collections__IEnumerable_
                   );
    cRam_? = '\x01';
  }
  source = (IEnumerable *)
           (*(this->klass->vtable).get_ChildrenTokens.methodPtr)
                     (this,(this->klass->vtable).get_ChildrenTokens.method);
  pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                     (source,
                      System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__Cast<Newtonsoft::Json::Linq::JProperty>_System__Collections__IEnumerable_
                     );
  if ((TypeInfo__Newtonsoft__Json__Linq__JObject____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Linq__JObject____c);
  }
  this_00 = TypeInfo__Newtonsoft__Json__Linq__JObject____c->static_fields->__9__21_0;
  if (this_00 == (Func_2_Newtonsoft_Json_Linq_JProperty_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    if ((TypeInfo__Newtonsoft__Json__Linq__JObject____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Linq__JObject____c);
    }
    object = TypeInfo__Newtonsoft__Json__Linq__JObject____c->static_fields->__9;
    this_00 = (Func_2_Newtonsoft_Json_Linq_JProperty_Newtonsoft_Json_Linq_JToken_ *)
              func_?(
                             TypeInfo__System__Func<Newtonsoft::Json::Linq::JProperty,_Newtonsoft::Json::Linq::JToken>
                             );
    if (this_00 == (Func_2_Newtonsoft_Json_Linq_JProperty_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      JVar3._enumerable = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar2)();
      return (JEnumerable_1_JToken_)JVar3._enumerable;
    }
    mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]::
    RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
              ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_00,(Object *)object
               ,
               MethodInfo__Newtonsoft__Json__Linq__JObject____c___PropertyValues_b__21_0_Newtonsoft__Json__Linq__JProperty_
               ,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__Linq__JObject____c->static_fields->__9__21_0 = this_00;
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject____c->static_fields->__9__21_0,
                    this_00);
  }
  pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_3
                     (pIVar1,(Func_2_Object_Object_ *)this_00,
                      System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__System__Linq__Enumerable__Select<Newtonsoft::Json::Linq::JProperty,_Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>__System__Func<Newtonsoft::Json::Linq::JProperty,_Newtonsoft::Json::Linq::JToken>_
                     );
  this = (JObject *)0x0;
  JEnumerable`1[System::Object]::JEnumerable_1_System_Object___ctor
            ((JEnumerable_1_System_Object_ *)&this,pIVar1,
             MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__JEnumerable_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
            );
  return (JEnumerable_1_JToken_)(IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this;
}


/* Boolean Remove(String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_Remove
               (JObject *this,String *propertyName,MethodInfo *method)

{
  pJVar1 = JObject_Property(this,propertyName,(MethodInfo *)0x0);
  if (pJVar1 == (JProperty *)0x0) {
    return 0;
  }
  if ((pJVar1->fields)._._._parent != (JContainer *)0x0) {
    pJVar2 = (pJVar1->fields)._._._parent;
    (*(pJVar2->klass->vtable).RemoveItem.methodPtr)(pJVar2,pJVar1);
    return 1;
  }
  uVar3 = func_?();
  this_00 = (InvalidOperationException *)func_?(uVar3);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_The_parent_is_missing_);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,method_00);
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void 
   System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Add(KeyValuePair`2[System.String,Newtonsoft.Json.Linq.JToken])
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Add
               (JObject *this,KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ item,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Value__
                   );
    cRam_? = '\x01';
  }
  this_00 = (JProperty *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
  if (this_00 != (JProperty *)0x0) {
    JProperty::JProperty__ctor_3(this_00,item.key,(Object *)item.value,(MethodInfo *)0x0);
    (*(this->klass->vtable).Add.methodPtr)(this,this_00,(this->klass->vtable).Add.method);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void 
   System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Clear()
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Clear
               (JObject *this,MethodInfo *method)

{
  (*(this->klass->vtable).ClearItems.methodPtr)(this,(this->klass->vtable).ClearItems.method);
  return;
}


/* Boolean
   System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Contains(KeyValuePair`2[System.String,Newtonsoft.Json.Linq.JToken])
    */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Contains
               (JObject *this,KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ item,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Value__
                   );
    cRam_? = '\x01';
  }
  this_00 = JObject_Property(this,item.key,(MethodInfo *)0x0);
  if (this_00 != (JProperty *)0x0) {
    pJVar1 = JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
    return pJVar1 == item.value;
  }
  return 0;
}


/* Void 
   System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.CopyTo(KeyValuePair`2[System.String,Newtonsoft.Json.Linq.JToken][],
   Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___CopyTo
               (JObject *this,
               KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array *array,
               int32_t arrayIndex,MethodInfo *method)

{
  pKVar1 = array;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__KeyValuePair_System__String__Newtonsoft__Json__Linq__JToken_
                   );
    cRam_? = '\x01';
  }
  if (array == (KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array *)0x0) {
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar5);
    func_?(this_01);
    pMVar6 = (MethodInfo *)0x0;
    pSVar7 = (String *)func_?(&StringLiteral_array);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,pSVar7,pMVar6);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JObject__System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___CopyTo_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_____int_
                   );
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    func_?();
    pAVar8 = (ArgumentException *)func_?();
    func_?(pAVar8);
    pMVar6 = (MethodInfo *)0x0;
    pSVar7 = (String *)func_?();
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar8,pSVar7,pMVar6);
    func_?();
    func_?();
  }
  else {
    if (arrayIndex < 0) goto code_?;
    if (arrayIndex < (int)array->max_length) {
      iVar9 = JContainer::JContainer_get_Count((JContainer *)this,(MethodInfo *)0x0);
      if (iVar9 <= (int)(array->max_length - arrayIndex)) {
        array = (KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array *)0x0;
        iVar10 = (*(this->klass->vtable).get_ChildrenTokens.methodPtr)();
        if (iVar10 != 0) {
          iVar10 = func_?(0);
          uStack_2 = 1;
          while (iVar10 != 0) {
            cVar11 = func_?(0);
            if (cVar11 == '\0') {
              uStack_2 = 0xffffffff;
              if (iVar10 != 0) {
                func_?(0);
              }
              *unaff_FS_OFFSET = uStack_4;
              return;
            }
            if (iVar10 == 0) break;
            this_00 = (JProperty *)func_?(0);
            if (this_00 == (JProperty *)0x0) break;
            if (((this_00->klass->_1).typeHierarchyDepth <
                 (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth) ||
               ((JProperty__Class *)
                (this_00->klass->_1).typeHierarchy
                [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] !=
                TypeInfo__Newtonsoft__Json__Linq__JProperty)) goto code_?;
            pSVar7 = (this_00->fields)._name;
            item2 = JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
            pMVar6 = 
            MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__KeyValuePair_System__String__Newtonsoft__Json__Linq__JToken_
            ;
            mscorlib.dll::System::ValueTuple`2[Object,Object]::ValueTuple_2_Object_Object___ctor
                      ((ValueTuple_2_Object_Object_ *)&stack0xffffffcc,(Object *)pSVar7,
                       (Object *)item2,
                       MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__KeyValuePair_System__String__Newtonsoft__Json__Linq__JToken_
                      );
            pKVar12 = array->vector;
            if (pKVar1->max_length <=
                (uint)((int)&((KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array *)
                             (pKVar12 + -2))->klass + arrayIndex)) goto code_?;
            pKVar1->vector
            [(int)&((KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array *)
                   (pKVar12 + -2))->klass + arrayIndex].key = (String *)pMVar6;
            pKVar1->vector
            [(int)&((KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array *)
                   (pKVar12 + -2))->klass + arrayIndex].value = (JToken *)0x0;
            func_?();
            array = (KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array *)
                    ((int)&array->klass + 1);
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  pAVar8 = (ArgumentException *)func_?(uVar5);
  func_?(pAVar8);
  pMVar6 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(&StringLiteral_arrayIndex_is_equal_to_or_greate);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar8,pSVar7,pMVar6);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JObject__System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___CopyTo_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_____int_
                 );
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_02 = (ArgumentOutOfRangeException *)func_?(uVar5);
  func_?(this_02);
  pSVar7 = (String *)func_?(&StringLiteral_arrayIndex_is_less_than_0_);
  paramName = (String *)func_?(&StringLiteral_arrayIndex);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this_02,paramName,pSVar7,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JObject__System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___CopyTo_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_____int_
                 );
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean
   System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Remove(KeyValuePair`2[System.String,Newtonsoft.Json.Linq.JToken])
    */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Remove
               (JObject *this,KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ item,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Key__
                   );
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = (this->klass->_1).interface_offsets_count;
  if (uVar2 != 0) {
    do {
      if (this->klass->interfaceOffsets[uVar1].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_>
         ) {
        pVVar3 = &(this->klass->vtable).
                  Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item +
                 this->klass->interfaceOffsets[uVar1].offset;
        goto code_?;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  pVVar3 = (VirtualInvokeData *)
           func_?(this,
                           TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_>
                           ,4);
code_?:
  cVar4 = (*pVVar3->methodPtr)(this,item.key,item.value,pVVar3->method);
  if (cVar4 != '\0') {
    func_?(6,
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                    ,this,item.key);
    return 1;
  }
  return 0;
}


/* Boolean
   System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.ContainsKey(String)
    */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__ContainsKey
               (JObject *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                   );
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._properties;
  if (pJVar1 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                     );
      cRam_? = '\x01';
    }
    if ((pJVar1->fields)._.dict == (Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      return 0;
    }
    pJVar1 = (this->fields)._properties;
    if (pJVar1 != (JObject_JPropertKeyedCollection *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                       );
        cRam_? = '\x01';
      }
      pDVar2 = (pJVar1->fields)._.dict;
      if (pDVar2 != (Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        bVar3 = func_?(4,
                                TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                                ,pDVar2,key);
        return bVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* ICollection`1[System.String]
   System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Keys() */

ICollection_1_System_String_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Keys
          (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                   );
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._properties;
  if (pJVar1 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (pJVar1->fields)._.dict;
    if (pDVar2 != (Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      pIVar3 = (ICollection_1_System_String_ *)
               func_?(2,
                               TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                               ,pDVar2);
      return pIVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar3 = (ICollection_1_System_String_ *)(*pcVar4)();
  return pIVar3;
}


/* ICollection`1[Newtonsoft.Json.Linq.JToken]
   System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Values() */

ICollection_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Values
          (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                   );
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._properties;
  if (pJVar1 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (pJVar1->fields)._.dict;
    if (pDVar2 != (Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      pIVar3 = (ICollection_1_Newtonsoft_Json_Linq_JToken_ *)
               func_?(3,
                               TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                               ,pDVar2);
      return pIVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar3 = (ICollection_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar4)();
  return pIVar3;
}


/* AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes() */

AttributeCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_ComponentModel_ICustomTypeDescriptor_GetAttributes(JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__AttributeCollection);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__ComponentModel__AttributeCollection->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__ComponentModel__AttributeCollection);
  }
  return TypeInfo__System__ComponentModel__AttributeCollection->static_fields->Empty;
}


/* TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter() */

TypeConverter *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_ComponentModel_ICustomTypeDescriptor_GetConverter(JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__TypeConverter);
    cRam_? = '\x01';
  }
  this_00 = (TweenRunner_1_FloatTween_ *)
            func_?(TypeInfo__System__ComponentModel__TypeConverter);
  if (this_00 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    return (TypeConverter *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pTVar2 = (TypeConverter *)(*pcVar1)();
  return pTVar2;
}


/* EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents(Attribute[]) */

EventDescriptorCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_ComponentModel_ICustomTypeDescriptor_GetEvents
          (JObject *this,Attribute__Array *attributes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__EventDescriptorCollection);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__ComponentModel__EventDescriptorCollection->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__System__ComponentModel__EventDescriptorCollection);
  }
  return TypeInfo__System__ComponentModel__EventDescriptorCollection->static_fields->Empty;
}


/* EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents() */

EventDescriptorCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_ComponentModel_ICustomTypeDescriptor_GetEvents_1(JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__EventDescriptorCollection);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__ComponentModel__EventDescriptorCollection->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__System__ComponentModel__EventDescriptorCollection);
  }
  return TypeInfo__System__ComponentModel__EventDescriptorCollection->static_fields->Empty;
}


/* PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties() */

PropertyDescriptorCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_ComponentModel_ICustomTypeDescriptor_GetProperties(JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__ICustomTypeDescriptor);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pJVar2 = this->klass;
  uVar3 = (pJVar2->_1).interface_offsets_count;
  if (uVar3 != 0) {
    do {
      if (pJVar2->interfaceOffsets[uVar1].interfaceType ==
          (Il2CppClass *)TypeInfo__System__ComponentModel__ICustomTypeDescriptor) {
        pVVar4 = &(pJVar2->vtable).System_ICloneable_Clone + pJVar2->interfaceOffsets[uVar1].offset;
        pPVar5 = (PropertyDescriptorCollection *)(*pVVar4->methodPtr)(this,0,pVVar4->method);
        return pPVar5;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  puVar6 = (undefined4 *)
           func_?(this,TypeInfo__System__ComponentModel__ICustomTypeDescriptor,10);
  pPVar5 = (PropertyDescriptorCollection *)(*(code *)*puVar6)(this,0,puVar6[1]);
  return pPVar5;
}


/* PropertyDescriptorCollection
   System.ComponentModel.ICustomTypeDescriptor.GetProperties(Attribute[]) */

PropertyDescriptorCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_ComponentModel_ICustomTypeDescriptor_GetProperties_1
          (JObject *this,Attribute__Array *attributes,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JPropertyDescriptor);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Value__
                   );
    func_?(&TypeInfo__System__ComponentModel__PropertyDescriptorCollection);
    cRam_? = '\x01';
  }
  this_00 = (PropertyDescriptor__Class *)
            func_?(TypeInfo__System__ComponentModel__PropertyDescriptorCollection);
  if (this_00 != (PropertyDescriptor__Class *)0x0) {
    System.dll::System::ComponentModel::PropertyDescriptorCollection::
    PropertyDescriptorCollection__ctor
              ((PropertyDescriptorCollection *)this_00,(PropertyDescriptor__Array *)0x0,
               (MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EDI);
      value[2].monitor = (MonitorData *)this;
      value[1].klass = (Object__Class *)0x0;
      func_?(&value[2].monitor,this);
      uStack_1 = 1;
      while (value != (Object *)0x0) {
        cVar4 = func_?(0,TypeInfo__System__Collections__IEnumerator,value);
        if (cVar4 == '\0') {
          uStack_1 = 0xffffffff;
          if (value != (Object *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,value);
          }
          *unaff_FS_OFFSET = uStack_3;
          return (PropertyDescriptorCollection *)this_00;
        }
        if (value == (Object *)0x0) break;
        uVar5 = 0;
        uVar6 = (value->klass->_1).interface_offsets_count;
        if (uVar6 != 0) {
          do {
            if (value->klass->interfaceOffsets[uVar5].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_>
               ) {
              pVVar7 = &(value->klass->vtable).Equals + value->klass->interfaceOffsets[uVar5].offset
              ;
              goto code_?;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        pVVar7 = (VirtualInvokeData *)
                 func_?(value,
                                 TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_>
                                 ,0);
code_?:
        uVar8 = (*pVVar7->methodPtr)(value,pVVar7->method);
        this_02 = (Object__Class *)((ulonglong)uVar8 >> 0x20);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
          func_?(&TypeRef__System__Object);
          func_?(&TypeInfo__System__Type);
          cRam_? = '\x01';
        }
        handle = TypeRef__System__Object;
        if (this_02 == (Object__Class *)0x0) break;
        if (((((Object *)this_02)->klass->_1).typeHierarchyDepth <
             (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
           ((((Object *)this_02)->klass->_1).typeHierarchy
            [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
          if (this_02 == (Object__Class *)0x0) break;
code_?:
          this_00 = (PropertyDescriptor__Class *)
                    mscorlib.dll::System::Object::Object_GetType
                              ((Object *)this_02,(MethodInfo *)0x0);
        }
        else {
          if (this_02 == (Object__Class *)0x0) break;
          if ((((((Object *)this_02)->klass->_1).typeHierarchyDepth <
                (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
              ((((Object *)this_02)->klass->_1).typeHierarchy
               [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
               (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) ||
             (this_02 == (Object__Class *)0x0)) {
            func_?(this_02,TypeInfo__Newtonsoft__Json__Linq__JValue);
            break;
          }
          if (((Object *)((int)this_02 + 0x28))->klass != (Object__Class *)0x0) {
            this_02 = ((Object *)((int)this_02 + 0x28))->klass;
            goto code_?;
          }
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          this_00 = (PropertyDescriptor__Class *)
                    mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        }
        this_01 = (PropertyDescriptor *)func_?();
        if (this_01 == (PropertyDescriptor *)0x0) break;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_propertyType);
          func_?(&StringLiteral_name);
          cRam_? = '\x01';
        }
        System.dll::System::ComponentModel::PropertyDescriptor::PropertyDescriptor__ctor
                  (this_01,(String *)uVar8,(Attribute__Array *)0x0,(MethodInfo *)0x0);
        Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                  ((Object *)(String *)uVar8,StringLiteral_name,(MethodInfo *)0x0);
        Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                  ((Object *)this_00,StringLiteral_propertyType,(MethodInfo *)0x0);
        this_01[1].klass = this_00;
        func_?();
        System.dll::System::ComponentModel::PropertyDescriptorCollection::
        PropertyDescriptorCollection_Add
                  ((PropertyDescriptorCollection *)this_00,this_01,(MethodInfo *)0x0);
      }
    }
  }
  uVar9 = func_?();
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  pPVar11 = (PropertyDescriptorCollection *)(*pcVar10)();
  return pPVar11;
}


/* Boolean TryGetValue(String, JToken ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_TryGetValue
               (JObject *this,String *propertyName,JToken **value,MethodInfo *method)

{
  this_00 = JObject_Property(this,propertyName,(MethodInfo *)0x0);
  if (this_00 != (JProperty *)0x0) {
    pJVar1 = JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
    *value = pJVar1;
    func_?();
    return 1;
  }
  *value = (JToken *)0x0;
  func_?();
  return 0;
}


/* Void ValidateToken(JToken, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_ValidateToken
               (JObject *this,JToken *o,JToken *existing,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    func_?(&StringLiteral_o);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)o,StringLiteral_o,(MethodInfo *)0x0);
  if (o == (JToken *)0x0) goto code_?;
  iVar1 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
  if (iVar1 == 4) {
    pJVar2 = TypeInfo__Newtonsoft__Json__Linq__JProperty;
    if (((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
         (o->klass->_1).typeHierarchyDepth) &&
       ((JProperty__Class *)
        (o->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      if (existing == (JToken *)0x0) {
code_?:
        pJVar3 = (this->fields)._properties;
        if (pJVar3 == (JObject_JPropertKeyedCollection *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                         );
          cRam_? = '\x01';
        }
        if ((pJVar3->fields)._.dict ==
            (Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)0x0) {
          return;
        }
        pJVar3 = (this->fields)._properties;
        if (pJVar3 == (JObject_JPropertKeyedCollection *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                         );
          cRam_? = '\x01';
        }
        pDVar4 = (pJVar3->fields)._.dict;
        if (pDVar4 == (Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)0x0)
        goto code_?;
        cVar5 = func_?(7,
                                TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                                ,pDVar4,o[1].fields._previous,&existing);
        if (cVar5 == '\0') {
          return;
        }
        uVar6 = func_?(&TypeInfo__System__Globalization__CultureInfo);
        func_?(uVar6);
        provider = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        uVar6 = func_?(&TypeInfo__System__Object,2);
        args = (Object__Array *)func_?(uVar6);
        func_?(o);
        this_00 = UnityEngine.IMGUIModule.dll::UnityEngine::GUISkin::
                  GUISkin_get_horizontalSliderThumb((GUISkin *)o,(MethodInfo *)0x0);
        func_?(args);
        func_?(args,this_00);
        func_?();
        pTVar7 = mscorlib.dll::System::Object::Object_GetType((Object *)this_00,(MethodInfo *)0x0);
        func_?(args);
        func_?(args,pTVar7);
        func_?();
        ppSVar8 = &StringLiteral_Can_not_add_property__0__to__1__;
        goto code_?;
      }
      this_01 = (ArgumentException *)existing;
      if ((((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
            (existing->klass->_1).typeHierarchyDepth) &&
          ((JProperty__Class *)
           (existing->klass->_1).typeHierarchy
           [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
           TypeInfo__Newtonsoft__Json__Linq__JProperty)) && (existing != (JToken *)0x0)) {
        bVar9 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)o[1].fields._previous,(String *)existing[1].fields._previous,
                           (MethodInfo *)0x0);
        if (bVar9 != 0) {
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    uVar6 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar6);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar6 = func_?(&TypeInfo__System__Object,2);
    args = (Object__Array *)func_?(uVar6);
    func_?(o);
    pTVar7 = mscorlib.dll::System::Object::Object_GetType((Object *)o,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pTVar7);
    func_?(0,pTVar7);
    pTVar7 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pTVar7);
    func_?(1,pTVar7);
    ppSVar8 = &StringLiteral_Can_not_add__0__to__1__;
code_?:
    method_00 = (MethodInfo *)0x0;
    format = (String *)func_?(ppSVar8);
    o = (JToken *)
        Json::Utilities::StringUtils::StringUtils_FormatWith
                  (format,(IFormatProvider *)provider,args,method_00);
    uVar6 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (ArgumentException *)func_?(uVar6);
    func_?(this_01);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this_01,(String *)o,(MethodInfo *)0x0);
    existing = (JToken *)
               func_?(&
                               MethodInfo__Newtonsoft__Json__Linq__JObject__ValidateToken_Newtonsoft__Json__Linq__JToken__Newtonsoft__Json__Linq__JToken_
                              );
    func_?();
    pJVar2 = extraout_EDX;
code_?:
    func_?(this_01,pJVar2);
    pJVar2 = extraout_EDX_00;
  }
  func_?(o,pJVar2);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void WriteTo(JsonWriter, JsonConverter[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_WriteTo
               (JObject *this,JsonWriter *writer,JsonConverter__Array *converters,MethodInfo *method
               )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    cRam_? = '\x01';
  }
  if (writer != (JsonWriter *)0x0) {
    (*(writer->klass->vtable).WriteStartObject.methodPtr)
              (writer,(writer->klass->vtable).WriteStartObject.method);
    iVar4 = (*(this->klass->vtable).get_ChildrenTokens.methodPtr)
                      (this,(this->klass->vtable).get_ChildrenTokens.method);
    if (iVar4 != 0) {
      piVar5 = (int *)func_?(0,
                                      TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                                      ,iVar4);
      uStack_1 = 1;
      while( true ) {
        if (piVar5 == (int *)0x0) break;
        cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar5);
        if (cVar6 == '\0') {
          uStack_1 = 0xffffffff;
          if (piVar5 != (int *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,piVar5);
          }
          uStack_1 = 0xffffffff;
          (*(writer->klass->vtable).WriteEndObject.methodPtr)
                    (writer,(writer->klass->vtable).WriteEndObject.method);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        unaff_EDI = (int *)0x0;
        if (piVar5 == (int *)0x0) break;
        uVar7 = 0;
        uVar8 = *(ushort *)(*piVar5 + 0xb2);
        if (uVar8 != 0) {
          do {
            if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)
                 (*(int *)(*piVar5 + 0x58) + (uint)uVar7 * 8) ==
                TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>)
            {
              puVar9 = (undefined4 *)
                       (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar7 * 8) * 8 + 0xbc +
                       *piVar5);
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar8);
        }
        puVar9 = (undefined4 *)
                 func_?(piVar5,
                                 TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                                 ,0);
code_?:
        unaff_EDI = (int *)(*(code *)*puVar9)(piVar5,puVar9[1]);
        if (unaff_EDI == (int *)0x0) break;
        pJVar10 = TypeInfo__Newtonsoft__Json__Linq__JProperty;
        if ((*(byte *)(*unaff_EDI + 0xb4) <
             (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth) ||
           (*(JProperty__Class **)
             (*(int *)(*unaff_EDI + 100) + -4 +
             (uint)(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth * 4) !=
            TypeInfo__Newtonsoft__Json__Linq__JProperty)) goto code_?;
        (**(code **)(*unaff_EDI + 0x16c))
                  (unaff_EDI,writer,converters,*(undefined4 *)(*unaff_EDI + 0x170));
      }
    }
  }
  func_?();
  pJVar10 = extraout_EDX;
code_?:
  uVar11 = func_?(unaff_EDI,pJVar10);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* JObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject__ctor
               (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
    func_?(&TypeInfo__System__StringComparer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__StringComparer);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__StringComparer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__StringComparer);
  }
  target = TypeInfo__System__StringComparer->static_fields->s_ordinal;
  this_00 = (JObject_JPropertKeyedCollection *)
            func_?(TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
  if (this_00 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
                     );
      cRam_? = '\x01';
    }
    mscorlib.dll::System::WeakReference`1[Object]::WeakReference_1_Object___ctor
              ((WeakReference_1_Object_ *)this_00,(Object *)target,
               MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
              );
    method_00 = (MethodInfo *)&(this->fields)._properties;
    (this->fields)._properties = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JObject(JObject) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject__ctor_1
               (JObject *this,JObject *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
    func_?(&TypeInfo__System__StringComparer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__StringComparer);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__StringComparer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__StringComparer);
  }
  target = TypeInfo__System__StringComparer->static_fields->s_ordinal;
  this_00 = (JObject_JPropertKeyedCollection *)
            func_?(TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
  if (this_00 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
                     );
      cRam_? = '\x01';
    }
    mscorlib.dll::System::WeakReference`1[Object]::WeakReference_1_Object___ctor
              ((WeakReference_1_Object_ *)this_00,(Object *)target,
               MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
              );
    (this->fields)._properties = this_00;
    func_?(&(this->fields)._properties,this_00);
    JContainer::JContainer__ctor_1((JContainer *)this,(JContainer *)other,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JObject(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject__ctor_3
               (JObject *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
    func_?(&TypeInfo__System__StringComparer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__StringComparer);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__StringComparer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__StringComparer);
  }
  target = TypeInfo__System__StringComparer->static_fields->s_ordinal;
  this_00 = (JObject_JPropertKeyedCollection *)
            func_?(TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
  if (this_00 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
                     );
      cRam_? = '\x01';
    }
    mscorlib.dll::System::WeakReference`1[Object]::WeakReference_1_Object___ctor
              ((WeakReference_1_Object_ *)this_00,(Object *)target,
               MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
              );
    method_00 = (MethodInfo *)&(this->fields)._properties;
    (this->fields)._properties = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (*(this->klass->vtable).Add.methodPtr)(this,content,(this->klass->vtable).Add.method);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void add_PropertyChanged(PropertyChangedEventHandler) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_add_PropertyChanged
               (JObject *this,PropertyChangedEventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__PropertyChangedEventHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).PropertyChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((PropertyChangedEventHandler__Class *)pDVar1->klass ==
          TypeInfo__System__ComponentModel__PropertyChangedEventHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__ComponentModel__PropertyChangedEventHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pPVar4 = (PropertyChangedEventHandler *)
             func_?(&(this->fields).PropertyChanged,pDVar2,a);
    bVar5 = pPVar4 == a;
    a = pPVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* JToken get_Item(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_get_Item
                   (JObject *this,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_o);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (key,StringLiteral_o,(MethodInfo *)0x0);
  if (key != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((String__Class *)key->klass == TypeInfo__System__String) {
      pOVar1 = key;
    }
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                ((Object *)in_stack_2,StringLiteral_propertyName,(MethodInfo *)0x0);
      this_01 = JObject_Property(in_stack_3,in_stack_2,(MethodInfo *)0x0);
      if (this_01 != (JProperty *)0x0) {
        pJVar4 = JProperty::JProperty_get_Value(this_01,(MethodInfo *)0x0);
        return pJVar4;
      }
      return (JToken *)0x0;
    }
  }
  uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar5);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar5 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar5);
  pSVar6 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ToString(key,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar6);
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Accessed_JObject_values_with_inv);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)provider,args,method_00);
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this_00 = (ArgumentException *)func_?(uVar5);
  func_?(this_00);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,pSVar6,(MethodInfo *)0x0);
  func_?(&MethodInfo__Newtonsoft__Json__Linq__JObject__get_Item_System__Object_);
  func_?();
  pcVar7 = (code *)swi(3);
  pJVar4 = (JToken *)(*pcVar7)();
  return pJVar4;
}


/* JToken get_Item(String) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_get_Item_1
                   (JObject *this,String *propertyName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_propertyName);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)propertyName,StringLiteral_propertyName,(MethodInfo *)0x0);
  this_00 = JObject_Property(this,propertyName,(MethodInfo *)0x0);
  if (this_00 != (JProperty *)0x0) {
    pJVar1 = JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
    return pJVar1;
  }
  return (JToken *)0x0;
}


/* Void remove_PropertyChanged(PropertyChangedEventHandler) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_remove_PropertyChanged
               (JObject *this,PropertyChangedEventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__PropertyChangedEventHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).PropertyChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((PropertyChangedEventHandler__Class *)pDVar1->klass ==
          TypeInfo__System__ComponentModel__PropertyChangedEventHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__ComponentModel__PropertyChangedEventHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pPVar4 = (PropertyChangedEventHandler *)
             func_?(&(this->fields).PropertyChanged,pDVar2,source);
    bVar5 = pPVar4 == source;
    source = pPVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void set_Item(Object, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_set_Item
               (JObject *this,Object *key,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_o);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (key,StringLiteral_o,(MethodInfo *)0x0);
  if (key != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((String__Class *)key->klass == TypeInfo__System__String) {
      pOVar1 = key;
    }
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pJVar2 = JObject_Property((JObject *)0x0,in_stack_3,(MethodInfo *)0x0);
      if (pJVar2 == (JProperty *)0x0) {
        pJVar2 = (JProperty *)func_?();
        if (pJVar2 != (JProperty *)0x0) {
          JProperty::JProperty__ctor_3
                    (pJVar2,in_stack_3,(Object *)in_stack_4,(MethodInfo *)0x0);
          (**(code **)(iRam_? + 0x2ac))(0);
          (**(code **)(iRam_? + 0x3a4))
                    (0,in_stack_3,*(undefined4 *)(iRam_? + 0x3a8));
          return;
        }
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      JProperty::JProperty_set_Value(pJVar2,in_stack_4,(MethodInfo *)0x0);
      return;
    }
  }
  uVar6 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar6);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar6 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar6);
  pSVar7 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ToString(key,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar7);
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(&StringLiteral_Set_JObject_values_with_invalid_);
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar7,(IFormatProvider *)provider,args,method_00);
  uVar6 = func_?(&TypeInfo__System__ArgumentException);
  this_00 = (ArgumentException *)func_?(uVar6);
  func_?(this_00);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,pSVar7,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JObject__set_Item_System__Object__Newtonsoft__Json__Linq__JToken_
                 );
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_Item(String, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_set_Item_1
               (JObject *this,String *propertyName,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    cRam_? = '\x01';
  }
  pJVar1 = JObject_Property(this,propertyName,(MethodInfo *)0x0);
  if (pJVar1 == (JProperty *)0x0) {
    pJVar1 = (JProperty *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
    if (pJVar1 != (JProperty *)0x0) {
      JProperty::JProperty__ctor_3(pJVar1,propertyName,(Object *)value,(MethodInfo *)0x0);
      (*(this->klass->vtable).Add.methodPtr)(this,pJVar1,(this->klass->vtable).Add.method);
      (*(this->klass->vtable).OnPropertyChanged.methodPtr)
                (this,propertyName,(this->klass->vtable).OnPropertyChanged.method);
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  JProperty::JProperty_set_Value(pJVar1,value,(MethodInfo *)0x0);
  return;
}

