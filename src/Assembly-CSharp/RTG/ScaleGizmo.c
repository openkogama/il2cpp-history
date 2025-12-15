
/* Single GetZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_GetZoomFactor
                (ScaleGizmo *this,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xa0;
  if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0xc0;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x28), lVar1 != 0)) {
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

float Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_GetZoomFactor_1
                (ScaleGizmo *this,Vector3 *position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xa0;
  if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0xc0;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x28), lVar1 != 0)) {
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

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_OnAttached
               (ScaleGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoCap3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  pGVar2 = (GizmoCap3D *)FUN_?(TypeInfo__RTG__GizmoCap3D);
  GizmoCap3D::GizmoCap3D__ctor(pGVar2,pGVar1,0xc9,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._midCap = pGVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._midCap >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
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
              (pGVar2,(IGizmoDragSession *)(this->fields)._unformScaleDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar8 = (GizmoLineSlider3D *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
    GizmoLineSlider3D::GizmoLineSlider3D__ctor(pGVar8,pGVar1,0x14,0x1a,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields)._pstvXSlider = pGVar8;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._pstvXSlider >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pGVar8 = (this->fields)._pstvXSlider;
    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
      (pGVar8->fields)._dragChannel = 3;
      (pGVar8->fields)._selectedDragSession = (IGizmoDragSession *)(pGVar8->fields)._scaleDrag;
      func_?(&(pGVar8->fields)._selectedDragSession);
      pGVar9 = (pGVar8->fields)._._handle;
      if (pGVar9 != (GizmoHandle *)0x0) {
        bVar3 = iRam_? != 0;
        (pGVar9->fields)._DragSession_k__BackingField = (pGVar8->fields)._selectedDragSession;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(pGVar9->fields)._DragSession_k__BackingField >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pGVar2 = (pGVar8->fields)._cap3D;
        if (pGVar2 != (GizmoCap3D *)0x0) {
          GizmoCap3D::GizmoCap3D_set_DragSession
                    (pGVar2,(pGVar8->fields)._selectedDragSession,(MethodInfo *)0x0);
          pGVar8 = (this->fields)._pstvXSlider;
          if (pGVar8 != (GizmoLineSlider3D *)0x0) {
            bVar10 = GizmoLineSlider3D::GizmoLineSlider3D_get_IsDragged(pGVar8,(MethodInfo *)0x0);
            if (bVar10 == 0) {
              pGVar11 = (pGVar8->fields)._directionAxisMap;
              if (pGVar11 == (GizmoTransformAxisMap3D *)0x0) goto code_?;
              GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
                        (pGVar11,(pGVar8->fields)._transform,0,AxisSign__Enum_Positive,
                         (MethodInfo *)0x0);
            }
            pGVar8 = (this->fields)._pstvXSlider;
            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
              (pGVar8->fields)._scaleDragAxisIndex = 0;
              pGVar1 = (this->fields)._._gizmo;
              pGVar8 = (GizmoLineSlider3D *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
              GizmoLineSlider3D::GizmoLineSlider3D__ctor(pGVar8,pGVar1,0x17,0x1d,(MethodInfo *)0x0)
              ;
              bVar3 = iRam_? != 0;
              (this->fields)._negXSlider = pGVar8;
              if (bVar3) {
                uVar4 = (uint)((ulonglong)&(this->fields)._negXSlider >> 0xc);
                lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                do {
                  uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                  puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                  LOCK();
                  bVar3 = uVar6 == *puVar7;
                  if (bVar3) {
                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar3);
              }
              pGVar8 = (this->fields)._negXSlider;
              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                (pGVar8->fields)._dragChannel = 3;
                (pGVar8->fields)._selectedDragSession =
                     (IGizmoDragSession *)(pGVar8->fields)._scaleDrag;
                func_?(&(pGVar8->fields)._selectedDragSession);
                pGVar9 = (pGVar8->fields)._._handle;
                if (pGVar9 != (GizmoHandle *)0x0) {
                  bVar3 = iRam_? != 0;
                  (pGVar9->fields)._DragSession_k__BackingField =
                       (pGVar8->fields)._selectedDragSession;
                  if (bVar3) {
                    uVar4 = (uint)((ulonglong)&(pGVar9->fields)._DragSession_k__BackingField >> 0xc
                                   );
                    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                      LOCK();
                      bVar3 = uVar6 == *puVar7;
                      if (bVar3) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar3);
                  }
                  pGVar2 = (pGVar8->fields)._cap3D;
                  if (pGVar2 != (GizmoCap3D *)0x0) {
                    GizmoCap3D::GizmoCap3D_set_DragSession
                              (pGVar2,(pGVar8->fields)._selectedDragSession,(MethodInfo *)0x0);
                    pGVar8 = (this->fields)._negXSlider;
                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                      bVar10 = GizmoLineSlider3D::GizmoLineSlider3D_get_IsDragged
                                         (pGVar8,(MethodInfo *)0x0);
                      if (bVar10 == 0) {
                        pGVar11 = (pGVar8->fields)._directionAxisMap;
                        if (pGVar11 == (GizmoTransformAxisMap3D *)0x0) goto code_?;
                        GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
                                  (pGVar11,(pGVar8->fields)._transform,0,AxisSign__Enum_Negative,
                                   (MethodInfo *)0x0);
                      }
                      pGVar8 = (this->fields)._negXSlider;
                      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                        (pGVar8->fields)._scaleDragAxisIndex = 0;
                        pGVar1 = (this->fields)._._gizmo;
                        pGVar8 = (GizmoLineSlider3D *)
                                  FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
                        GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                  (pGVar8,pGVar1,0x15,0x1b,(MethodInfo *)0x0);
                        bVar3 = iRam_? != 0;
                        (this->fields)._pstvYSlider = pGVar8;
                        if (bVar3) {
                          uVar4 = (uint)((ulonglong)&(this->fields)._pstvYSlider >> 0xc);
                          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                            LOCK();
                            bVar3 = uVar6 == *puVar7;
                            if (bVar3) {
                              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar3);
                        }
                        pGVar8 = (this->fields)._pstvYSlider;
                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                          (pGVar8->fields)._dragChannel = 3;
                          (pGVar8->fields)._selectedDragSession =
                               (IGizmoDragSession *)(pGVar8->fields)._scaleDrag;
                          func_?(&(pGVar8->fields)._selectedDragSession);
                          pGVar9 = (pGVar8->fields)._._handle;
                          if (pGVar9 != (GizmoHandle *)0x0) {
                            bVar3 = iRam_? != 0;
                            (pGVar9->fields)._DragSession_k__BackingField =
                                 (pGVar8->fields)._selectedDragSession;
                            if (bVar3) {
                              uVar4 = (uint)((ulonglong)
                                              &(pGVar9->fields)._DragSession_k__BackingField >> 0xc)
                              ;
                              lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                                puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                                LOCK();
                                bVar3 = uVar6 == *puVar7;
                                if (bVar3) {
                                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar3);
                            }
                            pGVar2 = (pGVar8->fields)._cap3D;
                            if (pGVar2 != (GizmoCap3D *)0x0) {
                              GizmoCap3D::GizmoCap3D_set_DragSession
                                        (pGVar2,(pGVar8->fields)._selectedDragSession,
                                         (MethodInfo *)0x0);
                              pGVar8 = (this->fields)._pstvYSlider;
                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                bVar10 = GizmoLineSlider3D::GizmoLineSlider3D_get_IsDragged
                                                   (pGVar8,(MethodInfo *)0x0);
                                if (bVar10 == 0) {
                                  pGVar11 = (pGVar8->fields)._directionAxisMap;
                                  if (pGVar11 == (GizmoTransformAxisMap3D *)0x0)
                                  goto code_?;
                                  GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
                                            (pGVar11,(pGVar8->fields)._transform,1,
                                             AxisSign__Enum_Positive,(MethodInfo *)0x0);
                                }
                                pGVar8 = (this->fields)._pstvYSlider;
                                if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                  (pGVar8->fields)._scaleDragAxisIndex = 1;
                                  pGVar1 = (this->fields)._._gizmo;
                                  pGVar8 = (GizmoLineSlider3D *)
                                            FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
                                  GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                            (pGVar8,pGVar1,0x18,0x1e,(MethodInfo *)0x0);
                                  bVar3 = iRam_? != 0;
                                  (this->fields)._negYSlider = pGVar8;
                                  if (bVar3) {
                                    uVar4 = (uint)((ulonglong)&(this->fields)._negYSlider >> 0xc);
                                    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                                    do {
                                      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                                      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                                      LOCK();
                                      bVar3 = uVar6 == *puVar7;
                                      if (bVar3) {
                                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                      }
                                      UNLOCK();
                                    } while (!bVar3);
                                  }
                                  pGVar8 = (this->fields)._negYSlider;
                                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                    (pGVar8->fields)._dragChannel = 3;
                                    (pGVar8->fields)._selectedDragSession =
                                         (IGizmoDragSession *)(pGVar8->fields)._scaleDrag;
                                    func_?(&(pGVar8->fields)._selectedDragSession);
                                    pGVar9 = (pGVar8->fields)._._handle;
                                    if (pGVar9 != (GizmoHandle *)0x0) {
                                      bVar3 = iRam_? != 0;
                                      (pGVar9->fields)._DragSession_k__BackingField =
                                           (pGVar8->fields)._selectedDragSession;
                                      if (bVar3) {
                                        uVar4 = (uint)((ulonglong)
                                                        &(pGVar9->fields).
                                                         _DragSession_k__BackingField >> 0xc);
                                        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                                        do {
                                          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                                          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                                          LOCK();
                                          bVar3 = uVar6 == *puVar7;
                                          if (bVar3) {
                                            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar3);
                                      }
                                      pGVar2 = (pGVar8->fields)._cap3D;
                                      if (pGVar2 != (GizmoCap3D *)0x0) {
                                        GizmoCap3D::GizmoCap3D_set_DragSession
                                                  (pGVar2,(pGVar8->fields)._selectedDragSession,
                                                   (MethodInfo *)0x0);
                                        pGVar8 = (this->fields)._negYSlider;
                                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                          bVar10 = GizmoLineSlider3D::
                                                   GizmoLineSlider3D_get_IsDragged
                                                             (pGVar8,(MethodInfo *)0x0);
                                          if (bVar10 == 0) {
                                            pGVar11 = (pGVar8->fields)._directionAxisMap;
                                            if (pGVar11 == (GizmoTransformAxisMap3D *)0x0)
                                            goto code_?;
                                            GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
                                                      (pGVar11,(pGVar8->fields)._transform,1,
                                                       AxisSign__Enum_Negative,(MethodInfo *)0x0);
                                          }
                                          pGVar8 = (this->fields)._negYSlider;
                                          if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                            (pGVar8->fields)._scaleDragAxisIndex = 1;
                                            pGVar1 = (this->fields)._._gizmo;
                                            pGVar8 = (GizmoLineSlider3D *)
                                                      FUN_?(TypeInfo__RTG__GizmoLineSlider3D
                                                                   );
                                            GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                                      (pGVar8,pGVar1,0x16,0x1c,(MethodInfo *)0x0);
                                            bVar3 = iRam_? != 0;
                                            (this->fields)._pstvZSlider = pGVar8;
                                            if (bVar3) {
                                              uVar4 = (uint)((ulonglong)
                                                              &(this->fields)._pstvZSlider >> 0xc);
                                              lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                                              do {
                                                uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                                                puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                                                LOCK();
                                                bVar3 = uVar6 == *puVar7;
                                                if (bVar3) {
                                                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar3);
                                            }
                                            pGVar8 = (this->fields)._pstvZSlider;
                                            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                              GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                                        (pGVar8,GizmoDragChannel__Enum_Scale,
                                                         (MethodInfo *)0x0);
                                              pGVar8 = (this->fields)._pstvZSlider;
                                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                                GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                                          (pGVar8,2,AxisSign__Enum_Positive,
                                                           (MethodInfo *)0x0);
                                                pGVar8 = (this->fields)._pstvZSlider;
                                                if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                                  (pGVar8->fields)._scaleDragAxisIndex = 2;
                                                  pGVar1 = (this->fields)._._gizmo;
                                                  pGVar8 = (GizmoLineSlider3D *)
                                                            FUN_?(
                                                  TypeInfo__RTG__GizmoLineSlider3D);
                                                  GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                                            (pGVar8,pGVar1,0x19,0x1f,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._negZSlider = pGVar8;
                                                  func_?(&(this->fields)._negZSlider);
                                                  pGVar8 = (this->fields)._negZSlider;
                                                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                                    GizmoLineSlider3D::
                                                    GizmoLineSlider3D_SetDragChannel
                                                              (pGVar8,GizmoDragChannel__Enum_Scale,
                                                               (MethodInfo *)0x0);
                                                    pGVar8 = (this->fields)._negZSlider;
                                                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                                      GizmoLineSlider3D::
                                                      GizmoLineSlider3D_MapDirection
                                                                (pGVar8,2,AxisSign__Enum_Negative,
                                                                 (MethodInfo *)0x0);
                                                      pGVar8 = (this->fields)._negZSlider;
                                                      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar8->fields)._scaleDragAxisIndex = 2;
                                                        pGVar12 = (this->fields)._axesSliders;
                                                        if (pGVar12 != (GizmoLineSlider3DCollection *
                                                                      )0x0) {
                                                          GizmoLineSlider3DCollection::
                                                          GizmoLineSlider3DCollection_Add
                                                                    (pGVar12,(this->fields).
                                                                            _pstvXSlider,
                                                                     (MethodInfo *)0x0);
                                                          pGVar12 = (this->fields)._axesSliders;
                                                          if (pGVar12 != (GizmoLineSlider3DCollection
                                                                         *)0x0) {
                                                            GizmoLineSlider3DCollection::
                                                            GizmoLineSlider3DCollection_Add
                                                                      (pGVar12,(this->fields).
                                                                              _pstvYSlider,
                                                                       (MethodInfo *)0x0);
                                                            pGVar12 = (this->fields)._axesSliders;
                                                            if (pGVar12 != (
                                                  GizmoLineSlider3DCollection *)0x0) {
                                                    GizmoLineSlider3DCollection::
                                                    GizmoLineSlider3DCollection_Add
                                                              (pGVar12,(this->fields)._pstvZSlider,
                                                               (MethodInfo *)0x0);
                                                    pGVar12 = (this->fields)._axesSliders;
                                                    if (pGVar12 != (GizmoLineSlider3DCollection *)0x0
                                                       ) {
                                                      GizmoLineSlider3DCollection::
                                                      GizmoLineSlider3DCollection_Add
                                                                (pGVar12,(this->fields)._negXSlider,
                                                                 (MethodInfo *)0x0);
                                                      pGVar12 = (this->fields)._axesSliders;
                                                      if (pGVar12 != (GizmoLineSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider3DCollection::
                                                        GizmoLineSlider3DCollection_Add
                                                                  (pGVar12,(this->fields)._negYSlider
                                                                   ,(MethodInfo *)0x0);
                                                        pGVar12 = (this->fields)._axesSliders;
                                                        if (pGVar12 != (GizmoLineSlider3DCollection *
                                                                      )0x0) {
                                                          GizmoLineSlider3DCollection::
                                                          GizmoLineSlider3DCollection_Add
                                                                    (pGVar12,(this->fields).
                                                                            _negZSlider,
                                                                     (MethodInfo *)0x0);
                                                          pGVar2 = (this->fields)._midCap;
                                                          if (((pGVar2 != (GizmoCap3D *)0x0) &&
                                                              (pGVar9 = (pGVar2->fields)._._handle,
                                                              pGVar9 != (GizmoHandle *)0x0)) &&
                                                             (pGVar12 = (this->fields)._axesSliders,
                                                             pGVar12 != (GizmoLineSlider3DCollection
                                                                        *)0x0)) {
                                                            GizmoLineSlider3DCollection::
                                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar12,(pGVar9->fields).
                                                                    _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar2 = (this->fields)._midCap;
                                                  pGVar12 = (this->fields)._axesSliders;
                                                  if ((pGVar2 != (GizmoCap3D *)0x0) &&
                                                     (pGVar9 = (pGVar2->fields)._._handle,
                                                     pGVar9 != (GizmoHandle *)0x0)) {
                                                    iVar13 = (pGVar9->fields)._id;
                                                    pIVar14 = (IEnumerable_1_System_Int32_ *)
                                                              FUN_?(TypeInfo__System__Int32,
                                                                            3);
                                                    if (pIVar14 !=
                                                        (IEnumerable_1_System_Int32_ *)0x0) {
                                                      if ((*(uint *)&pIVar14[1].monitor < 2) ||
                                                         (*(undefined4 *)
                                                           ((longlong)&pIVar14[2].klass + 4) = 1,
                                                         *(uint *)&pIVar14[1].monitor < 3))
                                                      goto code_?;
                                                      *(undefined4 *)&pIVar14[2].monitor = 2;
                                                      if (pGVar12 != (GizmoLineSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider3DCollection::
                                                                                                                
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar12,iVar13,pIVar14,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar1 = (this->fields)._._gizmo;
                                                  pGVar15 = (GizmoPlaneSlider3D *)
                                                            FUN_?(
                                                  TypeInfo__RTG__GizmoPlaneSlider3D);
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar15,pGVar1,0x23,(MethodInfo *)0x0);
                                                  (this->fields)._xySlider = pGVar15;
                                                  func_?(&(this->fields)._xySlider);
                                                  pGVar15 = (this->fields)._xySlider;
                                                  if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar15,GizmoDragChannel__Enum_Scale,
                                                               (MethodInfo *)0x0);
                                                    pGVar15 = (this->fields)._xySlider;
                                                    if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                                      (pGVar15->fields)._scaleDragAxisIndexRight = 0
                                                      ;
                                                      pGVar15 = (this->fields)._xySlider;
                                                      if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar15->fields)._scaleDragAxisIndexUp = 1;
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar15 = (GizmoPlaneSlider3D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoPlaneSlider3D);
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar15,pGVar1,0x24,(MethodInfo *)0x0);
                                                  (this->fields)._yzSlider = pGVar15;
                                                  func_?(&(this->fields)._yzSlider);
                                                  pGVar15 = (this->fields)._yzSlider;
                                                  if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar15,GizmoDragChannel__Enum_Scale,
                                                               (MethodInfo *)0x0);
                                                    pGVar15 = (this->fields)._yzSlider;
                                                    if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                                      (pGVar15->fields)._scaleDragAxisIndexRight = 1
                                                      ;
                                                      pGVar15 = (this->fields)._yzSlider;
                                                      if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar15->fields)._scaleDragAxisIndexUp = 2;
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar15 = (GizmoPlaneSlider3D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoPlaneSlider3D);
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar15,pGVar1,0x25,(MethodInfo *)0x0);
                                                  (this->fields)._zxSlider = pGVar15;
                                                  func_?(&(this->fields)._zxSlider);
                                                  pGVar15 = (this->fields)._zxSlider;
                                                  if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar15,GizmoDragChannel__Enum_Scale,
                                                               (MethodInfo *)0x0);
                                                    pGVar15 = (this->fields)._zxSlider;
                                                    if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                                      (pGVar15->fields)._scaleDragAxisIndexRight = 2
                                                      ;
                                                      pGVar15 = (this->fields)._zxSlider;
                                                      if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar15->fields)._scaleDragAxisIndexUp = 0;
                                                        pGVar16 = (this->fields)._dblSliders;
                                                        if (pGVar16 != (GizmoPlaneSlider3DCollection
                                                                       *)0x0) {
                                                          GizmoPlaneSlider3DCollection::
                                                          GizmoPlaneSlider3DCollection_Add
                                                                    (pGVar16,(this->fields)._xySlider
                                                                     ,(MethodInfo *)0x0);
                                                          pGVar16 = (this->fields)._dblSliders;
                                                          if (pGVar16 != (
                                                  GizmoPlaneSlider3DCollection *)0x0) {
                                                    GizmoPlaneSlider3DCollection::
                                                    GizmoPlaneSlider3DCollection_Add
                                                              (pGVar16,(this->fields)._yzSlider,
                                                               (MethodInfo *)0x0);
                                                    pGVar16 = (this->fields)._dblSliders;
                                                    if (pGVar16 != (GizmoPlaneSlider3DCollection *)
                                                                  0x0) {
                                                      GizmoPlaneSlider3DCollection::
                                                      GizmoPlaneSlider3DCollection_Add
                                                                (pGVar16,(this->fields)._zxSlider,
                                                                 (MethodInfo *)0x0);
                                                      pGVar15 = (this->fields)._xySlider;
                                                      pGVar12 = (this->fields)._axesSliders;
                                                      if ((pGVar15 != (GizmoPlaneSlider3D *)0x0) &&
                                                         (pGVar9 = (pGVar15->fields)._._handle,
                                                         pGVar9 != (GizmoHandle *)0x0)) {
                                                        iVar13 = (pGVar9->fields)._id;
                                                        pIVar14 = (IEnumerable_1_System_Int32_ *)
                                                                  FUN_?(
                                                  TypeInfo__System__Int32,2);
                                                  pGVar15 = (this->fields)._xySlider;
                                                  if ((pGVar15 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pIVar14 != (IEnumerable_1_System_Int32_ *)0x0)
                                                     ) {
                                                    if (*(int *)&pIVar14[1].monitor == 0) {
code_?:
                                                      FUN_?();
                                                      pcVar17 = (code *)swi(3);
                                                      (*pcVar17)();
                                                      return;
                                                    }
                                                    *(int32_t *)&pIVar14[2].klass =
                                                         (pGVar15->fields)._scaleDragAxisIndexRight;
                                                    pGVar15 = (this->fields)._xySlider;
                                                    if (pGVar15 == (GizmoPlaneSlider3D *)0x0)
                                                    goto code_?;
                                                    if (*(uint *)&pIVar14[1].monitor < 2)
                                                    goto code_?;
                                                    *(int32_t *)((longlong)&pIVar14[2].klass + 4) =
                                                         (pGVar15->fields)._scaleDragAxisIndexUp;
                                                    if (pGVar12 != (GizmoLineSlider3DCollection *)0x0
                                                       ) {
                                                      GizmoLineSlider3DCollection::
                                                                                                            
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar12,iVar13,pIVar14,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar15 = (this->fields)._yzSlider;
                                                  pGVar12 = (this->fields)._axesSliders;
                                                  if ((pGVar15 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pGVar9 = (pGVar15->fields)._._handle,
                                                     pGVar9 != (GizmoHandle *)0x0)) {
                                                    iVar13 = (pGVar9->fields)._id;
                                                    pIVar14 = (IEnumerable_1_System_Int32_ *)
                                                              FUN_?(TypeInfo__System__Int32,
                                                                            2);
                                                    pGVar15 = (this->fields)._yzSlider;
                                                    if ((pGVar15 != (GizmoPlaneSlider3D *)0x0) &&
                                                       (pIVar14 !=
                                                        (IEnumerable_1_System_Int32_ *)0x0)) {
                                                      if (*(int *)&pIVar14[1].monitor == 0)
                                                      goto code_?;
                                                      *(int32_t *)&pIVar14[2].klass =
                                                           (pGVar15->fields).
                                                           _scaleDragAxisIndexRight;
                                                      pGVar15 = (this->fields)._yzSlider;
                                                      if (pGVar15 == (GizmoPlaneSlider3D *)0x0)
                                                      goto code_?;
                                                      if (*(uint *)&pIVar14[1].monitor < 2)
                                                      goto code_?;
                                                      *(int32_t *)((longlong)&pIVar14[2].klass + 4)
                                                           = (pGVar15->fields)._scaleDragAxisIndexUp
                                                      ;
                                                      if (pGVar12 != (GizmoLineSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider3DCollection::
                                                                                                                
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar12,iVar13,pIVar14,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar15 = (this->fields)._zxSlider;
                                                  pGVar12 = (this->fields)._axesSliders;
                                                  if ((pGVar15 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pGVar9 = (pGVar15->fields)._._handle,
                                                     pGVar9 != (GizmoHandle *)0x0)) {
                                                    iVar13 = (pGVar9->fields)._id;
                                                    pIVar14 = (IEnumerable_1_System_Int32_ *)
                                                              FUN_?(TypeInfo__System__Int32,
                                                                            2);
                                                    pGVar15 = (this->fields)._zxSlider;
                                                    if ((pGVar15 != (GizmoPlaneSlider3D *)0x0) &&
                                                       (pIVar14 !=
                                                        (IEnumerable_1_System_Int32_ *)0x0)) {
                                                      if (*(int *)&pIVar14[1].monitor == 0)
                                                      goto code_?;
                                                      *(int32_t *)&pIVar14[2].klass =
                                                           (pGVar15->fields).
                                                           _scaleDragAxisIndexRight;
                                                      pGVar15 = (this->fields)._zxSlider;
                                                      if (pGVar15 == (GizmoPlaneSlider3D *)0x0)
                                                      goto code_?;
                                                      if (*(uint *)&pIVar14[1].monitor < 2)
                                                      goto code_?;
                                                      *(int32_t *)((longlong)&pIVar14[2].klass + 4)
                                                           = (pGVar15->fields)._scaleDragAxisIndexUp
                                                      ;
                                                      if (pGVar12 != (GizmoLineSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider3DCollection::
                                                                                                                
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar12,iVar13,pIVar14,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar1 = (this->fields)._._gizmo;
                                                  if (pGVar1 != (Gizmo *)0x0) {
                                                    if (((pGVar1->fields)._dragInfo._isDragged == 0)
                                                       && ((this->fields)._multiAxisScaleMode != 1))
                                                    {
                                                      (this->fields)._multiAxisScaleMode = 1;
                                                      pGVar16 = (this->fields)._dblSliders;
                                                      if (pGVar16 == (GizmoPlaneSlider3DCollection *)
                                                                    0x0) goto code_?;
                                                      GizmoPlaneSlider3DCollection::
                                                      GizmoPlaneSlider3DCollection_SetVisible
                                                                (pGVar16,0,1,(MethodInfo *)0x0);
                                                      pGVar2 = (this->fields)._midCap;
                                                      if (pGVar2 == (GizmoCap3D *)0x0)
                                                      goto code_?;
                                                      if ((pGVar2->fields)._._isVisible != 1) {
                                                        pGVar18 = pGVar2->klass;
                                                        (pGVar2->fields)._._isVisible = 1;
                                                        (*(pGVar18->vtable).OnVisibilityStateChanged.
                                                          methodPtr)();
                                                      }
                                                    }
                                                    ScaleGizmo_SetupSharedLookAndFeel
                                                              (this,(MethodInfo *)0x0);
                                                    lVar19 = 0xa8;
                                                    lVar5 = 0xa8;
                                                    if ((this->fields)._sharedSettings3D !=
                                                        (ScaleGizmoSettings3D *)0x0) {
                                                      lVar5 = 200;
                                                    }
                                                    lVar5 = *(longlong *)
                                                              ((longlong)&this->klass + lVar5);
                                                    if (lVar5 != 0) {
                                                      lVar5 = *(longlong *)(lVar5 + 0x30);
                                                      pGVar8 = (this->fields)._pstvXSlider;
                                                      if (lVar5 != 0) {
                                                        if (*(int *)(lVar5 + 0x18) == 0) {
code_?:
                                                          FUN_?();
                                                          pcVar17 = (code *)swi(3);
                                                          (*pcVar17)();
                                                          return;
                                                        }
                                                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                                          (pGVar8->fields)._sharedSettings =
                                                               *(GizmoLineSlider3DSettings **)
                                                                (lVar5 + 0x20);
                                                          if (iRam_? != 0) {
                                                            uVar4 = (uint)((ulonglong)
                                                                            &(pGVar8->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
                                                            lVar5 = (ulonglong)
                                                                     ((uVar4 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar6 = *(ulonglong *)
                                                                       (lVar5 + 0xADDR);
                                                              puVar7 = (ulonglong *)
                                                                       (lVar5 + 0xADDR);
                                                              LOCK();
                                                              bVar3 = uVar6 == *puVar7;
                                                              if (bVar3) {
                                                                *puVar7 = uVar6 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar3);
                                                  }
                                                  iVar20 = iRam_?;
                                                  lVar5 = 0xa8;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (ScaleGizmoSettings3D *)0x0) {
                                                    lVar5 = 200;
                                                  }
                                                  lVar5 = *(longlong *)
                                                            ((longlong)&this->klass + lVar5);
                                                  if (lVar5 != 0) {
                                                    lVar5 = *(longlong *)(lVar5 + 0x30);
                                                    pGVar8 = (this->fields)._pstvYSlider;
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar8->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar5 + 0x28);
                                                        if (iVar20 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar8->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar5 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar6 = *(ulonglong *)
                                                                     (lVar5 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar5 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar6 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar20 = iRam_?;
                                                          } while (!bVar3);
                                                        }
                                                        lVar5 = 0xa8;
                                                        if ((this->fields)._sharedSettings3D !=
                                                            (ScaleGizmoSettings3D *)0x0) {
                                                          lVar5 = 200;
                                                        }
                                                        lVar5 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar5);
                                                        if (lVar5 != 0) {
                                                          lVar5 = *(longlong *)(lVar5 + 0x30);
                                                          pGVar8 = (this->fields)._pstvZSlider;
                                                          if (lVar5 != 0) {
                                                            if (*(uint *)(lVar5 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar8 != (GizmoLineSlider3D *)0x0)
                                                            {
                                                              (pGVar8->fields)._sharedSettings =
                                                                   *(GizmoLineSlider3DSettings **)
                                                                    (lVar5 + 0x30);
                                                              iVar21 = 0;
                                                              if (iVar20 != 0) {
                                                                uVar4 = (uint)((ulonglong)
                                                                                &(pGVar8->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar5 = (ulonglong)
                                                                         ((uVar4 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar6 = *(ulonglong *)
                                                                           (lVar5 + 0xADDR);
                                                                  puVar7 = (ulonglong *)
                                                                           (lVar5 + 0xADDR);
                                                                  LOCK();
                                                                  bVar3 = uVar6 == *puVar7;
                                                                  if (bVar3) {
                                                                    *puVar7 = uVar6 | 1L << (uVar4 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar21 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar5 = 0xa8;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (ScaleGizmoSettings3D *)0x0) {
                                                    lVar5 = 200;
                                                  }
                                                  lVar5 = *(longlong *)
                                                            ((longlong)&this->klass + lVar5);
                                                  if (lVar5 != 0) {
                                                    pGVar8 = (this->fields)._negXSlider;
                                                    lVar5 = *(longlong *)(lVar5 + 0x30);
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar8->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar5 + 0x38);
                                                        iVar20 = 0;
                                                        if (iVar21 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar8->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar5 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar6 = *(ulonglong *)
                                                                     (lVar5 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar5 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar6 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar20 = iRam_?;
                                                          } while (!bVar3);
                                                        }
                                                        lVar5 = 0xa8;
                                                        if ((this->fields)._sharedSettings3D !=
                                                            (ScaleGizmoSettings3D *)0x0) {
                                                          lVar5 = 200;
                                                        }
                                                        lVar5 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar5);
                                                        if (lVar5 != 0) {
                                                          pGVar8 = (this->fields)._negYSlider;
                                                          lVar5 = *(longlong *)(lVar5 + 0x30);
                                                          if (lVar5 != 0) {
                                                            if (*(uint *)(lVar5 + 0x18) < 5)
                                                            goto code_?;
                                                            if (pGVar8 != (GizmoLineSlider3D *)0x0)
                                                            {
                                                              (pGVar8->fields)._sharedSettings =
                                                                   *(GizmoLineSlider3DSettings **)
                                                                    (lVar5 + 0x40);
                                                              iVar21 = 0;
                                                              if (iVar20 != 0) {
                                                                uVar4 = (uint)((ulonglong)
                                                                                &(pGVar8->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar5 = (ulonglong)
                                                                         ((uVar4 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar6 = *(ulonglong *)
                                                                           (lVar5 + 0xADDR);
                                                                  puVar7 = (ulonglong *)
                                                                           (lVar5 + 0xADDR);
                                                                  LOCK();
                                                                  bVar3 = uVar6 == *puVar7;
                                                                  if (bVar3) {
                                                                    *puVar7 = uVar6 | 1L << (uVar4 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar21 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar5 = 0xa8;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (ScaleGizmoSettings3D *)0x0) {
                                                    lVar5 = 200;
                                                  }
                                                  lVar5 = *(longlong *)
                                                            ((longlong)&this->klass + lVar5);
                                                  if (lVar5 != 0) {
                                                    pGVar8 = (this->fields)._negZSlider;
                                                    lVar5 = *(longlong *)(lVar5 + 0x30);
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 6)
                                                      goto code_?;
                                                      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar8->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar5 + 0x48);
                                                        iVar20 = 0;
                                                        if (iVar21 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar8->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar5 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar6 = *(ulonglong *)
                                                                     (lVar5 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar5 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar6 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar20 = iRam_?;
                                                          } while (!bVar3);
                                                        }
                                                        lVar5 = 0xa8;
                                                        if ((this->fields)._sharedSettings3D !=
                                                            (ScaleGizmoSettings3D *)0x0) {
                                                          lVar5 = 200;
                                                        }
                                                        lVar5 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar5);
                                                        if (lVar5 != 0) {
                                                          lVar5 = *(longlong *)(lVar5 + 0x38);
                                                          pGVar15 = (this->fields)._xySlider;
                                                          if (lVar5 != 0) {
                                                            if (*(int *)(lVar5 + 0x18) == 0)
                                                            goto code_?;
                                                            if (pGVar15 != (GizmoPlaneSlider3D *)0x0
                                                               ) {
                                                              (pGVar15->fields)._sharedSettings =
                                                                   *(GizmoPlaneSlider3DSettings **)
                                                                    (lVar5 + 0x20);
                                                              iVar21 = 0;
                                                              if (iVar20 != 0) {
                                                                uVar4 = (uint)((ulonglong)
                                                                                &(pGVar15->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar5 = (ulonglong)
                                                                         ((uVar4 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar6 = *(ulonglong *)
                                                                           (lVar5 + 0xADDR);
                                                                  puVar7 = (ulonglong *)
                                                                           (lVar5 + 0xADDR);
                                                                  LOCK();
                                                                  bVar3 = uVar6 == *puVar7;
                                                                  if (bVar3) {
                                                                    *puVar7 = uVar6 | 1L << (uVar4 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar21 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar5 = 0xa8;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (ScaleGizmoSettings3D *)0x0) {
                                                    lVar5 = 200;
                                                  }
                                                  lVar5 = *(longlong *)
                                                            ((longlong)&this->klass + lVar5);
                                                  if (lVar5 != 0) {
                                                    lVar5 = *(longlong *)(lVar5 + 0x38);
                                                    pGVar15 = (this->fields)._yzSlider;
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar15->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar5 + 0x28);
                                                        iVar20 = 0;
                                                        if (iVar21 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar15->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar5 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar6 = *(ulonglong *)
                                                                     (lVar5 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar5 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar6 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar6 | 1L << (ulonglong)
                                                                                      (uVar4 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar20 = iRam_?;
                                                          } while (!bVar3);
                                                        }
                                                        if ((this->fields)._sharedSettings3D !=
                                                            (ScaleGizmoSettings3D *)0x0) {
                                                          lVar19 = 200;
                                                        }
                                                        lVar5 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar19);
                                                        if (lVar5 != 0) {
                                                          lVar5 = *(longlong *)(lVar5 + 0x38);
                                                          pGVar15 = (this->fields)._zxSlider;
                                                          if (lVar5 != 0) {
                                                            if (*(uint *)(lVar5 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar15 != (GizmoPlaneSlider3D *)0x0
                                                               ) {
                                                              (pGVar15->fields)._sharedSettings =
                                                                   *(GizmoPlaneSlider3DSettings **)
                                                                    (lVar5 + 0x30);
                                                              if (iVar20 != 0) {
                                                                uVar4 = (uint)((ulonglong)
                                                                                &(pGVar15->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar5 = (ulonglong)
                                                                         ((uVar4 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar6 = *(ulonglong *)
                                                                           (lVar5 + 0xADDR);
                                                                  puVar7 = (ulonglong *)
                                                                           (lVar5 + 0xADDR);
                                                                  LOCK();
                                                                  bVar3 = uVar6 == *puVar7;
                                                                  if (bVar3) {
                                                                    *puVar7 = uVar6 | 1L << (uVar4 
                                                  & 0x3f);
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
                                                  }
                                                  FUN_?();
                                                  pcVar17 = (code *)swi(3);
                                                  (*pcVar17)();
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
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_OnGizmoAttemptHandleDragBegin
               (ScaleGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCap;
  if ((pGVar1 != (GizmoCap3D *)0x0) &&
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
    if (handleId != (pGVar2->fields)._id) {
      return;
    }
    uStack_3 = 0;
    pGVar1 = (this->fields)._midCap;
    VStack_4.x = 0.0;
    VStack_4.y = 0.0;
    VStack_4.z = 0.0;
    fStack_5 = 0.0;
    fStack_6 = 0.0;
    fStack_7 = 0.0;
    auStack_8._0_4_ = 0.0;
    auStack_8._4_4_ = 0.0;
    if ((pGVar1 != (GizmoCap3D *)0x0) &&
       (pGVar9 = (pGVar1->fields)._transform, pGVar9 != (GizmoTransform *)0x0)) {
      auStack_8._0_4_ = (pGVar9->fields)._position3D.x;
      auStack_8._4_4_ = (pGVar9->fields)._position3D.y;
      pGVar10 = (this->fields)._._gizmo;
      uStack_3 = (ulonglong)(uint)(pGVar9->fields)._position3D.z;
      if ((pGVar10 != (Gizmo *)0x0) &&
         ((pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar10,(MethodInfo *)0x0), pCVar11 != (Camera *)0x0
          && (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pCVar11,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0
             )))) {
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_14,pTVar12,(MethodInfo *)0x0);
        pGVar10 = (this->fields)._._gizmo;
        VStack_4.x = pVVar13->x;
        VStack_4.y = pVVar13->y;
        VStack_4.z = pVVar13->z;
        if ((pGVar10 != (Gizmo *)0x0) &&
           ((pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar10,(MethodInfo *)0x0),
            pCVar11 != (Camera *)0x0 &&
            (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar11,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0)
            ))) {
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              (&VStack_14,pTVar12,(MethodInfo *)0x0);
          uVar15 = pVVar13->x;
          uVar16 = pVVar13->y;
          fStack_7 = pVVar13->z;
          lVar17 = 0xa8;
          if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
            lVar17 = 200;
          }
          lVar17 = *(longlong *)((longlong)&this->klass + lVar17);
          fStack_5 = (float)uVar15;
          fStack_6 = (float)uVar16;
          if (lVar17 != 0) {
            GStack_18.SnapStep = *(float *)(lVar17 + 0x28);
            this_00 = (this->fields)._unformScaleDrag;
            uStack_3 = CONCAT44(GStack_18.SnapStep,(undefined4)uStack_3);
            if (this_00 != (GizmoUniformScaleDrag3D *)0x0) {
              GStack_18.CameraUp.x = (float)uVar15;
              GStack_18.CameraRight.z = VStack_4.z;
              GStack_18.CameraUp.z = fStack_7;
              GStack_18.CameraUp.y = (float)uVar16;
              GStack_18.CameraRight.x = VStack_4.x;
              GStack_18.CameraRight.y = VStack_4.y;
              GStack_18.DragOrigin.z = (float)(undefined4)uStack_3;
              GStack_18.DragOrigin.x = (float)auStack_8._0_4_;
              GStack_18.DragOrigin.y = (float)auStack_8._4_4_;
              GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
                        (this_00,&GStack_18,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_OnGizmoRender
               (ScaleGizmo *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
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
        pGVar3 = (this->fields)._axesSliders;
        if (pGVar3 == (GizmoLineSlider3DCollection *)0x0) goto code_?;
        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ApplyZoomFactor
                  (pGVar3,camera,(MethodInfo *)0x0);
        pGVar4 = (this->fields)._dblSliders;
        if (pGVar4 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_ApplyZoomFactor
                  (pGVar4,camera,(MethodInfo *)0x0);
        if ((this->fields)._multiAxisScaleMode == 0) {
          ScaleGizmo_PlaceDblSlidersInSliderPlanes(this,camera,(MethodInfo *)0x0);
        }
      }
      pGVar3 = (this->fields)._axesSliders;
      if ((pGVar3 != (GizmoLineSlider3DCollection *)0x0) &&
         (pLVar5 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_GetRenderSortedSliders
                              (pGVar3,camera,(MethodInfo *)0x0),
         pLVar5 != (List_1_RTG_GizmoLineSlider3D_ *)0x0)) {
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)(uint)(pLVar5->fields)._version << 0x20);
        uStack_12 = 0;
        LStack_13._8_8_ = pLStack_11;
        LStack_13._current = (Object *)0x0;
        uStack_7 = 0;
        pLStack_11 = &LStack_13;
        LStack_13._list = (List_1_System_Object_ *)pLVar5;
        while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_13,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                                  ), bVar14 != 0) {
          if (LStack_13._current == (Object *)0x0) goto code_?;
          (*(code *)(LStack_13._current)->klass[1]._0.nestedTypes)
                    (LStack_13._current,camera,
                     (LStack_13._current)->klass[1]._0.implementedInterfaces);
        }
        pGVar15 = (this->fields)._xySlider;
        if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
          (*(pGVar15->klass->vtable).Render_1.methodPtr)
                    (pGVar15,camera,(pGVar15->klass->vtable).Render_1.method);
          pGVar15 = (this->fields)._yzSlider;
          if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
            (*(pGVar15->klass->vtable).Render_1.methodPtr)
                      (pGVar15,camera,(pGVar15->klass->vtable).Render_1.method);
            pGVar15 = (this->fields)._zxSlider;
            if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
              (*(pGVar15->klass->vtable).Render_1.methodPtr)
                        (pGVar15,camera,(pGVar15->klass->vtable).Render_1.method);
              pGVar2 = (this->fields)._midCap;
              if (pGVar2 != (GizmoCap3D *)0x0) {
                (*(pGVar2->klass->vtable).Render_1.methodPtr)(pGVar2,camera);
                lVar16 = 0xa0;
                if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                  lVar16 = 0xc0;
                }
                lVar16 = *(longlong *)((longlong)&this->klass + lVar16);
                if (lVar16 != 0) {
                  if (*(char *)(lVar16 + 0x50) == '\0') {
                    return;
                  }
                  pGVar17 = (this->fields)._._gizmo;
                  if (pGVar17 != (Gizmo *)0x0) {
                    if ((pGVar17->fields)._dragInfo._isDragged == 0) {
                      return;
                    }
                    sliderHandleId = (pGVar17->fields)._dragInfo._handleId;
                    pGVar3 = (this->fields)._axesSliders;
                    if (pGVar3 != (GizmoLineSlider3DCollection *)0x0) {
                      bVar14 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains_1
                                         (pGVar3,sliderHandleId,(MethodInfo *)0x0);
                      if (bVar14 == 0) {
                        pGVar3 = (this->fields)._axesSliders;
                        if (pGVar3 == (GizmoLineSlider3DCollection *)0x0) goto code_?;
                        bVar14 = GizmoLineSlider3DCollection::
                                 GizmoLineSlider3DCollection_ContainsCapId
                                           (pGVar3,sliderHandleId,(MethodInfo *)0x0);
                        if (bVar14 == 0) {
                          pGVar4 = (this->fields)._dblSliders;
                          if (pGVar4 == (GizmoPlaneSlider3DCollection *)0x0)
                          goto code_?;
                          bVar14 = GizmoPlaneSlider3DCollection::
                                   GizmoPlaneSlider3DCollection_Contains_1
                                             (pGVar4,sliderHandleId,(MethodInfo *)0x0);
                          if (bVar14 == 0) {
                            pGVar2 = (this->fields)._midCap;
                            if ((pGVar2 == (GizmoCap3D *)0x0) ||
                               (pGVar18 = (pGVar2->fields)._._handle, pGVar18 == (GizmoHandle *)0x0))
                            goto code_?;
                            if ((pGVar18->fields)._id != sliderHandleId) {
                              return;
                            }
                          }
                        }
                      }
                      this_00 = (this->fields)._scaleGuide;
                      gameObjects = (this->fields)._scaleGuideTargetObjects;
                      if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      gameObjects_00 =
                           GameObjectEx::GameObjectEx_FilterParentsOnly_1
                                     (gameObjects,(MethodInfo *)0x0);
                      if (this_00 != (GizmoScaleGuide *)0x0) {
                        GizmoScaleGuide::GizmoScaleGuide_Render
                                  (this_00,(IEnumerable_1_UnityEngine_GameObject_ *)gameObjects_00,
                                   camera,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_OnGizmoUpdateBegin
               (ScaleGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._unformScaleDrag;
  lVar2 = 0xa8;
  if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
    lVar2 = 200;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 == 0))
  goto code_?;
  if (*(int *)(lVar2 + 0x18) == 0) goto code_?;
  if ((*(longlong *)(lVar2 + 0x20) == 0) || (pGVar1 == (GizmoUniformScaleDrag3D *)0x0))
  goto code_?;
  fVar3 = *(float *)(*(longlong *)(lVar2 + 0x20) + 0x34);
  fVar4 = _UNK_?;
  if (_UNK_? <= fVar3) {
    fVar4 = fVar3;
  }
  (pGVar1->fields)._._sensitivity = fVar4;
  if ((this->fields)._useMultiAxisScaleModeHotkey != 0) {
    lVar2 = 0xb0;
    if ((this->fields)._sharedHotkeys != (ScaleGizmoHotkeys *)0x0) {
      lVar2 = 0xd0;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (this_00 = *(Hotkeys **)(lVar2 + 0x28), this_00 == (Hotkeys *)0x0))
    goto code_?;
    bVar5 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    pGVar6 = (this->fields)._._gizmo;
    if (pGVar6 == (Gizmo *)0x0) goto code_?;
    if (bVar5 == 0) {
      if (((pGVar6->fields)._dragInfo._isDragged == 0) && ((this->fields)._multiAxisScaleMode != 1))
      {
        (this->fields)._multiAxisScaleMode = 1;
        pGVar7 = (this->fields)._dblSliders;
        if (pGVar7 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                  (pGVar7,0,1,(MethodInfo *)0x0);
        pGVar8 = (this->fields)._midCap;
        if (pGVar8 == (GizmoCap3D *)0x0) goto code_?;
        if ((pGVar8->fields)._._isVisible != 1) {
          (pGVar8->fields)._._isVisible = 1;
code_?:
          (*(pGVar8->klass->vtable).OnVisibilityStateChanged.methodPtr)
                    (pGVar8,(pGVar8->klass->vtable).OnVisibilityStateChanged.method);
        }
      }
    }
    else if (((pGVar6->fields)._dragInfo._isDragged == 0) &&
            ((this->fields)._multiAxisScaleMode != 0)) {
      pGVar7 = (this->fields)._dblSliders;
      (this->fields)._multiAxisScaleMode = 0;
      if (pGVar7 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                (pGVar7,1,1,(MethodInfo *)0x0);
      pGVar8 = (this->fields)._midCap;
      if (pGVar8 == (GizmoCap3D *)0x0) goto code_?;
      if ((pGVar8->fields)._._isVisible != 0) {
        (pGVar8->fields)._._isVisible = 0;
        goto code_?;
      }
    }
  }
  pGVar9 = (this->fields)._pstvXSlider;
  lVar10 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
    lVar2 = 0xc0;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) == 0) {
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (pGVar9 != (GizmoLineSlider3D *)0x0) {
      pGVar12 = pGVar9->klass;
      (pGVar9->fields)._._isVisible = *(char *)(lVar2 + 0x20) != '\0';
      (*(pGVar12->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar9,(pGVar12->vtable).OnVisibilityStateChanged.method);
      pGVar9 = (this->fields)._pstvXSlider;
      uVar13 = 0xa0;
      if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
        uVar13 = 0xc0;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar13);
      if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0)) {
        if (*(int *)(lVar2 + 0x18) == 0) goto code_?;
        if (pGVar9 != (GizmoLineSlider3D *)0x0) {
          bVar14 = *(char *)(lVar2 + 0x20) != '\0';
          pGVar8 = (pGVar9->fields)._cap3D;
          if (pGVar8 != (GizmoCap3D *)0x0) {
            if ((bool)(pGVar8->fields)._._isVisible != bVar14) {
              pGVar15 = pGVar8->klass;
              (pGVar8->fields)._._isVisible = bVar14;
              (*(pGVar15->vtable).OnVisibilityStateChanged.methodPtr)
                        (pGVar8,(pGVar15->vtable).OnVisibilityStateChanged.method);
            }
            pGVar9 = (this->fields)._pstvYSlider;
            lVar2 = 0xa0;
            if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
              lVar2 = 0xc0;
            }
            lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
            if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
              if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
              if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                pGVar12 = pGVar9->klass;
                (pGVar9->fields)._._isVisible = *(char *)(lVar2 + 0x21) != '\0';
                (*(pGVar12->vtable).OnVisibilityStateChanged.methodPtr)
                          (pGVar9,(pGVar12->vtable).OnVisibilityStateChanged.method);
                pGVar9 = (this->fields)._pstvYSlider;
                lVar2 = 0xa0;
                if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                  lVar2 = 0xc0;
                }
                lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0)) {
                  if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
                  if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                    bVar14 = *(char *)(lVar2 + 0x21) != '\0';
                    pGVar8 = (pGVar9->fields)._cap3D;
                    if (pGVar8 != (GizmoCap3D *)0x0) {
                      if ((bool)(pGVar8->fields)._._isVisible != bVar14) {
                        pGVar15 = pGVar8->klass;
                        (pGVar8->fields)._._isVisible = bVar14;
                        (*(pGVar15->vtable).OnVisibilityStateChanged.methodPtr)
                                  (pGVar8,(pGVar15->vtable).OnVisibilityStateChanged.method);
                      }
                      pGVar9 = (this->fields)._pstvZSlider;
                      lVar2 = 0xa0;
                      if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                        lVar2 = 0xc0;
                      }
                      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                      if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
                        if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
                        if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                          pGVar12 = pGVar9->klass;
                          (pGVar9->fields)._._isVisible = *(char *)(lVar2 + 0x22) != '\0';
                          (*(pGVar12->vtable).OnVisibilityStateChanged.methodPtr)
                                    (pGVar9,(pGVar12->vtable).OnVisibilityStateChanged.method);
                          pGVar9 = (this->fields)._pstvZSlider;
                          lVar2 = 0xa0;
                          if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0)
                          {
                            lVar2 = 0xc0;
                          }
                          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                          if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0))
                          {
                            if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
                            if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                              bVar14 = *(char *)(lVar2 + 0x22) != '\0';
                              pGVar8 = (pGVar9->fields)._cap3D;
                              if (pGVar8 != (GizmoCap3D *)0x0) {
                                if ((bool)(pGVar8->fields)._._isVisible != bVar14) {
                                  pGVar15 = pGVar8->klass;
                                  (pGVar8->fields)._._isVisible = bVar14;
                                  (*(pGVar15->vtable).OnVisibilityStateChanged.methodPtr)
                                            (pGVar8,(pGVar15->vtable).OnVisibilityStateChanged.
                                                     method);
                                }
                                pGVar9 = (this->fields)._negXSlider;
                                lVar2 = 0xa0;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (ScaleGizmoLookAndFeel3D *)0x0) {
                                  lVar2 = 0xc0;
                                }
                                lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                if ((lVar2 != 0) &&
                                   (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
                                  if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                                  if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                    pGVar12 = pGVar9->klass;
                                    (pGVar9->fields)._._isVisible = *(char *)(lVar2 + 0x23) != '\0'
                                    ;
                                    (*(pGVar12->vtable).OnVisibilityStateChanged.methodPtr)
                                              (pGVar9,(pGVar12->vtable).OnVisibilityStateChanged.
                                                      method);
                                    pGVar9 = (this->fields)._negXSlider;
                                    lVar2 = 0xa0;
                                    if ((this->fields)._sharedLookAndFeel3D !=
                                        (ScaleGizmoLookAndFeel3D *)0x0) {
                                      lVar2 = 0xc0;
                                    }
                                    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                    if ((lVar2 != 0) &&
                                       (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0)) {
                                      if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                                      if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                        bVar14 = *(char *)(lVar2 + 0x23) != '\0';
                                        pGVar8 = (pGVar9->fields)._cap3D;
                                        if (pGVar8 != (GizmoCap3D *)0x0) {
                                          if ((bool)(pGVar8->fields)._._isVisible != bVar14) {
                                            pGVar15 = pGVar8->klass;
                                            (pGVar8->fields)._._isVisible = bVar14;
                                            (*(pGVar15->vtable).OnVisibilityStateChanged.methodPtr)
                                                      (pGVar8,(pGVar15->vtable).
                                                               OnVisibilityStateChanged.method);
                                          }
                                          pGVar9 = (this->fields)._negYSlider;
                                          lVar2 = 0xa0;
                                          if ((this->fields)._sharedLookAndFeel3D !=
                                              (ScaleGizmoLookAndFeel3D *)0x0) {
                                            lVar2 = 0xc0;
                                          }
                                          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                          if ((lVar2 != 0) &&
                                             (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
                                            if (*(uint *)(lVar2 + 0x18) < 5)
                                            goto code_?;
                                            if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                              pGVar12 = pGVar9->klass;
                                              (pGVar9->fields)._._isVisible =
                                                   *(char *)(lVar2 + 0x24) != '\0';
                                              (*(pGVar12->vtable).OnVisibilityStateChanged.methodPtr)
                                                        (pGVar9,(pGVar12->vtable).
                                                                OnVisibilityStateChanged.method);
                                              pGVar9 = (this->fields)._negYSlider;
                                              lVar2 = 0xa0;
                                              if ((this->fields)._sharedLookAndFeel3D !=
                                                  (ScaleGizmoLookAndFeel3D *)0x0) {
                                                lVar2 = 0xc0;
                                              }
                                              lVar2 = *(longlong *)
                                                        ((longlong)&this->klass + lVar2);
                                              if ((lVar2 != 0) &&
                                                 (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0
                                                 )) {
                                                if (*(uint *)(lVar2 + 0x18) < 5)
                                                goto code_?;
                                                if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                                  bVar14 = *(char *)(lVar2 + 0x24) != '\0';
                                                  pGVar8 = (pGVar9->fields)._cap3D;
                                                  if (pGVar8 != (GizmoCap3D *)0x0) {
                                                    if ((bool)(pGVar8->fields)._._isVisible !=
                                                        bVar14) {
                                                      pGVar15 = pGVar8->klass;
                                                      (pGVar8->fields)._._isVisible = bVar14;
                                                      (*(pGVar15->vtable).OnVisibilityStateChanged.
                                                        methodPtr)(pGVar8,(pGVar15->vtable).
                                                                           OnVisibilityStateChanged.
                                                                           method);
                                                    }
                                                    pGVar9 = (this->fields)._negZSlider;
                                                    lVar2 = 0xa0;
                                                    if ((this->fields)._sharedLookAndFeel3D !=
                                                        (ScaleGizmoLookAndFeel3D *)0x0) {
                                                      lVar2 = 0xc0;
                                                    }
                                                    lVar2 = *(longlong *)
                                                              ((longlong)&this->klass + lVar2);
                                                    if ((lVar2 != 0) &&
                                                       (lVar2 = *(longlong *)(lVar2 + 0x30),
                                                       lVar2 != 0)) {
                                                      if (*(uint *)(lVar2 + 0x18) < 6)
                                                      goto code_?;
                                                      if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                                        pGVar12 = pGVar9->klass;
                                                        (pGVar9->fields)._._isVisible =
                                                             *(char *)(lVar2 + 0x25) != '\0';
                                                        (*(pGVar12->vtable).OnVisibilityStateChanged.
                                                          methodPtr)(pGVar9,(pGVar12->vtable).
                                                                            OnVisibilityStateChanged
                                                                            .method);
                                                        pGVar9 = (this->fields)._negZSlider;
                                                        lVar2 = 0xa0;
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (ScaleGizmoLookAndFeel3D *)0x0) {
                                                          lVar2 = 0xc0;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if ((lVar2 != 0) &&
                                                           (lVar2 = *(longlong *)(lVar2 + 0x38),
                                                           lVar2 != 0)) {
                                                          if (*(uint *)(lVar2 + 0x18) < 6)
                                                          goto code_?;
                                                          if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                                            bVar14 = *(char *)(lVar2 + 0x25) !=
                                                                     '\0';
                                                            pGVar8 = (pGVar9->fields)._cap3D;
                                                            if (pGVar8 != (GizmoCap3D *)0x0) {
                                                              if ((bool)(pGVar8->fields)._.
                                                                        _isVisible != bVar14) {
                                                                pGVar15 = pGVar8->klass;
                                                                (pGVar8->fields)._._isVisible =
                                                                     bVar14;
                                                                (*(pGVar15->vtable).
                                                                  OnVisibilityStateChanged.methodPtr
                                                                )(pGVar8,(pGVar15->vtable).
                                                                          OnVisibilityStateChanged.
                                                                          method);
                                                              }
                                                              if ((this->fields)._multiAxisScaleMode
                                                                  != 0) {
                                                                return;
                                                              }
                                                              pGVar16 = (this->fields)._xySlider;
                                                              lVar2 = 0xa0;
                                                              if ((this->fields).
                                                                  _sharedLookAndFeel3D !=
                                                                  (ScaleGizmoLookAndFeel3D *)0x0) {
                                                                lVar2 = 0xc0;
                                                              }
                                                              lVar2 = *(longlong *)
                                                                        ((longlong)&this->klass +
                                                                        lVar2);
                                                              if ((lVar2 != 0) &&
                                                                 (lVar2 = *(longlong *)
                                                                            (lVar2 + 0x40),
                                                                 lVar2 != 0)) {
                                                                if (*(int *)(lVar2 + 0x18) == 0)
                                                                goto code_?;
                                                                if (pGVar16 != (GizmoPlaneSlider3D *)
                                                                              0x0) {
                                                                  pGVar17 = pGVar16->klass;
                                                                  (pGVar16->fields)._._isVisible =
                                                                       *(char *)(lVar2 + 0x20) !=
                                                                       '\0';
                                                                  (*(pGVar17->vtable).
                                                                    OnVisibilityStateChanged.
                                                                    methodPtr)(pGVar16,(pGVar17->
                                                  vtable).OnVisibilityStateChanged.method);
                                                  pGVar16 = (this->fields)._xySlider;
                                                  if (pGVar16 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetBorderVisible
                                                              ((this->fields)._xySlider,
                                                               (pGVar16->fields)._._isVisible,
                                                               (MethodInfo *)0x0);
                                                    pGVar16 = (this->fields)._yzSlider;
                                                    lVar2 = 0xa0;
                                                    if ((this->fields)._sharedLookAndFeel3D !=
                                                        (ScaleGizmoLookAndFeel3D *)0x0) {
                                                      lVar2 = 0xc0;
                                                    }
                                                    lVar2 = *(longlong *)
                                                              ((longlong)&this->klass + lVar2);
                                                    if ((lVar2 != 0) &&
                                                       (lVar2 = *(longlong *)(lVar2 + 0x40),
                                                       lVar2 != 0)) {
                                                      if (*(uint *)(lVar2 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar16 != (GizmoPlaneSlider3D *)0x0) {
                                                        pGVar17 = pGVar16->klass;
                                                        (pGVar16->fields)._._isVisible =
                                                             *(char *)(lVar2 + 0x21) != '\0';
                                                        (*(pGVar17->vtable).OnVisibilityStateChanged.
                                                          methodPtr)(pGVar16,(pGVar17->vtable).
                                                                            OnVisibilityStateChanged
                                                                            .method);
                                                        pGVar16 = (this->fields)._yzSlider;
                                                        if (pGVar16 != (GizmoPlaneSlider3D *)0x0) {
                                                          GizmoPlaneSlider3D::
                                                          GizmoPlaneSlider3D_SetBorderVisible
                                                                    ((this->fields)._yzSlider,
                                                                     (pGVar16->fields)._._isVisible,
                                                                     (MethodInfo *)0x0);
                                                          pGVar16 = (this->fields)._zxSlider;
                                                          if ((this->fields)._sharedLookAndFeel3D !=
                                                              (ScaleGizmoLookAndFeel3D *)0x0) {
                                                            lVar10 = 0xc0;
                                                          }
                                                          lVar2 = *(longlong *)
                                                                    ((longlong)&this->klass + lVar10
                                                                    );
                                                          if ((lVar2 != 0) &&
                                                             (lVar2 = *(longlong *)(lVar2 + 0x40),
                                                             lVar2 != 0)) {
                                                            if (*(uint *)(lVar2 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar16 != (GizmoPlaneSlider3D *)0x0)
                                                            {
                                                              pGVar17 = pGVar16->klass;
                                                              (pGVar16->fields)._._isVisible =
                                                                   *(char *)(lVar2 + 0x22) != '\0';
                                                              (*(pGVar17->vtable).
                                                                OnVisibilityStateChanged.methodPtr)
                                                                        (pGVar16,(pGVar17->vtable).
                                                                                                                                                                
                                                  OnVisibilityStateChanged.method);
                                                  pGVar16 = (this->fields)._zxSlider;
                                                  if (pGVar16 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetBorderVisible
                                                              ((this->fields)._zxSlider,
                                                               (pGVar16->fields)._._isVisible,
                                                               (MethodInfo *)0x0);
                                                    pGVar6 = (this->fields)._._gizmo;
                                                    if (pGVar6 != (Gizmo *)0x0) {
                                                      camera = Gizmo::Gizmo_get_FocusCamera
                                                                         (pGVar6,(MethodInfo *)0x0);
                                                      ScaleGizmo_PlaceDblSlidersInSliderPlanes
                                                                (this,camera,(MethodInfo *)0x0);
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean OwnsHandle(Int32) */

