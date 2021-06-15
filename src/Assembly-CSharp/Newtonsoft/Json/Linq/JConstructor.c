
/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_CloneToken
                   (JConstructor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JContainer *)func_?(TypeInfo__Newtonsoft__Json__Linq__JConstructor);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__)
  ;
  this_00[1].monitor = (MonitorData *)this_01;
  JContainer::JContainer__ctor_1(this_00,(JContainer *)this,(MethodInfo *)0x0);
  if (this != (JConstructor *)0x0) {
    this_00[1].klass = (JContainer__Class *)(this->fields)._name;
    return (JToken *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar1)();
  return pJVar2;
}


/* Boolean DeepEquals(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_DeepEquals
               (JConstructor *this,JToken *node,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (node != (JToken *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JConstructor->_1).naturalAligment;
    if (((node->klass->_1).naturalAligment < bVar1) ||
       ((JConstructor__Class *)(node->klass->_1).typeHierarchy[bVar1 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JConstructor)) {
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
      b = container[1].klass;
      a = (this->fields)._name;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar3 = mscorlib.dll::System::String::String_op_Equality(a,(String *)b,(MethodInfo *)0x0);
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

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_GetDeepHashCode
                  (JConstructor *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._name;
  if (pSVar1 != (String *)0x0) {
    uVar2 = (*(code *)(pSVar1->klass->vtable).GetHashCode.method)
                      (pSVar1,(pSVar1->klass->vtable).ToString.methodPtr);
    uVar3 = JContainer::JContainer_ContentsHashCode((JContainer *)this,(MethodInfo *)0x0);
    return uVar3 ^ uVar2;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* JConstructor Load(JsonReader) */

JConstructor *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_Load
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
              (pIVar1,StringLiteral_Error_reading_JConstructor_from_,(MethodInfo *)0x0);
    pSVar2 = (String__Class *)
             func_?(pIVar1,0,
                             MethodInfo__Newtonsoft__Json__Linq__JConstructor__Load_Newtonsoft__Json__JsonReader_
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
    if (iVar3 != 3) goto code_?;
    pSVar5 = unaff_EBX;
    unaff_EBX = (String *)
                (*(code *)(((JsonReader *)pIVar1)->klass->vtable).get_Value.method)
                          (pIVar1,(((JsonReader *)pIVar1)->klass->vtable).get_ValueType.methodPtr);
    pJVar6 = (JConstructor *)func_?(TypeInfo__Newtonsoft__Json__Linq__JConstructor);
    pSVar7 = (String *)0x0;
    if (unaff_EBX == (String *)0x0) {
code_?:
      unaff_EBX = pSVar5;
      JConstructor__ctor_4(pJVar6,pSVar7,(MethodInfo *)0x0);
      if (pJVar6 != (JConstructor *)0x0) {
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
                     (StringLiteral_Error_reading_JConstructor_from_,(IFormatProvider *)provider,
                      args,(MethodInfo *)0x0);
  pIVar1 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar1,pSVar7,(MethodInfo *)0x0);
  reader = (JsonReader *)
           MethodInfo__Newtonsoft__Json__Linq__JConstructor__Load_Newtonsoft__Json__JsonReader_;
  func_?(pIVar1);
  pcVar9 = (code *)swi(3);
  pJVar6 = (JConstructor *)(*pcVar9)();
  return pJVar6;
}


/* Void WriteTo(JsonWriter, JsonConverter[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_WriteTo
               (JConstructor *this,JsonWriter *writer,JsonConverter__Array *converters,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffd4;
  puVar5 = &stack0xffffffd4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  puStack_4 = &stack0xffffffd4;
  if (writer != (JsonWriter *)0x0) {
    puStack_4 = &stack0xffffffd4;
    (*(code *)(writer->klass->vtable).WriteStartConstructor.method)
              (writer,(this->fields)._name,(writer->klass->vtable).WriteEndConstructor.methodPtr);
    uStack_6 = (*(code *)(this->klass->vtable).Children.method)
                          (this,(this->klass->vtable).Values.methodPtr);
    piVar7 = (int *)func_?(&uStack_6,
                                    MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__GetEnumerator__
                                   );
    uStack_1 = 0;
    while (piVar7 != (int *)0x0) {
      cVar8 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar7);
      unaff_EDI = 
      TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>;
      if (cVar8 == '\0') {
        unaff_EDI = (IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class *)0x0;
        uStack_1 = 0xffffffff;
        if (piVar7 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar7);
        }
        if (writer != (JsonWriter *)0x0) {
          (*(code *)(writer->klass->vtable).WriteEndConstructor.method)
                    (writer,(writer->klass->vtable).WritePropertyName.methodPtr);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        break;
      }
      uVar9 = 0;
      uVar10 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar10 != 0) {
        iVar11 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)(iVar11 + (uint)uVar9 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar12 = (undefined4 *)(*piVar7 + (*(int *)(iVar11 + 4 + (uint)uVar9 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar10);
      }
      puVar12 = (undefined4 *)
               func_?(piVar7,
                               TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                               ,0);
code_?:
      piVar13 = (int *)(*(code *)*puVar12)(piVar7,puVar12[1]);
      if (piVar13 == (int *)0x0) break;
      (**(code **)(*piVar13 + 0x170))(piVar13,writer,converters,*(undefined4 *)(*piVar13 + 0x174));
    }
  }
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* JConstructor() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor__ctor
               (JConstructor *this,MethodInfo *method)

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


/* JConstructor(JConstructor) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor__ctor_1
               (JConstructor *this,JConstructor *other,MethodInfo *method)

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
  JContainer::JContainer__ctor_1((JContainer *)this,(JContainer *)other,(MethodInfo *)0x0);
  if (other != (JConstructor *)0x0) {
    (this->fields)._name = (other->fields)._name;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JConstructor(String, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor__ctor_3
               (JConstructor *this,String *name,Object *content,MethodInfo *method)

{
  JConstructor__ctor_4(this,name,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).Add.method)(this,content,this->klass[1]._0.image);
  return;
}


/* JConstructor(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor__ctor_4
               (JConstructor *this,String *name,MethodInfo *method)

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
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNullOrEmpty
            (name,StringLiteral_name,(MethodInfo *)0x0);
  (this->fields)._name = name;
  return;
}


/* JToken get_Item(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_get_Item
                   (JConstructor *this,Object *key,MethodInfo *method)

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
                  (StringLiteral_Accessed_JConstructor_values_wit,(IFormatProvider *)provider,args,
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

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_set_Item
               (JConstructor *this,Object *key,JToken *value,MethodInfo *method)

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
                  (StringLiteral_Set_JConstructor_values_with_inv,(IFormatProvider *)provider,args,
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

