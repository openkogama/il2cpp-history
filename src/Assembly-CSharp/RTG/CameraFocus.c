
/* CameraFocus+Data CalculateFocusData(Camera, AABB, CameraFocusSettings) */

CameraFocus_Data *
Assembly-CSharp.dll::RTG::CameraFocus::CameraFocus_CalculateFocusData
          (Camera *camera,AABB focusAABB,CameraFocusSettings *focusSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&TypeInfo__RTG__CameraFocus__Data);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if (focusAABB._size.y * focusAABB._size.y + focusAABB._size.x * focusAABB._size.x +
      focusAABB._size.z * focusAABB._size.z < 0.0) {
    func_?();
  }
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraEx);
  }
  if (camera != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
              (camera,(MethodInfo *)0x0);
    func_?();
    if (focusSettings != (CameraFocusSettings *)0x0) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                         (camera,(MethodInfo *)0x0);
      if (in_stack_2 < fVar1) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                  (camera,(MethodInfo *)0x0);
      }
      this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0);
      if (this != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           (&VStack_4,this,(MethodInfo *)0x0);
        uVar5 = pVVar3->x;
        uVar6 = pVVar3->y;
        fVar7 = focusAABB._center.x - (float)uVar5 * in_stack_8;
        fVar1 = focusAABB._center.y - (float)uVar6 * in_stack_8;
        fVar9 = focusAABB._center.z - pVVar3->z * in_stack_8;
        method_00 = TypeInfo__RTG__CameraFocus__Data;
        VStack_4.x = (float)uVar5;
        VStack_4.y = (float)uVar6;
        VStack_4.z = fVar9;
        pCVar10 = (CameraFocus_Data *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pCVar10,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        fVar11 = VStack_4.x - focusAABB._center.y;
        (pCVar10->fields)._cameraWorldPosition.x = fVar9;
        (pCVar10->fields)._cameraWorldPosition.y = VStack_4.x;
        (pCVar10->fields)._focusPoint.x = (float)(int)focusAABB._center._0_8_;
        (pCVar10->fields)._focusPoint.y = (float)(int)((ulonglong)focusAABB._center._0_8_ >> 0x20);
        VStack_4.y = VStack_4.y - focusAABB._center.z;
        (pCVar10->fields)._cameraWorldPosition.z = fStack_12;
        (pCVar10->fields)._focusPoint.z = focusAABB._center.z;
        VStack_4.x = fVar11;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math,fVar7,fVar1);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar13 = (double)(VStack_4.x * VStack_4.x +
                         (fVar9 - focusAABB._center.x) * (fVar9 - focusAABB._center.x) +
                        VStack_4.y * VStack_4.y);
        if (dVar13 < 0.0) {
          func_?();
          (pCVar10->fields)._focusPointOffset = (float)dVar13;
          return pCVar10;
        }
        (pCVar10->fields)._focusPointOffset = (float)SQRT(dVar13);
        return pCVar10;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pCVar10 = (CameraFocus_Data *)(*pcVar14)();
  return pCVar10;
}

