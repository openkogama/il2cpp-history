
/* JsonSchemaConstants() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaConstants::JsonSchemaConstants__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants);
    func_?(&StringLiteral_object);
    func_?(&StringLiteral_string);
    func_?(&StringLiteral_any);
    func_?(&StringLiteral_null);
    func_?(&StringLiteral_number);
    func_?(&StringLiteral_integer);
    func_?(&StringLiteral_array);
    func_?(&StringLiteral_boolean);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>
                        );
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_string,(Object *)0x1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_object,(Object *)0x10,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_integer,(Object *)0x4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_number,(Object *)0x2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_null,(Object *)0x40,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_boolean,(Object *)0x8,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_array,(Object *)0x20,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_any,(Object *)0x7f,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->static_fields->JsonSchemaTypeMapping =
         (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaType_ *)this;
    pJStack1 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->static_fields;
    pDStack2 = this;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

