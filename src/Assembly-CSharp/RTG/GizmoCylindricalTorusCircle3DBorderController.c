
/* Single GetTorusCoreRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoCylindricalTorusCircle3DBorderController::
      GizmoCylindricalTorusCircle3DBorderController_GetTorusCoreRadius
                (GizmoCylindricalTorusCircle3DBorderController *this,float zoomFactor,
                MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  pGVar2 = (GizmoCircle3DBorder *)0x0;
  pGVar3 = this;
  if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Border, pGVar2 != (GizmoCircle3DBorder *)0x0)) &&
     (method = (MethodInfo *)(pGVar2->fields)._planeSlider,
     (GizmoPlaneSlider3D *)method != (GizmoPlaneSlider3D *)0x0)) {
    pGVar3 = (GizmoCylindricalTorusCircle3DBorderController *)0xd8;
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
      pGVar3 = (GizmoCylindricalTorusCircle3DBorderController *)0x0;
      if (pCVar6 != (CircleShape3D *)0x0) {
        return (pCVar6->fields)._radius -
               zoomFactor * *(float *)(lVar4 + 0x40) *
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

void Assembly-CSharp.dll::RTG::GizmoCylindricalTorusCircle3DBorderController::
     GizmoCylindricalTorusCircle3DBorderController_UpdateEpsilons
               (GizmoCylindricalTorusCircle3DBorderController *this,float zoomFactor,
               MethodInfo *method)

{
  uVar1 = _UNK_?;
  pGVar2 = (this->fields)._._data;
  if ((pGVar2 != (GizmoCircle3DBorderControllerData *)0x0) &&
     (pGVar3 = (pGVar2->fields).PlaneSlider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) {
    lVar4 = 200;
    if ((pGVar3->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
      lVar4 = 0xc0;
    }
    lVar4 = *(longlong *)((longlong)&pGVar3->klass + lVar4);
    if ((lVar4 != 0) && (pCVar5 = (pGVar2->fields).BorderCylTorus, pCVar5 != (CylTorusShape3D *)0x0)
       ) {
      (pCVar5->fields)._epsilon._cylHrzRadius =
           (float)((uint)(zoomFactor * *(float *)(lVar4 + 0x20)) & _UNK_? & _UNK_?);
      if ((pGVar2 != (GizmoCircle3DBorderControllerData *)0x0) && (pCVar5 != (CylTorusShape3D *)0x0)
         ) {
        (pCVar5->fields)._epsilon._cylVertRadius =
             (float)((uint)(pCVar5->fields)._epsilon._cylHrzRadius & uVar1 & uVar1);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoCylindricalTorusCircle3DBorderController::
     GizmoCylindricalTorusCircle3DBorderController_UpdateHandles
               (GizmoCylindricalTorusCircle3DBorderController *this,MethodInfo *method)

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
                (pGVar2,(pGVar1->fields).BorderTorusIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoCircle3DBorder *)0x0)) &&
         (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
        bVar4 = (pGVar3->fields)._isVisible;
        uVar5 = (pGVar1->fields).BorderCylTorusIndex;
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

void Assembly-CSharp.dll::RTG::GizmoCylindricalTorusCircle3DBorderController::
     GizmoCylindricalTorusCircle3DBorderController_UpdateTransforms
               (GizmoCylindricalTorusCircle3DBorderController *this,float zoomFactor,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) {
    pCVar2 = (pGVar1->fields).TargetCircle;
    pCVar3 = (pGVar1->fields).BorderCylTorus;
    if (pCVar2 != (CircleShape3D *)0x0) {
      fVar4 = (pCVar2->fields)._rotation.x;
      fVar5 = (pCVar2->fields)._rotation.y;
      fVar6 = (pCVar2->fields)._rotation.z;
      fVar7 = (pCVar2->fields)._rotation.w;
      uStack_8 = (ulonglong)_UNK_?;
      uStack_9 = 0;
      uStack_10 = 0;
      uStack_11 = 0;
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(&uStack_8,&uStack_10);
      fVar14 = (float)uStack_10;
      fVar15 = ((float)uStack_10 * fVar7 + uStack_11._4_4_ * fVar4 + (float)uStack_11 * fVar5) -
               uStack_10._4_4_ * fVar6;
      fVar16 = uStack_10._4_4_ * fVar5;
      fVar17 = uStack_10._4_4_ * fVar4;
      fVar18 = (uStack_10._4_4_ * fVar7 + uStack_11._4_4_ * fVar5 + (float)uStack_10 * fVar6) -
               (float)uStack_11 * fVar4;
      uStack_10 = CONCAT44(fVar18,fVar15);
      fVar5 = ((float)uStack_11 * fVar7 + uStack_11._4_4_ * fVar6 + fVar17) - fVar14 * fVar5;
      fVar4 = ((uStack_11._4_4_ * fVar7 - fVar14 * fVar4) - fVar16) - (float)uStack_11 * fVar6;
      uStack_11 = CONCAT44(fVar4,fVar5);
      if (pCVar3 != (CylTorusShape3D *)0x0) {
        (pCVar3->fields)._rotation.x = fVar15;
        (pCVar3->fields)._rotation.y = fVar18;
        (pCVar3->fields)._rotation.z = fVar5;
        (pCVar3->fields)._rotation.w = fVar4;
        fVar4 = (pCVar2->fields)._center.z;
        fVar5 = (pCVar2->fields)._center.y;
        (pCVar3->fields)._center.x = (pCVar2->fields)._center.x;
        (pCVar3->fields)._center.y = fVar5;
        (pCVar3->fields)._center.z = fVar4;
        fVar4 = GizmoCylindricalTorusCircle3DBorderController_GetTorusCoreRadius
                           (this,zoomFactor,(MethodInfo *)0x0);
        uVar19 = (uint)_UNK_?;
        (pCVar3->fields)._coreRadius = (float)((uint)fVar4 & uVar19);
        fVar4 = _UNK_?;
        pGVar1 = (this->fields)._._data;
        if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
            (pGVar20 = (pGVar1->fields).Border, pGVar20 != (GizmoCircle3DBorder *)0x0)) &&
           (pGVar21 = (pGVar20->fields)._planeSlider, pGVar21 != (GizmoPlaneSlider3D *)0x0)) {
          lVar22 = 0xd8;
          if ((pGVar21->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar22 = 0xd0;
          }
          lVar22 = *(longlong *)((longlong)&pGVar21->klass + lVar22);
          if (lVar22 != 0) {
            uVar23 = 0xd8;
            if ((pGVar21->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              uVar23 = 0xd0;
            }
            (pCVar3->fields)._hrzRadius =
                 (float)((uint)(zoomFactor * *(float *)(lVar22 + 0x40) *
                                *(float *)(*(longlong *)
                                            ((longlong)&pGVar21->klass + (ulonglong)uVar23) + 0x14) *
                               _UNK_?) & uVar19);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
                (pGVar20 = (pGVar1->fields).Border, pGVar20 != (GizmoCircle3DBorder *)0x0)) &&
               (pGVar21 = (pGVar20->fields)._planeSlider, pGVar21 != (GizmoPlaneSlider3D *)0x0)) {
              lVar22 = 0xd8;
              if ((pGVar21->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                lVar22 = 0xd0;
              }
              lVar22 = *(longlong *)((longlong)&pGVar21->klass + lVar22);
              if (lVar22 != 0) {
                uVar23 = 0xd8;
                if ((pGVar21->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  uVar23 = 0xd0;
                }
                (pCVar3->fields)._vertRadius =
                     (float)((uint)(zoomFactor * *(float *)(lVar22 + 0x44) *
                                    *(float *)(*(longlong *)
                                                ((longlong)&pGVar21->klass + (ulonglong)uVar23) + 0x14
                                              ) * fVar4) & uVar19);
                return;
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

