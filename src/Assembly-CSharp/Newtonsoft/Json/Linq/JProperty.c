
/* Void ClearItems() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_ClearItems
               (JProperty *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar1);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar1);
  handle.value = (void *)func_?(&TypeRef__Newtonsoft__Json__Linq__JProperty);
  uVar1 = func_?(&TypeInfo__System__Type);
  func_?(uVar1);
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar2);
  func_?(0,pTVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Cannot_add_or_remove_items_from_);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
  uStack4 = func_?(&MethodInfo__Newtonsoft__Json__Linq__JProperty__ClearItems__);
  pEStack5 = this_00;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_CloneToken
                   (JProperty *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    cRam_? = '\x01';
  }
  this_00 = (JContainer *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
  if (this_00 != (JContainer *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                     );
      func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>)
      ;
      cRam_? = '\x01';
    }
    this_01 = (JContainer__Class *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                             );
    if (this_01 != (JContainer__Class *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                );
      this_00[1].klass = this_01;
      func_?(this_00 + 1,this_01);
      JContainer::JContainer__ctor_1(this_00,(JContainer *)this,(MethodInfo *)0x0);
      if (this != (JProperty *)0x0) {
        pSVar1 = (this->fields)._name;
        this_00[1].monitor = (MonitorData *)pSVar1;
        func_?(&this_00[1].monitor,pSVar1);
        return (JToken *)this_00;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar3 = (JToken *)(*pcVar2)();
  return pJVar3;
}


/* Boolean ContainsItem(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_ContainsItem
               (JProperty *this,JToken *item,MethodInfo *method)

{
  pJVar1 = JProperty_get_Value(this,(MethodInfo *)0x0);
  return pJVar1 == item;
}


/* Boolean DeepEquals(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_DeepEquals
               (JProperty *this,JToken *node,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    cRam_? = '\x01';
  }
  if ((((node == (JToken *)0x0) ||
       ((node->klass->_1).typeHierarchyDepth <
        (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth)) ||
      ((JProperty__Class *)
       (node->klass->_1).typeHierarchy
       [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] !=
       TypeInfo__Newtonsoft__Json__Linq__JProperty)) ||
     (bVar1 = mscorlib.dll::System::String::String_op_Equality
                        ((this->fields)._name,(String *)node[1].fields._previous,(MethodInfo *)0x0),
     bVar1 == 0)) {
    return 0;
  }
  piVar2 = (int *)(*(this->klass->vtable).get_First.methodPtr)
                            (this,(this->klass->vtable).get_First.method);
  piVar3 = (int *)(*(node->klass->vtable).get_First.methodPtr)
                            (node,(node->klass->vtable).get_First.method);
  if (piVar2 != piVar3) {
    while (piVar2 != (int *)0x0) {
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      cVar4 = (**(code **)(*piVar2 + 0x11c))(piVar2,piVar3,*(undefined4 *)(*piVar2 + 0x120));
      if (cVar4 == '\0') {
        return 0;
      }
      piVar5 = (int *)(*(this->klass->vtable).get_Last.methodPtr)
                                (this,(this->klass->vtable).get_Last.method);
      if (piVar2 == piVar5) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)piVar2[4];
      }
      piVar5 = (int *)(*(node->klass->vtable).get_Last.methodPtr)
                                (node,(node->klass->vtable).get_Last.method);
      if (piVar3 == piVar5) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)piVar3[4];
      }
    }
    if (piVar3 != (int *)0x0) {
      return 0;
    }
  }
  return 1;
}


/* Int32 GetDeepHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_GetDeepHashCode
                  (JProperty *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._name;
  if (pSVar1 != (String *)0x0) {
    uVar2 = (*(pSVar1->klass->vtable).GetHashCode.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable).GetHashCode.method);
    pJVar3 = JProperty_get_Value(this,(MethodInfo *)0x0);
    if (pJVar3 == (JToken *)0x0) {
      return uVar2;
    }
    pJVar3 = JProperty_get_Value(this,(MethodInfo *)0x0);
    if (pJVar3 != (JToken *)0x0) {
      uVar4 = (*(pJVar3->klass->vtable).__unknown_5.methodPtr)
                        (pJVar3,(pJVar3->klass->vtable).__unknown_5.method);
      return uVar4 ^ uVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* JToken GetItem(Int32) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_GetItem
                   (JProperty *this,int32_t index,MethodInfo *method)

{
  if (index == 0) {
    pJVar1 = JProperty_get_Value(this,(MethodInfo *)0x0);
    return pJVar1;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar2);
  func_?(this_00);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar2 = func_?(&MethodInfo__Newtonsoft__Json__Linq__JProperty__GetItem_int_);
  func_?(this_00,uVar2);
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* Void InsertItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_InsertItem
               (JProperty *this,int32_t index,JToken *item,MethodInfo *method)

{
  pJVar1 = JProperty_get_Value(this,(MethodInfo *)0x0);
  if (pJVar1 == (JToken *)0x0) {
    JContainer::JContainer_InsertItem((JContainer *)this,0,item,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar2);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar2 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar2);
  handle.value = (void *)func_?(&TypeRef__Newtonsoft__Json__Linq__JProperty);
  uVar2 = func_?(&TypeInfo__System__Type);
  func_?(uVar2);
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar3);
  func_?(0);
  method_00 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral__0__cannot_have_multiple_values_);
  pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar4,(IFormatProvider *)provider,args,method_00);
  uVar2 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar2);
  func_?(this_00);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar4,(MethodInfo *)0x0);
  uStack5 =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Linq__JProperty__InsertItem_int__Newtonsoft__Json__Linq__JToken_
                      );
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* JProperty Load(JsonReader) */

