
/* Void CapSlider3D(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxCap3DController::GizmoBoxCap3DController_CapSlider3D
               (GizmoBoxCap3DController *this,Vector3 *sliderDirection,Vector3 *sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    aVStack_4[0].x = sliderDirection->x;
    aVStack_4[0].y = sliderDirection->y;
    aVStack_4[0].z = sliderDirection->z;
    GizmoTransform::GizmoTransform_AlignAxis3D
              (pGVar3,0,AxisSign__Enum_Positive,aVStack_4,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
      pGVar2 = (pGVar1->fields).Cap;
      pBVar5 = (pGVar1->fields).Box;
      if (pBVar5 != (BoxShape3D *)0x0) {
        uVar6 = (pBVar5->fields)._size.x;
        uVar7 = sliderEndPt->x;
        uVar8 = sliderEndPt->y;
        uVar9 = sliderDirection->x;
        fVar10 = (float)uVar9 * (float)uVar6 * _UNK_? + (float)uVar7;
        fVar11 = sliderDirection->y * (float)uVar6 * _UNK_? + (float)uVar8;
        fVar12 = sliderDirection->z * (float)uVar6 * _UNK_? + sliderEndPt->z;
        if ((pGVar2 != (GizmoCap3D *)0x0) &&
           (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
          if (((pGVar3->fields)._firingChanged3DEvent == 0) &&
             (uVar13 = (pGVar3->fields)._position3D.x, fVar14 = (float)uVar13 - fVar10,
             fVar15 = (pGVar3->fields)._position3D.y - fVar11,
             fVar16 = (pGVar3->fields)._position3D.z - fVar12,
             _UNK_? <= fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16)) {
            (pGVar3->fields)._position3D.x = fVar10;
            (pGVar3->fields)._position3D.y = fVar11;
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

void Assembly-CSharp.dll::RTG::GizmoBoxCap3DController::GizmoBoxCap3DController_CapSlider3DInvert
               (GizmoBoxCap3DController *this,Vector3 *sliderDirection,Vector3 *sliderEndPt,
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
      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
        pGVar3 = (pGVar1->fields).Cap;
        fVar5 = (float)(*(this->klass->vtable).GetSliderAlignedRealLength_1.methodPtr)
                                 (this,CONCAT44(in_XMM3_Db,zoomFactor),
                                  (this->klass->vtable).GetSliderAlignedRealLength_1.method);
        uVar6 = sliderEndPt->x;
        uVar7 = sliderEndPt->y;
        uVar8 = sliderDirection->x;
        fVar9 = (float)uVar8 * fVar5 * _UNK_? + (float)uVar6;
        fVar10 = sliderDirection->y * fVar5 * _UNK_? + (float)uVar7;
        fVar5 = sliderDirection->z * fVar5 * _UNK_? + sliderEndPt->z;
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

float Assembly-CSharp.dll::RTG::GizmoBoxCap3DController::
      GizmoBoxCap3DController_GetSliderAlignedRealLength
                (GizmoBoxCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  pGVar2 = (GizmoCap3D *)0x0;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) {
    lVar3 = 0xa0;
    lVar4 = 0xa0;
    if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar4 = 0x98;
    }
    lVar4 = *(longlong *)((longlong)&pGVar2->klass + lVar4);
    method = (MethodInfo *)0x0;
    if (lVar4 != 0) {
      lVar5 = 0xa0;
      if (*(char *)(lVar4 + 0x20) != '\0') {
        if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          lVar5 = 0x98;
          lVar3 = 0x98;
        }
        return *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar5) + 0x1c) *
               *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar3) + 0x38) * zoomFactor;
      }
      bVar6 = (pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0;
      if (bVar6) {
        lVar5 = 0x98;
      }
      lVar4 = 0xa0;
      if (bVar6) {
        lVar4 = 0x98;
      }
      return *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar4) + 0x1c) *
             *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar5) + 0x38) * _UNK_?;
    }
  }
  FUN_?(pGVar2,zoomFactor,method);
  pcVar7 = (code *)swi(3);
  fVar8 = (float)(*pcVar7)();
  return fVar8;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoBoxCap3DController::GizmoBoxCap3DController_UpdateHandles
               (GizmoBoxCap3DController *this,MethodInfo *method)

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
                  (pGVar2,(pGVar1->fields).ConeIndex,0,(MethodInfo *)0x0);
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
            uVar5 = (pGVar1->fields).BoxIndex;
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

void Assembly-CSharp.dll::RTG::GizmoBoxCap3DController::GizmoBoxCap3DController_UpdateTransforms
               (GizmoBoxCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) &&
      (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) &&
     (pBVar4 = (pGVar1->fields).Box, pBVar4 != (BoxShape3D *)0x0)) {
    fVar5 = (pGVar3->fields)._position3D.y;
    fVar6 = (pGVar3->fields)._position3D.z;
    (pBVar4->fields)._center.x = (pGVar3->fields)._position3D.x;
    (pBVar4->fields)._center.y = fVar5;
    (pBVar4->fields)._center.z = fVar6;
    pGVar1 = (this->fields)._._data;
    if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
        (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) &&
       (pBVar4 = (pGVar1->fields).Box, pBVar4 != (BoxShape3D *)0x0)) {
      aQStack_7[0].x = (pGVar3->fields)._rotation3D.x;
      aQStack_7[0].y = (pGVar3->fields)._rotation3D.y;
      aQStack_7[0].z = (pGVar3->fields)._rotation3D.z;
      aQStack_7[0].w = (pGVar3->fields)._rotation3D.w;
      BoxShape3D::BoxShape3D_set_Rotation(pBVar4,aQStack_7,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
        pBVar4 = (pGVar1->fields).Box;
        lVar8 = 0xa0;
        lVar9 = 0xa0;
        if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          lVar9 = 0x98;
        }
        lVar9 = *(longlong *)((longlong)&pGVar2->klass + lVar9);
        if (lVar9 != 0) {
          lVar10 = 0xa0;
          if (*(char *)(lVar9 + 0x20) == '\0') {
            bVar11 = (pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0;
            if (bVar11) {
              lVar10 = 0x98;
            }
            lVar10 = *(longlong *)((longlong)&pGVar2->klass + lVar10);
            lVar9 = 0xa0;
            if (bVar11) {
              lVar9 = 0x98;
            }
            lVar12 = *(longlong *)((longlong)&pGVar2->klass + lVar9);
            uVar13 = 0xa0;
            if (bVar11) {
              uVar13 = 0x98;
            }
            lVar9 = *(longlong *)((longlong)&pGVar2->klass + (ulonglong)uVar13);
            zoomFactor = _UNK_?;
          }
          else {
            bVar11 = (pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0;
            if (bVar11) {
              lVar10 = 0x98;
            }
            lVar9 = *(longlong *)((longlong)&pGVar2->klass + lVar10);
            lVar10 = 0xa0;
            if (bVar11) {
              lVar10 = 0x98;
            }
            lVar10 = *(longlong *)((longlong)&pGVar2->klass + lVar10);
            lVar12 = 0xa0;
            if (bVar11) {
              lVar12 = 0x98;
            }
            lVar12 = *(longlong *)((longlong)&pGVar2->klass + lVar12);
          }
          if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
            lVar8 = 0x98;
          }
          fVar6 = *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar8) + 0x1c);
          if (pBVar4 != (BoxShape3D *)0x0) {
            uVar13 = (uint)(fVar6 * *(float *)(lVar12 + 0x3c) * zoomFactor) & _UNK_?;
            fVar5 = (float)((uint)(fVar6 * *(float *)(lVar9 + 0x40) * zoomFactor) & _UNK_?)
            ;
            (pBVar4->fields)._size.x =
                 (float)((uint)(fVar6 * *(float *)(lVar10 + 0x38) * zoomFactor) & _UNK_?);
            (pBVar4->fields)._size.y = (float)uVar13;
            (pBVar4->fields)._size.z = fVar5;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

