
/* Void SetHighlightToSeen(Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::HighlightSystem::HighlightPayloads::ProfileHighlightState::
     ProfileHighlightState_SetHighlightToSeen
               (ProfileHighlightState *this,int32_t slot,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).slotSeenIdMap;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)slot,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                      );
    this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).slotSeenIdMap;
    if (bVar1 == 0) {
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)slot,(Object *)id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
        return;
      }
    }
    else if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_01,(Object *)slot,(Object *)id,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_)
      ;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ProfileHighlightState() */

void MVWorldObject.dll::MV::WorldObject::HighlightSystem::HighlightPayloads::ProfileHighlightState::
     ProfileHighlightState__ctor(ProfileHighlightState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  if (this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).slotSeenIdMap = this_00;
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

