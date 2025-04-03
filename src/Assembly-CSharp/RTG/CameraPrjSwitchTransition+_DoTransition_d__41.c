
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition+<DoTransition>d__41::
     CameraPrjSwitchTransition_DoTransition_d_41_MoveNext
               (CameraPrjSwitchTransition_DoTransition_d_41 *this,MethodInfo *method)

{
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  fVar2 = _UNK_?;
  iVar3 = (this->fields).__1__state;
  pCVar4 = (this->fields).__4__this;
  if (iVar3 == 0) {
    (this->fields).__1__state = -1;
    if ((pCVar4 == (CameraPrjSwitchTransition *)0x0) ||
       (pCVar5 = (pCVar4->fields)._targetCamera, pCVar5 == (Camera *)0x0)) goto code_?;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                       (pCVar5,(MethodInfo *)0x0);
    (this->fields)._targetFOV_5__3 = 0.0;
    this = (CameraPrjSwitchTransition_DoTransition_d_41 *)0x0;
    (pCVar1->fields)._frustumHeight_5__2 = fVar2 + fVar2;
    iVar3 = (pCVar4->fields)._transitionType;
    if (iVar3 == 0) {
      pCVar5 = (pCVar4->fields)._targetCamera;
      if (pCVar5 == (Camera *)0x0) goto code_?;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                         (pCVar5,(MethodInfo *)0x0);
      pCVar5 = (pCVar4->fields)._targetCamera;
      if (bVar6 != 0) {
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this = (CameraPrjSwitchTransition_DoTransition_d_41 *)
               CameraEx::CameraEx_GetOrthoFOV(pCVar5,(MethodInfo *)0x0);
        goto code_?;
      }
      this = (CameraPrjSwitchTransition_DoTransition_d_41 *)(pCVar4->fields)._camFieldOfView;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar2 = CameraEx::CameraEx_GetOrthoFOV(pCVar5,(MethodInfo *)0x0);
      (pCVar1->fields)._targetFOV_5__3 = fVar2;
      (pCVar4->fields)._transitionType = 1;
    }
    else if (iVar3 == 1) {
      pCVar5 = (pCVar4->fields)._targetCamera;
      if (pCVar5 == (Camera *)0x0) goto code_?;
      this = (CameraPrjSwitchTransition_DoTransition_d_41 *)
             UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (pCVar5,(MethodInfo *)0x0);
code_?:
      (pCVar1->fields)._targetFOV_5__3 = (pCVar4->fields)._camFieldOfView;
      (pCVar4->fields)._transitionType = 2;
    }
    else if (iVar3 == 2) {
      pCVar5 = (pCVar4->fields)._targetCamera;
      if (pCVar5 == (Camera *)0x0) goto code_?;
      this = (CameraPrjSwitchTransition_DoTransition_d_41 *)
             UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (pCVar5,(MethodInfo *)0x0);
      pCVar5 = (pCVar4->fields)._targetCamera;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar2 = CameraEx::CameraEx_GetOrthoFOV(pCVar5,(MethodInfo *)0x0);
      (pCVar1->fields)._targetFOV_5__3 = fVar2;
      (pCVar4->fields)._transitionType = 1;
    }
    pCVar7 = (pCVar4->fields).TransitionBegin;
    (pCVar4->fields)._progress = 0.0;
    if (pCVar7 != (CameraProjectionSwitchBeginHandler *)0x0) {
      (*(pCVar7->fields)._._.invoke_impl)
                ((pCVar7->fields)._._.method_code,(pCVar4->fields)._transitionType,
                 (pCVar7->fields)._._.method);
    }
    fVar2 = _UNK_? / (pCVar4->fields)._durationInSeconds;
    (pCVar1->fields)._invDuration_5__4 = fVar2;
    (pCVar1->fields)._fovSpeed_5__5 = ((pCVar1->fields)._targetFOV_5__3 - (float)this) * fVar2;
    pCVar5 = (pCVar4->fields)._targetCamera;
    if (pCVar5 == (Camera *)0x0) goto code_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar5,(MethodInfo *)0x0);
    ppTVar9 = &(pCVar1->fields).__targetTransform_5__6;
    *ppTVar9 = pTVar8;
    func_?(ppTVar9,pTVar8);
    pCVar5 = (pCVar4->fields)._targetCamera;
    if (pCVar5 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
              (pCVar5,0,(MethodInfo *)0x0);
    pCVar5 = (pCVar4->fields)._targetCamera;
    if (pCVar5 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar5,(float)this,(MethodInfo *)0x0);
    pTVar8 = (pCVar1->fields).__targetTransform_5__6;
    if (pTVar8 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,pTVar8,(MethodInfo *)0x0);
    fVar11 = pVVar10->y;
    fVar12 = pVVar10->z;
    (pCVar4->fields)._camRestorePosition.x = pVVar10->x;
    fVar2 = _UNK_?;
    (pCVar4->fields)._camRestorePosition.y = fVar11;
    (pCVar4->fields)._camRestorePosition.z = fVar12;
  }
  else {
    if ((iVar3 != 1) && (iVar3 != 2)) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (pCVar4 == (CameraPrjSwitchTransition *)0x0) goto code_?;
  }
  pfVar13 = &(pCVar4->fields)._progress;
  if (fVar2 < *pfVar13 || fVar2 == *pfVar13) {
    pCVar7 = (pCVar4->fields).TransitionEnd;
    if (pCVar7 != (CameraProjectionSwitchBeginHandler *)0x0) {
      (*(pCVar7->fields)._._.invoke_impl)
                ((pCVar7->fields)._._.method_code,(pCVar4->fields)._transitionType,
                 (pCVar7->fields)._._.method);
    }
    ppIVar14 = &(pCVar4->fields)._transitionCrtn;
    (pCVar4->fields)._transitionType = 0;
    (pCVar4->fields)._progress = 0.0;
    *ppIVar14 = (IEnumerator *)0x0;
    func_?(ppIVar14,0);
    return 0;
  }
  pCVar5 = (pCVar4->fields)._targetCamera;
  if (pCVar5 == (Camera *)0x0) goto code_?;
  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                     (pCVar5,(MethodInfo *)0x0);
  fVar2 = (pCVar1->fields)._fovSpeed_5__5;
  fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
            (pCVar5,fVar11 * fVar2 + fVar12,(MethodInfo *)0x0);
  pCVar5 = (pCVar4->fields)._targetCamera;
  if (pCVar5 == (Camera *)0x0) goto code_?;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar5,(MethodInfo *)0x0);
  fVar2 = (pCVar4->fields)._camFocusPoint.z;
  pTVar8 = (pCVar1->fields).__targetTransform_5__6;
  if (pTVar8 == (Transform *)0x0) goto code_?;
  uVar15 = ZEXT48(pTVar8);
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                      ((Vector3 *)&stack0xffffffcc,pTVar8,(MethodInfo *)0x0);
  pCVar5 = (pCVar4->fields)._targetCamera;
  uStack_16._0_4_ = pVVar10->x;
  uStack_16._4_4_ = pVVar10->y;
  fVar11 = pVVar10->z;
  fVar12 = (pCVar1->fields)._frustumHeight_5__2;
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    uStack_16 = CONCAT44(TypeInfo__RTG__CameraEx,&UNK_?);
    func_?();
  }
  if (pCVar5 == (Camera *)0x0) goto code_?;
  fVar12 = fVar12 * _UNK_?;
  fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                     (pCVar5,(MethodInfo *)0x0);
  dVar18 = (double)(fVar17 * _UNK_? * _UNK_?);
  func_?();
  fVar12 = fVar12 / (float)dVar18;
  if (this_00 == (Transform *)0x0) goto code_?;
  value.y = (float)(uVar15 >> 0x20) - uStack_16._4_4_ * fVar12;
  value.x = (float)uVar15 - (float)uStack_16 * fVar12;
  value.z = fVar2 - fVar11 * fVar12;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
            (this_00,value,(MethodInfo *)0x0);
  fVar2 = (pCVar4->fields)._progress;
  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar12 * (pCVar1->fields)._invDuration_5__4 + fVar2;
  fVar12 = _UNK_?;
  if (fVar2 <= _UNK_?) {
    fVar12 = fVar2;
  }
  (pCVar4->fields)._progress = fVar12;
  pfVar13 = &(pCVar1->fields)._fovSpeed_5__5;
  if (0.0 < *pfVar13 || *pfVar13 == 0.0) {
code_?:
    if ((pCVar1->fields)._fovSpeed_5__5 <= 0.0) {
code_?:
      pCVar19 = (pCVar4->fields).TransitionUpdate;
      if (pCVar19 != (CameraProjectionSwitchUpdateHandler *)0x0) {
        (*(pCVar19->fields)._._.invoke_impl)
                  ((pCVar19->fields)._._.method_code,(pCVar4->fields)._transitionType,
                   (pCVar19->fields)._._.method);
      }
      ppOVar20 = &(pCVar1->fields).__2__current;
      *ppOVar20 = (Object *)0x0;
      func_?(ppOVar20,0);
      (pCVar1->fields).__1__state = 2;
      return 1;
    }
    pCVar5 = (pCVar4->fields)._targetCamera;
    if (pCVar5 == (Camera *)0x0) goto code_?;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (pCVar5,(MethodInfo *)0x0);
    if (fVar2 < (pCVar1->fields)._targetFOV_5__3) goto code_?;
  }
  else {
    pCVar5 = (pCVar4->fields)._targetCamera;
    if (pCVar5 == (Camera *)0x0) goto code_?;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (pCVar5,(MethodInfo *)0x0);
    if ((pCVar1->fields)._targetFOV_5__3 < fVar2) goto code_?;
  }
  pCVar5 = (pCVar4->fields)._targetCamera;
  (pCVar4->fields)._progress = 1.0;
  if (pCVar5 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar5,(pCVar1->fields)._targetFOV_5__3,(MethodInfo *)0x0);
    if ((pCVar4->fields)._transitionType == 1) {
      pCVar5 = (pCVar4->fields)._targetCamera;
      if (pCVar5 == (Camera *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
                (pCVar5,1,(MethodInfo *)0x0);
    }
    pTVar8 = (pCVar1->fields).__targetTransform_5__6;
    if (pTVar8 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar8,(pCVar4->fields)._camRestorePosition,(MethodInfo *)0x0);
      pCVar5 = (pCVar4->fields)._targetCamera;
      if (pCVar5 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (pCVar5,(pCVar4->fields)._camFieldOfView,(MethodInfo *)0x0);
        pCVar19 = (pCVar4->fields).TransitionUpdate;
        if (pCVar19 != (CameraProjectionSwitchUpdateHandler *)0x0) {
          (*(pCVar19->fields)._._.invoke_impl)();
        }
        (pCVar1->fields).__2__current = (Object *)0x0;
        func_?();
        (pCVar1->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  bVar6 = (*pcVar21)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition+<DoTransition>d__41::
     CameraPrjSwitchTransition_DoTransition_d_41_System_Collections_IEnumerator_Reset
               (CameraPrjSwitchTransition_DoTransition_d_41 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

