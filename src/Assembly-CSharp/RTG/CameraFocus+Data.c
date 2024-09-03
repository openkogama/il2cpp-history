
/* CameraFocus+Data(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::CameraFocus+Data::CameraFocus_Data__ctor
               (CameraFocus_Data *this,Vector3 cameraWorldPosition,Vector3 focusPoint,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._cameraWorldPosition.x = cameraWorldPosition.x;
  (this->fields)._cameraWorldPosition.y = cameraWorldPosition.y;
  (this->fields)._focusPoint.x = (float)(int)focusPoint._0_8_;
  (this->fields)._focusPoint.y = (float)(int)((ulonglong)focusPoint._0_8_ >> 0x20);
  (this->fields)._cameraWorldPosition.z = cameraWorldPosition.z;
  (this->fields)._focusPoint.z = focusPoint.z;
  cameraWorldPosition.x = cameraWorldPosition.x - focusPoint.x;
  cameraWorldPosition.y = cameraWorldPosition.y - focusPoint.y;
  cameraWorldPosition.z = cameraWorldPosition.z - focusPoint.z;
  fVar1 = (float10)func_?(&cameraWorldPosition,0);
  (this->fields)._focusPointOffset = (float)fVar1;
  return;
}

