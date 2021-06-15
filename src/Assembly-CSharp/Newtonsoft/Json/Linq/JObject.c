
/* Void Add(String, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_Add
               (JObject *this,String *propertyName,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JProperty *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
  JProperty::JProperty__ctor_3(this_00,propertyName,(Object *)value,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).Add.method)(this,this_00,(this->klass->vtable).Add_1.methodPtr);
  return;
}


/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_CloneToken
                   (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JContainer *)func_?(TypeInfo__Newtonsoft__Json__Linq__JObject);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__StringComparer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__StringComparer->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__StringComparer);
  }
  comparer = mscorlib.dll::System::StringComparer::StringComparer_get_Ordinal((MethodInfo *)0x0);
  this_01 = (JContainer__Class *)
            func_?(TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Linq::JToken]::KeyedCollection_2_System_String_Newtonsoft_Json_Linq_JToken___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Linq_JToken_ *)this_01,
             (IEqualityComparer_1_System_String_ *)comparer,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
            );
  this_00[1].klass = this_01;
  JContainer::JContainer__ctor_1(this_00,(JContainer *)this,(MethodInfo *)0x0);
  return (JToken *)this_00;
}


/* Boolean DeepEquals(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_DeepEquals
               (JObject *this,JToken *node,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (node != (JToken *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JObject->_1).naturalAligment;
    if (((node->klass->_1).naturalAligment < bVar1) ||
       ((JObject__Class *)(node->klass->_1).typeHierarchy[bVar1 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JObject)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pJVar3 = (JToken *)0x0;
    if (bVar2) {
      pJVar3 = node;
    }
    if (pJVar3 != (JToken *)0x0) {
      piVar4 = (int *)(*(code *)(this->klass->vtable).get_First.method)
                                (this,(this->klass->vtable).get_Last.methodPtr);
      if (pJVar3 == (JToken *)0x0) {
        func_?(0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      piVar7 = (int *)(*(code *)(pJVar3->klass->vtable).get_First.method)
                                (pJVar3,(pJVar3->klass->vtable).get_Last.methodPtr);
      if (piVar4 != piVar7) {
        while (piVar4 != (int *)0x0) {
          if (piVar7 == (int *)0x0) {
            return 0;
          }
          cVar8 = (**(code **)(*piVar4 + 0x120))(piVar4,piVar7,*(undefined4 *)(*piVar4 + 0x124));
          if (cVar8 == '\0') {
            return 0;
          }
          piVar9 = (int *)(*(code *)(this->klass->vtable).get_Last.method)
                                    (this,(this->klass->vtable).Children.methodPtr);
          if (piVar4 == piVar9) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)piVar4[4];
          }
          piVar9 = (int *)(*(code *)(pJVar3->klass->vtable).get_Last.method)
                                    (pJVar3,(pJVar3->klass->vtable).Children.methodPtr);
          if (piVar7 == piVar9) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)piVar7[4];
          }
        }
        if (piVar7 != (int *)0x0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


/* JObject FromObject(Object) */

JObject * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_FromObject
                    (Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (JsonSerializer *)func_?(TypeInfo__Newtonsoft__Json__JsonSerializer);
  JsonSerializer::JsonSerializer__ctor(this,(MethodInfo *)0x0);
  pJVar1 = JObject_FromObject_1(o,this,(MethodInfo *)0x0);
  return pJVar1;
}


/* JObject FromObject(Object, JsonSerializer) */

JObject * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_FromObject_1
                    (Object *o,JsonSerializer *jsonSerializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (JObject *)JToken::JToken_FromObjectInternal(o,jsonSerializer,(MethodInfo *)0x0);
  if (pJVar1 != (JObject *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar2 != 1) goto code_?;
  }
  if (pJVar1 == (JObject *)0x0) {
    return (JObject *)0x0;
  }
  bVar3 = (TypeInfo__Newtonsoft__Json__Linq__JObject->_1).naturalAligment;
  if (((pJVar1->klass->_1).naturalAligment < bVar3) ||
     ((JObject__Class *)(pJVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
      TypeInfo__Newtonsoft__Json__Linq__JObject)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  pJVar5 = (JObject *)0x0;
  if (bVar4) {
    pJVar5 = pJVar1;
  }
  if (pJVar5 != (JObject *)0x0) {
    return pJVar5;
  }
  func_?(pJVar1,TypeInfo__Newtonsoft__Json__Linq__JObject);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pJVar1,0);
  jsonSerializer = (JsonSerializer *)func_?(0xd,pJVar1);
  uVar6 = func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&jsonSerializer);
  func_?(args,0);
  func_?(args,uVar6);
  func_?(0,uVar6);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Object_serialized_to__0___JObjec,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this = (JsonSerializer *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            ((ArgumentException *)this,message,(MethodInfo *)0x0);
  pMStack7 =
       MethodInfo__Newtonsoft__Json__Linq__JObject__FromObject_System__Object__Newtonsoft__Json__JsonSerializer_
  ;
  method = (MethodInfo *)0x0;
  jsonSerializer = this;
  func_?();
  pcVar8 = (code *)swi(3);
  pJVar1 = (JObject *)(*pcVar8)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_4 = 0;
  iVar5 = (*(code *)(this->klass->vtable).get_ChildrenTokens.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  if (iVar5 != 0) {
    piVar6 = (int *)func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                                    ,iVar5);
    uStack_1 = 0;
    while (piVar6 != (int *)0x0) {
      cVar7 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar6);
      unaff_EDI = 
      TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>;
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar6 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar6);
        }
        *unaff_FS_OFFSET = uStack_3;
        return uStack_4;
      }
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar6 + 0xb6);
      if (uVar9 != 0) {
        iVar5 = *(int *)(*piVar6 + 0x58);
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)(iVar5 + (uint)uVar8 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar10 = (undefined4 *)(*piVar6 + (*(int *)(iVar5 + 4 + (uint)uVar8 * 8) + 0x18) * 8);
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
      uVar12 = (**(code **)(*piVar11 + 0x178))(piVar11,*(undefined4 *)(*piVar11 + 0x17c));
      uStack_4 = uStack_4 ^ uVar12;
    }
  }
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
}


