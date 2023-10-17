
/* ApplicationDesc+RegistryKey(String, Boolean) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::ApplicationDesc+RegistryKey::
     ApplicationDesc_RegistryKey__ctor_1
               (ApplicationDesc_RegistryKey *this,String *keyName,bool strictComparison,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).name = keyName;
  func_?(&this->fields,keyName);
  (this->fields).strictComparison = strictComparison;
  return;
}

