
/* ConstraintBoxChangedEventArgs(Vector3, IntVector, IntVector) */

void Assembly-CSharp.dll::ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
               (ConstraintBoxChangedEventArgs *this,Vector3 center,IntVector minCorner,
               IntVector maxCorner,MethodInfo *method)

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
  (this->fields).Center.x = center.x;
  (this->fields).Center.y = center.y;
  (this->fields).Center.z = center.z;
  (this->fields).MinCorner.x = minCorner.x;
  (this->fields).MinCorner.y = minCorner.y;
  (this->fields).MinCorner.z = minCorner.z;
  (this->fields).MaxCorner.x = maxCorner.x;
  (this->fields).MaxCorner.y = maxCorner.y;
  (this->fields).MaxCorner.z = maxCorner.z;
  return;
}

