
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothFocus>d__136::
     RTFocusCamera_DoSmoothFocus_d_136_MoveNext
               (RTFocusCamera_DoSmoothFocus_d_136 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
    pCVar2 = (this->fields).focusData;
    pCVar3 = (this_00->fields)._targetCamera;
    if (pCVar2 == (CameraFocus_Data *)0x0) goto code_?;
    fVar4 = (pCVar2->fields)._focusPointOffset;
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__CameraEx);
    }
    if (pCVar3 == (Camera *)0x0) goto code_?;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (pCVar3,(MethodInfo *)0x0);
    dVar6 = (double)(fVar5 * _UNK_? * _UNK_?);
    func_?();
    (this->fields)._targetOrthoSize_5__2 = (float)dVar6 * (fVar4 + fVar4) * _UNK_?;
    pTVar7 = (this_00->fields)._targetTransform;
    if (pTVar7 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd4,pTVar7,(MethodInfo *)0x0);
    pCVar2 = (this->fields).focusData;
    if (pCVar2 == (CameraFocus_Data *)0x0) goto code_?;
    uVar9 = (pCVar2->fields)._cameraWorldPosition.x;
    uVar10 = (pCVar2->fields)._cameraWorldPosition.y;
    uVar11 = pVVar8->x;
    uVar12 = pVVar8->y;
    value.y = (float)uVar10 - (float)uVar12;
    value.x = (float)uVar9 - (float)uVar11;
    value.z = (pCVar2->fields)._cameraWorldPosition.z - pVVar8->z;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffd4,value,(MethodInfo *)0x0);
    fVar5 = pVVar8->y;
    fVar4 = pVVar8->z;
    (this->fields)._camMoveDir_5__3.x = pVVar8->x;
    (this->fields)._camMoveDir_5__3.y = fVar5;
    (this->fields)._camMoveDir_5__3.z = fVar4;
    (this->fields)._elapsedTime_5__4 = 0.0;
    (this_00->fields)._isDoingFocus = 1;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
  }
  pCVar13 = (this_00->fields)._focusSettings;
  if (pCVar13 != (CameraFocusSettings *)0x0) {
    fVar4 = (this->fields)._elapsedTime_5__4 / (pCVar13->fields)._smoothTime;
    pTVar7 = (this_00->fields)._targetTransform;
    if (pTVar7 != (Transform *)0x0) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd4,pTVar7,(MethodInfo *)0x0);
      uVar14 = pVVar8->x;
      uVar15 = pVVar8->y;
      pCVar2 = (this->fields).focusData;
      if (pCVar2 != (CameraFocus_Data *)0x0) {
        uVar16 = (pCVar2->fields)._cameraWorldPosition.x;
        uVar17 = (pCVar2->fields)._cameraWorldPosition.y;
        if (fVar4 < 0.0) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = _UNK_?;
          if (fVar4 <= _UNK_?) {
            fVar5 = fVar4;
          }
        }
        value_00.y = ((float)uVar17 - (float)uVar15) * fVar5 + (float)uVar15;
        value_00.x = ((float)uVar16 - (float)uVar14) * fVar5 + (float)uVar14;
        value_00.z = ((pCVar2->fields)._cameraWorldPosition.z - pVVar8->z) * fVar5 + pVVar8->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar7,value_00,(MethodInfo *)0x0);
        pCVar3 = (this_00->fields)._targetCamera;
        if (pCVar3 != (Camera *)0x0) {
          VStack_18.z = (float)&UNK_?;
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                             (pCVar3,(MethodInfo *)0x0);
          if (fVar4 < 0.0) {
            fVar4 = 0.0;
          }
          else if (_UNK_? < fVar4) {
            fVar4 = _UNK_?;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
                    (pCVar3,((this->fields)._targetOrthoSize_5__2 - fVar5) * fVar4 + fVar5,
                     (MethodInfo *)0x0);
          fVar4 = (this->fields)._elapsedTime_5__4;
          fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar5 = (this->fields)._camMoveDir_5__3.z;
          pCVar2 = (this->fields).focusData;
          uVar20._0_4_ = (this->fields)._camMoveDir_5__3.x;
          uVar20._4_4_ = (this->fields)._camMoveDir_5__3.y;
          (this->fields)._elapsedTime_5__4 = fVar19 + fVar4;
          if (pCVar2 != (CameraFocus_Data *)0x0) {
            uVar21 = (pCVar2->fields)._cameraWorldPosition.x;
            pTVar7 = (this_00->fields)._targetTransform;
            if (pTVar7 != (Transform *)0x0) {
              pVVar8 = &VStack_18;
              pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (pVVar8,pTVar7,(MethodInfo *)0x0);
              uVar23 = pVVar22->x;
              uVar24 = pVVar22->y;
              if (0.0 < (float)uVar20 * ((float)uVar21 - (float)uVar23) +
                        SUB84(uVar20,4) * (4.357642e-29 - (float)uVar24) +
                        fVar5 * ((float)pVVar8 - pVVar22->z)) {
                (this->fields).__2__current = (Object *)0x0;
                func_?();
                (this->fields).__1__state = 1;
                return 1;
              }
              pCVar2 = (this->fields).focusData;
              if ((pCVar2 != (CameraFocus_Data *)0x0) &&
                 (pTVar7 = (this_00->fields)._targetTransform, pTVar7 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar7,(pCVar2->fields)._cameraWorldPosition,(MethodInfo *)0x0);
                pCVar3 = (this_00->fields)._targetCamera;
                if (pCVar3 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
                            (pCVar3,(this->fields)._targetOrthoSize_5__2,(MethodInfo *)0x0);
                  pCVar2 = (this->fields).focusData;
                  if (pCVar2 != (CameraFocus_Data *)0x0) {
                    RTFocusCamera::RTFocusCamera_SetFocusPoint
                              (this_00,(pCVar2->fields)._focusPoint,(MethodInfo *)0x0);
                    pCVar2 = (this->fields).focusData;
                    if (pCVar2 != (CameraFocus_Data *)0x0) {
                      fVar5 = (pCVar2->fields)._focusPoint.y;
                      fVar4 = (pCVar2->fields)._focusPoint.z;
                      (this_00->fields)._lastFocusPoint.x = (pCVar2->fields)._focusPoint.x;
                      (this_00->fields)._lastFocusPoint.y = fVar5;
                      (this_00->fields)._lastFocusPoint.z = fVar4;
                      (this_00->fields)._isDoingFocus = 0;
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  bVar26 = (*pcVar25)();
  return bVar26;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothFocus>d__136::
     RTFocusCamera_DoSmoothFocus_d_136_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoSmoothFocus_d_136 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

