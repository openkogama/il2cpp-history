
/* JsonSchema BuildSchema() */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_BuildSchema
          (JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchema);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__ref);
    cRam_? = '\x01';
  }
  this_00 = this;
  pJVar1 = (this->fields)._reader;
  if (pJVar1 == (JsonReader *)0x0) goto code_?;
  iVar2 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                    (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
  if (iVar2 == 1) {
    pJVar1 = (this_00->fields)._reader;
    if (pJVar1 == (JsonReader *)0x0) {
code_?:
      func_?();
    }
    else {
      (*(pJVar1->klass->vtable).__unknown.methodPtr)
                (pJVar1,(pJVar1->klass->vtable).__unknown.method);
      pJVar1 = (this_00->fields)._reader;
      if (pJVar1 == (JsonReader *)0x0) goto code_?;
      iVar2 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
      if (iVar2 == 0xd) {
        pJVar3 = (JsonSchema *)func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema);
        if (pJVar3 != (JsonSchema *)0x0) {
          JsonSchema::JsonSchema__ctor(pJVar3,(MethodInfo *)0x0);
          JsonSchemaBuilder_Push(this_00,pJVar3,(MethodInfo *)0x0);
          pJVar3 = JsonSchemaBuilder_Pop(this_00,(MethodInfo *)0x0);
          return pJVar3;
        }
        goto code_?;
      }
      pJVar1 = (this_00->fields)._reader;
      if (pJVar1 == (JsonReader *)0x0) goto code_?;
      value = (Object *)
              (*(pJVar1->klass->vtable).get_Value.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Value.method);
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      unaff_EBX = mscorlib.dll::System::Convert::Convert_ToString_1
                            (value,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
      pJVar1 = (this_00->fields)._reader;
      if (pJVar1 == (JsonReader *)0x0) goto code_?;
      (*(pJVar1->klass->vtable).__unknown.methodPtr)
                (pJVar1,(pJVar1->klass->vtable).__unknown.method);
      bVar5 = mscorlib.dll::System::String::String_op_Equality
                        (unaff_EBX,StringLiteral__ref,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        pJVar3 = (JsonSchema *)func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema);
        if (pJVar3 != (JsonSchema *)0x0) {
          JsonSchema::JsonSchema__ctor(pJVar3,(MethodInfo *)0x0);
          JsonSchemaBuilder_Push(this_00,pJVar3,(MethodInfo *)0x0);
          JsonSchemaBuilder_ProcessSchemaProperty(this_00,unaff_EBX,(MethodInfo *)0x0);
          pJVar1 = (this_00->fields)._reader;
          while (pJVar1 != (JsonReader *)0x0) {
            cVar6 = (*(pJVar1->klass->vtable).__unknown.methodPtr)
                              (pJVar1,(pJVar1->klass->vtable).__unknown.method);
            if (cVar6 == '\0') {
code_?:
              pJVar3 = JsonSchemaBuilder_Pop(this_00,(MethodInfo *)0x0);
              return pJVar3;
            }
            pJVar1 = (this_00->fields)._reader;
            if (pJVar1 == (JsonReader *)0x0) break;
            iVar2 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                              (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
            if (iVar2 == 0xd) goto code_?;
            pJVar1 = (this_00->fields)._reader;
            if (pJVar1 == (JsonReader *)0x0) break;
            unaff_EBX = (String *)
                        (*(pJVar1->klass->vtable).get_Value.methodPtr)
                                  (pJVar1,(pJVar1->klass->vtable).get_Value.method);
            if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?(TypeInfo__System__Globalization__CultureInfo);
            }
            pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Convert);
            }
            pSVar7 = mscorlib.dll::System::Convert::Convert_ToString_1
                               ((Object *)unaff_EBX,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
            pJVar1 = (this_00->fields)._reader;
            if (pJVar1 == (JsonReader *)0x0) break;
            (*(pJVar1->klass->vtable).__unknown.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).__unknown.method);
            JsonSchemaBuilder_ProcessSchemaProperty(this_00,pSVar7,(MethodInfo *)0x0);
            pJVar1 = (this_00->fields)._reader;
          }
        }
        goto code_?;
      }
      pJVar1 = (this_00->fields)._reader;
      if (pJVar1 == (JsonReader *)0x0) goto code_?;
      pSVar7 = (String *)
               (*(pJVar1->klass->vtable).get_Value.methodPtr)
                         (pJVar1,(pJVar1->klass->vtable).get_Value.method);
      unaff_EBX = (String *)0x0;
      if (pSVar7 != (String *)0x0) {
        if (pSVar7->klass == TypeInfo__System__String) {
          unaff_EBX = pSVar7;
        }
        pSVar8 = TypeInfo__System__String;
        if (unaff_EBX == (String *)0x0) goto code_?;
      }
      do {
        pJVar1 = (this_00->fields)._reader;
        if (pJVar1 == (JsonReader *)0x0) goto code_?;
        cVar6 = (*(pJVar1->klass->vtable).__unknown.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).__unknown.method);
        if (cVar6 == '\0') {
code_?:
          pJVar9 = (this_00->fields)._resolver;
          if (pJVar9 == (JsonSchemaResolver *)0x0) goto code_?;
          pJVar3 = (JsonSchema *)
                   (*(pJVar9->klass->vtable).GetSchema.methodPtr)
                             (pJVar9,unaff_EBX,(pJVar9->klass->vtable).GetSchema.method);
          if (pJVar3 != (JsonSchema *)0x0) {
            return pJVar3;
          }
          uVar10 = func_?(&TypeInfo__System__Globalization__CultureInfo);
          func_?(uVar10);
          pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          uVar10 = func_?(&TypeInfo__System__Object,1);
          args = (Object__Array *)func_?(uVar10);
          func_?(args);
          func_?(args,unaff_EBX);
          func_?(0,unaff_EBX);
          ppSVar11 = &StringLiteral_Could_not_resolve_schema_referen;
          goto code_?;
        }
        pJVar1 = (this_00->fields)._reader;
        if (pJVar1 == (JsonReader *)0x0) goto code_?;
        iVar2 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
        if (iVar2 == 0xd) goto code_?;
        pJVar1 = (this_00->fields)._reader;
        if (pJVar1 == (JsonReader *)0x0) goto code_?;
        iVar2 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
      } while (iVar2 != 1);
    }
    uVar10 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar10);
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    uVar10 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar10);
    func_?(args);
    func_?(args,unaff_EBX);
    func_?(0,unaff_EBX);
    ppSVar11 = &StringLiteral_Found_StartObject_within_the_sch;
  }
  else {
    uVar10 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar10);
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    uVar10 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar10);
    pJVar1 = (this_00->fields)._reader;
    func_?(pJVar1);
    this = (JsonSchemaBuilder *)func_?(7,pJVar1);
    uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
    uVar10 = func_?(uVar10);
    func_?(args);
    func_?(args,uVar10);
    func_?(0,uVar10);
    ppSVar11 = &StringLiteral_Expected_StartObject_while_parsi;
  }
code_?:
  method_00 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(ppSVar11);
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar7,(IFormatProvider *)pCVar4,args,method_00);
  uVar10 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar10);
  func_?(this_01);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar7,(MethodInfo *)0x0);
  this = (JsonSchemaBuilder *)
         func_?(&MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__BuildSchema__);
  pSVar7 = (String *)func_?();
  pSVar8 = extraout_ECX;
code_?:
  func_?(pSVar7,pSVar8);
  pcVar12 = (code *)swi(3);
  pJVar3 = (JsonSchema *)(*pcVar12)();
  return pJVar3;
}


/* JsonSchemaType MapType(String) */

JsonSchemaType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_MapType
          (String *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  if ((TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants);
  }
  pIVar2 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->static_fields->
           JsonSchemaTypeMapping;
  if (pIVar2 == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0) {
    func_?();
    type = unaff_EBX;
  }
  else {
    uVar3 = 0;
    uVar4 = (pIVar2->klass->_1).interface_offsets_count;
    if (uVar4 != 0) {
      do {
        if (pIVar2->klass->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>
           ) {
          pVVar5 = &(pIVar2->klass->vtable).TryGetValue +
                   pIVar2->klass->interfaceOffsets[uVar3].offset;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    pVVar5 = (VirtualInvokeData *)
             func_?(pIVar2,
                             TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>
                             ,7);
code_?:
    cVar6 = (*pVVar5->methodPtr)(pIVar2,type,&puStack_1,pVVar5->method);
    if (cVar6 != '\0') {
      return (JsonSchemaType__Enum)puStack_1;
    }
  }
  uVar7 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar7);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar7 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar7);
  func_?(args);
  func_?(args,type);
  func_?(0,type);
  method_00 = (MethodInfo *)0x0;
  pSVar8 = (String *)func_?(&StringLiteral_Invalid_JSON_schema_type___0_);
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar8,(IFormatProvider *)provider,args,method_00);
  uVar7 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar7);
  func_?(this);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar8,(MethodInfo *)0x0);
  func_?(&MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__MapType_System__String_)
  ;
  func_?();
  pcVar9 = (code *)swi(3);
  JVar10 = (*pcVar9)();
  return JVar10;
}


