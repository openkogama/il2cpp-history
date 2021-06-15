
/* Void ClearItems() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_ClearItems
               (JProperty *this,MethodInfo *method)

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
  handle = TypeRef__Newtonsoft__Json__Linq__JProperty;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar1);
  func_?(0,pTVar1);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_add_or_remove_items_from_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  pMStack2 = MethodInfo__Newtonsoft__Json__Linq__JProperty__ClearItems__;
  uStack3 = 0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_CloneToken
                   (JProperty *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JContainer *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (JContainer__Class *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__)
  ;
  this_00[1].klass = this_01;
  JContainer::JContainer__ctor_1(this_00,(JContainer *)this,(MethodInfo *)0x0);
  if (this != (JProperty *)0x0) {
    this_00[1].monitor = (MonitorData *)(this->fields)._name;
    return (JToken *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar1)();
  return pJVar2;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (node != (JToken *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).naturalAligment;
    if (((node->klass->_1).naturalAligment < bVar1) ||
       ((JProperty__Class *)(node->klass->_1).typeHierarchy[bVar1 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    container = (JContainer *)0x0;
    if (bVar2) {
      container = (JContainer *)node;
    }
    if (container != (JContainer *)0x0) {
      b = (String *)container[1].monitor;
      a = (this->fields)._name;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar3 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        bVar3 = JContainer::JContainer_ContentsEqual((JContainer *)this,container,(MethodInfo *)0x0)
        ;
        return bVar3;
      }
    }
  }
  return 0;
}


/* Int32 GetDeepHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_GetDeepHashCode
                  (JProperty *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._name;
  if (pSVar1 != (String *)0x0) {
    uVar2 = (*(code *)(pSVar1->klass->vtable).GetHashCode.method)
                      (pSVar1,(pSVar1->klass->vtable).ToString.methodPtr);
    pJVar3 = JProperty_get_Value(this,(MethodInfo *)0x0);
    if (pJVar3 == (JToken *)0x0) {
      return uVar2;
    }
    pJVar3 = JProperty_get_Value(this,(MethodInfo *)0x0);
    if (pJVar3 != (JToken *)0x0) {
      uVar4 = (*(code *)(pJVar3->klass->vtable).__unknown_5.method)
                        (pJVar3,pJVar3->klass[1]._0.image);
      return uVar4 ^ uVar2;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* JToken GetItem(Int32) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_GetItem
                   (JProperty *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index == 0) {
    pJVar1 = JProperty_get_Value(this,(MethodInfo *)0x0);
    return pJVar1;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0,MethodInfo__Newtonsoft__Json__Linq__JProperty__GetItem_int_);
  pcVar2 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar2)();
  return pJVar1;
}


/* Void InsertItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_InsertItem
               (JProperty *this,int32_t index,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JProperty_get_Value(this,(MethodInfo *)0x0);
  if (pJVar1 == (JToken *)0x0) {
    JContainer::JContainer_InsertItem((JContainer *)this,0,item,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  handle = TypeRef__Newtonsoft__Json__Linq__JProperty;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar2);
  func_?(0);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral__0__cannot_have_multiple_values_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  pMStack3 =
       MethodInfo__Newtonsoft__Json__Linq__JProperty__InsertItem_int__Newtonsoft__Json__Linq__JToken_
  ;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* JProperty Load(JsonReader) */

JProperty *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_Load
          (JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IsolatedStorageException *)reader;
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?(0);
code_?:
    pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (pIVar1,StringLiteral_Error_reading_JProperty_from_Jso,(MethodInfo *)0x0);
    pSVar2 = (String__Class *)
             func_?(pIVar1,0,
                             MethodInfo__Newtonsoft__Json__Linq__JProperty__Load_Newtonsoft__Json__JsonReader_
                            );
  }
  else {
    iVar3 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar3 == 0) {
      cVar4 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).__unknown.method)
                        (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).__unknown_1.methodPtr);
      if (cVar4 != '\0') goto code_?;
      goto code_?;
    }
