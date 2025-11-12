
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinCircle3DBorderController::GizmoThinCircle3DBorderController_UpdateEpsilons(GizmoThinCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) && (pGVar2 = (pGVar1->fields).PlaneSlider, pGVar2 != (GizmoPlaneSlider3D *)0x0)) {
    lVar3 = 200;
    if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
      lVar3 = 0xc0;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if ((lVar3 != 0) && (pCVar4 = (pGVar1->fields).BorderCircle, pCVar4 != (CircleShape3D *)0x0)) {
      (pCVar4->fields)._epsilon._wireEps = ABS(zoomFactor * *(float *)(lVar3 + 0x18));
      if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) && (pCVar4 != (CircleShape3D *)0x0)) {
        (pCVar4->fields)._epsilon._extrudeEps = ABS((pCVar4->fields)._epsilon._wireEps);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinCircle3DBorderController::GizmoThinCircle3DBorderController_UpdateHandles(GizmoThinCircle3DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) && (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible(pGVar2,(pGVar1->fields).BorderTorusIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) && (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible(pGVar2,(pGVar1->fields).BorderCylTorusIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) && (pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoCircle3DBorder *)0x0)) && (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
        bVar4 = (pGVar3->fields)._isVisible;
        uVar5 = (pGVar1->fields).BorderCircleIndex;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar6 = (pGVar2->fields)._3DShapes;
        if (pLVar6 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
          if ((uint)(pLVar6->fields)._size <= uVar5) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoThinCircle3DBorderController::GizmoThinCircle3DBorderController_UpdateTransforms(GizmoThinCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) && (pCVar2 = (pGVar1->fields).TargetCircle, pCVar2 != (CircleShape3D *)0x0)) && (pCVar3 = (pGVar1->fields).BorderCircle, pCVar3 != (CircleShape3D *)0x0)) {
    fVar4 = (pCVar2->fields)._rotation.y;
    fVar5 = (pCVar2->fields)._rotation.z;
    fVar6 = (pCVar2->fields)._rotation.w;
    (pCVar3->fields)._rotation.x = (pCVar2->fields)._rotation.x;
    (pCVar3->fields)._rotation.y = fVar4;
    (pCVar3->fields)._rotation.z = fVar5;
    (pCVar3->fields)._rotation.w = fVar6;
    fVar4 = (pCVar2->fields)._center.z;
    fVar5 = (pCVar2->fields)._center.y;
    (pCVar3->fields)._center.x = (pCVar2->fields)._center.x;
    (pCVar3->fields)._center.y = fVar5;
    (pCVar3->fields)._center.z = fVar4;
    (pCVar3->fields)._radius = ABS((pCVar2->fields)._radius);
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