JProperty *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_Load
          (JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pEVar1 = (Exception *)reader;
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(&TypeInfo__System__Exception);
    pEVar1 = (Exception *)func_?(uVar2);
    func_?(pEVar1);
    pMVar3 = (MethodInfo *)0x0;
    pSVar4 = (String *)func_?(&StringLiteral_Error_reading_JProperty_from_Jso);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar4,pMVar3);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Linq__JProperty__Load_Newtonsoft__Json__JsonReader_
                           );
    pSVar5 = (String__Class *)func_?(pEVar1,uVar2);
  }
  else {
    iVar6 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    if (iVar6 == 0) {
      cVar7 = (*(((JsonReader *)pEVar1)->klass->vtable).__unknown.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).__unknown.method);
      if (cVar7 != '\0') goto code_?;
      goto code_?;
    }
code_?:
    iVar6 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                      (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
    if (iVar6 != 4) goto code_?;
    unaff_EBX = (String *)
                (*(((JsonReader *)pEVar1)->klass->vtable).get_Value.methodPtr)
                          (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_Value.method);
    pJVar8 = (JProperty *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
    if (pJVar8 == (JProperty *)0x0) goto code_?;
    pSVar4 = (String *)0x0;
    if (unaff_EBX == (String *)0x0) {
code_?:
      JProperty__ctor_1(pJVar8,pSVar4,(MethodInfo *)0x0);
      pMVar3 = (MethodInfo *)0x0;
      lineInfo = (IJsonLineInfo *)func_?(pEVar1,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
      JToken::JToken_SetLineInfo((JToken *)pJVar8,lineInfo,pMVar3);
      JContainer::JContainer_ReadTokenFrom
                ((JContainer *)pJVar8,(JsonReader *)pEVar1,(MethodInfo *)0x0);
      return pJVar8;
    }
    if (unaff_EBX->klass == TypeInfo__System__String) {
      pSVar4 = unaff_EBX;
    }
    pSVar5 = TypeInfo__System__String;
    if (pSVar4 != (String *)0x0) goto code_?;
  }
  func_?(unaff_EBX,pSVar5);
code_?:
  uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar2);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar2 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar2);
  func_?(pEVar1);
  reader = (JsonReader *)func_?(7,pEVar1);
  uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&reader);
  uVar2 = func_?(uVar2);
  func_?(args);
  func_?(args,uVar2);
  func_?(0,uVar2);
  pMVar3 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral_Error_reading_JProperty_from_Jso);
  pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar4,(IFormatProvider *)provider,args,pMVar3);
  uVar2 = func_?(&TypeInfo__System__Exception);
  pEVar1 = (Exception *)func_?(uVar2);
  func_?(pEVar1);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar4,(MethodInfo *)0x0);
  reader = (JsonReader *)
           func_?(&
                           MethodInfo__Newtonsoft__Json__Linq__JProperty__Load_Newtonsoft__Json__JsonReader_
                          );
  func_?();
  pcVar9 = (code *)swi(3);
  pJVar8 = (JProperty *)(*pcVar9)();
  return pJVar8;
}


