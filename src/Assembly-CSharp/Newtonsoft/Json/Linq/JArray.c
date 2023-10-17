
/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_CloneToken
                   (JArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JArray);
    cRam_? = '\x01';
  }
  this_00 = (JContainer *)func_?(TypeInfo__Newtonsoft__Json__Linq__JArray);
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
      return (JToken *)this_00;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar1)();
  return pJVar2;
}


/* Boolean DeepEquals(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_DeepEquals
               (JArray *this,JToken *node,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JArray);
    cRam_? = '\x01';
  }
  if (node != (JToken *)0x0) {
    if (((TypeInfo__Newtonsoft__Json__Linq__JArray->_1).typeHierarchyDepth <=
         (node->klass->_1).typeHierarchyDepth) &&
       ((JArray__Class *)
        (node->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JArray->_1).typeHierarchyDepth - 1] ==
        TypeInfo__Newtonsoft__Json__Linq__JArray)) {
      bVar1 = JContainer::JContainer_ContentsEqual
                        ((JContainer *)this,(JContainer *)node,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


/* JArray FromObject(Object) */

JArray * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_FromObject
                   (Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonSerializer);
    cRam_? = '\x01';
  }
  this = (JsonSerializer *)func_?(TypeInfo__Newtonsoft__Json__JsonSerializer);
  if (this != (JsonSerializer *)0x0) {
    JsonSerializer::JsonSerializer__ctor(this,(MethodInfo *)0x0);
    pJVar1 = JArray_FromObject_1(o,this,(MethodInfo *)0x0);
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JArray *)(*pcVar2)();
  return pJVar1;
}


/* JArray FromObject(Object, JsonSerializer) */

JArray * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_FromObject_1
                   (Object *o,JsonSerializer *jsonSerializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JArray);
    cRam_? = '\x01';
  }
  pJVar1 = (JArray *)JToken::JToken_FromObjectInternal(o,jsonSerializer,(MethodInfo *)0x0);
  if (pJVar1 == (JArray *)0x0) {
    func_?();
    pJVar2 = extraout_EDX;
  }
  else {
    iVar3 = (*(pJVar1->klass->vtable).get_Type.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Type.method);
    if (iVar3 != 2) goto code_?;
    pJVar2 = TypeInfo__Newtonsoft__Json__Linq__JArray;
    if (((TypeInfo__Newtonsoft__Json__Linq__JArray->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((JArray__Class *)
        (pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JArray->_1).typeHierarchyDepth - 1] ==
        TypeInfo__Newtonsoft__Json__Linq__JArray)) {
      return pJVar1;
    }
  }
  func_?(pJVar1,pJVar2);
code_?:
  uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar4);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar4 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar4);
  func_?(pJVar1);
  jsonSerializer = (JsonSerializer *)func_?(0xd,pJVar1);
  uVar4 = func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType,&jsonSerializer);
  uVar4 = func_?(uVar4);
  func_?(args);
  func_?(args,uVar4);
  func_?(0,uVar4);
  method_00 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?(&StringLiteral_Object_serialized_to__0___JArray);
  pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar5,(IFormatProvider *)provider,args,method_00);
  uVar4 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar4);
  func_?(this);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar5,(MethodInfo *)0x0);
  uStack6 =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Linq__JArray__FromObject_System__Object__Newtonsoft__Json__JsonSerializer_
                      );
  jsonSerializer = (JsonSerializer *)&UNK_?;
  method = (MethodInfo *)this;
  func_?();
  pcVar7 = (code *)swi(3);
  pJVar1 = (JArray *)(*pcVar7)();
  return pJVar1;
}


/* JArray Load(JsonReader) */

JArray * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_Load
                   (JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JArray);
    cRam_? = '\x01';
  }
  pEVar1 = (Exception *)reader;
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
  }
  else {
    iVar2 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    if (iVar2 != 0) {
code_?:
      iVar2 = (*(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.methodPtr)
                        (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_TokenType.method);
      if (iVar2 != 2) goto code_?;
      pJVar3 = (JArray *)func_?(TypeInfo__Newtonsoft__Json__Linq__JArray);
      if (pJVar3 != (JArray *)0x0) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                         );
          func_?(&
                          TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                         );
          cRam_? = '\x01';
        }
        this = (LowLevelList_1_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                              );
        if (this != (LowLevelList_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    (this,
                     MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                    );
          (pJVar3->fields)._values = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this;
          func_?(&(pJVar3->fields)._values,this);
          UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
          TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)pJVar3,(MethodInfo *)0x0);
          pMVar4 = (MethodInfo *)0x0;
          lineInfo = (IJsonLineInfo *)
                     func_?(pEVar1,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
          JToken::JToken_SetLineInfo((JToken *)pJVar3,lineInfo,pMVar4);
          JContainer::JContainer_ReadTokenFrom
                    ((JContainer *)pJVar3,(JsonReader *)pEVar1,(MethodInfo *)0x0);
          return pJVar3;
        }
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
  pSVar7 = (String *)func_?(&StringLiteral_Error_reading_JArray_from_JsonRe);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar7,pMVar4);
  uVar6 = func_?(&
                          MethodInfo__Newtonsoft__Json__Linq__JArray__Load_Newtonsoft__Json__JsonReader_
                         );
  func_?(pEVar1,uVar6);
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
  pSVar7 = (String *)func_?(&StringLiteral_Error_reading_JArray_from_JsonRe);
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar7,(IFormatProvider *)provider,args,pMVar4);
  uVar6 = func_?(&TypeInfo__System__Exception);
  pEVar1 = (Exception *)func_?(uVar6);
  func_?(pEVar1);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar7,(MethodInfo *)0x0);
  reader = (JsonReader *)
           func_?(&
                           MethodInfo__Newtonsoft__Json__Linq__JArray__Load_Newtonsoft__Json__JsonReader_
                          );
  func_?();
  pcVar8 = (code *)swi(3);
  pJVar3 = (JArray *)(*pcVar8)();
  return pJVar3;
}


