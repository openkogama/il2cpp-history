
/* CameraFocus+Data CalculateFocusData(Camera, AABB, CameraFocusSettings) */

CameraFocus_Data *
Assembly-CSharp.dll::RTG::CameraFocus::CameraFocus_CalculateFocusData
          (Camera *camera,AABB focusAABB,CameraFocusSettings *focusSettings,MethodInfo *method)

{
  AVar1 = focusAABB;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&TypeInfo__RTG__CameraFocus__Data);
    cRam_? = '\x01';
  }
  VStack_2.z = focusAABB._size.z;
  VStack_2.x = focusAABB._size.x;
  VStack_2.y = focusAABB._size.y;
  fVar3 = (float10)func_?(&VStack_2,0);
  fStack_4 = (float)fVar3;
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraEx);
  }
  if (camera != (Camera *)0x0) {
    fStack_5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                          (camera,(MethodInfo *)0x0);
    dVar6 = (double)(fStack_5 * _UNK_? * _UNK_?);
    func_?();
    if (focusSettings != (CameraFocusSettings *)0x0) {
      fStack_5 = (fStack_4 * _UNK_?) / (float)dVar6 +
                  (focusSettings->fields)._focusDistanceAdd;
      fStack_4 = fStack_5;
      fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                            (camera,(MethodInfo *)0x0);
      if (fStack_5 < fStack_7) {
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                          (camera,(MethodInfo *)0x0);
        fStack_5 = fStack_4 + (fVar8 - fStack_4);
        fStack_4 = fStack_5;
      }
      this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0);
      if (this != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           (&VStack_10,this,(MethodInfo *)0x0);
        VStack_2.x = pVVar9->x;
        VStack_2.y = pVVar9->y;
        VStack_10.x = focusAABB._center.x - VStack_2.x * fStack_5;
        fStack_7 = focusAABB._center.y - VStack_2.y * fStack_5;
        VStack_10.y = 0.0;
        VStack_10.z = 0.0;
        uStack_11 = 0;
        VStack_2.z = focusAABB._center.z - pVVar9->z * fStack_5;
        method_00 = TypeInfo__RTG__CameraFocus__Data;
        pCVar12 = (CameraFocus_Data *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pCVar12,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        (pCVar12->fields)._cameraWorldPosition.x = VStack_10.x;
        (pCVar12->fields)._cameraWorldPosition.y = fStack_7;
        (pCVar12->fields)._focusPoint.x = (float)(int)AVar1._center._0_8_;
        (pCVar12->fields)._focusPoint.y = (float)(int)((ulonglong)AVar1._center._0_8_ >> 0x20);
        VStack_10.z = VStack_2.z - focusAABB._center.z;
        (pCVar12->fields)._cameraWorldPosition.z = VStack_2.z;
        (pCVar12->fields)._focusPoint.z = focusAABB._center.z;
        VStack_2.y = fStack_7 - focusAABB._center.y;
        VStack_2.x = VStack_10.x - focusAABB._center.x;
        VStack_2.z = VStack_10.z;
        fVar3 = (float10)func_?(&VStack_2,0);
        (pCVar12->fields)._focusPointOffset = (float)fVar3;
        return pCVar12;
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pCVar12 = (CameraFocus_Data *)(*pcVar13)();
  return pCVar12;
}