/* Boolean RemoveItem(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_RemoveItem
               (JProperty *this,JToken *item,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar1);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar1);
  handle.value = (void *)func_?(&TypeRef__Newtonsoft__Json__Linq__JProperty);
  uVar1 = func_?(&TypeInfo__System__Type);
  func_?(uVar1);
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar2);
  func_?(0,pTVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Cannot_add_or_remove_items_from_);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
  uStack4 =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Linq__JProperty__RemoveItem_Newtonsoft__Json__Linq__JToken_
                      );
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void RemoveItemAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_RemoveItemAt
               (JProperty *this,int32_t index,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar1);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar1);
  handle.value = (void *)func_?(&TypeRef__Newtonsoft__Json__Linq__JProperty);
  uVar1 = func_?(&TypeInfo__System__Type);
  func_?(uVar1);
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar2);
  func_?(0,pTVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Cannot_add_or_remove_items_from_);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
  uStack4 =
       func_?(&MethodInfo__Newtonsoft__Json__Linq__JProperty__RemoveItemAt_int_);
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_SetItem
               (JProperty *this,int32_t index,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject);
    cRam_? = '\x01';
  }
  if (index == 0) {
    pJVar1 = JProperty_get_Value(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
      cRam_? = '\x01';
    }
    if (((pJVar1 != (JToken *)0x0) &&
        ((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth)) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      iVar2 = (*(pJVar1->klass->vtable).__unknown_2.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).__unknown_2.method);
      if ((iVar2 == 10) && (item == (JToken *)0x0)) {
        return;
      }
      cVar3 = (*(pJVar1->klass->vtable).Equals.methodPtr)
                        (pJVar1,item,(pJVar1->klass->vtable).Equals.method);
      if (cVar3 != '\0') {
        return;
      }
    }
    if (((this->fields)._._._parent == (JContainer *)0x0) ||
       ((unaff_EBX = (this->fields)._._._parent, pJVar4 = TypeInfo__Newtonsoft__Json__Linq__JObject,
        (TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth <=
        (unaff_EBX->klass->_1).typeHierarchyDepth &&
        ((JObject__Class *)
         (unaff_EBX->klass->_1).typeHierarchy
         [(TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth - 1] ==
         TypeInfo__Newtonsoft__Json__Linq__JObject)))) {
      JContainer::JContainer_SetItem((JContainer *)this,0,item,(MethodInfo *)0x0);
      if ((this->fields)._._._parent == (JContainer *)0x0) {
        return;
      }
      pJVar5 = (this->fields)._._._parent;
      pJVar6 = pJVar5->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth <=
           (pJVar6->_1).typeHierarchyDepth) &&
         ((JObject__Class *)
          (pJVar6->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth - 1] ==
          TypeInfo__Newtonsoft__Json__Linq__JObject)) {
        (*(code *)pJVar6[1].vtable.System_Collections_IEnumerable_GetEnumerator.method)(pJVar5);
        return;
      }
      goto code_?;
    }
  }
  else {
    uVar7 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar7);
    func_?(this_00);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
              (this_00,(MethodInfo *)0x0);
    uVar7 = func_?(&
                            MethodInfo__Newtonsoft__Json__Linq__JProperty__SetItem_int__Newtonsoft__Json__Linq__JToken_
                           );
    func_?(this_00,uVar7);
    pJVar4 = extraout_EDX;
  }
  func_?(unaff_EBX,pJVar4);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void WriteTo(JsonWriter, JsonConverter[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_WriteTo
               (JProperty *this,JsonWriter *writer,JsonConverter__Array *converters,
               MethodInfo *method)

{
  if (writer != (JsonWriter *)0x0) {
    (*(writer->klass->vtable).WritePropertyName.methodPtr)
              (writer,(this->fields)._name,(writer->klass->vtable).WritePropertyName.method);
    pJVar1 = JProperty_get_Value(this,(MethodInfo *)0x0);
    if (pJVar1 != (JToken *)0x0) {
      (*(pJVar1->klass->vtable).__unknown_4.methodPtr)
                (pJVar1,writer,converters,(pJVar1->klass->vtable).__unknown_4.method);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JProperty(JProperty) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty__ctor
               (JProperty *this,JProperty *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_Newtonsoft_Json_Linq_JToken_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                           );
  if (this_00 != (List_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
              );
    (this->fields)._content = this_00;
    func_?(&(this->fields)._content,this_00);
    JContainer::JContainer__ctor_1((JContainer *)this,(JContainer *)other,(MethodInfo *)0x0);
    if (other != (JProperty *)0x0) {
      pSVar1 = (other->fields)._name;
      (this->fields)._name = pSVar1;
      func_?(&(this->fields)._name,pSVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JProperty(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty__ctor_1
               (JProperty *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    func_?(&StringLiteral_name);
    cRam_? = '\x01';
  }
  this_00 = (List_1_Newtonsoft_Json_Linq_JToken_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                           );
  if (this_00 != (List_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
              );
    method_00 = (MethodInfo *)&(this->fields)._content;
    (this->fields)._content = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)name,StringLiteral_name,(MethodInfo *)0x0);
    (this->fields)._name = name;
    func_?(&(this->fields)._name,name);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JProperty(String, Object[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty__ctor_2
               (JProperty *this,String *name,Object__Array *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JArray);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    func_?(&StringLiteral_name);
    cRam_? = '\x01';
  }
  this_00 = (List_1_Newtonsoft_Json_Linq_JToken_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                           );
  if (this_00 != (List_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
              );
    method_00 = (MethodInfo *)&(this->fields)._content;
    (this->fields)._content = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)name,StringLiteral_name,(MethodInfo *)0x0);
    (this->fields)._name = name;
    func_?(&(this->fields)._name,name);
    bVar1 = JContainer::JContainer_IsMultiContent
                      ((JContainer *)this,(Object *)content,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      value = JContainer::JContainer_CreateFromContent
                        ((JContainer *)this,(Object *)content,(MethodInfo *)0x0);
      JProperty_set_Value(this,value,(MethodInfo *)0x0);
      return;
    }
    this_01 = (JArray *)func_?();
    if (this_01 != (JArray *)0x0) {
      JArray::JArray__ctor_3(this_01,(Object *)content,(MethodInfo *)0x0);
      JProperty_set_Value(this,(JToken *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JProperty(String, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty__ctor_3
               (JProperty *this,String *name,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JArray);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    func_?(&StringLiteral_name);
    cRam_? = '\x01';
  }
  this_00 = (List_1_Newtonsoft_Json_Linq_JToken_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                           );
  if (this_00 != (List_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
              );
    method_00 = (MethodInfo *)&(this->fields)._content;
    (this->fields)._content = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)name,StringLiteral_name,(MethodInfo *)0x0);
    (this->fields)._name = name;
    func_?(&(this->fields)._name,name);
    bVar1 = JContainer::JContainer_IsMultiContent((JContainer *)this,content,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      value = JContainer::JContainer_CreateFromContent((JContainer *)this,content,(MethodInfo *)0x0)
      ;
      JProperty_set_Value(this,value,(MethodInfo *)0x0);
      return;
    }
    this_01 = (JArray *)func_?();
    if (this_01 != (JArray *)0x0) {
      JArray::JArray__ctor_3(this_01,content,(MethodInfo *)0x0);
      JProperty_set_Value(this,(JToken *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JToken get_Value() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_get_Value
                   (JProperty *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  iVar1 = (*(this->klass->vtable).get_ChildrenTokens.methodPtr)
                    (this,(this->klass->vtable).get_ChildrenTokens.method);
  if (iVar1 != 0) {
    iVar1 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar1);
    if (iVar1 < 1) {
      return (JToken *)0x0;
    }
    iVar1 = (*(this->klass->vtable).get_ChildrenTokens.methodPtr)
                      (this,(this->klass->vtable).get_ChildrenTokens.method);
    if (iVar1 != 0) {
      pJVar2 = (JToken *)
               func_?(0,
                               TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                               ,iVar1,0);
      return pJVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar3)();
  return pJVar2;
}


/* Void set_Value(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_set_Value
               (JProperty *this,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  JContainer::JContainer_CheckReentrancy((JContainer *)this,(MethodInfo *)0x0);
  if (value == (JToken *)0x0) {
    value = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (value == (JToken *)0x0) goto code_?;
    pJVar1 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)0x0,
                        (MethodInfo *)0x0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].monitor = (MonitorData *)0x0;
    func_?(&value[1].monitor,0);
    value[1].klass = pJVar1;
  }
  iVar2 = (*(this->klass->vtable).get_ChildrenTokens.methodPtr)
                    (this,(this->klass->vtable).get_ChildrenTokens.method);
  if (iVar2 != 0) {
    iVar2 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar2);
    pJVar3 = this->klass;
    if (iVar2 != 0) {
      (*(pJVar3->vtable).SetItem.methodPtr)(this,0,value,(pJVar3->vtable).SetItem.method);
      return;
    }
    (*(pJVar3->vtable).InsertItem.methodPtr)(this,0,value,(pJVar3->vtable).InsertItem.method);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

