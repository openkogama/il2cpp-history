
/* CameraFocus+Data(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::CameraFocus+Data::CameraFocus_Data__ctor
               (CameraFocus_Data *this,Vector3 cameraWorldPosition,Vector3 focusPoint,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._cameraWorldPosition.x = (float)(int)cameraWorldPosition._0_8_;
  (this->fields)._cameraWorldPosition.y = (float)(int)((ulonglong)cameraWorldPosition._0_8_ >> 0x20)
  ;
  (this->fields)._focusPoint.x = (float)(int)focusPoint._0_8_;
  (this->fields)._focusPoint.y = (float)(int)((ulonglong)focusPoint._0_8_ >> 0x20);
  (this->fields)._cameraWorldPosition.z = cameraWorldPosition.z;
  (this->fields)._focusPoint.z = focusPoint.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = (double)((cameraWorldPosition.y - focusPoint.y) * (cameraWorldPosition.y - focusPoint.y) +
                   (cameraWorldPosition.x - focusPoint.x) * (cameraWorldPosition.x - focusPoint.x) +
                  (cameraWorldPosition.z - focusPoint.z) * (cameraWorldPosition.z - focusPoint.z));
  if (0.0 <= dVar1) {
    (this->fields)._focusPointOffset = (float)SQRT(dVar1);
    return;
  }
  func_?();
  (this->fields)._focusPointOffset = (float)dVar1;
  return;
}

