
/* Void CapSlider3D(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::GizmoSphereCap3DController_CapSlider3D
               (GizmoSphereCap3DController *this,Vector3 *sliderDirection,Vector3 *sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    VStack_4.x = sliderDirection->x;
    VStack_4.y = sliderDirection->y;
    VStack_4.z = sliderDirection->z;
    GizmoTransform::GizmoTransform_AlignAxis3D
              (pGVar3,0,AxisSign__Enum_Positive,&VStack_4,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
      pSVar5 = (pGVar1->fields).Sphere;
      pGVar2 = (pGVar1->fields).Cap;
      if (pSVar5 != (SphereShape3D *)0x0) {
        fVar6 = (pSVar5->fields)._radius;
        uVar7 = sliderDirection->x;
        uVar8 = sliderDirection->y;
        uVar9 = sliderEndPt->x;
        uVar10 = sliderEndPt->y;
        fVar11 = fVar6 * (float)uVar7 + (float)uVar9;
        fVar12 = fVar6 * sliderDirection->z + sliderEndPt->z;
        fVar6 = fVar6 * (float)uVar8 + (float)uVar10;
        if ((pGVar2 != (GizmoCap3D *)0x0) &&
           (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
          if (((pGVar3->fields)._firingChanged3DEvent == 0) &&
             (uVar13 = (pGVar3->fields)._position3D.x, fVar14 = (float)uVar13 - fVar11,
             fVar15 = (pGVar3->fields)._position3D.y - fVar6,
             fVar16 = (pGVar3->fields)._position3D.z - fVar12,
             _UNK_? <= fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16)) {
            (pGVar3->fields)._position3D.x = fVar11;
            (pGVar3->fields)._position3D.y = fVar6;
            (pGVar3->fields)._position3D.z = fVar12;
            GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar3,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void CapSlider3DInvert(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::
     GizmoSphereCap3DController_CapSlider3DInvert
               (GizmoSphereCap3DController *this,Vector3 *sliderDirection,Vector3 *sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    aVStack_2[0].x = sliderDirection->x;
    aVStack_2[0].y = sliderDirection->y;
    pGVar3 = (pGVar1->fields).Cap;
    if ((pGVar3 != (GizmoCap3D *)0x0) &&
       (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      aVStack_2[0].y = (float)((uint)aVStack_2[0].y ^ _UNK_?);
      aVStack_2[0].x = (float)((uint)aVStack_2[0].x ^ _UNK_?);
      aVStack_2[0].z = (float)((uint)sliderDirection->z ^ _UNK_?);
      GizmoTransform::GizmoTransform_AlignAxis3D
                (pGVar4,0,AxisSign__Enum_Positive,aVStack_2,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
         (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap3D *)0x0)) {
        fVar5 = GizmoCap3D::GizmoCap3D_GetRealSphereRadius(pGVar3,zoomFactor,(MethodInfo *)0x0);
        uVar6 = sliderEndPt->x;
        uVar7 = sliderEndPt->y;
        uVar8 = sliderDirection->x;
        fVar9 = (float)uVar8 * fVar5 + (float)uVar6;
        fVar10 = sliderDirection->y * fVar5 + (float)uVar7;
        fVar5 = sliderDirection->z * fVar5 + sliderEndPt->z;
        pGVar4 = (pGVar3->fields)._transform;
        if (pGVar4 != (GizmoTransform *)0x0) {
          if (((pGVar4->fields)._firingChanged3DEvent == 0) &&
             (uVar11 = (pGVar4->fields)._position3D.x, fVar12 = (float)uVar11 - fVar9,
             fVar13 = (pGVar4->fields)._position3D.y - fVar10,
             fVar14 = (pGVar4->fields)._position3D.z - fVar5,
             _UNK_? <= fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14)) {
            (pGVar4->fields)._position3D.x = fVar9;
            (pGVar4->fields)._position3D.y = fVar10;
            (pGVar4->fields)._position3D.z = fVar5;
            GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar4,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::
      GizmoSphereCap3DController_GetSliderAlignedRealLength
                (GizmoSphereCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).Cap, this_00 != (GizmoCap3D *)0x0)) {
    fVar2 = GizmoCap3D::GizmoCap3D_GetRealSphereRadius(this_00,zoomFactor,(MethodInfo *)0x0);
    return fVar2 + fVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar2 = (float)(*pcVar3)();
  return fVar2;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::GizmoSphereCap3DController_UpdateHandles
               (GizmoSphereCap3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (pGVar2,(pGVar1->fields).ConeIndex,0,(MethodInfo *)0x0);
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
                    (pGVar2,(pGVar1->fields).PyramidIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap3D *)0x0)) &&
             (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
            bVar4 = (pGVar3->fields)._._isVisible;
            uVar5 = (pGVar1->fields).SphereIndex;
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

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::
     GizmoSphereCap3DController_UpdateTransforms
               (GizmoSphereCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
       (this_00 = (pGVar1->fields).Cap, this_00 != (GizmoCap3D *)0x0)) &&
      (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
     (pSVar3 = (pGVar1->fields).Sphere, pSVar3 != (SphereShape3D *)0x0)) {
    fVar4 = (pGVar2->fields)._position3D.y;
    fVar5 = (pGVar2->fields)._position3D.z;
    (pSVar3->fields)._center.x = (pGVar2->fields)._position3D.x;
    (pSVar3->fields)._center.y = fVar4;
    (pSVar3->fields)._center.z = fVar5;
    pGVar1 = (this->fields)._._data;
    if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
        (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
       (pSVar3 = (pGVar1->fields).Sphere, pSVar3 != (SphereShape3D *)0x0)) {
      fVar5 = (pGVar2->fields)._rotation3D.y;
      fVar4 = (pGVar2->fields)._rotation3D.z;
      fVar6 = (pGVar2->fields)._rotation3D.w;
      (pSVar3->fields)._rotation.x = (pGVar2->fields)._rotation3D.x;
      (pSVar3->fields)._rotation.y = fVar5;
      (pSVar3->fields)._rotation.z = fVar4;
      (pSVar3->fields)._rotation.w = fVar6;
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
        pSVar3 = (pGVar1->fields).Sphere;
        fVar5 = GizmoCap3D::GizmoCap3D_GetRealSphereRadius(this_00,zoomFactor,(MethodInfo *)0x0);
        if (pSVar3 != (SphereShape3D *)0x0) {
          (pSVar3->fields)._radius = (float)((uint)fVar5 & _UNK_?);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

