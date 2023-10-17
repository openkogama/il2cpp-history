
/* ApplicationDesc(String, String, Boolean, ApplicationDesc+RegistryKey[]) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::ApplicationDesc::ApplicationDesc__ctor_1
               (ApplicationDesc *this,String *displayName,String *exeCertSubjectName,
               bool strictNameComparison,ApplicationDesc_RegistryKey__Array *associatedRegKeys,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).programName = displayName;
  func_?(&this->fields,displayName);
  (this->fields)._ExeCertSubjectName_k__BackingField = exeCertSubjectName;
  func_?(&(this->fields)._ExeCertSubjectName_k__BackingField,exeCertSubjectName);
  (this->fields).strictComparison = strictNameComparison;
  (this->fields).associatedRegistryKeys = associatedRegKeys;
  func_?(&(this->fields).associatedRegistryKeys,associatedRegKeys);
  return;
}

