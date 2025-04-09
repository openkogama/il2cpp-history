
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
  pMVar1 = (this->fields)._sharedLookAndFeel3D;
  if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
      (pMVar1 = (this->fields)._lookAndFeel3D, pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
     (pGVar2 = (pMVar1->fields)._midCapLookAndFeel, pGVar2 != (GizmoCap3DLookAndFeel *)0x0)) {
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
  pMVar1 = (this->fields)._sharedLookAndFeel3D;
  if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
      (pMVar1 = (this->fields)._lookAndFeel3D, pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
     (pGVar2 = (pMVar1->fields)._midCapLookAndFeel, pGVar2 != (GizmoCap3DLookAndFeel *)0x0)) {
    if ((pGVar2->fields)._useZoomFactor != 0) {
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar3;
    }
    return 1.0;
  }
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
  this_01 = (GizmoCap3D *)func_?(TypeInfo__RTG__GizmoCap3D);
  GizmoCap3D::GizmoCap3D__ctor(this_01,pGVar1,iVar2,(MethodInfo *)0x0);
  ppGVar3 = &(this->fields)._midCap;
  *ppGVar3 = this_01;
  func_?(ppGVar3,this_01);
  if (*ppGVar3 != (GizmoCap3D *)0x0) {
    GizmoCap::GizmoCap_SetHoverable((GizmoCap *)*ppGVar3,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar4 = System.Xml.dll::System::Xml::Schema::Datatype_Name::Datatype_Name_get_TypeCode
                       ((Datatype_Name *)0x0,unaff_retaddr);
    pGVar5 = (GizmoPlaneSlider3D *)func_?();
    GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar5,pGVar1,XVar4,(MethodInfo *)0x0);
    ppGVar6 = &(this->fields)._xySlider;
    *ppGVar6 = pGVar5;
    func_?(ppGVar6,pGVar5);
    pGVar1 = (this->fields)._._gizmo;
    iVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_SizeOf_25((MethodInfo *)0x0);
    pGVar5 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
    GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar5,pGVar1,iVar2,(MethodInfo *)0x0);
    ppGVar6 = &(this->fields)._yzSlider;
    *ppGVar6 = pGVar5;
    func_?();
    pGVar1 = (this->fields)._._gizmo;
    XVar4 = System.Xml.dll::System::Xml::Schema::Datatype_ID::Datatype_ID_get_TypeCode
                       ((Datatype_ID *)0x0,(MethodInfo *)ppGVar6);
    pGVar5 = (GizmoPlaneSlider3D *)func_?();
    GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar5,pGVar1,XVar4,(MethodInfo *)0x0);
    ppGVar6 = &(this->fields)._zxSlider;
    *ppGVar6 = pGVar5;
    func_?();
    pGVar7 = (this->fields)._dblSliders;
    if (pGVar7 != (GizmoPlaneSlider3DCollection *)0x0) {
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                (pGVar7,(this->fields)._xySlider,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._dblSliders;
      if (pGVar7 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                  (pGVar7,(this->fields)._yzSlider,(MethodInfo *)0x0);
        pGVar7 = (this->fields)._dblSliders;
        if (pGVar7 != (GizmoPlaneSlider3DCollection *)0x0) {
          GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                    (pGVar7,*ppGVar6,(MethodInfo *)0x0);
          iVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_SizeOf_23((MethodInfo *)0x0);
          pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::
                             Datatype_hexBinary_get_TypeCode
                                       ((Datatype_hexBinary *)0x0,(MethodInfo *)this);
          pGVar8 = TypeInfo__RTG__GizmoLineSlider3D;
          pGVar9 = (GizmoLineSlider3D *)func_?();
          GizmoLineSlider3D::GizmoLineSlider3D__ctor
                    (pGVar9,pGVar1,iVar2,(int32_t)pGVar1,(MethodInfo *)0x0);
          ppGVar10 = &(this->fields)._pXSlider;
          *ppGVar10 = pGVar9;
          func_?(ppGVar10,pGVar9);
          if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
            GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                      (*ppGVar10,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
            if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                        (*ppGVar10,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
              EVar11 = System.Core.dll::System::Linq::Expressions::MemberExpression::
                       MemberExpression_get_NodeType((MemberExpression *)0x0,(MethodInfo *)pGVar8);
              pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_QName::
                                 Datatype_QName_get_TypeCode
                                           ((Datatype_QName *)0x0,(MethodInfo *)this);
              pGVar8 = TypeInfo__RTG__GizmoLineSlider3D;
              pGVar9 = (GizmoLineSlider3D *)func_?();
              GizmoLineSlider3D::GizmoLineSlider3D__ctor
                        (pGVar9,pGVar1,EVar11,(int32_t)pGVar1,(MethodInfo *)0x0);
              ppGVar10 = &(this->fields)._nXSlider;
              *ppGVar10 = pGVar9;
              func_?(ppGVar10,pGVar9);
              if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
                GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                          (*ppGVar10,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                            (*ppGVar10,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                  XVar4 = System.Xml.dll::System::Xml::Schema::Datatype_yearMonth::
                           Datatype_yearMonth_get_TypeCode
                                     ((Datatype_yearMonth *)0x0,(MethodInfo *)pGVar8);
                  pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
                                     Datatype_base64Binary_get_TypeCode
                                               ((Datatype_base64Binary *)0x0,(MethodInfo *)this);
                  pGVar9 = (GizmoLineSlider3D *)func_?();
                  GizmoLineSlider3D::GizmoLineSlider3D__ctor
                            (pGVar9,pGVar1,XVar4,(int32_t)pGVar1,(MethodInfo *)0x0);
                  ppGVar10 = &(this->fields)._pYSlider;
                  *ppGVar10 = pGVar9;
                  func_?(ppGVar10,pGVar9);
                  if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                              (*ppGVar10,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                    if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
                      GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                (*ppGVar10,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                      iVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                               UnsafeUtility::UnsafeUtility_SizeOf_11((MethodInfo *)0x0);
                      pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::
                                         Datatype_NOTATION_get_TypeCode
                                                   ((Datatype_NOTATION *)0x0,(MethodInfo *)this);
                      pGVar8 = TypeInfo__RTG__GizmoLineSlider3D;
                      pGVar9 = (GizmoLineSlider3D *)func_?();
                      GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                (pGVar9,pGVar1,iVar2,(int32_t)pGVar1,(MethodInfo *)0x0);
                      ppGVar10 = &(this->fields)._nYSlider;
                      *ppGVar10 = pGVar9;
                      func_?(ppGVar10,pGVar9);
                      if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
                        GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                  (*ppGVar10,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                        if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                    (*ppGVar10,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                          XVar4 = System.Xml.dll::System::Xml::Schema::Datatype_year::
                                   Datatype_year_get_TypeCode
                                             ((Datatype_year *)0x0,(MethodInfo *)pGVar8);
                          pGVar1 = (Gizmo *)UnityEngine.CoreModule.dll::Unity::Collections::
                                             LowLevel::Unsafe::UnsafeUtility::
                                             UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
                          pGVar8 = TypeInfo__RTG__GizmoLineSlider3D;
                          pGVar9 = (GizmoLineSlider3D *)func_?();
                          GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                    (pGVar9,pGVar1,XVar4,(int32_t)pGVar1,(MethodInfo *)0x0);
                          ppGVar10 = &(this->fields)._pZSlider;
                          *ppGVar10 = pGVar9;
                          func_?(ppGVar10,pGVar9);
                          if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
                            GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                      (*ppGVar10,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                            if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
                              GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                        (*ppGVar10,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                              XVar4 = System.Xml.dll::System::Xml::Schema::Datatype_month::
                                       Datatype_month_get_TypeCode
                                                 ((Datatype_month *)0x0,(MethodInfo *)pGVar8);
                              capHandleId = System.Xml.dll::System::Xml::Schema::
                                            Datatype_normalizedStringV1Compat::
                                            Datatype_normalizedStringV1Compat_get_TypeCode
                                                      ((Datatype_normalizedStringV1Compat *)0x0,
                                                       (MethodInfo *)pGVar8);
                              pGVar9 = (GizmoLineSlider3D *)
                                        func_?(TypeInfo__RTG__GizmoLineSlider3D);
                              GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                        (pGVar9,(Gizmo *)0x0,XVar4,capHandleId,(MethodInfo *)0x0);
                              ppGVar10 = &(this->fields)._nZSlider;
                              *ppGVar10 = pGVar9;
                              func_?(ppGVar10,pGVar9);
                              if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                          (*ppGVar10,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0)
                                ;
                                if (*ppGVar10 != (GizmoLineSlider3D *)0x0) {
                                  GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                            (*ppGVar10,2,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                                  pGVar12 = (this->fields)._axesSliders;
                                  if (pGVar12 != (GizmoLineSlider3DCollection *)0x0) {
                                    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                              (pGVar12,(this->fields)._pXSlider,(MethodInfo *)0x0);
                                    pGVar12 = (this->fields)._axesSliders;
                                    if (pGVar12 != (GizmoLineSlider3DCollection *)0x0) {
                                      GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                (pGVar12,(this->fields)._pYSlider,(MethodInfo *)0x0)
                                      ;
                                      pGVar12 = (this->fields)._axesSliders;
                                      if (pGVar12 != (GizmoLineSlider3DCollection *)0x0) {
                                        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                  (pGVar12,(this->fields)._pZSlider,
                                                   (MethodInfo *)0x0);
                                        pGVar12 = (this->fields)._axesSliders;
                                        if (pGVar12 != (GizmoLineSlider3DCollection *)0x0) {
                                          GizmoLineSlider3DCollection::
                                          GizmoLineSlider3DCollection_Add
                                                    (pGVar12,(this->fields)._nXSlider,
                                                     (MethodInfo *)0x0);
                                          pGVar12 = (this->fields)._axesSliders;
                                          if (pGVar12 != (GizmoLineSlider3DCollection *)0x0) {
                                            GizmoLineSlider3DCollection::
                                            GizmoLineSlider3DCollection_Add
                                                      (pGVar12,(this->fields)._nYSlider,
                                                       (MethodInfo *)0x0);
                                            pGVar12 = (this->fields)._axesSliders;
                                            if (pGVar12 != (GizmoLineSlider3DCollection *)0x0) {
                                              GizmoLineSlider3DCollection::
                                              GizmoLineSlider3DCollection_Add
                                                        (pGVar12,*ppGVar10,(MethodInfo *)0x0);
                                              pGVar5 = (this->fields)._xySlider;
                                              if (((pGVar5 != (GizmoPlaneSlider3D *)0x0) &&
                                                  (pGVar13 = (pGVar5->fields)._._handle,
                                                  pGVar13 != (GizmoHandle *)0x0)) &&
                                                 (pGVar12 = (this->fields)._axesSliders,
                                                 pGVar12 != (GizmoLineSlider3DCollection *)0x0)) {
                                                GizmoLineSlider3DCollection::
                                                GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                          (pGVar12,(pGVar13->fields).
                                                                   _hoverPriority3D,
                                                           (MethodInfo *)0x0);
                                                pGVar5 = (this->fields)._yzSlider;
                                                if (((pGVar5 != (GizmoPlaneSlider3D *)0x0) &&
                                                    (pGVar13 = (pGVar5->fields)._._handle,
                                                    pGVar13 != (GizmoHandle *)0x0)) &&
                                                   (pGVar12 = (this->fields)._axesSliders,
                                                   pGVar12 != (GizmoLineSlider3DCollection *)0x0)) {
                                                  GizmoLineSlider3DCollection::
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar12,(pGVar13->fields).
                                                                     _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar5 = (this->fields)._zxSlider;
                                                  if (((pGVar5 != (GizmoPlaneSlider3D *)0x0) &&
                                                      (pGVar13 = (pGVar5->fields)._._handle,
                                                      pGVar13 != (GizmoHandle *)0x0)) &&
                                                     (pGVar12 = (this->fields)._axesSliders,
                                                     pGVar12 != (GizmoLineSlider3DCollection *)0x0))
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar12,(pGVar13->fields).
                                                                     _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = (this->fields)._._gizmo;
                                                  iVar2 = GizmoHandleId::GizmoHandleId_get_VertSnap
                                                                     ((MethodInfo *)0x0);
                                                  this_02 = (GizmoCap2D *)
                                                            func_?(
                                                  TypeInfo__RTG__GizmoCap2D);
                                                  GizmoCap2D::GizmoCap2D__ctor
                                                            (this_02,pGVar1,iVar2,
                                                             (MethodInfo *)0x0);
                                                  ppGVar14 = &(this->fields)._vertSnapCap;
                                                  *ppGVar14 = this_02;
                                                  func_?(ppGVar14,this_02);
                                                  if (*ppGVar14 != (GizmoCap2D *)0x0) {
                                                    GizmoCap::GizmoCap_SetVisible
                                                              ((GizmoCap *)*ppGVar14,0,
                                                               (MethodInfo *)0x0);
                                                    if ((GizmoCap3D *)*ppGVar14 != (GizmoCap3D *)0x0)
                                                    {
                                                      GizmoCap3D::GizmoCap3D_set_DragSession
                                                                ((GizmoCap3D *)*ppGVar14,
                                                                 (IGizmoDragSession *)
                                                                 (this->fields)._vertexSnapDrag,
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
                                                        EVar11 = System.Core.dll::System::Linq::
                                                                 Expressions::AssignBinaryExpression
                                                                 ::
                                                  AssignBinaryExpression_get_NodeType
                                                            ((AssignBinaryExpression *)0x0,
                                                             (MethodInfo *)pGVar8);
                                                  method_00 = TypeInfo__RTG__GizmoPlaneSlider2D;
                                                  pGVar15 = (GizmoPlaneSlider2D *)func_?();
                                                  GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                                            (pGVar15,pGVar1,EVar11,
                                                             (MethodInfo *)0x0);
                                                  ppGVar16 = &(this->fields)._2DModeDblSlider;
                                                  *ppGVar16 = pGVar15;
                                                  func_?(ppGVar16,pGVar15);
                                                  if (*ppGVar16 != (GizmoPlaneSlider2D *)0x0) {
                                                    GizmoPlaneSlider2D::
                                                    GizmoPlaneSlider2D_SetDragChannel
                                                              (*ppGVar16,
                                                  GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                                  pGVar15 = *ppGVar16;
                                                  if (pGVar15 != (GizmoPlaneSlider2D *)0x0) {
                                                    pGVar17 = pGVar15->klass;
                                                    (pGVar15->fields)._._isVisible = 0;
                                                    pMVar18 = (MethodInfo *)
                                                              (pGVar17->vtable).
                                                              OnHoverableStateChanged.methodPtr;
                                                    (*(code *)(pGVar17->vtable).
                                                              OnVisibilityStateChanged.method)
                                                              (pGVar15);
                                                    EVar11 = System.Core.dll::System::Linq::
                                                             Expressions::ParameterExpression::
                                                             ParameterExpression_get_NodeType
                                                                       ((ParameterExpression *)0x0,
                                                                        (MethodInfo *)
                                                                        (this->fields)._._gizmo);
                                                    XVar4 = System.Xml.dll::System::Xml::Schema::
                                                             Datatype_negativeInteger::
                                                             Datatype_negativeInteger_get_TypeCode
                                                                       ((Datatype_negativeInteger *)
                                                                        0x0,pMVar18);
                                                    pGVar19 = (GizmoLineSlider2D *)
                                                              func_?(
                                                  TypeInfo__RTG__GizmoLineSlider2D);
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar19,(Gizmo *)0x0,EVar11,XVar4,
                                                             (MethodInfo *)0x0);
                                                  ppGVar20 = &(this->fields)._p2DModeXSlider;
                                                  *ppGVar20 = pGVar19;
                                                  func_?(ppGVar20,pGVar19);
                                                  if (*ppGVar20 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (*ppGVar20,
                                                  GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                                  if (*ppGVar20 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_MapDirection
                                                              (*ppGVar20,0,AxisSign__Enum_Positive,
                                                               (MethodInfo *)0x0);
                                                    if ((((*ppGVar20 != (GizmoLineSlider2D *)0x0) &&
                                                         (pGVar13 = ((*ppGVar20)->fields)._._handle,
                                                         pGVar13 != (GizmoHandle *)0x0)) &&
                                                        (pGVar15 = (this->fields)._2DModeDblSlider,
                                                        pGVar15 != (GizmoPlaneSlider2D *)0x0)) &&
                                                       ((pGVar21 = (pGVar15->fields)._._handle,
                                                        pGVar21 != (GizmoHandle *)0x0 &&
                                                        (pPVar22 = (pGVar13->fields).
                                                                   _hoverPriority2D,
                                                        pPVar22 != (Priority *)0x0)))) {
                                                      Priority::Priority_MakeLowerThan
                                                                (pPVar22,(pGVar21->fields).
                                                                         _hoverPriority2D,
                                                                 (MethodInfo *)0x0);
                                                      pGVar1 = (Gizmo *)System.Xml.dll::System::Xml
                                                                         ::Schema::Datatype_ENTITY::
                                                                                                                                                  
                                                  Datatype_ENTITY_get_TypeCode
                                                            ((Datatype_ENTITY *)0x0,
                                                             (MethodInfo *)method_00);
                                                  XVar4 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_long::Datatype_long_get_TypeCode
                                                                     ((Datatype_long *)0x0,
                                                                      (MethodInfo *)this);
                                                  pGVar23 = TypeInfo__RTG__GizmoLineSlider2D;
                                                  this_03 = (Il2CppRGCTXData *)func_?();
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            ((GizmoLineSlider2D *)this_03,pGVar1,
                                                             (int32_t)pGVar1,XVar4,
                                                             (MethodInfo *)0x0);
                                                  ppIVar24 = &pGVar23->rgctx_data;
                                                  *ppIVar24 = this_03;
                                                  func_?(ppIVar24);
                                                  if (*ppIVar24 != (Il2CppRGCTXData *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              ((GizmoLineSlider2D *)*ppIVar24,
                                                               GizmoDragChannel__Enum_Offset,
                                                               (MethodInfo *)0x0);
                                                    if (*ppIVar24 != (Il2CppRGCTXData *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                ((GizmoLineSlider2D *)*ppIVar24,1,
                                                                 AxisSign__Enum_Positive,
                                                                 (MethodInfo *)0x0);
                                                      if (((*ppIVar24 != (Il2CppRGCTXData *)0x0) &&
                                                          (pMVar18 = (*ppIVar24)[2].method,
                                                          pMVar18 != (MethodInfo *)0x0)) &&
                                                         ((uVar25 = (pGVar23->_1).cctor_started,
                                                          uVar25 != 0 &&
                                                          ((iVar26 = *(int *)(uVar25 + 8),
                                                           iVar26 != 0 &&
                                                           (pPVar22 = (Priority *)
                                                                      (pMVar18->field7_0x1c).
                                                                      methodMetadataHandle,
                                                           pPVar22 != (Priority *)0x0)))))) {
                                                        Priority::Priority_MakeLowerThan
                                                                  (pPVar22,*(Priority **)
                                                                            (iVar26 + 0x1c),
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (Gizmo *)
                                                  UnityEngine.CoreModule.dll::Unity::Collections::
                                                  LowLevel::Unsafe::UnsafeUtility::
                                                  UnsafeUtility_SizeOf((MethodInfo *)0x0);
                                                  XVar4 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_int::Datatype_int_get_TypeCode
                                                                     ((Datatype_int *)0x0,
                                                                      (MethodInfo *)pGVar23);
                                                  pGVar23 = TypeInfo__RTG__GizmoLineSlider2D;
                                                  pGVar19 = (GizmoLineSlider2D *)func_?();
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar19,pGVar1,(int32_t)pGVar1,XVar4
                                                             ,(MethodInfo *)0x0);
                                                  pIVar27 = &pGVar23->_1;
                                                  pIVar27->typeHierarchy = (Il2CppClass **)pGVar19;
                                                  func_?(pIVar27);
                                                  if ((GizmoLineSlider2D *)pIVar27->typeHierarchy !=
                                                      (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              ((GizmoLineSlider2D *)
                                                               pIVar27->typeHierarchy,
                                                               GizmoDragChannel__Enum_Offset,
                                                               (MethodInfo *)0x0);
                                                    if ((GizmoLineSlider2D *)pIVar27->typeHierarchy
                                                        != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                ((GizmoLineSlider2D *)
                                                                 pIVar27->typeHierarchy,0,
                                                                 AxisSign__Enum_Negative,
                                                                 (MethodInfo *)0x0);
                                                      if ((((pIVar27->typeHierarchy !=
                                                             (Il2CppClass **)0x0) &&
                                                           (pIVar28 = pIVar27->typeHierarchy[2],
                                                           pIVar28 != (Il2CppClass *)0x0)) &&
                                                          (uVar25 = (pGVar23->_1).cctor_started,
                                                          uVar25 != 0)) &&
                                                         ((iVar26 = *(int *)(uVar25 + 8),
                                                          iVar26 != 0 &&
                                                          (pPVar22 = *(Priority **)
                                                                      &(pIVar28->this_arg).attrs,
                                                          pPVar22 != (Priority *)0x0)))) {
                                                        Priority::Priority_MakeLowerThan
                                                                  (pPVar22,*(Priority **)
                                                                            (iVar26 + 0x1c),
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (Gizmo *)System.Xml.dll::System::
                                                                           Xml::Schema::
                                                                                                                                                      
                                                  Datatype_nonPositiveInteger::
                                                  Datatype_nonPositiveInteger_get_TypeCode
                                                            ((Datatype_nonPositiveInteger *)0x0,
                                                             (MethodInfo *)pGVar19);
                                                  XVar4 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_short::
                                                           Datatype_short_get_TypeCode
                                                                     ((Datatype_short *)0x0,
                                                                      (MethodInfo *)pGVar23);
                                                  pGVar23 = TypeInfo__RTG__GizmoLineSlider2D;
                                                  pGVar19 = (GizmoLineSlider2D *)func_?();
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar19,pGVar1,(int32_t)pGVar1,XVar4
                                                             ,(MethodInfo *)0x0);
                                                  ppvVar29 = &(pGVar23->_1).unity_user_data;
                                                  *ppvVar29 = pGVar19;
                                                  func_?(ppvVar29);
                                                  if (*ppvVar29 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (*ppvVar29,
                                                  GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                                  if (*ppvVar29 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_MapDirection
                                                              (*ppvVar29,1,AxisSign__Enum_Negative,
                                                               (MethodInfo *)0x0);
                                                    if (((*ppvVar29 != (void *)0x0) &&
                                                        (iVar26 = *(int *)((int)*ppvVar29 + 8),
                                                        iVar26 != 0)) &&
                                                       ((uVar25 = (pGVar23->_1).cctor_started,
                                                        uVar25 != 0 &&
                                                        ((iVar30 = *(int *)(uVar25 + 8), iVar30 != 0
                                                         && (pPVar22 = *(Priority **)(iVar26 + 0x1c)
                                                            , pPVar22 != (Priority *)0x0)))))) {
                                                      Priority::Priority_MakeLowerThan
                                                                (pPVar22,*(Priority **)
                                                                          (iVar30 + 0x1c),
                                                                 (MethodInfo *)0x0);
                                                      pGVar31 = (GizmoLineSlider2DCollection *)
                                                                (pGVar23->_1).
                                                                initializationExceptionGCHandle;
                                                      if (pGVar31 !=
                                                          (GizmoLineSlider2DCollection *)0x0) {
                                                        GizmoLineSlider2DCollection::
                                                        GizmoLineSlider2DCollection_Add
                                                                  (pGVar31,(GizmoLineSlider2D *)
                                                                           pGVar23->static_fields,
                                                                   (MethodInfo *)0x0);
                                                        pGVar31 = (GizmoLineSlider2DCollection *)
                                                                  (pGVar23->_1).
                                                                  initializationExceptionGCHandle;
                                                        if (pGVar31 !=
                                                            (GizmoLineSlider2DCollection *)0x0) {
                                                          GizmoLineSlider2DCollection::
                                                          GizmoLineSlider2DCollection_Add
                                                                    (pGVar31,(GizmoLineSlider2D *)
                                                                             pGVar23->rgctx_data,
                                                                     (MethodInfo *)0x0);
                                                          pGVar31 = (GizmoLineSlider2DCollection *)
                                                                    (pGVar23->_1).
                                                                    initializationExceptionGCHandle;
                                                          if (pGVar31 !=
                                                              (GizmoLineSlider2DCollection *)0x0) {
                                                            GizmoLineSlider2DCollection::
                                                            GizmoLineSlider2DCollection_Add
                                                                      (pGVar31,(GizmoLineSlider2D *)
                                                                               (pGVar23->_1).
                                                                               typeHierarchy,
                                                                       (MethodInfo *)0x0);
                                                            pGVar31 = (GizmoLineSlider2DCollection *
                                                                      )(pGVar23->_1).
                                                                                                                                              
                                                  initializationExceptionGCHandle;
                                                  if (pGVar31 != (GizmoLineSlider2DCollection *)0x0)
                                                  {
                                                    GizmoLineSlider2DCollection::
                                                    GizmoLineSlider2DCollection_Add
                                                              (pGVar31,*ppvVar29,(MethodInfo *)0x0);
                                                    MoveGizmo_Hide2DModeHandles
                                                              ((MoveGizmo *)pGVar23,
                                                               (MethodInfo *)0x0);
                                                    MoveGizmo_SetupSharedLookAndFeel
                                                              ((MoveGizmo *)pGVar23,
                                                               (MethodInfo *)0x0);
                                                    MoveGizmo_SetupSharedSettings
                                                              ((MoveGizmo *)pGVar23,
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
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
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
      GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar6,camera,(MethodInfo *)0x0);
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
    pMVar1 = (this->fields)._sharedLookAndFeel3D;
    pGVar2 = (this->fields)._midCap;
    if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
        (pMVar1 = (this->fields)._lookAndFeel3D, pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
       (pGVar2 != (GizmoCap3D *)0x0)) {
      GizmoCap::GizmoCap_SetVisible
                ((GizmoCap *)pGVar2,(pMVar1->fields)._isMidCapVisible,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
code_?:
    if ((this->fields)._useSnapEnableHotkey == 0) {
code_?:
      if ((this->fields)._use2DModeEnableHotkey != 0) {
        pMVar3 = (this->fields)._sharedHotkeys;
        if (((pMVar3 == (MoveGizmoHotkeys *)0x0) &&
            (pMVar3 = (this->fields)._hotkeys, pMVar3 == (MoveGizmoHotkeys *)0x0)) ||
           (pHVar4 = (pMVar3->fields)._enable2DMode, pHVar4 == (Hotkeys *)0x0))
        goto code_?;
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
          pMVar1 = (this->fields)._sharedLookAndFeel3D;
          pGVar10 = (this->fields)._pXSlider;
          if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
              (pMVar1 = (this->fields)._lookAndFeel3D, pMVar1 != (MoveGizmoLookAndFeel3D *)0x0))
             && (pBVar11 = (pMVar1->fields)._sglSliderVis, pBVar11 != (Boolean__Array *)0x0)) {
            if (pBVar11->max_length == 0) goto code_?;
            if (pGVar10 != (GizmoLineSlider3D *)0x0) {
              (pGVar10->fields)._._isVisible = pBVar11->vector[0] != 0;
              (*(code *)(pGVar10->klass->vtable).OnVisibilityStateChanged.method)(pGVar10);
              pMVar1 = (this->fields)._sharedLookAndFeel3D;
              pGVar10 = (this->fields)._pXSlider;
              if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                  (pMVar1 = (this->fields)._lookAndFeel3D, pMVar1 != (MoveGizmoLookAndFeel3D *)0x0
                  )) && (pBVar11 = (pMVar1->fields)._sglSliderCapVis,
                        pBVar11 != (Boolean__Array *)0x0)) {
                if (pBVar11->max_length == 0) goto code_?;
                if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                            (pGVar10,pBVar11->vector[0] != 0,(MethodInfo *)0x0);
                  pMVar1 = (this->fields)._sharedLookAndFeel3D;
                  pGVar10 = (this->fields)._pYSlider;
                  if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                      (pMVar1 = (this->fields)._lookAndFeel3D,
                      pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                     (pBVar11 = (pMVar1->fields)._sglSliderVis, pBVar11 != (Boolean__Array *)0x0)) {
                    if (pBVar11->max_length < 2) goto code_?;
                    if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                      (pGVar10->fields)._._isVisible = pBVar11->vector[1] != 0;
                      (*(code *)(pGVar10->klass->vtable).OnVisibilityStateChanged.method)(pGVar10);
                      pMVar1 = (this->fields)._sharedLookAndFeel3D;
                      pGVar10 = (this->fields)._pYSlider;
                      if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                          (pMVar1 = (this->fields)._lookAndFeel3D,
                          pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                         (pBVar11 = (pMVar1->fields)._sglSliderCapVis,
                         pBVar11 != (Boolean__Array *)0x0)) {
                        if (pBVar11->max_length < 2) goto code_?;
                        if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                    (pGVar10,pBVar11->vector[1] != 0,(MethodInfo *)0x0);
                          pMVar1 = (this->fields)._sharedLookAndFeel3D;
                          pGVar10 = (this->fields)._pZSlider;
                          if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                              (pMVar1 = (this->fields)._lookAndFeel3D,
                              pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                             (pBVar11 = (pMVar1->fields)._sglSliderVis,
                             pBVar11 != (Boolean__Array *)0x0)) {
                            if (pBVar11->max_length < 3) goto code_?;
                            if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                              (pGVar10->fields)._._isVisible = pBVar11->vector[2] != 0;
                              (*(code *)(pGVar10->klass->vtable).OnVisibilityStateChanged.method)
                                        (pGVar10);
                              pMVar1 = (this->fields)._sharedLookAndFeel3D;
                              pGVar10 = (this->fields)._pZSlider;
                              if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                                  (pMVar1 = (this->fields)._lookAndFeel3D,
                                  pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                                 (pBVar11 = (pMVar1->fields)._sglSliderCapVis,
                                 pBVar11 != (Boolean__Array *)0x0)) {
                                if (pBVar11->max_length < 3) goto code_?;
                                if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                  GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                            (pGVar10,pBVar11->vector[2] != 0,(MethodInfo *)0x0);
                                  pMVar1 = (this->fields)._sharedLookAndFeel3D;
                                  pGVar10 = (this->fields)._nXSlider;
                                  if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                                      (pMVar1 = (this->fields)._lookAndFeel3D,
                                      pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                                     (pBVar11 = (pMVar1->fields)._sglSliderVis,
                                     pBVar11 != (Boolean__Array *)0x0)) {
                                    if (pBVar11->max_length < 4) goto code_?;
                                    if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                      (pGVar10->fields)._._isVisible = pBVar11->vector[3] != 0;
                                      (*(code *)(pGVar10->klass->vtable).OnVisibilityStateChanged.
                                                method)(pGVar10);
                                      pMVar1 = (this->fields)._sharedLookAndFeel3D;
                                      pGVar10 = (this->fields)._nXSlider;
                                      if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                                          (pMVar1 = (this->fields)._lookAndFeel3D,
                                          pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                                         (pBVar11 = (pMVar1->fields)._sglSliderCapVis,
                                         pBVar11 != (Boolean__Array *)0x0)) {
                                        if (pBVar11->max_length < 4) goto code_?;
                                        if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                          GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                                    (pGVar10,pBVar11->vector[3] != 0,(MethodInfo *)0x0
                                                    );
                                          pMVar1 = (this->fields)._sharedLookAndFeel3D;
                                          pGVar10 = (this->fields)._nYSlider;
                                          if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                                              (pMVar1 = (this->fields)._lookAndFeel3D,
                                              pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                                             (pBVar11 = (pMVar1->fields)._sglSliderVis,
                                             pBVar11 != (Boolean__Array *)0x0)) {
                                            if (pBVar11->max_length < 5) goto code_?;
                                            if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                              (pGVar10->fields)._._isVisible = pBVar11->vector[4] != 0
                                              ;
                                              (*(code *)(pGVar10->klass->vtable).
                                                        OnVisibilityStateChanged.method)(pGVar10);
                                              pMVar1 = (this->fields)._sharedLookAndFeel3D;
                                              pGVar10 = (this->fields)._nYSlider;
                                              if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                                                  (pMVar1 = (this->fields)._lookAndFeel3D,
                                                  pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                                                 (pBVar11 = (pMVar1->fields)._sglSliderCapVis,
                                                 pBVar11 != (Boolean__Array *)0x0)) {
                                                if (pBVar11->max_length < 5) goto code_?;
                                                if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                                  GizmoLineSlider3D::
                                                  GizmoLineSlider3D_Set3DCapVisible
                                                            (pGVar10,pBVar11->vector[4] != 0,
                                                             (MethodInfo *)0x0);
                                                  pMVar1 = (this->fields)._sharedLookAndFeel3D;
                                                  pGVar10 = (this->fields)._nZSlider;
                                                  if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                                                      (pMVar1 = (this->fields)._lookAndFeel3D,
                                                      pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                                                     (pBVar11 = (pMVar1->fields)._sglSliderVis,
                                                     pBVar11 != (Boolean__Array *)0x0)) {
                                                    if (pBVar11->max_length < 6)
                                                    goto code_?;
                                                    if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                                      (pGVar10->fields)._._isVisible =
                                                           pBVar11->vector[5] != 0;
                                                      (*(code *)(pGVar10->klass->vtable).
                                                                OnVisibilityStateChanged.method)
                                                                (pGVar10);
                                                      pMVar1 = (this->fields)._sharedLookAndFeel3D;
                                                      pGVar10 = (this->fields)._nZSlider;
                                                      if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0
                                                           ) || (pMVar1 = (this->fields).
                                                                           _lookAndFeel3D,
                                                                pMVar1 !=
                                                                (MoveGizmoLookAndFeel3D *)0x0)) &&
                                                         (pBVar11 = (pMVar1->fields).
                                                                   _sglSliderCapVis,
                                                         pBVar11 != (Boolean__Array *)0x0)) {
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
          pMVar3 = (this->fields)._sharedHotkeys;
          if (((pMVar3 != (MoveGizmoHotkeys *)0x0) ||
              (pMVar3 = (this->fields)._hotkeys, pMVar3 != (MoveGizmoHotkeys *)0x0)) &&
             (pHVar4 = (pMVar3->fields)._enableVertexSnapping, pHVar4 != (Hotkeys *)0x0)) {
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
                pGVar2 = (this->fields)._midCap;
                if (pGVar2 != (GizmoCap3D *)0x0) {
                  GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar2,0,(MethodInfo *)0x0);
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
            pMVar1 = (this->fields)._sharedLookAndFeel3D;
            pGVar15 = (this->fields)._xySlider;
            if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                (pMVar1 = (this->fields)._lookAndFeel3D, pMVar1 != (MoveGizmoLookAndFeel3D *)0x0))
               && (pBVar11 = (pMVar1->fields)._dblSliderVis, pBVar11 != (Boolean__Array *)0x0)) {
              if (pBVar11->max_length == 0) goto code_?;
              if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                (pGVar15->fields)._._isVisible = pBVar11->vector[0] != 0;
                (*(code *)(pGVar15->klass->vtable).OnVisibilityStateChanged.method)(pGVar15);
                pGVar15 = (this->fields)._xySlider;
                if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                  GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                            (pGVar15,(pGVar15->fields)._._isVisible,(MethodInfo *)0x0);
                  pMVar1 = (this->fields)._sharedLookAndFeel3D;
                  pGVar15 = (this->fields)._yzSlider;
                  if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                      (pMVar1 = (this->fields)._lookAndFeel3D,
                      pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                     (pBVar11 = (pMVar1->fields)._dblSliderVis, pBVar11 != (Boolean__Array *)0x0)) {
                    if (pBVar11->max_length < 2) goto code_?;
                    if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                      (pGVar15->fields)._._isVisible = pBVar11->vector[1] != 0;
                      (*(code *)(pGVar15->klass->vtable).OnVisibilityStateChanged.method)(pGVar15);
                      pGVar15 = (this->fields)._yzSlider;
                      if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                        GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                  (pGVar15,(pGVar15->fields)._._isVisible,(MethodInfo *)0x0);
                        pMVar1 = (this->fields)._sharedLookAndFeel3D;
                        pGVar15 = (this->fields)._zxSlider;
                        if (((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                            (pMVar1 = (this->fields)._lookAndFeel3D,
                            pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) &&
                           (pBVar11 = (pMVar1->fields)._dblSliderVis,
                           pBVar11 != (Boolean__Array *)0x0)) {
                          if (pBVar11->max_length < 3) goto code_?;
                          if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                            (pGVar15->fields)._._isVisible = pBVar11->vector[2] != 0;
                            (*(code *)(pGVar15->klass->vtable).OnVisibilityStateChanged.method)
                                      (pGVar15);
                            pGVar15 = (this->fields)._zxSlider;
                            if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                              GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                        (pGVar15,(pGVar15->fields)._._isVisible,(MethodInfo *)0x0);
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
            if ((this->fields)._is2DModeEnabled == 0) {
              return;
            }
            pMVar16 = (this->fields)._sharedLookAndFeel2D;
            pGVar17 = (this->fields)._p2DModeXSlider;
            if (((pMVar16 != (MoveGizmoLookAndFeel2D *)0x0) ||
                (pMVar16 = (this->fields)._lookAndFeel2D, pMVar16 != (MoveGizmoLookAndFeel2D *)0x0))
               && (pBVar11 = (pMVar16->fields)._sglSliderVis, pBVar11 != (Boolean__Array *)0x0)) {
              if (pBVar11->max_length == 0) goto code_?;
              if (pGVar17 != (GizmoLineSlider2D *)0x0) {
                (pGVar17->fields)._._isVisible = pBVar11->vector[0] != 0;
                (*(code *)(pGVar17->klass->vtable).OnVisibilityStateChanged.method)(pGVar17);
                pMVar16 = (this->fields)._sharedLookAndFeel2D;
                pGVar17 = (this->fields)._p2DModeXSlider;
                if (((pMVar16 != (MoveGizmoLookAndFeel2D *)0x0) ||
                    (pMVar16 = (this->fields)._lookAndFeel2D,
                    pMVar16 != (MoveGizmoLookAndFeel2D *)0x0)) &&
                   (pBVar11 = (pMVar16->fields)._sglSliderCapVis, pBVar11 != (Boolean__Array *)0x0)) {
                  if (pBVar11->max_length == 0) goto code_?;
                  if (pGVar17 != (GizmoLineSlider2D *)0x0) {
                    GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                              (pGVar17,pBVar11->vector[0] != 0,(MethodInfo *)0x0);
                    pMVar16 = (this->fields)._sharedLookAndFeel2D;
                    pGVar17 = (this->fields)._p2DModeYSlider;
                    if (((pMVar16 != (MoveGizmoLookAndFeel2D *)0x0) ||
                        (pMVar16 = (this->fields)._lookAndFeel2D,
                        pMVar16 != (MoveGizmoLookAndFeel2D *)0x0)) &&
                       (pBVar11 = (pMVar16->fields)._sglSliderVis, pBVar11 != (Boolean__Array *)0x0))
                    {
                      if (pBVar11->max_length < 2) goto code_?;
                      if (pGVar17 != (GizmoLineSlider2D *)0x0) {
                        (pGVar17->fields)._._isVisible = pBVar11->vector[1] != 0;
                        (*(code *)(pGVar17->klass->vtable).OnVisibilityStateChanged.method)(pGVar17)
                        ;
                        pMVar16 = (this->fields)._sharedLookAndFeel2D;
                        pGVar17 = (this->fields)._p2DModeYSlider;
                        if (((pMVar16 != (MoveGizmoLookAndFeel2D *)0x0) ||
                            (pMVar16 = (this->fields)._lookAndFeel2D,
                            pMVar16 != (MoveGizmoLookAndFeel2D *)0x0)) &&
                           (pBVar11 = (pMVar16->fields)._sglSliderCapVis,
                           pBVar11 != (Boolean__Array *)0x0)) {
                          if (pBVar11->max_length < 2) goto code_?;
                          if (pGVar17 != (GizmoLineSlider2D *)0x0) {
                            GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                      (pGVar17,pBVar11->vector[1] != 0,(MethodInfo *)0x0);
                            pMVar16 = (this->fields)._sharedLookAndFeel2D;
                            pGVar17 = (this->fields)._n2DModeXSlider;
                            if (((pMVar16 != (MoveGizmoLookAndFeel2D *)0x0) ||
                                (pMVar16 = (this->fields)._lookAndFeel2D,
                                pMVar16 != (MoveGizmoLookAndFeel2D *)0x0)) &&
                               (pBVar11 = (pMVar16->fields)._sglSliderVis,
                               pBVar11 != (Boolean__Array *)0x0)) {
                              if (pBVar11->max_length < 3) goto code_?;
                              if (pGVar17 != (GizmoLineSlider2D *)0x0) {
                                (pGVar17->fields)._._isVisible = pBVar11->vector[2] != 0;
                                (*(code *)(pGVar17->klass->vtable).OnVisibilityStateChanged.method)
                                          (pGVar17);
                                pMVar16 = (this->fields)._sharedLookAndFeel2D;
                                pGVar17 = (this->fields)._n2DModeXSlider;
                                if (((pMVar16 != (MoveGizmoLookAndFeel2D *)0x0) ||
                                    (pMVar16 = (this->fields)._lookAndFeel2D,
                                    pMVar16 != (MoveGizmoLookAndFeel2D *)0x0)) &&
                                   (pBVar11 = (pMVar16->fields)._sglSliderCapVis,
                                   pBVar11 != (Boolean__Array *)0x0)) {
                                  if (pBVar11->max_length < 3) goto code_?;
                                  if (pGVar17 != (GizmoLineSlider2D *)0x0) {
                                    GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                              (pGVar17,pBVar11->vector[2] != 0,(MethodInfo *)0x0);
                                    pMVar16 = (this->fields)._sharedLookAndFeel2D;
                                    pGVar17 = (this->fields)._n2DModeYSlider;
                                    if (((pMVar16 != (MoveGizmoLookAndFeel2D *)0x0) ||
                                        (pMVar16 = (this->fields)._lookAndFeel2D,
                                        pMVar16 != (MoveGizmoLookAndFeel2D *)0x0)) &&
                                       (pBVar11 = (pMVar16->fields)._sglSliderVis,
                                       pBVar11 != (Boolean__Array *)0x0)) {
                                      if (pBVar11->max_length < 4) goto code_?;
                                      if (pGVar17 != (GizmoLineSlider2D *)0x0) {
                                        (pGVar17->fields)._._isVisible = pBVar11->vector[3] != 0;
                                        (*(code *)(pGVar17->klass->vtable).OnVisibilityStateChanged.
                                                  method)(pGVar17);
                                        pMVar16 = (this->fields)._sharedLookAndFeel2D;
                                        pGVar17 = (this->fields)._n2DModeYSlider;
                                        if (((pMVar16 != (MoveGizmoLookAndFeel2D *)0x0) ||
                                            (pMVar16 = (this->fields)._lookAndFeel2D,
                                            pMVar16 != (MoveGizmoLookAndFeel2D *)0x0)) &&
                                           (pBVar11 = (pMVar16->fields)._sglSliderCapVis,
                                           pBVar11 != (Boolean__Array *)0x0)) {
                                          if (pBVar11->max_length < 4) goto code_?;
                                          if (pGVar17 != (GizmoLineSlider2D *)0x0) {
                                            GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                                      (pGVar17,pBVar11->vector[3] != 0,
                                                       (MethodInfo *)0x0);
                                            pGVar18 = (this->fields)._2DModeDblSlider;
                                            if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
                                              pMVar16 = (this->fields)._sharedLookAndFeel2D;
                                              bVar5 = (pGVar18->fields)._._isVisible;
                                              if ((pMVar16 != (MoveGizmoLookAndFeel2D *)0x0) ||
                                                 (pMVar16 = (this->fields)._lookAndFeel2D,
                                                 pMVar16 != (MoveGizmoLookAndFeel2D *)0x0)) {
                                                (pGVar18->fields)._._isVisible =
                                                     (pMVar16->fields)._isDblSliderVisible;
                                                (*(code *)(pGVar18->klass->vtable).
                                                          OnVisibilityStateChanged.method)(pGVar18);
                                                pMVar16 = (this->fields)._sharedLookAndFeel2D;
                                                pGVar18 = (this->fields)._2DModeDblSlider;
                                                if (((pMVar16 != (MoveGizmoLookAndFeel2D *)0x0) ||
                                                    (pMVar16 = (this->fields)._lookAndFeel2D,
                                                    pMVar16 != (MoveGizmoLookAndFeel2D *)0x0)) &&
                                                   (pGVar18 != (GizmoPlaneSlider2D *)0x0)) {
                                                  GizmoPlaneSlider2D::
                                                  GizmoPlaneSlider2D_SetBorderVisible
                                                            (pGVar18,(pMVar16->fields).
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
        }
        else {
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
      pMVar3 = (this->fields)._sharedHotkeys;
      if (((pMVar3 != (MoveGizmoHotkeys *)0x0) ||
          (pMVar3 = (this->fields)._hotkeys, pMVar3 != (MoveGizmoHotkeys *)0x0)) &&
         (pHVar4 = (pMVar3->fields)._enableSnapping, pHVar4 != (Hotkeys *)0x0)) {
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
      pGStack_3 = (GizmoObjectVertexSnapDrag3D *)&(pGVar1->fields)._targetObjects;
      pIStack_2 = targetObjects;
      *(IEnumerable_1_UnityEngine_GameObject_ **)pGStack_3 = targetObjects;
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
  pMVar1 = (this->fields)._sharedLookAndFeel3D;
  if ((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
     (pMVar1 = (this->fields)._lookAndFeel3D, pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) {
    pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
    pGVar3 = (this->fields)._pXSlider;
    if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
      if (pGVar2->max_length == 0) goto code_?;
      if (pGVar3 != (GizmoLineSlider3D *)0x0) {
        GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                  (pGVar3,pGVar2->vector[0],(MethodInfo *)0x0);
        pMVar1 = (this->fields)._sharedLookAndFeel3D;
        if ((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
           (pMVar1 = (this->fields)._lookAndFeel3D, pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) {
          pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
          pGVar3 = (this->fields)._pYSlider;
          if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if (pGVar2->max_length < 2) goto code_?;
            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                        (pGVar3,pGVar2->vector[1],(MethodInfo *)0x0);
              pMVar1 = (this->fields)._sharedLookAndFeel3D;
              if ((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                 (pMVar1 = (this->fields)._lookAndFeel3D, pMVar1 != (MoveGizmoLookAndFeel3D *)0x0))
              {
                pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
                pGVar3 = (this->fields)._pZSlider;
                if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                  if (pGVar2->max_length < 3) goto code_?;
                  if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                              (pGVar3,pGVar2->vector[2],(MethodInfo *)0x0);
                    pMVar1 = (this->fields)._sharedLookAndFeel3D;
                    if ((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                       (pMVar1 = (this->fields)._lookAndFeel3D,
                       pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) {
                      pGVar3 = (this->fields)._nXSlider;
                      pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
                      if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                        if (pGVar2->max_length < 4) goto code_?;
                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                    (pGVar3,pGVar2->vector[3],(MethodInfo *)0x0);
                          pMVar1 = (this->fields)._sharedLookAndFeel3D;
                          if ((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                             (pMVar1 = (this->fields)._lookAndFeel3D,
                             pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) {
                            pGVar3 = (this->fields)._nYSlider;
                            pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
                            if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                              if (pGVar2->max_length < 5) goto code_?;
                              if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                          (pGVar3,pGVar2->vector[4],(MethodInfo *)0x0);
                                pMVar1 = (this->fields)._sharedLookAndFeel3D;
                                if ((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                                   (pMVar1 = (this->fields)._lookAndFeel3D,
                                   pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) {
                                  pGVar3 = (this->fields)._nZSlider;
                                  pGVar2 = (pMVar1->fields)._sglSlidersLookAndFeel;
                                  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                    if (pGVar2->max_length < 6) goto code_?;
                                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                      GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                                (pGVar3,pGVar2->vector[5],(MethodInfo *)0x0);
                                      pMVar1 = (this->fields)._sharedLookAndFeel3D;
                                      if ((pMVar1 != (MoveGizmoLookAndFeel3D *)0x0) ||
                                         (pMVar1 = (this->fields)._lookAndFeel3D,
                                         pMVar1 != (MoveGizmoLookAndFeel3D *)0x0)) {
                                        pGVar4 = (pMVar1->fields)._dblSlidersLookAndFeel;
                                        pGVar5 = (this->fields)._xySlider;
                                        if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                          if (pGVar4->max_length == 0) goto code_?;
                                          if (pGVar5 != (GizmoPlaneSlider3D *)0x0) {
                                            pGStack6 = pGVar4->vector[0];
                                            ppGStack7 = &(pGVar5->fields)._sharedLookAndFeel;
                                            *ppGStack7 = pGStack6;
                                            func_?();
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
  pMVar1 = (this->fields)._sharedSettings3D;
  if ((pMVar1 != (MoveGizmoSettings3D *)0x0) ||
     (pMVar1 = (this->fields)._settings3D, pMVar1 != (MoveGizmoSettings3D *)0x0)) {
    pGVar2 = (pMVar1->fields)._sglSliderSettings;
    pGVar3 = (this->fields)._pXSlider;
    if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
      if (pGVar2->max_length == 0) goto code_?;
      pGVar4 = pGVar2->vector[0];
      if (pGVar3 != (GizmoLineSlider3D *)0x0) {
        ppGVar5 = &(pGVar3->fields)._sharedSettings;
        *ppGVar5 = pGVar4;
        func_?(ppGVar5,pGVar4);
        pMVar1 = (this->fields)._sharedSettings3D;
        if ((pMVar1 != (MoveGizmoSettings3D *)0x0) ||
           (pMVar1 = (this->fields)._settings3D, pMVar1 != (MoveGizmoSettings3D *)0x0)) {
          pGVar2 = (pMVar1->fields)._sglSliderSettings;
          pGVar3 = (this->fields)._pYSlider;
          if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length < 2) goto code_?;
            pGVar4 = pGVar2->vector[1];
            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
              ppGVar5 = &(pGVar3->fields)._sharedSettings;
              *ppGVar5 = pGVar4;
              func_?(ppGVar5,pGVar4);
              pMVar1 = (this->fields)._sharedSettings3D;
              if ((pMVar1 != (MoveGizmoSettings3D *)0x0) ||
                 (pMVar1 = (this->fields)._settings3D, pMVar1 != (MoveGizmoSettings3D *)0x0)) {
                pGVar2 = (pMVar1->fields)._sglSliderSettings;
                pGVar3 = (this->fields)._pZSlider;
                if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
                  if (pGVar2->max_length < 3) goto code_?;
                  pGVar4 = pGVar2->vector[2];
                  if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                    ppGVar5 = &(pGVar3->fields)._sharedSettings;
                    *ppGVar5 = pGVar4;
                    func_?(ppGVar5,pGVar4);
                    pMVar1 = (this->fields)._sharedSettings3D;
                    if ((pMVar1 != (MoveGizmoSettings3D *)0x0) ||
                       (pMVar1 = (this->fields)._settings3D, pMVar1 != (MoveGizmoSettings3D *)0x0)
                       ) {
                      pGVar3 = (this->fields)._nXSlider;
                      pGVar2 = (pMVar1->fields)._sglSliderSettings;
                      if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
                        if (pGVar2->max_length < 4) goto code_?;
                        pGVar4 = pGVar2->vector[3];
                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                          ppGVar5 = &(pGVar3->fields)._sharedSettings;
                          *ppGVar5 = pGVar4;
                          func_?(ppGVar5,pGVar4);
                          pMVar1 = (this->fields)._sharedSettings3D;
                          if ((pMVar1 != (MoveGizmoSettings3D *)0x0) ||
                             (pMVar1 = (this->fields)._settings3D,
                             pMVar1 != (MoveGizmoSettings3D *)0x0)) {
                            pGVar3 = (this->fields)._nYSlider;
                            pGVar2 = (pMVar1->fields)._sglSliderSettings;
                            if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
                              if (pGVar2->max_length < 5) goto code_?;
                              pGVar4 = pGVar2->vector[4];
                              if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                ppGVar5 = &(pGVar3->fields)._sharedSettings;
                                *ppGVar5 = pGVar4;
                                func_?(ppGVar5,pGVar4);
                                pMVar1 = (this->fields)._sharedSettings3D;
                                if ((pMVar1 != (MoveGizmoSettings3D *)0x0) ||
                                   (pMVar1 = (this->fields)._settings3D,
                                   pMVar1 != (MoveGizmoSettings3D *)0x0)) {
                                  pGVar3 = (this->fields)._nZSlider;
                                  pGVar2 = (pMVar1->fields)._sglSliderSettings;
                                  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                    if (pGVar2->max_length < 6) goto code_?;
                                    pGVar4 = pGVar2->vector[5];
                                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                      ppGVar5 = &(pGVar3->fields)._sharedSettings;
                                      *ppGVar5 = pGVar4;
                                      func_?(ppGVar5,pGVar4);
                                      pMVar1 = (this->fields)._sharedSettings3D;
                                      if ((pMVar1 != (MoveGizmoSettings3D *)0x0) ||
                                         (pMVar1 = (this->fields)._settings3D,
                                         pMVar1 != (MoveGizmoSettings3D *)0x0)) {
                                        pGVar6 = (pMVar1->fields)._dblSliderSettings;
                                        pGVar7 = (this->fields)._xySlider;
                                        if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                          if (pGVar6->max_length == 0) goto code_?;
                                          if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                                            pGVar8 = pGVar6->vector[0];
                                            ppGVar9 = &(pGVar7->fields)._sharedSettings;
                                            *ppGVar9 = pGVar8;
                                            func_?(ppGVar9,pGVar8);
                                            pMVar1 = (this->fields)._sharedSettings3D;
                                            if ((pMVar1 != (MoveGizmoSettings3D *)0x0) ||
                                               (pMVar1 = (this->fields)._settings3D,
                                               pMVar1 != (MoveGizmoSettings3D *)0x0)) {
                                              pGVar6 = (pMVar1->fields)._dblSliderSettings;
                                              pGVar7 = (this->fields)._yzSlider;
                                              if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *)0x0
                                                 ) {
                                                if (pGVar6->max_length < 2) goto code_?;
                                                if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                                                  pGVar8 = pGVar6->vector[1];
                                                  ppGVar9 = &(pGVar7->fields)._sharedSettings;
                                                  *ppGVar9 = pGVar8;
                                                  func_?(ppGVar9,pGVar8);
                                                  pMVar1 = (this->fields)._sharedSettings3D;
                                                  if ((pMVar1 != (MoveGizmoSettings3D *)0x0) ||
                                                     (pMVar1 = (this->fields)._settings3D,
                                                     pMVar1 != (MoveGizmoSettings3D *)0x0)) {
                                                    pGVar6 = (pMVar1->fields)._dblSliderSettings;
                                                    pGVar7 = (this->fields)._zxSlider;
                                                    if (pGVar6 != (GizmoPlaneSlider3DSettings__Array
                                                                   *)0x0) {
                                                      if (pGVar6->max_length < 3)
                                                      goto code_?;
                                                      if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                                                        pGVar8 = pGVar6->vector[2];
                                                        ppGVar9 = &(pGVar7->fields)._sharedSettings
                                                        ;
                                                        *ppGVar9 = pGVar8;
                                                        func_?(ppGVar9,pGVar8);
                                                        pMVar10 = (this->fields)._sharedSettings2D;
                                                        if ((pMVar10 != (MoveGizmoSettings2D *)0x0)
                                                           || (pMVar10 = (this->fields)._settings2D,
                                                              pMVar10 != (MoveGizmoSettings2D *)0x0)
                                                           ) {
                                                          pGVar11 = (pMVar10->fields).
                                                                   _sglSliderSettings;
                                                          pGVar12 = (this->fields)._p2DModeXSlider;
                                                          if (pGVar11 != (
                                                  GizmoLineSlider2DSettings__Array *)0x0) {
                                                    if (pGVar11->max_length == 0)
                                                    goto code_?;
                                                    pGVar13 = pGVar11->vector[0];
                                                    if (pGVar12 != (GizmoLineSlider2D *)0x0) {
                                                      ppGVar14 = &(pGVar12->fields)._sharedSettings;
                                                      *ppGVar14 = pGVar13;
                                                      func_?(ppGVar14,pGVar13);
                                                      pMVar10 = (this->fields)._sharedSettings2D;
                                                      if ((pMVar10 != (MoveGizmoSettings2D *)0x0) ||
                                                         (pMVar10 = (this->fields)._settings2D,
                                                         pMVar10 != (MoveGizmoSettings2D *)0x0)) {
                                                        pGVar11 = (pMVar10->fields).
                                                                 _sglSliderSettings;
                                                        pGVar12 = (this->fields)._p2DModeYSlider;
                                                        if (pGVar11 != (
                                                  GizmoLineSlider2DSettings__Array *)0x0) {
                                                    if (pGVar11->max_length < 2)
                                                    goto code_?;
                                                    pGVar13 = pGVar11->vector[1];
                                                    if (pGVar12 != (GizmoLineSlider2D *)0x0) {
                                                      ppGVar14 = &(pGVar12->fields)._sharedSettings;
                                                      *ppGVar14 = pGVar13;
                                                      func_?(ppGVar14,pGVar13);
                                                      pMVar10 = (this->fields)._sharedSettings2D;
                                                      if ((pMVar10 != (MoveGizmoSettings2D *)0x0) ||
                                                         (pMVar10 = (this->fields)._settings2D,
                                                         pMVar10 != (MoveGizmoSettings2D *)0x0)) {
                                                        pGVar12 = (this->fields)._n2DModeXSlider;
                                                        pGVar11 = (pMVar10->fields).
                                                                 _sglSliderSettings;
                                                        if (pGVar11 != (
                                                  GizmoLineSlider2DSettings__Array *)0x0) {
                                                    if (pGVar11->max_length < 3)
                                                    goto code_?;
                                                    pGVar13 = pGVar11->vector[2];
                                                    if (pGVar12 != (GizmoLineSlider2D *)0x0) {
                                                      ppGVar14 = &(pGVar12->fields)._sharedSettings;
                                                      *ppGVar14 = pGVar13;
                                                      func_?(ppGVar14,pGVar13);
                                                      pMVar10 = (this->fields)._sharedSettings2D;
                                                      if ((pMVar10 != (MoveGizmoSettings2D *)0x0) ||
                                                         (pMVar10 = (this->fields)._settings2D,
                                                         pMVar10 != (MoveGizmoSettings2D *)0x0)) {
                                                        pGVar12 = (this->fields)._n2DModeYSlider;
                                                        pGVar11 = (pMVar10->fields).
                                                                 _sglSliderSettings;
                                                        if (pGVar11 != (
                                                  GizmoLineSlider2DSettings__Array *)0x0) {
                                                    if (pGVar11->max_length < 4)
                                                    goto code_?;
                                                    pGVar13 = pGVar11->vector[3];
                                                    if (pGVar12 != (GizmoLineSlider2D *)0x0) {
                                                      ppGVar14 = &(pGVar12->fields)._sharedSettings;
                                                      *ppGVar14 = pGVar13;
                                                      func_?(ppGVar14,pGVar13);
                                                      pMVar10 = (this->fields)._sharedSettings2D;
                                                      if (((pMVar10 != (MoveGizmoSettings2D *)0x0)
                                                          || (pMVar10 = (this->fields)._settings2D,
                                                             pMVar10 != (MoveGizmoSettings2D *)0x0))
                                                         && (pGVar15 = (this->fields).
                                                                       _2DModeDblSlider,
                                                            pGVar15 != (GizmoPlaneSlider2D *)0x0)) {
                                                        pGVar16 = (pMVar10->fields).
                                                                  _dblSliderSettings;
                                                        ppGVar17 = &(pGVar15->fields).
                                                                    _sharedSettings;
                                                        *ppGVar17 = pGVar16;
                                                        func_?(ppGVar17,pGVar16);
                                                        pMVar1 = (this->fields)._sharedSettings3D;
                                                        this_00 = (this->fields)._vertexSnapDrag;
                                                        if (((pMVar1 != (MoveGizmoSettings3D *)0x0)
                                                            || (pMVar1 = (this->fields)._settings3D
                                                               , pMVar1 !=
                                                                 (MoveGizmoSettings3D *)0x0)) &&
                                                           (this_00 !=
                                                            (GizmoObjectVertexSnapDrag3D *)0x0)) {
                                                          GizmoObjectVertexSnapDrag3D::
                                                          GizmoObjectVertexSnapDrag3D_set_Settings
                                                                    (this_00,(pMVar1->fields).
                                                                             _vertexSnapSettings,
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
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void Update2DModeHandlePositions() */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_Update2DModeHandlePositions
               (MoveGizmo *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._sharedLookAndFeel2D;
  if ((pMVar1 != (MoveGizmoLookAndFeel2D *)0x0) ||
     (pMVar1 = (this->fields)._lookAndFeel2D, pMVar1 != (MoveGizmoLookAndFeel2D *)0x0)) {
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
              GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,value,(MethodInfo *)0x0)
              ;
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
      if (pGVar7 != (GizmoPlaneSlider2D *)0x0) {
        VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                          (pGVar7,Shape2DExtentPoint__Enum_Right,(MethodInfo *)0x0);
        if (pGVar6 != (GizmoLineSlider2D *)0x0) {
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
          pGVar7 = (this->fields)._2DModeDblSlider;
          pGVar6 = (this->fields)._p2DModeYSlider;
          if (pGVar7 != (GizmoPlaneSlider2D *)0x0) {
            VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                              (pGVar7,Shape2DExtentPoint__Enum_Top,(MethodInfo *)0x0);
            if (pGVar6 != (GizmoLineSlider2D *)0x0) {
              GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0)
              ;
              pGVar7 = (this->fields)._2DModeDblSlider;
              pGVar6 = (this->fields)._n2DModeXSlider;
              if (pGVar7 != (GizmoPlaneSlider2D *)0x0) {
                VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                                  (pGVar7,Shape2DExtentPoint__Enum_Left,(MethodInfo *)0x0);
                if (pGVar6 != (GizmoLineSlider2D *)0x0) {
                  GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                            (pGVar6,VVar5,(MethodInfo *)0x0);
                  pGVar7 = (this->fields)._2DModeDblSlider;
                  pGVar6 = (this->fields)._n2DModeYSlider;
                  if (pGVar7 != (GizmoPlaneSlider2D *)0x0) {
                    VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                                      (pGVar7,Shape2DExtentPoint__Enum_Bottom,(MethodInfo *)0x0);
                    if (pGVar6 != (GizmoLineSlider2D *)0x0) {
                      GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                                (pGVar6,VVar5,(MethodInfo *)0x0);
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
  ppGVar1 = &(this->fields)._axesSliders;
  *ppGVar1 = this_00;
  func_?(ppGVar1,this_00);
  this_01 = (GizmoPlaneSlider3DCollection *)
            func_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(this_01,(MethodInfo *)0x0);
  ppGVar2 = &(this->fields)._dblSliders;
  *ppGVar2 = this_01;
  func_?(ppGVar2,this_01);
  this_02 = (GizmoObjectVertexSnapDrag3D *)
            func_?(TypeInfo__RTG__GizmoObjectVertexSnapDrag3D);
  GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D__ctor(this_02,(MethodInfo *)0x0);
  ppGVar3 = &(this->fields)._vertexSnapDrag;
  *ppGVar3 = this_02;
  func_?(ppGVar3,this_02);
  this_03 = (GizmoLineSlider2DCollection *)
            func_?(TypeInfo__RTG__GizmoLineSlider2DCollection);
  GizmoLineSlider2DCollection::GizmoLineSlider2DCollection__ctor(this_03,(MethodInfo *)0x0);
  ppGVar4 = &(this->fields)._2DModeSliders;
  *ppGVar4 = this_03;
  func_?(ppGVar4);
  (this->fields)._useSnapEnableHotkey = 1;
  (this->fields)._useVertSnapEnableHotkey = 1;
  (this->fields)._use2DModeEnableHotkey = 1;
  this_04 = (MoveGizmoHotkeys *)func_?(TypeInfo__RTG__MoveGizmoHotkeys);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_Enable_vertex_snapping);
    cRam_? = '\x01';
  }
  HVar5.CanHaveMouseButtons = 0;
  pHVar6 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1(pHVar6,StringLiteral_Enable_2D_mode,HVar5,(MethodInfo *)0x0);
  if (pHVar6 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar6,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar6->fields)._lShift = 1;
    (this_04->fields)._enable2DMode = pHVar6;
    func_?();
    HVar5.CanHaveMouseButtons = 0;
    pHVar6 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1(pHVar6,StringLiteral_Enable_snapping,HVar5,(MethodInfo *)0x0);
    if (pHVar6 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar6,KeyCode__Enum_None,(MethodInfo *)0x0);
      (pHVar6->fields)._lCtrl = 1;
      (this_04->fields)._enableSnapping = pHVar6;
      func_?();
      HVar5.CanHaveMouseButtons = 0;
      pHVar6 = (Hotkeys *)func_?();
      Hotkeys::Hotkeys__ctor_1(pHVar6,StringLiteral_Enable_vertex_snapping,HVar5,(MethodInfo *)0x0)
      ;
      if (pHVar6 != (Hotkeys *)0x0) {
        (pHVar6->fields)._useStrictModifierCheck = 0;
        Hotkeys::Hotkeys_set_Key(pHVar6,KeyCode__Enum_V,(MethodInfo *)0x0);
        (this_04->fields)._enableVertexSnapping = pHVar6;
        func_?();
        Settings::Settings__ctor((Settings *)this_04,(MethodInfo *)0x0);
        (this->fields)._hotkeys = this_04;
        func_?();
        this = (MoveGizmo *)&UNK_?;
        this_05 = (MoveGizmoSettings2D *)func_?();
        pMVar7 = this_05;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pGVar8 = (GizmoPlaneSlider2DSettings *)func_?();
        GizmoPlaneSlider2DSettings::GizmoPlaneSlider2DSettings__ctor(pGVar8,(MethodInfo *)0x0);
        (this_05->fields)._dblSliderSettings = pGVar8;
        func_?();
        pGVar9 = (GizmoLineSlider2DSettings__Array *)func_?();
        ppGVar10 = &(this_05->fields)._sglSliderSettings;
        *ppGVar10 = pGVar9;
        func_?();
        Settings::Settings__ctor((Settings *)this_05,(MethodInfo *)0x0);
        uVar11 = 0;
        pGVar9 = *ppGVar10;
        while (pGVar9 != (GizmoLineSlider2DSettings__Array *)0x0) {
          if ((int)pGVar9->max_length <= (int)uVar11) {
            pGVar8 = (pMVar7->fields)._dblSliderSettings;
            if (pGVar8 != (GizmoPlaneSlider2DSettings *)0x0) {
              (pGVar8->fields)._scaleMode = 1;
              (this->fields)._settings2D = pMVar7;
              func_?();
              this_07 = (MoveGizmoSettings3D *)func_?();
              MoveGizmoSettings3D::MoveGizmoSettings3D__ctor(this_07,(MethodInfo *)0x0);
              (this->fields)._settings3D = this_07;
              func_?();
              this_08 = (MoveGizmoLookAndFeel2D *)func_?();
              MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D__ctor(this_08,(MethodInfo *)0x0);
              ppMVar12 = &(this->fields)._lookAndFeel2D;
              *ppMVar12 = this_08;
              func_?(ppMVar12);
              this_09 = (MoveGizmoLookAndFeel3D *)
                        func_?(TypeInfo__RTG__MoveGizmoLookAndFeel3D);
              MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D__ctor(this_09,(MethodInfo *)0x0);
              ppMVar13 = &(this->fields)._lookAndFeel3D;
              *ppMVar13 = this_09;
              func_?(ppMVar13,this_09);
              GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
              return;
            }
            break;
          }
          pGVar9 = *ppGVar10;
          this_06 = (GizmoLineSlider2DSettings *)func_?();
          this = (MoveGizmo *)&UNK_?;
          GizmoLineSlider2DSettings::GizmoLineSlider2DSettings__ctor(this_06,(MethodInfo *)0x0);
          if (pGVar9 == (GizmoLineSlider2DSettings__Array *)0x0) break;
          if ((this_06 != (GizmoLineSlider2DSettings *)0x0) &&
             (iVar14 = func_?(), iVar14 == 0)) goto code_?;
          if (pGVar9->max_length <= uVar11) goto code_?;
          pGVar9->vector[uVar11] = this_06;
          func_?();
          uVar11 = uVar11 + 1;
          ppGVar10 = &(pMVar7->fields)._sglSliderSettings;
          pGVar9 = (pMVar7->fields)._sglSliderSettings;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* MoveGizmoHotkeys get_Hotkeys() */

MoveGizmoHotkeys *
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_Hotkeys(MoveGizmo *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._sharedHotkeys;
  if (pMVar1 == (MoveGizmoHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return pMVar1;
}


/* MoveGizmoLookAndFeel2D get_LookAndFeel2D() */

MoveGizmoLookAndFeel2D *
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_LookAndFeel2D(MoveGizmo *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._sharedLookAndFeel2D;
  if (pMVar1 == (MoveGizmoLookAndFeel2D *)0x0) {
    return (this->fields)._lookAndFeel2D;
  }
  return pMVar1;
}


/* MoveGizmoLookAndFeel3D get_LookAndFeel3D() */

MoveGizmoLookAndFeel3D *
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_LookAndFeel3D(MoveGizmo *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._sharedLookAndFeel3D;
  if (pMVar1 == (MoveGizmoLookAndFeel3D *)0x0) {
    return (this->fields)._lookAndFeel3D;
  }
  return pMVar1;
}


/* MoveGizmoSettings2D get_Settings2D() */

MoveGizmoSettings2D *
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_Settings2D(MoveGizmo *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._sharedSettings2D;
  if (pMVar1 == (MoveGizmoSettings2D *)0x0) {
    return (this->fields)._settings2D;
  }
  return pMVar1;
}


/* MoveGizmoSettings3D get_Settings3D() */

MoveGizmoSettings3D *
Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_get_Settings3D(MoveGizmo *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._sharedSettings3D;
  if (pMVar1 == (MoveGizmoSettings3D *)0x0) {
    return (this->fields)._settings3D;
  }
  return pMVar1;
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
  ppMVar1 = &(this->fields)._sharedLookAndFeel2D;
  *ppMVar1 = value;
  func_?(ppMVar1,value);
  MoveGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedLookAndFeel3D(MoveGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_SharedLookAndFeel3D
               (MoveGizmo *this,MoveGizmoLookAndFeel3D *value,MethodInfo *method)

{
  ppMVar1 = &(this->fields)._sharedLookAndFeel3D;
  *ppMVar1 = value;
  func_?(ppMVar1,value);
  MoveGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings2D(MoveGizmoSettings2D) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_SharedSettings2D
               (MoveGizmo *this,MoveGizmoSettings2D *value,MethodInfo *method)

{
  ppMVar1 = &(this->fields)._sharedSettings2D;
  *ppMVar1 = value;
  func_?(ppMVar1,value);
  MoveGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings3D(MoveGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::MoveGizmo::MoveGizmo_set_SharedSettings3D
               (MoveGizmo *this,MoveGizmoSettings3D *value,MethodInfo *method)

{
  ppMVar1 = &(this->fields)._sharedSettings3D;
  *ppMVar1 = value;
  func_?(ppMVar1,value);
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

