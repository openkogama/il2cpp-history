
/* CameraFocus+Data CalculateFocusData(Camera, AABB, CameraFocusSettings) */

CameraFocus_Data *
Assembly-CSharp.dll::RTG::CameraFocus::CameraFocus_CalculateFocusData
          (Camera *camera,AABB *focusAABB,CameraFocusSettings *focusSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraFocus__Data);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0].x = (focusAABB->_size).x;
  aVStack_1[0].y = (focusAABB->_size).y;
  aVStack_1[0].z = (focusAABB->_size).z;
  fVar2 = (float)FUN_?(aVStack_1);
  if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar2 = CameraEx::CameraEx_GetFrustumDistanceFromHeight(camera,fVar2,(MethodInfo *)0x0);
  if ((focusSettings != (CameraFocusSettings *)0x0) &&
     (fVar2 = fVar2 + (focusSettings->fields)._focusDistanceAdd, camera != (Camera *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pCVar5 = (CameraFocus_Data *)(*pcVar4)();
      return pCVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      pCVar5 = (CameraFocus_Data *)(*pcVar4)();
      return pCVar5;
    }
    pcRam_? = pcVar4;
    fVar7 = (float)(*pcRam_?)(pvVar3);
    if (fVar2 < fVar7) {
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                         (camera,(MethodInfo *)0x0);
      fVar2 = fVar2 + (fVar7 - fVar2);
    }
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (aVStack_1,this,(MethodInfo *)0x0);
      uVar9 = pVVar8->x;
      uVar10 = (focusAABB->_center).x;
      fVar11 = (float)uVar10 - (float)uVar9 * fVar2;
      fVar7 = (focusAABB->_center).y - pVVar8->y * fVar2;
      fVar2 = (focusAABB->_center).z - pVVar8->z * fVar2;
      pCVar5 = (CameraFocus_Data *)FUN_?(TypeInfo__RTG__CameraFocus__Data);
      (pCVar5->fields)._cameraWorldPosition.x = fVar11;
      (pCVar5->fields)._cameraWorldPosition.y = fVar7;
      uVar12 = (focusAABB->_center).x;
      uVar13 = (focusAABB->_center).y;
      (pCVar5->fields)._focusPoint.x = (float)uVar12;
      (pCVar5->fields)._focusPoint.y = (float)uVar13;
      (pCVar5->fields)._cameraWorldPosition.z = fVar2;
      aVStack_1[0].z = fVar2 - (focusAABB->_center).z;
      (pCVar5->fields)._focusPoint.z = (focusAABB->_center).z;
      aVStack_1[0].y = fVar7 - (float)uVar13;
      aVStack_1[0].x = fVar11 - (float)uVar12;
      fVar2 = (float)FUN_?(aVStack_1);
      (pCVar5->fields)._focusPointOffset = fVar2;
      return pCVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pCVar5 = (CameraFocus_Data *)(*pcVar4)();
  return pCVar5;
}

