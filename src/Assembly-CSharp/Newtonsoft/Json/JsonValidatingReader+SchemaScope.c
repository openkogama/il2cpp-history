
/* IEnumerable`1[System.String] GetRequiredProperties(JsonSchemaModel) */

IEnumerable_1_System_String_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+SchemaScope::
JsonValidatingReader_SchemaScope_GetRequiredProperties
          (JsonValidatingReader_SchemaScope *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Empty<System::String>__
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_System::String>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_bool>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_System::String>
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_bool>
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c___GetRequiredProperties_b__18_0_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c___GetRequiredProperties_b__18_1_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c);
    cRam_? = '\x01';
  }
  pMVar1 = 
  System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Empty<System::String>__
  ;
  if ((schema == (JsonSchemaModel *)0x0) ||
     ((schema->fields)._Properties_k__BackingField ==
      (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0)) {
    iVar2 = *(int *)(
                    System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Empty<System::String>__
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
    return (IEnumerable_1_System_String_ *)**(undefined4 **)(iVar2 + 0x5c);
  }
  source = (schema->fields)._Properties_k__BackingField;
  if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c);
  }
  this_00 = TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->
            __9__18_0;
  if (this_00 ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_Boolean_
       *)0x0) {
    if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c);
    }
    pJVar3 = TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->__9;
    this_00 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_Boolean_
               *)func_?(
                                TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_bool>
                                );
    if (this_00 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_Boolean_
         *)0x0) goto code_?;
    mscorlib.dll::System::Predicate`1[TabMenuButtonAccessory+AccessoryTabDef]::
    Predicate_1_TabMenuButtonAccessory_AccessoryTabDef___ctor
              ((Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)this_00,(Object *)pJVar3,
               MethodInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c___GetRequiredProperties_b__18_0_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_
               ,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->__9__18_0 =
         this_00;
    func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->
                     static_fields->__9__18_0,this_00);
  }
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_2
                        ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                          *)this_00,
                         System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_bool>_
                        );
  if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c);
  }
  this_01 = TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->
            __9__18_1;
  if (this_01 ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_String_
       *)0x0) {
    if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c);
    }
    pJVar3 = TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->__9;
    this_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_String_
               *)func_?(
                                TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_System::String>
                                );
    if (this_01 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_String_
         *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      pIVar5 = (IEnumerable_1_System_String_ *)(*pcVar4)();
      return pIVar5;
    }
    mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,Object]::
    Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
              ((Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                *)this_01,(Object *)pJVar3,
               MethodInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c___GetRequiredProperties_b__18_1_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_
               ,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->__9__18_1 =
         this_01;
    func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->
                     static_fields->__9__18_1,this_01);
  }
  pIVar6 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_1
                     (source_00,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_
                       *)this_01,
                      System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_System::String>_
                     );
  return (IEnumerable_1_System_String_ *)pIVar6;
}


/* JsonValidatingReader+SchemaScope(JTokenType, IList`1[Newtonsoft.Json.Schema.JsonSchemaModel]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+SchemaScope::
     JsonValidatingReader_SchemaScope__ctor
               (JsonValidatingReader_SchemaScope *this,JTokenType__Enum tokenType,
               IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *schemas,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Distinct<System::String>_System__Collections__Generic__IEnumerable<System::String>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__SelectMany<Newtonsoft::Json::Schema::JsonSchemaModel,_System::String>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_System::Collections::Generic::IEnumerable<System::String>_>_
                   );
    func_?(&
                    System__Collections__Generic__Dictionary<System::String,_bool>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::String,_System::String,_bool>_System__Collections__Generic__IEnumerable<System::String>__System__Func<System::String,_System::String>__System__Func<System::String,_bool>_
                   );
    func_?(&
                    TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_System::Collections::Generic::IEnumerable<System::String>_>
                   );
    func_?(&TypeInfo__System__Func<System::String,_System::String>);
    func_?(&TypeInfo__System__Func<System::String,_bool>);
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope__GetRequiredProperties_Newtonsoft__Json__Schema__JsonSchemaModel_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c____ctor_b__17_0_System__String_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c____ctor_b__17_1_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._tokenType = tokenType;
  (this->fields)._schemas = schemas;
  func_?(&(this->fields)._schemas,schemas);
  this_00 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_System::Collections::Generic::IEnumerable<System::String>_>
                           );
  if (this_00 != (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]::
    RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope__GetRequiredProperties_Newtonsoft__Json__Schema__JsonSchemaModel_
               ,(MethodInfo *)0x0);
    pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_SelectMany
                       ((IEnumerable_1_System_Object_ *)schemas,
                        (Func_2_Object_System_Collections_Generic_IEnumerable_1_System_Object_ *)
                        this_00,
                        System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__SelectMany<Newtonsoft::Json::Schema::JsonSchemaModel,_System::String>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_System::Collections::Generic::IEnumerable<System::String>_>_
                       );
    pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Distinct
                       (pIVar1,
                        System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Distinct<System::String>_System__Collections__Generic__IEnumerable<System::String>_
                       );
    if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_01 = TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->
              __9__17_0;
    if (this_01 == (Func_2_String_String_ *)0x0) {
      if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pJVar2 = TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->__9
      ;
      this_01 = (Func_2_String_String_ *)func_?();
      if (this_01 == (Func_2_String_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]
      ::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_01,
                 (Object *)pJVar2,
                 MethodInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c____ctor_b__17_0_System__String_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->__9__17_0 =
           this_01;
      func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->
                       static_fields->__9__17_0,this_01);
    }
    if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_02 = TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->
              __9__17_1;
    if (this_02 == (Func_2_String_Boolean_ *)0x0) {
      if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pJVar2 = TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->__9
      ;
      this_02 = (Func_2_String_Boolean_ *)func_?();
      if (this_02 == (Func_2_String_Boolean_ *)0x0) goto code_?;
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                ((Func_2_Object_Boolean_ *)this_02,(Object *)pJVar2,
                 MethodInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c____ctor_b__17_1_System__String_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->static_fields->__9__17_1 =
           this_02;
      func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader_SchemaScope____c->
                       static_fields->__9__17_1,this_02);
    }
    pDVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_6
                       (pIVar1,(Func_2_Object_Object_ *)this_01,(Func_2_Object_Object_ *)this_02,
                        System__Collections__Generic__Dictionary<System::String,_bool>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::String,_System::String,_bool>_System__Collections__Generic__IEnumerable<System::String>__System__Func<System::String,_System::String>__System__Func<System::String,_bool>_
                       );
    (this->fields)._requiredProperties = (Dictionary_2_System_String_System_Boolean_ *)pDVar3;
    func_?();
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

