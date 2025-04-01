
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
    if ((pCVar4->fields)._transitionType == 0) {
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
    else if ((pCVar4->fields)._transitionType == 1) {
      pCVar5 = (pCVar4->fields)._targetCamera;
      if (pCVar5 == (Camera *)0x0) goto code_?;
      this = (CameraPrjSwitchTransition_DoTransition_d_41 *)
             UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (pCVar5,(MethodInfo *)0x0);
code_?:
      (pCVar1->fields)._targetFOV_5__3 = (pCVar4->fields)._camFieldOfView;
      (pCVar4->fields)._transitionType = 2;
    }
    else if ((pCVar4->fields)._transitionType == 2) {
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
    (pCVar4->fields)._progress = 0.0;
    if ((pCVar4->fields).TransitionBegin != (CameraProjectionSwitchBeginHandler *)0x0) {
      pCVar7 = (pCVar4->fields).TransitionBegin;
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
    (pCVar1->fields).__targetTransform_5__6 = pTVar8;
    func_?(&(pCVar1->fields).__targetTransform_5__6,pTVar8);
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
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffdc,pTVar8,(MethodInfo *)0x0);
    fVar10 = pVVar9->y;
    fVar11 = pVVar9->z;
    (pCVar4->fields)._camRestorePosition.x = pVVar9->x;
    fVar2 = _UNK_?;
    (pCVar4->fields)._camRestorePosition.y = fVar10;
    (pCVar4->fields)._camRestorePosition.z = fVar11;
  }
  else {
    if ((iVar3 != 1) && (iVar3 != 2)) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (pCVar4 == (CameraPrjSwitchTransition *)0x0) goto code_?;
  }
  pfVar12 = &(pCVar4->fields)._progress;
  if (fVar2 < *pfVar12 || fVar2 == *pfVar12) {
    if ((pCVar4->fields).TransitionEnd != (CameraProjectionSwitchBeginHandler *)0x0) {
      pCVar7 = (pCVar4->fields).TransitionEnd;
      (*(pCVar7->fields)._._.invoke_impl)
                ((pCVar7->fields)._._.method_code,(pCVar4->fields)._transitionType,
                 (pCVar7->fields)._._.method);
    }
    (pCVar4->fields)._transitionType = 0;
    (pCVar4->fields)._progress = 0.0;
    (pCVar4->fields)._transitionCrtn = (IEnumerator *)0x0;
    func_?(&(pCVar4->fields)._transitionCrtn,0);
    return 0;
  }
  pCVar5 = (pCVar4->fields)._targetCamera;
  if (pCVar5 == (Camera *)0x0) goto code_?;
  fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                     (pCVar5,(MethodInfo *)0x0);
  fVar2 = (pCVar1->fields)._fovSpeed_5__5;
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
            (pCVar5,fVar10 * fVar2 + fVar11,(MethodInfo *)0x0);
  pCVar5 = (pCVar4->fields)._targetCamera;
  if (pCVar5 == (Camera *)0x0) goto code_?;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar5,(MethodInfo *)0x0);
  fVar2 = (pCVar4->fields)._camFocusPoint.z;
  pTVar8 = (pCVar1->fields).__targetTransform_5__6;
  if (pTVar8 == (Transform *)0x0) goto code_?;
  uVar13 = ZEXT48(pTVar8);
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                      ((Vector3 *)&stack0xffffffd0,pTVar8,(MethodInfo *)0x0);
  pCVar5 = (pCVar4->fields)._targetCamera;
  uStack_14._0_4_ = pVVar9->x;
  uStack_14._4_4_ = pVVar9->y;
  fVar10 = pVVar9->z;
  fVar11 = (pCVar1->fields)._frustumHeight_5__2;
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    uStack_14 = CONCAT44(TypeInfo__RTG__CameraEx,&UNK_?);
    func_?();
  }
  if (pCVar5 == (Camera *)0x0) goto code_?;
  fVar11 = fVar11 * _UNK_?;
  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                     (pCVar5,(MethodInfo *)0x0);
  dVar16 = (double)(fVar15 * _UNK_? * _UNK_?);
  func_?();
  fVar11 = fVar11 / (float)dVar16;
  if (this_00 == (Transform *)0x0) goto code_?;
  value.y = (float)(uVar13 >> 0x20) - uStack_14._4_4_ * fVar11;
  value.x = (float)uVar13 - (float)uStack_14 * fVar11;
  value.z = fVar2 - fVar10 * fVar11;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
            (this_00,value,(MethodInfo *)0x0);
  fVar2 = (pCVar4->fields)._progress;
  fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar11 * (pCVar1->fields)._invDuration_5__4 + fVar2;
  fVar11 = _UNK_?;
  if (fVar2 <= _UNK_?) {
    fVar11 = fVar2;
  }
  (pCVar4->fields)._progress = fVar11;
  pfVar12 = &(pCVar1->fields)._fovSpeed_5__5;
  if (0.0 < *pfVar12 || *pfVar12 == 0.0) {
code_?:
    if ((pCVar1->fields)._fovSpeed_5__5 <= 0.0) {
code_?:
      if ((pCVar4->fields).TransitionUpdate != (CameraProjectionSwitchUpdateHandler *)0x0) {
        pCVar17 = (pCVar4->fields).TransitionUpdate;
        (*(pCVar17->fields)._._.invoke_impl)
                  ((pCVar17->fields)._._.method_code,(pCVar4->fields)._transitionType,
                   (pCVar17->fields)._._.method);
      }
      (pCVar1->fields).__2__current = (Object *)0x0;
      func_?(&(pCVar1->fields).__2__current,0);
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
        if ((pCVar4->fields).TransitionUpdate != (CameraProjectionSwitchUpdateHandler *)0x0) {
          (*(((pCVar4->fields).TransitionUpdate)->fields)._._.invoke_impl)();
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
  pcVar18 = (code *)swi(3);
  bVar6 = (*pcVar18)();
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

