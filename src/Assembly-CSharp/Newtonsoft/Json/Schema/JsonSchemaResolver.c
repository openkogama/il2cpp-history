
/* JsonSchema GetSchema(String) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaResolver::JsonSchemaResolver_GetSchema
          (JsonSchemaResolver *this,String *id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__Schema__JsonSchema_MethodInfo__System__Linq__Enumerable__SingleOrDefault<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Func<Newtonsoft::Json::Schema::JsonSchema,_bool>_
                   );
    func_?(&TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchema,_bool>);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Schema__JsonSchemaResolver____c__DisplayClass5_0___GetSchema_b__0_Newtonsoft__Json__Schema__JsonSchema_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver____c__DisplayClass5_0);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver____c__DisplayClass5_0
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)id;
    func_?(value + 1,id);
    source = (this->fields)._LoadedSchemas_k__BackingField;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchema,_bool>);
    if (this_00 != (Func_2_Object_Boolean_ *)0x0) {
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_00,value,
                 MethodInfo__Newtonsoft__Json__Schema__JsonSchemaResolver____c__DisplayClass5_0___GetSchema_b__0_Newtonsoft__Json__Schema__JsonSchema_
                 ,(MethodInfo *)0x0);
      pJVar1 = (JsonSchema *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_2
                         ((IEnumerable_1_System_Object_ *)source,this_00,
                          Newtonsoft__Json__Schema__JsonSchema_MethodInfo__System__Linq__Enumerable__SingleOrDefault<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Func<Newtonsoft::Json::Schema::JsonSchema,_bool>_
                         );
      return pJVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonSchema *)(*pcVar2)();
  return pJVar1;
}


/* JsonSchemaResolver() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaResolver::JsonSchemaResolver__ctor
               (JsonSchemaResolver *this,MethodInfo *method)

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
    (this->fields)._LoadedSchemas_k__BackingField =
         (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

