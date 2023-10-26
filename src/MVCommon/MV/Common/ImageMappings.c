
/* ImageMappings() */

void MVCommon.dll::MV::Common::ImageMappings::ImageMappings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::ImageType,_System::String>__Add_MV__Common__ImageType__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::ImageType,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::ImageType,_System::String>
                   );
    func_?(&TypeInfo__MV__Common__ImageMappings);
    func_?(&StringLiteral_ItemID);
    func_?(&StringLiteral_PlanetID);
    func_?(&StringLiteral_ProfileID);
    func_?(&StringLiteral_AvatarID);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::ImageType,_System::String>
                        );
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::ImageType,_System::String>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)0x2,(Object *)StringLiteral_ItemID,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::ImageType,_System::String>__Add_MV__Common__ImageType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)0x1,(Object *)StringLiteral_AvatarID,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::ImageType,_System::String>__Add_MV__Common__ImageType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)0x0,(Object *)StringLiteral_PlanetID,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::ImageType,_System::String>__Add_MV__Common__ImageType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)0x3,(Object *)StringLiteral_ProfileID,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::ImageType,_System::String>__Add_MV__Common__ImageType__System__String_
              );
    TypeInfo__MV__Common__ImageMappings->static_fields->ImageTypeToImageStringID =
         (Dictionary_2_MV_Common_ImageType_System_String_ *)this;
    pIStack1 = TypeInfo__MV__Common__ImageMappings->static_fields;
    pDStack2 = this;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

