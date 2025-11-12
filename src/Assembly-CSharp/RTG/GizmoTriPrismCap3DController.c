
/* Void CapSlider3D(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_CapSlider3D
               (GizmoTriPrismCap3DController *this,Vector3 *sliderDirection,Vector3 *sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Cap;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if ((pGVar2 != (GizmoCap3D *)0x0) &&
       (pGVar4 = (pGVar2->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      QStack_5.x = (pQVar3->identityQuaternion).x;
      QStack_5.y = (pQVar3->identityQuaternion).y;
      QStack_5.z = (pQVar3->identityQuaternion).z;
      QStack_5.w = (pQVar3->identityQuaternion).w;
      GizmoTransform::GizmoTransform_set_Rotation3D(pGVar4,&QStack_5,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
         ((pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0 &&
          (pGVar4 = (pGVar2->fields)._transform, pGVar4 != (GizmoTransform *)0x0)))) {
        QStack_5.x = sliderDirection->x;
        QStack_5.y = sliderDirection->y;
        QStack_5.z = sliderDirection->z;
        GizmoTransform::GizmoTransform_AlignAxis3D
                  (pGVar4,2,AxisSign__Enum_Positive,(Vector3 *)&QStack_5,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
           ((pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0 &&
            (pGVar4 = (pGVar2->fields)._transform, pGVar4 != (GizmoTransform *)0x0)))) {
          if (((pGVar4->fields)._firingChanged3DEvent == 0) &&
             (uVar6 = sliderEndPt->x, uVar7 = sliderEndPt->y, uVar8 = (pGVar4->fields)._position3D.x
             , fVar9 = (pGVar4->fields)._position3D.z - sliderEndPt->z,
             fVar10 = (pGVar4->fields)._position3D.y - (float)uVar7,
             _UNK_? <=
             fVar10 * fVar10 + ((float)uVar8 - (float)uVar6) * ((float)uVar8 - (float)uVar6) +
             fVar9 * fVar9)) {
            fVar10 = sliderEndPt->y;
            fVar9 = sliderEndPt->z;
            (pGVar4->fields)._position3D.x = sliderEndPt->x;
            (pGVar4->fields)._position3D.y = fVar10;
            (pGVar4->fields)._position3D.z = fVar9;
            GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar4,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void CapSlider3DInvert(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_CapSlider3DInvert
               (GizmoTriPrismCap3DController *this,Vector3 *sliderDirection,Vector3 *sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Cap;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if ((pGVar2 != (GizmoCap3D *)0x0) &&
       (pGVar4 = (pGVar2->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      aQStack_5[0].x = (pQVar3->identityQuaternion).x;
      aQStack_5[0].y = (pQVar3->identityQuaternion).y;
      aQStack_5[0].z = (pQVar3->identityQuaternion).z;
      aQStack_5[0].w = (pQVar3->identityQuaternion).w;
      GizmoTransform::GizmoTransform_set_Rotation3D(pGVar4,aQStack_5,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
        aQStack_5[0].x = sliderDirection->x;
        aQStack_5[0].y = sliderDirection->y;
        pGVar2 = (pGVar1->fields).Cap;
        if ((pGVar2 != (GizmoCap3D *)0x0) &&
           (pGVar4 = (pGVar2->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
          aQStack_5[0].y = (float)((uint)aQStack_5[0].y ^ _UNK_?);
          aQStack_5[0].x = (float)((uint)aQStack_5[0].x ^ _UNK_?);
          aQStack_5[0].z = (float)((uint)sliderDirection->z ^ _UNK_?);
          GizmoTransform::GizmoTransform_AlignAxis3D
                    (pGVar4,2,AxisSign__Enum_Positive,(Vector3 *)aQStack_5,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
            pGVar2 = (pGVar1->fields).Cap;
            fVar6 = (float)(*(this->klass->vtable).GetSliderAlignedRealLength_1.methodPtr)
                                      (this,CONCAT44(in_XMM3_Db,zoomFactor),
                                       (this->klass->vtable).GetSliderAlignedRealLength_1.method);
            uVar7 = sliderEndPt->x;
            uVar8 = sliderEndPt->y;
            uVar9 = sliderDirection->x;
            fVar10 = (float)uVar9 * fVar6 + (float)uVar7;
            fVar11 = sliderDirection->y * fVar6 + (float)uVar8;
            fVar6 = sliderDirection->z * fVar6 + sliderEndPt->z;
            if ((pGVar2 != (GizmoCap3D *)0x0) &&
               (pGVar4 = (pGVar2->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
              if (((pGVar4->fields)._firingChanged3DEvent == 0) &&
                 (uVar12 = (pGVar4->fields)._position3D.x, fVar13 = (float)uVar12 - fVar10,
                 fVar14 = (pGVar4->fields)._position3D.y - fVar11,
                 fVar15 = (pGVar4->fields)._position3D.z - fVar6,
                 _UNK_? <= fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15)) {
                (pGVar4->fields)._position3D.x = fVar10;
                (pGVar4->fields)._position3D.y = fVar11;
                (pGVar4->fields)._position3D.z = fVar6;
                GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar4,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
      GizmoTriPrismCap3DController_GetSliderAlignedRealLength
                (GizmoTriPrismCap3DController *this,float zoomFactor,MethodInfo *method)

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
           *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar5) + 0x50) * zoomFactor;
  }
  if (pGVar7 == (GizmoCap3DLookAndFeel *)0x0) {
    lVar8 = 0x98;
  }
  lVar6 = 0xa0;
  if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    lVar6 = 0x98;
  }
  return *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar6) + 0x1c) *
         *(float *)(*(longlong *)((longlong)&pGVar2->klass + lVar8) + 0x50) * _UNK_?;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_UpdateHandles
               (GizmoTriPrismCap3DController *this,MethodInfo *method)

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
                (pGVar2,(pGVar1->fields).SphereIndex,0,(MethodInfo *)0x0);
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
            uVar5 = (pGVar1->fields).TrPrismIndex;
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

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_UpdateTransforms
               (GizmoTriPrismCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
       (this_00 = (pGVar1->fields).Cap, this_00 != (GizmoCap3D *)0x0)) &&
      (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
     (pTVar3 = (pGVar1->fields).TrPrism, pTVar3 != (TriangPrismShape3D *)0x0)) {
    fVar4 = (pGVar2->fields)._rotation3D.y;
    fVar5 = (pGVar2->fields)._rotation3D.z;
    fVar6 = (pGVar2->fields)._rotation3D.w;
    (pTVar3->fields)._rotation.x = (pGVar2->fields)._rotation3D.x;
    (pTVar3->fields)._rotation.y = fVar4;
    (pTVar3->fields)._rotation.z = fVar5;
    uVar7 = _UNK_?;
    fVar4 = _UNK_?;
    (pTVar3->fields)._rotation.w = fVar6;
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
      pTVar3 = (pGVar1->fields).TrPrism;
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
          fVar5 = _UNK_?;
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
          fVar5 = zoomFactor;
        }
        if (pTVar3 != (TriangPrismShape3D *)0x0) {
          (pTVar3->fields)._width =
               (float)((uint)(*(float *)(lVar9 + 0x1c) * *(float *)(lVar10 + 0x48) * fVar5) &
                      _UNK_?);
          pGVar1 = (this->fields)._._data;
          if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
            pTVar3 = (pGVar1->fields).TrPrism;
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
                fVar4 = zoomFactor;
              }
              if (pTVar3 != (TriangPrismShape3D *)0x0) {
                pGVar1 = (this->fields)._._data;
                (pTVar3->fields)._height =
                     (float)((uint)(*(float *)(lVar10 + 0x1c) * *(float *)(lVar9 + 0x4c) * fVar4)
                            & uVar7);
                if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                  pTVar3 = (pGVar1->fields).TrPrism;
                  fVar4 = GizmoCap3D::GizmoCap3D_GetRealTriPrismDepth
                                     (this_00,zoomFactor,(MethodInfo *)0x0);
                  if (pTVar3 != (TriangPrismShape3D *)0x0) {
                    pGVar1 = (this->fields)._._data;
                    (pTVar3->fields)._depth = (float)((uint)fVar4 & _UNK_?);
                    if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
                        (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
                       (pTVar3 = (pGVar1->fields).TrPrism, pTVar3 != (TriangPrismShape3D *)0x0)) {
                      uVar12 = (pGVar2->fields)._position3D.x;
                      uVar13 = (pGVar2->fields)._position3D.y;
                      fVar6 = (pGVar2->fields)._position3D.z;
                      pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_Look
                                          (aVStack_15,pTVar3,(MethodInfo *)0x0);
                      fVar4 = (pTVar3->fields)._depth;
                      uVar16 = pVVar14->x;
                      uVar17 = pVVar14->y;
                      fVar18 = pVVar14->z;
                      pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                                          (aVStack_15,pTVar3,(MethodInfo *)0x0);
                      fVar5 = (pTVar3->fields)._height;
                      uVar19 = pVVar14->x;
                      fVar20 = ((float)uVar17 * fVar4 - pVVar14->y * fVar5) * _UNK_?;
                      fVar18 = (fVar18 * fVar4 - pVVar14->z * fVar5) * _UNK_?;
                      (pTVar3->fields)._baseCenter.x =
                           ((float)uVar16 * fVar4 - (float)uVar19 * fVar5) * _UNK_? +
                           (float)uVar12;
                      (pTVar3->fields)._baseCenter.y = fVar20 + (float)uVar13;
                      (pTVar3->fields)._baseCenter.z = fVar18 + fVar6;
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
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}

