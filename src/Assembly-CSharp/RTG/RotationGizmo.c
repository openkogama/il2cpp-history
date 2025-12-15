
/* Single GetZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_GetZoomFactor
                (RotationGizmo *this,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x60;
  if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0x78;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x20) == '\0') {
      return _UNK_?;
    }
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_2.z = position->z;
      VStack_2.x = position->x;
      VStack_2.y = position->y;
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,&VStack_2,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar3 = (float)(*pcVar4)();
  return fVar3;
}


/* Single GetZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_GetZoomFactor_1
                (RotationGizmo *this,Vector3 *position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x60;
  if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0x78;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x20) != '\0') {
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_2.x = position->x;
      VStack_2.y = position->y;
      VStack_2.z = position->z;
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,&VStack_2,(MethodInfo *)0x0);
      return fVar3;
    }
    return _UNK_?;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar3 = (float)(*pcVar4)();
  return fVar3;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnAttached
               (RotationGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoCap3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  pGVar2 = (GizmoCap3D *)FUN_?(TypeInfo__RTG__GizmoCap3D);
  GizmoCap3D::GizmoCap3D__ctor(pGVar2,pGVar1,0x2f,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._midCap = pGVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._midCap >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pGVar2 = (this->fields)._midCap;
  if (pGVar2 != (GizmoCap3D *)0x0) {
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar2,(IGizmoDragSession *)(this->fields)._camXYRotationDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    if ((pGVar1 != (Gizmo *)0x0) &&
       (this_00 = (this->fields)._camXYRotationDrag, this_00 != (GizmoDblAxisRotationDrag3D *)0x0))
    {
      GizmoDragSession::GizmoDragSession_AddTargetTransform
                ((GizmoDragSession *)this_00,(pGVar1->fields)._transform,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._gizmo;
      pGVar8 = (GizmoPlaneSlider3D *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3D);
      GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar8,pGVar1,0x20,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields)._xSlider = pGVar8;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields)._xSlider >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pGVar8 = (this->fields)._xSlider;
      if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
        GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetDragChannel
                  (pGVar8,GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0);
        uVar4 = _UNK_?;
        pGVar8 = (this->fields)._xSlider;
        uStack_9 = (ulonglong)_UNK_? << 0x20;
        uStack_10 = 0;
        auStack_11._0_4_ = 0.0;
        auStack_11._4_4_ = 0.0;
        uStack_12._0_4_ = 0.0;
        uStack_12._4_4_ = 0.0;
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcRam_? = pcVar13;
        (*pcRam_?)(&uStack_9,auStack_11);
        if ((pGVar8 != (GizmoPlaneSlider3D *)0x0) &&
           (pGVar15 = (pGVar8->fields)._transform, pGVar15 != (GizmoTransform *)0x0)) {
          GizmoTransform::GizmoTransform_set_LocalRotation3D
                    (pGVar15,(Quaternion *)auStack_11,(MethodInfo *)0x0);
          pGVar8 = (this->fields)._xSlider;
          if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
            pGVar16 = pGVar8->klass;
            (pGVar8->fields)._._isVisible = 0;
            (*(pGVar16->vtable).OnVisibilityStateChanged.methodPtr)
                      (pGVar8,(pGVar16->vtable).OnVisibilityStateChanged.method);
            pGVar17 = (this->fields)._axesSliders;
            if (pGVar17 != (GizmoPlaneSlider3DCollection *)0x0) {
              GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                        (pGVar17,(this->fields)._xSlider,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._._gizmo;
              pGVar8 = (GizmoPlaneSlider3D *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3D);
              GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar8,pGVar1,0x21,(MethodInfo *)0x0);
              bVar3 = iRam_? != 0;
              (this->fields)._ySlider = pGVar8;
              if (bVar3) {
                uVar18 = (uint)((ulonglong)&(this->fields)._ySlider >> 0xc);
                uVar5 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
                do {
                  uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                  puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                  LOCK();
                  bVar3 = uVar6 == *puVar7;
                  if (bVar3) {
                    *puVar7 = uVar6 | 1L << (uVar18 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar3);
              }
              pGVar8 = (this->fields)._ySlider;
              if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetDragChannel
                          (pGVar8,GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0);
                pGVar8 = (this->fields)._ySlider;
                uStack_9 = (ulonglong)uVar4;
                uStack_10 = 0;
                auStack_11._0_4_ = 0.0;
                auStack_11._4_4_ = 0.0;
                uStack_12._0_4_ = 0.0;
                uStack_12._4_4_ = 0.0;
                pcVar13 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                  uVar14 = func_?(&UNK_?);
                  FUN_?(uVar14,0);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pcRam_? = pcVar13;
                (*pcRam_?)(&uStack_9,auStack_11);
                if ((pGVar8 != (GizmoPlaneSlider3D *)0x0) &&
                   (pGVar15 = (pGVar8->fields)._transform, pGVar15 != (GizmoTransform *)0x0)) {
                  GizmoTransform::GizmoTransform_set_LocalRotation3D
                            (pGVar15,(Quaternion *)auStack_11,(MethodInfo *)0x0);
                  pGVar8 = (this->fields)._ySlider;
                  if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                    pGVar16 = pGVar8->klass;
                    (pGVar8->fields)._._isVisible = 0;
                    (*(pGVar16->vtable).OnVisibilityStateChanged.methodPtr)
                              (pGVar8,(pGVar16->vtable).OnVisibilityStateChanged.method);
                    pGVar17 = (this->fields)._axesSliders;
                    if (pGVar17 != (GizmoPlaneSlider3DCollection *)0x0) {
                      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                                (pGVar17,(this->fields)._ySlider,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._._gizmo;
                      pGVar8 = (GizmoPlaneSlider3D *)
                                FUN_?(TypeInfo__RTG__GizmoPlaneSlider3D);
                      GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                (pGVar8,pGVar1,0x22,(MethodInfo *)0x0);
                      bVar3 = iRam_? != 0;
                      (this->fields)._zSlider = pGVar8;
                      if (bVar3) {
                        uVar4 = (uint)((ulonglong)&(this->fields)._zSlider >> 0xc);
                        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                        do {
                          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                          LOCK();
                          bVar3 = uVar6 == *puVar7;
                          if (bVar3) {
                            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar3);
                      }
                      pGVar8 = (this->fields)._zSlider;
                      if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                        GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetDragChannel
                                  (pGVar8,GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0);
                        pGVar8 = (this->fields)._zSlider;
                        if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                          pGVar16 = pGVar8->klass;
                          (pGVar8->fields)._._isVisible = 0;
                          (*(pGVar16->vtable).OnVisibilityStateChanged.methodPtr)
                                    (pGVar8,(pGVar16->vtable).OnVisibilityStateChanged.method);
                          pGVar17 = (this->fields)._axesSliders;
                          if (pGVar17 != (GizmoPlaneSlider3DCollection *)0x0) {
                            GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                                      (pGVar17,(this->fields)._zSlider,(MethodInfo *)0x0);
                            pGVar2 = (this->fields)._midCap;
                            if (((pGVar2 != (GizmoCap3D *)0x0) &&
                                (pGVar19 = (pGVar2->fields)._._handle, pGVar19 != (GizmoHandle *)0x0)
                                ) && (pGVar17 = (this->fields)._axesSliders,
                                     pGVar17 != (GizmoPlaneSlider3DCollection *)0x0)) {
                              GizmoPlaneSlider3DCollection::
                              GizmoPlaneSlider3DCollection_Make3DHoverPriorityHigherThan
                                        (pGVar17,(pGVar19->fields)._hoverPriority3D,(MethodInfo *)0x0)
                              ;
                              pGVar1 = (this->fields)._._gizmo;
                              pGVar20 = (GizmoPlaneSlider2D *)
                                        FUN_?(TypeInfo__RTG__GizmoPlaneSlider2D);
                              GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                        (pGVar20,pGVar1,0x30,(MethodInfo *)0x0);
                              bVar3 = iRam_? != 0;
                              (this->fields)._camLookSlider = pGVar20;
                              if (bVar3) {
                                uVar4 = (uint)((ulonglong)&(this->fields)._camLookSlider >> 0xc);
                                uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                do {
                                  uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                  puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                  LOCK();
                                  bVar3 = uVar6 == *puVar7;
                                  if (bVar3) {
                                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar3);
                              }
                              pGVar20 = (this->fields)._camLookSlider;
                              if (pGVar20 != (GizmoPlaneSlider2D *)0x0) {
                                GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetDragChannel
                                          (pGVar20,GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0
                                          );
                                pGVar20 = (this->fields)._camLookSlider;
                                if (pGVar20 != (GizmoPlaneSlider2D *)0x0) {
                                  pGVar21 = pGVar20->klass;
                                  (pGVar20->fields)._._isVisible = 0;
                                  (*(pGVar21->vtable).OnVisibilityStateChanged.methodPtr)();
                                  RotationGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
                                  iVar22 = iRam_?;
                                  lVar23 = 0x58;
                                  lVar24 = 0x58;
                                  if ((this->fields)._sharedSettings3D !=
                                      (RotationGizmoSettings3D *)0x0) {
                                    lVar24 = 0x70;
                                  }
                                  lVar24 = *(longlong *)((longlong)&this->klass + lVar24);
                                  if (lVar24 != 0) {
                                    lVar24 = *(longlong *)(lVar24 + 0x30);
                                    pGVar8 = (this->fields)._xSlider;
                                    if (lVar24 != 0) {
                                      if (*(int *)(lVar24 + 0x18) == 0) {
code_?:
                                        FUN_?();
                                        pcVar13 = (code *)swi(3);
                                        (*pcVar13)();
                                        return;
                                      }
                                      if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                                        (pGVar8->fields)._sharedSettings =
                                             *(GizmoPlaneSlider3DSettings **)(lVar24 + 0x20);
                                        if (iVar22 != 0) {
                                          uVar4 = (uint)((ulonglong)
                                                          &(pGVar8->fields)._sharedSettings >> 0xc)
                                          ;
                                          lVar24 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                                          do {
                                            uVar5 = *(ulonglong *)(lVar24 + 0xADDR);
                                            puVar7 = (ulonglong *)(lVar24 + 0xADDR);
                                            LOCK();
                                            bVar3 = uVar5 == *puVar7;
                                            if (bVar3) {
                                              *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
                                            }
                                            UNLOCK();
                                            iVar22 = iRam_?;
                                          } while (!bVar3);
                                        }
                                        lVar24 = 0x58;
                                        if ((this->fields)._sharedSettings3D !=
                                            (RotationGizmoSettings3D *)0x0) {
                                          lVar24 = 0x70;
                                        }
                                        lVar24 = *(longlong *)((longlong)&this->klass + lVar24);
                                        if (lVar24 != 0) {
                                          lVar24 = *(longlong *)(lVar24 + 0x30);
                                          pGVar8 = (this->fields)._ySlider;
                                          if (lVar24 != 0) {
                                            if (*(uint *)(lVar24 + 0x18) < 2)
                                            goto code_?;
                                            if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                                              (pGVar8->fields)._sharedSettings =
                                                   *(GizmoPlaneSlider3DSettings **)(lVar24 + 0x28);
                                              iVar25 = 0;
                                              if (iVar22 != 0) {
                                                uVar4 = (uint)((ulonglong)
                                                                &(pGVar8->fields)._sharedSettings
                                                               >> 0xc);
                                                lVar24 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                                                do {
                                                  uVar5 = *(ulonglong *)(lVar24 + 0xADDR);
                                                  puVar7 = (ulonglong *)(lVar24 + 0xADDR);
                                                  LOCK();
                                                  bVar3 = uVar5 == *puVar7;
                                                  if (bVar3) {
                                                    *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar25 = iRam_?;
                                                } while (!bVar3);
                                              }
                                              lVar24 = 0x58;
                                              if ((this->fields)._sharedSettings3D !=
                                                  (RotationGizmoSettings3D *)0x0) {
                                                lVar24 = 0x70;
                                              }
                                              lVar24 = *(longlong *)
                                                        ((longlong)&this->klass + lVar24);
                                              if (lVar24 != 0) {
                                                lVar24 = *(longlong *)(lVar24 + 0x30);
                                                pGVar8 = (this->fields)._zSlider;
                                                if (lVar24 != 0) {
                                                  if (*(uint *)(lVar24 + 0x18) < 3)
                                                  goto code_?;
                                                  if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                                                    (pGVar8->fields)._sharedSettings =
                                                         *(GizmoPlaneSlider3DSettings **)
                                                          (lVar24 + 0x30);
                                                    iVar22 = 0;
                                                    if (iVar25 != 0) {
                                                      uVar4 = (uint)((ulonglong)
                                                                      &(pGVar8->fields).
                                                                       _sharedSettings >> 0xc);
                                                      lVar24 = (ulonglong)((uVar4 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)
                                                                  (lVar24 + 0xADDR);
                                                        puVar7 = (ulonglong *)(lVar24 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar3 = uVar5 == *puVar7;
                                                        if (bVar3) {
                                                          *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar22 = iRam_?;
                                                      } while (!bVar3);
                                                    }
                                                    if ((this->fields)._sharedSettings3D !=
                                                        (RotationGizmoSettings3D *)0x0) {
                                                      lVar23 = 0x70;
                                                    }
                                                    lVar24 = *(longlong *)
                                                              ((longlong)&this->klass + lVar23);
                                                    if ((lVar24 != 0) &&
                                                       (pGVar20 = (this->fields)._camLookSlider,
                                                       pGVar20 != (GizmoPlaneSlider2D *)0x0)) {
                                                      (pGVar20->fields)._sharedSettings =
                                                           *(GizmoPlaneSlider2DSettings **)
                                                            (lVar24 + 0x38);
                                                      if (iVar22 != 0) {
                                                        uVar4 = (uint)((ulonglong)
                                                                        &(pGVar20->fields).
                                                                         _sharedSettings >> 0xc);
                                                        lVar24 = (ulonglong)
                                                                 ((uVar4 & 0x1fffff) >> 6) * 8;
                                                        do {
                                                          uVar5 = *(ulonglong *)
                                                                    (lVar24 + 0xADDR);
                                                          puVar7 = (ulonglong *)
                                                                   (lVar24 + 0xADDR);
                                                          LOCK();
                                                          bVar3 = uVar5 == *puVar7;
                                                          if (bVar3) {
                                                            *puVar7 = uVar5 | 1L << (uVar4 & 0x3f)
                                                            ;
                                                          }
                                                          UNLOCK();
                                                        } while (!bVar3);
                                                      }
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
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
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
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnDetached() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnDetached
               (RotationGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    pGVar2 = (pGVar1->fields)._transform;
    this_00 = (Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_ *)
              FUN_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    mscorlib.dll::System::Action`2[Object,UnityEngine::UIElements::Experimental::StyleValues]::
    Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
              (this_00,(Object *)this,
               MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (pGVar2 != (GizmoTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = &pGVar2->fields;
      source = (pGVar2->fields).Changed;
      do {
        pGVar4 = (GizmoEntityTransformChangedHandler *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
        pGVar5 = (GizmoEntityTransformChangedHandler *)0x0;
        if (pGVar4 != (GizmoEntityTransformChangedHandler *)0x0) {
          if (pGVar4->klass == TypeInfo__RTG__GizmoEntityTransformChangedHandler) {
            pGVar5 = pGVar4;
          }
          if (pGVar5 == (GizmoEntityTransformChangedHandler *)0x0) {
            FUN_?(pGVar4);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        LOCK();
        pGVar4 = pGVar3->Changed;
        bVar7 = source == pGVar4;
        if (bVar7) {
          pGVar3->Changed = pGVar5;
          pGVar4 = source;
        }
        UNLOCK();
        pGVar5 = source;
        if (!bVar7) {
          pGVar5 = pGVar4;
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)pGVar3 >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        bVar7 = pGVar5 != source;
        source = pGVar5;
      } while (bVar7);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDisabled() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnDisabled
               (RotationGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    pGVar2 = (pGVar1->fields)._transform;
    this_00 = (Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_ *)
              FUN_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    mscorlib.dll::System::Action`2[Object,UnityEngine::UIElements::Experimental::StyleValues]::
    Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
              (this_00,(Object *)this,
               MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (pGVar2 != (GizmoTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = &pGVar2->fields;
      source = (pGVar2->fields).Changed;
      do {
        pGVar4 = (GizmoEntityTransformChangedHandler *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
        pGVar5 = (GizmoEntityTransformChangedHandler *)0x0;
        if (pGVar4 != (GizmoEntityTransformChangedHandler *)0x0) {
          if (pGVar4->klass == TypeInfo__RTG__GizmoEntityTransformChangedHandler) {
            pGVar5 = pGVar4;
          }
          if (pGVar5 == (GizmoEntityTransformChangedHandler *)0x0) {
            FUN_?(pGVar4);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        LOCK();
        pGVar4 = pGVar3->Changed;
        bVar7 = source == pGVar4;
        if (bVar7) {
          pGVar3->Changed = pGVar5;
          pGVar4 = source;
        }
        UNLOCK();
        pGVar5 = source;
        if (!bVar7) {
          pGVar5 = pGVar4;
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)pGVar3 >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        bVar7 = pGVar5 != source;
        source = pGVar5;
      } while (bVar7);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEnabled() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnEnabled
               (RotationGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    pGVar2 = (pGVar1->fields)._transform;
    this_00 = (Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_ *)
              FUN_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    mscorlib.dll::System::Action`2[Object,UnityEngine::UIElements::Experimental::StyleValues]::
    Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
              (this_00,(Object *)this,
               MethodInfo__RTG__RotationGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (pGVar2 != (GizmoTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = &pGVar2->fields;
      a = (pGVar2->fields).Changed;
      do {
        pGVar4 = (GizmoEntityTransformChangedHandler *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
        pGVar5 = (GizmoEntityTransformChangedHandler *)0x0;
        if (pGVar4 != (GizmoEntityTransformChangedHandler *)0x0) {
          if (pGVar4->klass == TypeInfo__RTG__GizmoEntityTransformChangedHandler) {
            pGVar5 = pGVar4;
          }
          if (pGVar5 == (GizmoEntityTransformChangedHandler *)0x0) {
            FUN_?(pGVar4);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        LOCK();
        pGVar4 = pGVar3->Changed;
        bVar7 = a == pGVar4;
        if (bVar7) {
          pGVar3->Changed = pGVar5;
          pGVar4 = a;
        }
        UNLOCK();
        pGVar5 = a;
        if (!bVar7) {
          pGVar5 = pGVar4;
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)pGVar3 >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        bVar7 = pGVar5 != a;
        a = pGVar5;
      } while (bVar7);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnGizmoAttemptHandleDragBegin
               (RotationGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCap;
  if ((pGVar1 != (GizmoCap3D *)0x0) &&
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
    if (handleId != (pGVar2->fields)._id) {
      return;
    }
    pGVar3 = (this->fields)._._gizmo;
    uStack_4 = 0;
    fStack_5 = 0.0;
    uStack_6 = 0;
    fStack_7 = 0.0;
    uStack_8 = 0;
    if (((pGVar3 != (Gizmo *)0x0) &&
        (pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0), pCVar9 != (Camera *)0x0)
        ) && (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar9,(MethodInfo *)0x0),
             pTVar10 != (Transform *)0x0)) {
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&VStack_12,pTVar10,(MethodInfo *)0x0);
      pGVar3 = (this->fields)._._gizmo;
      uStack_6._0_4_ = pVVar11->x;
      uStack_6._4_4_ = pVVar11->y;
      fStack_7 = pVVar11->z;
      if (((pGVar3 != (Gizmo *)0x0) &&
          (pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
          pCVar9 != (Camera *)0x0)) &&
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar9,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0)
         ) {
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_12,pTVar10,(MethodInfo *)0x0);
        uVar13 = pVVar11->x;
        uVar14 = pVVar11->y;
        fStack_5 = pVVar11->z;
        uStack_8 = uVar13;
        uStack_4 = uVar14;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_12.x = (pVVar15->rightVector).x;
        VStack_12.y = (pVVar15->rightVector).y;
        VStack_12.z = (pVVar15->rightVector).z;
        fStack_16 = (float)((uint)VStack_12.y ^ _UNK_?);
        fStack_17 = (float)((uint)VStack_12.x ^ _UNK_?);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_12.x = (pVVar15->upVector).x;
        VStack_12.y = (pVVar15->upVector).y;
        VStack_12.z = (pVVar15->upVector).z;
        lVar18 = 0x58;
        if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
          lVar18 = 0x70;
        }
        lVar18 = *(longlong *)((longlong)&this->klass + lVar18);
        fStack_19 = VStack_12.x;
        fStack_20 = VStack_12.y;
        if ((lVar18 != 0) && (lVar18 = *(longlong *)(lVar18 + 0x30), lVar18 != 0)) {
          if (*(int *)(lVar18 + 0x18) == 0) {
            FUN_?();
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          if (*(longlong *)(lVar18 + 0x20) != 0) {
            uStack_22 = *(undefined4 *)(*(longlong *)(lVar18 + 0x20) + 0x34);
            uVar23 = 0x58;
            if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
              uVar23 = 0x70;
            }
            lVar18 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar23);
            if (lVar18 != 0) {
              uStack_24 = *(undefined4 *)(lVar18 + 0x2c);
              lVar18 = 0x58;
              if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
                lVar18 = 0x70;
              }
              lVar18 = *(longlong *)((longlong)&this->klass + lVar18);
              if (lVar18 != 0) {
                pGVar25 = (this->fields)._camXYRotationDrag;
                fVar26 = *(float *)(lVar18 + 0x28);
                if (pGVar25 != (GizmoDblAxisRotationDrag3D *)0x0) {
                  cVar27 = (*(pGVar25->klass->vtable).get_IsActive_1.methodPtr)
                                     (pGVar25,(pGVar25->klass->vtable).get_IsActive_1.method);
                  if (cVar27 != '\0') {
                    return;
                  }
                  VVar28.y = fStack_16;
                  VVar28.x = fStack_17;
                  VVar29.y = fStack_20;
                  VVar29.x = fStack_19;
                  (pGVar25->fields)._workData.ScreenAxis0 = VVar28;
                  (pGVar25->fields)._workData.ScreenAxis1 = VVar29;
                  (pGVar25->fields)._workData.Axis0.x = (float)(undefined4)uStack_6;
                  (pGVar25->fields)._workData.Axis0.y = (float)uStack_6._4_4_;
                  *(ulonglong *)&(pGVar25->fields)._workData.Axis0.z = CONCAT44(uStack_8,fStack_7);
                  (pGVar25->fields)._workData.Axis1.y = (float)uStack_4;
                  (pGVar25->fields)._workData.Axis1.z = fStack_5;
                  (pGVar25->fields)._workData.SnapMode = uStack_22;
                  (pGVar25->fields)._workData.SnapStep0 = (float)uStack_24;
                  (pGVar25->fields)._workData.SnapStep1 = fVar26;
                  return;
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


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnGizmoRender
               (RotationGizmo *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar1[7].monitor != (MonitorData *)0x0) {
      if (1 < *(int *)(pOVar1[7].monitor + 0x18)) {
        pGVar2 = (this->fields)._midCap;
        if (pGVar2 == (GizmoCap3D *)0x0) goto code_?;
        GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar2,camera,(MethodInfo *)0x0);
        this_00 = (this->fields)._axesSliders;
        if (this_00 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_ApplyZoomFactor
                  (this_00,camera,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._camLookSlider;
        if (pGVar3 == (GizmoPlaneSlider2D *)0x0) goto code_?;
        if ((pGVar3->fields)._isBorderVisible != 0) {
          RotationGizmo_UpdateCamLookSlider(this,camera,(MethodInfo *)0x0);
        }
      }
      pGVar4 = (this->fields)._xSlider;
      if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
        (*(pGVar4->klass->vtable).Render_1.methodPtr)
                  (pGVar4,camera,(pGVar4->klass->vtable).Render_1.method);
        pGVar4 = (this->fields)._ySlider;
        if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
          (*(pGVar4->klass->vtable).Render_1.methodPtr)
                    (pGVar4,camera,(pGVar4->klass->vtable).Render_1.method);
          pGVar4 = (this->fields)._zSlider;
          if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
            (*(pGVar4->klass->vtable).Render_1.methodPtr)
                      (pGVar4,camera,(pGVar4->klass->vtable).Render_1.method);
            pGVar2 = (this->fields)._midCap;
            if (pGVar2 != (GizmoCap3D *)0x0) {
              (*(pGVar2->klass->vtable).Render_1.methodPtr)
                        (pGVar2,camera,(pGVar2->klass->vtable).Render_1.method);
              pGVar3 = (this->fields)._camLookSlider;
              if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pGVar3->klass->vtable).Render_1.methodPtr)
                          (pGVar3,camera,(pGVar3->klass->vtable).Render_1.method);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGizmoTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnGizmoTransformChanged
               (RotationGizmo *this,GizmoTransform *gizmoTransform,
               GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  if ((changeData.ChangeReason != 1) && (changeData.TRSDimension != 2)) {
    return;
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  auStack_2._8_8_ = &UNK_?;
  camera = Gizmo::Gizmo_GetWorkCamera(pGVar1,(MethodInfo *)0x0);
  pGVar4 = (this->fields)._midCap;
  if (pGVar4 != (GizmoCap3D *)0x0) {
    lVar5 = 0xa0;
    if ((pGVar4->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar5 = 0x98;
    }
    lVar5 = *(longlong *)((longlong)&pGVar4->klass + lVar5);
    if (lVar5 != 0) {
      zoomFactor = _UNK_?;
      if (*(char *)(lVar5 + 0x20) != '\0') {
        this_00 = (pGVar4->fields)._._handle;
        if (this_00 == (GizmoHandle *)0x0) goto code_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._._gizmo;
      this_01 = (this->fields)._camLookSlider;
      if ((pGVar1 != (Gizmo *)0x0) &&
         (pGVar6 = (pGVar1->fields)._transform, pGVar6 != (GizmoTransform *)0x0)) {
        pGVar4 = (this->fields)._midCap;
        uVar7._0_4_ = (pGVar6->fields)._position3D.x;
        uVar7._4_4_ = (pGVar6->fields)._position3D.y;
        fVar8 = (pGVar6->fields)._position3D.z;
        if (pGVar4 != (GizmoCap3D *)0x0) {
          fVar9 = GizmoCap3D::GizmoCap3D_GetRealSphereRadius(pGVar4,zoomFactor,(MethodInfo *)0x0);
          lVar5 = 0x60;
          if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
            lVar5 = 0x78;
          }
          lVar5 = *(longlong *)((longlong)&this->klass + lVar5);
          if ((lVar5 != 0) && (this_01 != (GizmoPlaneSlider2D *)0x0)) {
            auStack_2._8_4_ = fVar8;
            auStack_2._0_8_ = uVar7;
            GizmoPlaneSlider2D::GizmoPlaneSlider2D_MakePolySphereBorder
                      (this_01,(Vector3 *)auStack_2,zoomFactor * *(float *)(lVar5 + 0x4c) + fVar9,
                       100,camera,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OnGizmoUpdateBegin
               (RotationGizmo *this,MethodInfo *method)

{
  lVar1 = 0x60;
  lVar2 = 0x60;
  if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
    lVar2 = 0x78;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if ((lVar2 != 0) && (pGVar3 = (this->fields)._midCap, pGVar3 != (GizmoCap3D *)0x0)) {
    bVar4 = *(bool *)(lVar2 + 0x28);
    if ((pGVar3->fields)._._isVisible != bVar4) {
      pGVar5 = pGVar3->klass;
      (pGVar3->fields)._._isVisible = bVar4;
      (*(pGVar5->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar3,(pGVar5->vtable).OnVisibilityStateChanged.method);
    }
    pGVar6 = (this->fields)._camXYRotationDrag;
    lVar2 = 0x58;
    if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
      lVar2 = 0x70;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(longlong *)(lVar2 + 0x20) != 0) && (pGVar6 != (GizmoDblAxisRotationDrag3D *)0x0)) {
        fVar8 = *(float *)(*(longlong *)(lVar2 + 0x20) + 0x4c);
        fVar9 = _UNK_?;
        if (_UNK_? <= fVar8) {
          fVar9 = fVar8;
        }
        (pGVar6->fields)._._sensitivity = fVar9;
        pGVar10 = (this->fields)._xSlider;
        lVar2 = 0x60;
        if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
          lVar2 = 0x78;
        }
        lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0)) {
          if (*(int *)(lVar2 + 0x18) == 0) goto code_?;
          if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
            GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                      (pGVar10,*(char *)(lVar2 + 0x20) != '\0',(MethodInfo *)0x0);
            pGVar10 = (this->fields)._ySlider;
            lVar2 = 0x60;
            if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
              lVar2 = 0x78;
            }
            lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
            if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0)) {
              if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
              if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
                GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                          (pGVar10,*(char *)(lVar2 + 0x21) != '\0',(MethodInfo *)0x0);
                pGVar10 = (this->fields)._zSlider;
                lVar2 = 0x60;
                if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
                  lVar2 = 0x78;
                }
                lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0)) {
                  if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
                  if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
                    GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                              (pGVar10,*(char *)(lVar2 + 0x22) != '\0',(MethodInfo *)0x0);
                    if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
                      lVar1 = 0x78;
                    }
                    lVar2 = *(longlong *)((longlong)&this->klass + lVar1);
                    if ((lVar2 != 0) &&
                       (pGVar11 = (this->fields)._camLookSlider, pGVar11 != (GizmoPlaneSlider2D *)0x0)
                       ) {
                      GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible
                                (pGVar11,*(bool *)(lVar2 + 0x48),(MethodInfo *)0x0);
                      pGVar11 = (this->fields)._camLookSlider;
                      if (pGVar11 != (GizmoPlaneSlider2D *)0x0) {
                        if ((pGVar11->fields)._isBorderVisible != 0) {
                          this_00 = (this->fields)._._gizmo;
                          if (this_00 == (Gizmo *)0x0) goto code_?;
                          camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
                          RotationGizmo_UpdateCamLookSlider(this,camera,(MethodInfo *)0x0);
                        }
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
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean OwnsHandle(Int32) */