code_?:
    iVar3 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar3 != 4) goto code_?;
    pSVar5 = unaff_EBX;
    unaff_EBX = (String *)
                (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_Value.method)
                          (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_ValueType.methodPtr);
    pJVar6 = (JProperty *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
    pSVar7 = (String *)0x0;
    if (unaff_EBX == (String *)0x0) {
code_?:
      unaff_EBX = pSVar5;
      JProperty__ctor_1(pJVar6,pSVar7,(MethodInfo *)0x0);
      if (pJVar6 != (JProperty *)0x0) {
        method_00 = (MethodInfo *)0x0;
        lineInfo = (IJsonLineInfo *)
                   func_?(pIVar1,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
        JToken::JToken_SetLineInfo((JToken *)pJVar6,lineInfo,method_00);
        JContainer::JContainer_ReadTokenFrom
                  ((JContainer *)pJVar6,(JsonReader *)pIVar1,(MethodInfo *)0x0);
        return pJVar6;
      }
      goto code_?;
    }
    if (unaff_EBX->klass == TypeInfo__System__String) {
      pSVar7 = unaff_EBX;
    }
    pSVar2 = TypeInfo__System__String;
    if (pSVar7 != (String *)0x0) goto code_?;
  }
  func_?(unaff_EBX,pSVar2);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pIVar1,0);
  reader = (JsonReader *)func_?(7,pIVar1);
  uVar8 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&reader);
  func_?(args,0);
  func_?(args,uVar8);
  func_?(0,uVar8);
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Error_reading_JProperty_from_Jso,(IFormatProvider *)provider,
                      args,(MethodInfo *)0x0);
  pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar1,pSVar7,(MethodInfo *)0x0);
  reader = (JsonReader *)
           MethodInfo__Newtonsoft__Json__Linq__JProperty__Load_Newtonsoft__Json__JsonReader_;
  func_?(pIVar1);
  pcVar9 = (code *)swi(3);
  pJVar6 = (JProperty *)(*pcVar9)();
  return pJVar6;
}


