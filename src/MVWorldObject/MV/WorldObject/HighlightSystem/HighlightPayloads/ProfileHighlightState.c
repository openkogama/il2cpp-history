
/* ProfileHighlightState() */

void MVWorldObject.dll::MV::WorldObject::HighlightSystem::HighlightPayloads::ProfileHighlightState::
     ProfileHighlightState__ctor(ProfileHighlightState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this->fields).slotSeenIdMap = this_00;
  return;
}

