
/* MoveGizmo+VertexSnapState GetVertexSnapState() */

MoveGizmo_VertexSnapState__Enum
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_GetVertexSnapState
          (MoveGizmo *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if ((this->fields)._isVertexSnapEnabled == 0) {
    return MoveGizmo_VertexSnapState__Enum_Inactive;
  }
  pGStack_2 = (this->fields)._vertexSnapDrag;
  if (pGStack_2 != (GizmoObjectVertexSnapDrag3D *)0x0) {
    pIStack_1 = (pGStack_2->klass->vtable).get_DragChannel_1.methodPtr;
    cVar3 = (*(code *)(pGStack_2->klass->vtable).get_IsActive_1.method)();
    return (uint)(cVar3 != '\0');
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  MVar7 = (*pcVar6)();
  return MVar7;
}


/* Single GetZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_GetZoomFactor
                (MoveGizmo *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
    pMVar1 = (this->fields)._lookAndFeel3D;
    if (pMVar1 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pMVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pMVar1->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    if ((pGVar2->fields)._useZoomFactor == 0) {
      return 1.0;
    }
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single GetZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_GetZoomFactor_1
                (MoveGizmo *this,Vector3 position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
    pMVar1 = (this->fields)._lookAndFeel3D;
    if (pMVar1 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pMVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pMVar1->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    if ((pGVar2->fields)._useZoomFactor != 0) {
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar3;
    }
    return 1.0;
  }
code_?:
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
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
        (*(code *)(pGVar3->vtable).OnVisibilityStateChanged.method)();
        pGVar2 = (this->fields)._2DModeDblSlider;
        if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
          GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(pGVar2,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnAttached(MoveGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2D);
    func_?(&TypeInfo__RTG__GizmoCap3D);
    func_?(&TypeInfo__RTG__GizmoLineSlider2D);
    func_?(&TypeInfo__RTG__GizmoLineSlider3D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3D);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  iVar2 = GizmoHandleId::GizmoHandleId_get_MidDisplayCap((MethodInfo *)0x0);
  pGVar3 = (GizmoCap3D *)func_?(TypeInfo__RTG__GizmoCap3D);
  GizmoCap3D::GizmoCap3D__ctor(pGVar3,pGVar1,iVar2,(MethodInfo *)0x0);
  (this->fields)._midCap = pGVar3;
  func_?(&(this->fields)._midCap,pGVar3);
  pGVar3 = (this->fields)._midCap;
  if (pGVar3 != (GizmoCap3D *)0x0) {
    GizmoCap::GizmoCap_SetHoverable((GizmoCap *)pGVar3,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar4 = System.Xml.dll::System::Xml::Schema::Datatype_Name::Datatype_Name_get_TypeCode
                       ((Datatype_Name *)0x0,unaff_retaddr);
    pGVar5 = (GizmoPlaneSlider3D *)func_?();
    GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar5,pGVar1,XVar4,(MethodInfo *)0x0);
    (this->fields)._xySlider = pGVar5;
    func_?(&(this->fields)._xySlider,pGVar5);
    pGVar1 = (this->fields)._._gizmo;
    iVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_SizeOf_25((MethodInfo *)0x0);
    pGVar5 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
    GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar5,pGVar1,iVar2,(MethodInfo *)0x0);
    (this->fields)._yzSlider = pGVar5;
    func_?();
    pGVar1 = (this->fields)._._gizmo;
    XVar4 = System.Xml.dll::System::Xml::Schema::Datatype_ID::Datatype_ID_get_TypeCode
                       ((Datatype_ID *)0x0,(MethodInfo *)&(this->fields)._yzSlider);
    pGVar5 = (GizmoPlaneSlider3D *)func_?();
    GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar5,pGVar1,XVar4,(MethodInfo *)0x0);
    (this->fields)._zxSlider = pGVar5;
    func_?();
    pGVar6 = (this->fields)._dblSliders;
    if (pGVar6 != (GizmoPlaneSlider3DCollection *)0x0) {
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                (pGVar6,(this->fields)._xySlider,(MethodInfo *)0x0);
      pGVar6 = (this->fields)._dblSliders;
      if (pGVar6 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                  (pGVar6,(this->fields)._yzSlider,(MethodInfo *)0x0);
        pGVar6 = (this->fields)._dblSliders;
        if (pGVar6 != (GizmoPlaneSlider3DCollection *)0x0) {
          GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                    (pGVar6,(this->fields)._zxSlider,(MethodInfo *)0x0);
          iVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_SizeOf_23((MethodInfo *)0x0);
          pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::
                             Datatype_hexBinary_get_TypeCode
                                       ((Datatype_hexBinary *)0x0,(MethodInfo *)this);
          pGVar7 = TypeInfo__RTG__GizmoLineSlider3D;
          pGVar8 = (GizmoLineSlider3D *)func_?();
          GizmoLineSlider3D::GizmoLineSlider3D__ctor
                    (pGVar8,pGVar1,iVar2,(int32_t)pGVar1,(MethodInfo *)0x0);
          (this->fields)._pXSlider = pGVar8;
          func_?(&(this->fields)._pXSlider,pGVar8);
          pGVar8 = (this->fields)._pXSlider;
          if (pGVar8 != (GizmoLineSlider3D *)0x0) {
            GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                      (pGVar8,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
            pGVar8 = (this->fields)._pXSlider;
            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                        (pGVar8,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
              EVar9 = System.Core.dll::System::Linq::Expressions::MemberExpression::
                       MemberExpression_get_NodeType((MemberExpression *)0x0,(MethodInfo *)pGVar7);
              pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_QName::
                                 Datatype_QName_get_TypeCode
                                           ((Datatype_QName *)0x0,(MethodInfo *)this);
              pGVar7 = TypeInfo__RTG__GizmoLineSlider3D;
              pGVar8 = (GizmoLineSlider3D *)func_?();
              GizmoLineSlider3D::GizmoLineSlider3D__ctor
                        (pGVar8,pGVar1,EVar9,(int32_t)pGVar1,(MethodInfo *)0x0);
              (this->fields)._nXSlider = pGVar8;
              func_?(&(this->fields)._nXSlider,pGVar8);
              pGVar8 = (this->fields)._nXSlider;
              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                          (pGVar8,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                pGVar8 = (this->fields)._nXSlider;
                if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                            (pGVar8,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                  XVar4 = System.Xml.dll::System::Xml::Schema::Datatype_yearMonth::
                           Datatype_yearMonth_get_TypeCode
                                     ((Datatype_yearMonth *)0x0,(MethodInfo *)pGVar7);
                  pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
                                     Datatype_base64Binary_get_TypeCode
                                               ((Datatype_base64Binary *)0x0,(MethodInfo *)this);
                  pGVar8 = (GizmoLineSlider3D *)func_?();
                  GizmoLineSlider3D::GizmoLineSlider3D__ctor
                            (pGVar8,pGVar1,XVar4,(int32_t)pGVar1,(MethodInfo *)0x0);
                  (this->fields)._pYSlider = pGVar8;
                  func_?(&(this->fields)._pYSlider,pGVar8);
                  pGVar8 = (this->fields)._pYSlider;
                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                              (pGVar8,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                    pGVar8 = (this->fields)._pYSlider;
                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                      GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                (pGVar8,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                      iVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                               UnsafeUtility::UnsafeUtility_SizeOf_11((MethodInfo *)0x0);
                      pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::
                                         Datatype_NOTATION_get_TypeCode
                                                   ((Datatype_NOTATION *)0x0,(MethodInfo *)this);
                      pGVar7 = TypeInfo__RTG__GizmoLineSlider3D;
                      pGVar8 = (GizmoLineSlider3D *)func_?();
                      GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                (pGVar8,pGVar1,iVar2,(int32_t)pGVar1,(MethodInfo *)0x0);
                      (this->fields)._nYSlider = pGVar8;
                      func_?(&(this->fields)._nYSlider,pGVar8);
                      pGVar8 = (this->fields)._nYSlider;
                      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                        GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                  (pGVar8,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                        pGVar8 = (this->fields)._nYSlider;
                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                    (pGVar8,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                          XVar4 = System.Xml.dll::System::Xml::Schema::Datatype_year::
                                   Datatype_year_get_TypeCode
                                             ((Datatype_year *)0x0,(MethodInfo *)pGVar7);
                          pGVar1 = (Gizmo *)UnityEngine.CoreModule.dll::Unity::Collections::
                                             LowLevel::Unsafe::UnsafeUtility::
                                             UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
                          pGVar7 = TypeInfo__RTG__GizmoLineSlider3D;
                          pGVar8 = (GizmoLineSlider3D *)func_?();
                          GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                    (pGVar8,pGVar1,XVar4,(int32_t)pGVar1,(MethodInfo *)0x0);
                          (this->fields)._pZSlider = pGVar8;
                          func_?(&(this->fields)._pZSlider,pGVar8);
                          pGVar8 = (this->fields)._pZSlider;
                          if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                            GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                      (pGVar8,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                            pGVar8 = (this->fields)._pZSlider;
                            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                              GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                        (pGVar8,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                              XVar4 = System.Xml.dll::System::Xml::Schema::Datatype_month::
                                       Datatype_month_get_TypeCode
                                                 ((Datatype_month *)0x0,(MethodInfo *)pGVar7);
                              capHandleId = System.Xml.dll::System::Xml::Schema::
                                            Datatype_normalizedStringV1Compat::
                                            Datatype_normalizedStringV1Compat_get_TypeCode
                                                      ((Datatype_normalizedStringV1Compat *)0x0,
                                                       (MethodInfo *)pGVar7);
                              pGVar8 = (GizmoLineSlider3D *)
                                        func_?(TypeInfo__RTG__GizmoLineSlider3D);
                              GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                        (pGVar8,(Gizmo *)0x0,XVar4,capHandleId,(MethodInfo *)0x0);
                              (this->fields)._nZSlider = pGVar8;
                              func_?(&(this->fields)._nZSlider,pGVar8);
                              pGVar8 = (this->fields)._nZSlider;
                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                          (pGVar8,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                pGVar8 = (this->fields)._nZSlider;
                                if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                  GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                            (pGVar8,2,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                                  pGVar10 = (this->fields)._axesSliders;
                                  if (pGVar10 != (GizmoLineSlider3DCollection *)0x0) {
                                    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                              (pGVar10,(this->fields)._pXSlider,(MethodInfo *)0x0);
                                    pGVar10 = (this->fields)._axesSliders;
                                    if (pGVar10 != (GizmoLineSlider3DCollection *)0x0) {
                                      GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                (pGVar10,(this->fields)._pYSlider,(MethodInfo *)0x0);
                                      pGVar10 = (this->fields)._axesSliders;
                                      if (pGVar10 != (GizmoLineSlider3DCollection *)0x0) {
                                        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                  (pGVar10,(this->fields)._pZSlider,(MethodInfo *)0x0
                                                  );
                                        pGVar10 = (this->fields)._axesSliders;
                                        if (pGVar10 != (GizmoLineSlider3DCollection *)0x0) {
                                          GizmoLineSlider3DCollection::
                                          GizmoLineSlider3DCollection_Add
                                                    (pGVar10,(this->fields)._nXSlider,
                                                     (MethodInfo *)0x0);
                                          pGVar10 = (this->fields)._axesSliders;
                                          if (pGVar10 != (GizmoLineSlider3DCollection *)0x0) {
                                            GizmoLineSlider3DCollection::
                                            GizmoLineSlider3DCollection_Add
                                                      (pGVar10,(this->fields)._nYSlider,
                                                       (MethodInfo *)0x0);
                                            pGVar10 = (this->fields)._axesSliders;
                                            if (pGVar10 != (GizmoLineSlider3DCollection *)0x0) {
                                              GizmoLineSlider3DCollection::
                                              GizmoLineSlider3DCollection_Add
                                                        (pGVar10,(this->fields)._nZSlider,
                                                         (MethodInfo *)0x0);
                                              pGVar5 = (this->fields)._xySlider;
                                              if (((pGVar5 != (GizmoPlaneSlider3D *)0x0) &&
                                                  (pGVar11 = (pGVar5->fields)._._handle,
                                                  pGVar11 != (GizmoHandle *)0x0)) &&
                                                 (pGVar10 = (this->fields)._axesSliders,
                                                 pGVar10 != (GizmoLineSlider3DCollection *)0x0)) {
                                                GizmoLineSlider3DCollection::
                                                GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                          (pGVar10,(pGVar11->fields)._hoverPriority3D,
                                                           (MethodInfo *)0x0);
                                                pGVar5 = (this->fields)._yzSlider;
                                                if (((pGVar5 != (GizmoPlaneSlider3D *)0x0) &&
                                                    (pGVar11 = (pGVar5->fields)._._handle,
                                                    pGVar11 != (GizmoHandle *)0x0)) &&
                                                   (pGVar10 = (this->fields)._axesSliders,
                                                   pGVar10 != (GizmoLineSlider3DCollection *)0x0)) {
                                                  GizmoLineSlider3DCollection::
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar10,(pGVar11->fields).
                                                                    _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar5 = (this->fields)._zxSlider;
                                                  if (((pGVar5 != (GizmoPlaneSlider3D *)0x0) &&
                                                      (pGVar11 = (pGVar5->fields)._._handle,
                                                      pGVar11 != (GizmoHandle *)0x0)) &&
                                                     (pGVar10 = (this->fields)._axesSliders,
                                                     pGVar10 != (GizmoLineSlider3DCollection *)0x0))
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar10,(pGVar11->fields).
                                                                    _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = (this->fields)._._gizmo;
                                                  iVar2 = GizmoHandleId::GizmoHandleId_get_VertSnap
                                                                     ((MethodInfo *)0x0);
                                                  pGVar12 = (GizmoCap2D *)
                                                            func_?(
                                                  TypeInfo__RTG__GizmoCap2D);
                                                  GizmoCap2D::GizmoCap2D__ctor
                                                            (pGVar12,pGVar1,iVar2,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._vertSnapCap = pGVar12;
                                                  func_?(&(this->fields)._vertSnapCap,
                                                                  pGVar12);
                                                  pGVar12 = (this->fields)._vertSnapCap;
                                                  if (pGVar12 != (GizmoCap2D *)0x0) {
                                                    GizmoCap::GizmoCap_SetVisible
                                                              ((GizmoCap *)pGVar12,0,
                                                               (MethodInfo *)0x0);
                                                    pGVar3 = (GizmoCap3D *)
                                                              (this->fields)._vertSnapCap;
                                                    if (pGVar3 != (GizmoCap3D *)0x0) {
                                                      GizmoCap3D::GizmoCap3D_set_DragSession
                                                                (pGVar3,(IGizmoDragSession *)
                                                                         (this->fields).
                                                                         _vertexSnapDrag,
                                                                 (MethodInfo *)0x0);
                                                      pGVar1 = (this->fields)._._gizmo;
                                                      if ((pGVar1 != (Gizmo *)0x0) &&
                                                         (this_00 = (this->fields)._vertexSnapDrag,
                                                         this_00 !=
                                                         (GizmoObjectVertexSnapDrag3D *)0x0)) {
                                                        GizmoDragSession::
                                                        GizmoDragSession_AddTargetTransform
                                                                  ((GizmoDragSession *)this_00,
                                                                   (pGVar1->fields)._transform,
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        EVar9 = System.Core.dll::System::Linq::
                                                                 Expressions::AssignBinaryExpression
                                                                 ::
                                                  AssignBinaryExpression_get_NodeType
                                                            ((AssignBinaryExpression *)0x0,
                                                             (MethodInfo *)pGVar7);
                                                  method_00 = TypeInfo__RTG__GizmoPlaneSlider2D;
                                                  pGVar13 = (GizmoPlaneSlider2D *)func_?();
                                                  GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                                            (pGVar13,pGVar1,EVar9,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._2DModeDblSlider = pGVar13;
                                                  func_?(&(this->fields)._2DModeDblSlider,
                                                                  pGVar13);
                                                  pGVar13 = (this->fields)._2DModeDblSlider;
                                                  if (pGVar13 != (GizmoPlaneSlider2D *)0x0) {
                                                    GizmoPlaneSlider2D::
                                                    GizmoPlaneSlider2D_SetDragChannel
                                                              (pGVar13,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar13 = (this->fields)._2DModeDblSlider;
                                                    if (pGVar13 != (GizmoPlaneSlider2D *)0x0) {
                                                      pGVar14 = pGVar13->klass;
                                                      (pGVar13->fields)._._isVisible = 0;
                                                      pMVar15 = (MethodInfo *)
                                                                (pGVar14->vtable).
                                                                OnHoverableStateChanged.methodPtr;
                                                      (*(code *)(pGVar14->vtable).
                                                                OnVisibilityStateChanged.method)
                                                                (pGVar13);
                                                      EVar9 = System.Core.dll::System::Linq::
                                                               Expressions::ParameterExpression::
                                                               ParameterExpression_get_NodeType
                                                                         ((ParameterExpression *)0x0
                                                                          ,(MethodInfo *)
                                                                           (this->fields)._._gizmo);
                                                      XVar4 = System.Xml.dll::System::Xml::Schema::
                                                               Datatype_negativeInteger::
                                                               Datatype_negativeInteger_get_TypeCode
                                                                         ((Datatype_negativeInteger
                                                                           *)0x0,pMVar15);
                                                      pGVar16 = (GizmoLineSlider2D *)
                                                                func_?(
                                                  TypeInfo__RTG__GizmoLineSlider2D);
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar16,(Gizmo *)0x0,EVar9,XVar4,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._p2DModeXSlider = pGVar16;
                                                  func_?(&(this->fields)._p2DModeXSlider,
                                                                  pGVar16);
                                                  pGVar16 = (this->fields)._p2DModeXSlider;
                                                  if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar16,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar16 = (this->fields)._p2DModeXSlider;
                                                    if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar16,0,AxisSign__Enum_Positive,
                                                                 (MethodInfo *)0x0);
                                                      pGVar16 = (this->fields)._p2DModeXSlider;
                                                      if ((((pGVar16 != (GizmoLineSlider2D *)0x0) &&
                                                           (pGVar11 = (pGVar16->fields)._._handle,
                                                           pGVar11 != (GizmoHandle *)0x0)) &&
                                                          (pGVar13 = (this->fields)._2DModeDblSlider
                                                          , pGVar13 != (GizmoPlaneSlider2D *)0x0))
                                                         && ((pGVar17 = (pGVar13->fields)._._handle,
                                                             pGVar17 != (GizmoHandle *)0x0 &&
                                                             (pPVar18 = (pGVar11->fields).
                                                                       _hoverPriority2D,
                                                             pPVar18 != (Priority *)0x0)))) {
                                                        Priority::Priority_MakeLowerThan
                                                                  (pPVar18,(pGVar17->fields).
                                                                          _hoverPriority2D,
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (Gizmo *)System.Xml.dll::System::
                                                                           Xml::Schema::
                                                                           Datatype_ENTITY::
                                                                                                                                                      
                                                  Datatype_ENTITY_get_TypeCode
                                                            ((Datatype_ENTITY *)0x0,
                                                             (MethodInfo *)method_00);
                                                  XVar4 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_long::Datatype_long_get_TypeCode
                                                                     ((Datatype_long *)0x0,
                                                                      (MethodInfo *)this);
                                                  pGVar19 = TypeInfo__RTG__GizmoLineSlider2D;
                                                  this_01 = (Il2CppRGCTXData *)func_?();
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            ((GizmoLineSlider2D *)this_01,pGVar1,
                                                             (int32_t)pGVar1,XVar4,
                                                             (MethodInfo *)0x0);
                                                  pGVar19->rgctx_data = this_01;
                                                  func_?(&pGVar19->rgctx_data);
                                                  if (pGVar19->rgctx_data != (Il2CppRGCTXData *)0x0)
                                                  {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              ((GizmoLineSlider2D *)
                                                               pGVar19->rgctx_data,
                                                               GizmoDragChannel__Enum_Offset,
                                                               (MethodInfo *)0x0);
                                                    if (pGVar19->rgctx_data !=
                                                        (Il2CppRGCTXData *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                ((GizmoLineSlider2D *)
                                                                 pGVar19->rgctx_data,1,
                                                                 AxisSign__Enum_Positive,
                                                                 (MethodInfo *)0x0);
                                                      if (((pGVar19->rgctx_data !=
                                                            (Il2CppRGCTXData *)0x0) &&
                                                          (pMVar15 = pGVar19->rgctx_data[2].method,
                                                          pMVar15 != (MethodInfo *)0x0)) &&
                                                         ((uVar20 = (pGVar19->_1).cctor_started,
                                                          uVar20 != 0 &&
                                                          ((iVar21 = *(int *)(uVar20 + 8), iVar21 != 0
                                                           && (pPVar18 = (Priority *)
                                                                        (pMVar15->field7_0x1c).
                                                                        methodMetadataHandle,
                                                              pPVar18 != (Priority *)0x0)))))) {
                                                        Priority::Priority_MakeLowerThan
                                                                  (pPVar18,*(Priority **)
                                                                           (iVar21 + 0x1c),
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (Gizmo *)
                                                  UnityEngine.CoreModule.dll::Unity::Collections::
                                                  LowLevel::Unsafe::UnsafeUtility::
                                                  UnsafeUtility_SizeOf((MethodInfo *)0x0);
                                                  XVar4 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_int::Datatype_int_get_TypeCode
                                                                     ((Datatype_int *)0x0,
                                                                      (MethodInfo *)pGVar19);
                                                  pGVar19 = TypeInfo__RTG__GizmoLineSlider2D;
                                                  this_02 = (GizmoLineSlider2D *)func_?();
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (this_02,pGVar1,(int32_t)pGVar1,XVar4
                                                             ,(MethodInfo *)0x0);
                                                  (pGVar19->_1).typeHierarchy =
                                                       (Il2CppClass **)this_02;
                                                  func_?(&pGVar19->_1);
                                                  pGVar16 = (GizmoLineSlider2D *)
                                                            (pGVar19->_1).typeHierarchy;
                                                  if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar16,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar16 = (GizmoLineSlider2D *)
                                                              (pGVar19->_1).typeHierarchy;
                                                    if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar16,0,AxisSign__Enum_Negative,
                                                                 (MethodInfo *)0x0);
                                                      ppIVar22 = (pGVar19->_1).typeHierarchy;
                                                      if ((((ppIVar22 != (Il2CppClass **)0x0) &&
                                                           (pIVar23 = ppIVar22[2],
                                                           pIVar23 != (Il2CppClass *)0x0)) &&
                                                          (uVar20 = (pGVar19->_1).cctor_started,
                                                          uVar20 != 0)) &&
                                                         ((iVar21 = *(int *)(uVar20 + 8), iVar21 != 0
                                                          && (pPVar18 = *(Priority **)
                                                                        &(pIVar23->this_arg).attrs,
                                                             pPVar18 != (Priority *)0x0)))) {
                                                        Priority::Priority_MakeLowerThan
                                                                  (pPVar18,*(Priority **)
                                                                           (iVar21 + 0x1c),
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (Gizmo *)System.Xml.dll::System::
                                                                           Xml::Schema::
                                                                                                                                                      
                                                  Datatype_nonPositiveInteger::
                                                  Datatype_nonPositiveInteger_get_TypeCode
                                                            ((Datatype_nonPositiveInteger *)0x0,
                                                             (MethodInfo *)this_02);
                                                  XVar4 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_short::
                                                           Datatype_short_get_TypeCode
                                                                     ((Datatype_short *)0x0,
                                                                      (MethodInfo *)pGVar19);
                                                  pGVar19 = TypeInfo__RTG__GizmoLineSlider2D;
                                                  pGVar16 = (GizmoLineSlider2D *)func_?();
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar16,pGVar1,(int32_t)pGVar1,XVar4
                                                             ,(MethodInfo *)0x0);
                                                  (pGVar19->_1).unity_user_data = pGVar16;
                                                  func_?(&(pGVar19->_1).unity_user_data);
                                                  pGVar16 = (pGVar19->_1).unity_user_data;
                                                  if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar16,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar16 = (pGVar19->_1).unity_user_data;
                                                    if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar16,1,AxisSign__Enum_Negative,
                                                                 (MethodInfo *)0x0);
                                                      pvVar24 = (pGVar19->_1).unity_user_data;
                                                      if (((pvVar24 != (void *)0x0) &&
                                                          (iVar21 = *(int *)((int)pvVar24 + 8),
                                                          iVar21 != 0)) &&
                                                         ((uVar20 = (pGVar19->_1).cctor_started,
                                                          uVar20 != 0 &&
                                                          ((iVar25 = *(int *)(uVar20 + 8),
                                                           iVar25 != 0 &&
                                                           (pPVar18 = *(Priority **)(iVar21 + 0x1c),
                                                           pPVar18 != (Priority *)0x0)))))) {
                                                        Priority::Priority_MakeLowerThan
                                                                  (pPVar18,*(Priority **)
                                                                           (iVar25 + 0x1c),
                                                                   (MethodInfo *)0x0);
                                                        pGVar26 = (GizmoLineSlider2DCollection *)
                                                                  (pGVar19->_1).
                                                                  initializationExceptionGCHandle;
                                                        if (pGVar26 !=
                                                            (GizmoLineSlider2DCollection *)0x0) {
                                                          GizmoLineSlider2DCollection::
                                                          GizmoLineSlider2DCollection_Add
                                                                    (pGVar26,(GizmoLineSlider2D *)
                                                                             pGVar19->static_fields,
                                                                     (MethodInfo *)0x0);
                                                          pGVar26 = (GizmoLineSlider2DCollection *)
                                                                    (pGVar19->_1).
                                                                    initializationExceptionGCHandle;
                                                          if (pGVar26 !=
                                                              (GizmoLineSlider2DCollection *)0x0) {
                                                            GizmoLineSlider2DCollection::
                                                            GizmoLineSlider2DCollection_Add
                                                                      (pGVar26,(GizmoLineSlider2D *)
                                                                               pGVar19->rgctx_data,
                                                                       (MethodInfo *)0x0);
                                                            pGVar26 = (GizmoLineSlider2DCollection *
                                                                      )(pGVar19->_1).
                                                                                                                                              
                                                  initializationExceptionGCHandle;
                                                  if (pGVar26 != (GizmoLineSlider2DCollection *)0x0)
                                                  {
                                                    GizmoLineSlider2DCollection::
                                                    GizmoLineSlider2DCollection_Add
                                                              (pGVar26,(GizmoLineSlider2D *)
                                                                       (pGVar19->_1).typeHierarchy,
                                                               (MethodInfo *)0x0);
                                                    pGVar26 = (GizmoLineSlider2DCollection *)
                                                              (pGVar19->_1).
                                                              initializationExceptionGCHandle;
                                                    if (pGVar26 !=
                                                        (GizmoLineSlider2DCollection *)0x0) {
                                                      GizmoLineSlider2DCollection::
                                                      GizmoLineSlider2DCollection_Add
                                                                (pGVar26,(pGVar19->_1).
                                                                         unity_user_data,
                                                                 (MethodInfo *)0x0);
                                                      MoveGizmo_Hide2DModeHandles
                                                                ((MoveGizmo *)pGVar19,
                                                                 (MethodInfo *)0x0);
                                                      MoveGizmo_SetupSharedLookAndFeel
                                                                ((MoveGizmo *)pGVar19,
                                                                 (MethodInfo *)0x0);
                                                      MoveGizmo_SetupSharedSettings
                                                                ((MoveGizmo *)pGVar19,
                                                                 (MethodInfo *)0x0);
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
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnDetached() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnDetached(MoveGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    value = (GizmoEntityTransformChangedHandler *)
            func_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              ((SerializationCallback *)value,(Object *)this,
               MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_remove_Changed(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisabled() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnDisabled(MoveGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    value = (GizmoEntityTransformChangedHandler *)
            func_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              ((SerializationCallback *)value,(Object *)this,
               MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_remove_Changed(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnabled() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnEnabled(MoveGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    value = (GizmoEntityTransformChangedHandler *)
            func_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              ((SerializationCallback *)value,(Object *)this,
               MethodInfo__RTG__MoveGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_add_Changed(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnGizmoDragUpdate
               (MoveGizmo *this,int32_t handleId,MethodInfo *method)

{
  if ((this->fields)._isVertexSnapEnabled != 0) {
    fStack_1 = (this->fields)._postVSnapPosRestore.z;
    uStack_2._0_4_ = (this->fields)._postVSnapPosRestore.x;
    uStack_2._4_4_ = (this->fields)._postVSnapPosRestore.y;
    this_00 = (this->fields)._._gizmo;
    if (this_00 == (Gizmo *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pVVar4 = Gizmo::Gizmo_get_RelativeDragOffset(&VStack_5,this_00,(MethodInfo *)0x0);
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    fVar8 = pVVar4->z;
    (this->fields)._postVSnapPosRestore.x = (float)uVar6 + (float)uStack_2;
    (this->fields)._postVSnapPosRestore.y = uStack_2._4_4_ + (float)uVar7;
    (this->fields)._postVSnapPosRestore.z = fVar8 + fStack_1;
  }
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnGizmoRender
               (MoveGizmo *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  this_02 = (RTGizmosEngine *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (this_02 == (RTGizmosEngine *)0x0) goto code_?;
  iVar4 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_02,(MethodInfo *)0x0);
  if (1 < iVar4) {
    pGVar5 = (this->fields)._axesSliders;
    if (pGVar5 == (GizmoLineSlider3DCollection *)0x0) goto code_?;
    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ApplyZoomFactor
              (pGVar5,camera,(MethodInfo *)0x0);
    pGVar6 = (this->fields)._midCap;
    if (pGVar6 == (GizmoCap3D *)0x0) goto code_?;
    if ((pGVar6->fields)._._isVisible != 0) {
      GizmoCap3D::GizmoCap3D_ApplyZoomFactor((this->fields)._midCap,camera,(MethodInfo *)0x0);
    }
    if (((this->fields)._isVertexSnapEnabled == 0) && ((this->fields)._is2DModeEnabled == 0)) {
      this_00 = (this->fields)._dblSliders;
      if (this_00 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_ApplyZoomFactor
                (this_00,camera,(MethodInfo *)0x0);
      UniversalGizmo::UniversalGizmo_PlaceMvDblSlidersInSliderPlanes
                ((UniversalGizmo *)this,camera,(MethodInfo *)0x0);
    }
    UniversalGizmo::UniversalGizmo_Update2DGizmoPosition((UniversalGizmo *)this,(MethodInfo *)0x0);
    if ((this->fields)._is2DModeEnabled != 0) {
      MoveGizmo_Update2DModeHandlePositions(this,(MethodInfo *)0x0);
    }
  }
  pGVar5 = (this->fields)._axesSliders;
  if ((pGVar5 != (GizmoLineSlider3DCollection *)0x0) &&
     (method_00 = (MethodInfo *)camera,
     this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_GetRenderSortedSliders
                         (pGVar5,camera,(MethodInfo *)0x0),
     this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffd8,this_03,
                         MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                        );
    RVar8 = pLVar7->_current;
    uStack_1 = 1;
    while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                             ), bVar9 != 0) {
      if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
      iVar10 = *(int *)RVar8;
      RVar8 = *(RegexCharClass_SingleRange *)(iVar10 + 0x134);
      (**(code **)(iVar10 + 0x130))();
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pGVar6 = (this->fields)._midCap;
    if (pGVar6 != (GizmoCap3D *)0x0) {
      (*(code *)(pGVar6->klass->vtable).Render_1.method)();
      pGVar11 = (this->fields)._xySlider;
      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
        (*(code *)(pGVar11->klass->vtable).Render_1.method)();
        pGVar11 = (this->fields)._yzSlider;
        if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
          (*(code *)(pGVar11->klass->vtable).Render_1.method)();
          pGVar11 = (this->fields)._zxSlider;
          if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
            (*(code *)(pGVar11->klass->vtable).Render_1.method)();
            pGVar12 = (this->fields)._vertSnapCap;
            if (pGVar12 != (GizmoCap2D *)0x0) {
              (*(code *)(pGVar12->klass->vtable).Render_1.method)();
              this_01 = (this->fields)._2DModeSliders;
              if (this_01 != (GizmoLineSlider2DCollection *)0x0) {
                GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Render
                          (this_01,camera,(MethodInfo *)0x0);
                pGVar13 = (this->fields)._2DModeDblSlider;
                if (pGVar13 != (GizmoPlaneSlider2D *)0x0) {
                  (*(code *)(pGVar13->klass->vtable).Render_1.method)();
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnGizmoTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnGizmoTransformChanged
               (MoveGizmo *this,GizmoTransform *transform,GizmoTransform_ChangeData changeData,
               MethodInfo *method)

{
  UniversalGizmo::UniversalGizmo_Update2DGizmoPosition((UniversalGizmo *)this,(MethodInfo *)0x0);
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_OnGizmoUpdateBegin
               (MoveGizmo *this,MethodInfo *method)

{
  UniversalGizmo::UniversalGizmo_Update2DGizmoPosition((UniversalGizmo *)this,(MethodInfo *)0x0);
  if (((this->fields)._is2DModeEnabled == 0) && ((this->fields)._isVertexSnapEnabled == 0)) {
    pGVar1 = (this->fields)._midCap;
    if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
      pMVar2 = (this->fields)._lookAndFeel3D;
      if (pMVar2 != (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
    }
    else {
      pMVar2 = (this->fields)._sharedLookAndFeel3D;
code_?:
      if (pGVar1 != (GizmoCap3D *)0x0) {
        GizmoCap::GizmoCap_SetVisible
                  ((GizmoCap *)pGVar1,(pMVar2->fields)._isMidCapVisible,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  else {
code_?:
    if ((this->fields)._useSnapEnableHotkey == 0) {
code_?:
      if ((this->fields)._use2DModeEnableHotkey != 0) {
        if ((this->fields)._sharedHotkeys == (MoveGizmoHotkeys *)0x0) {
          pMVar3 = (this->fields)._hotkeys;
          if (pMVar3 == (MoveGizmoHotkeys *)0x0) goto code_?;
        }
        else {
          pMVar3 = (this->fields)._sharedHotkeys;
        }
        pHVar4 = (pMVar3->fields)._enable2DMode;
        if (pHVar4 == (Hotkeys *)0x0) goto code_?;
        bVar5 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
        MoveGizmo_Set2DModeEnabled(this,bVar5,(MethodInfo *)0x0);
      }
      if ((this->fields)._is2DModeEnabled == 0) {
        bVar5 = (this->fields)._isVertexSnapEnabled;
        if (bVar5 == 0) {
          pGVar6 = (this->fields)._._gizmo;
          if ((pGVar6 == (Gizmo *)0x0) ||
             (pGVar7 = (pGVar6->fields)._transform, pGVar7 == (GizmoTransform *)0x0))
          goto code_?;
          fVar8 = (pGVar7->fields)._position3D.y;
          fVar9 = (pGVar7->fields)._position3D.z;
          (this->fields)._postVSnapPosRestore.x = (pGVar7->fields)._position3D.x;
          (this->fields)._postVSnapPosRestore.y = fVar8;
          (this->fields)._postVSnapPosRestore.z = fVar9;
        }
        if ((this->fields)._useVertSnapEnableHotkey == 0) {
code_?:
          if ((bVar5 != 0) && ((this->fields)._isVertexSnapEnabled == 0)) {
            pGVar6 = (this->fields)._._gizmo;
            if ((pGVar6 == (Gizmo *)0x0) ||
               (pGVar7 = (pGVar6->fields)._transform, pGVar7 == (GizmoTransform *)0x0))
            goto code_?;
            GizmoTransform::GizmoTransform_set_Position3D
                      (pGVar7,(this->fields)._postVSnapPosRestore,(MethodInfo *)0x0);
          }
          pGVar10 = (this->fields)._pXSlider;
          if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
            pMVar2 = (this->fields)._lookAndFeel3D;
            if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
          }
          else {
            pMVar2 = (this->fields)._sharedLookAndFeel3D;
          }
          pBVar11 = (pMVar2->fields)._sglSliderVis;
          if (pBVar11 != (Boolean__Array *)0x0) {
            if (pBVar11->max_length == 0) goto code_?;
            if (pGVar10 != (GizmoLineSlider3D *)0x0) {
              (pGVar10->fields)._._isVisible = pBVar11->vector[0] != 0;
              (*(code *)(pGVar10->klass->vtable).OnVisibilityStateChanged.method)(pGVar10);
              pGVar10 = (this->fields)._pXSlider;
              if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
                pMVar2 = (this->fields)._lookAndFeel3D;
                if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
              }
              else {
                pMVar2 = (this->fields)._sharedLookAndFeel3D;
              }
              pBVar11 = (pMVar2->fields)._sglSliderCapVis;
              if (pBVar11 != (Boolean__Array *)0x0) {
                if (pBVar11->max_length == 0) goto code_?;
                if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                            (pGVar10,pBVar11->vector[0] != 0,(MethodInfo *)0x0);
                  pGVar10 = (this->fields)._pYSlider;
                  if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
                    pMVar2 = (this->fields)._lookAndFeel3D;
                    if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
                  }
                  else {
                    pMVar2 = (this->fields)._sharedLookAndFeel3D;
                  }
                  pBVar11 = (pMVar2->fields)._sglSliderVis;
                  if (pBVar11 != (Boolean__Array *)0x0) {
                    if (pBVar11->max_length < 2) goto code_?;
                    if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                      (pGVar10->fields)._._isVisible = pBVar11->vector[1] != 0;
                      (*(code *)(pGVar10->klass->vtable).OnVisibilityStateChanged.method)(pGVar10);
                      pGVar10 = (this->fields)._pYSlider;
                      if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
                        pMVar2 = (this->fields)._lookAndFeel3D;
                        if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
                      }
                      else {
                        pMVar2 = (this->fields)._sharedLookAndFeel3D;
                      }
                      pBVar11 = (pMVar2->fields)._sglSliderCapVis;
                      if (pBVar11 != (Boolean__Array *)0x0) {
                        if (pBVar11->max_length < 2) goto code_?;
                        if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                    (pGVar10,pBVar11->vector[1] != 0,(MethodInfo *)0x0);
                          pGVar10 = (this->fields)._pZSlider;
                          if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0)
                          {
                            pMVar2 = (this->fields)._lookAndFeel3D;
                            if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
                          }
                          else {
                            pMVar2 = (this->fields)._sharedLookAndFeel3D;
                          }
                          pBVar11 = (pMVar2->fields)._sglSliderVis;
                          if (pBVar11 != (Boolean__Array *)0x0) {
                            if (pBVar11->max_length < 3) goto code_?;
                            if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                              (pGVar10->fields)._._isVisible = pBVar11->vector[2] != 0;
                              (*(code *)(pGVar10->klass->vtable).OnVisibilityStateChanged.method)
                                        (pGVar10);
                              pGVar10 = (this->fields)._pZSlider;
                              if ((this->fields)._sharedLookAndFeel3D ==
                                  (MoveGizmoLookAndFeel3D *)0x0) {
                                pMVar2 = (this->fields)._lookAndFeel3D;
                                if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
                              }
                              else {
                                pMVar2 = (this->fields)._sharedLookAndFeel3D;
                              }
                              pBVar11 = (pMVar2->fields)._sglSliderCapVis;
                              if (pBVar11 != (Boolean__Array *)0x0) {
                                if (pBVar11->max_length < 3) goto code_?;
                                if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                  GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                            (pGVar10,pBVar11->vector[2] != 0,(MethodInfo *)0x0);
                                  pGVar10 = (this->fields)._nXSlider;
                                  if ((this->fields)._sharedLookAndFeel3D ==
                                      (MoveGizmoLookAndFeel3D *)0x0) {
                                    pMVar2 = (this->fields)._lookAndFeel3D;
                                    if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0)
                                    goto code_?;
                                  }
                                  else {
                                    pMVar2 = (this->fields)._sharedLookAndFeel3D;
                                  }
                                  pBVar11 = (pMVar2->fields)._sglSliderVis;
                                  if (pBVar11 != (Boolean__Array *)0x0) {
                                    if (pBVar11->max_length < 4) goto code_?;
                                    if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                      (pGVar10->fields)._._isVisible = pBVar11->vector[3] != 0;
                                      (*(code *)(pGVar10->klass->vtable).OnVisibilityStateChanged.
                                                method)(pGVar10);
                                      pGVar10 = (this->fields)._nXSlider;
                                      if ((this->fields)._sharedLookAndFeel3D ==
                                          (MoveGizmoLookAndFeel3D *)0x0) {
                                        pMVar2 = (this->fields)._lookAndFeel3D;
                                        if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0)
                                        goto code_?;
                                      }
                                      else {
                                        pMVar2 = (this->fields)._sharedLookAndFeel3D;
                                      }
                                      pBVar11 = (pMVar2->fields)._sglSliderCapVis;
                                      if (pBVar11 != (Boolean__Array *)0x0) {
                                        if (pBVar11->max_length < 4) goto code_?;
                                        if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                          GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                                    (pGVar10,pBVar11->vector[3] != 0,(MethodInfo *)0x0
                                                    );
                                          pGVar10 = (this->fields)._nYSlider;
                                          if ((this->fields)._sharedLookAndFeel3D ==
                                              (MoveGizmoLookAndFeel3D *)0x0) {
                                            pMVar2 = (this->fields)._lookAndFeel3D;
                                            if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0)
                                            goto code_?;
                                          }
                                          else {
                                            pMVar2 = (this->fields)._sharedLookAndFeel3D;
                                          }
                                          pBVar11 = (pMVar2->fields)._sglSliderVis;
                                          if (pBVar11 != (Boolean__Array *)0x0) {
                                            if (pBVar11->max_length < 5) goto code_?;
                                            if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                              (pGVar10->fields)._._isVisible = pBVar11->vector[4] != 0
                                              ;
                                              (*(code *)(pGVar10->klass->vtable).
                                                        OnVisibilityStateChanged.method)(pGVar10);
                                              pGVar10 = (this->fields)._nYSlider;
                                              if ((this->fields)._sharedLookAndFeel3D ==
                                                  (MoveGizmoLookAndFeel3D *)0x0) {
                                                pMVar2 = (this->fields)._lookAndFeel3D;
                                                if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0)
                                                goto code_?;
                                              }
                                              else {
                                                pMVar2 = (this->fields)._sharedLookAndFeel3D;
                                              }
                                              pBVar11 = (pMVar2->fields)._sglSliderCapVis;
                                              if (pBVar11 != (Boolean__Array *)0x0) {
                                                if (pBVar11->max_length < 5) goto code_?;
                                                if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                                  GizmoLineSlider3D::
                                                  GizmoLineSlider3D_Set3DCapVisible
                                                            (pGVar10,pBVar11->vector[4] != 0,
                                                             (MethodInfo *)0x0);
                                                  pGVar10 = (this->fields)._nZSlider;
                                                  if ((this->fields)._sharedLookAndFeel3D ==
                                                      (MoveGizmoLookAndFeel3D *)0x0) {
                                                    pMVar2 = (this->fields)._lookAndFeel3D;
                                                    if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0)
                                                    goto code_?;
                                                  }
                                                  else {
                                                    pMVar2 = (this->fields)._sharedLookAndFeel3D;
                                                  }
                                                  pBVar11 = (pMVar2->fields)._sglSliderVis;
                                                  if (pBVar11 != (Boolean__Array *)0x0) {
                                                    if (pBVar11->max_length < 6)
                                                    goto code_?;
                                                    if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                                      (pGVar10->fields)._._isVisible =
                                                           pBVar11->vector[5] != 0;
                                                      (*(code *)(pGVar10->klass->vtable).
                                                                OnVisibilityStateChanged.method)
                                                                (pGVar10);
                                                      pGVar10 = (this->fields)._nZSlider;
                                                      if ((this->fields)._sharedLookAndFeel3D ==
                                                          (MoveGizmoLookAndFeel3D *)0x0) {
                                                        pMVar2 = (this->fields)._lookAndFeel3D;
                                                        if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0
                                                           ) goto code_?;
                                                      }
                                                      else {
                                                        pMVar2 = (this->fields).
                                                                  _sharedLookAndFeel3D;
                                                      }
                                                      pBVar11 = (pMVar2->fields)._sglSliderCapVis;
                                                      if (pBVar11 != (Boolean__Array *)0x0) {
                                                        if (pBVar11->max_length < 6)
                                                        goto code_?;
                                                        if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                                          GizmoLineSlider3D::
                                                          GizmoLineSlider3D_Set3DCapVisible
                                                                    (pGVar10,pBVar11->vector[5] != 0,
                                                                     (MethodInfo *)0x0);
                                                          goto code_?;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if ((this->fields)._sharedHotkeys == (MoveGizmoHotkeys *)0x0) {
            pMVar3 = (this->fields)._hotkeys;
            if (pMVar3 == (MoveGizmoHotkeys *)0x0) goto code_?;
          }
          else {
            pMVar3 = (this->fields)._sharedHotkeys;
          }
          pHVar4 = (pMVar3->fields)._enableVertexSnapping;
          if (pHVar4 != (Hotkeys *)0x0) {
            bVar12 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
            if ((((this->fields)._isVertexSnapEnabled == bVar12) ||
                ((this->fields)._is2DModeEnabled != 0)) || ((this->fields)._._isEnabled == 0))
            goto code_?;
            this_02 = (DataTable *)(this->fields)._._gizmo;
            if (this_02 != (DataTable *)0x0) {
              bVar13 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                                 (this_02,(MethodInfo *)0x0);
              if (bVar13 != 0) goto code_?;
              this_03 = (this->fields)._vertSnapCap;
              if (bVar12 == 0) {
                if (this_03 != (GizmoCap2D *)0x0) {
                  GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_03,0,(MethodInfo *)0x0);
code_?:
                  (this->fields)._isVertexSnapEnabled = bVar12;
                  goto code_?;
                }
              }
              else if (this_03 != (GizmoCap2D *)0x0) {
                GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_03,1,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._midCap;
                if (pGVar1 != (GizmoCap3D *)0x0) {
                  GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar1,0,(MethodInfo *)0x0);
                  pGVar14 = (this->fields)._dblSliders;
                  if (pGVar14 != (GizmoPlaneSlider3DCollection *)0x0) {
                    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                              (pGVar14,0,1,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
code_?:
        if ((this->fields)._isVertexSnapEnabled == 0) {
          if ((this->fields)._is2DModeEnabled == 0) {
            pGVar15 = (this->fields)._xySlider;
            if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
              pMVar2 = (this->fields)._lookAndFeel3D;
              if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
            }
            else {
              pMVar2 = (this->fields)._sharedLookAndFeel3D;
            }
            pBVar11 = (pMVar2->fields)._dblSliderVis;
            if (pBVar11 != (Boolean__Array *)0x0) {
              if (pBVar11->max_length == 0) goto code_?;
              if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                (pGVar15->fields)._._isVisible = pBVar11->vector[0] != 0;
                (*(code *)(pGVar15->klass->vtable).OnVisibilityStateChanged.method)(pGVar15);
                pGVar15 = (this->fields)._xySlider;
                if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                  GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                            ((this->fields)._xySlider,(pGVar15->fields)._._isVisible,
                             (MethodInfo *)0x0);
                  pGVar15 = (this->fields)._yzSlider;
                  if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
                    pMVar2 = (this->fields)._lookAndFeel3D;
                    if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
                  }
                  else {
                    pMVar2 = (this->fields)._sharedLookAndFeel3D;
                  }
                  pBVar11 = (pMVar2->fields)._dblSliderVis;
                  if (pBVar11 != (Boolean__Array *)0x0) {
                    if (pBVar11->max_length < 2) goto code_?;
                    if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                      (pGVar15->fields)._._isVisible = pBVar11->vector[1] != 0;
                      (*(code *)(pGVar15->klass->vtable).OnVisibilityStateChanged.method)(pGVar15);
                      pGVar15 = (this->fields)._yzSlider;
                      if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                        GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                  ((this->fields)._yzSlider,(pGVar15->fields)._._isVisible,
                                   (MethodInfo *)0x0);
                        pGVar15 = (this->fields)._zxSlider;
                        if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
                          pMVar2 = (this->fields)._lookAndFeel3D;
                          if (pMVar2 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
                        }
                        else {
                          pMVar2 = (this->fields)._sharedLookAndFeel3D;
                        }
                        pBVar11 = (pMVar2->fields)._dblSliderVis;
                        if (pBVar11 != (Boolean__Array *)0x0) {
                          if (pBVar11->max_length < 3) goto code_?;
                          if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                            (pGVar15->fields)._._isVisible = pBVar11->vector[2] != 0;
                            (*(code *)(pGVar15->klass->vtable).OnVisibilityStateChanged.method)
                                      (pGVar15);
                            pGVar15 = (this->fields)._zxSlider;
                            if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                              GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                        ((this->fields)._zxSlider,(pGVar15->fields)._._isVisible,
                                         (MethodInfo *)0x0);
                              pGVar6 = (this->fields)._._gizmo;
                              if (pGVar6 != (Gizmo *)0x0) {
                                camera = Gizmo::Gizmo_get_FocusCamera(pGVar6,(MethodInfo *)0x0);
                                UniversalGizmo::UniversalGizmo_PlaceMvDblSlidersInSliderPlanes
                                          ((UniversalGizmo *)this,camera,(MethodInfo *)0x0);
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
          else {
            if ((this->fields)._isVertexSnapEnabled != 0) goto code_?;
            if ((this->fields)._is2DModeEnabled == 0) {
              return;
            }
            pGVar16 = (this->fields)._p2DModeXSlider;
            if ((this->fields)._sharedLookAndFeel2D == (MoveGizmoLookAndFeel2D *)0x0) {
              pMVar17 = (this->fields)._lookAndFeel2D;
              if (pMVar17 == (MoveGizmoLookAndFeel2D *)0x0) goto code_?;
            }
            else {
              pMVar17 = (this->fields)._sharedLookAndFeel2D;
            }
            pBVar11 = (pMVar17->fields)._sglSliderVis;
            if (pBVar11 != (Boolean__Array *)0x0) {
              if (pBVar11->max_length == 0) goto code_?;
              if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                (pGVar16->fields)._._isVisible = pBVar11->vector[0] != 0;
                (*(code *)(pGVar16->klass->vtable).OnVisibilityStateChanged.method)(pGVar16);
                pGVar16 = (this->fields)._p2DModeXSlider;
                if ((this->fields)._sharedLookAndFeel2D == (MoveGizmoLookAndFeel2D *)0x0) {
                  pMVar17 = (this->fields)._lookAndFeel2D;
                  if (pMVar17 == (MoveGizmoLookAndFeel2D *)0x0) goto code_?;
                }
                else {
                  pMVar17 = (this->fields)._sharedLookAndFeel2D;
                }
                pBVar11 = (pMVar17->fields)._sglSliderCapVis;
                if (pBVar11 != (Boolean__Array *)0x0) {
                  if (pBVar11->max_length == 0) goto code_?;
                  if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                    GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                              (pGVar16,pBVar11->vector[0] != 0,(MethodInfo *)0x0);
                    pGVar16 = (this->fields)._p2DModeYSlider;
                    if ((this->fields)._sharedLookAndFeel2D == (MoveGizmoLookAndFeel2D *)0x0) {
                      pMVar17 = (this->fields)._lookAndFeel2D;
                      if (pMVar17 == (MoveGizmoLookAndFeel2D *)0x0) goto code_?;
                    }
                    else {
                      pMVar17 = (this->fields)._sharedLookAndFeel2D;
                    }
                    pBVar11 = (pMVar17->fields)._sglSliderVis;
                    if (pBVar11 != (Boolean__Array *)0x0) {
                      if (pBVar11->max_length < 2) goto code_?;
                      if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                        (pGVar16->fields)._._isVisible = pBVar11->vector[1] != 0;
                        (*(code *)(pGVar16->klass->vtable).OnVisibilityStateChanged.method)(pGVar16)
                        ;
                        pGVar16 = (this->fields)._p2DModeYSlider;
                        if ((this->fields)._sharedLookAndFeel2D == (MoveGizmoLookAndFeel2D *)0x0) {
                          pMVar17 = (this->fields)._lookAndFeel2D;
                          if (pMVar17 == (MoveGizmoLookAndFeel2D *)0x0) goto code_?;
                        }
                        else {
                          pMVar17 = (this->fields)._sharedLookAndFeel2D;
                        }
                        pBVar11 = (pMVar17->fields)._sglSliderCapVis;
                        if (pBVar11 != (Boolean__Array *)0x0) {
                          if (pBVar11->max_length < 2) goto code_?;
                          if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                            GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                      (pGVar16,pBVar11->vector[1] != 0,(MethodInfo *)0x0);
                            pGVar16 = (this->fields)._n2DModeXSlider;
                            if ((this->fields)._sharedLookAndFeel2D == (MoveGizmoLookAndFeel2D *)0x0
                               ) {
                              pMVar17 = (this->fields)._lookAndFeel2D;
                              if (pMVar17 == (MoveGizmoLookAndFeel2D *)0x0) goto code_?;
                            }
                            else {
                              pMVar17 = (this->fields)._sharedLookAndFeel2D;
                            }
                            pBVar11 = (pMVar17->fields)._sglSliderVis;
                            if (pBVar11 != (Boolean__Array *)0x0) {
                              if (pBVar11->max_length < 3) goto code_?;
                              if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                                (pGVar16->fields)._._isVisible = pBVar11->vector[2] != 0;
                                (*(code *)(pGVar16->klass->vtable).OnVisibilityStateChanged.method)
                                          (pGVar16);
                                pGVar16 = (this->fields)._n2DModeXSlider;
                                if ((this->fields)._sharedLookAndFeel2D ==
                                    (MoveGizmoLookAndFeel2D *)0x0) {
                                  pMVar17 = (this->fields)._lookAndFeel2D;
                                  if (pMVar17 == (MoveGizmoLookAndFeel2D *)0x0)
                                  goto code_?;
                                }
                                else {
                                  pMVar17 = (this->fields)._sharedLookAndFeel2D;
                                }
                                pBVar11 = (pMVar17->fields)._sglSliderCapVis;
                                if (pBVar11 != (Boolean__Array *)0x0) {
                                  if (pBVar11->max_length < 3) goto code_?;
                                  if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                                    GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                              (pGVar16,pBVar11->vector[2] != 0,(MethodInfo *)0x0);
                                    pGVar16 = (this->fields)._n2DModeYSlider;
                                    if ((this->fields)._sharedLookAndFeel2D ==
                                        (MoveGizmoLookAndFeel2D *)0x0) {
                                      pMVar17 = (this->fields)._lookAndFeel2D;
                                      if (pMVar17 == (MoveGizmoLookAndFeel2D *)0x0)
                                      goto code_?;
                                    }
                                    else {
                                      pMVar17 = (this->fields)._sharedLookAndFeel2D;
                                    }
                                    pBVar11 = (pMVar17->fields)._sglSliderVis;
                                    if (pBVar11 != (Boolean__Array *)0x0) {
                                      if (pBVar11->max_length < 4) goto code_?;
                                      if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                                        (pGVar16->fields)._._isVisible = pBVar11->vector[3] != 0;
                                        (*(code *)(pGVar16->klass->vtable).OnVisibilityStateChanged.
                                                  method)(pGVar16);
                                        pGVar16 = (this->fields)._n2DModeYSlider;
                                        if ((this->fields)._sharedLookAndFeel2D ==
                                            (MoveGizmoLookAndFeel2D *)0x0) {
                                          pMVar17 = (this->fields)._lookAndFeel2D;
                                          if (pMVar17 == (MoveGizmoLookAndFeel2D *)0x0)
                                          goto code_?;
                                        }
                                        else {
                                          pMVar17 = (this->fields)._sharedLookAndFeel2D;
                                        }
                                        pBVar11 = (pMVar17->fields)._sglSliderCapVis;
                                        if (pBVar11 != (Boolean__Array *)0x0) {
                                          if (pBVar11->max_length < 4) goto code_?;
                                          if (pGVar16 != (GizmoLineSlider2D *)0x0) {
                                            GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                                      (pGVar16,pBVar11->vector[3] != 0,
                                                       (MethodInfo *)0x0);
                                            pGVar18 = (this->fields)._2DModeDblSlider;
                                            if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
                                              bVar5 = (pGVar18->fields)._._isVisible;
                                              if ((this->fields)._sharedLookAndFeel2D ==
                                                  (MoveGizmoLookAndFeel2D *)0x0) {
                                                pMVar17 = (this->fields)._lookAndFeel2D;
                                                if (pMVar17 == (MoveGizmoLookAndFeel2D *)0x0)
                                                goto code_?;
                                              }
                                              else {
                                                pMVar17 = (this->fields)._sharedLookAndFeel2D;
                                              }
                                              (pGVar18->fields)._._isVisible =
                                                   (pMVar17->fields)._isDblSliderVisible;
                                              (*(code *)(pGVar18->klass->vtable).
                                                        OnVisibilityStateChanged.method)(pGVar18);
                                              pGVar18 = (this->fields)._2DModeDblSlider;
                                              if ((this->fields)._sharedLookAndFeel2D ==
                                                  (MoveGizmoLookAndFeel2D *)0x0) {
                                                pMVar17 = (this->fields)._lookAndFeel2D;
                                                if (pMVar17 == (MoveGizmoLookAndFeel2D *)0x0)
                                                goto code_?;
                                              }
                                              else {
                                                pMVar17 = (this->fields)._sharedLookAndFeel2D;
                                              }
                                              if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
                                                GizmoPlaneSlider2D::
                                                GizmoPlaneSlider2D_SetBorderVisible
                                                          (pGVar18,(pMVar17->fields).
                                                                  _isDblSliderVisible,
                                                           (MethodInfo *)0x0);
                                                if (bVar5 != 0) {
                                                  return;
                                                }
                                                pGVar18 = (this->fields)._2DModeDblSlider;
                                                if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
                                                  if ((pGVar18->fields)._._isVisible == 0) {
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
        else {
code_?:
          pGVar19 = (this->fields)._vertexSnapDrag;
          if (pGVar19 != (GizmoObjectVertexSnapDrag3D *)0x0) {
            cVar20 = (*(code *)(pGVar19->klass->vtable).get_IsActive_1.method)(pGVar19);
            if (cVar20 != '\0') {
              return;
            }
            pGVar19 = (this->fields)._vertexSnapDrag;
            if (pGVar19 != (GizmoObjectVertexSnapDrag3D *)0x0) {
              bVar5 = GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D_SelectSnapPivotPoint
                                 (pGVar19,(this->fields)._._gizmo,(MethodInfo *)0x0);
              if (bVar5 == 0) {
                return;
              }
              pGVar6 = (this->fields)._._gizmo;
              if (((pGVar6 != (Gizmo *)0x0) &&
                  (pGVar19 = (this->fields)._vertexSnapDrag,
                  pGVar19 != (GizmoObjectVertexSnapDrag3D *)0x0)) &&
                 (pGVar7 = (pGVar6->fields)._transform, pGVar7 != (GizmoTransform *)0x0)) {
                GizmoTransform::GizmoTransform_set_Position3D
                          (pGVar7,(pGVar19->fields)._snapPivot,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      if ((this->fields)._sharedHotkeys == (MoveGizmoHotkeys *)0x0) {
        pMVar3 = (this->fields)._hotkeys;
        if (pMVar3 == (MoveGizmoHotkeys *)0x0) goto code_?;
      }
      else {
        pMVar3 = (this->fields)._sharedHotkeys;
      }
      pHVar4 = (pMVar3->fields)._enableSnapping;
      if (pHVar4 != (Hotkeys *)0x0) {
        bVar5 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
        this_00 = (this->fields)._axesSliders;
        if (this_00 != (GizmoLineSlider3DCollection *)0x0) {
          GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetSnapEnabled
                    (this_00,bVar5,(MethodInfo *)0x0);
          this_01 = (this->fields)._2DModeSliders;
          if (this_01 != (GizmoLineSlider2DCollection *)0x0) {
            GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetSnapEnabled
                      (this_01,bVar5,(MethodInfo *)0x0);
            pGVar14 = (this->fields)._dblSliders;
            if (pGVar14 != (GizmoPlaneSlider3DCollection *)0x0) {
              GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                        (pGVar14,bVar5,(MethodInfo *)0x0);
              pGVar18 = (this->fields)._2DModeDblSlider;
              if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
                (*(code *)(pGVar18->klass->vtable).SetSnapEnabled_1.method)();
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
      this_00 = (this->fields)._midCap;
      if (this_00 != (GizmoCap3D *)0x0) {
        pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
        if (pvVar3 == (void *)handleId) {
          return 1;
        }
        this_01 = (this->fields)._dblSliders;
        if (this_01 != (GizmoPlaneSlider3DCollection *)0x0) {
          bVar2 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                            (this_01,handleId,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            return 1;
          }
          pGVar4 = (this->fields)._2DModeSliders;
          if (pGVar4 != (GizmoLineSlider2DCollection *)0x0) {
            bVar2 = GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Contains_1
                              (pGVar4,handleId,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              return 1;
            }
            pGVar4 = (this->fields)._2DModeSliders;
            if (pGVar4 != (GizmoLineSlider2DCollection *)0x0) {
              bVar2 = GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_ContainsCapId
                                (pGVar4,handleId,(MethodInfo *)0x0);
              if (bVar2 != 0) {
                return 1;
              }
              pGVar5 = (this->fields)._2DModeDblSlider;
              if ((pGVar5 != (GizmoPlaneSlider2D *)0x0) &&
                 (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
                return (pGVar6->fields)._id == handleId;
              }
            }
          }
        }
      }
    }
  }
  func_?();
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
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if (isEnabled == 0) {
      MoveGizmo_Hide2DModeHandles(this,(MethodInfo *)0x0);
      (this->fields)._is2DModeEnabled = 0;
      return;
    }
    this_01 = (this->fields)._midCap;
    if (this_01 != (GizmoCap3D *)0x0) {
      GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,0,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._2DModeSliders;
      if (pGVar2 != (GizmoLineSlider2DCollection *)0x0) {
        GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetVisible
                  (pGVar2,1,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._2DModeSliders;
        if (pGVar2 != (GizmoLineSlider2DCollection *)0x0) {
          GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Set2DCapsVisible
                    (pGVar2,1,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._2DModeDblSlider;
          if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
            GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)pGVar3,1,(MethodInfo *)0x0);
            pGVar3 = (this->fields)._2DModeDblSlider;
            if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
              GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(pGVar3,1,(MethodInfo *)0x0);
              this_02 = (this->fields)._dblSliders;
              if (this_02 != (GizmoPlaneSlider3DCollection *)0x0) {
                GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                          (this_02,0,1,(MethodInfo *)0x0);
                pGVar4 = (this->fields)._axesSliders;
                if (pGVar4 != (GizmoLineSlider3DCollection *)0x0) {
                  GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetVisible
                            (pGVar4,0,(MethodInfo *)0x0);
                  pGVar4 = (this->fields)._axesSliders;
                  if (pGVar4 != (GizmoLineSlider3DCollection *)0x0) {
                    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Set3DCapsVisible
                              (pGVar4,0,(MethodInfo *)0x0);
                    pGVar5 = (this->fields)._._gizmo;
                    if (((pGVar5 != (Gizmo *)0x0) &&
                        (pGVar6 = (pGVar5->fields)._transform, pGVar6 != (GizmoTransform *)0x0)) &&
                       (pGVar2 = (this->fields)._2DModeSliders,
                       pGVar2 != (GizmoLineSlider2DCollection *)0x0)) {
                      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetOffsetDragOrigin
                                (pGVar2,(pGVar6->fields)._position3D,(MethodInfo *)0x0);
                      pGVar5 = (this->fields)._._gizmo;
                      if ((pGVar5 != (Gizmo *)0x0) &&
                         (pGVar6 = (pGVar5->fields)._transform, pGVar6 != (GizmoTransform *)0x0)) {
                        fVar7 = (pGVar6->fields)._position3D.y;
                        fVar8 = (pGVar6->fields)._position3D.z;
                        pGVar3 = (this->fields)._2DModeDblSlider;
                        if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
                          (pGVar3->fields)._offsetDragOrigin.x = (pGVar6->fields)._position3D.x;
                          (pGVar3->fields)._offsetDragOrigin.y = fVar7;
                          (pGVar3->fields)._offsetDragOrigin.z = fVar8;
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
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetAxesLinesHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_SetAxesLinesHoverable
               (MoveGizmo *this,bool hoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._pXSlider;
  if (pGVar1 != (GizmoLineSlider3D *)0x0) {
    pGVar2 = pGVar1->klass;
    (pGVar1->fields)._._isHoverable = hoverable;
    (*(code *)(pGVar2->vtable).OnHoverableStateChanged.method)(pGVar1,pGVar2[1]._0.image);
    pGVar1 = (this->fields)._nXSlider;
    if (pGVar1 != (GizmoLineSlider3D *)0x0) {
      pGVar2 = pGVar1->klass;
      (pGVar1->fields)._._isHoverable = hoverable;
      (*(code *)(pGVar2->vtable).OnHoverableStateChanged.method)(pGVar1,pGVar2[1]._0.image);
      pGVar1 = (this->fields)._pYSlider;
      if (pGVar1 != (GizmoLineSlider3D *)0x0) {
        pGVar2 = pGVar1->klass;
        (pGVar1->fields)._._isHoverable = hoverable;
        (*(code *)(pGVar2->vtable).OnHoverableStateChanged.method)(pGVar1,pGVar2[1]._0.image);
        pGVar1 = (this->fields)._nYSlider;
        if (pGVar1 != (GizmoLineSlider3D *)0x0) {
          pGVar2 = pGVar1->klass;
          (pGVar1->fields)._._isHoverable = hoverable;
          (*(code *)(pGVar2->vtable).OnHoverableStateChanged.method)(pGVar1,pGVar2[1]._0.image);
          pGVar1 = (this->fields)._pZSlider;
          if (pGVar1 != (GizmoLineSlider3D *)0x0) {
            pGVar2 = pGVar1->klass;
            (pGVar1->fields)._._isHoverable = hoverable;
            (*(code *)(pGVar2->vtable).OnHoverableStateChanged.method)(pGVar1,pGVar2[1]._0.image);
            pGVar1 = (this->fields)._nZSlider;
            if (pGVar1 != (GizmoLineSlider3D *)0x0) {
              pGVar2 = pGVar1->klass;
              (pGVar1->fields)._._isHoverable = hoverable;
              (*(code *)(pGVar2->vtable).OnHoverableStateChanged.method)(pGVar1,pGVar2[1]._0.image);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
          pGVar2 = pGVar1->klass;
          pIStack3 = (pGVar2->vtable).Render_1.methodPtr;
          uStack4 = _isEnabled;
          (*(code *)(pGVar2->vtable).SetSnapEnabled_1.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetVertexSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_SetVertexSnapEnabled
               (MoveGizmo *this,bool isEnabled,MethodInfo *method)

{
  if ((((this->fields)._isVertexSnapEnabled != isEnabled) && ((this->fields)._is2DModeEnabled == 0))
     && ((this->fields)._._isEnabled != 0)) {
    this_00 = (DataTable *)(this->fields)._._gizmo;
    if (this_00 != (DataTable *)0x0) {
      bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                        (this_00,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      this_01 = (this->fields)._vertSnapCap;
      if (isEnabled == 0) {
        if (this_01 != (GizmoCap2D *)0x0) {
          GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,0,(MethodInfo *)0x0);
          (this->fields)._isVertexSnapEnabled = 0;
          return;
        }
      }
      else if (this_01 != (GizmoCap2D *)0x0) {
        GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,1,(MethodInfo *)0x0);
        this_02 = (this->fields)._midCap;
        if (this_02 != (GizmoCap3D *)0x0) {
          GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_02,0,(MethodInfo *)0x0);
          this_03 = (this->fields)._dblSliders;
          if (this_03 != (GizmoPlaneSlider3DCollection *)0x0) {
            GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                      (this_03,0,1,(MethodInfo *)0x0);
            (this->fields)._isVertexSnapEnabled = isEnabled;
            return;
          }
        }
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Void SetVertexSnapTargetObjects(IEnumerable`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_SetVertexSnapTargetObjects
               (MoveGizmo *this,IEnumerable_1_UnityEngine_GameObject_ *targetObjects,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._vertexSnapDrag;
  if (pGVar1 != (GizmoObjectVertexSnapDrag3D *)0x0) {
    pIStack_2 = (IEnumerable_1_UnityEngine_GameObject_ *)
                (pGVar1->klass->vtable).get_DragChannel_1.methodPtr;
    pGStack_3 = pGVar1;
    cVar4 = (*(code *)(pGVar1->klass->vtable).get_IsActive_1.method)();
    if (cVar4 == '\0') {
      pIStack_2 = targetObjects;
      (pGVar1->fields)._targetObjects = targetObjects;
      pGStack_3 = (GizmoObjectVertexSnapDrag3D *)&(pGVar1->fields)._targetObjects;
      func_?();
    }
    return;
  }
  uVar5 = func_?(&pGStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_SetupSharedLookAndFeel
               (MoveGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
    pMVar1 = (this->fields)._lookAndFeel3D;
    if (pMVar1 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
  }
  else {
    pMVar1 = (this->fields)._sharedLookAndFeel3D;
  }
  pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
  pGVar3 = (this->fields)._pXSlider;
  if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
  if (pGVar2->max_length != 0) {
    if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
              (pGVar3,pGVar2->vector[0],(MethodInfo *)0x0);
    if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
      pMVar1 = (this->fields)._lookAndFeel3D;
      if (pMVar1 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
    }
    else {
      pMVar1 = (this->fields)._sharedLookAndFeel3D;
    }
    pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
    pGVar3 = (this->fields)._pYSlider;
    if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    if (1 < pGVar2->max_length) {
      if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
      GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                (pGVar3,pGVar2->vector[1],(MethodInfo *)0x0);
      if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
        pMVar1 = (this->fields)._lookAndFeel3D;
        if (pMVar1 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
      }
      else {
        pMVar1 = (this->fields)._sharedLookAndFeel3D;
      }
      pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
      pGVar3 = (this->fields)._pZSlider;
      if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
      if (2 < pGVar2->max_length) {
        if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
        GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                  (pGVar3,pGVar2->vector[2],(MethodInfo *)0x0);
        if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
          pMVar1 = (this->fields)._lookAndFeel3D;
          if (pMVar1 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
        }
        else {
          pMVar1 = (this->fields)._sharedLookAndFeel3D;
        }
        pGVar3 = (this->fields)._nXSlider;
        pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
        if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
        if (3 < pGVar2->max_length) {
          if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
          GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                    (pGVar3,pGVar2->vector[3],(MethodInfo *)0x0);
          if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
            pMVar1 = (this->fields)._lookAndFeel3D;
            if (pMVar1 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
          }
          else {
            pMVar1 = (this->fields)._sharedLookAndFeel3D;
          }
          pGVar3 = (this->fields)._nYSlider;
          pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
          if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
          if (4 < pGVar2->max_length) {
            if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
            GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                      (pGVar3,pGVar2->vector[4],(MethodInfo *)0x0);
            if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
              pMVar1 = (this->fields)._lookAndFeel3D;
              if (pMVar1 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
            }
            else {
              pMVar1 = (this->fields)._sharedLookAndFeel3D;
            }
            pGVar3 = (this->fields)._nZSlider;
            pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
            if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
            if (5 < pGVar2->max_length) {
              if (pGVar3 == (GizmoLineSlider3D *)0x0) goto code_?;
              GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                        (pGVar3,pGVar2->vector[5],(MethodInfo *)0x0);
              if ((this->fields)._sharedLookAndFeel3D == (MoveGizmoLookAndFeel3D *)0x0) {
                pMVar1 = (this->fields)._lookAndFeel3D;
                if (pMVar1 == (MoveGizmoLookAndFeel3D *)0x0) goto code_?;
              }
              else {
                pMVar1 = (this->fields)._sharedLookAndFeel3D;
              }
              pGVar4 = (pMVar1->fields)._dblSlidersLookAndFeel;
              pGVar5 = (this->fields)._xySlider;
              if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
              if (pGVar4->max_length != 0) {
                if (pGVar5 != (GizmoPlaneSlider3D *)0x0) {
                  pGStack6 = pGVar4->vector[0];
                  (pGVar5->fields)._sharedLookAndFeel = pGStack6;
                  ppGStack7 = &(pGVar5->fields)._sharedLookAndFeel;
                  func_?();
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetupSharedSettings() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_SetupSharedSettings
               (MoveGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._settings3D;
    if (pSVar1 == (ScaleGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._sharedSettings3D;
  }
  ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectSliderSettings
            (pSVar1,(this->fields)._pXSlider,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._settings3D;
    if (pSVar1 == (ScaleGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._sharedSettings3D;
  }
  ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectSliderSettings
            (pSVar1,(this->fields)._pYSlider,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._settings3D;
    if (pSVar1 == (ScaleGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._sharedSettings3D;
  }
  ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectSliderSettings
            (pSVar1,(this->fields)._pZSlider,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._settings3D;
    if (pSVar1 == (ScaleGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._sharedSettings3D;
  }
  ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectSliderSettings
            (pSVar1,(this->fields)._nXSlider,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._settings3D;
    if (pSVar1 == (ScaleGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._sharedSettings3D;
  }
  ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectSliderSettings
            (pSVar1,(this->fields)._nYSlider,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._settings3D;
    if (pSVar1 == (ScaleGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._sharedSettings3D;
  }
  ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectSliderSettings
            (pSVar1,(this->fields)._nZSlider,2,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._settings3D;
    if (pSVar1 == (ScaleGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._sharedSettings3D;
  }
  ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectDblSliderSettings
            (pSVar1,(this->fields)._xySlider,PlaneId__Enum_XY,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._settings3D;
    if (pSVar1 == (ScaleGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._sharedSettings3D;
  }
  ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectDblSliderSettings
            (pSVar1,(this->fields)._yzSlider,PlaneId__Enum_YZ,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._settings3D;
    if (pSVar1 == (ScaleGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pSVar1 = (ScaleGizmoSettings3D *)(this->fields)._sharedSettings3D;
  }
  ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectDblSliderSettings
            (pSVar1,(this->fields)._zxSlider,PlaneId__Enum_ZX,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings2D == (MoveGizmoSettings2D *)0x0) {
    pMVar2 = (this->fields)._settings2D;
    if (pMVar2 == (MoveGizmoSettings2D *)0x0) goto code_?;
  }
  else {
    pMVar2 = (this->fields)._sharedSettings2D;
  }
  MoveGizmoSettings2D::MoveGizmoSettings2D_ConnectSliderSettings
            (pMVar2,(this->fields)._p2DModeXSlider,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings2D == (MoveGizmoSettings2D *)0x0) {
    pMVar2 = (this->fields)._settings2D;
    if (pMVar2 == (MoveGizmoSettings2D *)0x0) goto code_?;
  }
  else {
    pMVar2 = (this->fields)._sharedSettings2D;
  }
  MoveGizmoSettings2D::MoveGizmoSettings2D_ConnectSliderSettings
            (pMVar2,(this->fields)._p2DModeYSlider,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings2D == (MoveGizmoSettings2D *)0x0) {
    pMVar2 = (this->fields)._settings2D;
    if (pMVar2 == (MoveGizmoSettings2D *)0x0) goto code_?;
  }
  else {
    pMVar2 = (this->fields)._sharedSettings2D;
  }
  MoveGizmoSettings2D::MoveGizmoSettings2D_ConnectSliderSettings
            (pMVar2,(this->fields)._n2DModeXSlider,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings2D == (MoveGizmoSettings2D *)0x0) {
    pMVar2 = (this->fields)._settings2D;
    if (pMVar2 == (MoveGizmoSettings2D *)0x0) goto code_?;
  }
  else {
    pMVar2 = (this->fields)._sharedSettings2D;
  }
  MoveGizmoSettings2D::MoveGizmoSettings2D_ConnectSliderSettings
            (pMVar2,(this->fields)._n2DModeYSlider,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedSettings2D == (MoveGizmoSettings2D *)0x0) {
    pMVar2 = (this->fields)._settings2D;
    if (pMVar2 == (MoveGizmoSettings2D *)0x0) goto code_?;
  }
  else {
    pMVar2 = (this->fields)._sharedSettings2D;
  }
  MoveGizmoSettings2D::MoveGizmoSettings2D_ConnectDblSliderSettings
            (pMVar2,(this->fields)._2DModeDblSlider,(MethodInfo *)0x0);
  this_00 = (this->fields)._vertexSnapDrag;
  if ((this->fields)._sharedSettings3D == (MoveGizmoSettings3D *)0x0) {
    pMVar3 = (this->fields)._settings3D;
    if (pMVar3 == (MoveGizmoSettings3D *)0x0) goto code_?;
  }
  else {
    pMVar3 = (this->fields)._sharedSettings3D;
  }
  if (this_00 != (GizmoObjectVertexSnapDrag3D *)0x0) {
    GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D_set_Settings
              (this_00,(pMVar3->fields)._vertexSnapSettings,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update2DModeHandlePositions() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_Update2DModeHandlePositions
               (MoveGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel2D == (MoveGizmoLookAndFeel2D *)0x0) {
    pMVar1 = (this->fields)._lookAndFeel2D;
    if (pMVar1 == (MoveGizmoLookAndFeel2D *)0x0) goto code_?;
  }
  else {
    pMVar1 = (this->fields)._sharedLookAndFeel2D;
  }
  if ((pMVar1->fields)._isDblSliderVisible == 0) {
    pGVar2 = (this->fields)._._gizmo;
    if ((pGVar2 != (Gizmo *)0x0) &&
       (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      pVVar4 = &(pGVar3->fields)._position2D;
      value_00 = *pVVar4;
      value = *pVVar4;
      VVar5 = *pVVar4;
      pGVar6 = (this->fields)._p2DModeXSlider;
      if (pGVar6 != (GizmoLineSlider2D *)0x0) {
        GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,*pVVar4,(MethodInfo *)0x0);
        pGVar6 = (this->fields)._p2DModeYSlider;
        if (pGVar6 != (GizmoLineSlider2D *)0x0) {
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
          pGVar6 = (this->fields)._n2DModeXSlider;
          if (pGVar6 != (GizmoLineSlider2D *)0x0) {
            GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,value,(MethodInfo *)0x0);
            pGVar6 = (this->fields)._n2DModeYSlider;
            if (pGVar6 != (GizmoLineSlider2D *)0x0) {
              GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                        (pGVar6,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    pGVar7 = (this->fields)._2DModeDblSlider;
    pGVar6 = (this->fields)._p2DModeXSlider;
    if ((pGVar7 != (GizmoPlaneSlider2D *)0x0) &&
       (VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                          (pGVar7,Shape2DExtentPoint__Enum_Right,(MethodInfo *)0x0),
       pGVar6 != (GizmoLineSlider2D *)0x0)) {
      GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._2DModeDblSlider;
      pGVar6 = (this->fields)._p2DModeYSlider;
      if ((pGVar7 != (GizmoPlaneSlider2D *)0x0) &&
         (VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                            (pGVar7,Shape2DExtentPoint__Enum_Top,(MethodInfo *)0x0),
         pGVar6 != (GizmoLineSlider2D *)0x0)) {
        GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
        pGVar7 = (this->fields)._2DModeDblSlider;
        pGVar6 = (this->fields)._n2DModeXSlider;
        if ((pGVar7 != (GizmoPlaneSlider2D *)0x0) &&
           (VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                              (pGVar7,Shape2DExtentPoint__Enum_Left,(MethodInfo *)0x0),
           pGVar6 != (GizmoLineSlider2D *)0x0)) {
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
          pGVar7 = (this->fields)._2DModeDblSlider;
          pGVar6 = (this->fields)._n2DModeYSlider;
          if ((pGVar7 != (GizmoPlaneSlider2D *)0x0) &&
             (VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                                (pGVar7,Shape2DExtentPoint__Enum_Bottom,(MethodInfo *)0x0),
             pGVar6 != (GizmoLineSlider2D *)0x0)) {
            GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MoveGizmo() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo__ctor(MoveGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoLineSlider2DCollection);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DCollection);
    func_?(&TypeInfo__RTG__GizmoObjectVertexSnapDrag3D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DCollection);
    func_?(&TypeInfo__RTG__MoveGizmoHotkeys);
    func_?(&TypeInfo__RTG__MoveGizmoLookAndFeel2D);
    func_?(&TypeInfo__RTG__MoveGizmoLookAndFeel3D);
    func_?(&TypeInfo__RTG__MoveGizmoSettings2D);
    func_?(&TypeInfo__RTG__MoveGizmoSettings3D);
    cRam_? = '\x01';
  }
  this_00 = (GizmoLineSlider3DCollection *)
            func_?(TypeInfo__RTG__GizmoLineSlider3DCollection);
  GizmoLineSlider3DCollection::GizmoLineSlider3DCollection__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._axesSliders = this_00;
  func_?(&(this->fields)._axesSliders,this_00);
  this_01 = (GizmoPlaneSlider3DCollection *)
            func_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._dblSliders = this_01;
  func_?(&(this->fields)._dblSliders,this_01);
  this_02 = (GizmoObjectVertexSnapDrag3D *)
            func_?(TypeInfo__RTG__GizmoObjectVertexSnapDrag3D);
  GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._vertexSnapDrag = this_02;
  func_?(&(this->fields)._vertexSnapDrag,this_02);
  this_03 = (GizmoLineSlider2DCollection *)
            func_?(TypeInfo__RTG__GizmoLineSlider2DCollection);
  GizmoLineSlider2DCollection::GizmoLineSlider2DCollection__ctor(this_03,(MethodInfo *)0x0);
  (this->fields)._2DModeSliders = this_03;
  func_?();
  (this->fields)._useSnapEnableHotkey = 1;
  (this->fields)._useVertSnapEnableHotkey = 1;
  (this->fields)._use2DModeEnableHotkey = 1;
  this_04 = (MoveGizmoHotkeys *)func_?(TypeInfo__RTG__MoveGizmoHotkeys);
  if (cRam_? == '\0') {
    ppHStack1 = &TypeInfo__RTG__Hotkeys;
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  ppHStack1 = (Hotkeys__Class **)TypeInfo__RTG__Hotkeys;
  pHVar2 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar2,StringLiteral_Enable_2D_mode,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar2 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar2,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar2->fields)._lShift = 1;
    (this_04->fields)._enable2DMode = pHVar2;
    func_?();
    pHVar2 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar2,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
    if (pHVar2 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar2,KeyCode__Enum_None,(MethodInfo *)0x0);
      (pHVar2->fields)._lCtrl = 1;
      (this_04->fields)._enableSnapping = pHVar2;
      func_?();
      pHVar2 = (Hotkeys *)func_?();
      Hotkeys::Hotkeys__ctor_1
                (pHVar2,StringLiteral_Enable_vertex_snapping,(HotkeysStaticData)0x0,
                 (MethodInfo *)0x0);
      if (pHVar2 != (Hotkeys *)0x0) {
        (pHVar2->fields)._useStrictModifierCheck = 0;
        Hotkeys::Hotkeys_set_Key(pHVar2,KeyCode__Enum_V,(MethodInfo *)0x0);
        (this_04->fields)._enableVertexSnapping = pHVar2;
        func_?();
        Settings::Settings__ctor((Settings *)this_04,(MethodInfo *)0x0);
        (this->fields)._hotkeys = this_04;
        func_?();
        ppHStack1 = (Hotkeys__Class **)TypeInfo__RTG__MoveGizmoSettings2D;
        this_05 = (MoveGizmoSettings2D *)func_?();
        MoveGizmoSettings2D::MoveGizmoSettings2D__ctor(this_05,(MethodInfo *)0x0);
        (this->fields)._settings2D = this_05;
        func_?();
        this_06 = (MoveGizmoSettings3D *)func_?();
        MoveGizmoSettings3D::MoveGizmoSettings3D__ctor(this_06,(MethodInfo *)0x0);
        (this->fields)._settings3D = this_06;
        ppMStack3 = &(this->fields)._settings3D;
        pMStack4 = this_06;
        func_?();
        pMStack5 = TypeInfo__RTG__MoveGizmoLookAndFeel2D;
        this_07 = (MoveGizmoLookAndFeel2D *)func_?();
        MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D__ctor(this_07,(MethodInfo *)0x0);
        (this->fields)._lookAndFeel2D = this_07;
        func_?();
        pMStack6 = TypeInfo__RTG__MoveGizmoLookAndFeel3D;
        this_08 = (MoveGizmoLookAndFeel3D *)func_?();
        MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D__ctor(this_08,(MethodInfo *)0x0);
        (this->fields)._lookAndFeel3D = this_08;
        func_?();
        GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  (this->fields)._sharedLookAndFeel2D = value;
  func_?(&(this->fields)._sharedLookAndFeel2D,value);
  MoveGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedLookAndFeel3D(MoveGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_SharedLookAndFeel3D
               (MoveGizmo *this,MoveGizmoLookAndFeel3D *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel3D = value;
  func_?(&(this->fields)._sharedLookAndFeel3D,value);
  MoveGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings2D(MoveGizmoSettings2D) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_SharedSettings2D
               (MoveGizmo *this,MoveGizmoSettings2D *value,MethodInfo *method)

{
  (this->fields)._sharedSettings2D = value;
  func_?(&(this->fields)._sharedSettings2D,value);
  MoveGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings3D(MoveGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_SharedSettings3D
               (MoveGizmo *this,MoveGizmoSettings3D *value,MethodInfo *method)

{
  (this->fields)._sharedSettings3D = value;
  func_?(&(this->fields)._sharedSettings3D,value);
  MoveGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
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