/* Boolean RemoveItem(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_RemoveItem
               (JProperty *this,JToken *item,MethodInfo *method)

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
  handle = TypeRef__Newtonsoft__Json__Linq__JProperty;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar1);
  func_?(0,pTVar1);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_add_or_remove_items_from_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  pMStack2 =
       MethodInfo__Newtonsoft__Json__Linq__JProperty__RemoveItem_Newtonsoft__Json__Linq__JToken_;
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void RemoveItemAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_RemoveItemAt
               (JProperty *this,int32_t index,MethodInfo *method)

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
  handle = TypeRef__Newtonsoft__Json__Linq__JProperty;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar1);
  func_?(0,pTVar1);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_add_or_remove_items_from_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  pMStack2 = MethodInfo__Newtonsoft__Json__Linq__JProperty__RemoveItemAt_int_;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_SetItem
               (JProperty *this,int32_t index,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index != 0) {
    this_00 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
              (this_00,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Linq__JProperty__SetItem_int__Newtonsoft__Json__Linq__JToken_
                   );
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  currentValue = JProperty_get_Value(this,(MethodInfo *)0x0);
  bVar2 = JContainer::JContainer_IsTokenUnchanged(currentValue,item,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((this->fields)._._._parent != (JContainer *)0x0) {
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
      func_?();
    }
    JContainer::JContainer_SetItem((JContainer *)this,0,item,(MethodInfo *)0x0);
    if ((this->fields)._._._parent != (JContainer *)0x0) {
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
      piVar4 = (int *)func_?();
      (**(code **)(*piVar4 + 0x3a8))(piVar4,(this->fields)._name,*(undefined4 *)(*piVar4 + 0x3ac));
    }
  }
  return;
}


/* Void WriteTo(JsonWriter, JsonConverter[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_WriteTo
               (JProperty *this,JsonWriter *writer,JsonConverter__Array *converters,
               MethodInfo *method)

{
  if (writer != (JsonWriter *)0x0) {
    (*(code *)(writer->klass->vtable).WritePropertyName.method)
              (writer,(this->fields)._name,(writer->klass->vtable).WriteEnd.methodPtr);
    pJVar1 = JProperty_get_Value(this,(MethodInfo *)0x0);
    if (pJVar1 != (JToken *)0x0) {
      (*(code *)(pJVar1->klass->vtable).__unknown_4.method)
                (pJVar1,writer,converters,(pJVar1->klass->vtable).__unknown_5.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JProperty(JProperty) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty__ctor
               (JProperty *this,JProperty *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__)
  ;
  (this->fields)._content = (List_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  JContainer::JContainer__ctor_1((JContainer *)this,(JContainer *)other,(MethodInfo *)0x0);
  if (other != (JProperty *)0x0) {
    (this->fields)._name = (other->fields)._name;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JProperty(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty__ctor_1
               (JProperty *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>;
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__)
  ;
  (this->fields)._content = (List_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)name,StringLiteral_name,(MethodInfo *)0x0);
  (this->fields)._name = name;
  return;
}


/* JProperty(String, Object[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty__ctor_2
               (JProperty *this,String *name,Object__Array *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>;
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__)
  ;
  (this->fields)._content = (List_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)name,StringLiteral_name,(MethodInfo *)0x0);
  (this->fields)._name = name;
  bVar1 = JContainer::JContainer_IsMultiContent
                    ((JContainer *)this,(Object *)content,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    value = JContainer::JContainer_CreateFromContent
                      ((JContainer *)this,(Object *)content,(MethodInfo *)0x0);
    JProperty_set_Value(this,value,(MethodInfo *)0x0);
    return;
  }
  this_01 = (JArray *)func_?();
  JArray::JArray__ctor_3(this_01,(Object *)content,(MethodInfo *)0x0);
  JProperty_set_Value(this,(JToken *)this_01,(MethodInfo *)0x0);
  return;
}


/* JProperty(String, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty__ctor_3
               (JProperty *this,String *name,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>;
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__)
  ;
  (this->fields)._content = (List_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)name,StringLiteral_name,(MethodInfo *)0x0);
  (this->fields)._name = name;
  bVar1 = JContainer::JContainer_IsMultiContent((JContainer *)this,content,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    value = JContainer::JContainer_CreateFromContent((JContainer *)this,content,(MethodInfo *)0x0);
    JProperty_set_Value(this,value,(MethodInfo *)0x0);
    return;
  }
  this_01 = (JArray *)func_?();
  JArray::JArray__ctor_3(this_01,content,(MethodInfo *)0x0);
  JProperty_set_Value(this,(JToken *)this_01,(MethodInfo *)0x0);
  return;
}


/* JToken get_Value() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_get_Value
                   (JProperty *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (*(code *)(this->klass->vtable).get_ChildrenTokens.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  if (iVar1 != 0) {
    iVar1 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar1);
    if (iVar1 < 1) {
      return (JToken *)0x0;
    }
    iVar1 = (*(code *)(this->klass->vtable).get_ChildrenTokens.method)
                      (this,(this->klass->vtable).InsertItem.methodPtr);
    if (iVar1 != 0) {
      pJVar2 = (JToken *)
               func_?(3,
                               TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                               ,iVar1,0);
      return pJVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar3)();
  return pJVar2;
}


/* Void set_Value(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JProperty::JProperty_set_Value
               (JProperty *this,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JContainer::JContainer_CheckReentrancy((JContainer *)this,(MethodInfo *)0x0);
  if (value == (JToken *)0x0) {
    value = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
    pSVar1 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)0x0,
                        (MethodInfo *)0x0);
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)value,0.0,in_stack_2);
    (((ScaleAnimationBase *)value)->fields).OnScaleAnimationStopped = pSVar1;
    ((ScaleAnimationBase *)((int)value + 0x28))->klass = (ScaleAnimationBase__Class *)0x0;
  }
  iVar3 = (*(code *)(this->klass->vtable).get_ChildrenTokens.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  if (iVar3 != 0) {
    iVar3 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar3);
    pJVar4 = this->klass;
    if (iVar3 != 0) {
      (*(code *)(pJVar4->vtable).SetItem.method)(this,0,value,(pJVar4->vtable).ClearItems.methodPtr)
      ;
      return;
    }
    (*(code *)(pJVar4->vtable).InsertItem.method)
              (this,0,value,(pJVar4->vtable).RemoveItemAt.methodPtr);
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

