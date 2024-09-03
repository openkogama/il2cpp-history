
/* FaceData() */

void Assembly-CSharp.dll::FaceData::FaceData__ctor(FaceData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  (this->fields).faceVertices = pVVar1;
  func_?(&this->fields,pVVar1);
  pSVar2 = (Single__Array *)func_?(TypeInfo__System__Single,4);
  (this->fields).lightValues = pSVar2;
  method_00 = (MethodInfo *)&(this->fields).lightValues;
  func_?(method_00,pSVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

