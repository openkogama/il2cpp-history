
/* MediationExtras() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::MediationExtras::MediationExtras__ctor
               (MediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (Dictionary_2_System_String_System_String_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  (this->fields)._Extras_k__BackingField = this_00;
  return;
}

