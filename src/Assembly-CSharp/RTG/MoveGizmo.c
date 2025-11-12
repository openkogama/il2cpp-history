
/* MoveGizmo+VertexSnapState GetVertexSnapState() */

MoveGizmo_VertexSnapState__Enum
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_GetVertexSnapState
          (MoveGizmo *this,MethodInfo *method)

{
  if ((this->fields)._isVertexSnapEnabled == 0) {
    return MoveGizmo_VertexSnapState__Enum_Inactive;
  }
  pGVar1 = (this->fields)._vertexSnapDrag;
  if (pGVar1 != (GizmoObjectVertexSnapDrag3D *)0x0) {
    cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
    return (MoveGizmo_VertexSnapState__Enum)(cVar2 != '\0');
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  MVar4 = (*pcVar3)();
  return MVar4;
}


/* Single GetZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_GetZoomFactor
                (MoveGizmo *this,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x100;
  if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0x128;
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

float Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_GetZoomFactor_1
                (MoveGizmo *this,Vector3 *position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x100;
  if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0x128;
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


/* Void Hide2DModeHandles() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_Hide2DModeHandles
               (MoveGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._2DModeSliders;
  if (pGVar1 != (GizmoLineSlider2DCollection *)0x0) {
    GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetVisible(pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._2DModeSliders;
    if (pGVar1 != (GizmoLineSlider2DCollection *)0x0) {
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Set2DCapsVisible
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._2DModeDblSlider;
      if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
        pGVar3 = pGVar2->klass;
        (pGVar2->fields)._._isVisible = 0;
        (*(pGVar3->vtable).OnVisibilityStateChanged.methodPtr)();
        pGVar2 = (this->fields)._2DModeDblSlider;
        if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController,0,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((pGVar2->fields)._isBorderVisible == 0) {
            return;
          }
          (pGVar2->fields)._isBorderVisible = 0;
          lVar4 = 0x110;
          if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            lVar4 = 0x108;
          }
          lVar4 = *(longlong *)((longlong)&pGVar2->klass + lVar4);
          if ((lVar4 != 0) &&
             (pIVar5 = (pGVar2->fields)._controllers,
             pIVar5 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
            uVar6 = *(uint *)(lVar4 + 0x14);
            if ((uint)pIVar5->max_length <= uVar6) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (pIVar5->vector[(int)uVar6] != (IGizmoPlaneSlider2DController *)0x0) {
              FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController);
              return;
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
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnAttached(MoveGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoCap2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3D);
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
  GizmoCap3D::GizmoCap3D__ctor(pGVar2,pGVar1,0xca,(MethodInfo *)0x0);
  (this->fields)._midCap = pGVar2;
  func_?(&(this->fields)._midCap);
  pGVar2 = (this->fields)._midCap;
  if (pGVar2 != (GizmoCap3D *)0x0) {
    if ((pGVar2->fields)._._isHoverable != 0) {
      pGVar3 = pGVar2->klass;
      (pGVar2->fields)._._isHoverable = 0;
      (*(pGVar3->vtable).OnHoverableStateChanged.methodPtr)
                (pGVar2,(pGVar3->vtable).OnHoverableStateChanged.method);
    }
    pGVar1 = (this->fields)._._gizmo;
    pGVar4 = (GizmoPlaneSlider3D *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3D);
    GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar4,pGVar1,0x23,(MethodInfo *)0x0);
    (this->fields)._xySlider = pGVar4;
    func_?(&(this->fields)._xySlider);
    pGVar1 = (this->fields)._._gizmo;
    pGVar4 = (GizmoPlaneSlider3D *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3D);
    GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar4,pGVar1,0x24,(MethodInfo *)0x0);
    (this->fields)._yzSlider = pGVar4;
    func_?(&(this->fields)._yzSlider);
    pGVar1 = (this->fields)._._gizmo;
    pGVar4 = (GizmoPlaneSlider3D *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3D);
    GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar4,pGVar1,0x25,(MethodInfo *)0x0);
    (this->fields)._zxSlider = pGVar4;
    func_?(&(this->fields)._zxSlider);
    pGVar5 = (this->fields)._dblSliders;
    if (pGVar5 != (GizmoPlaneSlider3DCollection *)0x0) {
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                (pGVar5,(this->fields)._xySlider,(MethodInfo *)0x0);
      pGVar5 = (this->fields)._dblSliders;
      if (pGVar5 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                  (pGVar5,(this->fields)._yzSlider,(MethodInfo *)0x0);
        pGVar5 = (this->fields)._dblSliders;
        if (pGVar5 != (GizmoPlaneSlider3DCollection *)0x0) {
          GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                    (pGVar5,(this->fields)._zxSlider,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._gizmo;
          pGVar6 = (GizmoLineSlider3D *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
          GizmoLineSlider3D::GizmoLineSlider3D__ctor(pGVar6,pGVar1,0x14,0x1a,(MethodInfo *)0x0);
          (this->fields)._pXSlider = pGVar6;
          func_?(&(this->fields)._pXSlider);
          pGVar6 = (this->fields)._pXSlider;
          if (pGVar6 != (GizmoLineSlider3D *)0x0) {
            GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                      (pGVar6,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
            pGVar6 = (this->fields)._pXSlider;
            if (pGVar6 != (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                        (pGVar6,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._._gizmo;
              pGVar6 = (GizmoLineSlider3D *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
              GizmoLineSlider3D::GizmoLineSlider3D__ctor(pGVar6,pGVar1,0x17,0x1d,(MethodInfo *)0x0)
              ;
              (this->fields)._nXSlider = pGVar6;
              func_?(&(this->fields)._nXSlider);
              pGVar6 = (this->fields)._nXSlider;
              if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                          (pGVar6,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                pGVar6 = (this->fields)._nXSlider;
                if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                            (pGVar6,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._gizmo;
                  pGVar6 = (GizmoLineSlider3D *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
                  GizmoLineSlider3D::GizmoLineSlider3D__ctor
                            (pGVar6,pGVar1,0x15,0x1b,(MethodInfo *)0x0);
                  (this->fields)._pYSlider = pGVar6;
                  func_?(&(this->fields)._pYSlider);
                  pGVar6 = (this->fields)._pYSlider;
                  if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                              (pGVar6,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                    pGVar6 = (this->fields)._pYSlider;
                    if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                      GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                (pGVar6,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._._gizmo;
                      pGVar6 = (GizmoLineSlider3D *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D)
                      ;
                      GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                (pGVar6,pGVar1,0x18,0x1e,(MethodInfo *)0x0);
                      (this->fields)._nYSlider = pGVar6;
                      func_?(&(this->fields)._nYSlider);
                      pGVar6 = (this->fields)._nYSlider;
                      if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                        GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                  (pGVar6,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                        pGVar6 = (this->fields)._nYSlider;
                        if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                    (pGVar6,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                          pGVar1 = (this->fields)._._gizmo;
                          pGVar6 = (GizmoLineSlider3D *)
                                    FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
                          GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                    (pGVar6,pGVar1,0x16,0x1c,(MethodInfo *)0x0);
                          (this->fields)._pZSlider = pGVar6;
                          func_?(&(this->fields)._pZSlider);
                          pGVar6 = (this->fields)._pZSlider;
                          if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                            GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                      (pGVar6,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                            pGVar6 = (this->fields)._pZSlider;
                            if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                              GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                        (pGVar6,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                              pGVar1 = (this->fields)._._gizmo;
                              pGVar6 = (GizmoLineSlider3D *)
                                        FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
                              GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                        (pGVar6,pGVar1,0x19,0x1f,(MethodInfo *)0x0);
                              (this->fields)._nZSlider = pGVar6;
                              func_?(&(this->fields)._nZSlider);
                              pGVar6 = (this->fields)._nZSlider;
                              if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                          (pGVar6,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                pGVar6 = (this->fields)._nZSlider;
                                if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                                  GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                            (pGVar6,2,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                                  pGVar7 = (this->fields)._axesSliders;
                                  if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                              (pGVar7,(this->fields)._pXSlider,(MethodInfo *)0x0);
                                    pGVar7 = (this->fields)._axesSliders;
                                    if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                      GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                (pGVar7,(this->fields)._pYSlider,(MethodInfo *)0x0);
                                      pGVar7 = (this->fields)._axesSliders;
                                      if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                  (pGVar7,(this->fields)._pZSlider,(MethodInfo *)0x0
                                                  );
                                        pGVar7 = (this->fields)._axesSliders;
                                        if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                          GizmoLineSlider3DCollection::
                                          GizmoLineSlider3DCollection_Add
                                                    (pGVar7,(this->fields)._nXSlider,
                                                     (MethodInfo *)0x0);
                                          pGVar7 = (this->fields)._axesSliders;
                                          if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                            GizmoLineSlider3DCollection::
                                            GizmoLineSlider3DCollection_Add
                                                      (pGVar7,(this->fields)._nYSlider,
                                                       (MethodInfo *)0x0);
                                            pGVar7 = (this->fields)._axesSliders;
                                            if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                              GizmoLineSlider3DCollection::
                                              GizmoLineSlider3DCollection_Add
                                                        (pGVar7,(this->fields)._nZSlider,
                                                         (MethodInfo *)0x0);
                                              pGVar4 = (this->fields)._xySlider;
                                              if (((pGVar4 != (GizmoPlaneSlider3D *)0x0) &&
                                                  (pGVar8 = (pGVar4->fields)._._handle,
                                                  pGVar8 != (GizmoHandle *)0x0)) &&
                                                 (pGVar7 = (this->fields)._axesSliders,
                                                 pGVar7 != (GizmoLineSlider3DCollection *)0x0)) {
                                                GizmoLineSlider3DCollection::
                                                GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                          (pGVar7,(pGVar8->fields)._hoverPriority3D,
                                                           (MethodInfo *)0x0);
                                                pGVar4 = (this->fields)._yzSlider;
                                                if (((pGVar4 != (GizmoPlaneSlider3D *)0x0) &&
                                                    (pGVar8 = (pGVar4->fields)._._handle,
                                                    pGVar8 != (GizmoHandle *)0x0)) &&
                                                   (pGVar7 = (this->fields)._axesSliders,
                                                   pGVar7 != (GizmoLineSlider3DCollection *)0x0)) {
                                                  GizmoLineSlider3DCollection::
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar7,(pGVar8->fields).
                                                                    _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar4 = (this->fields)._zxSlider;
                                                  if (((pGVar4 != (GizmoPlaneSlider3D *)0x0) &&
                                                      (pGVar8 = (pGVar4->fields)._._handle,
                                                      pGVar8 != (GizmoHandle *)0x0)) &&
                                                     (pGVar7 = (this->fields)._axesSliders,
                                                     pGVar7 != (GizmoLineSlider3DCollection *)0x0))
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar7,(pGVar8->fields).
                                                                    _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = (this->fields)._._gizmo;
                                                  pGVar9 = (GizmoCap2D *)
                                                            FUN_?(TypeInfo__RTG__GizmoCap2D)
                                                  ;
                                                  GizmoCap2D::GizmoCap2D__ctor
                                                            (pGVar9,pGVar1,200,(MethodInfo *)0x0);
                                                  (this->fields)._vertSnapCap = pGVar9;
                                                  func_?(&(this->fields)._vertSnapCap);
                                                  pGVar9 = (this->fields)._vertSnapCap;
                                                  if (pGVar9 != (GizmoCap2D *)0x0) {
                                                    if ((pGVar9->fields)._._isVisible != 0) {
                                                      pGVar10 = pGVar9->klass;
                                                      (pGVar9->fields)._._isVisible = 0;
                                                      (*(pGVar10->vtable).OnVisibilityStateChanged.
                                                        methodPtr)(pGVar9,(pGVar10->vtable).
                                                                           OnVisibilityStateChanged.
                                                                           method);
                                                    }
                                                    pGVar2 = (GizmoCap3D *)
                                                              (this->fields)._vertSnapCap;
                                                    if (pGVar2 != (GizmoCap3D *)0x0) {
                                                      GizmoCap3D::GizmoCap3D_set_DragSession
                                                                (pGVar2,(IGizmoDragSession *)
                                                                         (this->fields).
                                                                         _vertexSnapDrag,
                                                                 (MethodInfo *)0x0);
                                                      pGVar1 = (this->fields)._._gizmo;
                                                      if ((pGVar1 != (Gizmo *)0x0) &&
                                                         (pGVar11 = (this->fields)._vertexSnapDrag,
                                                         pGVar11 != (GizmoObjectVertexSnapDrag3D *)
                                                                   0x0)) {
                                                        GizmoDragSession::
                                                        GizmoDragSession_AddTargetTransform
                                                                  ((GizmoDragSession *)pGVar11,
                                                                   (pGVar1->fields)._transform,
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar12 = (GizmoPlaneSlider2D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoPlaneSlider2D);
                                                  GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                                            (pGVar12,pGVar1,0x2e,(MethodInfo *)0x0);
                                                  (this->fields)._2DModeDblSlider = pGVar12;
                                                  func_?(&(this->fields).
                                                                       _2DModeDblSlider);
                                                  pGVar12 = (this->fields)._2DModeDblSlider;
                                                  if (pGVar12 != (GizmoPlaneSlider2D *)0x0) {
                                                    GizmoPlaneSlider2D::
                                                    GizmoPlaneSlider2D_SetDragChannel
                                                              (pGVar12,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar12 = (this->fields)._2DModeDblSlider;
                                                    if (pGVar12 != (GizmoPlaneSlider2D *)0x0) {
                                                      pGVar13 = pGVar12->klass;
                                                      (pGVar12->fields)._._isVisible = 0;
                                                      (*(pGVar13->vtable).OnVisibilityStateChanged.
                                                        methodPtr)(pGVar12,(pGVar13->vtable).
                                                                           OnVisibilityStateChanged.
                                                                           method);
                                                      pGVar1 = (this->fields)._._gizmo;
                                                      pGVar14 = (GizmoLineSlider2D *)
                                                                FUN_?(
                                                  TypeInfo__RTG__GizmoLineSlider2D);
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar14,pGVar1,0x26,0x2a,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._p2DModeXSlider = pGVar14;
                                                  func_?(&(this->fields).
                                                                       _p2DModeXSlider);
                                                  pGVar14 = (this->fields)._p2DModeXSlider;
                                                  if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar14,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar14 = (this->fields)._p2DModeXSlider;
                                                    if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar14,0,AxisSign__Enum_Positive,
                                                                 (MethodInfo *)0x0);
                                                      pGVar14 = (this->fields)._p2DModeXSlider;
                                                      if (((((pGVar14 != (GizmoLineSlider2D *)0x0)
                                                            && (pGVar8 = (pGVar14->fields)._._handle
                                                               , pGVar8 != (GizmoHandle *)0x0)) &&
                                                           (pGVar12 = (this->fields).
                                                                      _2DModeDblSlider,
                                                           pGVar12 != (GizmoPlaneSlider2D *)0x0)) &&
                                                          ((pGVar15 = (pGVar12->fields)._._handle,
                                                           pGVar15 != (GizmoHandle *)0x0 &&
                                                           (pPVar16 = (pGVar8->fields).
                                                                      _hoverPriority2D,
                                                           pPVar16 != (Priority *)0x0)))) &&
                                                         (pPVar17 = (pGVar15->fields).
                                                                    _hoverPriority2D,
                                                         pPVar17 != (Priority *)0x0)) {
                                                        (pPVar16->fields)._priority =
                                                             (pPVar17->fields)._priority + 1;
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar14 = (GizmoLineSlider2D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoLineSlider2D);
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar14,pGVar1,0x27,0x2b,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._p2DModeYSlider = pGVar14;
                                                  func_?(&(this->fields).
                                                                       _p2DModeYSlider);
                                                  pGVar14 = (this->fields)._p2DModeYSlider;
                                                  if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar14,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar14 = (this->fields)._p2DModeYSlider;
                                                    if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar14,1,AxisSign__Enum_Positive,
                                                                 (MethodInfo *)0x0);
                                                      pGVar14 = (this->fields)._p2DModeYSlider;
                                                      if (((pGVar14 != (GizmoLineSlider2D *)0x0) &&
                                                          (pGVar8 = (pGVar14->fields)._._handle,
                                                          pGVar8 != (GizmoHandle *)0x0)) &&
                                                         ((pGVar12 = (this->fields)._2DModeDblSlider
                                                          , pGVar12 != (GizmoPlaneSlider2D *)0x0 &&
                                                          (((pGVar15 = (pGVar12->fields)._._handle,
                                                            pGVar15 != (GizmoHandle *)0x0 &&
                                                            (pPVar16 = (pGVar8->fields).
                                                                       _hoverPriority2D,
                                                            pPVar16 != (Priority *)0x0)) &&
                                                           (pPVar17 = (pGVar15->fields).
                                                                      _hoverPriority2D,
                                                           pPVar17 != (Priority *)0x0)))))) {
                                                        (pPVar16->fields)._priority =
                                                             (pPVar17->fields)._priority + 1;
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar14 = (GizmoLineSlider2D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoLineSlider2D);
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar14,pGVar1,0x28,0x2c,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._n2DModeXSlider = pGVar14;
                                                  func_?(&(this->fields).
                                                                       _n2DModeXSlider);
                                                  pGVar14 = (this->fields)._n2DModeXSlider;
                                                  if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar14,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar14 = (this->fields)._n2DModeXSlider;
                                                    if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar14,0,AxisSign__Enum_Negative,
                                                                 (MethodInfo *)0x0);
                                                      pGVar14 = (this->fields)._n2DModeXSlider;
                                                      if (((pGVar14 != (GizmoLineSlider2D *)0x0) &&
                                                          (pGVar8 = (pGVar14->fields)._._handle,
                                                          pGVar8 != (GizmoHandle *)0x0)) &&
                                                         (((pGVar12 = (this->fields).
                                                                      _2DModeDblSlider,
                                                           pGVar12 != (GizmoPlaneSlider2D *)0x0 &&
                                                           ((pGVar15 = (pGVar12->fields)._._handle,
                                                            pGVar15 != (GizmoHandle *)0x0 &&
                                                            (pPVar16 = (pGVar8->fields).
                                                                       _hoverPriority2D,
                                                            pPVar16 != (Priority *)0x0)))) &&
                                                          (pPVar17 = (pGVar15->fields).
                                                                     _hoverPriority2D,
                                                          pPVar17 != (Priority *)0x0)))) {
                                                        (pPVar16->fields)._priority =
                                                             (pPVar17->fields)._priority + 1;
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar14 = (GizmoLineSlider2D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoLineSlider2D);
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar14,pGVar1,0x29,0x2d,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._n2DModeYSlider = pGVar14;
                                                  func_?(&(this->fields).
                                                                       _n2DModeYSlider);
                                                  pGVar14 = (this->fields)._n2DModeYSlider;
                                                  if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar14,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar14 = (this->fields)._n2DModeYSlider;
                                                    if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar14,1,AxisSign__Enum_Negative,
                                                                 (MethodInfo *)0x0);
                                                      pGVar14 = (this->fields)._n2DModeYSlider;
                                                      if ((((pGVar14 != (GizmoLineSlider2D *)0x0) &&
                                                           (pGVar8 = (pGVar14->fields)._._handle,
                                                           pGVar8 != (GizmoHandle *)0x0)) &&
                                                          (pGVar12 = (this->fields)._2DModeDblSlider
                                                          , pGVar12 != (GizmoPlaneSlider2D *)0x0))
                                                         && (((pGVar15 = (pGVar12->fields)._._handle
                                                              , pGVar15 != (GizmoHandle *)0x0 &&
                                                              (pPVar16 = (pGVar8->fields).
                                                                         _hoverPriority2D,
                                                              pPVar16 != (Priority *)0x0)) &&
                                                             (pPVar17 = (pGVar15->fields).
                                                                        _hoverPriority2D,
                                                             pPVar17 != (Priority *)0x0)))) {
                                                        (pPVar16->fields)._priority =
                                                             (pPVar17->fields)._priority + 1;
                                                        pGVar18 = (this->fields)._2DModeSliders;
                                                        if (pGVar18 !=
                                                            (GizmoLineSlider2DCollection *)0x0) {
                                                          GizmoLineSlider2DCollection::
                                                          GizmoLineSlider2DCollection_Add
                                                                    (pGVar18,(this->fields).
                                                                             _p2DModeXSlider,
                                                                     (MethodInfo *)0x0);
                                                          pGVar18 = (this->fields)._2DModeSliders;
                                                          if (pGVar18 !=
                                                              (GizmoLineSlider2DCollection *)0x0) {
                                                            GizmoLineSlider2DCollection::
                                                            GizmoLineSlider2DCollection_Add
                                                                      (pGVar18,(this->fields).
                                                                               _p2DModeYSlider,
                                                                       (MethodInfo *)0x0);
                                                            pGVar18 = (this->fields)._2DModeSliders;
                                                            if (pGVar18 !=
                                                                (GizmoLineSlider2DCollection *)0x0)
                                                            {
                                                              GizmoLineSlider2DCollection::
                                                              GizmoLineSlider2DCollection_Add
                                                                        (pGVar18,(this->fields).
                                                                                 _n2DModeXSlider,
                                                                         (MethodInfo *)0x0);
                                                              pGVar18 = (this->fields).
                                                                        _2DModeSliders;
                                                              if (pGVar18 !=
                                                                  (GizmoLineSlider2DCollection *)0x0
                                                                 ) {
                                                                GizmoLineSlider2DCollection::
                                                                GizmoLineSlider2DCollection_Add
                                                                          (pGVar18,(this->fields).
                                                                                   _n2DModeYSlider,
                                                                           (MethodInfo *)0x0);
                                                                MoveGizmo_Hide2DModeHandles
                                                                          (this,(MethodInfo *)0x0);
                                                                MoveGizmo_SetupSharedLookAndFeel
                                                                          (this,(MethodInfo *)0x0);
                                                                lVar19 = 0xf0;
                                                                lVar20 = 0xf0;
                                                                if ((this->fields)._sharedSettings3D
                                                                    != (MoveGizmoSettings3D *)0x0) {
                                                                  lVar20 = 0x118;
                                                                }
                                                                lVar20 = *(longlong *)
                                                                          ((longlong)&this->klass +
                                                                          lVar20);
                                                                if (lVar20 != 0) {
                                                                  lVar20 = *(longlong *)
                                                                            (lVar20 + 0x30);
                                                                  pGVar6 = (this->fields)._pXSlider
                                                                  ;
                                                                  if (lVar20 != 0) {
                                                                    if (*(int *)(lVar20 + 0x18) == 0
                                                                       ) {
code_?:
                                                                      FUN_?();
                                                                      pcVar21 = (code *)swi(3);
                                                                      (*pcVar21)();
                                                                      return;
                                                                    }
                                                                    if (pGVar6 !=
                                                                        (GizmoLineSlider3D *)0x0) {
                                                                      (pGVar6->fields).
                                                                      _sharedSettings =
                                                                           *(
                                                  GizmoLineSlider3DSettings **)(lVar20 + 0x20);
                                                  if (iRam_? != 0) {
                                                    uVar22 = (uint)((ulonglong)
                                                                    &(pGVar6->fields).
                                                                     _sharedSettings >> 0xc);
                                                    lVar20 = (ulonglong)((uVar22 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar23 = *(ulonglong *)(lVar20 + 0xADDR);
                                                      puVar24 = (ulonglong *)(lVar20 + 0xADDR);
                                                      LOCK();
                                                      bVar25 = uVar23 == *puVar24;
                                                      if (bVar25) {
                                                        *puVar24 = uVar23 | 1L << (uVar22 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar25);
                                                  }
                                                  iVar26 = iRam_?;
                                                  lVar20 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar20 = 0x118;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    lVar20 = *(longlong *)(lVar20 + 0x30);
                                                    pGVar6 = (this->fields)._pYSlider;
                                                    if (lVar20 != 0) {
                                                      if (*(uint *)(lVar20 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar6->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar20 + 0x28);
                                                        if (iVar26 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar6->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar26 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar20 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar20 = 0x118;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    lVar20 = *(longlong *)(lVar20 + 0x30);
                                                    pGVar6 = (this->fields)._pZSlider;
                                                    if (lVar20 != 0) {
                                                      if (*(uint *)(lVar20 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar6->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar20 + 0x30);
                                                        iVar27 = 0;
                                                        if (iVar26 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar6->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar27 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar20 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar20 = 0x118;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    pGVar6 = (this->fields)._nXSlider;
                                                    lVar20 = *(longlong *)(lVar20 + 0x30);
                                                    if (lVar20 != 0) {
                                                      if (*(uint *)(lVar20 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar6->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar20 + 0x38);
                                                        iVar26 = 0;
                                                        if (iVar27 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar6->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar26 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar20 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar20 = 0x118;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    pGVar6 = (this->fields)._nYSlider;
                                                    lVar20 = *(longlong *)(lVar20 + 0x30);
                                                    if (lVar20 != 0) {
                                                      if (*(uint *)(lVar20 + 0x18) < 5)
                                                      goto code_?;
                                                      if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar6->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar20 + 0x40);
                                                        iVar27 = 0;
                                                        if (iVar26 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar6->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar27 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar20 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar20 = 0x118;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    pGVar6 = (this->fields)._nZSlider;
                                                    lVar20 = *(longlong *)(lVar20 + 0x30);
                                                    if (lVar20 != 0) {
                                                      if (*(uint *)(lVar20 + 0x18) < 6)
                                                      goto code_?;
                                                      if (pGVar6 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar6->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar20 + 0x48);
                                                        iVar26 = 0;
                                                        if (iVar27 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar6->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar26 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar20 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar20 = 0x118;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    lVar20 = *(longlong *)(lVar20 + 0x38);
                                                    pGVar4 = (this->fields)._xySlider;
                                                    if (lVar20 != 0) {
                                                      if (*(int *)(lVar20 + 0x18) == 0)
                                                      goto code_?;
                                                      if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar4->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar20 + 0x20);
                                                        iVar27 = 0;
                                                        if (iVar26 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar4->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar27 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar20 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar20 = 0x118;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    lVar20 = *(longlong *)(lVar20 + 0x38);
                                                    pGVar4 = (this->fields)._yzSlider;
                                                    if (lVar20 != 0) {
                                                      if (*(uint *)(lVar20 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar4->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar20 + 0x28);
                                                        iVar26 = 0;
                                                        if (iVar27 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar4->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar26 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar20 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar20 = 0x118;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    lVar20 = *(longlong *)(lVar20 + 0x38);
                                                    pGVar4 = (this->fields)._zxSlider;
                                                    if (lVar20 != 0) {
                                                      if (*(uint *)(lVar20 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar4->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar20 + 0x30);
                                                        iVar27 = 0;
                                                        if (iVar26 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar4->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar27 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar28 = 0xe8;
                                                  lVar20 = 0xe8;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar20 = 0x110;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    lVar20 = *(longlong *)(lVar20 + 0x30);
                                                    pGVar14 = (this->fields)._p2DModeXSlider;
                                                    if (lVar20 != 0) {
                                                      if (*(int *)(lVar20 + 0x18) == 0)
                                                      goto code_?;
                                                      if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar14->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar20 + 0x20);
                                                        iVar26 = 0;
                                                        if (iVar27 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar14->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar26 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar20 = 0xe8;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar20 = 0x110;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    lVar20 = *(longlong *)(lVar20 + 0x30);
                                                    pGVar14 = (this->fields)._p2DModeYSlider;
                                                    if (lVar20 != 0) {
                                                      if (*(uint *)(lVar20 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar14->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar20 + 0x28);
                                                        iVar27 = 0;
                                                        if (iVar26 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar14->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar27 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar20 = 0xe8;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar20 = 0x110;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    pGVar14 = (this->fields)._n2DModeXSlider;
                                                    lVar20 = *(longlong *)(lVar20 + 0x30);
                                                    if (lVar20 != 0) {
                                                      if (*(uint *)(lVar20 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar14->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar20 + 0x30);
                                                        iVar26 = 0;
                                                        if (iVar27 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar14->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar26 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  lVar20 = 0xe8;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar20 = 0x110;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar20);
                                                  if (lVar20 != 0) {
                                                    pGVar14 = (this->fields)._n2DModeYSlider;
                                                    lVar20 = *(longlong *)(lVar20 + 0x30);
                                                    if (lVar20 != 0) {
                                                      if (*(uint *)(lVar20 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar14->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar20 + 0x38);
                                                        iVar27 = 0;
                                                        if (iVar26 != 0) {
                                                          uVar22 = (uint)((ulonglong)
                                                                          &(pGVar14->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar20 = (ulonglong)
                                                                   ((uVar22 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar23 = *(ulonglong *)
                                                                      (lVar20 + 0xADDR);
                                                            puVar24 = (ulonglong *)
                                                                     (lVar20 + 0xADDR);
                                                            LOCK();
                                                            bVar25 = uVar23 == *puVar24;
                                                            if (bVar25) {
                                                              *puVar24 = uVar23 | 1L << (uVar22 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar27 = iRam_?;
                                                  } while (!bVar25);
                                                  }
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar28 = 0x110;
                                                  }
                                                  lVar20 = *(longlong *)
                                                            ((longlong)&this->klass + lVar28);
                                                  if ((lVar20 != 0) &&
                                                     (pGVar12 = (this->fields)._2DModeDblSlider,
                                                     pGVar12 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar12->fields)._sharedSettings =
                                                         *(GizmoPlaneSlider2DSettings **)
                                                          (lVar20 + 0x28);
                                                    iVar26 = 0;
                                                    if (iVar27 != 0) {
                                                      uVar22 = (uint)((ulonglong)
                                                                      &(pGVar12->fields).
                                                                       _sharedSettings >> 0xc);
                                                      lVar20 = (ulonglong)((uVar22 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar23 = *(ulonglong *)
                                                                  (lVar20 + 0xADDR);
                                                        puVar24 = (ulonglong *)(lVar20 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar25 = uVar23 == *puVar24;
                                                        if (bVar25) {
                                                          *puVar24 = uVar23 | 1L << (uVar22 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar26 = iRam_?;
                                                      } while (!bVar25);
                                                    }
                                                    if ((this->fields)._sharedSettings3D !=
                                                        (MoveGizmoSettings3D *)0x0) {
                                                      lVar19 = 0x118;
                                                    }
                                                    lVar20 = *(longlong *)
                                                              ((longlong)&this->klass + lVar19);
                                                    if ((lVar20 != 0) &&
                                                       (pGVar11 = (this->fields)._vertexSnapDrag,
                                                       pGVar11 != (GizmoObjectVertexSnapDrag3D *)0x0)
                                                       ) {
                                                      pGVar29 = *(GizmoObjectVertexSnapSettings **)
                                                                 (lVar20 + 0x28);
                                                      if ((pGVar29 !=
                                                           (GizmoObjectVertexSnapSettings *)0x0) &&
                                                         ((pGVar11->fields)._settings = pGVar29,
                                                         iVar26 != 0)) {
                                                        uVar22 = (uint)((ulonglong)
                                                                        &(pGVar11->fields)._settings
                                                                       >> 0xc);
                                                        lVar20 = (ulonglong)
                                                                 ((uVar22 & 0x1fffff) >> 6) * 8;
                                                        do {
                                                          uVar23 = *(ulonglong *)
                                                                    (lVar20 + 0xADDR);
                                                          puVar24 = (ulonglong *)
                                                                   (lVar20 + 0xADDR);
                                                          LOCK();
                                                          bVar25 = uVar23 == *puVar24;
                                                          if (bVar25) {
                                                            *puVar24 = uVar23 | 1L << (uVar22 & 0x3f)
                                                            ;
                                                          }
                                                          UNLOCK();
                                                        } while (!bVar25);
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
                                                  pcVar21 = (code *)swi(3);
                                                  (*pcVar21)();
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
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnDetached() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnDetached(MoveGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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
               MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnDisabled(MoveGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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
               MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnEnabled(MoveGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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
               MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
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


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnGizmoDragUpdate
               (MoveGizmo *this,int32_t handleId,MethodInfo *method)

{
  if ((this->fields)._isVertexSnapEnabled != 0) {
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 == (Gizmo *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar3 = (pGVar1->fields)._dragInfo._relativeOffset.x;
    uVar4 = (pGVar1->fields)._dragInfo._relativeOffset.y;
    uVar5 = (this->fields)._postVSnapPosRestore.x;
    uVar6 = (this->fields)._postVSnapPosRestore.y;
    fVar7 = (pGVar1->fields)._dragInfo._relativeOffset.z;
    fVar8 = (this->fields)._postVSnapPosRestore.z;
    (this->fields)._postVSnapPosRestore.x = (float)uVar3 + (float)uVar5;
    (this->fields)._postVSnapPosRestore.y = (float)uVar4 + (float)uVar6;
    (this->fields)._postVSnapPosRestore.z = fVar7 + fVar8;
  }
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnGizmoRender
               (MoveGizmo *this,Camera *camera,MethodInfo *method)

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
        pGVar2 = (this->fields)._axesSliders;
        if (pGVar2 == (GizmoLineSlider3DCollection *)0x0) goto code_?;
        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ApplyZoomFactor
                  (pGVar2,camera,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._midCap;
        if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
        if ((pGVar3->fields)._._isVisible != 0) {
          GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar3,camera,(MethodInfo *)0x0);
        }
        if (((this->fields)._isVertexSnapEnabled == 0) && ((this->fields)._is2DModeEnabled == 0)) {
          this_00 = (this->fields)._dblSliders;
          if (this_00 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
          GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_ApplyZoomFactor
                    (this_00,camera,(MethodInfo *)0x0);
          UniversalGizmo::UniversalGizmo_PlaceMvDblSlidersInSliderPlanes
                    ((UniversalGizmo *)this,camera,(MethodInfo *)0x0);
        }
        UniversalGizmo::UniversalGizmo_Update2DGizmoPosition
                  ((UniversalGizmo *)this,(MethodInfo *)0x0);
        if ((this->fields)._is2DModeEnabled != 0) {
          MoveGizmo_Update2DModeHandlePositions(this,(MethodInfo *)0x0);
        }
      }
      pGVar2 = (this->fields)._axesSliders;
      if ((pGVar2 != (GizmoLineSlider3DCollection *)0x0) &&
         (pLVar4 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_GetRenderSortedSliders
                              (pGVar2,camera,(MethodInfo *)0x0),
         pLVar4 != (List_1_RTG_GizmoLineSlider3D_ *)0x0)) {
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
                     ((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
        uStack_11 = 0;
        LStack_12._8_8_ = pLStack_10;
        LStack_12._current = (Object *)0x0;
        uStack_6 = 0;
        pLStack_10 = &LStack_12;
        LStack_12._list = (List_1_System_Object_ *)pLVar4;
        while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_12,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                                  ), bVar13 != 0) {
          if (LStack_12._current == (Object *)0x0) goto code_?;
          (*(code *)(LStack_12._current)->klass[1]._0.nestedTypes)
                    (LStack_12._current,camera,
                     (LStack_12._current)->klass[1]._0.implementedInterfaces);
        }
        pGVar3 = (this->fields)._midCap;
        if (pGVar3 != (GizmoCap3D *)0x0) {
          (*(pGVar3->klass->vtable).Render_1.methodPtr)
                    (pGVar3,camera,(pGVar3->klass->vtable).Render_1.method);
          pGVar14 = (this->fields)._xySlider;
          if (pGVar14 != (GizmoPlaneSlider3D *)0x0) {
            (*(pGVar14->klass->vtable).Render_1.methodPtr)
                      (pGVar14,camera,(pGVar14->klass->vtable).Render_1.method);
            pGVar14 = (this->fields)._yzSlider;
            if (pGVar14 != (GizmoPlaneSlider3D *)0x0) {
              (*(pGVar14->klass->vtable).Render_1.methodPtr)
                        (pGVar14,camera,(pGVar14->klass->vtable).Render_1.method);
              pGVar14 = (this->fields)._zxSlider;
              if (pGVar14 != (GizmoPlaneSlider3D *)0x0) {
                (*(pGVar14->klass->vtable).Render_1.methodPtr)
                          (pGVar14,camera,(pGVar14->klass->vtable).Render_1.method);
                pGVar15 = (this->fields)._vertSnapCap;
                if (pGVar15 != (GizmoCap2D *)0x0) {
                  (*(pGVar15->klass->vtable).Render_1.methodPtr)(pGVar15,camera);
                  this_01 = (this->fields)._2DModeSliders;
                  if (this_01 != (GizmoLineSlider2DCollection *)0x0) {
                    GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Render
                              (this_01,camera,(MethodInfo *)0x0);
                    pGVar16 = (this->fields)._2DModeDblSlider;
                    if (pGVar16 != (GizmoPlaneSlider2D *)0x0) {
                      (*(pGVar16->klass->vtable).Render_1.methodPtr)
                                (pGVar16,camera,(pGVar16->klass->vtable).Render_1.method);
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
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnGizmoTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnGizmoTransformChanged
               (MoveGizmo *this,GizmoTransform *transform,GizmoTransform_ChangeData changeData,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    obj = Gizmo::Gizmo_GetWorkCamera((this->fields)._._gizmo,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    if (((pGVar1 != (Gizmo *)0x0) &&
        (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
       (obj != (Camera *)0x0)) {
      uStack_3._0_4_ = (pGVar2->fields)._position3D.x;
      uStack_3._4_4_ = (pGVar2->fields)._position3D.y;
      fStack_4 = (pGVar2->fields)._position3D.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_5 = 0;
      uStack_6 = 0;
      pvVar7 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7,&uStack_3,2,&uStack_5);
      if (this_00 != (GizmoTransform *)0x0) {
        if (((this_00->fields)._firingChanged2DEvent == 0) &&
           (fVar10 = (this_00->fields)._position2D.x - (float)uStack_5,
           fVar11 = (this_00->fields)._position2D.y - uStack_5._4_4_,
           _UNK_? <= fVar11 * fVar11 + fVar10 * fVar10)) {
          (this_00->fields)._position2D.x = (float)uStack_5;
          (this_00->fields)._position2D.y = uStack_5._4_4_;
          GizmoTransform::GizmoTransform_OnPosition2DChanged(this_00,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnGizmoUpdateBegin
               (MoveGizmo *this,MethodInfo *method)

{
  UniversalGizmo::UniversalGizmo_Update2DGizmoPosition((UniversalGizmo *)this,(MethodInfo *)0x0);
  lVar1 = 0x100;
  if (((this->fields)._is2DModeEnabled == 0) && ((this->fields)._isVertexSnapEnabled == 0)) {
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (pGVar3 = (this->fields)._midCap, pGVar3 == (GizmoCap3D *)0x0))
    goto code_?;
    bVar4 = *(bool *)(lVar2 + 0x28);
    if ((pGVar3->fields)._._isVisible != bVar4) {
      pGVar5 = pGVar3->klass;
      (pGVar3->fields)._._isVisible = bVar4;
      (*(pGVar5->vtable).OnVisibilityStateChanged.methodPtr)();
    }
  }
  lVar2 = 0xe0;
  if ((this->fields)._useSnapEnableHotkey != 0) {
    lVar6 = 0xe0;
    if ((this->fields)._sharedHotkeys != (MoveGizmoHotkeys *)0x0) {
      lVar6 = 0x108;
    }
    lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
    if ((lVar6 == 0) || (pHVar7 = *(Hotkeys **)(lVar6 + 0x30), pHVar7 == (Hotkeys *)0x0))
    goto code_?;
    bVar4 = Hotkeys::Hotkeys_IsActive(pHVar7,1,(MethodInfo *)0x0);
    this_00 = (this->fields)._axesSliders;
    if (this_00 == (GizmoLineSlider3DCollection *)0x0) goto code_?;
    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetSnapEnabled
              (this_00,bVar4,(MethodInfo *)0x0);
    this_01 = (this->fields)._2DModeSliders;
    if (this_01 == (GizmoLineSlider2DCollection *)0x0) goto code_?;
    GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetSnapEnabled
              (this_01,bVar4,(MethodInfo *)0x0);
    pGVar8 = (this->fields)._dblSliders;
    if (pGVar8 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
              (pGVar8,bVar4,(MethodInfo *)0x0);
    pGVar9 = (this->fields)._2DModeDblSlider;
    if (pGVar9 == (GizmoPlaneSlider2D *)0x0) goto code_?;
    (*(pGVar9->klass->vtable).SetSnapEnabled_1.methodPtr)();
  }
  if ((this->fields)._use2DModeEnableHotkey != 0) {
    lVar6 = 0xe0;
    if ((this->fields)._sharedHotkeys != (MoveGizmoHotkeys *)0x0) {
      lVar6 = 0x108;
    }
    lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
    if ((lVar6 == 0) || (pHVar7 = *(Hotkeys **)(lVar6 + 0x28), pHVar7 == (Hotkeys *)0x0))
    goto code_?;
    bVar4 = Hotkeys::Hotkeys_IsActive(pHVar7,1,(MethodInfo *)0x0);
    MoveGizmo_Set2DModeEnabled(this,bVar4,(MethodInfo *)0x0);
  }
  fVar10 = _UNK_?;
  if ((this->fields)._is2DModeEnabled == 0) {
    bVar4 = (this->fields)._isVertexSnapEnabled;
    if (bVar4 == 0) {
      pGVar11 = (this->fields)._._gizmo;
      if ((pGVar11 == (Gizmo *)0x0) ||
         (pGVar12 = (pGVar11->fields)._transform, pGVar12 == (GizmoTransform *)0x0))
      goto code_?;
      fVar13 = (pGVar12->fields)._position3D.y;
      fVar14 = (pGVar12->fields)._position3D.z;
      (this->fields)._postVSnapPosRestore.x = (pGVar12->fields)._position3D.x;
      (this->fields)._postVSnapPosRestore.y = fVar13;
      (this->fields)._postVSnapPosRestore.z = fVar14;
    }
    if ((this->fields)._useVertSnapEnableHotkey != 0) {
      if ((this->fields)._sharedHotkeys != (MoveGizmoHotkeys *)0x0) {
        lVar2 = 0x108;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
      if ((lVar2 == 0) || (pHVar7 = *(Hotkeys **)(lVar2 + 0x38), pHVar7 == (Hotkeys *)0x0))
      goto code_?;
      bVar15 = Hotkeys::Hotkeys_IsActive(pHVar7,1,(MethodInfo *)0x0);
      if (((this->fields)._isVertexSnapEnabled != bVar15) &&
         (((this->fields)._is2DModeEnabled == 0 && ((this->fields)._._isEnabled != 0)))) {
        pGVar11 = (this->fields)._._gizmo;
        if (pGVar11 == (Gizmo *)0x0) goto code_?;
        if ((pGVar11->fields)._dragInfo._isDragged == 0) {
          pGVar16 = (this->fields)._vertSnapCap;
          if (bVar15 == 0) {
            if (pGVar16 == (GizmoCap2D *)0x0) goto code_?;
            if ((pGVar16->fields)._._isVisible != 0) {
              pGVar17 = pGVar16->klass;
              (pGVar16->fields)._._isVisible = 0;
              (*(pGVar17->vtable).OnVisibilityStateChanged.methodPtr)();
            }
          }
          else {
            if (pGVar16 == (GizmoCap2D *)0x0) goto code_?;
            if ((pGVar16->fields)._._isVisible != 1) {
              pGVar17 = pGVar16->klass;
              (pGVar16->fields)._._isVisible = 1;
              (*(pGVar17->vtable).OnVisibilityStateChanged.methodPtr)();
            }
            pGVar3 = (this->fields)._midCap;
            if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
            if ((pGVar3->fields)._._isVisible != 0) {
              pGVar5 = pGVar3->klass;
              (pGVar3->fields)._._isVisible = 0;
              (*(pGVar5->vtable).OnVisibilityStateChanged.methodPtr)();
            }
            pGVar8 = (this->fields)._dblSliders;
            if (pGVar8 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
            GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                      (pGVar8,0,1,(MethodInfo *)0x0);
          }
          (this->fields)._isVertexSnapEnabled = bVar15;
        }
      }
    }
    if ((bVar4 != 0) && ((this->fields)._isVertexSnapEnabled == 0)) {
      pGVar11 = (this->fields)._._gizmo;
      if ((pGVar11 == (Gizmo *)0x0) ||
         (pGVar12 = (pGVar11->fields)._transform, pGVar12 == (GizmoTransform *)0x0))
      goto code_?;
      if (((pGVar12->fields)._firingChanged3DEvent == 0) &&
         (uVar18 = (pGVar12->fields)._position3D.x, uVar19 = (pGVar12->fields)._position3D.y,
         uVar20 = (this->fields)._postVSnapPosRestore.x,
         uVar21 = (this->fields)._postVSnapPosRestore.y,
         fVar14 = (pGVar12->fields)._position3D.z - (this->fields)._postVSnapPosRestore.z,
         fVar10 <= ((float)uVar19 - (float)uVar21) * ((float)uVar19 - (float)uVar21) +
                  ((float)uVar18 - (float)uVar20) * ((float)uVar18 - (float)uVar20) + fVar14 * fVar14))
      {
        fVar13 = (this->fields)._postVSnapPosRestore.y;
        fVar14 = (this->fields)._postVSnapPosRestore.z;
        (pGVar12->fields)._position3D.x = (this->fields)._postVSnapPosRestore.x;
        (pGVar12->fields)._position3D.y = fVar13;
        (pGVar12->fields)._position3D.z = fVar14;
        GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar12,(MethodInfo *)0x0);
      }
    }
    pGVar22 = (this->fields)._pXSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 == 0))
    goto code_?;
    if (*(int *)(lVar2 + 0x18) == 0) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar23 = pGVar22->klass;
    (pGVar22->fields)._._isVisible = *(char *)(lVar2 + 0x20) != '\0';
    (*(pGVar23->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar22,(pGVar23->vtable).OnVisibilityStateChanged.method);
    pGVar22 = (this->fields)._pXSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 == 0))
    goto code_?;
    if (*(int *)(lVar2 + 0x18) == 0) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar24 = *(char *)(lVar2 + 0x20) != '\0';
    pGVar3 = (pGVar22->fields)._cap3D;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar3->fields)._._isVisible != bVar24) {
      pGVar5 = pGVar3->klass;
      (pGVar3->fields)._._isVisible = bVar24;
      (*(pGVar5->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar3,(pGVar5->vtable).OnVisibilityStateChanged.method);
    }
    pGVar22 = (this->fields)._pYSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 == 0))
    goto code_?;
    if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar23 = pGVar22->klass;
    (pGVar22->fields)._._isVisible = *(char *)(lVar2 + 0x21) != '\0';
    (*(pGVar23->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar22,(pGVar23->vtable).OnVisibilityStateChanged.method);
    pGVar22 = (this->fields)._pYSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 == 0))
    goto code_?;
    if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar24 = *(char *)(lVar2 + 0x21) != '\0';
    pGVar3 = (pGVar22->fields)._cap3D;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar3->fields)._._isVisible != bVar24) {
      pGVar5 = pGVar3->klass;
      (pGVar3->fields)._._isVisible = bVar24;
      (*(pGVar5->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar3,(pGVar5->vtable).OnVisibilityStateChanged.method);
    }
    pGVar22 = (this->fields)._pZSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 == 0))
    goto code_?;
    if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar23 = pGVar22->klass;
    (pGVar22->fields)._._isVisible = *(char *)(lVar2 + 0x22) != '\0';
    (*(pGVar23->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar22,(pGVar23->vtable).OnVisibilityStateChanged.method);
    pGVar22 = (this->fields)._pZSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 == 0))
    goto code_?;
    if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar24 = *(char *)(lVar2 + 0x22) != '\0';
    pGVar3 = (pGVar22->fields)._cap3D;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar3->fields)._._isVisible != bVar24) {
      pGVar5 = pGVar3->klass;
      (pGVar3->fields)._._isVisible = bVar24;
      (*(pGVar5->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar3,(pGVar5->vtable).OnVisibilityStateChanged.method);
    }
    pGVar22 = (this->fields)._nXSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 == 0))
    goto code_?;
    if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar23 = pGVar22->klass;
    (pGVar22->fields)._._isVisible = *(char *)(lVar2 + 0x23) != '\0';
    (*(pGVar23->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar22,(pGVar23->vtable).OnVisibilityStateChanged.method);
    pGVar22 = (this->fields)._nXSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 == 0))
    goto code_?;
    if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar24 = *(char *)(lVar2 + 0x23) != '\0';
    pGVar3 = (pGVar22->fields)._cap3D;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar3->fields)._._isVisible != bVar24) {
      pGVar5 = pGVar3->klass;
      (pGVar3->fields)._._isVisible = bVar24;
      (*(pGVar5->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar3,(pGVar5->vtable).OnVisibilityStateChanged.method);
    }
    pGVar22 = (this->fields)._nYSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 == 0))
    goto code_?;
    if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar23 = pGVar22->klass;
    (pGVar22->fields)._._isVisible = *(char *)(lVar2 + 0x24) != '\0';
    (*(pGVar23->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar22,(pGVar23->vtable).OnVisibilityStateChanged.method);
    pGVar22 = (this->fields)._nYSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 == 0))
    goto code_?;
    if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar24 = *(char *)(lVar2 + 0x24) != '\0';
    pGVar3 = (pGVar22->fields)._cap3D;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar3->fields)._._isVisible != bVar24) {
      pGVar5 = pGVar3->klass;
      (pGVar3->fields)._._isVisible = bVar24;
      (*(pGVar5->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar3,(pGVar5->vtable).OnVisibilityStateChanged.method);
    }
    pGVar22 = (this->fields)._nZSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 == 0))
    goto code_?;
    if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar23 = pGVar22->klass;
    (pGVar22->fields)._._isVisible = *(char *)(lVar2 + 0x25) != '\0';
    (*(pGVar23->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar22,(pGVar23->vtable).OnVisibilityStateChanged.method);
    pGVar22 = (this->fields)._nZSlider;
    lVar2 = 0x100;
    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
      lVar2 = 0x128;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 == 0))
    goto code_?;
    if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
    if (pGVar22 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar24 = *(char *)(lVar2 + 0x25) != '\0';
    pGVar3 = (pGVar22->fields)._cap3D;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar3->fields)._._isVisible != bVar24) {
      pGVar5 = pGVar3->klass;
      (pGVar3->fields)._._isVisible = bVar24;
      (*(pGVar5->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar3,(pGVar5->vtable).OnVisibilityStateChanged.method);
    }
  }
  if ((this->fields)._isVertexSnapEnabled == 0) {
    if ((this->fields)._is2DModeEnabled == 0) {
      pGVar25 = (this->fields)._xySlider;
      lVar2 = 0x100;
      if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
        lVar2 = 0x128;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
      if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x50), lVar2 != 0)) {
        if (*(int *)(lVar2 + 0x18) == 0) goto code_?;
        if (pGVar25 != (GizmoPlaneSlider3D *)0x0) {
          pGVar26 = pGVar25->klass;
          (pGVar25->fields)._._isVisible = *(char *)(lVar2 + 0x20) != '\0';
          (*(pGVar26->vtable).OnVisibilityStateChanged.methodPtr)
                    (pGVar25,(pGVar26->vtable).OnVisibilityStateChanged.method);
          pGVar25 = (this->fields)._xySlider;
          if (pGVar25 != (GizmoPlaneSlider3D *)0x0) {
            GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                      ((this->fields)._xySlider,(pGVar25->fields)._._isVisible,(MethodInfo *)0x0);
            pGVar25 = (this->fields)._yzSlider;
            lVar2 = 0x100;
            if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
              lVar2 = 0x128;
            }
            lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
            if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x50), lVar2 != 0)) {
              if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
              if (pGVar25 != (GizmoPlaneSlider3D *)0x0) {
                pGVar26 = pGVar25->klass;
                (pGVar25->fields)._._isVisible = *(char *)(lVar2 + 0x21) != '\0';
                (*(pGVar26->vtable).OnVisibilityStateChanged.methodPtr)
                          (pGVar25,(pGVar26->vtable).OnVisibilityStateChanged.method);
                pGVar25 = (this->fields)._yzSlider;
                if (pGVar25 != (GizmoPlaneSlider3D *)0x0) {
                  GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                            ((this->fields)._yzSlider,(pGVar25->fields)._._isVisible,
                             (MethodInfo *)0x0);
                  pGVar25 = (this->fields)._zxSlider;
                  if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
                    lVar1 = 0x128;
                  }
                  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
                  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x50), lVar1 != 0)) {
                    if (*(uint *)(lVar1 + 0x18) < 3) goto code_?;
                    if (pGVar25 != (GizmoPlaneSlider3D *)0x0) {
                      pGVar26 = pGVar25->klass;
                      (pGVar25->fields)._._isVisible = *(char *)(lVar1 + 0x22) != '\0';
                      (*(pGVar26->vtable).OnVisibilityStateChanged.methodPtr)
                                (pGVar25,(pGVar26->vtable).OnVisibilityStateChanged.method);
                      pGVar25 = (this->fields)._zxSlider;
                      if (pGVar25 != (GizmoPlaneSlider3D *)0x0) {
                        GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                  ((this->fields)._zxSlider,(pGVar25->fields)._._isVisible,
                                   (MethodInfo *)0x0);
                        pGVar11 = (this->fields)._._gizmo;
                        if (pGVar11 != (Gizmo *)0x0) {
                          pCVar27 = Gizmo::Gizmo_get_FocusCamera(pGVar11,(MethodInfo *)0x0);
                          UniversalGizmo::UniversalGizmo_PlaceMvDblSlidersInSliderPlanes
                                    ((UniversalGizmo *)this,pCVar27,(MethodInfo *)0x0);
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
      goto code_?;
    }
    if ((this->fields)._isVertexSnapEnabled == 0) {
      if ((this->fields)._is2DModeEnabled == 0) {
        return;
      }
      pGVar28 = (this->fields)._p2DModeXSlider;
      lVar2 = 0xf8;
      lVar1 = 0xf8;
      if ((this->fields)._sharedLookAndFeel2D != (MoveGizmoLookAndFeel2D *)0x0) {
        lVar1 = 0x120;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x18) == 0) {
code_?:
          FUN_?();
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        if (pGVar28 != (GizmoLineSlider2D *)0x0) {
          pGVar30 = pGVar28->klass;
          (pGVar28->fields)._._isVisible = *(char *)(lVar1 + 0x20) != '\0';
          (*(pGVar30->vtable).OnVisibilityStateChanged.methodPtr)
                    (pGVar28,(pGVar30->vtable).OnVisibilityStateChanged.method);
          pGVar28 = (this->fields)._p2DModeXSlider;
          uVar31 = 0xf8;
          if ((this->fields)._sharedLookAndFeel2D != (MoveGizmoLookAndFeel2D *)0x0) {
            uVar31 = 0x120;
          }
          lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar31);
          if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
            if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
            if (pGVar28 != (GizmoLineSlider2D *)0x0) {
              bVar24 = *(char *)(lVar1 + 0x20) != '\0';
              pGVar16 = (pGVar28->fields)._cap2D;
              if (pGVar16 != (GizmoCap2D *)0x0) {
                if ((bool)(pGVar16->fields)._._isVisible != bVar24) {
                  pGVar17 = pGVar16->klass;
                  (pGVar16->fields)._._isVisible = bVar24;
                  (*(pGVar17->vtable).OnVisibilityStateChanged.methodPtr)
                            (pGVar16,(pGVar17->vtable).OnVisibilityStateChanged.method);
                }
                pGVar28 = (this->fields)._p2DModeYSlider;
                lVar1 = 0xf8;
                if ((this->fields)._sharedLookAndFeel2D != (MoveGizmoLookAndFeel2D *)0x0) {
                  lVar1 = 0x120;
                }
                lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
                if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 != 0)) {
                  if (*(uint *)(lVar1 + 0x18) < 2) goto code_?;
                  if (pGVar28 != (GizmoLineSlider2D *)0x0) {
                    pGVar30 = pGVar28->klass;
                    (pGVar28->fields)._._isVisible = *(char *)(lVar1 + 0x21) != '\0';
                    (*(pGVar30->vtable).OnVisibilityStateChanged.methodPtr)
                              (pGVar28,(pGVar30->vtable).OnVisibilityStateChanged.method);
                    pGVar28 = (this->fields)._p2DModeYSlider;
                    lVar1 = 0xf8;
                    if ((this->fields)._sharedLookAndFeel2D != (MoveGizmoLookAndFeel2D *)0x0) {
                      lVar1 = 0x120;
                    }
                    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
                    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
                      if (*(uint *)(lVar1 + 0x18) < 2) goto code_?;
                      if (pGVar28 != (GizmoLineSlider2D *)0x0) {
                        bVar24 = *(char *)(lVar1 + 0x21) != '\0';
                        pGVar16 = (pGVar28->fields)._cap2D;
                        if (pGVar16 != (GizmoCap2D *)0x0) {
                          if ((bool)(pGVar16->fields)._._isVisible != bVar24) {
                            pGVar17 = pGVar16->klass;
                            (pGVar16->fields)._._isVisible = bVar24;
                            (*(pGVar17->vtable).OnVisibilityStateChanged.methodPtr)
                                      (pGVar16,(pGVar17->vtable).OnVisibilityStateChanged.method);
                          }
                          pGVar28 = (this->fields)._n2DModeXSlider;
                          lVar1 = 0xf8;
                          if ((this->fields)._sharedLookAndFeel2D != (MoveGizmoLookAndFeel2D *)0x0)
                          {
                            lVar1 = 0x120;
                          }
                          lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
                          if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 != 0))
                          {
                            if (*(uint *)(lVar1 + 0x18) < 3) goto code_?;
                            if (pGVar28 != (GizmoLineSlider2D *)0x0) {
                              pGVar30 = pGVar28->klass;
                              (pGVar28->fields)._._isVisible = *(char *)(lVar1 + 0x22) != '\0';
                              (*(pGVar30->vtable).OnVisibilityStateChanged.methodPtr)
                                        (pGVar28,(pGVar30->vtable).OnVisibilityStateChanged.method);
                              pGVar28 = (this->fields)._n2DModeXSlider;
                              lVar1 = 0xf8;
                              if ((this->fields)._sharedLookAndFeel2D !=
                                  (MoveGizmoLookAndFeel2D *)0x0) {
                                lVar1 = 0x120;
                              }
                              lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
                              if ((lVar1 != 0) &&
                                 (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
                                if (*(uint *)(lVar1 + 0x18) < 3) goto code_?;
                                if (pGVar28 != (GizmoLineSlider2D *)0x0) {
                                  bVar24 = *(char *)(lVar1 + 0x22) != '\0';
                                  pGVar16 = (pGVar28->fields)._cap2D;
                                  if (pGVar16 != (GizmoCap2D *)0x0) {
                                    if ((bool)(pGVar16->fields)._._isVisible != bVar24) {
                                      pGVar17 = pGVar16->klass;
                                      (pGVar16->fields)._._isVisible = bVar24;
                                      (*(pGVar17->vtable).OnVisibilityStateChanged.methodPtr)
                                                (pGVar16,(pGVar17->vtable).OnVisibilityStateChanged.
                                                         method);
                                    }
                                    pGVar28 = (this->fields)._n2DModeYSlider;
                                    lVar1 = 0xf8;
                                    if ((this->fields)._sharedLookAndFeel2D !=
                                        (MoveGizmoLookAndFeel2D *)0x0) {
                                      lVar1 = 0x120;
                                    }
                                    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
                                    if ((lVar1 != 0) &&
                                       (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 != 0)) {
                                      if (*(uint *)(lVar1 + 0x18) < 4) goto code_?;
                                      if (pGVar28 != (GizmoLineSlider2D *)0x0) {
                                        pGVar30 = pGVar28->klass;
                                        (pGVar28->fields)._._isVisible =
                                             *(char *)(lVar1 + 0x23) != '\0';
                                        (*(pGVar30->vtable).OnVisibilityStateChanged.methodPtr)
                                                  (pGVar28,(pGVar30->vtable).
                                                           OnVisibilityStateChanged.method);
                                        pGVar28 = (this->fields)._n2DModeYSlider;
                                        lVar1 = 0xf8;
                                        if ((this->fields)._sharedLookAndFeel2D !=
                                            (MoveGizmoLookAndFeel2D *)0x0) {
                                          lVar1 = 0x120;
                                        }
                                        lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
                                        if ((lVar1 != 0) &&
                                           (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
                                          if (*(uint *)(lVar1 + 0x18) < 4)
                                          goto code_?;
                                          if (pGVar28 != (GizmoLineSlider2D *)0x0) {
                                            bVar24 = *(char *)(lVar1 + 0x23) != '\0';
                                            pGVar16 = (pGVar28->fields)._cap2D;
                                            if (pGVar16 != (GizmoCap2D *)0x0) {
                                              if ((bool)(pGVar16->fields)._._isVisible != bVar24) {
                                                pGVar17 = pGVar16->klass;
                                                (pGVar16->fields)._._isVisible = bVar24;
                                                (*(pGVar17->vtable).OnVisibilityStateChanged.
                                                  methodPtr)(pGVar16,(pGVar17->vtable).
                                                                     OnVisibilityStateChanged.method
                                                            );
                                              }
                                              pGVar9 = (this->fields)._2DModeDblSlider;
                                              if (pGVar9 != (GizmoPlaneSlider2D *)0x0) {
                                                bVar4 = (pGVar9->fields)._._isVisible;
                                                lVar1 = 0xf8;
                                                if ((this->fields)._sharedLookAndFeel2D !=
                                                    (MoveGizmoLookAndFeel2D *)0x0) {
                                                  lVar1 = 0x120;
                                                }
                                                lVar1 = *(longlong *)
                                                          ((longlong)&this->klass + lVar1);
                                                if (lVar1 != 0) {
                                                  pGVar9 = (this->fields)._2DModeDblSlider;
                                                  pGVar32 = pGVar9->klass;
                                                  (pGVar9->fields)._._isVisible =
                                                       *(bool *)(lVar1 + 0x38);
                                                  (*(pGVar32->vtable).OnVisibilityStateChanged.
                                                    methodPtr)(pGVar9,(pGVar32->vtable).
                                                                       OnVisibilityStateChanged.
                                                                       method);
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (MoveGizmoLookAndFeel2D *)0x0) {
                                                    lVar2 = 0x120;
                                                  }
                                                  lVar1 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if ((lVar1 != 0) &&
                                                     (pGVar9 = (this->fields)._2DModeDblSlider,
                                                     pGVar9 != (GizmoPlaneSlider2D *)0x0)) {
                                                    GizmoPlaneSlider2D::
                                                    GizmoPlaneSlider2D_SetBorderVisible
                                                              (pGVar9,*(bool *)(lVar1 + 0x38),
                                                               (MethodInfo *)0x0);
                                                    if (bVar4 != 0) {
                                                      return;
                                                    }
                                                    pGVar9 = (this->fields)._2DModeDblSlider;
                                                    if (pGVar9 != (GizmoPlaneSlider2D *)0x0) {
                                                      if ((pGVar9->fields)._._isVisible == 0) {
                                                        return;
                                                      }
                                                      MoveGizmo_Update2DModeHandlePositions
                                                                (this,(MethodInfo *)0x0);
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
      goto code_?;
    }
  }
  pGVar33 = (this->fields)._vertexSnapDrag;
  if (pGVar33 == (GizmoObjectVertexSnapDrag3D *)0x0) {
code_?:
    FUN_?();
    pcVar29 = (code *)swi(3);
    (*pcVar29)();
    return;
  }
  cVar34 = (*(pGVar33->klass->vtable).get_IsActive_1.methodPtr)
                     (pGVar33,(pGVar33->klass->vtable).get_IsActive_1.method);
  if (cVar34 == '\0') {
    pGVar33 = (this->fields)._vertexSnapDrag;
    pGVar11 = (this->fields)._._gizmo;
    if (pGVar33 == (GizmoObjectVertexSnapDrag3D *)0x0) goto code_?;
    if (((pGVar33->fields)._targetObjects != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) &&
       (cVar34 = (*(pGVar33->klass->vtable).get_IsActive_1.methodPtr)(pGVar33), cVar34 == '\0')) {
      if (pGVar11 == (Gizmo *)0x0) goto code_?;
      pCVar27 = Gizmo::Gizmo_get_FocusCamera(pGVar11,(MethodInfo *)0x0);
      bVar4 = GizmoObjectVertexSnapDrag3D::
               GizmoObjectVertexSnapDrag3D_GetWorldPointClosestToInputDevice
                         (pGVar33,pCVar27,(pGVar33->fields)._targetObjects,
                          &(pGVar33->fields)._snapPivot,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pGVar11 = (this->fields)._._gizmo;
        if (((pGVar11 == (Gizmo *)0x0) ||
            (pGVar33 = (this->fields)._vertexSnapDrag, pGVar33 == (GizmoObjectVertexSnapDrag3D *)0x0
            )) || (pGVar12 = (pGVar11->fields)._transform, pGVar12 == (GizmoTransform *)0x0))
        goto code_?;
        if (((pGVar12->fields)._firingChanged3DEvent == 0) &&
           (uVar35 = (pGVar33->fields)._snapPivot.x, uVar36 = (pGVar33->fields)._snapPivot.y,
           uVar37 = (pGVar12->fields)._position3D.x,
           fVar14 = (pGVar12->fields)._position3D.z - (pGVar33->fields)._snapPivot.z,
           fVar13 = (pGVar12->fields)._position3D.y - (float)uVar36,
           fVar10 <= fVar13 * fVar13 + ((float)uVar37 - (float)uVar35) * ((float)uVar37 - (float)uVar35)
                    + fVar14 * fVar14)) {
          fVar14 = (pGVar33->fields)._snapPivot.y;
          fVar10 = (pGVar33->fields)._snapPivot.z;
          (pGVar12->fields)._position3D.x = (pGVar33->fields)._snapPivot.x;
          (pGVar12->fields)._position3D.y = fVar14;
          (pGVar12->fields)._position3D.z = fVar10;
          GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar12,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Boolean OwnsHandle(Int32) */

bool Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OwnsHandle
               (MoveGizmo *this,int32_t handleId,MethodInfo *method)

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
      pGVar3 = (this->fields)._midCap;
      if ((pGVar3 != (GizmoCap3D *)0x0) &&
         (pGVar4 = (pGVar3->fields)._._handle, pGVar4 != (GizmoHandle *)0x0)) {
        if ((pGVar4->fields)._id == handleId) {
          return 1;
        }
        this_00 = (this->fields)._dblSliders;
        if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
          bVar2 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                            (this_00,handleId,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            return 1;
          }
          pGVar5 = (this->fields)._2DModeSliders;
          if (pGVar5 != (GizmoLineSlider2DCollection *)0x0) {
            bVar2 = GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Contains_1
                              (pGVar5,handleId,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              return 1;
            }
            pGVar5 = (this->fields)._2DModeSliders;
            if (pGVar5 != (GizmoLineSlider2DCollection *)0x0) {
              bVar2 = GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_ContainsCapId
                                (pGVar5,handleId,(MethodInfo *)0x0);
              if (bVar2 != 0) {
                return 1;
              }
              pGVar6 = (this->fields)._2DModeDblSlider;
              if ((pGVar6 != (GizmoPlaneSlider2D *)0x0) &&
                 (pGVar4 = (pGVar6->fields)._._handle, pGVar4 != (GizmoHandle *)0x0)) {
                return (pGVar4->fields)._id == handleId;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
  return bVar2;
}


/* Void Set2DModeEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_Set2DModeEnabled
               (MoveGizmo *this,bool isEnabled,MethodInfo *method)

{
  if ((((this->fields)._is2DModeEnabled == isEnabled) || ((this->fields)._isVertexSnapEnabled != 0))
     || ((this->fields)._._isEnabled == 0)) {
    return;
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if ((pGVar1->fields)._dragInfo._isDragged != 0) {
      return;
    }
    if (isEnabled == 0) {
      MoveGizmo_Hide2DModeHandles(this,(MethodInfo *)0x0);
      (this->fields)._is2DModeEnabled = 0;
      return;
    }
    pGVar2 = (this->fields)._midCap;
    if (pGVar2 != (GizmoCap3D *)0x0) {
      if ((pGVar2->fields)._._isVisible != 0) {
        pGVar3 = pGVar2->klass;
        (pGVar2->fields)._._isVisible = 0;
        (*(pGVar3->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar2,(pGVar3->vtable).OnVisibilityStateChanged.method);
      }
      pGVar4 = (this->fields)._2DModeSliders;
      if (pGVar4 != (GizmoLineSlider2DCollection *)0x0) {
        GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetVisible
                  (pGVar4,1,(MethodInfo *)0x0);
        pGVar4 = (this->fields)._2DModeSliders;
        if (pGVar4 != (GizmoLineSlider2DCollection *)0x0) {
          GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Set2DCapsVisible
                    (pGVar4,1,(MethodInfo *)0x0);
          pGVar5 = (this->fields)._2DModeDblSlider;
          if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
            pGVar6 = pGVar5->klass;
            (pGVar5->fields)._._isVisible = 1;
            (*(pGVar6->vtable).OnVisibilityStateChanged.methodPtr)
                      (pGVar5,(pGVar6->vtable).OnVisibilityStateChanged.method);
            pGVar5 = (this->fields)._2DModeDblSlider;
            if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
              GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(pGVar5,1,(MethodInfo *)0x0);
              this_00 = (this->fields)._dblSliders;
              if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
                GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                          (this_00,0,1,(MethodInfo *)0x0);
                pGVar7 = (this->fields)._axesSliders;
                if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                  GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetVisible
                            (pGVar7,0,(MethodInfo *)0x0);
                  pGVar7 = (this->fields)._axesSliders;
                  if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Set3DCapsVisible
                              (pGVar7,0,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._._gizmo;
                    if (((pGVar1 != (Gizmo *)0x0) &&
                        (pGVar8 = (pGVar1->fields)._transform, pGVar8 != (GizmoTransform *)0x0)) &&
                       (pGVar4 = (this->fields)._2DModeSliders,
                       pGVar4 != (GizmoLineSlider2DCollection *)0x0)) {
                      VStack_9.x = (pGVar8->fields)._position3D.x;
                      VStack_9.y = (pGVar8->fields)._position3D.y;
                      VStack_9.z = (pGVar8->fields)._position3D.z;
                      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetOffsetDragOrigin
                                (pGVar4,&VStack_9,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._._gizmo;
                      if (((pGVar1 != (Gizmo *)0x0) &&
                          (pGVar8 = (pGVar1->fields)._transform, pGVar8 != (GizmoTransform *)0x0))
                         && (pGVar5 = (this->fields)._2DModeDblSlider,
                            pGVar5 != (GizmoPlaneSlider2D *)0x0)) {
                        fVar10 = (pGVar8->fields)._position3D.y;
                        fVar11 = (pGVar8->fields)._position3D.z;
                        (pGVar5->fields)._offsetDragOrigin.x = (pGVar8->fields)._position3D.x;
                        (pGVar5->fields)._offsetDragOrigin.y = fVar10;
                        (pGVar5->fields)._offsetDragOrigin.z = fVar11;
                        UniversalGizmo::UniversalGizmo_Update2DGizmoPosition
                                  ((UniversalGizmo *)this,(MethodInfo *)0x0);
                        MoveGizmo_Update2DModeHandlePositions(this,(MethodInfo *)0x0);
                        (this->fields)._is2DModeEnabled = isEnabled;
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_SetSnapEnabled
               (MoveGizmo *this,bool isEnabled,MethodInfo *method)

{
  this_00 = (this->fields)._axesSliders;
  if (this_00 != (GizmoLineSlider3DCollection *)0x0) {
    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetSnapEnabled
              (this_00,isEnabled,(MethodInfo *)0x0);
    this_01 = (this->fields)._2DModeSliders;
    if (this_01 != (GizmoLineSlider2DCollection *)0x0) {
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetSnapEnabled
                (this_01,isEnabled,(MethodInfo *)0x0);
      this_02 = (this->fields)._dblSliders;
      if (this_02 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                  (this_02,isEnabled,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._2DModeDblSlider;
        if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pGVar1->klass->vtable).SetSnapEnabled_1.methodPtr)
                    (pGVar1,(ulonglong)isEnabled,(pGVar1->klass->vtable).SetSnapEnabled_1.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVertexSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_SetVertexSnapEnabled
               (MoveGizmo *this,bool isEnabled,MethodInfo *method)

{
  if ((((this->fields)._isVertexSnapEnabled != isEnabled) && ((this->fields)._is2DModeEnabled == 0))
     && ((this->fields)._._isEnabled != 0)) {
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 == (Gizmo *)0x0) goto code_?;
    if ((pGVar1->fields)._dragInfo._isDragged != 0) {
      return;
    }
    pGVar2 = (this->fields)._vertSnapCap;
    if (isEnabled == 0) {
      if (pGVar2 == (GizmoCap2D *)0x0) goto code_?;
      if ((pGVar2->fields)._._isVisible != 0) {
        (pGVar2->fields)._._isVisible = 0;
        (*(pGVar2->klass->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar2,(pGVar2->klass->vtable).OnVisibilityStateChanged.method);
        (this->fields)._isVertexSnapEnabled = 0;
        return;
      }
    }
    else {
      if (pGVar2 == (GizmoCap2D *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pGVar2->fields)._._isVisible != 1) {
        pGVar4 = pGVar2->klass;
        (pGVar2->fields)._._isVisible = 1;
        (*(pGVar4->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar2,(pGVar4->vtable).OnVisibilityStateChanged.method,(char)method);
      }
      pGVar5 = (this->fields)._midCap;
      if (pGVar5 == (GizmoCap3D *)0x0) goto code_?;
      if ((pGVar5->fields)._._isVisible != 0) {
        pGVar6 = pGVar5->klass;
        (pGVar5->fields)._._isVisible = 0;
        (*(pGVar6->vtable).OnVisibilityStateChanged.methodPtr)();
      }
      this_00 = (this->fields)._dblSliders;
      if (this_00 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                (this_00,0,1,(MethodInfo *)0x0);
    }
    (this->fields)._isVertexSnapEnabled = isEnabled;
  }
  return;
}


/* Void SetVertexSnapTargetObjects(IEnumerable`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_SetVertexSnapTargetObjects
               (MoveGizmo *this,IEnumerable_1_UnityEngine_GameObject_ *targetObjects,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._vertexSnapDrag;
  if (pGVar1 == (GizmoObjectVertexSnapDrag3D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar3 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                    (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method,0);
  if ((cVar3 == '\0') &&
     (bVar4 = iRam_? != 0, (pGVar1->fields)._targetObjects = targetObjects, bVar4)) {
    uVar5 = (uint)((ulonglong)&(pGVar1->fields)._targetObjects >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  return;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_SetupSharedLookAndFeel
               (MoveGizmo *this,MethodInfo *method)

{
  lVar1 = 0x100;
  lVar2 = 0x100;
  if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
    lVar2 = 0x128;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x58);
    pGVar3 = (this->fields)._pXSlider;
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
        lVar2 = 0x100;
        if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
          lVar2 = 0x128;
        }
        lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
        if (lVar2 != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x58);
          pGVar3 = (this->fields)._pYSlider;
          if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
              bVar5 = iRam_? != 0;
              (pGVar3->fields)._sharedLookAndFeel =
                   *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x28);
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
              lVar2 = 0x100;
              if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
                lVar2 = 0x128;
              }
              lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
              if (lVar2 != 0) {
                lVar2 = *(longlong *)(lVar2 + 0x58);
                pGVar3 = (this->fields)._pZSlider;
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
                    lVar2 = 0x100;
                    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
                      lVar2 = 0x128;
                    }
                    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                    if (lVar2 != 0) {
                      pGVar3 = (this->fields)._nXSlider;
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
                          lVar2 = 0x100;
                          if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0)
                          {
                            lVar2 = 0x128;
                          }
                          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                          if (lVar2 != 0) {
                            pGVar3 = (this->fields)._nYSlider;
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
                                lVar2 = 0x100;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (MoveGizmoLookAndFeel3D *)0x0) {
                                  lVar2 = 0x128;
                                }
                                lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                if (lVar2 != 0) {
                                  pGVar3 = (this->fields)._nZSlider;
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
                                      lVar2 = 0x100;
                                      if ((this->fields)._sharedLookAndFeel3D !=
                                          (MoveGizmoLookAndFeel3D *)0x0) {
                                        lVar2 = 0x128;
                                      }
                                      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                      if (lVar2 != 0) {
                                        lVar2 = *(longlong *)(lVar2 + 0x60);
                                        pGVar10 = (this->fields)._xySlider;
                                        if (lVar2 != 0) {
                                          if (*(int *)(lVar2 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar10->fields)._sharedLookAndFeel =
                                                 *(GizmoPlaneSlider3DLookAndFeel **)(lVar2 + 0x20);
                                            if (iVar9 != 0) {
                                              uVar6 = (uint)((ulonglong)
                                                              &(pGVar10->fields)._sharedLookAndFeel
                                                             >> 0xc);
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
                                            lVar2 = 0x100;
                                            if ((this->fields)._sharedLookAndFeel3D !=
                                                (MoveGizmoLookAndFeel3D *)0x0) {
                                              lVar2 = 0x128;
                                            }
                                            lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                            if (lVar2 != 0) {
                                              lVar2 = *(longlong *)(lVar2 + 0x60);
                                              pGVar10 = (this->fields)._yzSlider;
                                              if (lVar2 != 0) {
                                                if (*(uint *)(lVar2 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar10->fields)._sharedLookAndFeel =
                                                       *(GizmoPlaneSlider3DLookAndFeel **)
                                                        (lVar2 + 0x28);
                                                  iVar11 = 0;
                                                  if (iVar9 != 0) {
                                                    uVar6 = (uint)((ulonglong)
                                                                    &(pGVar10->fields).
                                                                     _sharedLookAndFeel >> 0xc);
                                                    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                                                      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                                                      LOCK();
                                                      bVar5 = uVar7 == *puVar8;
                                                      if (bVar5) {
                                                        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                      iVar11 = iRam_?;
                                                    } while (!bVar5);
                                                  }
                                                  lVar2 = 0x100;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (MoveGizmoLookAndFeel3D *)0x0) {
                                                    lVar2 = 0x128;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    lVar2 = *(longlong *)(lVar2 + 0x60);
                                                    pGVar10 = (this->fields)._zxSlider;
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar10->fields)._sharedLookAndFeel =
                                                             *(GizmoPlaneSlider3DLookAndFeel **)
                                                              (lVar2 + 0x30);
                                                        iVar9 = 0;
                                                        if (iVar11 != 0) {
                                                          uVar6 = (uint)((ulonglong)
                                                                          &(pGVar10->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
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
                                                              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar9 = iRam_?;
                                                          } while (!bVar5);
                                                        }
                                                        lVar2 = 0x100;
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (MoveGizmoLookAndFeel3D *)0x0) {
                                                          lVar2 = 0x128;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if ((lVar2 != 0) &&
                                                           (pGVar12 = (this->fields)._midCap,
                                                           pGVar12 != (GizmoCap3D *)0x0)) {
                                                          (pGVar12->fields)._sharedLookAndFeel =
                                                               *(GizmoCap3DLookAndFeel **)
                                                                (lVar2 + 0x30);
                                                          iVar11 = 0;
                                                          if (iVar9 != 0) {
                                                            uVar6 = (uint)((ulonglong)
                                                                            &(pGVar12->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
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
                                                                *puVar8 = uVar7 | 1L << (uVar6 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar11 = iRam_?;
                                                  } while (!bVar5);
                                                  }
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (MoveGizmoLookAndFeel3D *)0x0) {
                                                    lVar1 = 0x128;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar1);
                                                  if ((lVar2 != 0) &&
                                                     (pGVar13 = (this->fields)._vertSnapCap,
                                                     pGVar13 != (GizmoCap2D *)0x0)) {
                                                    (pGVar13->fields)._sharedLookAndFeel =
                                                         *(GizmoCap2DLookAndFeel **)(lVar2 + 0x38);
                                                    iVar9 = 0;
                                                    if (iVar11 != 0) {
                                                      uVar6 = (uint)((ulonglong)
                                                                      &(pGVar13->fields).
                                                                       _sharedLookAndFeel >> 0xc);
                                                      lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar7 = *(ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        puVar8 = (ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar5 = uVar7 == *puVar8;
                                                        if (bVar5) {
                                                          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar9 = iRam_?;
                                                      } while (!bVar5);
                                                    }
                                                    lVar1 = 0xf8;
                                                    lVar2 = 0xf8;
                                                    if ((this->fields)._sharedLookAndFeel2D !=
                                                        (MoveGizmoLookAndFeel2D *)0x0) {
                                                      lVar2 = 0x120;
                                                    }
                                                    lVar2 = *(longlong *)
                                                              ((longlong)&this->klass + lVar2);
                                                    if (lVar2 != 0) {
                                                      lVar2 = *(longlong *)(lVar2 + 0x30);
                                                      pGVar14 = (this->fields)._p2DModeXSlider;
                                                      if (lVar2 != 0) {
                                                        if (*(int *)(lVar2 + 0x18) == 0)
                                                        goto code_?;
                                                        if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                          (pGVar14->fields)._sharedLookAndFeel =
                                                               *(GizmoLineSlider2DLookAndFeel **)
                                                                (lVar2 + 0x20);
                                                          if (iVar9 != 0) {
                                                            uVar6 = (uint)((ulonglong)
                                                                            &(pGVar14->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
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
                                                                *puVar8 = uVar7 | 1L << (uVar6 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar5);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar14,(MethodInfo *)0x0);
                                                  lVar2 = 0xf8;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (MoveGizmoLookAndFeel2D *)0x0) {
                                                    lVar2 = 0x120;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    lVar2 = *(longlong *)(lVar2 + 0x30);
                                                    pGVar14 = (this->fields)._p2DModeYSlider;
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                        bVar5 = iRam_? != 0;
                                                        (pGVar14->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar2 + 0x28);
                                                        if (bVar5) {
                                                          uVar6 = (uint)((ulonglong)
                                                                          &(pGVar14->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
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
                                                              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar5);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar14,(MethodInfo *)0x0);
                                                        lVar2 = 0xf8;
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (MoveGizmoLookAndFeel2D *)0x0) {
                                                          lVar2 = 0x120;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if (lVar2 != 0) {
                                                          pGVar14 = (this->fields)._n2DModeXSlider;
                                                          lVar2 = *(longlong *)(lVar2 + 0x30);
                                                          if (lVar2 != 0) {
                                                            if (*(uint *)(lVar2 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar14 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              bVar5 = iRam_? != 0;
                                                              (pGVar14->fields)._sharedLookAndFeel =
                                                                   *(GizmoLineSlider2DLookAndFeel **
                                                                    )(lVar2 + 0x30);
                                                              if (bVar5) {
                                                                uVar6 = (uint)((ulonglong)
                                                                                &(pGVar14->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar2 = (ulonglong)
                                                                         ((uVar6 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar7 = *(ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  puVar8 = (ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  LOCK();
                                                                  bVar5 = uVar7 == *puVar8;
                                                                  if (bVar5) {
                                                                    *puVar8 = uVar7 | 1L << (uVar6 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar5);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar14,(MethodInfo *)0x0);
                                                  lVar2 = 0xf8;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (MoveGizmoLookAndFeel2D *)0x0) {
                                                    lVar2 = 0x120;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    pGVar14 = (this->fields)._n2DModeYSlider;
                                                    lVar2 = *(longlong *)(lVar2 + 0x30);
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                        bVar5 = iRam_? != 0;
                                                        (pGVar14->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar2 + 0x38);
                                                        if (bVar5) {
                                                          uVar6 = (uint)((ulonglong)
                                                                          &(pGVar14->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
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
                                                              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar5);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar14,(MethodInfo *)0x0);
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (MoveGizmoLookAndFeel2D *)0x0) {
                                                          lVar1 = 0x120;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar1);
                                                        if ((lVar2 != 0) &&
                                                           (pGVar15 = (this->fields)._2DModeDblSlider
                                                           , pGVar15 != (GizmoPlaneSlider2D *)0x0)) {
                                                          bVar5 = iRam_? != 0;
                                                          (pGVar15->fields)._sharedLookAndFeel =
                                                               *(GizmoPlaneSlider2DLookAndFeel **)
                                                                (lVar2 + 0x28);
                                                          if (bVar5) {
                                                            uVar6 = (uint)((ulonglong)
                                                                            &(pGVar15->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
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

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_SetupSharedSettings
               (MoveGizmo *this,MethodInfo *method)

{
  lVar1 = 0xf0;
  lVar2 = 0xf0;
  if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
    lVar2 = 0x118;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
    pGVar3 = (this->fields)._pXSlider;
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
        lVar2 = 0xf0;
        if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
          lVar2 = 0x118;
        }
        lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
        if (lVar2 != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          pGVar3 = (this->fields)._pYSlider;
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
              lVar2 = 0xf0;
              if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
                lVar2 = 0x118;
              }
              lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
              if (lVar2 != 0) {
                lVar2 = *(longlong *)(lVar2 + 0x30);
                pGVar3 = (this->fields)._pZSlider;
                if (lVar2 != 0) {
                  if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
                  if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                    (pGVar3->fields)._sharedSettings =
                         *(GizmoLineSlider3DSettings **)(lVar2 + 0x30);
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
                    lVar2 = 0xf0;
                    if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
                      lVar2 = 0x118;
                    }
                    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                    if (lVar2 != 0) {
                      pGVar3 = (this->fields)._nXSlider;
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
                          lVar2 = 0xf0;
                          if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
                            lVar2 = 0x118;
                          }
                          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                          if (lVar2 != 0) {
                            pGVar3 = (this->fields)._nYSlider;
                            lVar2 = *(longlong *)(lVar2 + 0x30);
                            if (lVar2 != 0) {
                              if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                              if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                (pGVar3->fields)._sharedSettings =
                                     *(GizmoLineSlider3DSettings **)(lVar2 + 0x40);
                                iVar10 = 0;
                                if (iVar9 != 0) {
                                  uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >>
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
                                lVar2 = 0xf0;
                                if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0)
                                {
                                  lVar2 = 0x118;
                                }
                                lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                if (lVar2 != 0) {
                                  pGVar3 = (this->fields)._nZSlider;
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
                                      lVar2 = 0xf0;
                                      if ((this->fields)._sharedSettings3D !=
                                          (MoveGizmoSettings3D *)0x0) {
                                        lVar2 = 0x118;
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
                                            lVar2 = 0xf0;
                                            if ((this->fields)._sharedSettings3D !=
                                                (MoveGizmoSettings3D *)0x0) {
                                              lVar2 = 0x118;
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
                                                                    &(pGVar11->fields).
                                                                     _sharedSettings >> 0xc);
                                                    lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) *
                                                             8;
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
                                                  lVar2 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar2 = 0x118;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
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
                                                        iVar10 = 0;
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
                                                              *puVar7 = uVar6 | 1L << (uVar5 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar8);
                                                        }
                                                        lVar12 = 0xe8;
                                                        lVar2 = 0xe8;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (MoveGizmoSettings2D *)0x0) {
                                                          lVar2 = 0x110;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if (lVar2 != 0) {
                                                          lVar2 = *(longlong *)(lVar2 + 0x30);
                                                          pGVar13 = (this->fields)._p2DModeXSlider;
                                                          if (lVar2 != 0) {
                                                            if (*(int *)(lVar2 + 0x18) == 0)
                                                            goto code_?;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   *(GizmoLineSlider2DSettings **)
                                                                    (lVar2 + 0x20);
                                                              iVar9 = 0;
                                                              if (iVar10 != 0) {
                                                                uVar5 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar2 = (ulonglong)
                                                                         ((uVar5 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar6 = *(ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  puVar7 = (ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  LOCK();
                                                                  bVar8 = uVar6 == *puVar7;
                                                                  if (bVar8) {
                                                                    *puVar7 = uVar6 | 1L << (uVar5 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar9 = iRam_?;
                                                  } while (!bVar8);
                                                  }
                                                  lVar2 = 0xe8;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar2 = 0x110;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    lVar2 = *(longlong *)(lVar2 + 0x30);
                                                    pGVar13 = (this->fields)._p2DModeYSlider;
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar2 + 0x28);
                                                        iVar10 = 0;
                                                        if (iVar9 != 0) {
                                                          uVar5 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
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
                                                              *puVar7 = uVar6 | 1L << (uVar5 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar8);
                                                        }
                                                        lVar2 = 0xe8;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (MoveGizmoSettings2D *)0x0) {
                                                          lVar2 = 0x110;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if (lVar2 != 0) {
                                                          pGVar13 = (this->fields)._n2DModeXSlider;
                                                          lVar2 = *(longlong *)(lVar2 + 0x30);
                                                          if (lVar2 != 0) {
                                                            if (*(uint *)(lVar2 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   *(GizmoLineSlider2DSettings **)
                                                                    (lVar2 + 0x30);
                                                              iVar9 = 0;
                                                              if (iVar10 != 0) {
                                                                uVar5 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar2 = (ulonglong)
                                                                         ((uVar5 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar6 = *(ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  puVar7 = (ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  LOCK();
                                                                  bVar8 = uVar6 == *puVar7;
                                                                  if (bVar8) {
                                                                    *puVar7 = uVar6 | 1L << (uVar5 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar9 = iRam_?;
                                                  } while (!bVar8);
                                                  }
                                                  lVar2 = 0xe8;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar2 = 0x110;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    pGVar13 = (this->fields)._n2DModeYSlider;
                                                    lVar2 = *(longlong *)(lVar2 + 0x30);
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar2 + 0x38);
                                                        iVar10 = 0;
                                                        if (iVar9 != 0) {
                                                          uVar5 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
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
                                                              *puVar7 = uVar6 | 1L << (uVar5 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar8);
                                                        }
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (MoveGizmoSettings2D *)0x0) {
                                                          lVar12 = 0x110;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar12);
                                                        if ((lVar2 != 0) &&
                                                           (pGVar14 = (this->fields)._2DModeDblSlider
                                                           , pGVar14 != (GizmoPlaneSlider2D *)0x0)) {
                                                          (pGVar14->fields)._sharedSettings =
                                                               *(GizmoPlaneSlider2DSettings **)
                                                                (lVar2 + 0x28);
                                                          iVar9 = 0;
                                                          if (iVar10 != 0) {
                                                            uVar5 = (uint)((ulonglong)
                                                                            &(pGVar14->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
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
                                                                *puVar7 = uVar6 | 1L << (uVar5 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar9 = iRam_?;
                                                  } while (!bVar8);
                                                  }
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar1 = 0x118;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar1);
                                                  if ((lVar2 != 0) &&
                                                     (pGVar15 = (this->fields)._vertexSnapDrag,
                                                     pGVar15 != (GizmoObjectVertexSnapDrag3D *)0x0))
                                                  {
                                                    pGVar16 = *(GizmoObjectVertexSnapSettings **)
                                                              (lVar2 + 0x28);
                                                    if ((pGVar16 != (GizmoObjectVertexSnapSettings *)
                                                                   0x0) &&
                                                       ((pGVar15->fields)._settings = pGVar16,
                                                       iVar9 != 0)) {
                                                      uVar5 = (uint)((ulonglong)
                                                                      &(pGVar15->fields)._settings >>
                                                                     0xc);
                                                      lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar6 = *(ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        puVar7 = (ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar8 = uVar6 == *puVar7;
                                                        if (bVar8) {
                                                          *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
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


/* Void Update2DModeHandlePositions() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_Update2DModeHandlePositions
               (MoveGizmo *this,MethodInfo *method)

{
  lVar1 = 0xf8;
  if ((this->fields)._sharedLookAndFeel2D != (MoveGizmoLookAndFeel2D *)0x0) {
    lVar1 = 0x120;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x38) == '\0') {
      pGVar2 = (this->fields)._._gizmo;
      if ((pGVar2 != (Gizmo *)0x0) &&
         (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
        pGVar4 = (this->fields)._p2DModeXSlider;
        fVar5 = (pGVar3->fields)._position2D.y;
        if (pGVar4 != (GizmoLineSlider2D *)0x0) {
          fVar6 = (pGVar3->fields)._position2D.x;
          value.y = fVar5;
          value.x = fVar6;
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar4,value,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._p2DModeYSlider;
          if (pGVar4 != (GizmoLineSlider2D *)0x0) {
            value_00.y = fVar5;
            value_00.x = fVar6;
            GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                      (pGVar4,value_00,(MethodInfo *)0x0);
            pGVar4 = (this->fields)._n2DModeXSlider;
            if (pGVar4 != (GizmoLineSlider2D *)0x0) {
              value_01.y = fVar5;
              value_01.x = fVar6;
              GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                        (pGVar4,value_01,(MethodInfo *)0x0);
              pGVar4 = (this->fields)._n2DModeYSlider;
              if (pGVar4 != (GizmoLineSlider2D *)0x0) {
                VVar7.y = fVar5;
                VVar7.x = fVar6;
code_?:
                pGVar3 = (pGVar4->fields)._transform;
                if (pGVar3 == (GizmoTransform *)0x0) {
                  FUN_?(0,VVar7,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if ((pGVar3->fields)._firingChanged2DEvent == 0) {
                  fVar5 = (pGVar3->fields)._position2D.x - VVar7.x;
                  fVar6 = (pGVar3->fields)._position2D.y - VVar7.y;
                  if (_UNK_? <= fVar6 * fVar6 + fVar5 * fVar5) {
                    (pGVar3->fields)._position2D.x = VVar7.x;
                    (pGVar3->fields)._position2D.y = VVar7.y;
                    if ((pGVar3->fields)._parent == (GizmoTransform *)0x0) {
                      fVar5 = (pGVar3->fields)._position2D.x;
                      fVar6 = (pGVar3->fields)._position2D.y;
                    }
                    else {
                      pGVar9 = (pGVar3->fields)._parent;
                      fStack_10 = (pGVar9->fields)._rotation2D.x;
                      fStack_11 = (pGVar9->fields)._rotation2D.y;
                      fStack_12 = (pGVar9->fields)._rotation2D.z;
                      fStack_13 = (pGVar9->fields)._rotation2D.w;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                        uVar14 = func_?(&UNK_?);
                        FUN_?(uVar14,0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pcRam_? = pcVar8;
                      (*pcRam_?)(&fStack_10);
                      pGVar9 = (pGVar3->fields)._parent;
                      if (pGVar9 == (GizmoTransform *)0x0) {
                        FUN_?();
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      fVar6 = (pGVar3->fields)._position2D.x - (pGVar9->fields)._position2D.x;
                      fVar15 = (pGVar3->fields)._position2D.y - (pGVar9->fields)._position2D.y;
                      uStack_16 = (undefined *)CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc);
                      fVar5 = (_UNK_? - 0.0) * fVar6 + fVar15 * 0.0 + 0.0;
                      fVar6 = (_UNK_? - 0.0) * fVar15 + fVar6 * 0.0 + 0.0;
                    }
                    (pGVar3->fields)._localPosition2D.x = fVar5;
                    (pGVar3->fields)._localPosition2D.y = fVar6;
                    GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar3,(MethodInfo *)0x0)
                    ;
                    pGVar17 = (pGVar3->fields).Changed;
                    (pGVar3->fields)._firingChanged2DEvent = 1;
                    if (pGVar17 != (GizmoEntityTransformChangedHandler *)0x0) {
                      (*(pGVar17->fields)._._.invoke_impl)
                                ((pGVar17->fields)._._.method_code,pGVar3,0x100000000,
                                 (pGVar17->fields)._._.method);
                    }
                    (pGVar3->fields)._firingChanged2DEvent = 0;
                    return;
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
    else {
      pGVar18 = (this->fields)._2DModeDblSlider;
      pGVar4 = (this->fields)._p2DModeXSlider;
      if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
        VVar7 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                          (pGVar18,Shape2DExtentPoint__Enum_Right,(MethodInfo *)0x0);
        if (pGVar4 != (GizmoLineSlider2D *)0x0) {
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar4,VVar7,(MethodInfo *)0x0);
          pGVar18 = (this->fields)._2DModeDblSlider;
          pGVar4 = (this->fields)._p2DModeYSlider;
          if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
            VVar7 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                              (pGVar18,Shape2DExtentPoint__Enum_Top,(MethodInfo *)0x0);
            if (pGVar4 != (GizmoLineSlider2D *)0x0) {
              GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                        (pGVar4,VVar7,(MethodInfo *)0x0);
              pGVar18 = (this->fields)._2DModeDblSlider;
              pGVar4 = (this->fields)._n2DModeXSlider;
              if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
                VVar7 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                                  (pGVar18,Shape2DExtentPoint__Enum_Left,(MethodInfo *)0x0);
                if (pGVar4 != (GizmoLineSlider2D *)0x0) {
                  GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                            (pGVar4,VVar7,(MethodInfo *)0x0);
                  pGVar18 = (this->fields)._2DModeDblSlider;
                  pGVar4 = (this->fields)._n2DModeYSlider;
                  if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
                    VVar7 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                                      (pGVar18,Shape2DExtentPoint__Enum_Bottom,(MethodInfo *)0x0);
                    if (pGVar4 != (GizmoLineSlider2D *)0x0) goto code_?;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MoveGizmo() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo__ctor(MoveGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoObjectVertexSnapDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmoHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmoLookAndFeel2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmoLookAndFeel3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmoSettings2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmoSettings3D);
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
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
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
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_02 = (GizmoObjectVertexSnapDrag3D *)FUN_?(TypeInfo__RTG__GizmoObjectVertexSnapDrag3D)
  ;
  GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D__ctor(this_02,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._vertexSnapDrag = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._vertexSnapDrag >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_03 = (GizmoLineSlider2DCollection *)FUN_?(TypeInfo__RTG__GizmoLineSlider2DCollection)
  ;
  GizmoLineSlider2DCollection::GizmoLineSlider2DCollection__ctor(this_03,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._2DModeSliders = this_03;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._2DModeSliders >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._useSnapEnableHotkey = 1;
  (this->fields)._useVertSnapEnableHotkey = 1;
  (this->fields)._use2DModeEnableHotkey = 1;
  this_04 = (MoveGizmoHotkeys *)FUN_?(TypeInfo__RTG__MoveGizmoHotkeys);
  MoveGizmoHotkeys::MoveGizmoHotkeys__ctor(this_04,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._hotkeys = this_04;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._hotkeys >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_05 = (MoveGizmoSettings2D *)FUN_?(TypeInfo__RTG__MoveGizmoSettings2D);
  MoveGizmoSettings2D::MoveGizmoSettings2D__ctor(this_05,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._settings2D = this_05;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._settings2D >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_06 = (MoveGizmoSettings3D *)FUN_?(TypeInfo__RTG__MoveGizmoSettings3D);
  MoveGizmoSettings3D::MoveGizmoSettings3D__ctor(this_06,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._settings3D = this_06;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._settings3D >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_07 = (MoveGizmoLookAndFeel2D *)FUN_?(TypeInfo__RTG__MoveGizmoLookAndFeel2D);
  MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D__ctor(this_07,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._lookAndFeel2D = this_07;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._lookAndFeel2D >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_08 = (MoveGizmoLookAndFeel3D *)FUN_?(TypeInfo__RTG__MoveGizmoLookAndFeel3D);
  MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D__ctor(this_08,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._lookAndFeel3D = this_08;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._lookAndFeel3D >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._._isEnabled = 1;
  return;
}


/* MoveGizmoHotkeys get_Hotkeys() */

MoveGizmoHotkeys *
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_Hotkeys(MoveGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedHotkeys == (MoveGizmoHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return (this->fields)._sharedHotkeys;
}


/* MoveGizmoLookAndFeel2D get_LookAndFeel2D() */

MoveGizmoLookAndFeel2D *
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_LookAndFeel2D(MoveGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel2D == (MoveGizmoLookAndFeel2D *)0x0) {
    return (this->fields)._lookAndFeel2D;
  }
  return (this->fields)._sharedLookAndFeel2D;
}


/* MoveGizmoLookAndFeel3D get_LookAndFeel3D() */

MoveGizmoLookAndFeel3D *
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_LookAndFeel3D(MoveGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
    return (this->fields)._lookAndFeel3D;
  }
  return (this->fields)._sharedLookAndFeel3D;
}


/* MoveGizmoSettings2D get_Settings2D() */

MoveGizmoSettings2D *
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_Settings2D(MoveGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings2D == (MoveGizmoSettings2D *)0x0) {
    return (this->fields)._settings2D;
  }
  return (this->fields)._sharedSettings2D;
}


/* MoveGizmoSettings3D get_Settings3D() */

MoveGizmoSettings3D *
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_Settings3D(MoveGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    return (this->fields)._settings3D;
  }
  return (this->fields)._sharedSettings3D;
}


/* Boolean get_Use2DModeEnableHotkey() */

bool Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_Use2DModeEnableHotkey
               (MoveGizmo *this,MethodInfo *method)

{
  return (this->fields)._use2DModeEnableHotkey;
}


/* Boolean get_UseVertSnapEnableHotkey() */

bool Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_UseVertSnapEnableHotkey
               (MoveGizmo *this,MethodInfo *method)

{
  return (this->fields)._useVertSnapEnableHotkey;
}


/* Void set_SharedLookAndFeel2D(MoveGizmoLookAndFeel2D) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_SharedLookAndFeel2D
               (MoveGizmo *this,MoveGizmoLookAndFeel2D *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._sharedLookAndFeel2D = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sharedLookAndFeel2D >> 0xc);
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
  lVar6 = 0x100;
  lVar7 = 0x100;
  if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
    lVar7 = 0x128;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x58);
    pGVar8 = (this->fields)._pXSlider;
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
        lVar7 = 0x100;
        if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
          lVar7 = 0x128;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x58);
          pGVar8 = (this->fields)._pYSlider;
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto code_?;
            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
              bVar1 = iRam_? != 0;
              (pGVar8->fields)._sharedLookAndFeel =
                   *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x28);
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
              lVar7 = 0x100;
              if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
                lVar7 = 0x128;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x58);
                pGVar8 = (this->fields)._pZSlider;
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
                    lVar7 = 0x100;
                    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
                      lVar7 = 0x128;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if (lVar7 != 0) {
                      pGVar8 = (this->fields)._nXSlider;
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
                          lVar7 = 0x100;
                          if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0)
                          {
                            lVar7 = 0x128;
                          }
                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                          if (lVar7 != 0) {
                            pGVar8 = (this->fields)._nYSlider;
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
                                lVar7 = 0x100;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (MoveGizmoLookAndFeel3D *)0x0) {
                                  lVar7 = 0x128;
                                }
                                lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                if (lVar7 != 0) {
                                  pGVar8 = (this->fields)._nZSlider;
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
                                      lVar7 = 0x100;
                                      if ((this->fields)._sharedLookAndFeel3D !=
                                          (MoveGizmoLookAndFeel3D *)0x0) {
                                        lVar7 = 0x128;
                                      }
                                      lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                      if (lVar7 != 0) {
                                        lVar7 = *(longlong *)(lVar7 + 0x60);
                                        pGVar11 = (this->fields)._xySlider;
                                        if (lVar7 != 0) {
                                          if (*(int *)(lVar7 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar11->fields)._sharedLookAndFeel =
                                                 *(GizmoPlaneSlider3DLookAndFeel **)(lVar7 + 0x20);
                                            if (iVar10 != 0) {
                                              uVar2 = (uint)((ulonglong)
                                                              &(pGVar11->fields)._sharedLookAndFeel
                                                             >> 0xc);
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
                                            lVar7 = 0x100;
                                            if ((this->fields)._sharedLookAndFeel3D !=
                                                (MoveGizmoLookAndFeel3D *)0x0) {
                                              lVar7 = 0x128;
                                            }
                                            lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                            if (lVar7 != 0) {
                                              lVar7 = *(longlong *)(lVar7 + 0x60);
                                              pGVar11 = (this->fields)._yzSlider;
                                              if (lVar7 != 0) {
                                                if (*(uint *)(lVar7 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar11->fields)._sharedLookAndFeel =
                                                       *(GizmoPlaneSlider3DLookAndFeel **)
                                                        (lVar7 + 0x28);
                                                  iVar12 = 0;
                                                  if (iVar10 != 0) {
                                                    uVar2 = (uint)((ulonglong)
                                                                    &(pGVar11->fields).
                                                                     _sharedLookAndFeel >> 0xc);
                                                    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                                      LOCK();
                                                      bVar1 = uVar5 == *puVar3;
                                                      if (bVar1) {
                                                        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                      iVar12 = iRam_?;
                                                    } while (!bVar1);
                                                  }
                                                  lVar7 = 0x100;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (MoveGizmoLookAndFeel3D *)0x0) {
                                                    lVar7 = 0x128;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x60);
                                                    pGVar11 = (this->fields)._zxSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedLookAndFeel =
                                                             *(GizmoPlaneSlider3DLookAndFeel **)
                                                              (lVar7 + 0x30);
                                                        iVar10 = 0;
                                                        if (iVar12 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
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
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar1);
                                                        }
                                                        lVar7 = 0x100;
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (MoveGizmoLookAndFeel3D *)0x0) {
                                                          lVar7 = 0x128;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar13 = (this->fields)._midCap,
                                                           pGVar13 != (GizmoCap3D *)0x0)) {
                                                          (pGVar13->fields)._sharedLookAndFeel =
                                                               *(GizmoCap3DLookAndFeel **)
                                                                (lVar7 + 0x30);
                                                          iVar12 = 0;
                                                          if (iVar10 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar13->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
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
                                                                *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar12 = iRam_?;
                                                  } while (!bVar1);
                                                  }
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (MoveGizmoLookAndFeel3D *)0x0) {
                                                    lVar6 = 0x128;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar6);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar14 = (this->fields)._vertSnapCap,
                                                     pGVar14 != (GizmoCap2D *)0x0)) {
                                                    (pGVar14->fields)._sharedLookAndFeel =
                                                         *(GizmoCap2DLookAndFeel **)(lVar7 + 0x38);
                                                    iVar10 = 0;
                                                    if (iVar12 != 0) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar14->fields).
                                                                       _sharedLookAndFeel >> 0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        puVar3 = (ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar1 = uVar5 == *puVar3;
                                                        if (bVar1) {
                                                          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar10 = iRam_?;
                                                      } while (!bVar1);
                                                    }
                                                    lVar6 = 0xf8;
                                                    lVar7 = 0xf8;
                                                    if ((this->fields)._sharedLookAndFeel2D !=
                                                        (MoveGizmoLookAndFeel2D *)0x0) {
                                                      lVar7 = 0x120;
                                                    }
                                                    lVar7 = *(longlong *)
                                                              ((longlong)&this->klass + lVar7);
                                                    if (lVar7 != 0) {
                                                      lVar7 = *(longlong *)(lVar7 + 0x30);
                                                      pGVar15 = (this->fields)._p2DModeXSlider;
                                                      if (lVar7 != 0) {
                                                        if (*(int *)(lVar7 + 0x18) == 0)
                                                        goto code_?;
                                                        if (pGVar15 != (GizmoLineSlider2D *)0x0) {
                                                          (pGVar15->fields)._sharedLookAndFeel =
                                                               *(GizmoLineSlider2DLookAndFeel **)
                                                                (lVar7 + 0x20);
                                                          if (iVar10 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar15->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
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
                                                                *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar15,(MethodInfo *)0x0);
                                                  lVar7 = 0xf8;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (MoveGizmoLookAndFeel2D *)0x0) {
                                                    lVar7 = 0x120;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x30);
                                                    pGVar15 = (this->fields)._p2DModeYSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar15 != (GizmoLineSlider2D *)0x0) {
                                                        bVar1 = iRam_? != 0;
                                                        (pGVar15->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar7 + 0x28);
                                                        if (bVar1) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar15->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
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
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar15,(MethodInfo *)0x0);
                                                        lVar7 = 0xf8;
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (MoveGizmoLookAndFeel2D *)0x0) {
                                                          lVar7 = 0x120;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          pGVar15 = (this->fields)._n2DModeXSlider;
                                                          lVar7 = *(longlong *)(lVar7 + 0x30);
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar15 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              bVar1 = iRam_? != 0;
                                                              (pGVar15->fields)._sharedLookAndFeel =
                                                                   *(GizmoLineSlider2DLookAndFeel **
                                                                    )(lVar7 + 0x30);
                                                              if (bVar1) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar15->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  puVar3 = (ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *puVar3;
                                                                  if (bVar1) {
                                                                    *puVar3 = uVar5 | 1L << (uVar2 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar15,(MethodInfo *)0x0);
                                                  lVar7 = 0xf8;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (MoveGizmoLookAndFeel2D *)0x0) {
                                                    lVar7 = 0x120;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    pGVar15 = (this->fields)._n2DModeYSlider;
                                                    lVar7 = *(longlong *)(lVar7 + 0x30);
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar15 != (GizmoLineSlider2D *)0x0) {
                                                        bVar1 = iRam_? != 0;
                                                        (pGVar15->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar7 + 0x38);
                                                        if (bVar1) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar15->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
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
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar15,(MethodInfo *)0x0);
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (MoveGizmoLookAndFeel2D *)0x0) {
                                                          lVar6 = 0x120;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar6);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar16 = (this->fields)._2DModeDblSlider
                                                           , pGVar16 != (GizmoPlaneSlider2D *)0x0)) {
                                                          bVar1 = iRam_? != 0;
                                                          (pGVar16->fields)._sharedLookAndFeel =
                                                               *(GizmoPlaneSlider2DLookAndFeel **)
                                                                (lVar7 + 0x28);
                                                          if (bVar1) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar16->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
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


/* Void set_SharedLookAndFeel3D(MoveGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_SharedLookAndFeel3D
               (MoveGizmo *this,MoveGizmoLookAndFeel3D *value,MethodInfo *method)

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
  lVar6 = 0x100;
  lVar7 = 0x100;
  if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
    lVar7 = 0x128;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x58);
    pGVar8 = (this->fields)._pXSlider;
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
        lVar7 = 0x100;
        if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
          lVar7 = 0x128;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x58);
          pGVar8 = (this->fields)._pYSlider;
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto code_?;
            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
              bVar1 = iRam_? != 0;
              (pGVar8->fields)._sharedLookAndFeel =
                   *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x28);
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
              lVar7 = 0x100;
              if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
                lVar7 = 0x128;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x58);
                pGVar8 = (this->fields)._pZSlider;
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
                    lVar7 = 0x100;
                    if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0) {
                      lVar7 = 0x128;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if (lVar7 != 0) {
                      pGVar8 = (this->fields)._nXSlider;
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
                          lVar7 = 0x100;
                          if ((this->fields)._sharedLookAndFeel3D != (MoveGizmoLookAndFeel3D *)0x0)
                          {
                            lVar7 = 0x128;
                          }
                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                          if (lVar7 != 0) {
                            pGVar8 = (this->fields)._nYSlider;
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
                                lVar7 = 0x100;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (MoveGizmoLookAndFeel3D *)0x0) {
                                  lVar7 = 0x128;
                                }
                                lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                if (lVar7 != 0) {
                                  pGVar8 = (this->fields)._nZSlider;
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
                                      lVar7 = 0x100;
                                      if ((this->fields)._sharedLookAndFeel3D !=
                                          (MoveGizmoLookAndFeel3D *)0x0) {
                                        lVar7 = 0x128;
                                      }
                                      lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                      if (lVar7 != 0) {
                                        lVar7 = *(longlong *)(lVar7 + 0x60);
                                        pGVar11 = (this->fields)._xySlider;
                                        if (lVar7 != 0) {
                                          if (*(int *)(lVar7 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar11->fields)._sharedLookAndFeel =
                                                 *(GizmoPlaneSlider3DLookAndFeel **)(lVar7 + 0x20);
                                            if (iVar10 != 0) {
                                              uVar2 = (uint)((ulonglong)
                                                              &(pGVar11->fields)._sharedLookAndFeel
                                                             >> 0xc);
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
                                            lVar7 = 0x100;
                                            if ((this->fields)._sharedLookAndFeel3D !=
                                                (MoveGizmoLookAndFeel3D *)0x0) {
                                              lVar7 = 0x128;
                                            }
                                            lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                            if (lVar7 != 0) {
                                              lVar7 = *(longlong *)(lVar7 + 0x60);
                                              pGVar11 = (this->fields)._yzSlider;
                                              if (lVar7 != 0) {
                                                if (*(uint *)(lVar7 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar11->fields)._sharedLookAndFeel =
                                                       *(GizmoPlaneSlider3DLookAndFeel **)
                                                        (lVar7 + 0x28);
                                                  iVar12 = 0;
                                                  if (iVar10 != 0) {
                                                    uVar2 = (uint)((ulonglong)
                                                                    &(pGVar11->fields).
                                                                     _sharedLookAndFeel >> 0xc);
                                                    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                                      LOCK();
                                                      bVar1 = uVar5 == *puVar3;
                                                      if (bVar1) {
                                                        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                      iVar12 = iRam_?;
                                                    } while (!bVar1);
                                                  }
                                                  lVar7 = 0x100;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (MoveGizmoLookAndFeel3D *)0x0) {
                                                    lVar7 = 0x128;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x60);
                                                    pGVar11 = (this->fields)._zxSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedLookAndFeel =
                                                             *(GizmoPlaneSlider3DLookAndFeel **)
                                                              (lVar7 + 0x30);
                                                        iVar10 = 0;
                                                        if (iVar12 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
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
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar1);
                                                        }
                                                        lVar7 = 0x100;
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (MoveGizmoLookAndFeel3D *)0x0) {
                                                          lVar7 = 0x128;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar13 = (this->fields)._midCap,
                                                           pGVar13 != (GizmoCap3D *)0x0)) {
                                                          (pGVar13->fields)._sharedLookAndFeel =
                                                               *(GizmoCap3DLookAndFeel **)
                                                                (lVar7 + 0x30);
                                                          iVar12 = 0;
                                                          if (iVar10 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar13->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
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
                                                                *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar12 = iRam_?;
                                                  } while (!bVar1);
                                                  }
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (MoveGizmoLookAndFeel3D *)0x0) {
                                                    lVar6 = 0x128;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar6);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar14 = (this->fields)._vertSnapCap,
                                                     pGVar14 != (GizmoCap2D *)0x0)) {
                                                    (pGVar14->fields)._sharedLookAndFeel =
                                                         *(GizmoCap2DLookAndFeel **)(lVar7 + 0x38);
                                                    iVar10 = 0;
                                                    if (iVar12 != 0) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar14->fields).
                                                                       _sharedLookAndFeel >> 0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        puVar3 = (ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar1 = uVar5 == *puVar3;
                                                        if (bVar1) {
                                                          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar10 = iRam_?;
                                                      } while (!bVar1);
                                                    }
                                                    lVar6 = 0xf8;
                                                    lVar7 = 0xf8;
                                                    if ((this->fields)._sharedLookAndFeel2D !=
                                                        (MoveGizmoLookAndFeel2D *)0x0) {
                                                      lVar7 = 0x120;
                                                    }
                                                    lVar7 = *(longlong *)
                                                              ((longlong)&this->klass + lVar7);
                                                    if (lVar7 != 0) {
                                                      lVar7 = *(longlong *)(lVar7 + 0x30);
                                                      pGVar15 = (this->fields)._p2DModeXSlider;
                                                      if (lVar7 != 0) {
                                                        if (*(int *)(lVar7 + 0x18) == 0)
                                                        goto code_?;
                                                        if (pGVar15 != (GizmoLineSlider2D *)0x0) {
                                                          (pGVar15->fields)._sharedLookAndFeel =
                                                               *(GizmoLineSlider2DLookAndFeel **)
                                                                (lVar7 + 0x20);
                                                          if (iVar10 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar15->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
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
                                                                *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar15,(MethodInfo *)0x0);
                                                  lVar7 = 0xf8;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (MoveGizmoLookAndFeel2D *)0x0) {
                                                    lVar7 = 0x120;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x30);
                                                    pGVar15 = (this->fields)._p2DModeYSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar15 != (GizmoLineSlider2D *)0x0) {
                                                        bVar1 = iRam_? != 0;
                                                        (pGVar15->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar7 + 0x28);
                                                        if (bVar1) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar15->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
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
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar15,(MethodInfo *)0x0);
                                                        lVar7 = 0xf8;
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (MoveGizmoLookAndFeel2D *)0x0) {
                                                          lVar7 = 0x120;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          pGVar15 = (this->fields)._n2DModeXSlider;
                                                          lVar7 = *(longlong *)(lVar7 + 0x30);
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar15 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              bVar1 = iRam_? != 0;
                                                              (pGVar15->fields)._sharedLookAndFeel =
                                                                   *(GizmoLineSlider2DLookAndFeel **
                                                                    )(lVar7 + 0x30);
                                                              if (bVar1) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar15->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  puVar3 = (ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *puVar3;
                                                                  if (bVar1) {
                                                                    *puVar3 = uVar5 | 1L << (uVar2 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar15,(MethodInfo *)0x0);
                                                  lVar7 = 0xf8;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (MoveGizmoLookAndFeel2D *)0x0) {
                                                    lVar7 = 0x120;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    pGVar15 = (this->fields)._n2DModeYSlider;
                                                    lVar7 = *(longlong *)(lVar7 + 0x30);
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar15 != (GizmoLineSlider2D *)0x0) {
                                                        bVar1 = iRam_? != 0;
                                                        (pGVar15->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar7 + 0x38);
                                                        if (bVar1) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar15->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
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
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar15,(MethodInfo *)0x0);
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (MoveGizmoLookAndFeel2D *)0x0) {
                                                          lVar6 = 0x120;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar6);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar16 = (this->fields)._2DModeDblSlider
                                                           , pGVar16 != (GizmoPlaneSlider2D *)0x0)) {
                                                          bVar1 = iRam_? != 0;
                                                          (pGVar16->fields)._sharedLookAndFeel =
                                                               *(GizmoPlaneSlider2DLookAndFeel **)
                                                                (lVar7 + 0x28);
                                                          if (bVar1) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar16->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
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


/* Void set_SharedSettings2D(MoveGizmoSettings2D) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_SharedSettings2D
               (MoveGizmo *this,MoveGizmoSettings2D *value,MethodInfo *method)

{
  bVar1 = uRam_? != 0;
  (this->fields)._sharedSettings2D = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sharedSettings2D >> 0xc);
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
  lVar6 = 0xf0;
  lVar7 = 0xf0;
  if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
    lVar7 = 0x118;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    pGVar8 = (this->fields)._pXSlider;
    if (lVar7 != 0) {
      pMVar9 = this;
      if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
        FUN_?(pMVar9,this,method);
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
        pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
        lVar7 = 0xf0;
        if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
          lVar7 = 0x118;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          pGVar8 = (this->fields)._pYSlider;
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
                pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
              }
              lVar7 = 0xf0;
              if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
                lVar7 = 0x118;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x30);
                pGVar8 = (this->fields)._pZSlider;
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) < 3) goto code_?;
                  method = *(MethodInfo **)(lVar7 + 0x30);
                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                    (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
                    if ((int)pMVar9 != 0) {
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
                      pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
                    }
                    lVar7 = 0xf0;
                    if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
                      lVar7 = 0x118;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if (lVar7 != 0) {
                      pGVar8 = (this->fields)._nXSlider;
                      lVar7 = *(longlong *)(lVar7 + 0x30);
                      if (lVar7 != 0) {
                        if (*(uint *)(lVar7 + 0x18) < 4) goto code_?;
                        method = *(MethodInfo **)(lVar7 + 0x38);
                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                          (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
                          if ((int)pMVar9 != 0) {
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
                            pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
                          }
                          lVar7 = 0xf0;
                          if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
                            lVar7 = 0x118;
                          }
                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                          if (lVar7 != 0) {
                            pGVar8 = (this->fields)._nYSlider;
                            lVar7 = *(longlong *)(lVar7 + 0x30);
                            if (lVar7 != 0) {
                              if (*(uint *)(lVar7 + 0x18) < 5) goto code_?;
                              method = *(MethodInfo **)(lVar7 + 0x40);
                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                (pGVar8->fields)._sharedSettings =
                                     (GizmoLineSlider3DSettings *)method;
                                if ((int)pMVar9 != 0) {
                                  uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >>
                                                 0xc);
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
                                  pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
                                }
                                lVar7 = 0xf0;
                                if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0)
                                {
                                  lVar7 = 0x118;
                                }
                                lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                if (lVar7 != 0) {
                                  pGVar8 = (this->fields)._nZSlider;
                                  lVar7 = *(longlong *)(lVar7 + 0x30);
                                  if (lVar7 != 0) {
                                    if (*(uint *)(lVar7 + 0x18) < 6) goto code_?;
                                    method = *(MethodInfo **)(lVar7 + 0x48);
                                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                      (pGVar8->fields)._sharedSettings =
                                           (GizmoLineSlider3DSettings *)method;
                                      if ((int)pMVar9 != 0) {
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
                                        pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
                                      }
                                      lVar7 = 0xf0;
                                      if ((this->fields)._sharedSettings3D !=
                                          (MoveGizmoSettings3D *)0x0) {
                                        lVar7 = 0x118;
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
                                            if ((int)pMVar9 != 0) {
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
                                              pMVar9 = (MoveGizmo *)(ulonglong)uRam_?
                                              ;
                                            }
                                            lVar7 = 0xf0;
                                            if ((this->fields)._sharedSettings3D !=
                                                (MoveGizmoSettings3D *)0x0) {
                                              lVar7 = 0x118;
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
                                                  if ((int)pMVar9 != 0) {
                                                    uVar2 = (uint)((ulonglong)
                                                                    &(pGVar11->fields).
                                                                     _sharedSettings >> 0xc);
                                                    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) *
                                                             8;
                                                    method = (MethodInfo *)(lVar7 + 0xADDR);
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                      LOCK();
                                                      bVar1 = uVar5 == *(ulonglong *)
                                                                         (lVar7 + 0xADDR);
                                                      if (bVar1) {
                                                        *(ulonglong *)(lVar7 + 0xADDR) =
                                                             uVar5 | 1L << (ulonglong)
                                                                           (uVar2 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar1);
                                                    pMVar9 = (MoveGizmo *)
                                                              (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar7 = 0x118;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    pGVar11 = (this->fields)._zxSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar7 + 0x30);
                                                        if ((int)pMVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pMVar9 = (MoveGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        lVar12 = 0xe8;
                                                        lVar7 = 0xe8;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (MoveGizmoSettings2D *)0x0) {
                                                          lVar7 = 0x110;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          lVar7 = *(longlong *)(lVar7 + 0x30);
                                                          pGVar13 = (this->fields)._p2DModeXSlider;
                                                          if (lVar7 != 0) {
                                                            if (*(int *)(lVar7 + 0x18) == 0)
                                                            goto code_?;
                                                            method = *(MethodInfo **)(lVar7 + 0x20)
                                                            ;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   (GizmoLineSlider2DSettings *)
                                                                   method;
                                                              if ((int)pMVar9 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                method = (MethodInfo *)
                                                                         (lVar7 + 0xADDR);
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *(ulonglong *)
                                                                                     (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pMVar9 = (MoveGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0xe8;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar7 = 0x110;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x30);
                                                    pGVar13 = (this->fields)._p2DModeYSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 2)
                                                      goto code_?;
                                                      method = *(MethodInfo **)(lVar7 + 0x28);
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             (GizmoLineSlider2DSettings *)method;
                                                        if ((int)pMVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pMVar9 = (MoveGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        lVar7 = 0xe8;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (MoveGizmoSettings2D *)0x0) {
                                                          lVar7 = 0x110;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          pGVar13 = (this->fields)._n2DModeXSlider;
                                                          lVar7 = *(longlong *)(lVar7 + 0x30);
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 3)
                                                            goto code_?;
                                                            method = *(MethodInfo **)(lVar7 + 0x30)
                                                            ;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   (GizmoLineSlider2DSettings *)
                                                                   method;
                                                              if ((int)pMVar9 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                method = (MethodInfo *)
                                                                         (lVar7 + 0xADDR);
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *(ulonglong *)
                                                                                     (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pMVar9 = (MoveGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0xe8;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar7 = 0x110;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    pGVar13 = (this->fields)._n2DModeYSlider;
                                                    lVar7 = *(longlong *)(lVar7 + 0x30);
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar7 + 0x38);
                                                        if ((int)pMVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
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
                                                              *puVar3 = uVar5 | 1L << (ulonglong)
                                                                                      (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pMVar9 = (MoveGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (MoveGizmoSettings2D *)0x0) {
                                                          lVar12 = 0x110;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar12);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar14 = (this->fields)._2DModeDblSlider
                                                           , pGVar14 != (GizmoPlaneSlider2D *)0x0)) {
                                                          (pGVar14->fields)._sharedSettings =
                                                               *(GizmoPlaneSlider2DSettings **)
                                                                (lVar7 + 0x28);
                                                          uVar2 = 0;
                                                          if ((int)pMVar9 != 0) {
                                                            uVar15 = (uint)((ulonglong)
                                                                            &(pGVar14->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
                                                            lVar7 = (ulonglong)
                                                                     ((uVar15 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              puVar3 = (ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *puVar3;
                                                              if (bVar1) {
                                                                *puVar3 = uVar5 | 1L << (ulonglong)
                                                                                        (uVar15 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  uVar2 = uRam_?;
                                                  } while (!bVar1);
                                                  }
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar6 = 0x118;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar6);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar16 = (this->fields)._vertexSnapDrag,
                                                     pGVar16 != (GizmoObjectVertexSnapDrag3D *)0x0))
                                                  {
                                                    pGVar17 = *(GizmoObjectVertexSnapSettings **)
                                                              (lVar7 + 0x28);
                                                    if ((pGVar17 != (GizmoObjectVertexSnapSettings *)
                                                                   0x0) &&
                                                       ((pGVar16->fields)._settings = pGVar17,
                                                       uVar2 != 0)) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar16->fields)._settings >>
                                                                     0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        puVar3 = (ulonglong *)(lVar7 + 0xADDR)
                                                        ;
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
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_SharedSettings3D(MoveGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_SharedSettings3D
               (MoveGizmo *this,MoveGizmoSettings3D *value,MethodInfo *method)

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
  lVar6 = 0xf0;
  lVar7 = 0xf0;
  if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
    lVar7 = 0x118;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    pGVar8 = (this->fields)._pXSlider;
    if (lVar7 != 0) {
      pMVar9 = this;
      if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
        FUN_?(pMVar9,this,method);
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
        pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
        lVar7 = 0xf0;
        if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
          lVar7 = 0x118;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          pGVar8 = (this->fields)._pYSlider;
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
                pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
              }
              lVar7 = 0xf0;
              if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
                lVar7 = 0x118;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x30);
                pGVar8 = (this->fields)._pZSlider;
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) < 3) goto code_?;
                  method = *(MethodInfo **)(lVar7 + 0x30);
                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                    (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
                    if ((int)pMVar9 != 0) {
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
                      pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
                    }
                    lVar7 = 0xf0;
                    if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
                      lVar7 = 0x118;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if (lVar7 != 0) {
                      pGVar8 = (this->fields)._nXSlider;
                      lVar7 = *(longlong *)(lVar7 + 0x30);
                      if (lVar7 != 0) {
                        if (*(uint *)(lVar7 + 0x18) < 4) goto code_?;
                        method = *(MethodInfo **)(lVar7 + 0x38);
                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                          (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
                          if ((int)pMVar9 != 0) {
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
                            pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
                          }
                          lVar7 = 0xf0;
                          if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0) {
                            lVar7 = 0x118;
                          }
                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                          if (lVar7 != 0) {
                            pGVar8 = (this->fields)._nYSlider;
                            lVar7 = *(longlong *)(lVar7 + 0x30);
                            if (lVar7 != 0) {
                              if (*(uint *)(lVar7 + 0x18) < 5) goto code_?;
                              method = *(MethodInfo **)(lVar7 + 0x40);
                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                (pGVar8->fields)._sharedSettings =
                                     (GizmoLineSlider3DSettings *)method;
                                if ((int)pMVar9 != 0) {
                                  uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >>
                                                 0xc);
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
                                  pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
                                }
                                lVar7 = 0xf0;
                                if ((this->fields)._sharedSettings3D != (MoveGizmoSettings3D *)0x0)
                                {
                                  lVar7 = 0x118;
                                }
                                lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                if (lVar7 != 0) {
                                  pGVar8 = (this->fields)._nZSlider;
                                  lVar7 = *(longlong *)(lVar7 + 0x30);
                                  if (lVar7 != 0) {
                                    if (*(uint *)(lVar7 + 0x18) < 6) goto code_?;
                                    method = *(MethodInfo **)(lVar7 + 0x48);
                                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                      (pGVar8->fields)._sharedSettings =
                                           (GizmoLineSlider3DSettings *)method;
                                      if ((int)pMVar9 != 0) {
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
                                        pMVar9 = (MoveGizmo *)(ulonglong)uRam_?;
                                      }
                                      lVar7 = 0xf0;
                                      if ((this->fields)._sharedSettings3D !=
                                          (MoveGizmoSettings3D *)0x0) {
                                        lVar7 = 0x118;
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
                                            if ((int)pMVar9 != 0) {
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
                                              pMVar9 = (MoveGizmo *)(ulonglong)uRam_?
                                              ;
                                            }
                                            lVar7 = 0xf0;
                                            if ((this->fields)._sharedSettings3D !=
                                                (MoveGizmoSettings3D *)0x0) {
                                              lVar7 = 0x118;
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
                                                  if ((int)pMVar9 != 0) {
                                                    uVar2 = (uint)((ulonglong)
                                                                    &(pGVar11->fields).
                                                                     _sharedSettings >> 0xc);
                                                    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) *
                                                             8;
                                                    method = (MethodInfo *)(lVar7 + 0xADDR);
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                      LOCK();
                                                      bVar1 = uVar5 == *(ulonglong *)
                                                                         (lVar7 + 0xADDR);
                                                      if (bVar1) {
                                                        *(ulonglong *)(lVar7 + 0xADDR) =
                                                             uVar5 | 1L << (ulonglong)
                                                                           (uVar2 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar1);
                                                    pMVar9 = (MoveGizmo *)
                                                              (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0xf0;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar7 = 0x118;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    pGVar11 = (this->fields)._zxSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar7 + 0x30);
                                                        if ((int)pMVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pMVar9 = (MoveGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        lVar12 = 0xe8;
                                                        lVar7 = 0xe8;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (MoveGizmoSettings2D *)0x0) {
                                                          lVar7 = 0x110;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          lVar7 = *(longlong *)(lVar7 + 0x30);
                                                          pGVar13 = (this->fields)._p2DModeXSlider;
                                                          if (lVar7 != 0) {
                                                            if (*(int *)(lVar7 + 0x18) == 0)
                                                            goto code_?;
                                                            method = *(MethodInfo **)(lVar7 + 0x20)
                                                            ;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   (GizmoLineSlider2DSettings *)
                                                                   method;
                                                              if ((int)pMVar9 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                method = (MethodInfo *)
                                                                         (lVar7 + 0xADDR);
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *(ulonglong *)
                                                                                     (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pMVar9 = (MoveGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0xe8;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar7 = 0x110;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x30);
                                                    pGVar13 = (this->fields)._p2DModeYSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 2)
                                                      goto code_?;
                                                      method = *(MethodInfo **)(lVar7 + 0x28);
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             (GizmoLineSlider2DSettings *)method;
                                                        if ((int)pMVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pMVar9 = (MoveGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        lVar7 = 0xe8;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (MoveGizmoSettings2D *)0x0) {
                                                          lVar7 = 0x110;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          pGVar13 = (this->fields)._n2DModeXSlider;
                                                          lVar7 = *(longlong *)(lVar7 + 0x30);
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 3)
                                                            goto code_?;
                                                            method = *(MethodInfo **)(lVar7 + 0x30)
                                                            ;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   (GizmoLineSlider2DSettings *)
                                                                   method;
                                                              if ((int)pMVar9 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                method = (MethodInfo *)
                                                                         (lVar7 + 0xADDR);
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *(ulonglong *)
                                                                                     (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pMVar9 = (MoveGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0xe8;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (MoveGizmoSettings2D *)0x0) {
                                                    lVar7 = 0x110;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    pGVar13 = (this->fields)._n2DModeYSlider;
                                                    lVar7 = *(longlong *)(lVar7 + 0x30);
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar7 + 0x38);
                                                        if ((int)pMVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
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
                                                              *puVar3 = uVar5 | 1L << (ulonglong)
                                                                                      (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pMVar9 = (MoveGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (MoveGizmoSettings2D *)0x0) {
                                                          lVar12 = 0x110;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar12);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar14 = (this->fields)._2DModeDblSlider
                                                           , pGVar14 != (GizmoPlaneSlider2D *)0x0)) {
                                                          (pGVar14->fields)._sharedSettings =
                                                               *(GizmoPlaneSlider2DSettings **)
                                                                (lVar7 + 0x28);
                                                          uVar2 = 0;
                                                          if ((int)pMVar9 != 0) {
                                                            uVar15 = (uint)((ulonglong)
                                                                            &(pGVar14->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
                                                            lVar7 = (ulonglong)
                                                                     ((uVar15 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              puVar3 = (ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *puVar3;
                                                              if (bVar1) {
                                                                *puVar3 = uVar5 | 1L << (ulonglong)
                                                                                        (uVar15 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  uVar2 = uRam_?;
                                                  } while (!bVar1);
                                                  }
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (MoveGizmoSettings3D *)0x0) {
                                                    lVar6 = 0x118;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar6);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar16 = (this->fields)._vertexSnapDrag,
                                                     pGVar16 != (GizmoObjectVertexSnapDrag3D *)0x0))
                                                  {
                                                    pGVar17 = *(GizmoObjectVertexSnapSettings **)
                                                              (lVar7 + 0x28);
                                                    if ((pGVar17 != (GizmoObjectVertexSnapSettings *)
                                                                   0x0) &&
                                                       ((pGVar16->fields)._settings = pGVar17,
                                                       uVar2 != 0)) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar16->fields)._settings >>
                                                                     0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        puVar3 = (ulonglong *)(lVar7 + 0xADDR)
                                                        ;
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
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_Use2DModeEnableHotkey(Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_Use2DModeEnableHotkey
               (MoveGizmo *this,bool value,MethodInfo *method)

{
  (this->fields)._use2DModeEnableHotkey = value;
  return;
}


/* Void set_UseVertSnapEnableHotkey(Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_UseVertSnapEnableHotkey
               (MoveGizmo *this,bool value,MethodInfo *method)

{
  (this->fields)._useVertSnapEnableHotkey = value;
  return;
}

