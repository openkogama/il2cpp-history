
/* JsonSchemaConstants() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaConstants::JsonSchemaConstants__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Dictionary__
            );
  if (this != (Dictionary_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,Newtonsoft::Json::Schema
    ::JsonSchemaType]::Dictionary_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType__Add
              (this,(Object *)StringLiteral_string,JsonSchemaType__Enum_String,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,Newtonsoft::Json::Schema
    ::JsonSchemaType]::Dictionary_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType__Add
              (this,(Object *)StringLiteral_object,JsonSchemaType__Enum_Object,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,Newtonsoft::Json::Schema
    ::JsonSchemaType]::Dictionary_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType__Add
              (this,(Object *)StringLiteral_integer,JsonSchemaType__Enum_Integer,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,Newtonsoft::Json::Schema
    ::JsonSchemaType]::Dictionary_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType__Add
              (this,(Object *)StringLiteral_number,JsonSchemaType__Enum_Float,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,Newtonsoft::Json::Schema
    ::JsonSchemaType]::Dictionary_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType__Add
              (this,(Object *)StringLiteral_null,JsonSchemaType__Enum_Null,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,Newtonsoft::Json::Schema
    ::JsonSchemaType]::Dictionary_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType__Add
              (this,(Object *)StringLiteral_boolean,JsonSchemaType__Enum_Boolean,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,Newtonsoft::Json::Schema
    ::JsonSchemaType]::Dictionary_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType__Add
              (this,(Object *)StringLiteral_array,JsonSchemaType__Enum_Array,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,Newtonsoft::Json::Schema
    ::JsonSchemaType]::Dictionary_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType__Add
              (this,(Object *)StringLiteral_any,JsonSchemaType__Enum_Any,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__Add_System__String__Newtonsoft__Json__Schema__JsonSchemaType_
              );
    TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->static_fields->JsonSchemaTypeMapping =
         (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaType_ *)this;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