bool Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_OwnsHandle
               (RotationGizmo *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._axesSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    bVar1 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                      (this_00,handleId,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 1;
    }
    pGVar2 = (this->fields)._midCap;
    if ((pGVar2 != (GizmoCap3D *)0x0) &&
       (pGVar3 = (pGVar2->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
      return (pGVar3->fields)._id == handleId;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void SetMidCapHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_SetMidCapHoverable
               (RotationGizmo *this,bool hoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCap;
  if (pGVar1 == (GizmoCap3D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields)._._isHoverable != hoverable) {
    (pGVar1->fields)._._isHoverable = hoverable;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar1->klass->vtable).OnHoverableStateChanged.methodPtr)
              (pGVar1,(pGVar1->klass->vtable).OnHoverableStateChanged.method);
    return;
  }
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_SetSnapEnabled
               (RotationGizmo *this,bool isEnabled,MethodInfo *method)

{
  this_00 = (this->fields)._axesSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
              (this_00,isEnabled,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._camXYRotationDrag;
    if (pGVar1 != (GizmoDblAxisRotationDrag3D *)0x0) {
      (pGVar1->fields)._._isSnapEnabled = isEnabled;
      pGVar2 = (this->fields)._camLookSlider;
      if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pGVar2->klass->vtable).SetSnapEnabled_1.methodPtr)
                  (pGVar2,(ulonglong)isEnabled,(pGVar2->klass->vtable).SetSnapEnabled_1.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_SetupSharedLookAndFeel
               (RotationGizmo *this,MethodInfo *method)

{
  iVar1 = iRam_?;
  lVar2 = 0x60;
  lVar3 = 0x60;
  if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
    lVar3 = 0x78;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x40);
    pGVar4 = (this->fields)._xSlider;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
        (pGVar4->fields)._sharedLookAndFeel = *(GizmoPlaneSlider3DLookAndFeel **)(lVar3 + 0x20);
        if (iVar1 != 0) {
          uVar6 = (uint)((ulonglong)&(pGVar4->fields)._sharedLookAndFeel >> 0xc);
          lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar8 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar1 = iRam_?;
          } while (!bVar9);
        }
        lVar3 = 0x60;
        if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
          lVar3 = 0x78;
        }
        lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
        if (lVar3 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x40);
          pGVar4 = (this->fields)._ySlider;
          if (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x18) < 2) goto code_?;
            if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
              (pGVar4->fields)._sharedLookAndFeel =
                   *(GizmoPlaneSlider3DLookAndFeel **)(lVar3 + 0x28);
              iVar10 = 0;
              if (iVar1 != 0) {
                uVar6 = (uint)((ulonglong)&(pGVar4->fields)._sharedLookAndFeel >> 0xc);
                lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
                  puVar8 = (ulonglong *)(lVar3 + 0xADDR);
                  LOCK();
                  bVar9 = uVar7 == *puVar8;
                  if (bVar9) {
                    *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                  iVar10 = iRam_?;
                } while (!bVar9);
              }
              lVar3 = 0x60;
              if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
                lVar3 = 0x78;
              }
              lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
              if (lVar3 != 0) {
                lVar3 = *(longlong *)(lVar3 + 0x40);
                pGVar4 = (this->fields)._zSlider;
                if (lVar3 != 0) {
                  if (*(uint *)(lVar3 + 0x18) < 3) goto code_?;
                  if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
                    (pGVar4->fields)._sharedLookAndFeel =
                         *(GizmoPlaneSlider3DLookAndFeel **)(lVar3 + 0x30);
                    iVar1 = 0;
                    if (iVar10 != 0) {
                      uVar6 = (uint)((ulonglong)&(pGVar4->fields)._sharedLookAndFeel >> 0xc);
                      lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
                        puVar8 = (ulonglong *)(lVar3 + 0xADDR);
                        LOCK();
                        bVar9 = uVar7 == *puVar8;
                        if (bVar9) {
                          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                        iVar1 = iRam_?;
                      } while (!bVar9);
                    }
                    lVar3 = 0x60;
                    if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
                      lVar3 = 0x78;
                    }
                    lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
                    if ((lVar3 != 0) &&
                       (pGVar11 = (this->fields)._camLookSlider, pGVar11 != (GizmoPlaneSlider2D *)0x0)
                       ) {
                      (pGVar11->fields)._sharedLookAndFeel =
                           *(GizmoPlaneSlider2DLookAndFeel **)(lVar3 + 0x50);
                      iVar10 = 0;
                      if (iVar1 != 0) {
                        uVar6 = (uint)((ulonglong)&(pGVar11->fields)._sharedLookAndFeel >> 0xc);
                        lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
                          puVar8 = (ulonglong *)(lVar3 + 0xADDR);
                          LOCK();
                          bVar9 = uVar7 == *puVar8;
                          if (bVar9) {
                            *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                          }
                          UNLOCK();
                          iVar10 = iRam_?;
                        } while (!bVar9);
                      }
                      if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0)
                      {
                        lVar2 = 0x78;
                      }
                      lVar3 = *(longlong *)((longlong)&this->klass + lVar2);
                      if ((lVar3 != 0) &&
                         (pGVar12 = (this->fields)._midCap, pGVar12 != (GizmoCap3D *)0x0)) {
                        (pGVar12->fields)._sharedLookAndFeel =
                             *(GizmoCap3DLookAndFeel **)(lVar3 + 0x30);
                        if (iVar10 != 0) {
                          uVar6 = (uint)((ulonglong)&(pGVar12->fields)._sharedLookAndFeel >> 0xc);
                          lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
                            puVar8 = (ulonglong *)(lVar3 + 0xADDR);
                            LOCK();
                            bVar9 = uVar7 == *puVar8;
                            if (bVar9) {
                              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar9);
                        }
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
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupSharedSettings() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_SetupSharedSettings
               (RotationGizmo *this,MethodInfo *method)

{
  iVar1 = iRam_?;
  lVar2 = 0x58;
  lVar3 = 0x58;
  if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
    lVar3 = 0x70;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    pGVar4 = (this->fields)._xSlider;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
        (pGVar4->fields)._sharedSettings = *(GizmoPlaneSlider3DSettings **)(lVar3 + 0x20);
        if (iVar1 != 0) {
          uVar6 = (uint)((ulonglong)&(pGVar4->fields)._sharedSettings >> 0xc);
          lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar8 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar1 = iRam_?;
          } while (!bVar9);
        }
        lVar3 = 0x58;
        if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
          lVar3 = 0x70;
        }
        lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
        if (lVar3 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          pGVar4 = (this->fields)._ySlider;
          if (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x18) < 2) goto code_?;
            if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
              (pGVar4->fields)._sharedSettings = *(GizmoPlaneSlider3DSettings **)(lVar3 + 0x28);
              iVar10 = 0;
              if (iVar1 != 0) {
                uVar6 = (uint)((ulonglong)&(pGVar4->fields)._sharedSettings >> 0xc);
                lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
                  puVar8 = (ulonglong *)(lVar3 + 0xADDR);
                  LOCK();
                  bVar9 = uVar7 == *puVar8;
                  if (bVar9) {
                    *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                  iVar10 = iRam_?;
                } while (!bVar9);
              }
              lVar3 = 0x58;
              if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
                lVar3 = 0x70;
              }
              lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
              if (lVar3 != 0) {
                lVar3 = *(longlong *)(lVar3 + 0x30);
                pGVar4 = (this->fields)._zSlider;
                if (lVar3 != 0) {
                  if (*(uint *)(lVar3 + 0x18) < 3) goto code_?;
                  if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
                    (pGVar4->fields)._sharedSettings =
                         *(GizmoPlaneSlider3DSettings **)(lVar3 + 0x30);
                    iVar1 = 0;
                    if (iVar10 != 0) {
                      uVar6 = (uint)((ulonglong)&(pGVar4->fields)._sharedSettings >> 0xc);
                      lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
                        puVar8 = (ulonglong *)(lVar3 + 0xADDR);
                        LOCK();
                        bVar9 = uVar7 == *puVar8;
                        if (bVar9) {
                          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                        iVar1 = iRam_?;
                      } while (!bVar9);
                    }
                    if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
                      lVar2 = 0x70;
                    }
                    lVar3 = *(longlong *)((longlong)&this->klass + lVar2);
                    if ((lVar3 != 0) &&
                       (pGVar11 = (this->fields)._camLookSlider, pGVar11 != (GizmoPlaneSlider2D *)0x0)
                       ) {
                      (pGVar11->fields)._sharedSettings =
                           *(GizmoPlaneSlider2DSettings **)(lVar3 + 0x38);
                      if (iVar1 != 0) {
                        uVar6 = (uint)((ulonglong)&(pGVar11->fields)._sharedSettings >> 0xc);
                        lVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
                          puVar8 = (ulonglong *)(lVar3 + 0xADDR);
                          LOCK();
                          bVar9 = uVar7 == *puVar8;
                          if (bVar9) {
                            *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar9);
                      }
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateCamLookSlider(Camera) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_UpdateCamLookSlider
               (RotationGizmo *this,Camera *camera,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCap;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    lVar2 = 0xa0;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar2 = 0x98;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if (lVar2 != 0) {
      zoomFactor = _UNK_?;
      if (*(char *)(lVar2 + 0x20) != '\0') {
        this_00 = (pGVar1->fields)._._handle;
        if (this_00 == (GizmoHandle *)0x0) goto code_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      }
      pGVar3 = (this->fields)._._gizmo;
      this_01 = (this->fields)._camLookSlider;
      if ((pGVar3 != (Gizmo *)0x0) &&
         (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
        pGVar1 = (this->fields)._midCap;
        uVar5._0_4_ = (pGVar4->fields)._position3D.x;
        uVar5._4_4_ = (pGVar4->fields)._position3D.y;
        fVar6 = (pGVar4->fields)._position3D.z;
        if (pGVar1 != (GizmoCap3D *)0x0) {
          fVar7 = GizmoCap3D::GizmoCap3D_GetRealSphereRadius(pGVar1,zoomFactor,(MethodInfo *)0x0);
          lVar2 = 0x60;
          if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
            lVar2 = 0x78;
          }
          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
          if ((lVar2 != 0) && (this_01 != (GizmoPlaneSlider2D *)0x0)) {
            aVStack_8[0]._0_8_ = uVar5;
            aVStack_8[0].z = fVar6;
            GizmoPlaneSlider2D::GizmoPlaneSlider2D_MakePolySphereBorder
                      (this_01,aVStack_8,zoomFactor * *(float *)(lVar2 + 0x4c) + fVar7,100,camera,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* RotationGizmo() */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo__ctor
               (RotationGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoDblAxisRotationDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RotationGizmoLookAndFeel3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RotationGizmoSettings3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (GizmoPlaneSlider3DCollection *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._axesSliders = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._axesSliders >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (GizmoDblAxisRotationDrag3D *)FUN_?(TypeInfo__RTG__GizmoDblAxisRotationDrag3D);
  (this_01->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)this_01,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._camXYRotationDrag = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._camXYRotationDrag >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_02 = (RotationGizmoSettings3D *)FUN_?(TypeInfo__RTG__RotationGizmoSettings3D);
  RotationGizmoSettings3D::RotationGizmoSettings3D__ctor(this_02,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._settings3D = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._settings3D >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_03 = (RotationGizmoLookAndFeel3D *)FUN_?(TypeInfo__RTG__RotationGizmoLookAndFeel3D);
  RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D__ctor(this_03,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._lookAndFeel3D = this_03;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._lookAndFeel3D >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._._isEnabled = 1;
  (this->fields)._useSnapEnableHotkey = 1;
  return;
}


/* RotationGizmoLookAndFeel3D get_LookAndFeel3D() */

RotationGizmoLookAndFeel3D *
Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_get_LookAndFeel3D
          (RotationGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel3D == (RotationGizmoLookAndFeel3D *)0x0) {
    return (this->fields)._lookAndFeel3D;
  }
  return (this->fields)._sharedLookAndFeel3D;
}


/* RotationGizmoSettings3D get_Settings3D() */

RotationGizmoSettings3D *
Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_get_Settings3D
          (RotationGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings3D == (RotationGizmoSettings3D *)0x0) {
    return (this->fields)._settings3D;
  }
  return (this->fields)._sharedSettings3D;
}


/* Void set_SharedLookAndFeel3D(RotationGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_set_SharedLookAndFeel3D
               (RotationGizmo *this,RotationGizmoLookAndFeel3D *value,MethodInfo *method)

{
  bVar1 = uRam_? != 0;
  (this->fields)._sharedLookAndFeel3D = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sharedLookAndFeel3D >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  uVar2 = uRam_?;
  lVar6 = 0x60;
  lVar7 = 0x60;
  if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
    lVar7 = 0x78;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x40);
    pGVar8 = (this->fields)._xSlider;
    if (lVar7 != 0) {
      pRVar9 = this;
      if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
        FUN_?(pRVar9,this,method);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
        (pGVar8->fields)._sharedLookAndFeel = *(GizmoPlaneSlider3DLookAndFeel **)(lVar7 + 0x20);
        if (uVar2 != 0) {
          uVar11 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
          lVar7 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
          method = (MethodInfo *)(lVar7 + 0xADDR);
          do {
            uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
            if (bVar1) {
              *(ulonglong *)(lVar7 + 0xADDR) = uVar5 | 1L << (ulonglong)(uVar11 & 0x3f);
            }
            UNLOCK();
            uVar2 = uRam_?;
          } while (!bVar1);
        }
        pRVar9 = (RotationGizmo *)(ulonglong)uVar2;
        lVar7 = 0x60;
        if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
          lVar7 = 0x78;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x40);
          pGVar8 = (this->fields)._ySlider;
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto code_?;
            if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
              (pGVar8->fields)._sharedLookAndFeel =
                   *(GizmoPlaneSlider3DLookAndFeel **)(lVar7 + 0x28);
              if (uVar2 != 0) {
                uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
                lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                method = (MethodInfo *)(lVar7 + 0xADDR);
                do {
                  uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                  if (bVar1) {
                    *(ulonglong *)(lVar7 + 0xADDR) = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar1);
                pRVar9 = (RotationGizmo *)(ulonglong)uRam_?;
              }
              lVar7 = 0x60;
              if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
                lVar7 = 0x78;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x40);
                pGVar8 = (this->fields)._zSlider;
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) < 3) goto code_?;
                  if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                    (pGVar8->fields)._sharedLookAndFeel =
                         *(GizmoPlaneSlider3DLookAndFeel **)(lVar7 + 0x30);
                    if ((int)pRVar9 != 0) {
                      uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                        puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                        LOCK();
                        bVar1 = uVar5 == *puVar3;
                        if (bVar1) {
                          *puVar3 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar1);
                      pRVar9 = (RotationGizmo *)(ulonglong)uRam_?;
                    }
                    lVar7 = 0x60;
                    if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0) {
                      lVar7 = 0x78;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if ((lVar7 != 0) &&
                       (pGVar12 = (this->fields)._camLookSlider, pGVar12 != (GizmoPlaneSlider2D *)0x0)
                       ) {
                      (pGVar12->fields)._sharedLookAndFeel =
                           *(GizmoPlaneSlider2DLookAndFeel **)(lVar7 + 0x50);
                      uVar2 = 0;
                      if ((int)pRVar9 != 0) {
                        uVar11 = (uint)((ulonglong)&(pGVar12->fields)._sharedLookAndFeel >> 0xc);
                        lVar7 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                          puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                          LOCK();
                          bVar1 = uVar5 == *puVar3;
                          if (bVar1) {
                            *puVar3 = uVar5 | 1L << (ulonglong)(uVar11 & 0x3f);
                          }
                          UNLOCK();
                          uVar2 = uRam_?;
                        } while (!bVar1);
                      }
                      if ((this->fields)._sharedLookAndFeel3D != (RotationGizmoLookAndFeel3D *)0x0)
                      {
                        lVar6 = 0x78;
                      }
                      lVar7 = *(longlong *)((longlong)&this->klass + lVar6);
                      if ((lVar7 != 0) &&
                         (pGVar13 = (this->fields)._midCap, pGVar13 != (GizmoCap3D *)0x0)) {
                        (pGVar13->fields)._sharedLookAndFeel =
                             *(GizmoCap3DLookAndFeel **)(lVar7 + 0x30);
                        if (uVar2 != 0) {
                          uVar2 = (uint)((ulonglong)&(pGVar13->fields)._sharedLookAndFeel >> 0xc);
                          lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                            puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                            LOCK();
                            bVar1 = uVar5 == *puVar3;
                            if (bVar1) {
                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar1);
                        }
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
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_SharedSettings3D(RotationGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::RotationGizmo::RotationGizmo_set_SharedSettings3D
               (RotationGizmo *this,RotationGizmoSettings3D *value,MethodInfo *method)

{
  bVar1 = uRam_? != 0;
  (this->fields)._sharedSettings3D = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sharedSettings3D >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  uVar2 = uRam_?;
  lVar6 = 0x58;
  lVar7 = 0x58;
  if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
    lVar7 = 0x70;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    pGVar8 = (this->fields)._xSlider;
    if (lVar7 != 0) {
      pRVar9 = this;
      if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
        FUN_?(pRVar9,this,method);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
        (pGVar8->fields)._sharedSettings = *(GizmoPlaneSlider3DSettings **)(lVar7 + 0x20);
        if (uVar2 != 0) {
          uVar11 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
          lVar7 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
          method = (MethodInfo *)(lVar7 + 0xADDR);
          do {
            uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
            if (bVar1) {
              *(ulonglong *)(lVar7 + 0xADDR) = uVar5 | 1L << (ulonglong)(uVar11 & 0x3f);
            }
            UNLOCK();
            uVar2 = uRam_?;
          } while (!bVar1);
        }
        pRVar9 = (RotationGizmo *)(ulonglong)uVar2;
        lVar7 = 0x58;
        if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
          lVar7 = 0x70;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          pGVar8 = (this->fields)._ySlider;
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto code_?;
            if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
              (pGVar8->fields)._sharedSettings = *(GizmoPlaneSlider3DSettings **)(lVar7 + 0x28);
              if (uVar2 != 0) {
                uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
                lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                method = (MethodInfo *)(lVar7 + 0xADDR);
                do {
                  uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                  if (bVar1) {
                    *(ulonglong *)(lVar7 + 0xADDR) = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar1);
                pRVar9 = (RotationGizmo *)(ulonglong)uRam_?;
              }
              lVar7 = 0x58;
              if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
                lVar7 = 0x70;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x30);
                pGVar8 = (this->fields)._zSlider;
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) < 3) goto code_?;
                  if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                    (pGVar8->fields)._sharedSettings =
                         *(GizmoPlaneSlider3DSettings **)(lVar7 + 0x30);
                    if ((int)pRVar9 != 0) {
                      uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                        puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                        LOCK();
                        bVar1 = uVar5 == *puVar3;
                        if (bVar1) {
                          *puVar3 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar1);
                      pRVar9 = (RotationGizmo *)(ulonglong)uRam_?;
                    }
                    if ((this->fields)._sharedSettings3D != (RotationGizmoSettings3D *)0x0) {
                      lVar6 = 0x70;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar6);
                    if ((lVar7 != 0) &&
                       (pGVar12 = (this->fields)._camLookSlider, pGVar12 != (GizmoPlaneSlider2D *)0x0)
                       ) {
                      (pGVar12->fields)._sharedSettings =
                           *(GizmoPlaneSlider2DSettings **)(lVar7 + 0x38);
                      if ((int)pRVar9 != 0) {
                        uVar2 = (uint)((ulonglong)&(pGVar12->fields)._sharedSettings >> 0xc);
                        lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                          puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                          LOCK();
                          bVar1 = uVar5 == *puVar3;
                          if (bVar1) {
                            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar1);
                      }
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