/* JArray Parse(String) */

JArray * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_Parse
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
      pJVar1 = JArray_Load((JsonReader *)this_00,(MethodInfo *)0x0);
      return pJVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JArray *)(*pcVar2)();
  return pJVar1;
}


/* Void WriteTo(JsonWriter, JsonConverter[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_WriteTo
               (JArray *this,JsonWriter *writer,JsonConverter__Array *converters,MethodInfo *method)

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
  if (writer != (JsonWriter *)0x0) {
    (*(writer->klass->vtable).WriteStartArray.methodPtr)
              (writer,(writer->klass->vtable).WriteStartArray.method);
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
          (*(writer->klass->vtable).WriteEndArray.methodPtr)
                    (writer,(writer->klass->vtable).WriteEndArray.method);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
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
        piVar10 = (int *)(*(code *)*puVar9)(piVar5,puVar9[1]);
        if (piVar10 == (int *)0x0) break;
        (**(code **)(*piVar10 + 0x16c))(piVar10,writer,converters,*(undefined4 *)(*piVar10 + 0x170));
      }
    }
  }
  uVar11 = func_?();
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* JArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray__ctor
               (JArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  this_00 = (LowLevelList_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                           );
  if (this_00 != (LowLevelList_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
              );
    (this->fields)._values = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
    func_?(&(this->fields)._values,this_00);
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JArray(JArray) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray__ctor_1
               (JArray *this,JArray *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  this_00 = (LowLevelList_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                           );
  if (this_00 != (LowLevelList_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
              );
    (this->fields)._values = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
    func_?(&(this->fields)._values,this_00);
    JContainer::JContainer__ctor_1((JContainer *)this,(JContainer *)other,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JArray(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray__ctor_3
               (JArray *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  this_00 = (LowLevelList_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                           );
  if (this_00 != (LowLevelList_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
              );
    (this->fields)._values = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
    func_?(&(this->fields)._values,this_00);
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
    (*(this->klass->vtable).Add_1.methodPtr)(this,content,(this->klass->vtable).Add_1.method);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JToken get_Item(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_get_Item
                   (JArray *this,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_o);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (key,StringLiteral_o,(MethodInfo *)0x0);
  if (key != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((Int32__Class *)key->klass == TypeInfo__System__Int32) {
      pOVar1 = key;
    }
    if (pOVar1 != (Object *)0x0) {
      pIVar2 = TypeInfo__System__Int32;
      if ((key->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        puVar3 = (undefined4 *)func_?(key);
        pJVar4 = (JToken *)
                 (*(this->klass->vtable).GetItem.methodPtr)
                           (this,*puVar3,(this->klass->vtable).GetItem.method);
        return pJVar4;
      }
      goto code_?;
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
  pSVar6 = (String *)func_?(&StringLiteral_Accessed_JArray_values_with_inva);
  key = (Object *)
        Json::Utilities::StringUtils::StringUtils_FormatWith
                  (pSVar6,(IFormatProvider *)provider,args,method_00);
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this_00 = (ArgumentException *)func_?(uVar5);
  func_?(this_00);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,(String *)key,(MethodInfo *)0x0);
  func_?(&MethodInfo__Newtonsoft__Json__Linq__JArray__get_Item_System__Object_);
  func_?();
  pIVar2 = extraout_ECX;
code_?:
  func_?(key,pIVar2);
  pcVar7 = (code *)swi(3);
  pJVar4 = (JToken *)(*pcVar7)();
  return pJVar4;
}


/* Void set_Item(Object, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_set_Item
               (JArray *this,Object *key,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_o);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (key,StringLiteral_o,(MethodInfo *)0x0);
  if (key != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((Int32__Class *)key->klass == TypeInfo__System__Int32) {
      pOVar1 = key;
    }
    if (pOVar1 != (Object *)0x0) {
      pIVar2 = TypeInfo__System__Int32;
      if ((key->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        puVar3 = (undefined4 *)func_?(key);
        (*(this->klass->vtable).SetItem.methodPtr)
                  (this,*puVar3,value,(this->klass->vtable).SetItem.method);
        return;
      }
      goto code_?;
    }
  }
  uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar4);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar4 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar4);
  pSVar5 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ToString(key,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pSVar5);
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?(&StringLiteral_Set_JArray_values_with_invalid_k);
  key = (Object *)
        Json::Utilities::StringUtils::StringUtils_FormatWith
                  (pSVar5,(IFormatProvider *)provider,args,method_00);
  uVar4 = func_?(&TypeInfo__System__ArgumentException);
  this_00 = (ArgumentException *)func_?(uVar4);
  func_?(this_00);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,(String *)key,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JArray__set_Item_System__Object__Newtonsoft__Json__Linq__JToken_
                 );
  func_?();
  pIVar2 = extraout_ECX;
code_?:
  func_?(key,pIVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

