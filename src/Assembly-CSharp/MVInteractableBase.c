
/* MVInteractableBase() */

void Assembly-CSharp.dll::MVInteractableBase::MVInteractableBase__ctor
               (MVInteractableBase *this,MethodInfo *method)

{
  (this->fields)._.findWorldObjectParent = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

