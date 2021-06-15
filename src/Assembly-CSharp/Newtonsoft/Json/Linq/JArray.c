
/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_CloneToken
                   (JArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JContainer *)func_?(TypeInfo__Newtonsoft__Json__Linq__JArray);
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
  return (JToken *)this_00;
}


/* Boolean DeepEquals(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_DeepEquals
               (JArray *this,JToken *node,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (node != (JToken *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JArray->_1).naturalAligment;
    if (((node->klass->_1).naturalAligment < bVar1) ||
       ((JArray__Class *)(node->klass->_1).typeHierarchy[bVar1 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JArray)) {
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


/* JArray FromObject(Object) */

JArray * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_FromObject
                   (Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (JsonSerializer *)func_?(TypeInfo__Newtonsoft__Json__JsonSerializer);
  JsonSerializer::JsonSerializer__ctor(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (JArray *)JToken::JToken_FromObjectInternal(o,this,(MethodInfo *)0x0);
  if (pJVar1 == (JArray *)0x0) {
    func_?();
  }
  else {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_Type.method)(pJVar1);
    if (iVar2 != 2) goto code_?;
    bVar3 = (TypeInfo__Newtonsoft__Json__Linq__JArray->_1).naturalAligment;
    if (((pJVar1->klass->_1).naturalAligment < bVar3) ||
       ((JArray__Class *)(pJVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JArray)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pJVar5 = (JArray *)0x0;
    if (bVar4) {
      pJVar5 = pJVar1;
    }
    if (pJVar5 != (JArray *)0x0) {
      return pJVar5;
    }
  }
  func_?(pJVar1);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(pJVar1,0);
  o = (Object *)func_?(0xd,pJVar1);
  pOVar6 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&o);
  func_?(args,0);
  func_?(args,pOVar6);
  o = pOVar6;
  func_?();
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Object_serialized_to__0___JArray,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  pMStack7 =
       MethodInfo__Newtonsoft__Json__Linq__JArray__FromObject_System__Object__Newtonsoft__Json__JsonSerializer_
  ;
  uStack8 = 0;
  pAStack9 = this_00;
  func_?();
  pcVar10 = (code *)swi(3);
  pJVar1 = (JArray *)(*pcVar10)();
  return pJVar1;
}


/* JArray FromObject(Object, JsonSerializer) */

JArray * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_FromObject_1
                   (Object *o,JsonSerializer *jsonSerializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (JArray *)JToken::JToken_FromObjectInternal(o,jsonSerializer,(MethodInfo *)0x0);
  if (pJVar1 == (JArray *)0x0) {
    func_?(0);
    pJVar2 = extraout_EDX;
  }
  else {
    iVar3 = (*(code *)(pJVar1->klass->vtable).get_Type.method)
                      (pJVar1,(pJVar1->klass->vtable).get_HasValues.methodPtr);
    if (iVar3 != 2) goto code_?;
    bVar4 = (TypeInfo__Newtonsoft__Json__Linq__JArray->_1).naturalAligment;
    if (((pJVar1->klass->_1).naturalAligment < bVar4) ||
       ((JArray__Class *)(pJVar1->klass->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JArray)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pJVar6 = (JArray *)0x0;
    if (bVar5) {
      pJVar6 = pJVar1;
    }
    pJVar2 = TypeInfo__Newtonsoft__Json__Linq__JArray;
    if (pJVar6 != (JArray *)0x0) {
      return pJVar6;
    }
  }
  func_?(pJVar1,pJVar2);
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
  uVar7 = func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&jsonSerializer);
  func_?(args,0);
  func_?(args,uVar7);
  func_?(0,uVar7);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Object_serialized_to__0___JArray,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this = (JsonSerializer *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            ((ArgumentException *)this,message,(MethodInfo *)0x0);
  pMStack8 =
       MethodInfo__Newtonsoft__Json__Linq__JArray__FromObject_System__Object__Newtonsoft__Json__JsonSerializer_
  ;
  method = (MethodInfo *)0x0;
  jsonSerializer = this;
  func_?();
  pcVar9 = (code *)swi(3);
  pJVar1 = (JArray *)(*pcVar9)();
  return pJVar1;
}


/* JArray Load(JsonReader) */

JArray * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_Load
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
  }
  else {
    iVar2 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar2 != 0) {
code_?:
      iVar2 = (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_TokenType.method)
                        (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_Value.methodPtr);
      if (iVar2 != 2) goto code_?;
      pJVar3 = (JArray *)func_?(TypeInfo__Newtonsoft__Json__Linq__JArray);
      JArray__ctor(pJVar3,(MethodInfo *)0x0);
      if (pJVar3 != (JArray *)0x0) {
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
            (pIVar1,StringLiteral_Error_reading_JArray_from_JsonRe,(MethodInfo *)0x0);
  func_?(pIVar1,0,
                  MethodInfo__Newtonsoft__Json__Linq__JArray__Load_Newtonsoft__Json__JsonReader_);
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
                      (StringLiteral_Error_reading_JArray_from_JsonRe,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar1,message,(MethodInfo *)0x0);
  reader = (JsonReader *)
           MethodInfo__Newtonsoft__Json__Linq__JArray__Load_Newtonsoft__Json__JsonReader_;
  func_?(pIVar1);
  pcVar6 = (code *)swi(3);
  pJVar3 = (JArray *)(*pcVar6)();
  return pJVar3;
}


/* JArray Parse(String) */

JArray * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_Parse
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
  pJVar1 = JArray_Load((JsonReader *)this_00,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (writer != (JsonWriter *)0x0) {
    (*(code *)(writer->klass->vtable).WriteStartArray.method)
              (writer,(writer->klass->vtable).WriteEndArray.methodPtr);
    iVar4 = (*(code *)(this->klass->vtable).get_ChildrenTokens.method)
                      (this,(this->klass->vtable).InsertItem.methodPtr);
    if (iVar4 != 0) {
      piVar5 = (int *)func_?(0,
                                      TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                                      ,iVar4);
      uStack_1 = 0;
      while (piVar5 != (int *)0x0) {
        cVar6 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar5);
        unaff_EDI = 
        TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>;
        if (cVar6 == '\0') {
          unaff_EDI = (IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class *)0x0;
          uStack_1 = 0xffffffff;
          if (piVar5 != (int *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,piVar5);
          }
          if (writer != (JsonWriter *)0x0) {
            (*(code *)(writer->klass->vtable).WriteEndArray.method)
                      (writer,(writer->klass->vtable).WriteStartConstructor.methodPtr);
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
        if (piVar10 == (int *)0x0) break;
        (**(code **)(*piVar10 + 0x170))(piVar10,writer,converters,*(undefined4 *)(*piVar10 + 0x174));
      }
    }
  }
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* JArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray__ctor
               (JArray *this,MethodInfo *method)

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
  (this->fields)._values = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  return;
}


/* JArray(JArray) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray__ctor_1
               (JArray *this,JArray *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__)
  ;
  (this->fields)._values = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)0x0,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (in_stack_2,StringLiteral_c,(MethodInfo *)0x0);
  if (in_stack_2 != (Object *)0x0) {
    piVar3 = (int *)func_?();
    while (piVar3 != (int *)0x0) {
      piVar4 = piVar3;
      cVar5 = func_?();
      if (cVar5 == '\0') {
        *piVar4 = 0x48;
        if (piVar3 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      uVar6 = 0;
      uVar7 = *(ushort *)(*piVar3 + 0xb6);
      if (uVar7 != 0) {
        iVar8 = *(int *)(*piVar3 + 0x58);
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)(iVar8 + (uint)uVar6 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar9 = (undefined4 *)(*piVar3 + (*(int *)(iVar8 + 4 + (uint)uVar6 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      puVar9 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar9)();
      (**(code **)(iRam_? + 0x2b0))();
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* JArray(Object[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray__ctor_2
               (JArray *this,Object__Array *content,MethodInfo *method)

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
  (this->fields)._values = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (*(code *)(this->klass->vtable).Add_1.method)(this,content,this->klass[1]._0.image);
  return;
}


/* JArray(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray__ctor_3
               (JArray *this,Object *content,MethodInfo *method)

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
  (this->fields)._values = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (*(code *)(this->klass->vtable).Add_1.method)(this,content,this->klass[1]._0.image);
  return;
}


/* JToken get_Item(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_get_Item
                   (JArray *this,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      if ((((Int32__Class *)key->klass)->_0).element_class ==
          (TypeInfo__System__Int32->_0).element_class) {
        puVar3 = (undefined4 *)func_?(key);
        pJVar4 = (JToken *)
                 (*(code *)(this->klass->vtable).GetItem.method)
                           (this,*puVar3,(this->klass->vtable).SetItem.methodPtr);
        return pJVar4;
      }
      goto code_?;
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
  key = (Object *)
        Json::Utilities::StringUtils::StringUtils_FormatWith
                  (StringLiteral_Accessed_JArray_values_with_inva,(IFormatProvider *)provider,args,
                   (MethodInfo *)0x0);
  this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,(String *)key,(MethodInfo *)0x0);
  func_?();
  pIVar2 = extraout_ECX;
code_?:
  func_?(key,pIVar2);
  pcVar6 = (code *)swi(3);
  pJVar4 = (JToken *)(*pcVar6)();
  return pJVar4;
}


/* Void set_Item(Object, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JArray::JArray_set_Item
               (JArray *this,Object *key,JToken *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      if ((((Int32__Class *)key->klass)->_0).element_class ==
          (TypeInfo__System__Int32->_0).element_class) {
        puVar3 = (undefined4 *)func_?(key);
        (*(code *)(this->klass->vtable).SetItem.method)
                  (this,*puVar3,value,(this->klass->vtable).ClearItems.methodPtr);
        return;
      }
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pSVar4 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ToString(key,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pSVar4);
  func_?();
  key = (Object *)
        Json::Utilities::StringUtils::StringUtils_FormatWith
                  (StringLiteral_Set_JArray_values_with_invalid_k,(IFormatProvider *)provider,args,
                   (MethodInfo *)0x0);
  this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,(String *)key,(MethodInfo *)0x0);
  func_?();
  pIVar2 = extraout_ECX;
code_?:
  func_?(key,pIVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

