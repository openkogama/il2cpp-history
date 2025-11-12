
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinQuad3DBorderController::
     GizmoThinQuad3DBorderController_UpdateEpsilons
               (GizmoThinQuad3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
     (this = (GizmoThinQuad3DBorderController *)(pGVar1->fields).PlaneSlider,
     (GizmoPlaneSlider3D *)this != (GizmoPlaneSlider3D *)0x0)) {
    lVar2 = 200;
    if ((((GizmoPlaneSlider3D *)this)->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0)
    {
      lVar2 = 0xc0;
    }
    method = *(MethodInfo **)((longlong)&((GizmoPlaneSlider3D *)this)->klass + lVar2);
    if ((method != (MethodInfo *)0x0) &&
       (pQVar3 = (pGVar1->fields).BorderQuad, pQVar3 != (QuadShape3D *)0x0)) {
      fVar4 = (float)((uint)(zoomFactor * *(float *)&method->name) & _UNK_?);
      (pQVar3->fields)._epsilon._wireEps = fVar4;
      (pQVar3->fields)._epsilon._extrudeEps = (float)((uint)fVar4 & _UNK_?);
      return;
    }
  }
  FUN_?(this,pGVar1,method);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinQuad3DBorderController::
     GizmoThinQuad3DBorderController_UpdateHandles
               (GizmoThinQuad3DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Border, pGVar2 != (GizmoQuad3DBorder *)0x0)) &&
     (this_00 = (pGVar1->fields).TargetHandle, this_00 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (this_00,(pGVar1->fields).BorderQuadIndex,(pGVar2->fields)._isVisible,
               (MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (this_00,(pGVar1->fields).TopBoxIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).RightBoxIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
          GizmoHandle::GizmoHandle_Set3DShapeVisible
                    (this_00,(pGVar1->fields).BottomBoxIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
            GizmoHandle::GizmoHandle_Set3DShapeVisible
                      (this_00,(pGVar1->fields).LeftBoxIndex,0,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
              GizmoHandle::GizmoHandle_Set3DShapeVisible
                        (this_00,(pGVar1->fields).TopLeftBoxIndex,0,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._._data;
              if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
                GizmoHandle::GizmoHandle_Set3DShapeVisible
                          (this_00,(pGVar1->fields).TopRightBoxIndex,0,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
                  GizmoHandle::GizmoHandle_Set3DShapeVisible
                            (this_00,(pGVar1->fields).BottomRightBoxIndex,0,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._data;
                  if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
                    uVar3 = (pGVar1->fields).BottomLeftBoxIndex;
                    if (cRam_? == '\0') {
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pLVar4 = (this_00->fields)._3DShapes;
                    if (pLVar4 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
                      if ((uint)(pLVar4->fields)._size <= uVar3) {
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      pGVar6 = (pLVar4->fields)._items;
                      if (pGVar6 != (GizmoHandleShape3D__Array *)0x0) {
                        if ((uint)pGVar6->max_length <= uVar3) {
                          FUN_?();
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        if (pGVar6->vector[(int)uVar3] != (GizmoHandleShape3D *)0x0) {
                          (pGVar6->vector[(int)uVar3]->fields)._isVisible = 0;
                          return;
                        }
                      }
                    }
                    FUN_?();
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinQuad3DBorderController::
     GizmoThinQuad3DBorderController_UpdateTransforms
               (GizmoThinQuad3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
      (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 != (QuadShape3D *)0x0)) &&
     (pQVar3 = (pGVar1->fields).BorderQuad, pQVar3 != (QuadShape3D *)0x0)) {
    fVar4 = (pQVar2->fields)._center.y;
    fVar5 = (pQVar2->fields)._center.z;
    (pQVar3->fields)._center.x = (pQVar2->fields)._center.x;
    (pQVar3->fields)._center.y = fVar4;
    (pQVar3->fields)._center.z = fVar5;
    fVar5 = (pQVar2->fields)._rotation.y;
    fVar4 = (pQVar2->fields)._rotation.z;
    fVar6 = (pQVar2->fields)._rotation.w;
    (pQVar3->fields)._rotation.x = (pQVar2->fields)._rotation.x;
    (pQVar3->fields)._rotation.y = fVar5;
    (pQVar3->fields)._rotation.z = fVar4;
    (pQVar3->fields)._rotation.w = fVar6;
    fVar5 = (float)((uint)(pQVar2->fields)._size.y & _UNK_?);
    (pQVar3->fields)._size.x = (float)((uint)(pQVar2->fields)._size.x & _UNK_?);
    (pQVar3->fields)._size.y = fVar5;
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

