
/* Void CapSlider3D(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoPyramidCap3DController::GizmoPyramidCap3DController_CapSlider3D
               (GizmoPyramidCap3DController *this,Vector3 *sliderDirection,Vector3 *sliderEndPt,
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
              (pGVar3,1,AxisSign__Enum_Positive,&VStack_4,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
        (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) &&
       (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      if (((pGVar3->fields)._firingChanged3DEvent == 0) &&
         (uVar5 = sliderEndPt->x, uVar6 = sliderEndPt->y, uVar7 = (pGVar3->fields)._position3D.x,
         fVar8 = (pGVar3->fields)._position3D.z - sliderEndPt->z,
         fVar9 = (pGVar3->fields)._position3D.y - (float)uVar6,
         _UNK_? <=
         fVar9 * fVar9 + ((float)uVar7 - (float)uVar5) * ((float)uVar7 - (float)uVar5) +
         fVar8 * fVar8)) {
        fVar9 = sliderEndPt->y;
        fVar8 = sliderEndPt->z;
        (pGVar3->fields)._position3D.x = sliderEndPt->x;
        (pGVar3->fields)._position3D.y = fVar9;
        (pGVar3->fields)._position3D.z = fVar8;
        GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar3,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void CapSlider3DInvert(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoPyramidCap3DController::
     GizmoPyramidCap3DController_CapSlider3DInvert
               (GizmoPyramidCap3DController *this,Vector3 *sliderDirection,Vector3 *sliderEndPt,
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
                (pGVar4,1,AxisSign__Enum_Positive,aVStack_2,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
        pGVar3 = (pGVar1->fields).Cap;
        fVar5 = (float)(*(this->klass->vtable).GetSliderAlignedRealLength_1.methodPtr)
                                 (this,CONCAT44(in_XMM3_Db,zoomFactor),
                                  (this->klass->vtable).GetSliderAlignedRealLength_1.method);
        uVar6 = sliderEndPt->x;
        uVar7 = sliderEndPt->y;
        uVar8 = sliderDirection->x;
        fVar9 = (float)uVar8 * fVar5 + (float)uVar6;
        fVar10 = sliderDirection->y * fVar5 + (float)uVar7;
        fVar5 = sliderDirection->z * fVar5 + sliderEndPt->z;
        if ((pGVar3 != (GizmoCap3D *)0x0) &&
           (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
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

float Assembly-CSharp.dll::RTG::GizmoPyramidCap3DController::
      GizmoPyramidCap3DController_GetSliderAlignedRealLength
                (GizmoPyramidCap3DController *this,float zoomFactor,MethodInfo *method)

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
           *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar5) + 0x2c) * zoomFactor;
  }
  if (pGVar7 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar8 = 0x98;
  }
  lVar6 = 0xa0;
  if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar6) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar8) + 0x2c) * _UNK_?;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoPyramidCap3DController::
     GizmoPyramidCap3DController_UpdateHandles(GizmoPyramidCap3DController *this,MethodInfo *method)

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
                    (pGVar2,(pGVar1->fields).SphereIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap3D *)0x0)) &&
             (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
            bVar4 = (pGVar3->fields)._._isVisible;
            uVar5 = (pGVar1->fields).PyramidIndex;
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

void Assembly-CSharp.dll::RTG::GizmoPyramidCap3DController::
     GizmoPyramidCap3DController_UpdateTransforms
               (GizmoPyramidCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
       (this_00 = (pGVar1->fields).Cap, this_00 != (GizmoCap3D *)0x0)) &&
      (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
     (pPVar3 = (pGVar1->fields).Pyramid, pPVar3 != (PyramidShape3D *)0x0)) {
    fVar4 = (pGVar2->fields)._position3D.y;
    fVar5 = (pGVar2->fields)._position3D.z;
    (pPVar3->fields)._baseCenter.x = (pGVar2->fields)._position3D.x;
    (pPVar3->fields)._baseCenter.y = fVar4;
    (pPVar3->fields)._baseCenter.z = fVar5;
    pGVar1 = (this->fields)._._data;
    if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
        (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
       (pPVar3 = (pGVar1->fields).Pyramid, pPVar3 != (PyramidShape3D *)0x0)) {
      fVar5 = (pGVar2->fields)._rotation3D.y;
      fVar4 = (pGVar2->fields)._rotation3D.z;
      fVar6 = (pGVar2->fields)._rotation3D.w;
      (pPVar3->fields)._rotation.x = (pGVar2->fields)._rotation3D.x;
      (pPVar3->fields)._rotation.y = fVar5;
      (pPVar3->fields)._rotation.z = fVar4;
      uVar7 = _UNK_?;
      fVar5 = _UNK_?;
      (pPVar3->fields)._rotation.w = fVar6;
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
        pPVar3 = (pGVar1->fields).Pyramid;
        lVar8 = 0xa0;
        lVar9 = 0xa0;
        if ((this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          lVar9 = 0x98;
        }
        lVar9 = *(longlong *)((longlong)&this_00->klass + lVar9);
        if (lVar9 != 0) {
          lVar10 = 0xa0;
          if (*(char *)(lVar9 + 0x20) == '\0') {
            bVar11 = (this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0;
            if (bVar11) {
              lVar10 = 0x98;
            }
            lVar10 = *(longlong *)((longlong)&this_00->klass + lVar10);
            lVar9 = 0xa0;
            if (bVar11) {
              lVar9 = 0x98;
            }
            lVar9 = *(longlong *)((longlong)&this_00->klass + lVar9);
            fVar4 = _UNK_?;
          }
          else {
            bVar11 = (this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0;
            if (bVar11) {
              lVar10 = 0x98;
            }
            lVar9 = *(longlong *)((longlong)&this_00->klass + lVar10);
            lVar10 = 0xa0;
            if (bVar11) {
              lVar10 = 0x98;
            }
            lVar10 = *(longlong *)((longlong)&this_00->klass + lVar10);
            fVar4 = zoomFactor;
          }
          if (pPVar3 != (PyramidShape3D *)0x0) {
            (pPVar3->fields)._baseWidth =
                 (float)((uint)(*(float *)(lVar10 + 0x30) * *(float *)(lVar9 + 0x1c) * fVar4) &
                        _UNK_?);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
              pPVar3 = (pGVar1->fields).Pyramid;
              lVar9 = 0xa0;
              if ((this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                lVar9 = 0x98;
              }
              lVar9 = *(longlong *)((longlong)&this_00->klass + lVar9);
              if (lVar9 != 0) {
                lVar10 = 0xa0;
                if (*(char *)(lVar9 + 0x20) == '\0') {
                  if ((this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                    lVar10 = 0x98;
                    lVar8 = 0x98;
                  }
                  lVar9 = *(longlong *)((longlong)&this_00->klass + lVar10);
                  lVar10 = *(longlong *)((longlong)&this_00->klass + lVar8);
                }
                else {
                  if ((this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                    lVar10 = 0x98;
                    lVar8 = 0x98;
                  }
                  lVar10 = *(longlong *)((longlong)&this_00->klass + lVar10);
                  lVar9 = *(longlong *)((longlong)&this_00->klass + lVar8);
                  fVar5 = zoomFactor;
                }
                if (pPVar3 != (PyramidShape3D *)0x0) {
                  pGVar1 = (this->fields)._._data;
                  (pPVar3->fields)._baseDepth =
                       (float)((uint)(*(float *)(lVar10 + 0x1c) * *(float *)(lVar9 + 0x34) * fVar5)
                              & uVar7);
                  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                    pPVar3 = (pGVar1->fields).Pyramid;
                    fVar5 = GizmoCap3D::GizmoCap3D_GetRealPyramidHeight
                                       (this_00,zoomFactor,(MethodInfo *)0x0);
                    if (pPVar3 != (PyramidShape3D *)0x0) {
                      (pPVar3->fields)._height = (float)((uint)fVar5 & _UNK_?);
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
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