/* IEnumerator`1[KeyValuePair`2[System.String,Newtonsoft.Json.Linq.JToken]] GetEnumerator() */

IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_GetEnumerator
          (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JObject___GetEnumerator_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)this;
    return (IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ *)(*pcVar1)();
  return pIVar2;
}


/* Type GetTokenPropertyType(JToken) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_GetTokenPropertyType
                 (JToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Object;
  if (token == (JToken *)0x0) {
    func_?(0);
    token = extraout_EDX;
code_?:
    func_?(token,unaff_ESI);
    pcVar1 = (code *)swi(3);
    pTVar2 = (Type *)(*pcVar1)();
    return pTVar2;
  }
  pJVar3 = token->klass;
  bVar4 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
  bVar5 = (pJVar3->_1).naturalAligment;
  if ((bVar5 < bVar4) ||
     ((pJVar3->_1).typeHierarchy[bVar4 - 1] !=
      (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  pJVar7 = (JToken *)0x0;
  if (bVar6) {
    pJVar7 = token;
  }
  if (pJVar7 != (JToken *)0x0) {
    bVar4 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
    if ((bVar5 < bVar4) ||
       ((pJVar3->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pJVar7 = (JToken *)0x0;
    if (bVar6) {
      pJVar7 = token;
    }
    unaff_ESI = TypeInfo__Newtonsoft__Json__Linq__JValue;
    if (pJVar7 == (JToken *)0x0) goto code_?;
    token = (JToken *)pJVar7[1].monitor;
    if (token == (JToken *)0x0) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      return pTVar2;
    }
  }
  pTVar2 = (Type *)func_?(token,unaff_EBP);
  return pTVar2;
}


/* Void InsertItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_InsertItem
               (JObject *this,int32_t index,JToken *item,MethodInfo *method)

{
  if ((item != (JToken *)0x0) &&
     (iVar1 = (*(code *)(item->klass->vtable).__unknown_2.method)
                        (item,(item->klass->vtable).__unknown_3.methodPtr), iVar1 == 5)) {
    return;
  }
  JContainer::JContainer_InsertItem((JContainer *)this,index,item,(MethodInfo *)0x0);
  return;
}


/* Void InternalPropertyChanged(JProperty) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_InternalPropertyChanged
               (JObject *this,JProperty *childProperty,MethodInfo *method)

{
  if (childProperty != (JProperty *)0x0) {
    (*(code *)(this->klass->vtable).OnPropertyChanged.method)
              (this,(childProperty->fields)._name,this->klass[1]._0.image);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JObject Load(JsonReader) */

JObject * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_Load
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
code_?:
    func_?(0);
  }
  else {
    iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
    if (iVar2 != 0) {
code_?:
      iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                        (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
      if (iVar2 != 1) goto code_?;
      pJVar3 = (JObject *)func_?(TypeInfo__Newtonsoft__Json__Linq__JObject);
      JObject__ctor(pJVar3,(MethodInfo *)0x0);
      if (pJVar3 != (JObject *)0x0) {
        method_00 = (MethodInfo *)0x0;
        lineInfo = (IJsonLineInfo *)
                   func_?(pIVar1,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
        JToken::JToken_SetLineInfo((JToken *)pJVar3,lineInfo,method_00);
        JContainer::JContainer_ReadTokenFrom
                  ((JContainer *)pJVar3,(JsonReader *)pIVar1,(MethodInfo *)0x0);
        return pJVar3;
      }
      goto code_?;
    }
    cVar4 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).__unknown.method)
                      (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).__unknown_1.methodPtr);
    if (cVar4 != '\0') goto code_?;
  }
  pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (pIVar1,StringLiteral_Error_reading_JObject_from_JsonR,(MethodInfo *)0x0);
  reader = (JsonReader *)
           MethodInfo__Newtonsoft__Json__Linq__JObject__Load_Newtonsoft__Json__JsonReader_;
  func_?(pIVar1);
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
  uVar5 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&reader);
  func_?(args,0);
  func_?(args,uVar5);
  func_?(0,uVar5);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Error_reading_JObject_from_JsonR,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar1,message,(MethodInfo *)0x0);
  pMStack6 = MethodInfo__Newtonsoft__Json__Linq__JObject__Load_Newtonsoft__Json__JsonReader_;
  uStack7 = 0;
  reader = (JsonReader *)&UNK_?;
  method = (MethodInfo *)pIVar1;
  func_?();
  pcVar8 = (code *)swi(3);
  pJVar3 = (JObject *)(*pcVar8)();
  return pJVar3;
}


