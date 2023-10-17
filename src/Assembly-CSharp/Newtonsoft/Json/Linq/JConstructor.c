
/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_CloneToken
                   (JConstructor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JConstructor);
    cRam_? = '\x01';
  }
  this_00 = (JContainer *)func_?(TypeInfo__Newtonsoft__Json__Linq__JConstructor);
  if (this_00 != (JContainer *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                     );
      func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>)
      ;
      cRam_? = '\x01';
    }
    this_01 = (LowLevelList_1_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                             );
    if (this_01 != (LowLevelList_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                );
      this_00[1].monitor = (MonitorData *)this_01;
      func_?(&this_00[1].monitor,this_01);
      JContainer::JContainer__ctor_1(this_00,(JContainer *)this,(MethodInfo *)0x0);
      if (this != (JConstructor *)0x0) {
        pJVar1 = (JContainer__Class *)(this->fields)._name;
        this_00[1].klass = pJVar1;
        func_?(this_00 + 1,pJVar1);
        return (JToken *)this_00;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar3 = (JToken *)(*pcVar2)();
  return pJVar3;
}


/* Boolean DeepEquals(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_DeepEquals
               (JConstructor *this,JToken *node,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JConstructor);
    cRam_? = '\x01';
  }
  if ((((node == (JToken *)0x0) ||
       ((node->klass->_1).typeHierarchyDepth <
        (TypeInfo__Newtonsoft__Json__Linq__JConstructor->_1).typeHierarchyDepth)) ||
      ((JConstructor__Class *)
       (node->klass->_1).typeHierarchy
       [(TypeInfo__Newtonsoft__Json__Linq__JConstructor->_1).typeHierarchyDepth - 1] !=
       TypeInfo__Newtonsoft__Json__Linq__JConstructor)) ||
     (bVar1 = mscorlib.dll::System::String::String_op_Equality
                        ((this->fields)._name,(String *)node[1].fields._parent,(MethodInfo *)0x0),
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

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_GetDeepHashCode
                  (JConstructor *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._name;
  if (pSVar1 != (String *)0x0) {
    uVar2 = (*(pSVar1->klass->vtable).GetHashCode.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable).GetHashCode.method);
    uVar3 = JContainer::JContainer_ContentsHashCode((JContainer *)this,(MethodInfo *)0x0);
    return uVar3 ^ uVar2;
  }
  func_?();
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
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JConstructor);
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
    pSVar4 = (String *)func_?(&StringLiteral_Error_reading_JConstructor_from_);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar4,pMVar3);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Linq__JConstructor__Load_Newtonsoft__Json__JsonReader_
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
    if (iVar6 != 3) goto code_?;
    unaff_EBX = (String *)
                (*(((JsonReader *)pEVar1)->klass->vtable).get_Value.methodPtr)
                          (pEVar1,(((JsonReader *)pEVar1)->klass->vtable).get_Value.method);
    pJVar8 = (JConstructor *)func_?(TypeInfo__Newtonsoft__Json__Linq__JConstructor);
    if (pJVar8 == (JConstructor *)0x0) goto code_?;
    pSVar4 = (String *)0x0;
    if (unaff_EBX == (String *)0x0) {
code_?:
      JConstructor__ctor_4(pJVar8,pSVar4,(MethodInfo *)0x0);
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
  pSVar4 = (String *)func_?(&StringLiteral_Error_reading_JConstructor_from_);
  pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar4,(IFormatProvider *)provider,args,pMVar3);
  uVar2 = func_?(&TypeInfo__System__Exception);
  pEVar1 = (Exception *)func_?(uVar2);
  func_?(pEVar1);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar4,(MethodInfo *)0x0);
  reader = (JsonReader *)
           func_?(&
                           MethodInfo__Newtonsoft__Json__Linq__JConstructor__Load_Newtonsoft__Json__JsonReader_
                          );
  func_?();
  pcVar9 = (code *)swi(3);
  pJVar8 = (JConstructor *)(*pcVar9)();
  return pJVar8;
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
  puStack_4 = &stack0xffffffc4;
  puVar5 = &stack0xffffffc4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (writer != (JsonWriter *)0x0) {
    (*(writer->klass->vtable).WriteStartConstructor.methodPtr)
              (writer,(this->fields)._name,(writer->klass->vtable).WriteStartConstructor.method);
    JStack_6._enumerable =
         (IEnumerable_1_System_Object_ *)
         (*(this->klass->vtable).Children.methodPtr)(this,(this->klass->vtable).Children.method);
    pIStack_7 = JEnumerable`1[System::Object]::JEnumerable_1_System_Object__GetEnumerator
                           (&JStack_6,
                            MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__GetEnumerator__
                           );
    uStack_1 = 1;
    while( true ) {
      if (pIStack_7 == (IEnumerator_1_System_Object_ *)0x0) break;
      cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_7);
      pIVar9 = pIStack_7;
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        if (pIStack_7 != (IEnumerator_1_System_Object_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pIStack_7);
        }
        uStack_1 = 0xffffffff;
        (*(writer->klass->vtable).WriteEndConstructor.methodPtr)
                  (writer,(writer->klass->vtable).WriteEndConstructor.method);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pIStack_7 == (IEnumerator_1_System_Object_ *)0x0) break;
      uVar10 = 0;
      uVar11 = (pIStack_7->klass->_1).interface_offsets_count;
      if (uVar11 != 0) {
        do {
          if (pIStack_7->klass->interfaceOffsets[uVar10].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            pIVar12 = &pIStack_7->klass->vtable + pIStack_7->klass->interfaceOffsets[uVar10].offset;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      pIVar12 = (IEnumerator_1_System_Object___VTable *)
               func_?(pIStack_7,
                               TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                               ,0);
code_?:
      piVar13 = (int *)(*(pIVar12->get_Current).methodPtr)(pIVar9,(pIVar12->get_Current).method);
      if (piVar13 == (int *)0x0) break;
      (**(code **)(*piVar13 + 0x16c))(piVar13,writer,converters,*(undefined4 *)(*piVar13 + 0x170));
    }
  }
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* JConstructor() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor__ctor
               (JConstructor *this,MethodInfo *method)

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
    method_00 = (MethodInfo *)&(this->fields)._values;
    (this->fields)._values = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
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


/* JConstructor(JConstructor) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor__ctor_1
               (JConstructor *this,JConstructor *other,MethodInfo *method)

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
    if (other != (JConstructor *)0x0) {
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


/* JConstructor(String, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor__ctor_3
               (JConstructor *this,String *name,Object *content,MethodInfo *method)

{
  JConstructor__ctor_4(this,name,(MethodInfo *)0x0);
  (*(this->klass->vtable).Add.methodPtr)(this,content,(this->klass->vtable).Add.method);
  return;
}


/* JConstructor(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor__ctor_4
               (JConstructor *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    func_?(&StringLiteral_name);
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
    method_00 = (MethodInfo *)&(this->fields)._values;
    (this->fields)._values = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNullOrEmpty
              (name,StringLiteral_name,(MethodInfo *)0x0);
    (this->fields)._name = name;
    func_?(&(this->fields)._name,name);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JToken get_Item(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_get_Item
                   (JConstructor *this,Object *key,MethodInfo *method)

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
  pSVar6 = (String *)func_?(&StringLiteral_Accessed_JConstructor_values_wit);
  key = (Object *)
        Json::Utilities::StringUtils::StringUtils_FormatWith
                  (pSVar6,(IFormatProvider *)provider,args,method_00);
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this_00 = (ArgumentException *)func_?(uVar5);
  func_?(this_00);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,(String *)key,(MethodInfo *)0x0);
  func_?(&MethodInfo__Newtonsoft__Json__Linq__JConstructor__get_Item_System__Object_);
  func_?();
  pIVar2 = extraout_ECX;
code_?:
  func_?(key,pIVar2);
  pcVar7 = (code *)swi(3);
  pJVar4 = (JToken *)(*pcVar7)();
  return pJVar4;
}


/* Void set_Item(Object, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JConstructor::JConstructor_set_Item
               (JConstructor *this,Object *key,JToken *value,MethodInfo *method)

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
  pSVar5 = (String *)func_?(&StringLiteral_Set_JConstructor_values_with_inv);
  key = (Object *)
        Json::Utilities::StringUtils::StringUtils_FormatWith
                  (pSVar5,(IFormatProvider *)provider,args,method_00);
  uVar4 = func_?(&TypeInfo__System__ArgumentException);
  this_00 = (ArgumentException *)func_?(uVar4);
  func_?(this_00);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,(String *)key,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JConstructor__set_Item_System__Object__Newtonsoft__Json__Linq__JToken_
                 );
  func_?();
  pIVar2 = extraout_ECX;
code_?:
  func_?(key,pIVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

