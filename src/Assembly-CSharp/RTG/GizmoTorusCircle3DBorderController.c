
/* Single GetTorusCoreRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoTorusCircle3DBorderController::
      GizmoTorusCircle3DBorderController_GetTorusCoreRadius
                (GizmoTorusCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  pGVar2 = (GizmoCircle3DBorder *)0x0;
  pGVar3 = this;
  if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Border, pGVar2 != (GizmoCircle3DBorder *)0x0)) &&
     (method = (MethodInfo *)(pGVar2->fields)._planeSlider,
     (GizmoPlaneSlider3D *)method != (GizmoPlaneSlider3D *)0x0)) {
    pGVar3 = (GizmoTorusCircle3DBorderController *)0xd8;
    lVar4 = 0xd8;
    if ((((GizmoPlaneSlider3D *)method)->fields)._sharedLookAndFeel ==
        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar4 = 0xd0;
    }
    lVar4 = *(longlong *)((longlong)&((GizmoPlaneSlider3D *)method)->klass + lVar4);
    if (lVar4 != 0) {
      uVar5 = 0xd8;
      if ((((GizmoPlaneSlider3D *)method)->fields)._sharedLookAndFeel ==
          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        uVar5 = 0xd0;
      }
      pGVar2 = *(GizmoCircle3DBorder **)
                ((longlong)&((GizmoPlaneSlider3D *)method)->klass + (ulonglong)uVar5);
      pCVar6 = (((this->fields)._._data)->fields).TargetCircle;
      pGVar3 = (GizmoTorusCircle3DBorderController *)0x0;
      if (pCVar6 != (CircleShape3D *)0x0) {
        return (pCVar6->fields)._radius -
               zoomFactor * *(float *)(lVar4 + 0x38) *
               *(float *)((longlong)&(pGVar2->fields)._planeSlider + 4) * _UNK_?;
      }
    }
  }
  FUN_?(pGVar3,pGVar2,method);
  pcVar7 = (code *)swi(3);
  fVar8 = (float)(*pcVar7)();
  return fVar8;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoTorusCircle3DBorderController::
     GizmoTorusCircle3DBorderController_UpdateEpsilons
               (GizmoTorusCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
     (this = (GizmoTorusCircle3DBorderController *)(pGVar1->fields).PlaneSlider,
     (GizmoPlaneSlider3D *)this != (GizmoPlaneSlider3D *)0x0)) {
    lVar2 = 200;
    if ((((GizmoPlaneSlider3D *)this)->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0)
    {
      lVar2 = 0xc0;
    }
    method = *(MethodInfo **)((longlong)&((GizmoPlaneSlider3D *)this)->klass + lVar2);
    if ((method != (MethodInfo *)0x0) &&
       (pTVar3 = (pGVar1->fields).BorderTorus, pTVar3 != (TorusShape3D *)0x0)) {
      (pTVar3->fields)._epsilon._tubeRadiusEps =
           (float)((uint)(zoomFactor * *(float *)&method->klass) & _UNK_?);
      return;
    }
  }
  FUN_?(this,pGVar1,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoTorusCircle3DBorderController::
     GizmoTorusCircle3DBorderController_UpdateHandles
               (GizmoTorusCircle3DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (pGVar2,(pGVar1->fields).BorderCircleIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).BorderCylTorusIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoCircle3DBorder *)0x0)) &&
         (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
        bVar4 = (pGVar3->fields)._isVisible;
        uVar5 = (pGVar1->fields).BorderTorusIndex;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar6 = (pGVar2->fields)._3DShapes;
        if (pLVar6 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
          if ((uint)(pLVar6->fields)._size <= uVar5) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pGVar8 = (pLVar6->fields)._items;
          if (pGVar8 != (GizmoHandleShape3D__Array *)0x0) {
            if ((uint)pGVar8->max_length <= uVar5) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (pGVar8->vector[(int)uVar5] != (GizmoHandleShape3D *)0x0) {
              (pGVar8->vector[(int)uVar5]->fields)._isVisible = bVar4;
              return;
            }
          }
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoTorusCircle3DBorderController::
     GizmoTorusCircle3DBorderController_UpdateTransforms
               (GizmoTorusCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Border, pGVar2 != (GizmoCircle3DBorder *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._planeSlider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) {
    lVar4 = 0xd8;
    if ((pGVar3->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar4 = 0xd0;
    }
    lVar4 = *(longlong *)((longlong)&pGVar3->klass + lVar4);
    if (lVar4 != 0) {
      fVar5 = *(float *)(lVar4 + 0x38);
      pCVar6 = (pGVar1->fields).TargetCircle;
      uVar7 = 0xd8;
      if ((pGVar3->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        uVar7 = 0xd0;
      }
      pTVar8 = (pGVar1->fields).BorderTorus;
      fVar9 = *(float *)(*(longlong *)((longlong)&pGVar3->klass + (ulonglong)uVar7) + 0x14);
      if (pCVar6 != (CircleShape3D *)0x0) {
        fVar10 = (pCVar6->fields)._rotation.x;
        fVar11 = (pCVar6->fields)._rotation.y;
        fVar12 = (pCVar6->fields)._rotation.z;
        fVar13 = (pCVar6->fields)._rotation.w;
        uStack_14 = (ulonglong)_UNK_?;
        uStack_15 = 0;
        uStack_16 = 0;
        uStack_17 = 0;
        pcVar18 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
          uVar19 = func_?(&UNK_?);
          FUN_?(uVar19,0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcRam_? = pcVar18;
        (*pcRam_?)(&uStack_14,&uStack_16);
        fVar20 = (float)uStack_16;
        fVar21 = ((float)uStack_16 * fVar13 + uStack_17._4_4_ * fVar10 + (float)uStack_17 * fVar11)
                 - uStack_16._4_4_ * fVar12;
        fVar22 = uStack_16._4_4_ * fVar11;
        fVar23 = uStack_16._4_4_ * fVar10;
        fVar24 = (uStack_16._4_4_ * fVar13 + uStack_17._4_4_ * fVar11 + (float)uStack_16 * fVar12) -
                 (float)uStack_17 * fVar10;
        uStack_16 = CONCAT44(fVar24,fVar21);
        fVar11 = ((float)uStack_17 * fVar13 + uStack_17._4_4_ * fVar12 + fVar23) - fVar20 * fVar11;
        fVar10 = ((uStack_17._4_4_ * fVar13 - fVar20 * fVar10) - fVar22) - (float)uStack_17 * fVar12;
        uStack_17 = CONCAT44(fVar10,fVar11);
        if (pTVar8 != (TorusShape3D *)0x0) {
          (pTVar8->fields)._rotation.x = fVar21;
          (pTVar8->fields)._rotation.y = fVar24;
          (pTVar8->fields)._rotation.z = fVar11;
          (pTVar8->fields)._rotation.w = fVar10;
          fVar10 = (pCVar6->fields)._center.z;
          fVar11 = (pCVar6->fields)._center.y;
          (pTVar8->fields)._center.x = (pCVar6->fields)._center.x;
          (pTVar8->fields)._center.y = fVar11;
          (pTVar8->fields)._center.z = fVar10;
          fVar10 = GizmoTorusCircle3DBorderController_GetTorusCoreRadius
                             (this,zoomFactor,(MethodInfo *)0x0);
          fVar10 = (float)((uint)fVar10 & _UNK_?);
          (pTVar8->fields)._tubeRadius =
               (float)((uint)(zoomFactor * fVar5 * fVar9 * _UNK_?) & _UNK_?);
          (pTVar8->fields)._coreRadius = fVar10;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