/* Void OnPropertyChanged(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_OnPropertyChanged
               (JObject *this,String *propertyName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).PropertyChanged;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    e = (InitializedGameQueryDataEventArgs *)
        func_?(TypeInfo__System__ComponentModel__PropertyChangedEventArgs);
    System.dll::System::ComponentModel::PropertyChangedEventArgs::PropertyChangedEventArgs__ctor
              ((PropertyChangedEventArgs *)e,propertyName,(MethodInfo *)0x0);
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,e,(MethodInfo *)0x0);
  }
  return;
}


/* JObject Parse(String) */

JObject * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_Parse
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
  pJVar1 = JObject_Load((JsonReader *)this_00,(MethodInfo *)0x0);
  return pJVar1;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JProperty] Properties() */

IEnumerable_1_Newtonsoft_Json_Linq_JProperty_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_Properties
          (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (IEnumerable *)
           (*(code *)(this->klass->vtable).get_ChildrenTokens.method)
                     (this,(this->klass->vtable).InsertItem.methodPtr);
  pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pJVar2 = (this->fields)._properties;
  if (pJVar2 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar3 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)pJVar2,
                        MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                       );
    if ((pOVar3 == (Object *)0x0) || (name == (String *)0x0)) {
      return (JProperty *)0x0;
    }
    pJVar2 = (this->fields)._properties;
    if (pJVar2 != (JObject_JPropertKeyedCollection *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar3 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)pJVar2,
                          MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                         );
      if (pOVar3 != (Object *)0x0) {
        func_?(3,
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                        ,pOVar3,name,&uStack_1);
        pJVar4 = (JProperty *)func_?(uStack_1,TypeInfo__Newtonsoft__Json__Linq__JProperty);
        return pJVar4;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pJVar4 = (JProperty *)(*pcVar5)();
  return pJVar4;
}


/* JEnumerable`1[JToken] PropertyValues() */