/* String MapType(JsonSchemaType) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
         JsonSchemaBuilder_MapType_1(JsonSchemaType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__System__Linq__Enumerable__Single<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>,_bool>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>,_bool>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__get_Key__
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder____c__DisplayClass23_0___MapType_b__0_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder____c__DisplayClass23_0);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder____c__DisplayClass23_0
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)type;
    if ((TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->_1).cctor_finished_or_no_cctor ==
        0) {
      func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants);
    }
    source = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->static_fields->
             JsonSchemaTypeMapping;
    this = (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
           func_?(
                          TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>,_bool>
                          );
    if (this != (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
      mscorlib.dll::System::Predicate`1[TabMenuButtonAccessory+AccessoryTabDef]::
      Predicate_1_TabMenuButtonAccessory_AccessoryTabDef___ctor
                (this,value,
                 MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder____c__DisplayClass23_0___MapType_b__0_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_
                 ,(MethodInfo *)0x0);
      KVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Single
                        ((IEnumerable_1_KeyValuePair_2_System_Object_System_Int32Enum_ *)source,
                         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Int32Enum_Boolean_
                          *)this,
                         System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__System__Linq__Enumerable__Single<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>,_bool>_
                        );
      return (String *)KVar1.key;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* JsonSchema Parse(JsonReader) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_Parse
          (JsonSchemaBuilder *this,JsonReader *reader,MethodInfo *method)

{
  (this->fields)._reader = reader;
  func_?(&this->fields,reader);
  if (reader != (JsonReader *)0x0) {
    iVar1 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    if (iVar1 == 0) {
      pJVar2 = (this->fields)._reader;
      if (pJVar2 == (JsonReader *)0x0) goto code_?;
      (*(pJVar2->klass->vtable).__unknown.methodPtr)
                (pJVar2,(pJVar2->klass->vtable).__unknown.method);
    }
    pJVar3 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
    return pJVar3;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar3 = (JsonSchema *)(*pcVar4)();
  return pJVar3;
}


/* JsonSchema Pop() */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_Pop
          (JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__Schema__JsonSchema_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._stack;
  pJVar2 = (this->fields)._currentSchema;
  if (pIVar1 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
    iVar3 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                            ,pIVar1);
    func_?(4,
                    TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>
                    ,pIVar1,iVar3 + -1);
    pJVar4 = (JsonSchema *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_LastOrDefault
                       ((IEnumerable_1_System_Object_ *)(this->fields)._stack,
                        Newtonsoft__Json__Schema__JsonSchema_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                       );
    (this->fields)._currentSchema = pJVar4;
    func_?(&(this->fields)._currentSchema,pJVar4);
    return pJVar2;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pJVar2 = (JsonSchema *)(*pcVar5)();
  return pJVar2;
}


/* Void ProcessAdditionalProperties() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessAdditionalProperties(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    iVar2 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
    pJVar3 = (this->fields)._currentSchema;
    if (iVar2 == 10) {
      pJVar1 = (this->fields)._reader;
      if (pJVar1 != (JsonReader *)0x0) {
        piVar4 = (int *)(*(pJVar1->klass->vtable).get_Value.methodPtr)
                                  (pJVar1,(pJVar1->klass->vtable).get_Value.method);
        uVar5 = CONCAT44(TypeInfo__System__Boolean,piVar4);
        if ((pJVar3 != (JsonSchema *)0x0) && (piVar4 != (int *)0x0)) {
          if (*(Il2CppClass **)(*piVar4 + 0x20) == (TypeInfo__System__Boolean->_0).element_class) {
            pbVar6 = (bool *)func_?(piVar4);
            (pJVar3->fields)._AllowAdditionalProperties_k__BackingField = *pbVar6;
            return;
          }
          goto code_?;
        }
      }
    }
    else {
      pJVar7 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
      if (pJVar3 != (JsonSchema *)0x0) {
        (pJVar3->fields)._AdditionalProperties_k__BackingField = pJVar7;
        func_?(&(pJVar3->fields)._AdditionalProperties_k__BackingField,pJVar7);
        return;
      }
    }
  }
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ProcessDefault() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessDefault(JsonSchemaBuilder *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._currentSchema;
  pJVar2 = Linq::JToken::JToken_ReadFrom((this->fields)._reader,(MethodInfo *)0x0);
  if (pJVar1 != (JsonSchema *)0x0) {
    (pJVar1->fields)._Default_k__BackingField = pJVar2;
    func_?(&(pJVar1->fields)._Default_k__BackingField,pJVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ProcessEnum() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_ProcessEnum
               (JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    iVar2 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
    if (iVar2 != 2) goto code_?;
    pJVar3 = (this->fields)._currentSchema;
    this_00 = (LowLevelList_1_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                             );
    if ((this_00 != (LowLevelList_1_System_Object_ *)0x0) &&
       (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                  ), pJVar3 != (JsonSchema *)0x0)) {
      (pJVar3->fields)._Enum_k__BackingField = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
      func_?(&(pJVar3->fields)._Enum_k__BackingField,this_00);
      pJVar1 = (this->fields)._reader;
      if (pJVar1 != (JsonReader *)0x0) {
        while( true ) {
          cVar4 = (*(pJVar1->klass->vtable).__unknown.methodPtr)
                            (pJVar1,(pJVar1->klass->vtable).__unknown.method);
          if (cVar4 == '\0') {
            return;
          }
          pJVar1 = (this->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) break;
          iVar2 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                            (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
          if (iVar2 == 0xe) {
            return;
          }
          pJStack_5 = Linq::JToken::JToken_ReadFrom((this->fields)._reader,(MethodInfo *)0x0);
          pJVar3 = (this->fields)._currentSchema;
          if ((pJVar3 == (JsonSchema *)0x0) ||
             (pIVar6 = (pJVar3->fields)._Enum_k__BackingField, pEStack_7 = (Exception *)pIVar6,
             pIVar6 == (IList_1_Newtonsoft_Json_Linq_JToken_ *)0x0)) break;
          pIStack_8 = pIVar6->klass;
          uVar9 = 0;
          uStack_10 = 0;
          uVar11 = (pIStack_8->_1).interface_offsets_count;
          if (uVar11 != 0) {
            do {
              if (pIStack_8->interfaceOffsets[uVar9].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                 ) {
                ppIVar12 = &(&(pIVar6->klass->vtable).IndexOf)
                           [pIVar6->klass->interfaceOffsets[uVar9].offset].methodPtr;
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar11);
          }
          ppIVar12 = (Il2CppMethodPointer *)
                    func_?(pIVar6,
                                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                                    ,2);
code_?:
          (**ppIVar12)(pIVar6,pJStack_5,(MethodInfo *)ppIVar12[1]);
          pJVar1 = (this->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) break;
        }
      }
    }
  }
  func_?();
code_?:
  uVar13 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar13);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar13 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar13);
  pJVar1 = (this->fields)._reader;
  func_?(pJVar1);
  pJStack_5 = (JToken *)func_?(7,pJVar1);
  uVar13 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&pJStack_5);
  uVar13 = func_?(uVar13);
  func_?(args);
  func_?(args,uVar13);
  func_?(0,uVar13);
  method_00 = (MethodInfo *)0x0;
  pSVar14 = (String *)func_?(&StringLiteral_Expected_StartArray_token_while_);
  pSVar14 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar14,(IFormatProvider *)provider,args,method_00);
  uVar13 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar13);
  func_?(this_01);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar14,(MethodInfo *)0x0);
  pIStack_8 = (IList_1_Newtonsoft_Json_Linq_JToken___Class *)
              func_?(&
                              MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessEnum__
                             );
  pEStack_7 = this_01;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ProcessExtends() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessExtends(JsonSchemaBuilder *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._currentSchema;
  pJVar2 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
  if (pJVar1 != (JsonSchema *)0x0) {
    (pJVar1->fields)._Extends_k__BackingField = pJVar2;
    func_?(&(pJVar1->fields)._Extends_k__BackingField,pJVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ProcessIdentity() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessIdentity(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__Generic__ICollection<System::String>);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  pJVar2 = (this->fields)._currentSchema;
  this_00 = (LowLevelList_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  if ((this_00 != (LowLevelList_1_System_Object_ *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                (this_00,MethodInfo__System__Collections__Generic__List<System::String>__List__),
     pJVar2 != (JsonSchema *)0x0)) {
    (pJVar2->fields)._Identity_k__BackingField = (IList_1_System_String_ *)this_00;
    func_?(&(pJVar2->fields)._Identity_k__BackingField,this_00);
    pJVar3 = (pJVar1->fields)._reader;
    if (pJVar3 != (JsonReader *)0x0) {
      iVar4 = (*(pJVar3->klass->vtable).get_TokenType.methodPtr)
                        (pJVar3,(pJVar3->klass->vtable).get_TokenType.method);
      if (iVar4 == 2) {
        pJVar3 = (pJVar1->fields)._reader;
        if (pJVar3 != (JsonReader *)0x0) {
          while( true ) {
            cVar5 = (*(pJVar3->klass->vtable).__unknown.methodPtr)
                              (pJVar3,(pJVar3->klass->vtable).__unknown.method);
            if (cVar5 == '\0') {
              return;
            }
            pJVar3 = (pJVar1->fields)._reader;
            if (pJVar3 == (JsonReader *)0x0) break;
            iVar4 = (*(pJVar3->klass->vtable).get_TokenType.methodPtr)
                              (pJVar3,(pJVar3->klass->vtable).get_TokenType.method);
            if (iVar4 == 0xe) {
              return;
            }
            pJVar3 = (pJVar1->fields)._reader;
            if (pJVar3 == (JsonReader *)0x0) break;
            iVar4 = (*(pJVar3->klass->vtable).get_TokenType.methodPtr)
                              (pJVar3,(pJVar3->klass->vtable).get_TokenType.method);
            if (iVar4 != 9) goto code_?;
            pJVar2 = (pJVar1->fields)._currentSchema;
            if (pJVar2 == (JsonSchema *)0x0) break;
            pIVar6 = (pJVar2->fields)._Identity_k__BackingField;
            pJVar3 = (pJVar1->fields)._reader;
            if (((pJVar3 == (JsonReader *)0x0) || (iVar4 = func_?(8,pJVar3), iVar4 == 0))
               || (uVar7 = func_?(3,iVar4), pIVar6 == (IList_1_System_String_ *)0x0))
            break;
            func_?(2,TypeInfo__System__Collections__Generic__ICollection<System::String>,
                            pIVar6,uVar7);
            pJVar3 = (pJVar1->fields)._reader;
            if (pJVar3 == (JsonReader *)0x0) break;
          }
        }
      }
      else {
        if (iVar4 != 9) {
          uVar7 = func_?(&TypeInfo__System__Globalization__CultureInfo);
          func_?(uVar7);
          provider = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          uVar7 = func_?(&TypeInfo__System__Object,1);
          args = (Object__Array *)func_?(uVar7);
          pJVar3 = (pJVar1->fields)._reader;
          func_?(pJVar3);
          this = (JsonSchemaBuilder *)func_?(7,pJVar3);
          uVar7 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
          uVar7 = func_?(uVar7);
          func_?(args);
          func_?(args,uVar7);
          func_?(0,uVar7);
          ppSVar8 = &StringLiteral_Expected_array_or_JSON_property_;
          goto code_?;
        }
        pJVar2 = (pJVar1->fields)._currentSchema;
        if (pJVar2 != (JsonSchema *)0x0) {
          pJVar3 = (pJVar1->fields)._reader;
          pIVar6 = (pJVar2->fields)._Identity_k__BackingField;
          if (((pJVar3 != (JsonReader *)0x0) &&
              (piVar9 = (int *)(*(pJVar3->klass->vtable).get_Value.methodPtr)
                                         (pJVar3,(pJVar3->klass->vtable).get_Value.method),
              piVar9 != (int *)0x0)) &&
             (uVar7 = (**(code **)(*piVar9 + 0xd4))(piVar9,*(undefined4 *)(*piVar9 + 0xd8)),
             pIVar6 != (IList_1_System_String_ *)0x0)) {
            func_?(2,TypeInfo__System__Collections__Generic__ICollection<System::String>,
                            pIVar6,uVar7);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  uVar7 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar7);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar7 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar7);
  pJVar3 = (pJVar1->fields)._reader;
  func_?(pJVar3);
  this = (JsonSchemaBuilder *)func_?(7,pJVar3);
  uVar7 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
  uVar7 = func_?(uVar7);
  func_?(args);
  func_?(args,uVar7);
  func_?(0,uVar7);
  ppSVar8 = &StringLiteral_Exception_JSON_property_name_str;
code_?:
  method_00 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(ppSVar8);
  pSVar10 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar10,(IFormatProvider *)provider,args,method_00);
  uVar7 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar7);
  func_?(this_01);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar10,(MethodInfo *)0x0);
  uStack11 =
       func_?(&MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessIdentity__);
  this = (JsonSchemaBuilder *)&UNK_?;
  method = (MethodInfo *)this_01;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ProcessItems() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessItems(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                   );
    cRam_? = '\x01';
  }
  pJVar1 = this;
  pJVar2 = (this->fields)._currentSchema;
  this_00 = (LowLevelList_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                           );
  if ((this_00 != (LowLevelList_1_System_Object_ *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
                ), pJVar2 != (JsonSchema *)0x0)) {
    (pJVar2->fields)._Items_k__BackingField = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)this_00;
    func_?(&(pJVar2->fields)._Items_k__BackingField,this_00);
    pJVar3 = (pJVar1->fields)._reader;
    if (pJVar3 != (JsonReader *)0x0) {
      iVar4 = (*(pJVar3->klass->vtable).get_TokenType.methodPtr)
                        (pJVar3,(pJVar3->klass->vtable).get_TokenType.method);
      if (iVar4 == 1) {
        pJVar2 = (pJVar1->fields)._currentSchema;
        if (pJVar2 != (JsonSchema *)0x0) {
          pIVar5 = (pJVar2->fields)._Items_k__BackingField;
          pJVar2 = JsonSchemaBuilder_BuildSchema(pJVar1,(MethodInfo *)0x0);
          if (pIVar5 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
            func_?(2,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                            ,pIVar5,pJVar2);
            return;
          }
        }
      }
      else if (iVar4 == 2) {
        pJVar3 = (pJVar1->fields)._reader;
        while (pJVar3 != (JsonReader *)0x0) {
          cVar6 = (*(pJVar3->klass->vtable).__unknown.methodPtr)
                            (pJVar3,(pJVar3->klass->vtable).__unknown.method);
          if (cVar6 == '\0') {
            return;
          }
          pJVar3 = (pJVar1->fields)._reader;
          if (pJVar3 == (JsonReader *)0x0) break;
          iVar4 = (*(pJVar3->klass->vtable).get_TokenType.methodPtr)
                            (pJVar3,(pJVar3->klass->vtable).get_TokenType.method);
          if (iVar4 == 0xe) {
            return;
          }
          pJVar2 = (pJVar1->fields)._currentSchema;
          if (pJVar2 == (JsonSchema *)0x0) break;
          pIVar5 = (pJVar2->fields)._Items_k__BackingField;
          pIVar7 = pIVar5;
          pJVar2 = JsonSchemaBuilder_BuildSchema(pJVar1,(MethodInfo *)0x0);
          if (pIVar5 == (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) break;
          uVar8 = 0;
          uVar9 = (pIVar5->klass->_1).interface_offsets_count;
          pIVar10 = pIVar5;
          if (uVar9 != 0) {
            do {
              pJVar1 = this;
              if (pIVar5->klass->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                 ) {
                ppIVar11 = &(&(pIVar7->klass->vtable).IndexOf)
                           [pIVar7->klass->interfaceOffsets[uVar8].offset].methodPtr;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
              pIVar10 = pIVar7;
            } while (uVar8 < uVar9);
          }
          pIVar7 = pIVar10;
          ppIVar11 = (Il2CppMethodPointer *)
                    func_?(pIVar7,
                                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                                    ,2);
code_?:
          (**ppIVar11)(pIVar7,pJVar2,(MethodInfo *)ppIVar11[1]);
          pJVar3 = (pJVar1->fields)._reader;
        }
      }
      else {
        uVar12 = func_?(&TypeInfo__System__Globalization__CultureInfo);
        func_?(uVar12);
        provider = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        uVar12 = func_?(&TypeInfo__System__Object,1);
        args = (Object__Array *)func_?(uVar12);
        pJVar3 = (pJVar1->fields)._reader;
        func_?(pJVar3);
        this = (JsonSchemaBuilder *)func_?(7,pJVar3);
        uVar12 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
        uVar12 = func_?(uVar12);
        func_?(args);
        func_?(args,uVar12);
        func_?(0,uVar12);
        method_00 = (MethodInfo *)0x0;
        pSVar13 = (String *)func_?(&StringLiteral_Expected_array_or_JSON_schema_ob);
        pSVar13 = Json::Utilities::StringUtils::StringUtils_FormatWith
                            (pSVar13,(IFormatProvider *)provider,args,method_00);
        uVar12 = func_?(&TypeInfo__System__Exception);
        this_01 = (Exception *)func_?(uVar12);
        func_?(this_01);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar13,(MethodInfo *)0x0);
        uVar12 = func_?(&
                                 MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessItems__
                                );
        func_?(this_01,uVar12);
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ProcessOptions() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessOptions(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>__Dictionary_System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenEqualityComparer);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_value);
    func_?(&StringLiteral_label);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  a = (this->fields)._currentSchema;
  this = (JsonSchemaBuilder *)
         func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenEqualityComparer);
  if (this != (JsonSchemaBuilder *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                              );
    if ((this_00 !=
         (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
       && (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
           ::Regex+CachedCodeEntryKey,System::Object]::
           Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object___ctor_2
                     (this_00,(IEqualityComparer_1_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_
                               *)this,
                      MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>__Dictionary_System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                     ), a != (JsonSchema *)0x0)) {
      (a->fields)._Options_k__BackingField =
           (IDictionary_2_Newtonsoft_Json_Linq_JToken_System_String_ *)this_00;
      func_?(&(a->fields)._Options_k__BackingField,this_00);
      pJVar2 = (pJVar1->fields)._reader;
      if (pJVar2 != (JsonReader *)0x0) {
        iVar3 = (*(pJVar2->klass->vtable).get_TokenType.methodPtr)
                          (pJVar2,(pJVar2->klass->vtable).get_TokenType.method);
        if (iVar3 != 2) {
          uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
          func_?(uVar4);
          pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          uVar4 = func_?(&TypeInfo__System__Object,1);
          args = (Object__Array *)func_?(uVar4);
          pJVar2 = (pJVar1->fields)._reader;
          func_?(pJVar2);
          this = (JsonSchemaBuilder *)func_?(7,pJVar2);
          uVar4 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
          uVar4 = func_?(uVar4);
          func_?(args);
          func_?(args,uVar4);
          func_?(0,uVar4);
          ppSVar6 = &StringLiteral_Expected_array_token__got__0__;
          goto code_?;
        }
        pJVar2 = (pJVar1->fields)._reader;
        if (pJVar2 != (JsonReader *)0x0) {
          while( true ) {
            cVar7 = (*(pJVar2->klass->vtable).__unknown.methodPtr)
                              (pJVar2,(pJVar2->klass->vtable).__unknown.method);
            if (cVar7 == '\0') {
              return;
            }
            pJVar2 = (pJVar1->fields)._reader;
            if (pJVar2 == (JsonReader *)0x0) break;
            iVar3 = (*(pJVar2->klass->vtable).get_TokenType.methodPtr)
                              (pJVar2,(pJVar2->klass->vtable).get_TokenType.method);
            if (iVar3 == 0xe) {
              return;
            }
            pJVar2 = (pJVar1->fields)._reader;
            if (pJVar2 == (JsonReader *)0x0) break;
            iVar3 = (*(pJVar2->klass->vtable).get_TokenType.methodPtr)
                              (pJVar2,(pJVar2->klass->vtable).get_TokenType.method);
            if (iVar3 != 1) {
              uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
              func_?(uVar4);
              pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              uVar4 = func_?(&TypeInfo__System__Object,1);
              args = (Object__Array *)func_?(uVar4);
              pJVar2 = (pJVar1->fields)._reader;
              func_?(pJVar2);
              this = (JsonSchemaBuilder *)func_?(7,pJVar2);
              uVar4 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
              uVar4 = func_?(uVar4);
              func_?(args);
              func_?(args,uVar4);
              func_?(0,uVar4);
              ppSVar6 = &StringLiteral_Expect_object_token__got__0__;
              goto code_?;
            }
            piVar8 = (int *)0x0;
            this = (JsonSchemaBuilder *)0x0;
            while( true ) {
              pJVar2 = (pJVar1->fields)._reader;
              if (pJVar2 == (JsonReader *)0x0) goto code_?;
              cVar7 = func_?(0xb,pJVar2);
              if (cVar7 == '\0') break;
              pJVar2 = (pJVar1->fields)._reader;
              if (pJVar2 == (JsonReader *)0x0) goto code_?;
              iVar3 = func_?(7,pJVar2);
              if (iVar3 == 0xd) break;
              pJVar2 = (pJVar1->fields)._reader;
              if (pJVar2 == (JsonReader *)0x0) goto code_?;
              value = (Object *)func_?(8,pJVar2);
              if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0
                 ) {
                func_?(TypeInfo__System__Globalization__CultureInfo);
              }
              pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Convert);
              }
              a = (JsonSchema *)
                  mscorlib.dll::System::Convert::Convert_ToString_1
                            (value,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
              pJVar2 = (pJVar1->fields)._reader;
              if (pJVar2 == (JsonReader *)0x0) goto code_?;
              func_?(0xb,pJVar2);
              bVar9 = mscorlib.dll::System::String::String_op_Equality
                                ((String *)a,StringLiteral_value,(MethodInfo *)0x0);
              if (bVar9 == 0) {
                bVar9 = mscorlib.dll::System::String::String_op_Equality
                                  ((String *)a,StringLiteral_label,(MethodInfo *)0x0);
                if (bVar9 == 0) goto code_?;
                pJVar2 = (pJVar1->fields)._reader;
                if (pJVar2 == (JsonReader *)0x0) goto code_?;
                piVar10 = (int *)func_?(8,pJVar2);
                piVar8 = (int *)0x0;
                if (piVar10 != (int *)0x0) {
                  if ((String__Class *)*piVar10 == TypeInfo__System__String) {
                    piVar8 = piVar10;
                  }
                  if (piVar8 == (int *)0x0) {
                    func_?(piVar10,TypeInfo__System__String);
                    goto code_?;
                  }
                }
              }
              else {
                this = (JsonSchemaBuilder *)
                       Linq::JToken::JToken_ReadFrom((pJVar1->fields)._reader,(MethodInfo *)0x0);
              }
            }
            a = (JsonSchema *)this;
            if (this == (JsonSchemaBuilder *)0x0) {
              uVar4 = func_?(&TypeInfo__System__Exception);
              this_01 = (Exception *)func_?(uVar4);
              func_?(this_01);
              pMVar11 = (MethodInfo *)0x0;
              pSVar12 = (String *)func_?(&StringLiteral_No_value_specified_for_JSON_sche);
              mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar12,pMVar11);
              uVar4 = func_?(&
                                       MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessOptions__
                                      );
              goto code_?;
            }
            pJVar13 = (pJVar1->fields)._currentSchema;
            if ((pJVar13 == (JsonSchema *)0x0) ||
               (pIVar14 = (pJVar13->fields)._Options_k__BackingField,
               pIVar14 == (IDictionary_2_Newtonsoft_Json_Linq_JToken_System_String_ *)0x0)) break;
            cVar7 = func_?(4,
                                    TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                                    ,pIVar14,this);
            if (cVar7 != '\0') {
              uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
              func_?(uVar4);
              pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              uVar4 = func_?(&TypeInfo__System__Object,1);
              args = (Object__Array *)func_?(uVar4);
              func_?(args);
              func_?(args,a);
              func_?(0,a);
              ppSVar6 = &StringLiteral_Duplicate_value_in_JSON_schema_o;
              goto code_?;
            }
            pJVar13 = (pJVar1->fields)._currentSchema;
            if ((pJVar13 == (JsonSchema *)0x0) ||
               (pIVar14 = (pJVar13->fields)._Options_k__BackingField,
               pIVar14 == (IDictionary_2_Newtonsoft_Json_Linq_JToken_System_String_ *)0x0)) break;
            func_?(5,
                            TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                            ,pIVar14,a,piVar8);
            pJVar2 = (pJVar1->fields)._reader;
            if (pJVar2 == (JsonReader *)0x0) break;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar4);
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar4 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar4);
  func_?(args);
  func_?(args,a);
  func_?(0,a);
  ppSVar6 = &StringLiteral_Unexpected_property_in_JSON_sche;
code_?:
  pMVar11 = (MethodInfo *)0x0;
  pSVar12 = (String *)func_?(ppSVar6);
  pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar12,(IFormatProvider *)pCVar5,args,pMVar11);
  uVar4 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar4);
  func_?(this_01);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar12,(MethodInfo *)0x0);
  uVar4 = func_?(&
                           MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessOptions__
                          );
code_?:
  func_?(this_01,uVar4);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ProcessPatternProperties() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessPatternProperties(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Add_System__String__Newtonsoft__Json__Schema__JsonSchema_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                           );
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Dictionary__
              );
    pJVar1 = (this->fields)._reader;
    if (pJVar1 != (JsonReader *)0x0) {
      iVar2 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
      if (iVar2 == 1) {
        pJVar1 = (this->fields)._reader;
        while (pJVar1 != (JsonReader *)0x0) {
          cVar3 = (*(pJVar1->klass->vtable).__unknown.methodPtr)
                            (pJVar1,(pJVar1->klass->vtable).__unknown.method);
          if (cVar3 == '\0') {
code_?:
            pJVar4 = (this->fields)._currentSchema;
            if (pJVar4 != (JsonSchema *)0x0) {
              (pJVar4->fields)._PatternProperties_k__BackingField =
                   (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)this_00;
              func_?(&(pJVar4->fields)._PatternProperties_k__BackingField,this_00);
              return;
            }
            break;
          }
          pJVar1 = (this->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) break;
          iVar2 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                            (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
          if (iVar2 == 0xd) goto code_?;
          pJVar1 = (this->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) break;
          value = (Object *)
                  (*(pJVar1->klass->vtable).get_Value.methodPtr)
                            (pJVar1,(pJVar1->klass->vtable).get_Value.method);
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          unaff_EBX = mscorlib.dll::System::Convert::Convert_ToString_1
                                (value,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
          pJVar1 = (this->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) break;
          (*(pJVar1->klass->vtable).__unknown.methodPtr)
                    (pJVar1,(pJVar1->klass->vtable).__unknown.method);
          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (this_00,(Object *)unaff_EBX,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__ContainsKey_System__String_
                            );
          if (bVar6 != 0) goto code_?;
          pJVar4 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)unaff_EBX,
                     (Object *)pJVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Add_System__String__Newtonsoft__Json__Schema__JsonSchema_
                    );
          pJVar1 = (this->fields)._reader;
        }
      }
      else {
        uVar7 = func_?(&TypeInfo__System__Exception);
        pEVar8 = (Exception *)func_?(uVar7);
        func_?(pEVar8);
        pMVar9 = (MethodInfo *)0x0;
        pSVar10 = (String *)func_?(&StringLiteral_Expected_start_object_token_);
        mscorlib.dll::System::Exception::Exception__ctor_1(pEVar8,pSVar10,pMVar9);
        uVar7 = func_?(&
                                MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessPatternProperties__
                               );
        func_?(pEVar8,uVar7);
      }
    }
  }
  func_?();
code_?:
  uVar7 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar7);
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar7 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar7);
  func_?(args);
  func_?(args,unaff_EBX);
  func_?(0,unaff_EBX);
  pMVar9 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(&StringLiteral_Property__0__has_already_been_de);
  pSVar10 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar10,(IFormatProvider *)pCVar5,args,pMVar9);
  uVar7 = func_?(&TypeInfo__System__Exception);
  pEVar8 = (Exception *)func_?(uVar7);
  func_?(pEVar8);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar8,pSVar10,(MethodInfo *)0x0);
  uVar7 = func_?(&
                          MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessPatternProperties__
                         );
  func_?(pEVar8,uVar7);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ProcessProperties() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessProperties(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                   );
    cRam_? = '\x01';
  }
  pEVar1 = (Exception *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                          );
  pEStack_2 = pEVar1;
  if (pEVar1 != (Exception *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pEVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Dictionary__
              );
    pJVar3 = (this->fields)._reader;
    if (pJVar3 != (JsonReader *)0x0) {
      iVar4 = (*(pJVar3->klass->vtable).get_TokenType.methodPtr)
                        (pJVar3,(pJVar3->klass->vtable).get_TokenType.method);
      if (iVar4 != 1) {
        uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
        func_?(uVar5);
        pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        uVar5 = func_?(&TypeInfo__System__Object,1);
        args = (Object__Array *)func_?(uVar5);
        pJVar3 = (this->fields)._reader;
        func_?(pJVar3);
        pPStack_7 = (ParameterOverride_1_System_Object___Class *)func_?(7,pJVar3);
        uVar5 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&pPStack_7);
        uVar5 = func_?(uVar5);
        func_?(args);
        func_?(args,uVar5);
        func_?(0,uVar5);
        ppSVar8 = &StringLiteral_Expected_StartObject_token_while;
        goto code_?;
      }
      pJVar3 = (this->fields)._reader;
      while (pJVar3 != (JsonReader *)0x0) {
        cVar9 = (*(pJVar3->klass->vtable).__unknown.methodPtr)
                          (pJVar3,(pJVar3->klass->vtable).__unknown.method);
        if (cVar9 == '\0') {
code_?:
          pJVar10 = (this->fields)._currentSchema;
          if (pJVar10 != (JsonSchema *)0x0) {
            (pJVar10->fields)._Properties_k__BackingField =
                 (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)pEVar1;
            func_?(&(pJVar10->fields)._Properties_k__BackingField,pEVar1);
            return;
          }
          break;
        }
        pJVar3 = (this->fields)._reader;
        if (pJVar3 == (JsonReader *)0x0) break;
        iVar4 = (*(pJVar3->klass->vtable).get_TokenType.methodPtr)
                          (pJVar3,(pJVar3->klass->vtable).get_TokenType.method);
        if (iVar4 == 0xd) goto code_?;
        pJVar3 = (this->fields)._reader;
        if (pJVar3 == (JsonReader *)0x0) break;
        pSStack_11 = (String *)
                    (*(pJVar3->klass->vtable).get_Value.methodPtr)
                              (pJVar3,(pJVar3->klass->vtable).get_Value.method);
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        pSStack_11 = mscorlib.dll::System::Convert::Convert_ToString_1
                              ((Object *)pSStack_11,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
        pJVar3 = (this->fields)._reader;
        if (pJVar3 == (JsonReader *)0x0) break;
        (*(pJVar3->klass->vtable).__unknown.methodPtr)
                  (pJVar3,(pJVar3->klass->vtable).__unknown.method);
        pPStack_7 = ((ParameterOverride_1_System_Object_ *)pEVar1)->klass;
        uVar12 = 0;
        uStack_13 = 0;
        uVar14 = (pPStack_7->_1).interface_offsets_count;
        if (uVar14 != 0) {
          do {
            pEVar1 = pEStack_2;
            if (pPStack_7->interfaceOffsets[uVar12].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
               ) {
              pVVar15 = &(pPStack_7->vtable).Interp + pPStack_7->interfaceOffsets[uVar12].offset;
              goto code_?;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar14);
        }
        pVVar15 = (VirtualInvokeData *)
                 func_?(pEVar1,
                                 TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                                 ,4);
code_?:
        pSVar16 = pSStack_11;
        cVar9 = (*pVVar15->methodPtr)(pEVar1,pSStack_11,pVVar15->method);
        if (cVar9 != '\0') goto code_?;
        pJVar10 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
        func_?(5,
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                        ,pEVar1,pSVar16,pJVar10);
        pJVar3 = (this->fields)._reader;
      }
    }
  }
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar5);
  pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  uVar5 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar5);
  func_?(args);
  pSVar16 = pSStack_11;
  func_?(args,pSStack_11);
  func_?(0,pSVar16);
  ppSVar8 = &StringLiteral_Property__0__has_already_been_de;
code_?:
  method_00 = (MethodInfo *)0x0;
  pSVar16 = (String *)func_?(ppSVar8);
  pSVar16 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar16,(IFormatProvider *)pCVar6,args,method_00);
  uVar5 = func_?(&TypeInfo__System__Exception);
  pEVar1 = (Exception *)func_?(uVar5);
  func_?(pEVar1);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar1,pSVar16,(MethodInfo *)0x0);
  func_?(&MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessProperties__);
  pEStack_2 = pEVar1;
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void ProcessSchemaProperty(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessSchemaProperty
               (JsonSchemaBuilder *this,String *propertyName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    func_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
    func_?(&MethodInfo__System__Nullable<double>__Nullable_double_);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_hidden);
    func_?(&StringLiteral_minimum);
    func_?(&StringLiteral_readonly);
    func_?(&StringLiteral_identity);
    func_?(&StringLiteral_divisibleBy);
    func_?(&StringLiteral_enum);
    func_?(&StringLiteral_minItems);
    func_?(&StringLiteral_requires);
    func_?(&StringLiteral_minLength);
    func_?(&StringLiteral_default);
    func_?(&StringLiteral_exclusiveMinimum);
    func_?(&StringLiteral_format);
    func_?(&StringLiteral_disallow);
    func_?(&StringLiteral_properties);
    func_?(&StringLiteral_id);
    func_?(&StringLiteral_required);
    func_?(&StringLiteral_additionalProperties);
    func_?(&StringLiteral_exclusiveMaximum);
    func_?(&StringLiteral_maximum);
    func_?(&StringLiteral_title);
    func_?(&StringLiteral_options);
    func_?(&StringLiteral_maxLength);
    func_?(&StringLiteral_extends);
    func_?(&StringLiteral_pattern);
    func_?(&StringLiteral_description);
    func_?(&StringLiteral_maxItems);
    func_?(&StringLiteral_patternProperties);
    func_?(&StringLiteral_items);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  pSVar1 = propertyName;
  uVar2 = System.dll::<PrivateImplementationDetails>::
          _PrivateImplementationDetails__2_ComputeStringHash(propertyName,(MethodInfo *)0x0);
  if (uVar2 < 0x873d012a) {
    if (uVar2 < 0x3a793390) {
      if (uVar2 < 0x150efe0e) {
        if (uVar2 == 0x11de6cdc) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_properties,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            JsonSchemaBuilder_ProcessProperties(this,(MethodInfo *)0x0);
            return;
          }
        }
        else if (uVar2 == 0x13f0fb79) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_minItems,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pJVar4 = (this->fields)._currentSchema;
            if ((this->fields)._reader != (JsonReader *)0x0) {
              pOVar5 = (Object *)func_?();
              if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0
                 ) {
                func_?(TypeInfo__System__Globalization__CultureInfo);
              }
              pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Convert);
              }
              uVar2 = mscorlib.dll::System::Convert::Convert_ToInt32_1
                                (pOVar5,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
              NStack_7.hasValue = 0;
              NStack_7._1_3_ = 0;
              NStack_7.value = 0;
              mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                        (&NStack_7,uVar2,MethodInfo__System__Nullable<int>__Nullable_int_);
              if (pJVar4 != (JsonSchema *)0x0) {
                (pJVar4->fields)._MinimumItems_k__BackingField.hasValue = NStack_7.hasValue;
                *(undefined3 *)&(pJVar4->fields)._MinimumItems_k__BackingField.field_0x1 =
                     NStack_7._1_3_;
                (pJVar4->fields)._MinimumItems_k__BackingField.value = NStack_7.value;
                return;
              }
            }
            goto code_?;
          }
        }
        else if (uVar2 == 0x150efe0d) {
          pMVar8 = (MethodInfo *)StringLiteral_divisibleBy;
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_divisibleBy,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pJVar4 = (this->fields)._currentSchema;
            if ((this->fields)._reader != (JsonReader *)0x0) {
              pOVar5 = (Object *)func_?();
              if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0
                 ) {
                func_?(TypeInfo__System__Globalization__CultureInfo);
              }
              pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Convert);
              }
              NStack_7 = (Nullable_1_UInt32_)
                         mscorlib.dll::System::Convert::Convert_ToDouble
                                   (pOVar5,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
              uVar9._0_1_ = 0;
              uVar9._1_3_ = 0;
              uVar10 = 0;
              mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double___ctor
                        ((Nullable_1_Double_ *)&stack0xffffffe4,
                         (double)CONCAT44(MethodInfo__System__Nullable<double>__Nullable_double_,
                                          NStack_7.value),pMVar8);
              if (pJVar4 != (JsonSchema *)0x0) {
                (pJVar4->fields)._DivisibleBy_k__BackingField.hasValue = (bool)uVar9;
                *(int3 *)&(pJVar4->fields)._DivisibleBy_k__BackingField.field_0x1 = SUB43(uVar9,1);
                *(undefined4 *)&(pJVar4->fields)._DivisibleBy_k__BackingField.field_0x4 = uVar10;
                *(undefined4 *)&(pJVar4->fields)._DivisibleBy_k__BackingField.value = 0;
                *(undefined4 *)((int)&(pJVar4->fields)._DivisibleBy_k__BackingField.value + 4) = 0;
                return;
              }
            }
            goto code_?;
          }
        }
      }
      else if (uVar2 < 0x346f3b6a) {
        if (uVar2 == 0x1c9c30e1) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_additionalProperties,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pJVar11 = (this->fields)._reader;
            if (pJVar11 != (JsonReader *)0x0) {
              iVar12 = (*(pJVar11->klass->vtable).get_TokenType.methodPtr)();
              pJVar4 = (this->fields)._currentSchema;
              if (iVar12 == 10) {
                pJVar11 = (this->fields)._reader;
                if (pJVar11 != (JsonReader *)0x0) {
                  piVar13 = (int *)(*(pJVar11->klass->vtable).get_Value.methodPtr)();
                  if ((pJVar4 != (JsonSchema *)0x0) && (piVar13 != (int *)0x0)) {
                    if (*(Il2CppClass **)(*piVar13 + 0x20) ==
                        (TypeInfo__System__Boolean->_0).element_class) {
                      pbVar14 = (bool *)func_?();
                      (pJVar4->fields)._AllowAdditionalProperties_k__BackingField = *pbVar14;
                      return;
                    }
                    goto code_?;
                  }
                }
              }
              else {
                pJVar15 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
                if (pJVar4 != (JsonSchema *)0x0) {
                  (pJVar4->fields)._AdditionalProperties_k__BackingField = pJVar15;
                  func_?();
                  return;
                }
              }
            }
            goto code_?;
          }
        }
        else if (uVar2 == 0x346f3b69) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_description,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pJVar4 = (this->fields)._currentSchema;
            if ((this->fields)._reader != (JsonReader *)0x0) {
              pSVar1 = (String *)func_?();
              if (pJVar4 != (JsonSchema *)0x0) {
                pSVar16 = (String *)0x0;
                if (pSVar1 != (String *)0x0) {
                  if (pSVar1->klass == TypeInfo__System__String) {
                    pSVar16 = pSVar1;
                  }
                  if (pSVar16 == (String *)0x0) goto code_?;
                }
                (pJVar4->fields)._Description_k__BackingField = pSVar16;
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
      else if (uVar2 == 0x37386ae0) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_id,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            pSVar1 = (String *)func_?();
            if (pJVar4 != (JsonSchema *)0x0) {
              pSVar16 = (String *)0x0;
              if (pSVar1 == (String *)0x0) {
code_?:
                (pJVar4->fields)._Id_k__BackingField = pSVar16;
                func_?();
                return;
              }
              if (pSVar1->klass == TypeInfo__System__String) {
                pSVar16 = pSVar1;
              }
              if (pSVar16 != (String *)0x0) goto code_?;
              goto code_?;
            }
          }
          goto code_?;
        }
      }
      else if (uVar2 == 0x3a79338f) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_items,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          JsonSchemaBuilder_ProcessItems(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if (uVar2 < 0x64f7c28c) {
      if (uVar2 == 0x5127f14d) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_type,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          NVar17 = JsonSchemaBuilder_ProcessType(this,(MethodInfo *)0x0);
          if (pJVar4 != (JsonSchema *)0x0) {
            (pJVar4->fields)._Type_k__BackingField = NVar17;
            return;
          }
          goto code_?;
        }
      }
      else if (uVar2 == 0x5bf2f681) {
        pMVar8 = (MethodInfo *)StringLiteral_maximum;
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_maximum,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            pOVar5 = (Object *)func_?();
            if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?(TypeInfo__System__Globalization__CultureInfo);
            }
            pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Convert);
            }
            NStack_7 = (Nullable_1_UInt32_)
                       mscorlib.dll::System::Convert::Convert_ToDouble
                                 (pOVar5,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
            uVar10._0_1_ = 0;
            uVar10._1_3_ = 0;
            uVar9 = 0;
            mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double___ctor
                      ((Nullable_1_Double_ *)&stack0xffffffe4,
                       (double)CONCAT44(MethodInfo__System__Nullable<double>__Nullable_double_,
                                        NStack_7.value),pMVar8);
            if (pJVar4 != (JsonSchema *)0x0) {
              (pJVar4->fields)._Maximum_k__BackingField.hasValue = (bool)uVar10;
              *(int3 *)&(pJVar4->fields)._Maximum_k__BackingField.field_0x1 = SUB43(uVar10,1);
              *(undefined4 *)&(pJVar4->fields)._Maximum_k__BackingField.field_0x4 = uVar9;
              *(undefined4 *)&(pJVar4->fields)._Maximum_k__BackingField.value = 0;
              *(undefined4 *)((int)&(pJVar4->fields)._Maximum_k__BackingField.value + 4) = 0;
              return;
            }
          }
          goto code_?;
        }
      }
      else if (uVar2 == 0x64f7c28b) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_exclusiveMaximum,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            piVar13 = (int *)func_?();
            pMVar8 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
            propertyName = (String *)((uint)propertyName & 0xffff0000);
            if (piVar13 != (int *)0x0) {
              if (*(Il2CppClass **)(*piVar13 + 0x20) != (TypeInfo__System__Boolean->_0).element_class
                 ) goto code_?;
              piVar18 = (int8_t *)func_?();
              mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
                        ((Nullable_1_SByte_ *)&propertyName,*piVar18,pMVar8);
              if (pJVar4 != (JsonSchema *)0x0) {
                (pJVar4->fields)._ExclusiveMaximum_k__BackingField = propertyName._0_2_;
                return;
              }
            }
          }
          goto code_?;
        }
      }
    }
    else if (uVar2 < 0x816cb001) {
      if (uVar2 == 0x720625cd) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_exclusiveMinimum,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            piVar13 = (int *)func_?();
            pMVar8 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
            propertyName = (String *)((uint)propertyName & 0xffff0000);
            if (piVar13 != (int *)0x0) {
              if (*(Il2CppClass **)(*piVar13 + 0x20) != (TypeInfo__System__Boolean->_0).element_class
                 ) goto code_?;
              piVar18 = (int8_t *)func_?();
              mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
                        ((Nullable_1_SByte_ *)&propertyName,*piVar18,pMVar8);
              if (pJVar4 != (JsonSchema *)0x0) {
                (pJVar4->fields)._ExclusiveMinimum_k__BackingField = propertyName._0_2_;
                return;
              }
            }
          }
          goto code_?;
        }
      }
      else if (uVar2 == 0x816cb000) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_enum,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          JsonSchemaBuilder_ProcessEnum(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if (uVar2 == 0x848c8620) {
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar1,StringLiteral_required,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pJVar4 = (this->fields)._currentSchema;
        if ((this->fields)._reader != (JsonReader *)0x0) {
          piVar13 = (int *)func_?();
          pMVar8 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
          propertyName = (String *)((uint)propertyName & 0xffff0000);
          if (piVar13 != (int *)0x0) {
            if (*(Il2CppClass **)(*piVar13 + 0x20) == (TypeInfo__System__Boolean->_0).element_class)
            {
              piVar18 = (int8_t *)func_?();
              mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
                        ((Nullable_1_SByte_ *)&propertyName,*piVar18,pMVar8);
              if (pJVar4 != (JsonSchema *)0x0) {
                (pJVar4->fields)._Required_k__BackingField = propertyName._0_2_;
                return;
              }
            }
            else {
code_?:
              func_?();
            }
          }
        }
        goto code_?;
      }
    }
    else if (uVar2 == 0x873d0129) {
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar1,StringLiteral_pattern,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pJVar4 = (this->fields)._currentSchema;
        if ((this->fields)._reader != (JsonReader *)0x0) {
          pSVar1 = (String *)func_?();
          if (pJVar4 != (JsonSchema *)0x0) {
            pSVar16 = (String *)0x0;
            if (pSVar1 != (String *)0x0) {
              if (pSVar1->klass == TypeInfo__System__String) {
                pSVar16 = pSVar1;
              }
              if (pSVar16 == (String *)0x0) goto code_?;
            }
            (pJVar4->fields)._Pattern_k__BackingField = pSVar16;
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
code_?:
    pJVar11 = (this->fields)._reader;
    if (pJVar11 != (JsonReader *)0x0) {
      JsonReader::JsonReader_Skip(pJVar11,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (0xa945349b < uVar2) {
      if (uVar2 < 0xd23308c2) {
        if (uVar2 < 0xb99d8553) {
          if (uVar2 == 0xb0443bf7) {
            bVar3 = mscorlib.dll::System::String::String_op_Equality
                              (pSVar1,StringLiteral_minLength,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              pJVar4 = (this->fields)._currentSchema;
              if ((this->fields)._reader != (JsonReader *)0x0) {
                pOVar5 = (Object *)func_?();
                if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor ==
                    0) {
                  func_?(TypeInfo__System__Globalization__CultureInfo);
                }
                pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                         CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__System__Convert);
                }
                uVar2 = mscorlib.dll::System::Convert::Convert_ToInt32_1
                                  (pOVar5,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
                NStack_7.hasValue = 0;
                NStack_7._1_3_ = 0;
                NStack_7.value = 0;
                mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                          (&NStack_7,uVar2,MethodInfo__System__Nullable<int>__Nullable_int_);
                if (pJVar4 != (JsonSchema *)0x0) {
                  (pJVar4->fields)._MinimumLength_k__BackingField.hasValue = NStack_7.hasValue;
                  *(undefined3 *)&(pJVar4->fields)._MinimumLength_k__BackingField.field_0x1 =
                       NStack_7._1_3_;
                  (pJVar4->fields)._MinimumLength_k__BackingField.value = NStack_7.value;
                  return;
                }
              }
              goto code_?;
            }
          }
          else if (uVar2 == 0xb99d8552) {
            bVar3 = mscorlib.dll::System::String::String_op_Equality
                              (pSVar1,StringLiteral_format,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              pJVar4 = (this->fields)._currentSchema;
              if ((this->fields)._reader != (JsonReader *)0x0) {
                pSVar1 = (String *)func_?();
                if (pJVar4 != (JsonSchema *)0x0) {
                  pSVar16 = (String *)0x0;
                  if (pSVar1 != (String *)0x0) {
                    if (pSVar1->klass == TypeInfo__System__String) {
                      pSVar16 = pSVar1;
                    }
                    if (pSVar16 == (String *)0x0) goto code_?;
                  }
                  (pJVar4->fields)._Format_k__BackingField = pSVar16;
                  func_?();
                  return;
                }
              }
              goto code_?;
            }
          }
        }
        else if (uVar2 == 0xce0beff7) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_readonly,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pJVar4 = (this->fields)._currentSchema;
            if ((this->fields)._reader != (JsonReader *)0x0) {
              piVar13 = (int *)func_?();
              pMVar8 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
              propertyName = (String *)((uint)propertyName & 0xffff0000);
              if (piVar13 != (int *)0x0) {
                if (*(Il2CppClass **)(*piVar13 + 0x20) !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                piVar18 = (int8_t *)func_?();
                mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
                          ((Nullable_1_SByte_ *)&propertyName,*piVar18,pMVar8);
                if (pJVar4 != (JsonSchema *)0x0) {
                  (pJVar4->fields)._ReadOnly_k__BackingField = propertyName._0_2_;
                  return;
                }
              }
            }
            goto code_?;
          }
        }
        else if (uVar2 == 0xd23308c1) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_maxLength,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pJVar4 = (this->fields)._currentSchema;
            if ((this->fields)._reader != (JsonReader *)0x0) {
              pOVar5 = (Object *)func_?();
              if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0
                 ) {
                func_?(TypeInfo__System__Globalization__CultureInfo);
              }
              pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Convert);
              }
              uVar2 = mscorlib.dll::System::Convert::Convert_ToInt32_1
                                (pOVar5,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
              NStack_7.hasValue = 0;
              NStack_7._1_3_ = 0;
              NStack_7.value = 0;
              mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                        (&NStack_7,uVar2,MethodInfo__System__Nullable<int>__Nullable_int_);
              if (pJVar4 != (JsonSchema *)0x0) {
                (pJVar4->fields)._MaximumLength_k__BackingField.hasValue = NStack_7.hasValue;
                *(undefined3 *)&(pJVar4->fields)._MaximumLength_k__BackingField.field_0x1 =
                     NStack_7._1_3_;
                (pJVar4->fields)._MaximumLength_k__BackingField.value = NStack_7.value;
                return;
              }
            }
            goto code_?;
          }
        }
      }
      else if (uVar2 < 0xef286ca6) {
        if (uVar2 == 0xeb4bb270) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_patternProperties,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            JsonSchemaBuilder_ProcessPatternProperties(this,(MethodInfo *)0x0);
            return;
          }
        }
        else if (uVar2 == 0xef286ca5) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_options,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            JsonSchemaBuilder_ProcessOptions(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (uVar2 == 0xf618f139) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_hidden,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            piVar13 = (int *)func_?();
            pMVar8 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
            propertyName = (String *)((uint)propertyName & 0xffff0000);
            if (piVar13 != (int *)0x0) {
              if (*(Il2CppClass **)(*piVar13 + 0x20) != (TypeInfo__System__Boolean->_0).element_class
                 ) goto code_?;
              piVar18 = (int8_t *)func_?();
              mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
                        ((Nullable_1_SByte_ *)&propertyName,*piVar18,pMVar8);
              if (pJVar4 != (JsonSchema *)0x0) {
                (pJVar4->fields)._Hidden_k__BackingField = propertyName._0_2_;
                return;
              }
            }
          }
          goto code_?;
        }
      }
      else if (uVar2 == 0xfcfb3733) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_maxItems,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            pOVar5 = (Object *)func_?();
            if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?(TypeInfo__System__Globalization__CultureInfo);
            }
            pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Convert);
            }
            uVar2 = mscorlib.dll::System::Convert::Convert_ToInt32_1
                              (pOVar5,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
            NStack_7.hasValue = 0;
            NStack_7._1_3_ = 0;
            NStack_7.value = 0;
            mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                      (&NStack_7,uVar2,MethodInfo__System__Nullable<int>__Nullable_int_);
            if (pJVar4 != (JsonSchema *)0x0) {
              (pJVar4->fields)._MaximumItems_k__BackingField.hasValue = NStack_7.hasValue;
              *(undefined3 *)&(pJVar4->fields)._MaximumItems_k__BackingField.field_0x1 =
                   NStack_7._1_3_;
              (pJVar4->fields)._MaximumItems_k__BackingField.value = NStack_7.value;
              return;
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if (0x9865b509 < uVar2) {
      if (uVar2 < 0x9d85d64f) {
        if (uVar2 == 0x9b8caa55) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_requires,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pJVar4 = (this->fields)._currentSchema;
            if ((this->fields)._reader != (JsonReader *)0x0) {
              pSVar1 = (String *)func_?();
              if (pJVar4 != (JsonSchema *)0x0) {
                pSVar16 = (String *)0x0;
                if (pSVar1 != (String *)0x0) {
                  if (pSVar1->klass == TypeInfo__System__String) {
                    pSVar16 = pSVar1;
                  }
                  if (pSVar16 == (String *)0x0) goto code_?;
                }
                (pJVar4->fields)._Requires_k__BackingField = pSVar16;
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
        else if (uVar2 == 0x9d85d64e) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_extends,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pJVar4 = (this->fields)._currentSchema;
            pJVar15 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
            if (pJVar4 != (JsonSchema *)0x0) {
              (pJVar4->fields)._Extends_k__BackingField = pJVar15;
              func_?();
              return;
            }
            goto code_?;
          }
        }
      }
      else if (uVar2 == 0xa07863c0) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_disallow,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          NVar17 = JsonSchemaBuilder_ProcessType(this,(MethodInfo *)0x0);
          if (pJVar4 != (JsonSchema *)0x0) {
            (pJVar4->fields)._Disallow_k__BackingField = NVar17;
            return;
          }
          goto code_?;
        }
      }
      else if (uVar2 == 0xa945349b) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_identity,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          JsonSchemaBuilder_ProcessIdentity(this,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if (uVar2 != 0x933b5bde) {
      if (uVar2 == 0x938122f7) {
        pMVar8 = (MethodInfo *)StringLiteral_minimum;
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_minimum,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            pOVar5 = (Object *)func_?();
            if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?(TypeInfo__System__Globalization__CultureInfo);
            }
            pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Convert);
            }
            NStack_7 = (Nullable_1_UInt32_)
                       mscorlib.dll::System::Convert::Convert_ToDouble
                                 (pOVar5,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
            uVar19._0_1_ = 0;
            uVar19._1_3_ = 0;
            uVar9 = 0;
            mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double___ctor
                      ((Nullable_1_Double_ *)&stack0xffffffe4,
                       (double)CONCAT44(MethodInfo__System__Nullable<double>__Nullable_double_,
                                        NStack_7.value),pMVar8);
            if (pJVar4 != (JsonSchema *)0x0) {
              (pJVar4->fields)._Minimum_k__BackingField.hasValue = (bool)uVar19;
              *(int3 *)&(pJVar4->fields)._Minimum_k__BackingField.field_0x1 = SUB43(uVar19,1);
              *(undefined4 *)&(pJVar4->fields)._Minimum_k__BackingField.field_0x4 = uVar9;
              *(undefined4 *)&(pJVar4->fields)._Minimum_k__BackingField.value = 0;
              *(undefined4 *)((int)&(pJVar4->fields)._Minimum_k__BackingField.value + 4) = 0;
              return;
            }
          }
          goto code_?;
        }
      }
      else if (uVar2 == 0x9865b509) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_title,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            pSVar1 = (String *)func_?();
            if (pJVar4 != (JsonSchema *)0x0) {
              pSVar16 = (String *)0x0;
              if (pSVar1 != (String *)0x0) {
                if (pSVar1->klass == TypeInfo__System__String) {
                  pSVar16 = pSVar1;
                }
                if (pSVar16 == (String *)0x0) goto code_?;
              }
              (pJVar4->fields)._Title_k__BackingField = pSVar16;
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar1,StringLiteral_default,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
    pJVar4 = (this->fields)._currentSchema;
    pJVar20 = Linq::JToken::JToken_ReadFrom((this->fields)._reader,(MethodInfo *)0x0);
    if (pJVar4 != (JsonSchema *)0x0) {
      (pJVar4->fields)._Default_k__BackingField = pJVar20;
      func_?();
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType] ProcessType() */

Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_ProcessType
          (JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__GetValueOrDefault__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                   );
    cRam_? = '\x01';
  }
  pJVar1 = this;
  NStack_2.hasValue = 0;
  NStack_2._1_3_ = 0;
  NStack_2.value = 0;
  pJVar3 = (this->fields)._reader;
  if (pJVar3 != (JsonReader *)0x0) {
    iVar4 = (*(pJVar3->klass->vtable).get_TokenType.methodPtr)
                      (pJVar3,(pJVar3->klass->vtable).get_TokenType.method);
    if (iVar4 == 2) {
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_2,0,
                 MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                );
      pJVar3 = (pJVar1->fields)._reader;
      if (pJVar3 != (JsonReader *)0x0) {
        while( true ) {
          cVar5 = (*(pJVar3->klass->vtable).__unknown.methodPtr)
                            (pJVar3,(pJVar3->klass->vtable).__unknown.method);
          if (cVar5 == '\0') {
            NVar6.hasValue = NStack_2.hasValue;
            uVar7._1_3_ = NStack_2._1_3_;
            register0x00000008 = NStack_2.value;
            return NVar6;
          }
          pJVar3 = (pJVar1->fields)._reader;
          if (pJVar3 == (JsonReader *)0x0) break;
          iVar4 = (*(pJVar3->klass->vtable).get_TokenType.methodPtr)
                            (pJVar3,(pJVar3->klass->vtable).get_TokenType.method);
          if (iVar4 == 0xe) {
            return (Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_)NStack_2;
          }
          pJVar3 = (pJVar1->fields)._reader;
          if (pJVar3 == (JsonReader *)0x0) break;
          iVar4 = (*(pJVar3->klass->vtable).get_TokenType.methodPtr)
                            (pJVar3,(pJVar3->klass->vtable).get_TokenType.method);
          NVar8 = NStack_2;
          if (iVar4 != 9) goto code_?;
          pJVar3 = (pJVar1->fields)._reader;
          uVar9 = NStack_2.value;
          if ((pJVar3 == (JsonReader *)0x0) || (iVar4 = func_?(8,pJVar3), iVar4 == 0))
          break;
          pSVar10 = (String *)func_?(3,iVar4);
          JVar11 = JsonSchemaBuilder_MapType(pSVar10,(MethodInfo *)0x0);
          NStack_12.hasValue = 0;
          NStack_12._1_3_ = 0;
          NStack_12.value = 0;
          if (NVar8.hasValue != 0) {
            mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                      (&NStack_12,uVar9 | JVar11,
                       MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                      );
          }
          pJVar3 = (pJVar1->fields)._reader;
          NStack_2 = NStack_12;
          if (pJVar3 == (JsonReader *)0x0) break;
        }
      }
    }
    else {
      if (iVar4 != 9) {
        uVar13 = func_?(&TypeInfo__System__Globalization__CultureInfo);
        func_?(uVar13);
        provider = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        uVar13 = func_?(&TypeInfo__System__Object,1);
        args = (Object__Array *)func_?(uVar13);
        pJVar3 = (pJVar1->fields)._reader;
        func_?(pJVar3);
        this = (JsonSchemaBuilder *)func_?(7,pJVar3);
        uVar13 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
        uVar13 = func_?(uVar13);
        func_?(args);
        func_?(args,uVar13);
        func_?(0,uVar13);
        ppSVar14 = &StringLiteral_Expected_array_or_JSON_schema_ty;
        goto code_?;
      }
      pJVar3 = (pJVar1->fields)._reader;
      if ((pJVar3 != (JsonReader *)0x0) &&
         (piVar15 = (int *)(*(pJVar3->klass->vtable).get_Value.methodPtr)
                                    (pJVar3,(pJVar3->klass->vtable).get_Value.method),
         piVar15 != (int *)0x0)) {
        pSVar10 = (String *)(**(code **)(*piVar15 + 0xd4))(piVar15,*(undefined4 *)(*piVar15 + 0xd8));
        JVar11 = JsonSchemaBuilder_MapType(pSVar10,(MethodInfo *)0x0);
        NStack_12.hasValue = 0;
        NStack_12._1_3_ = 0;
        NStack_12.value = 0;
        mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                  (&NStack_12,JVar11,
                   MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                  );
        NVar16.hasValue = NStack_12.hasValue;
        uVar17._1_3_ = NStack_12._1_3_;
        register0x00000008 = NStack_12.value;
        return NVar16;
      }
    }
  }
  func_?();
