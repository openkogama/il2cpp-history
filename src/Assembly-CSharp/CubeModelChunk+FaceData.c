
/* CubeModelChunk+FaceData() */

void Assembly-CSharp.dll::CubeModelChunk+FaceData::CubeModelChunk_FaceData__ctor
               (CubeModelChunk_FaceData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  (this->fields).faceVertices = pVVar1;
  func_?(&this->fields,pVVar1);
  pCVar2 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,4);
  (this->fields).colors = pCVar2;
  method_00 = (MethodInfo *)&(this->fields).colors;
  func_?(method_00,pCVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