bool Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_OwnsHandle
               (ScaleGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesSliders;
  if (pGVar1 != (GizmoLineSlider3DCollection *)0x0) {
    bVar2 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains_1
                      (pGVar1,handleId,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 1;
    }
    pGVar1 = (this->fields)._axesSliders;
    if (pGVar1 != (GizmoLineSlider3DCollection *)0x0) {
      bVar2 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ContainsCapId
                        (pGVar1,handleId,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return 1;
      }
      this_00 = (this->fields)._dblSliders;
      if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
        bVar2 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                          (this_00,handleId,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return 1;
        }
        pGVar3 = (this->fields)._midCap;
        if ((pGVar3 != (GizmoCap3D *)0x0) &&
           (pGVar4 = (pGVar3->fields)._._handle, pGVar4 != (GizmoHandle *)0x0)) {
          return (pGVar4->fields)._id == handleId;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Void PlaceDblSlidersInSliderPlanes(Camera) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_PlaceDblSlidersInSliderPlanes
               (ScaleGizmo *this,Camera *camera,MethodInfo *method)

{
  pGVar1 = (this->fields)._xySlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar1->fields)._._isVisible != 0) {
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 == (Gizmo *)0x0) goto code_?;
      GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                ((this->fields)._xySlider,(pGVar2->fields)._transform,PlaneId__Enum_XY,
                 (this->fields)._pstvXSlider,(this->fields)._pstvYSlider,camera,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields)._yzSlider;
    if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar1->fields)._._isVisible != 0) {
        pGVar2 = (this->fields)._._gizmo;
        if (pGVar2 == (Gizmo *)0x0) goto code_?;
        GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                  ((this->fields)._yzSlider,(pGVar2->fields)._transform,PlaneId__Enum_YZ,
                   (this->fields)._pstvYSlider,(this->fields)._pstvZSlider,camera,(MethodInfo *)0x0)
        ;
      }
      pGVar1 = (this->fields)._zxSlider;
      if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
        if ((pGVar1->fields)._._isVisible != 0) {
          pGVar2 = (this->fields)._._gizmo;
          if (pGVar2 == (Gizmo *)0x0) goto code_?;
          GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                    ((this->fields)._zxSlider,(pGVar2->fields)._transform,PlaneId__Enum_ZX,
                     (this->fields)._pstvZSlider,(this->fields)._pstvXSlider,camera,
                     (MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMultiAxisScaleMode(GizmoMultiAxisScaleMode) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_SetMultiAxisScaleMode
               (ScaleGizmo *this,GizmoMultiAxisScaleMode__Enum scaleMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if (((pGVar1->fields)._dragInfo._isDragged != 0) ||
       (scaleMode == (this->fields)._multiAxisScaleMode)) {
      return;
    }
    (this->fields)._multiAxisScaleMode = scaleMode;
    if (scaleMode == GizmoMultiAxisScaleMode__Enum_DoubleAxis) {
      pGVar2 = (this->fields)._dblSliders;
      if (pGVar2 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                  (pGVar2,1,1,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._midCap;
        if (pGVar3 != (GizmoCap3D *)0x0) {
          if ((pGVar3->fields)._._isVisible == 0) {
            return;
          }
          (pGVar3->fields)._._isVisible = 0;
          goto code_?;
        }
      }
    }
    else {
      if (scaleMode != GizmoMultiAxisScaleMode__Enum_Uniform) {
        return;
      }
      pGVar2 = (this->fields)._dblSliders;
      if (pGVar2 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                  (pGVar2,0,1,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._midCap;
        if (pGVar3 != (GizmoCap3D *)0x0) {
          if ((pGVar3->fields)._._isVisible == 1) {
            return;
          }
          (pGVar3->fields)._._isVisible = 1;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pGVar3->klass->vtable).OnVisibilityStateChanged.methodPtr)
                    (pGVar3,(pGVar3->klass->vtable).OnVisibilityStateChanged.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_SetSnapEnabled
               (ScaleGizmo *this,bool isEnabled,MethodInfo *method)

{
  pGVar1 = (this->fields)._unformScaleDrag;
  if (pGVar1 != (GizmoUniformScaleDrag3D *)0x0) {
    (pGVar1->fields)._._isSnapEnabled = isEnabled;
    this_00 = (this->fields)._axesSliders;
    if (this_00 != (GizmoLineSlider3DCollection *)0x0) {
      GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetSnapEnabled
                (this_00,isEnabled,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._dblSliders;
      if (pGVar2 != (GizmoPlaneSlider3DCollection *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                        ,isEnabled,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__get_Current__
                       );
          LOCK();
          UNLOCK();
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        LStack_3._list = (List_1_System_Object_ *)(pGVar2->fields)._sliders;
        if ((List_1_RTG_GizmoPlaneSlider3D_ *)LStack_3._list ==
            (List_1_RTG_GizmoPlaneSlider3D_ *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
        pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)
                      (uint)(((List_1_RTG_GizmoPlaneSlider3D_ *)LStack_3._list)->fields)._version
                     << 0x20);
        puStack_11 = (undefined *)0x0;
        LStack_3._8_8_ = pLStack_10;
        LStack_3._current = (Object *)0x0;
        uStack_6 = 0;
        pLStack_10 = &LStack_3;
        while( true ) {
          bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_3,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                            );
          if (bVar12 == 0) {
            return;
          }
          if (LStack_3._current == (Object *)0x0) break;
          (*(code *)(LStack_3._current)->klass[1]._0.properties)
                    (LStack_3._current,isEnabled,(LStack_3._current)->klass[1]._0.methods);
        }
        FUN_?();
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_SetupSharedLookAndFeel
               (ScaleGizmo *this,MethodInfo *method)

{
  lVar1 = 0xa0;
  lVar2 = 0xa0;
  if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
    lVar2 = 0xc0;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x58);
    pGVar3 = (this->fields)._pstvXSlider;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pGVar3 != (GizmoLineSlider3D *)0x0) {
        bVar5 = iRam_? != 0;
        (pGVar3->fields)._sharedLookAndFeel = *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x20);
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(pGVar3->fields)._sharedLookAndFeel >> 0xc);
          lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar8 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar5 = uVar7 == *puVar8;
            if (bVar5) {
              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel(pGVar3,(MethodInfo *)0x0);
        lVar2 = 0xa0;
        if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
          lVar2 = 0xc0;
        }
        lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
        if (lVar2 != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x58);
          pGVar3 = (this->fields)._pstvYSlider;
          if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
              bVar5 = iRam_? != 0;
              (pGVar3->fields)._sharedLookAndFeel = *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x28)
              ;
              if (bVar5) {
                uVar6 = (uint)((ulonglong)&(pGVar3->fields)._sharedLookAndFeel >> 0xc);
                lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                  puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                  LOCK();
                  bVar5 = uVar7 == *puVar8;
                  if (bVar5) {
                    *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
              GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel(pGVar3,(MethodInfo *)0x0);
              lVar2 = 0xa0;
              if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                lVar2 = 0xc0;
              }
              lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
              if (lVar2 != 0) {
                lVar2 = *(longlong *)(lVar2 + 0x58);
                pGVar3 = (this->fields)._pstvZSlider;
                if (lVar2 != 0) {
                  if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
                  if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                    bVar5 = iRam_? != 0;
                    (pGVar3->fields)._sharedLookAndFeel =
                         *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x30);
                    if (bVar5) {
                      uVar6 = (uint)((ulonglong)&(pGVar3->fields)._sharedLookAndFeel >> 0xc);
                      lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                        puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                        LOCK();
                        bVar5 = uVar7 == *puVar8;
                        if (bVar5) {
                          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar5);
                    }
                    GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                              (pGVar3,(MethodInfo *)0x0);
                    lVar2 = 0xa0;
                    if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                      lVar2 = 0xc0;
                    }
                    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                    if (lVar2 != 0) {
                      pGVar3 = (this->fields)._negXSlider;
                      lVar2 = *(longlong *)(lVar2 + 0x58);
                      if (lVar2 != 0) {
                        if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                          bVar5 = iRam_? != 0;
                          (pGVar3->fields)._sharedLookAndFeel =
                               *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x38);
                          if (bVar5) {
                            uVar6 = (uint)((ulonglong)&(pGVar3->fields)._sharedLookAndFeel >> 0xc);
                            lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                              puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                              LOCK();
                              bVar5 = uVar7 == *puVar8;
                              if (bVar5) {
                                *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar5);
                          }
                          GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                    (pGVar3,(MethodInfo *)0x0);
                          lVar2 = 0xa0;
                          if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0)
                          {
                            lVar2 = 0xc0;
                          }
                          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                          if (lVar2 != 0) {
                            pGVar3 = (this->fields)._negYSlider;
                            lVar2 = *(longlong *)(lVar2 + 0x58);
                            if (lVar2 != 0) {
                              if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                              if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                bVar5 = iRam_? != 0;
                                (pGVar3->fields)._sharedLookAndFeel =
                                     *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x40);
                                if (bVar5) {
                                  uVar6 = (uint)((ulonglong)&(pGVar3->fields)._sharedLookAndFeel >>
                                                 0xc);
                                  lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                                    puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                                    LOCK();
                                    bVar5 = uVar7 == *puVar8;
                                    if (bVar5) {
                                      *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar5);
                                }
                                GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                          (pGVar3,(MethodInfo *)0x0);
                                lVar2 = 0xa0;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (ScaleGizmoLookAndFeel3D *)0x0) {
                                  lVar2 = 0xc0;
                                }
                                lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                if (lVar2 != 0) {
                                  pGVar3 = (this->fields)._negZSlider;
                                  lVar2 = *(longlong *)(lVar2 + 0x58);
                                  if (lVar2 != 0) {
                                    if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
                                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                      bVar5 = iRam_? != 0;
                                      (pGVar3->fields)._sharedLookAndFeel =
                                           *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x48);
                                      if (bVar5) {
                                        uVar6 = (uint)((ulonglong)
                                                        &(pGVar3->fields)._sharedLookAndFeel >> 0xc)
                                        ;
                                        lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                        do {
                                          uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                                          puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                                          LOCK();
                                          bVar5 = uVar7 == *puVar8;
                                          if (bVar5) {
                                            *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar5);
                                      }
                                      GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                                (pGVar3,(MethodInfo *)0x0);
                                      iVar9 = iRam_?;
                                      lVar2 = 0xa0;
                                      if ((this->fields)._sharedLookAndFeel3D !=
                                          (ScaleGizmoLookAndFeel3D *)0x0) {
                                        lVar2 = 0xc0;
                                      }
                                      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                      if ((lVar2 != 0) &&
                                         (pGVar10 = (this->fields)._midCap,
                                         pGVar10 != (GizmoCap3D *)0x0)) {
                                        (pGVar10->fields)._sharedLookAndFeel =
                                             *(GizmoCap3DLookAndFeel **)(lVar2 + 0x28);
                                        if (iVar9 != 0) {
                                          uVar6 = (uint)((ulonglong)
                                                          &(pGVar10->fields)._sharedLookAndFeel >>
                                                         0xc);
                                          lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                          do {
                                            uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                                            puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                                            LOCK();
                                            bVar5 = uVar7 == *puVar8;
                                            if (bVar5) {
                                              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                            }
                                            UNLOCK();
                                            iVar9 = iRam_?;
                                          } while (!bVar5);
                                        }
                                        lVar2 = 0xa0;
                                        if ((this->fields)._sharedLookAndFeel3D !=
                                            (ScaleGizmoLookAndFeel3D *)0x0) {
                                          lVar2 = 0xc0;
                                        }
                                        lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                        if ((lVar2 != 0) &&
                                           (pGVar11 = (this->fields)._scaleGuide,
                                           pGVar11 != (GizmoScaleGuide *)0x0)) {
                                          (pGVar11->fields)._sharedLookAndFeel =
                                               *(GizmoScaleGuideLookAndFeel **)(lVar2 + 0x48);
                                          iVar12 = 0;
                                          if (iVar9 != 0) {
                                            uVar6 = (uint)((ulonglong)
                                                            &(pGVar11->fields)._sharedLookAndFeel >>
                                                           0xc);
                                            lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                            do {
                                              uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                                              puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                                              LOCK();
                                              bVar5 = uVar7 == *puVar8;
                                              if (bVar5) {
                                                *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                              }
                                              UNLOCK();
                                              iVar12 = iRam_?;
                                            } while (!bVar5);
                                          }
                                          lVar2 = 0xa0;
                                          if ((this->fields)._sharedLookAndFeel3D !=
                                              (ScaleGizmoLookAndFeel3D *)0x0) {
                                            lVar2 = 0xc0;
                                          }
                                          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                          if (lVar2 != 0) {
                                            lVar2 = *(longlong *)(lVar2 + 0x60);
                                            pGVar13 = (this->fields)._xySlider;
                                            if (lVar2 != 0) {
                                              if (*(int *)(lVar2 + 0x18) == 0)
                                              goto code_?;
                                              if (pGVar13 != (GizmoPlaneSlider3D *)0x0) {
                                                (pGVar13->fields)._sharedLookAndFeel =
                                                     *(GizmoPlaneSlider3DLookAndFeel **)
                                                      (lVar2 + 0x20);
                                                iVar9 = 0;
                                                if (iVar12 != 0) {
                                                  uVar6 = (uint)((ulonglong)
                                                                  &(pGVar13->fields).
                                                                   _sharedLookAndFeel >> 0xc);
                                                  lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                                  do {
                                                    uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                                                    puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                                                    LOCK();
                                                    bVar5 = uVar7 == *puVar8;
                                                    if (bVar5) {
                                                      *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                    iVar9 = iRam_?;
                                                  } while (!bVar5);
                                                }
                                                lVar2 = 0xa0;
                                                if ((this->fields)._sharedLookAndFeel3D !=
                                                    (ScaleGizmoLookAndFeel3D *)0x0) {
                                                  lVar2 = 0xc0;
                                                }
                                                lVar2 = *(longlong *)
                                                         ((longlong)&this->klass + lVar2);
                                                if (lVar2 != 0) {
                                                  lVar2 = *(longlong *)(lVar2 + 0x60);
                                                  pGVar13 = (this->fields)._yzSlider;
                                                  if (lVar2 != 0) {
                                                    if (*(uint *)(lVar2 + 0x18) < 2)
                                                    goto code_?;
                                                    if (pGVar13 != (GizmoPlaneSlider3D *)0x0) {
                                                      (pGVar13->fields)._sharedLookAndFeel =
                                                           *(GizmoPlaneSlider3DLookAndFeel **)
                                                            (lVar2 + 0x28);
                                                      iVar12 = 0;
                                                      if (iVar9 != 0) {
                                                        uVar6 = (uint)((ulonglong)
                                                                        &(pGVar13->fields).
                                                                         _sharedLookAndFeel >> 0xc);
                                                        lVar2 = (ulonglong)
                                                                ((uVar6 & 0x1fffff) >> 6) * 8;
                                                        do {
                                                          uVar7 = *(ulonglong *)
                                                                   (lVar2 + 0xADDR);
                                                          puVar8 = (ulonglong *)
                                                                   (lVar2 + 0xADDR);
                                                          LOCK();
                                                          bVar5 = uVar7 == *puVar8;
                                                          if (bVar5) {
                                                            *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                                          }
                                                          UNLOCK();
                                                          iVar12 = iRam_?;
                                                        } while (!bVar5);
                                                      }
                                                      if ((this->fields)._sharedLookAndFeel3D !=
                                                          (ScaleGizmoLookAndFeel3D *)0x0) {
                                                        lVar1 = 0xc0;
                                                      }
                                                      lVar2 = *(longlong *)
                                                               ((longlong)&this->klass + lVar1);
                                                      if (lVar2 != 0) {
                                                        lVar2 = *(longlong *)(lVar2 + 0x60);
                                                        pGVar13 = (this->fields)._zxSlider;
                                                        if (lVar2 != 0) {
                                                          if (*(uint *)(lVar2 + 0x18) < 3)
                                                          goto code_?;
                                                          if (pGVar13 != (GizmoPlaneSlider3D *)0x0) {
                                                            (pGVar13->fields)._sharedLookAndFeel =
                                                                 *(GizmoPlaneSlider3DLookAndFeel **)
                                                                  (lVar2 + 0x30);
                                                            if (iVar12 != 0) {
                                                              uVar6 = (uint)((ulonglong)
                                                                              &(pGVar13->fields).
                                                                               _sharedLookAndFeel >>
                                                                             0xc);
                                                              lVar2 = (ulonglong)
                                                                      ((uVar6 & 0x1fffff) >> 6) * 8
                                                              ;
                                                              do {
                                                                uVar7 = *(ulonglong *)
                                                                         (lVar2 + 0xADDR);
                                                                puVar8 = (ulonglong *)
                                                                         (lVar2 + 0xADDR);
                                                                LOCK();
                                                                bVar5 = uVar7 == *puVar8;
                                                                if (bVar5) {
                                                                  *puVar8 = uVar7 | 1L << (uVar6 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar5);
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
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupSharedSettings() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_SetupSharedSettings
               (ScaleGizmo *this,MethodInfo *method)

{
  lVar1 = 0xa8;
  lVar2 = 0xa8;
  if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
    lVar2 = 200;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
    pGVar3 = (this->fields)._pstvXSlider;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pGVar3 != (GizmoLineSlider3D *)0x0) {
        (pGVar3->fields)._sharedSettings = *(GizmoLineSlider3DSettings **)(lVar2 + 0x20);
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >> 0xc);
          lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar7 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        iVar9 = iRam_?;
        lVar2 = 0xa8;
        if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
          lVar2 = 200;
        }
        lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
        if (lVar2 != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          pGVar3 = (this->fields)._pstvYSlider;
          if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
              (pGVar3->fields)._sharedSettings = *(GizmoLineSlider3DSettings **)(lVar2 + 0x28);
              if (iVar9 != 0) {
                uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >> 0xc);
                lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                do {
                  uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                  puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                  LOCK();
                  bVar8 = uVar6 == *puVar7;
                  if (bVar8) {
                    *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                  iVar9 = iRam_?;
                } while (!bVar8);
              }
              lVar2 = 0xa8;
              if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
                lVar2 = 200;
              }
              lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
              if (lVar2 != 0) {
                lVar2 = *(longlong *)(lVar2 + 0x30);
                pGVar3 = (this->fields)._pstvZSlider;
                if (lVar2 != 0) {
                  if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
                  if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                    (pGVar3->fields)._sharedSettings = *(GizmoLineSlider3DSettings **)(lVar2 + 0x30)
                    ;
                    iVar10 = 0;
                    if (iVar9 != 0) {
                      uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >> 0xc);
                      lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                        puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                        LOCK();
                        bVar8 = uVar6 == *puVar7;
                        if (bVar8) {
                          *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                        }
                        UNLOCK();
                        iVar10 = iRam_?;
                      } while (!bVar8);
                    }
                    lVar2 = 0xa8;
                    if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
                      lVar2 = 200;
                    }
                    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                    if (lVar2 != 0) {
                      pGVar3 = (this->fields)._negXSlider;
                      lVar2 = *(longlong *)(lVar2 + 0x30);
                      if (lVar2 != 0) {
                        if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                          (pGVar3->fields)._sharedSettings =
                               *(GizmoLineSlider3DSettings **)(lVar2 + 0x38);
                          iVar9 = 0;
                          if (iVar10 != 0) {
                            uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >> 0xc);
                            lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                              puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                              LOCK();
                              bVar8 = uVar6 == *puVar7;
                              if (bVar8) {
                                *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                              }
                              UNLOCK();
                              iVar9 = iRam_?;
                            } while (!bVar8);
                          }
                          lVar2 = 0xa8;
                          if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
                            lVar2 = 200;
                          }
                          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                          if (lVar2 != 0) {
                            pGVar3 = (this->fields)._negYSlider;
                            lVar2 = *(longlong *)(lVar2 + 0x30);
                            if (lVar2 != 0) {
                              if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                              if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                (pGVar3->fields)._sharedSettings =
                                     *(GizmoLineSlider3DSettings **)(lVar2 + 0x40);
                                iVar10 = 0;
                                if (iVar9 != 0) {
                                  uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >> 0xc
                                                );
                                  lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                    puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                    LOCK();
                                    bVar8 = uVar6 == *puVar7;
                                    if (bVar8) {
                                      *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                    }
                                    UNLOCK();
                                    iVar10 = iRam_?;
                                  } while (!bVar8);
                                }
                                lVar2 = 0xa8;
                                if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0)
                                {
                                  lVar2 = 200;
                                }
                                lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                if (lVar2 != 0) {
                                  pGVar3 = (this->fields)._negZSlider;
                                  lVar2 = *(longlong *)(lVar2 + 0x30);
                                  if (lVar2 != 0) {
                                    if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
                                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                      (pGVar3->fields)._sharedSettings =
                                           *(GizmoLineSlider3DSettings **)(lVar2 + 0x48);
                                      iVar9 = 0;
                                      if (iVar10 != 0) {
                                        uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings
                                                      >> 0xc);
                                        lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                                        do {
                                          uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                          puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                          LOCK();
                                          bVar8 = uVar6 == *puVar7;
                                          if (bVar8) {
                                            *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                          }
                                          UNLOCK();
                                          iVar9 = iRam_?;
                                        } while (!bVar8);
                                      }
                                      lVar2 = 0xa8;
                                      if ((this->fields)._sharedSettings3D !=
                                          (ScaleGizmoSettings3D *)0x0) {
                                        lVar2 = 200;
                                      }
                                      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                      if (lVar2 != 0) {
                                        lVar2 = *(longlong *)(lVar2 + 0x38);
                                        pGVar11 = (this->fields)._xySlider;
                                        if (lVar2 != 0) {
                                          if (*(int *)(lVar2 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar11->fields)._sharedSettings =
                                                 *(GizmoPlaneSlider3DSettings **)(lVar2 + 0x20);
                                            iVar10 = 0;
                                            if (iVar9 != 0) {
                                              uVar5 = (uint)((ulonglong)
                                                             &(pGVar11->fields)._sharedSettings >>
                                                            0xc);
                                              lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                                              do {
                                                uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                                puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                                LOCK();
                                                bVar8 = uVar6 == *puVar7;
                                                if (bVar8) {
                                                  *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                                }
                                                UNLOCK();
                                                iVar10 = iRam_?;
                                              } while (!bVar8);
                                            }
                                            lVar2 = 0xa8;
                                            if ((this->fields)._sharedSettings3D !=
                                                (ScaleGizmoSettings3D *)0x0) {
                                              lVar2 = 200;
                                            }
                                            lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                            if (lVar2 != 0) {
                                              lVar2 = *(longlong *)(lVar2 + 0x38);
                                              pGVar11 = (this->fields)._yzSlider;
                                              if (lVar2 != 0) {
                                                if (*(uint *)(lVar2 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar11->fields)._sharedSettings =
                                                       *(GizmoPlaneSlider3DSettings **)
                                                        (lVar2 + 0x28);
                                                  iVar9 = 0;
                                                  if (iVar10 != 0) {
                                                    uVar5 = (uint)((ulonglong)
                                                                   &(pGVar11->fields)._sharedSettings
                                                                  >> 0xc);
                                                    lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8
                                                    ;
                                                    do {
                                                      uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                                      puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                                      LOCK();
                                                      bVar8 = uVar6 == *puVar7;
                                                      if (bVar8) {
                                                        *puVar7 = uVar6 | 1L << (ulonglong)
                                                                                (uVar5 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                      iVar9 = iRam_?;
                                                    } while (!bVar8);
                                                  }
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (ScaleGizmoSettings3D *)0x0) {
                                                    lVar1 = 200;
                                                  }
                                                  lVar2 = *(longlong *)
                                                           ((longlong)&this->klass + lVar1);
                                                  if (lVar2 != 0) {
                                                    lVar2 = *(longlong *)(lVar2 + 0x38);
                                                    pGVar11 = (this->fields)._zxSlider;
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar2 + 0x30);
                                                        if (iVar9 != 0) {
                                                          uVar5 = (uint)((ulonglong)
                                                                         &(pGVar11->fields).
                                                                          _sharedSettings >> 0xc);
                                                          lVar2 = (ulonglong)
                                                                  ((uVar5 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar6 = *(ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            LOCK();
                                                            bVar8 = uVar6 == *puVar7;
                                                            if (bVar8) {
                                                              *puVar7 = uVar6 | 1L << (uVar5 & 0x3f)
                                                              ;
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar8);
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ScaleGizmo() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo__ctor(ScaleGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoScaleGuide);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoUniformScaleDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ScaleGizmoHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ScaleGizmoLookAndFeel3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ScaleGizmoSettings3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (GizmoLineSlider3DCollection *)FUN_?(TypeInfo__RTG__GizmoLineSlider3DCollection)
  ;
  GizmoLineSlider3DCollection::GizmoLineSlider3DCollection__ctor(this_00,(MethodInfo *)0x0);
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
  this_01 = (GizmoPlaneSlider3DCollection *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(this_01,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._dblSliders = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._dblSliders >> 0xc);
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
  this_02 = (GizmoUniformScaleDrag3D *)FUN_?(TypeInfo__RTG__GizmoUniformScaleDrag3D);
  (this_02->fields)._relativeScale = 1.0;
  (this_02->fields)._totalScale = 1.0;
  (this_02->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)this_02,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._unformScaleDrag = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._unformScaleDrag >> 0xc);
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
  this_03 = (GizmoScaleGuide *)FUN_?(TypeInfo__RTG__GizmoScaleGuide);
  GizmoScaleGuide::GizmoScaleGuide__ctor(this_03,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._scaleGuide = this_03;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._scaleGuide >> 0xc);
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
  this_04 = (ScaleGizmoLookAndFeel3D *)FUN_?(TypeInfo__RTG__ScaleGizmoLookAndFeel3D);
  ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D__ctor(this_04,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._lookAndFeel3D = this_04;
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
  this_05 = (ScaleGizmoSettings3D *)FUN_?(TypeInfo__RTG__ScaleGizmoSettings3D);
  ScaleGizmoSettings3D::ScaleGizmoSettings3D__ctor(this_05,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._settings3D = this_05;
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
  this_06 = (ScaleGizmoHotkeys *)FUN_?(TypeInfo__RTG__ScaleGizmoHotkeys);
  ScaleGizmoHotkeys::ScaleGizmoHotkeys__ctor(this_06,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._hotkeys = this_06;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._hotkeys >> 0xc);
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
  (this->fields)._useSnapEnableHotkey = 1;
  (this->fields)._useMultiAxisScaleModeHotkey = 1;
  (this->fields)._._isEnabled = 1;
  return;
}


/* ScaleGizmoHotkeys get_Hotkeys() */

ScaleGizmoHotkeys *
Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_get_Hotkeys(ScaleGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedHotkeys == (ScaleGizmoHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return (this->fields)._sharedHotkeys;
}


/* ScaleGizmoLookAndFeel3D get_LookAndFeel3D() */

ScaleGizmoLookAndFeel3D *
Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_get_LookAndFeel3D
          (ScaleGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel3D == (ScaleGizmoLookAndFeel3D *)0x0) {
    return (this->fields)._lookAndFeel3D;
  }
  return (this->fields)._sharedLookAndFeel3D;
}


/* ScaleGizmoSettings3D get_Settings3D() */

ScaleGizmoSettings3D *
Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_get_Settings3D(ScaleGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings3D == (ScaleGizmoSettings3D *)0x0) {
    return (this->fields)._settings3D;
  }
  return (this->fields)._sharedSettings3D;
}


/* Void set_SharedHotkeys(ScaleGizmoHotkeys) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_set_SharedHotkeys
               (ScaleGizmo *this,ScaleGizmoHotkeys *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)();
  if ((cVar3 != '\0') &&
     (bVar4 = iRam_? != 0, (this->fields)._sharedHotkeys = value, bVar4)) {
    uVar5 = (uint)((ulonglong)&(this->fields)._sharedHotkeys >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void set_SharedLookAndFeel3D(ScaleGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_set_SharedLookAndFeel3D
               (ScaleGizmo *this,ScaleGizmoLookAndFeel3D *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._sharedLookAndFeel3D = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sharedLookAndFeel3D >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  lVar6 = 0xa0;
  lVar7 = 0xa0;
  if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
    lVar7 = 0xc0;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x58);
    pGVar8 = (this->fields)._pstvXSlider;
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
        bVar1 = iRam_? != 0;
        (pGVar8->fields)._sharedLookAndFeel = *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x20);
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
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
        GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel(pGVar8,(MethodInfo *)0x0);
        lVar7 = 0xa0;
        if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
          lVar7 = 0xc0;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x58);
          pGVar8 = (this->fields)._pstvYSlider;
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto code_?;
            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
              bVar1 = iRam_? != 0;
              (pGVar8->fields)._sharedLookAndFeel = *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x28)
              ;
              if (bVar1) {
                uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
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
              GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel(pGVar8,(MethodInfo *)0x0);
              lVar7 = 0xa0;
              if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                lVar7 = 0xc0;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x58);
                pGVar8 = (this->fields)._pstvZSlider;
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) < 3) goto code_?;
                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                    bVar1 = iRam_? != 0;
                    (pGVar8->fields)._sharedLookAndFeel =
                         *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x30);
                    if (bVar1) {
                      uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
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
                    GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                              (pGVar8,(MethodInfo *)0x0);
                    lVar7 = 0xa0;
                    if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                      lVar7 = 0xc0;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if (lVar7 != 0) {
                      pGVar8 = (this->fields)._negXSlider;
                      lVar7 = *(longlong *)(lVar7 + 0x58);
                      if (lVar7 != 0) {
                        if (*(uint *)(lVar7 + 0x18) < 4) goto code_?;
                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                          bVar1 = iRam_? != 0;
                          (pGVar8->fields)._sharedLookAndFeel =
                               *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x38);
                          if (bVar1) {
                            uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
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
                          GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                    (pGVar8,(MethodInfo *)0x0);
                          lVar7 = 0xa0;
                          if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0)
                          {
                            lVar7 = 0xc0;
                          }
                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                          if (lVar7 != 0) {
                            pGVar8 = (this->fields)._negYSlider;
                            lVar7 = *(longlong *)(lVar7 + 0x58);
                            if (lVar7 != 0) {
                              if (*(uint *)(lVar7 + 0x18) < 5) goto code_?;
                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                bVar1 = iRam_? != 0;
                                (pGVar8->fields)._sharedLookAndFeel =
                                     *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x40);
                                if (bVar1) {
                                  uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >>
                                                 0xc);
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
                                GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                          (pGVar8,(MethodInfo *)0x0);
                                lVar7 = 0xa0;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (ScaleGizmoLookAndFeel3D *)0x0) {
                                  lVar7 = 0xc0;
                                }
                                lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                if (lVar7 != 0) {
                                  pGVar8 = (this->fields)._negZSlider;
                                  lVar7 = *(longlong *)(lVar7 + 0x58);
                                  if (lVar7 != 0) {
                                    if (*(uint *)(lVar7 + 0x18) < 6) goto code_?;
                                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                      bVar1 = iRam_? != 0;
                                      (pGVar8->fields)._sharedLookAndFeel =
                                           *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x48);
                                      if (bVar1) {
                                        uVar2 = (uint)((ulonglong)
                                                        &(pGVar8->fields)._sharedLookAndFeel >> 0xc)
                                        ;
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
                                      GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                                (pGVar8,(MethodInfo *)0x0);
                                      iVar10 = iRam_?;
                                      lVar7 = 0xa0;
                                      if ((this->fields)._sharedLookAndFeel3D !=
                                          (ScaleGizmoLookAndFeel3D *)0x0) {
                                        lVar7 = 0xc0;
                                      }
                                      lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                      if ((lVar7 != 0) &&
                                         (pGVar11 = (this->fields)._midCap,
                                         pGVar11 != (GizmoCap3D *)0x0)) {
                                        (pGVar11->fields)._sharedLookAndFeel =
                                             *(GizmoCap3DLookAndFeel **)(lVar7 + 0x28);
                                        if (iVar10 != 0) {
                                          uVar2 = (uint)((ulonglong)
                                                          &(pGVar11->fields)._sharedLookAndFeel >>
                                                         0xc);
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
                                            iVar10 = iRam_?;
                                          } while (!bVar1);
                                        }
                                        lVar7 = 0xa0;
                                        if ((this->fields)._sharedLookAndFeel3D !=
                                            (ScaleGizmoLookAndFeel3D *)0x0) {
                                          lVar7 = 0xc0;
                                        }
                                        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                        if ((lVar7 != 0) &&
                                           (pGVar12 = (this->fields)._scaleGuide,
                                           pGVar12 != (GizmoScaleGuide *)0x0)) {
                                          (pGVar12->fields)._sharedLookAndFeel =
                                               *(GizmoScaleGuideLookAndFeel **)(lVar7 + 0x48);
                                          iVar13 = 0;
                                          if (iVar10 != 0) {
                                            uVar2 = (uint)((ulonglong)
                                                            &(pGVar12->fields)._sharedLookAndFeel >>
                                                           0xc);
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
                                              iVar13 = iRam_?;
                                            } while (!bVar1);
                                          }
                                          lVar7 = 0xa0;
                                          if ((this->fields)._sharedLookAndFeel3D !=
                                              (ScaleGizmoLookAndFeel3D *)0x0) {
                                            lVar7 = 0xc0;
                                          }
                                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                          if (lVar7 != 0) {
                                            lVar7 = *(longlong *)(lVar7 + 0x60);
                                            pGVar14 = (this->fields)._xySlider;
                                            if (lVar7 != 0) {
                                              if (*(int *)(lVar7 + 0x18) == 0)
                                              goto code_?;
                                              if (pGVar14 != (GizmoPlaneSlider3D *)0x0) {
                                                (pGVar14->fields)._sharedLookAndFeel =
                                                     *(GizmoPlaneSlider3DLookAndFeel **)
                                                      (lVar7 + 0x20);
                                                iVar10 = 0;
                                                if (iVar13 != 0) {
                                                  uVar2 = (uint)((ulonglong)
                                                                  &(pGVar14->fields).
                                                                   _sharedLookAndFeel >> 0xc);
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
                                                    iVar10 = iRam_?;
                                                  } while (!bVar1);
                                                }
                                                lVar7 = 0xa0;
                                                if ((this->fields)._sharedLookAndFeel3D !=
                                                    (ScaleGizmoLookAndFeel3D *)0x0) {
                                                  lVar7 = 0xc0;
                                                }
                                                lVar7 = *(longlong *)
                                                         ((longlong)&this->klass + lVar7);
                                                if (lVar7 != 0) {
                                                  lVar7 = *(longlong *)(lVar7 + 0x60);
                                                  pGVar14 = (this->fields)._yzSlider;
                                                  if (lVar7 != 0) {
                                                    if (*(uint *)(lVar7 + 0x18) < 2)
                                                    goto code_?;
                                                    if (pGVar14 != (GizmoPlaneSlider3D *)0x0) {
                                                      (pGVar14->fields)._sharedLookAndFeel =
                                                           *(GizmoPlaneSlider3DLookAndFeel **)
                                                            (lVar7 + 0x28);
                                                      iVar13 = 0;
                                                      if (iVar10 != 0) {
                                                        uVar2 = (uint)((ulonglong)
                                                                        &(pGVar14->fields).
                                                                         _sharedLookAndFeel >> 0xc);
                                                        lVar7 = (ulonglong)
                                                                ((uVar2 & 0x1fffff) >> 6) * 8;
                                                        do {
                                                          uVar5 = *(ulonglong *)
                                                                   (lVar7 + 0xADDR);
                                                          puVar3 = (ulonglong *)
                                                                   (lVar7 + 0xADDR);
                                                          LOCK();
                                                          bVar1 = uVar5 == *puVar3;
                                                          if (bVar1) {
                                                            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                          }
                                                          UNLOCK();
                                                          iVar13 = iRam_?;
                                                        } while (!bVar1);
                                                      }
                                                      if ((this->fields)._sharedLookAndFeel3D !=
                                                          (ScaleGizmoLookAndFeel3D *)0x0) {
                                                        lVar6 = 0xc0;
                                                      }
                                                      lVar7 = *(longlong *)
                                                               ((longlong)&this->klass + lVar6);
                                                      if (lVar7 != 0) {
                                                        lVar7 = *(longlong *)(lVar7 + 0x60);
                                                        pGVar14 = (this->fields)._zxSlider;
                                                        if (lVar7 != 0) {
                                                          if (*(uint *)(lVar7 + 0x18) < 3)
                                                          goto code_?;
                                                          if (pGVar14 != (GizmoPlaneSlider3D *)0x0) {
                                                            (pGVar14->fields)._sharedLookAndFeel =
                                                                 *(GizmoPlaneSlider3DLookAndFeel **)
                                                                  (lVar7 + 0x30);
                                                            if (iVar13 != 0) {
                                                              uVar2 = (uint)((ulonglong)
                                                                              &(pGVar14->fields).
                                                                               _sharedLookAndFeel >>
                                                                             0xc);
                                                              lVar7 = (ulonglong)
                                                                      ((uVar2 & 0x1fffff) >> 6) * 8
                                                              ;
                                                              do {
                                                                uVar5 = *(ulonglong *)
                                                                         (lVar7 + 0xADDR);
                                                                puVar3 = (ulonglong *)
                                                                         (lVar7 + 0xADDR);
                                                                LOCK();
                                                                bVar1 = uVar5 == *puVar3;
                                                                if (bVar1) {
                                                                  *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
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
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_SharedSettings3D(ScaleGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_set_SharedSettings3D
               (ScaleGizmo *this,ScaleGizmoSettings3D *value,MethodInfo *method)

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
  lVar6 = 0xa8;
  lVar7 = 0xa8;
  if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
    lVar7 = 200;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    pGVar8 = (this->fields)._pstvXSlider;
    if (lVar7 != 0) {
      pSVar9 = this;
      if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
        FUN_?(pSVar9,this,method);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
        (pGVar8->fields)._sharedSettings = *(GizmoLineSlider3DSettings **)(lVar7 + 0x20);
        if (uRam_? != 0) {
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
        }
        uVar2 = uRam_?;
        pSVar9 = (ScaleGizmo *)(ulonglong)uRam_?;
        lVar7 = 0xa8;
        if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
          lVar7 = 200;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          pGVar8 = (this->fields)._pstvYSlider;
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto code_?;
            method = *(MethodInfo **)(lVar7 + 0x28);
            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
              (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
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
                pSVar9 = (ScaleGizmo *)(ulonglong)uRam_?;
              }
              lVar7 = 0xa8;
              if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
                lVar7 = 200;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x30);
                pGVar8 = (this->fields)._pstvZSlider;
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) < 3) goto code_?;
                  method = *(MethodInfo **)(lVar7 + 0x30);
                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                    (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
                    if ((int)pSVar9 != 0) {
                      uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      method = (MethodInfo *)(lVar7 + 0xADDR);
                      do {
                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                        LOCK();
                        bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                        if (bVar1) {
                          *(ulonglong *)(lVar7 + 0xADDR) =
                               uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar1);
                      pSVar9 = (ScaleGizmo *)(ulonglong)uRam_?;
                    }
                    lVar7 = 0xa8;
                    if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
                      lVar7 = 200;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if (lVar7 != 0) {
                      pGVar8 = (this->fields)._negXSlider;
                      lVar7 = *(longlong *)(lVar7 + 0x30);
                      if (lVar7 != 0) {
                        if (*(uint *)(lVar7 + 0x18) < 4) goto code_?;
                        method = *(MethodInfo **)(lVar7 + 0x38);
                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                          (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
                          if ((int)pSVar9 != 0) {
                            uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
                            lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                            method = (MethodInfo *)(lVar7 + 0xADDR);
                            do {
                              uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                              LOCK();
                              bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                              if (bVar1) {
                                *(ulonglong *)(lVar7 + 0xADDR) =
                                     uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar1);
                            pSVar9 = (ScaleGizmo *)(ulonglong)uRam_?;
                          }
                          lVar7 = 0xa8;
                          if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
                            lVar7 = 200;
                          }
                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                          if (lVar7 != 0) {
                            pGVar8 = (this->fields)._negYSlider;
                            lVar7 = *(longlong *)(lVar7 + 0x30);
                            if (lVar7 != 0) {
                              if (*(uint *)(lVar7 + 0x18) < 5) goto code_?;
                              method = *(MethodInfo **)(lVar7 + 0x40);
                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                (pGVar8->fields)._sharedSettings =
                                     (GizmoLineSlider3DSettings *)method;
                                if ((int)pSVar9 != 0) {
                                  uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc
                                                );
                                  lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                  method = (MethodInfo *)(lVar7 + 0xADDR);
                                  do {
                                    uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                    LOCK();
                                    bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                                    if (bVar1) {
                                      *(ulonglong *)(lVar7 + 0xADDR) =
                                           uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar1);
                                  pSVar9 = (ScaleGizmo *)(ulonglong)uRam_?;
                                }
                                lVar7 = 0xa8;
                                if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0)
                                {
                                  lVar7 = 200;
                                }
                                lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                if (lVar7 != 0) {
                                  pGVar8 = (this->fields)._negZSlider;
                                  lVar7 = *(longlong *)(lVar7 + 0x30);
                                  if (lVar7 != 0) {
                                    if (*(uint *)(lVar7 + 0x18) < 6) goto code_?;
                                    method = *(MethodInfo **)(lVar7 + 0x48);
                                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                      (pGVar8->fields)._sharedSettings =
                                           (GizmoLineSlider3DSettings *)method;
                                      if ((int)pSVar9 != 0) {
                                        uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings
                                                      >> 0xc);
                                        lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                        method = (MethodInfo *)(lVar7 + 0xADDR);
                                        do {
                                          uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                          LOCK();
                                          bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                                          if (bVar1) {
                                            *(ulonglong *)(lVar7 + 0xADDR) =
                                                 uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar1);
                                        pSVar9 = (ScaleGizmo *)(ulonglong)uRam_?;
                                      }
                                      lVar7 = 0xa8;
                                      if ((this->fields)._sharedSettings3D !=
                                          (ScaleGizmoSettings3D *)0x0) {
                                        lVar7 = 200;
                                      }
                                      lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                      if (lVar7 != 0) {
                                        lVar7 = *(longlong *)(lVar7 + 0x38);
                                        pGVar11 = (this->fields)._xySlider;
                                        if (lVar7 != 0) {
                                          if (*(int *)(lVar7 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar11->fields)._sharedSettings =
                                                 *(GizmoPlaneSlider3DSettings **)(lVar7 + 0x20);
                                            if ((int)pSVar9 != 0) {
                                              uVar2 = (uint)((ulonglong)
                                                             &(pGVar11->fields)._sharedSettings >>
                                                            0xc);
                                              lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                              method = (MethodInfo *)(lVar7 + 0xADDR);
                                              do {
                                                uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                LOCK();
                                                bVar1 = uVar5 == *(ulonglong *)
                                                                   (lVar7 + 0xADDR);
                                                if (bVar1) {
                                                  *(ulonglong *)(lVar7 + 0xADDR) =
                                                       uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar1);
                                              pSVar9 = (ScaleGizmo *)(ulonglong)uRam_?
                                              ;
                                            }
                                            lVar7 = 0xa8;
                                            if ((this->fields)._sharedSettings3D !=
                                                (ScaleGizmoSettings3D *)0x0) {
                                              lVar7 = 200;
                                            }
                                            lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                            if (lVar7 != 0) {
                                              lVar7 = *(longlong *)(lVar7 + 0x38);
                                              pGVar11 = (this->fields)._yzSlider;
                                              if (lVar7 != 0) {
                                                if (*(uint *)(lVar7 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar11->fields)._sharedSettings =
                                                       *(GizmoPlaneSlider3DSettings **)
                                                        (lVar7 + 0x28);
                                                  if ((int)pSVar9 != 0) {
                                                    uVar2 = (uint)((ulonglong)
                                                                   &(pGVar11->fields)._sharedSettings
                                                                  >> 0xc);
                                                    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8
                                                    ;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                                      LOCK();
                                                      bVar1 = uVar5 == *puVar3;
                                                      if (bVar1) {
                                                        *puVar3 = uVar5 | 1L << (ulonglong)
                                                                                (uVar2 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar1);
                                                    pSVar9 = (ScaleGizmo *)
                                                             (ulonglong)uRam_?;
                                                  }
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (ScaleGizmoSettings3D *)0x0) {
                                                    lVar6 = 200;
                                                  }
                                                  lVar7 = *(longlong *)
                                                           ((longlong)&this->klass + lVar6);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    method = (MethodInfo *)(this->fields)._zxSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if ((GizmoPlaneSlider3D *)method !=
                                                          (GizmoPlaneSlider3D *)0x0) {
                                                        (((GizmoPlaneSlider3D *)method)->fields).
                                                        _sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar7 + 0x30);
                                                        if ((int)pSVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                         &(((GizmoPlaneSlider3D *)
                                                                           method)->fields).
                                                                          _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                  ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f)
                                                              ;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_UseMultiAxisScaleModeHotkey(Boolean) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_set_UseMultiAxisScaleModeHotkey
               (ScaleGizmo *this,bool value,MethodInfo *method)

{
  (this->fields)._useMultiAxisScaleModeHotkey = value;
  return;
}

