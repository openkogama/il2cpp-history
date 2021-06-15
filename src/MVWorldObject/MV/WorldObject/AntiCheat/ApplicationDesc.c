
/* ApplicationDesc(String, String, Boolean, ApplicationDesc+RegistryKey[]) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::ApplicationDesc::ApplicationDesc__ctor_1
               (ApplicationDesc *this,String *displayName,String *exeCertSubjectName,
               bool strictNameComparison,ApplicationDesc_RegistryKey__Array *associatedRegKeys,
               MethodInfo *method)

{
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).programName = displayName;
  (this->fields)._ExeCertSubjectName_k__BackingField = exeCertSubjectName;
  (this->fields).strictComparison = strictNameComparison;
  (this->fields).associatedRegistryKeys = associatedRegKeys;
  return;
}

