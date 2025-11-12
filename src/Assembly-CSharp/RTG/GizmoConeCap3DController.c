
/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoConeCap3DController::
      GizmoConeCap3DController_GetSliderAlignedRealLength
                (GizmoConeCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoCap3DControllerData *)0x0) ||
     (pGVar2 = (pGVar1->fields).Cap, pGVar2 == (GizmoCap3D *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  lVar5 = 0xa0;
  lVar6 = 0xa0;
  if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  lVar6 = *(longlong *)((longlong)&pGVar2->klass + lVar6);
  if (lVar6 == 0) {
    FUN_?(pGVar2,0xa0,0);
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar7 = (pGVar2->fields)._sharedLookAndFeel;
  lVar8 = 0xa0;
  if (*(char *)(lVar6 + 0x20) != '\0') {
    if (pGVar7 == (GizmoCap3DLookAndFeel *)0x0) {
      lVar8 = 0x98;
      lVar5 = 0x98;
    }
    return *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar8) + 0x1c) *
           *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar5) + 0x24) * zoomFactor;
  }
  if (pGVar7 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar8 = 0x98;
  }
  lVar6 = 0xa0;
  if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar6) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar8) + 0x24) * _UNK_?;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoConeCap3DController::GizmoConeCap3DController_UpdateHandles
               (GizmoConeCap3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (pGVar2,(pGVar1->fields).PyramidIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).TrPrismIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
         (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (pGVar2,(pGVar1->fields).BoxIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
           (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
          GizmoHandle::GizmoHandle_Set3DShapeVisible
                    (pGVar2,(pGVar1->fields).SphereIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap3D *)0x0)) &&
             (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
            bVar4 = (pGVar3->fields)._._isVisible;
            uVar5 = (pGVar1->fields).ConeIndex;
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar6 = (pGVar2->fields)._3DShapes;
            if (pLVar6 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
              if ((uint)(pLVar6->fields)._size <= uVar5) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoConeCap3DController::GizmoConeCap3DController_UpdateTransforms
               (GizmoConeCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
       (this_00 = (pGVar1->fields).Cap, this_00 != (GizmoCap3D *)0x0)) &&
      (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
     (pCVar3 = (pGVar1->fields).Cone, pCVar3 != (ConeShape3D *)0x0)) {
    fVar4 = (pGVar2->fields)._position3D.y;
    fVar5 = (pGVar2->fields)._position3D.z;
    (pCVar3->fields)._baseCenter.x = (pGVar2->fields)._position3D.x;
    (pCVar3->fields)._baseCenter.y = fVar4;
    (pCVar3->fields)._baseCenter.z = fVar5;
    pGVar1 = (this->fields)._._data;
    if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
        (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
       (pCVar3 = (pGVar1->fields).Cone, pCVar3 != (ConeShape3D *)0x0)) {
      fVar5 = (pGVar2->fields)._rotation3D.y;
      fVar4 = (pGVar2->fields)._rotation3D.z;
      fVar6 = (pGVar2->fields)._rotation3D.w;
      (pCVar3->fields)._rotation.x = (pGVar2->fields)._rotation3D.x;
      (pCVar3->fields)._rotation.y = fVar5;
      (pCVar3->fields)._rotation.z = fVar4;
      (pCVar3->fields)._rotation.w = fVar6;
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
        pCVar3 = (pGVar1->fields).Cone;
        lVar7 = 0xa0;
        lVar8 = 0xa0;
        if ((this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          lVar8 = 0x98;
        }
        lVar8 = *(longlong *)((longlong)&this_00->klass + lVar8);
        if (lVar8 != 0) {
          lVar9 = 0xa0;
          if (*(char *)(lVar8 + 0x20) == '\0') {
            bVar10 = (this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0;
            if (bVar10) {
              lVar9 = 0x98;
            }
            lVar7 = 0xa0;
            if (bVar10) {
              lVar7 = 0x98;
            }
            lVar8 = *(longlong *)((longlong)&this_00->klass + lVar9);
            lVar9 = *(longlong *)((longlong)&this_00->klass + lVar7);
            fVar5 = _UNK_?;
          }
          else {
            if ((this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
              lVar9 = 0x98;
              lVar7 = 0x98;
            }
            lVar9 = *(longlong *)((longlong)&this_00->klass + lVar9);
            lVar8 = *(longlong *)((longlong)&this_00->klass + lVar7);
            fVar5 = zoomFactor;
          }
          if (pCVar3 != (ConeShape3D *)0x0) {
            pGVar1 = (this->fields)._._data;
            (pCVar3->fields)._baseRadius =
                 (float)((uint)(*(float *)(lVar9 + 0x1c) * *(float *)(lVar8 + 0x28) * fVar5) &
                        _UNK_?);
            if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
              pCVar3 = (pGVar1->fields).Cone;
              fVar5 = GizmoCap3D::GizmoCap3D_GetRealConeHeight
                                 (this_00,zoomFactor,(MethodInfo *)0x0);
              if (pCVar3 != (ConeShape3D *)0x0) {
                (pCVar3->fields)._height = (float)((uint)fVar5 & _UNK_?);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

