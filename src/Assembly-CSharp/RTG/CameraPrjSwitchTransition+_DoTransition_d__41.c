
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition+<DoTransition>d__41::CameraPrjSwitchTransition_DoTransition_d_41_MoveNext(CameraPrjSwitchTransition_DoTransition_d_41 *this,MethodInfo *method)

{
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields).__1__state;
  pCVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if ((pCVar3 == (CameraPrjSwitchTransition *)0x0) || (pCVar4 = (pCVar3->fields)._targetCamera, pCVar4 == (Camera *)0x0)) goto code_?;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize(pCVar4,(MethodInfo *)0x0);
    (this->fields)._targetFOV_5__3 = 0.0;
    this = (CameraPrjSwitchTransition_DoTransition_d_41 *)0x0;
    (pCVar1->fields)._frustumHeight_5__2 = fVar5 + fVar5;
    iVar2 = (pCVar3->fields)._transitionType;
    if (iVar2 == 0) {
      pCVar4 = (pCVar3->fields)._targetCamera;
      if (pCVar4 == (Camera *)0x0) goto code_?;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic(pCVar4,(MethodInfo *)0x0);
      pCVar4 = (pCVar3->fields)._targetCamera;
      if (bVar6 != 0) {
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this = (CameraPrjSwitchTransition_DoTransition_d_41 *)CameraEx::CameraEx_GetOrthoFOV(pCVar4,(MethodInfo *)0x0);
        goto code_?;
      }
      this = (CameraPrjSwitchTransition_DoTransition_d_41 *)(pCVar3->fields)._camFieldOfView;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar5 = CameraEx::CameraEx_GetOrthoFOV(pCVar4,(MethodInfo *)0x0);
      (pCVar1->fields)._targetFOV_5__3 = fVar5;
      (pCVar3->fields)._transitionType = 1;
    }
    else if (iVar2 == 1) {
      pCVar4 = (pCVar3->fields)._targetCamera;
      if (pCVar4 == (Camera *)0x0) goto code_?;
      this = (CameraPrjSwitchTransition_DoTransition_d_41 *)UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar4,(MethodInfo *)0x0);
