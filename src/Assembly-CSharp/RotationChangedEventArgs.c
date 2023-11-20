
/* RotationChangedEventArgs(Quaternion) */

void Assembly-CSharp.dll::RotationChangedEventArgs::RotationChangedEventArgs__ctor
               (RotationChangedEventArgs *this,Quaternion newRotation,MethodInfo *method)

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
  (this->fields).NewRotation.x = newRotation.x;
  (this->fields).NewRotation.y = newRotation.y;
  (this->fields).NewRotation.z = newRotation.z;
  (this->fields).NewRotation.w = newRotation.w;
  return;
}

