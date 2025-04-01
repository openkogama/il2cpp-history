
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
  ppMVar1 = &(this->fields).damageSource;
  (this->fields).damage = amount;
  *ppMVar1 = damageDealer;
  func_?(ppMVar1,damageDealer);
  (this->fields).damageType = (undefined1)damageType;
  return;
}