JEnumerable_1_JToken_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_PropertyValues
          (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (IEnumerable *)
           (*(code *)(this->klass->vtable).get_ChildrenTokens.method)
                     (this,(this->klass->vtable).InsertItem.methodPtr);
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                        (source,
                         System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__Cast<Newtonsoft::Json::Linq::JProperty>_System__Collections__IEnumerable_
                        );
  if (TypeInfo__Newtonsoft__Json__Linq__JObject->static_fields->__f__am_cache0 ==
      (Func_2_Newtonsoft_Json_Linq_JProperty_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Func<Newtonsoft::Json::Linq::JProperty,_Newtonsoft::Json::Linq::JToken>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Linq__JObject___PropertyValues_m__0_Newtonsoft__Json__Linq__JProperty_
               ,
               MethodInfo__System__Func<Newtonsoft::Json::Linq::JProperty,_Newtonsoft::Json::Linq::JToken>__Func_System__Object__void__
              );
    TypeInfo__Newtonsoft__Json__Linq__JObject->static_fields->__f__am_cache0 =
         (Func_2_Newtonsoft_Json_Linq_JProperty_Newtonsoft_Json_Linq_JToken_ *)this_00;
  }
  pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                     ((IEnumerable_1_System_Object_ *)source_00,
                      (Func_2_Object_Single_ *)
                      TypeInfo__Newtonsoft__Json__Linq__JObject->static_fields->__f__am_cache0,
                      System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__System__Linq__Enumerable__Select<Newtonsoft::Json::Linq::JProperty,_Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>__System__Func<Newtonsoft::Json::Linq::JProperty,_Newtonsoft::Json::Linq::JToken>_
                     );
  this = (JObject *)0x0;
  func_?(&this,pIVar1,
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
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pJVar2 = (pJVar1->fields)._._._parent;
  if (pJVar2 != (JContainer *)0x0) {
    (*(code *)(pJVar2->klass->vtable).RemoveItem.method)(pJVar2,pJVar1);
    return 1;
  }
  this_00 = (InvalidOperationException *)func_?();
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,StringLiteral_The_parent_is_missing_,(MethodInfo *)0x0);
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void 
   System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Add(KeyValuePair`2[System.String,Newtonsoft.Json.Linq.JToken])
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_string_Newtonsoft_Json_Linq_JToken___Add
               (JObject *this,KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ item,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  name = (String *)
         func_?(&item,
                         MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Key__
                        );
  content = (Object *)
            func_?(&item,
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Value__
                           );
  this_00 = (JProperty *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
  JProperty::JProperty__ctor_3(this_00,name,content,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).Add.method)(this,this_00,(this->klass->vtable).Add_1.methodPtr);
  return;
}


/* Void 
   System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Clear()
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_string_Newtonsoft_Json_Linq_JToken___Clear
               (JObject *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).ClearItems.method)
            (this,(this->klass->vtable).ReplaceItem.methodPtr);
  return;
}


/* Boolean
   System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Contains(KeyValuePair`2[System.String,Newtonsoft.Json.Linq.JToken])
    */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_string_Newtonsoft_Json_Linq_JToken___Contains
               (JObject *this,KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ item,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  name = (String *)
         func_?(&item,
                         MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Key__
                        );
  this_00 = JObject_Property(this,name,(MethodInfo *)0x0);
  if (this_00 != (JProperty *)0x0) {
    pJVar1 = JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
    pJVar2 = (JToken *)func_?(&item);
    return pJVar1 == pJVar2;
  }
  return 0;
}


/* Void 
   System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.CopyTo(KeyValuePair`2[System.String,Newtonsoft.Json.Linq.JToken][],
   Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_string_Newtonsoft_Json_Linq_JToken___CopyTo
               (JObject *this,
               KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array *array,
               int32_t arrayIndex,MethodInfo *method)

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
  if (array == (KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array *)0x0) {
    this_02 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,StringLiteral_array,(MethodInfo *)0x0);
  }
  else if (arrayIndex < 0) {
    this_01 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_01,StringLiteral_arrayIndex,StringLiteral_arrayIndex_is_less_than_0_,
               (MethodInfo *)0x0);
  }
  else {
    if (arrayIndex < (int)array->max_length) {
      iVar4 = JContainer::JContainer_get_Count((JContainer *)this,(MethodInfo *)0x0);
      if (iVar4 <= (int)(array->max_length - arrayIndex)) {
        iVar5 = 0;
        iVar6 = (*(code *)(this->klass->vtable).get_ChildrenTokens.method)();
        if (iVar6 != 0) {
          iVar6 = func_?(0);
          uStack_1 = 0;
          while (iVar6 != 0) {
            cVar7 = func_?(1);
            if (cVar7 == '\0') {
              uStack_1 = 0xffffffff;
              if (iVar6 != 0) {
                func_?(0);
              }
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            func_?(0);
            this_00 = (JProperty *)func_?();
            if (this_00 == (JProperty *)0x0) break;
            JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
            pMVar8 = 
            MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__KeyValuePair_System__String__Newtonsoft__Json__Linq__JToken_
            ;
            func_?();
            uVar9 = arrayIndex + iVar5;
            if (array->max_length <= uVar9) {
              uVar10 = func_?();
              func_?(uVar10);
              break;
            }
            iVar5 = iVar5 + 1;
            array->vector[uVar9].key = (String *)pMVar8;
            array->vector[uVar9].value = (JToken *)0x0;
          }
        }
        func_?();
        func_?(iVar5);
      }
      this_03 = (ArgumentException *)func_?();
      message = StringLiteral_The_number_of_elements_in_the_so;
    }
    else {
      this_03 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
      message = StringLiteral_arrayIndex_is_equal_to_or_greate;
    }
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this_03,message,(MethodInfo *)0x0);
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean
   System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Remove(KeyValuePair`2[System.String,Newtonsoft.Json.Linq.JToken])
    */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_string_Newtonsoft_Json_Linq_JToken___Remove
               (JObject *this,KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ item,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = item.value;
  pSVar2 = item.key;
  pJVar3 = this->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pJVar3->_1).rank;
  uVar5._1_1_ = (pJVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pJVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_>
         ) {
        ppMVar6 = &(&(this->klass->vtable).
                     Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item)
                   [pJVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(this,
                            TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_>
                            ,4);
code_?:
  cVar7 = (*(code *)*ppMVar6)(this,pSVar2,pJVar1,ppMVar6[1]);
  if (cVar7 != '\0') {
    uVar8 = func_?(&item,
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__get_Key__
                           );
    func_?(2,
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                    ,this,uVar8);
    return 1;
  }
  return 0;
}


/* Boolean
   System.Collections.Generic.IDictionary<string,Newtonsoft.Json.Linq.JToken>.ContainsKey(String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
     JObject_System_Collections_Generic_IDictionary_string_Newtonsoft_Json_Linq_JToken__ContainsKey
               (JObject *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._properties;
  if (pJVar1 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)pJVar1,
                        MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                       );
    if (pOVar2 == (Object *)0x0) {
      return 0;
    }
    pJVar1 = (this->fields)._properties;
    if (pJVar1 != (JObject_JPropertKeyedCollection *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar2 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)pJVar1,
                          MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                         );
      if (pOVar2 != (Object *)0x0) {
        bVar3 = func_?(1,
                                TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                                ,pOVar2,key);
        return bVar3;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* ICollection`1[System.String]
   System.Collections.Generic.IDictionary<string,Newtonsoft.Json.Linq.JToken>.get_Keys() */

ICollection_1_System_String_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_Collections_Generic_IDictionary_string_Newtonsoft_Json_Linq_JToken__get_Keys
          (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._properties;
  if (this_00 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar1 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                       );
    if (pOVar1 != (Object *)0x0) {
      pIVar2 = (ICollection_1_System_String_ *)
               func_?(6,
                               TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                              );
      return pIVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar2 = (ICollection_1_System_String_ *)(*pcVar3)();
  return pIVar2;
}


/* ICollection`1[Newtonsoft.Json.Linq.JToken]
   System.Collections.Generic.IDictionary<string,Newtonsoft.Json.Linq.JToken>.get_Values() */

ICollection_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_Collections_Generic_IDictionary_string_Newtonsoft_Json_Linq_JToken__get_Values
          (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._properties;
  if (this_00 != (JObject_JPropertKeyedCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar1 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                       );
    if (pOVar1 != (Object *)0x0) {
      pIVar2 = (ICollection_1_Newtonsoft_Json_Linq_JToken_ *)
               func_?(7,
                               TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                              );
      return pIVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar2 = (ICollection_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar3)();
  return pIVar2;
}


/* AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes() */

AttributeCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_ComponentModel_ICustomTypeDescriptor_GetAttributes(JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__ComponentModel__AttributeCollection->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__System__ComponentModel__AttributeCollection->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__System__ComponentModel__TypeConverter);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  return (TypeConverter *)this_00;
}


/* EventDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetEvents(Attribute[]) */

EventDescriptorCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::
JObject_System_ComponentModel_ICustomTypeDescriptor_GetEvents
          (JObject *this,Attribute__Array *attributes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__ComponentModel__EventDescriptorCollection->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__System__ComponentModel__EventDescriptorCollection->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__ComponentModel__EventDescriptorCollection->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__System__ComponentModel__EventDescriptorCollection->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pJVar2 = this->klass;
  uVar3._0_1_ = (pJVar2->_1).rank;
  uVar3._1_1_ = (pJVar2->_1).minimumAlignment;
  if (uVar3 != 0) {
    do {
      if (pJVar2->interfaceOffsets[uVar1].interfaceType ==
          (Il2CppClass *)TypeInfo__System__ComponentModel__ICustomTypeDescriptor) {
        iVar4 = pJVar2->interfaceOffsets[uVar1].offset;
        pPVar5 = (PropertyDescriptorCollection *)
                 (*(code *)(&(this->klass->vtable).System_ICloneable_Clone)[iVar4].method)
                           (this,0,(&(this->klass->vtable).CloneToken)[iVar4].methodPtr);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pPVar4 = (PropertyDescriptorCollection *)
            func_?(TypeInfo__System__ComponentModel__PropertyDescriptorCollection);
  System.dll::System::ComponentModel::PropertyDescriptorCollection::
  PropertyDescriptorCollection__ctor(pPVar4,(PropertyDescriptor__Array *)0x0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JObject___GetEnumerator_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)this;
    uStack_1 = 0;
    while (this_00 != (ScaleAnimationBase *)0x0) {
      cVar5 = func_?();
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        if (this_00 != (ScaleAnimationBase *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return pPVar4;
      }
      pSVar6 = this_00->klass;
      uVar7 = 0;
      uVar8._0_1_ = (pSVar6->_1).rank;
      uVar8._1_1_ = (pSVar6->_1).minimumAlignment;
      if (uVar8 != 0) {
        do {
          if (pSVar6->interfaceOffsets[uVar7].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>_>
             ) {
            ppMVar9 = &(&(pSVar6->vtable).Equals)[pSVar6->interfaceOffsets[uVar7].offset].method;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      ppMVar9 = (MethodInfo **)func_?();
code_?:
      (*(code *)*ppMVar9)();
      player = (MVPlayer *)func_?();
      this_01 = (Object__Class *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      handle = TypeRef__System__Object;
      if (this_01 == (Object__Class *)0x0) break;
      pOVar10 = ((Object *)this_01)->klass;
      bVar11 = (pOVar10->_1).naturalAligment;
      bVar12 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
      if ((bVar11 < bVar12) ||
         ((pOVar10->_1).typeHierarchy[bVar12 - 1] !=
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      pOVar14 = (Object *)0x0;
      if (bVar13) {
        pOVar14 = (Object *)this_01;
      }
      if (pOVar14 == (Object *)0x0) {
code_?:
        value = (PropertyDescriptor__Class *)
                mscorlib.dll::System::Object::Object_GetType((Object *)this_01,(MethodInfo *)0x0);
      }
      else {
        bVar12 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
        if ((bVar11 < bVar12) ||
           ((pOVar10->_1).typeHierarchy[bVar12 - 1] !=
            (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        pOVar14 = (Object *)0x0;
        if (bVar13) {
          pOVar14 = (Object *)this_01;
        }
        if (pOVar14 == (Object *)0x0) {
          func_?();
          break;
        }
        this_01 = pOVar14[5].klass;
        if (this_01 != (Object__Class *)0x0) goto code_?;
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        value = (PropertyDescriptor__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      }
      value_00 = (PropertyDescriptor *)func_?();
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      PlayerElementData::PlayerElementData__ctor
                ((PlayerElementData *)value_00,player,(Friend *)0x0,(MethodInfo *)0x0);
      Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                ((Object *)player,StringLiteral_name,(MethodInfo *)0x0);
      Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                ((Object *)value,StringLiteral_propertyType,(MethodInfo *)0x0);
      value_00[1].klass = value;
      if (pPVar4 == (PropertyDescriptorCollection *)0x0) break;
      System.dll::System::ComponentModel::PropertyDescriptorCollection::
      PropertyDescriptorCollection_Add(pPVar4,value_00,(MethodInfo *)0x0);
    }
  }
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  pPVar4 = (PropertyDescriptorCollection *)(*pcVar15)();
  return pPVar4;
}


/* Boolean TryGetValue(String, JToken ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_TryGetValue
               (JObject *this,String *propertyName,JToken **value,MethodInfo *method)

{
  this_00 = JObject_Property(this,propertyName,(MethodInfo *)0x0);
  if (this_00 != (JProperty *)0x0) {
    pJVar1 = JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
    *value = pJVar1;
    return 1;
  }
  *value = (JToken *)0x0;
  return 0;
}


/* Void ValidateToken(JToken, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_ValidateToken
               (JObject *this,JToken *o,JToken *existing,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)o,StringLiteral_o,(MethodInfo *)0x0);
  if (o == (JToken *)0x0) goto code_?;
  iVar1 = (*(code *)(o->klass->vtable).__unknown_2.method)
                    (o,(o->klass->vtable).__unknown_3.methodPtr);
  if (iVar1 == 4) {
    bVar2 = (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).naturalAligment;
    if (((o->klass->_1).naturalAligment < bVar2) ||
       ((JProperty__Class *)(o->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_00 = (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0;
    if (bVar3) {
      this_00 = (AddDotsToTruncatedText_Start_c_Iterator0 *)o;
    }
    pJVar4 = TypeInfo__Newtonsoft__Json__Linq__JProperty;
    if (this_00 != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) {
      if (existing != (JToken *)0x0) {
        iVar1 = func_?(existing,TypeInfo__Newtonsoft__Json__Linq__JProperty);
        pSVar5 = (String *)(this_00->fields)._current;
        if (iVar1 == 0) goto code_?;
        b = *(String **)(iVar1 + 0x30);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar6 = mscorlib.dll::System::String::String_op_Equality(pSVar5,b,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          return;
        }
      }
      pJVar7 = (this->fields)._properties;
      if (pJVar7 == (JObject_JPropertKeyedCollection *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar8 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)pJVar7,
                          MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                         );
      if (pOVar8 == (Object *)0x0) {
        return;
      }
      pJVar7 = (this->fields)._properties;
      if (pJVar7 == (JObject_JPropertKeyedCollection *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar8 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)pJVar7,
                          MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                         );
      if (pOVar8 == (Object *)0x0) goto code_?;
      cVar9 = func_?(3,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                              ,pOVar8,(this_00->fields)._current,&existing);
      if (cVar9 == '\0') {
        return;
      }
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pOVar11 = (Object__Array *)func_?(TypeInfo__System__Object,2);
      func_?(this_00,0);
      pOVar8 = AddDotsToTruncatedText+<Start>c__Iterator0::
               AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                         (this_00,(MethodInfo *)0x0);
      func_?(pOVar11,0);
      func_?(pOVar11,pOVar8);
      func_?();
      pTVar12 = mscorlib.dll::System::Object::Object_GetType(pOVar8,(MethodInfo *)0x0);
      func_?(pOVar11,0);
      func_?(pOVar11,pTVar12);
      func_?();
      o = (JToken *)
          Json::Utilities::StringUtils::StringUtils_FormatWith
                    (StringLiteral_Can_not_add_property__0__to__1__,(IFormatProvider *)pCVar10,
                     pOVar11,(MethodInfo *)0x0);
      pAVar13 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (pAVar13,(String *)o,(MethodInfo *)0x0);
      in_stack_14 =
           MethodInfo__Newtonsoft__Json__Linq__JObject__ValidateToken_Newtonsoft__Json__Linq__JToken__Newtonsoft__Json__Linq__JToken_
      ;
      in_stack_15 = 0;
      existing = (JToken *)&UNK_?;
      method = (MethodInfo *)pAVar13;
      func_?();
      pJVar4 = extraout_EDX;
    }
    func_?(o,pJVar4);
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar11 = (Object__Array *)func_?(TypeInfo__System__Object,2);
  func_?(o,0);
  pTVar12 = mscorlib.dll::System::Object::Object_GetType((Object *)o,(MethodInfo *)0x0);
  func_?(pOVar11,0);
  func_?(pOVar11,pTVar12);
  func_?();
  pTVar12 = mscorlib.dll::System::Object::Object_GetType((Object *)pTVar12,(MethodInfo *)0x0);
  func_?(pOVar11,0);
  func_?(pOVar11,pTVar12);
  func_?();
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Can_not_add__0__to__1__,(IFormatProvider *)pCVar10,pOVar11,
                       (MethodInfo *)0x0);
  pAVar13 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (pAVar13,pSVar5,(MethodInfo *)0x0);
  in_stack_14 =
       MethodInfo__Newtonsoft__Json__Linq__JObject__ValidateToken_Newtonsoft__Json__Linq__JToken__Newtonsoft__Json__Linq__JToken_
  ;
  in_stack_15 = 0;
  existing = (JToken *)&UNK_?;
  method = (MethodInfo *)pAVar13;
  func_?();
code_?:
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (writer != (JsonWriter *)0x0) {
    (*(code *)(writer->klass->vtable).WriteStartObject.method)
              (writer,(writer->klass->vtable).WriteEndObject.methodPtr);
    iVar4 = (*(code *)(this->klass->vtable).get_ChildrenTokens.method)
                      (this,(this->klass->vtable).InsertItem.methodPtr);
    if (iVar4 != 0) {
      piVar5 = (int *)func_?(0,
                                      TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                                      ,iVar4);
      uStack_1 = 0;
      while (piVar5 != (int *)0x0) {
        cVar6 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar5);
        if (cVar6 == '\0') {
          unaff_EDI = (JProperty__Class *)0x0;
          uStack_1 = 0xffffffff;
          if (piVar5 != (int *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,piVar5);
          }
          if (writer != (JsonWriter *)0x0) {
            (*(code *)(writer->klass->vtable).WriteEndObject.method)
                      (writer,(writer->klass->vtable).WriteStartArray.methodPtr);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          break;
        }
        uVar7 = 0;
        uVar8 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar8 != 0) {
          iVar4 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)(iVar4 + (uint)uVar7 * 8) ==
                TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>)
            {
              puVar9 = (undefined4 *)(*piVar5 + (*(int *)(iVar4 + 4 + (uint)uVar7 * 8) + 0x18) * 8);
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
        piVar10 = (int *)(*(code *)*puVar9)(piVar5,puVar9[1]);
        unaff_EDI = TypeInfo__Newtonsoft__Json__Linq__JProperty;
        if (piVar10 == (int *)0x0) break;
        bVar11 = (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).naturalAligment;
        if ((*(byte *)(*piVar10 + 0xb8) < bVar11) ||
           (*(JProperty__Class **)(*(int *)(*piVar10 + 100) + -4 + (uint)bVar11 * 4) !=
            TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        piVar13 = (int *)0x0;
        if (bVar12) {
          piVar13 = piVar10;
        }
        if (piVar13 == (int *)0x0) {
          func_?(piVar10,TypeInfo__Newtonsoft__Json__Linq__JProperty);
          break;
        }
        (**(code **)(*piVar13 + 0x170))(piVar13,writer,converters,*(undefined4 *)(*piVar13 + 0x174))
        ;
      }
    }
  }
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* JToken <PropertyValues>m__0(JProperty) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject__PropertyValues_m__0
                   (JProperty *p,MethodInfo *method)

{
  if (p == (JProperty *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    pJVar2 = (JToken *)(*pcVar1)();
    return pJVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar3 = (*(code *)(p->klass->vtable).get_ChildrenTokens.method)
                    (p,(p->klass->vtable).InsertItem.methodPtr);
  if (iVar3 != 0) {
    iVar3 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar3);
    if (iVar3 < 1) {
      return (JToken *)0x0;
    }
    iVar3 = (*(code *)(p->klass->vtable).get_ChildrenTokens.method)
                      (p,(p->klass->vtable).InsertItem.methodPtr);
    if (iVar3 != 0) {
      pJVar2 = (JToken *)
               func_?(3,
                               TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                               ,iVar3,0);
      return pJVar2;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar1)();
  return pJVar2;
}


/* JObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject__ctor
               (JObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__StringComparer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__StringComparer->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__StringComparer);
  }
  comparer = mscorlib.dll::System::StringComparer::StringComparer_get_Ordinal((MethodInfo *)0x0);
  this_00 = (JObject_JPropertKeyedCollection *)
            func_?(TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Linq::JToken]::KeyedCollection_2_System_String_Newtonsoft_Json_Linq_JToken___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Linq_JToken_ *)this_00,
             (IEqualityComparer_1_System_String_ *)comparer,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
            );
  (this->fields)._properties = this_00;
  return;
}


/* JObject(JObject) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject__ctor_1
               (JObject *this,JObject *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__StringComparer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__StringComparer->_1).cctor_started == 0)) {
    func_?();
  }
  comparer = mscorlib.dll::System::StringComparer::StringComparer_get_Ordinal((MethodInfo *)0x0);
  this_00 = (JObject_JPropertKeyedCollection *)func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Linq::JToken]::KeyedCollection_2_System_String_Newtonsoft_Json_Linq_JToken___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Linq_JToken_ *)this_00,
             (IEqualityComparer_1_System_String_ *)comparer,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
            );
  (this->fields)._properties = this_00;
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = register0x00000010;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(in_stack_2,0.0,(MethodInfo *)this);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (in_stack_3,StringLiteral_c,(MethodInfo *)0x0);
  if (in_stack_3 != (Object *)0x0) {
    piVar4 = (int *)func_?();
    while (piVar4 != (int *)0x0) {
      cVar5 = func_?();
      if (cVar5 == '\0') {
        *piVar4 = 0x48;
        if (piVar4 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      uVar6 = 0;
      uVar7 = *(ushort *)(*piVar4 + 0xb6);
      if (uVar7 != 0) {
        iVar8 = *(int *)(*piVar4 + 0x58);
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)(iVar8 + (uint)uVar6 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar9 = (undefined4 *)(*piVar4 + (*(int *)(iVar8 + 4 + (uint)uVar6 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      puVar9 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar9)();
      (*in_stack_2->klass[3]._0.gc_desc)();
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* JObject(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject__ctor_3
               (JObject *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__StringComparer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__StringComparer->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__StringComparer);
  }
  comparer = mscorlib.dll::System::StringComparer::StringComparer_get_Ordinal((MethodInfo *)0x0);
  this_00 = (JObject_JPropertKeyedCollection *)
            func_?(TypeInfo__Newtonsoft__Json__Linq__JObject__JPropertKeyedCollection);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Linq::JToken]::KeyedCollection_2_System_String_Newtonsoft_Json_Linq_JToken___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Linq_JToken_ *)this_00,
             (IEqualityComparer_1_System_String_ *)comparer,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
            );
  (this->fields)._properties = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (*(code *)(this->klass->vtable).Add.method)(this,content,(this->klass->vtable).Add_1.methodPtr);
  return;
}


/* Void add_PropertyChanged(PropertyChangedEventHandler) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_add_PropertyChanged
               (JObject *this,PropertyChangedEventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppPVar1 = &(this->fields).PropertyChanged;
  a = *ppPVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((PropertyChangedEventHandler__Class *)pDVar2->klass ==
          TypeInfo__System__ComponentModel__PropertyChangedEventHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__ComponentModel__PropertyChangedEventHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pPVar5 = (PropertyChangedEventHandler *)func_?(ppPVar1,pDVar3,a);
    bVar6 = pPVar5 == a;
    a = pPVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* JToken get_Item(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_get_Item
                   (JObject *this,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      this_00 = JObject_Property(in_stack_3,in_stack_2,(MethodInfo *)0x0);
      if (this_00 == (JProperty *)0x0) {
        return (JToken *)0x0;
      }
      pJVar4 = JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
      return pJVar4;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar5 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ToString(key,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar5);
  func_?();
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Accessed_JObject_values_with_inv,(IFormatProvider *)provider,
                      args,(MethodInfo *)0x0);
  this_01 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_01,pSVar5,(MethodInfo *)0x0);
  func_?();
  pcVar6 = (code *)swi(3);
  pJVar4 = (JToken *)(*pcVar6)();
  return pJVar4;
}


/* JToken get_Item(String) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_get_Item_1
                   (JObject *this,String *propertyName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)propertyName,StringLiteral_propertyName,(MethodInfo *)0x0);
  this_00 = JObject_Property(this,propertyName,(MethodInfo *)0x0);
  if (this_00 == (JProperty *)0x0) {
    return (JToken *)0x0;
  }
  pJVar1 = JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
  return pJVar1;
}


/* Void remove_PropertyChanged(PropertyChangedEventHandler) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_remove_PropertyChanged
               (JObject *this,PropertyChangedEventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppPVar1 = &(this->fields).PropertyChanged;
  source = *ppPVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((PropertyChangedEventHandler__Class *)pDVar2->klass ==
          TypeInfo__System__ComponentModel__PropertyChangedEventHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__ComponentModel__PropertyChangedEventHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pPVar5 = (PropertyChangedEventHandler *)func_?(ppPVar1,pDVar3,source);
    bVar6 = pPVar5 == source;
    source = pPVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void set_Item(Object, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_set_Item
               (JObject *this,Object *key,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
        JProperty::JProperty__ctor_3
                  (pJVar2,in_stack_3,(Object *)in_stack_4,(MethodInfo *)0x0);
        (**(code **)(iRam_? + 0x2b0))(0,pJVar2);
        (**(code **)(iRam_? + 0x3a8))
                  (0,in_stack_3,*(undefined4 *)(iRam_? + 0x3ac));
        return;
      }
      JProperty::JProperty_set_Value(pJVar2,in_stack_4,(MethodInfo *)0x0);
      return;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar5 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ToString(key,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar5);
  func_?();
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Set_JObject_values_with_invalid_,(IFormatProvider *)provider,
                      args,(MethodInfo *)0x0);
  this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,pSVar5,(MethodInfo *)0x0);
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_Item(String, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject::JObject_set_Item_1
               (JObject *this,String *propertyName,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JObject_Property(this,propertyName,(MethodInfo *)0x0);
  if (pJVar1 == (JProperty *)0x0) {
    pJVar1 = (JProperty *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
    JProperty::JProperty__ctor_3(pJVar1,propertyName,(Object *)value,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).Add.method)(this,pJVar1,(this->klass->vtable).Add_1.methodPtr);
    (*(code *)(this->klass->vtable).OnPropertyChanged.method)
              (this,propertyName,this->klass[1]._0.image);
    return;
  }
  JProperty::JProperty_set_Value(pJVar1,value,(MethodInfo *)0x0);
  return;
}