code_?:
      (pCVar1->fields)._targetFOV_5__3 = (pCVar3->fields)._camFieldOfView;
      (pCVar3->fields)._transitionType = 2;
    }
    else if (iVar2 == 2) {
      pCVar4 = (pCVar3->fields)._targetCamera;
      if (pCVar4 == (Camera *)0x0) goto code_?;
      this = (CameraPrjSwitchTransition_DoTransition_d_41 *)UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar4,(MethodInfo *)0x0);
      pCVar4 = (pCVar3->fields)._targetCamera;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar5 = CameraEx::CameraEx_GetOrthoFOV(pCVar4,(MethodInfo *)0x0);
      (pCVar1->fields)._targetFOV_5__3 = fVar5;
      (pCVar3->fields)._transitionType = 1;
    }
    pCVar7 = (pCVar3->fields).TransitionBegin;
    (pCVar3->fields)._progress = 0.0;
    if (pCVar7 != (CameraProjectionSwitchBeginHandler *)0x0) {
      (*(pCVar7->fields)._._.invoke_impl)((pCVar7->fields)._._.method_code,(pCVar3->fields)._transitionType,(pCVar7->fields)._._.method);
    }
    fVar5 = 1.0 / (pCVar3->fields)._durationInSeconds;
    (pCVar1->fields)._invDuration_5__4 = fVar5;
    (pCVar1->fields)._fovSpeed_5__5 = ((pCVar1->fields)._targetFOV_5__3 - (float)this) * fVar5;
    pCVar4 = (pCVar3->fields)._targetCamera;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pCVar4,(MethodInfo *)0x0);
    ppTVar9 = &(pCVar1->fields).__targetTransform_5__6;
    *ppTVar9 = pTVar8;
    func_?(ppTVar9,pTVar8);
    pCVar4 = (pCVar3->fields)._targetCamera;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic(pCVar4,0,(MethodInfo *)0x0);
    pCVar4 = (pCVar3->fields)._targetCamera;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar4,(float)this,(MethodInfo *)0x0);
    pTVar8 = (pCVar1->fields).__targetTransform_5__6;
    if (pTVar8 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd8,pTVar8,(MethodInfo *)0x0);
    fVar11 = pVVar10->y;
    fVar5 = pVVar10->z;
    (pCVar3->fields)._camRestorePosition.x = pVVar10->x;
    (pCVar3->fields)._camRestorePosition.y = fVar11;
    (pCVar3->fields)._camRestorePosition.z = fVar5;
  }
  else {
    if ((iVar2 != 1) && (iVar2 != 2)) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (pCVar3 == (CameraPrjSwitchTransition *)0x0) goto code_?;
  }
  pfVar12 = &(pCVar3->fields)._progress;
  if (1.0 < *pfVar12 || *pfVar12 == 1.0) {
    pCVar7 = (pCVar3->fields).TransitionEnd;
    if (pCVar7 != (CameraProjectionSwitchBeginHandler *)0x0) {
      (*(pCVar7->fields)._._.invoke_impl)((pCVar7->fields)._._.method_code,(pCVar3->fields)._transitionType,(pCVar7->fields)._._.method);
    }
    ppIVar13 = &(pCVar3->fields)._transitionCrtn;
    (pCVar3->fields)._transitionType = 0;
    (pCVar3->fields)._progress = 0.0;
    *ppIVar13 = (IEnumerator *)0x0;
    func_?(ppIVar13,0);
    return 0;
  }
  pCVar4 = (pCVar3->fields)._targetCamera;
  if (pCVar4 == (Camera *)0x0) goto code_?;
  fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar4,(MethodInfo *)0x0);
  fVar5 = (pCVar1->fields)._fovSpeed_5__5;
  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar4,fVar14 * fVar5 + fVar11,(MethodInfo *)0x0);
  pCVar4 = (pCVar3->fields)._targetCamera;
  if (pCVar4 == (Camera *)0x0) goto code_?;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pCVar4,(MethodInfo *)0x0);
  fVar5 = (pCVar3->fields)._camFocusPoint.z;
  pTVar8 = (pCVar1->fields).__targetTransform_5__6;
  if (pTVar8 == (Transform *)0x0) goto code_?;
  uVar15 = ZEXT48(pTVar8);
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward((Vector3 *)&stack0xffffffcc,pTVar8,(MethodInfo *)0x0);
  pCVar4 = (pCVar3->fields)._targetCamera;
  uStack_16._0_4_ = pVVar10->x;
  uStack_16._4_4_ = pVVar10->y;
  fVar14 = pVVar10->z;
  fVar11 = (pCVar1->fields)._frustumHeight_5__2;
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    uStack_16 = CONCAT44(TypeInfo__RTG__CameraEx,&UNK_?);
    func_?();
  }
  if (pCVar4 == (Camera *)0x0) goto code_?;
  fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar4,(MethodInfo *)0x0);
  dVar18 = (double)(fVar17 * 0.5 * 0.017453292);
  func_?();
  fVar11 = (fVar11 * 0.5) / (float)dVar18;
  if (this_00 == (Transform *)0x0) goto code_?;
  value.y = (float)(uVar15 >> 0x20) - uStack_16._4_4_ * fVar11;
  value.x = (float)uVar15 - (float)uStack_16 * fVar11;
  value.z = fVar5 - fVar14 * fVar11;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(this_00,value,(MethodInfo *)0x0);
  fVar5 = (pCVar3->fields)._progress;
  fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar5 = fVar11 * (pCVar1->fields)._invDuration_5__4 + fVar5;
  fVar11 = 1.0;
  if (fVar5 <= 1.0) {
    fVar11 = fVar5;
  }
  (pCVar3->fields)._progress = fVar11;
  pfVar12 = &(pCVar1->fields)._fovSpeed_5__5;
  if (0.0 < *pfVar12 || *pfVar12 == 0.0) {
code_?:
    if ((pCVar1->fields)._fovSpeed_5__5 <= 0.0) {
code_?:
      pCVar19 = (pCVar3->fields).TransitionUpdate;
      if (pCVar19 != (CameraProjectionSwitchUpdateHandler *)0x0) {
        (*(pCVar19->fields)._._.invoke_impl)((pCVar19->fields)._._.method_code,(pCVar3->fields)._transitionType,(pCVar19->fields)._._.method);
      }
      ppOVar20 = &(pCVar1->fields).__2__current;
      *ppOVar20 = (Object *)0x0;
      func_?(ppOVar20,0);
      (pCVar1->fields).__1__state = 2;
      return 1;
    }
    pCVar4 = (pCVar3->fields)._targetCamera;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar4,(MethodInfo *)0x0);
    if (fVar5 < (pCVar1->fields)._targetFOV_5__3) goto code_?;
  }
  else {
    pCVar4 = (pCVar3->fields)._targetCamera;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar4,(MethodInfo *)0x0);
    if ((pCVar1->fields)._targetFOV_5__3 < fVar5) goto code_?;
  }
  pCVar4 = (pCVar3->fields)._targetCamera;
  (pCVar3->fields)._progress = 1.0;
  if (pCVar4 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar4,(pCVar1->fields)._targetFOV_5__3,(MethodInfo *)0x0);
    if ((pCVar3->fields)._transitionType == 1) {
      pCVar4 = (pCVar3->fields)._targetCamera;
      if (pCVar4 == (Camera *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic(pCVar4,1,(MethodInfo *)0x0);
    }
    pTVar8 = (pCVar1->fields).__targetTransform_5__6;
    if (pTVar8 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar8,(pCVar3->fields)._camRestorePosition,(MethodInfo *)0x0);
      pCVar4 = (pCVar3->fields)._targetCamera;
      if (pCVar4 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar4,(pCVar3->fields)._camFieldOfView,(MethodInfo *)0x0);
        pCVar19 = (pCVar3->fields).TransitionUpdate;
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

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition+<DoTransition>d__41::CameraPrjSwitchTransition_DoTransition_d_41_System_Collections_IEnumerator_Reset(CameraPrjSwitchTransition_DoTransition_d_41 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