code_?:
  uVar13 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar13);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar13 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar13);
  pJVar3 = (pJVar1->fields)._reader;
  func_?(pJVar3);
  this = (JsonSchemaBuilder *)func_?(7,pJVar3);
  uVar13 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
  uVar13 = func_?(uVar13);
  func_?(args);
  func_?(args,uVar13);
  func_?(0,uVar13);
  ppSVar14 = &StringLiteral_Exception_JSON_schema_type_strin;
code_?:
  method_00 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(ppSVar14);
  pSVar10 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar10,(IFormatProvider *)provider,args,method_00);
  uVar13 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar13);
  func_?(this_00);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar10,(MethodInfo *)0x0);
  uVar13 = func_?(&MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessType__);
  NStack_2._0_4_ = uVar13;
  NStack_12.value = (uint32_t)this_00;
  NStack_12._0_4_ = &UNK_?;
  func_?();
  pcVar18 = (code *)swi(3);
  NVar16 = (Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_)(*pcVar18)();
  return NVar16;
}


/* Void Push(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_Push
               (JsonSchemaBuilder *this,JsonSchema *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                   );
    cRam_? = '\x01';
  }
  (this->fields)._currentSchema = value;
  func_?(&(this->fields)._currentSchema,value);
  pIVar1 = (this->fields)._stack;
  if (pIVar1 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
    func_?(2,
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                    ,pIVar1,value);
    pJVar2 = (this->fields)._resolver;
    if ((pJVar2 != (JsonSchemaResolver *)0x0) &&
       (pIVar1 = (pJVar2->fields)._LoadedSchemas_k__BackingField,
       pIVar1 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0)) {
      func_?(2,
                      TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                      ,pIVar1,value);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JsonSchemaBuilder(JsonSchemaResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder__ctor
               (JsonSchemaBuilder *this,JsonSchemaResolver *resolver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (LowLevelList_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                           );
  if (this_00 != (LowLevelList_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
              );
    (this->fields)._stack = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)this_00;
    func_?(&(this->fields)._stack,this_00);
    (this->fields)._resolver = resolver;
    func_?(&(this->fields)._resolver,resolver);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

