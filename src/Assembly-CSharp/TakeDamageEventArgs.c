
/* TakeDamageEventArgs(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::TakeDamageEventArgs::TakeDamageEventArgs__ctor
               (TakeDamageEventArgs *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__EventArgs);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  (this->fields).damageSource = damageDealer;
  (this->fields).damage = amount;
  func_?(&(this->fields).damageSource,damageDealer);
  (this->fields).damageType = (undefined1)damageType;
  return;
}

