
/* ProfileHighlightState() */

void MVWorldObject.dll::MV::WorldObject::HighlightSystem::HighlightPayloads::ProfileHighlightState::
     ProfileHighlightState__ctor(ProfileHighlightState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  method_00 = (MethodInfo *)&this->fields;
  ((ProfileHighlightState__Fields *)method_00)->slotSeenIdMap =
       (Dictionary_2_System_Int32_System_Int32_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

