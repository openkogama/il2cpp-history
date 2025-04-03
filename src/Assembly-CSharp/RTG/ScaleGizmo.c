
/* Single GetZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_GetZoomFactor
                (ScaleGizmo *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._sharedLookAndFeel3D;
  if (((pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0) ||
      (pSVar1 = (this->fields)._lookAndFeel3D, pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
     (pGVar2 = (pSVar1->fields)._midCapLookAndFeel, pGVar2 != (GizmoCap3DLookAndFeel *)0x0)) {
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

float Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_GetZoomFactor_1
                (ScaleGizmo *this,Vector3 position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._sharedLookAndFeel3D;
  if (((pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0) ||
      (pSVar1 = (this->fields)._lookAndFeel3D, pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
     (pGVar2 = (pSVar1->fields)._midCapLookAndFeel, pGVar2 != (GizmoCap3DLookAndFeel *)0x0)) {
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


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_OnAttached
               (ScaleGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap3D);
    func_?(&TypeInfo__RTG__GizmoLineSlider3D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3D);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  iVar2 = GizmoHandleId::GizmoHandleId_get_MidScaleCap((MethodInfo *)0x0);
  pGVar3 = (GizmoCap3D *)func_?(TypeInfo__RTG__GizmoCap3D);
  GizmoCap3D::GizmoCap3D__ctor(pGVar3,pGVar1,iVar2,(MethodInfo *)0x0);
  ppGVar4 = &(this->fields)._midCap;
  *ppGVar4 = pGVar3;
  func_?(ppGVar4,pGVar3);
  if (*ppGVar4 != (GizmoCap3D *)0x0) {
    GizmoCap3D::GizmoCap3D_set_DragSession
              (*ppGVar4,(IGizmoDragSession *)(this->fields)._unformScaleDrag,(MethodInfo *)0x0);
    iVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_SizeOf_23((MethodInfo *)0x0);
    pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::
                       Datatype_hexBinary_get_TypeCode((Datatype_hexBinary *)0x0,(MethodInfo *)this)
    ;
    pGVar5 = TypeInfo__RTG__GizmoLineSlider3D;
    pGVar6 = (GizmoLineSlider3D *)func_?();
    GizmoLineSlider3D::GizmoLineSlider3D__ctor
              (pGVar6,pGVar1,iVar2,(int32_t)pGVar1,(MethodInfo *)0x0);
    ppGVar7 = &(this->fields)._pstvXSlider;
    *ppGVar7 = pGVar6;
    func_?(ppGVar7,pGVar6);
    if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
      GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                (*ppGVar7,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
      if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
        GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                  (*ppGVar7,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
        if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
          GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex(*ppGVar7,0,(MethodInfo *)0x0);
          handleId = System.Core.dll::System::Linq::Expressions::MemberExpression::
                     MemberExpression_get_NodeType((MemberExpression *)0x0,(MethodInfo *)pGVar5);
          pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_QName::
                             Datatype_QName_get_TypeCode((Datatype_QName *)0x0,(MethodInfo *)this);
          pGVar5 = TypeInfo__RTG__GizmoLineSlider3D;
          pGVar6 = (GizmoLineSlider3D *)func_?();
          GizmoLineSlider3D::GizmoLineSlider3D__ctor
                    (pGVar6,pGVar1,handleId,(int32_t)pGVar1,(MethodInfo *)0x0);
          ppGVar7 = &(this->fields)._negXSlider;
          *ppGVar7 = pGVar6;
          func_?(ppGVar7,pGVar6);
          if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
            GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                      (*ppGVar7,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
            if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                        (*ppGVar7,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
              if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
                          (*ppGVar7,0,(MethodInfo *)0x0);
                XVar8 = System.Xml.dll::System::Xml::Schema::Datatype_yearMonth::
                         Datatype_yearMonth_get_TypeCode
                                   ((Datatype_yearMonth *)0x0,(MethodInfo *)pGVar5);
                pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
                                   Datatype_base64Binary_get_TypeCode
                                             ((Datatype_base64Binary *)0x0,(MethodInfo *)this);
                pGVar6 = (GizmoLineSlider3D *)func_?();
                GizmoLineSlider3D::GizmoLineSlider3D__ctor
                          (pGVar6,pGVar1,XVar8,(int32_t)pGVar1,(MethodInfo *)0x0);
                ppGVar7 = &(this->fields)._pstvYSlider;
                *ppGVar7 = pGVar6;
                func_?(ppGVar7,pGVar6);
                if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                            (*ppGVar7,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
                  if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                              (*ppGVar7,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                    if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                      GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
                                (*ppGVar7,1,(MethodInfo *)0x0);
                      iVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                              UnsafeUtility::UnsafeUtility_SizeOf_11((MethodInfo *)0x0);
                      pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::
                                         Datatype_NOTATION_get_TypeCode
                                                   ((Datatype_NOTATION *)0x0,(MethodInfo *)this);
                      pGVar5 = TypeInfo__RTG__GizmoLineSlider3D;
                      pGVar6 = (GizmoLineSlider3D *)func_?();
                      GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                (pGVar6,pGVar1,iVar2,(int32_t)pGVar1,(MethodInfo *)0x0);
                      ppGVar7 = &(this->fields)._negYSlider;
                      *ppGVar7 = pGVar6;
                      func_?(ppGVar7,pGVar6);
                      if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                        GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                  (*ppGVar7,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
                        if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                    (*ppGVar7,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                          if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                            GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
                                      (*ppGVar7,1,(MethodInfo *)0x0);
                            XVar8 = System.Xml.dll::System::Xml::Schema::Datatype_year::
                                     Datatype_year_get_TypeCode
                                               ((Datatype_year *)0x0,(MethodInfo *)pGVar5);
                            pGVar1 = (Gizmo *)UnityEngine.CoreModule.dll::Unity::Collections::
                                               LowLevel::Unsafe::UnsafeUtility::
                                               UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
                            pGVar5 = TypeInfo__RTG__GizmoLineSlider3D;
                            pGVar6 = (GizmoLineSlider3D *)func_?();
                            GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                      (pGVar6,pGVar1,XVar8,(int32_t)pGVar1,(MethodInfo *)0x0);
                            ppGVar7 = &(this->fields)._pstvZSlider;
                            *ppGVar7 = pGVar6;
                            func_?(ppGVar7,pGVar6);
                            if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                              GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                        (*ppGVar7,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
                              if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                          (*ppGVar7,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                                if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                                  GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
                                            (*ppGVar7,2,(MethodInfo *)0x0);
                                  XVar8 = System.Xml.dll::System::Xml::Schema::Datatype_month::
                                           Datatype_month_get_TypeCode
                                                     ((Datatype_month *)0x0,(MethodInfo *)pGVar5);
                                  capHandleId = System.Xml.dll::System::Xml::Schema::
                                                Datatype_normalizedStringV1Compat::
                                                Datatype_normalizedStringV1Compat_get_TypeCode
                                                          ((Datatype_normalizedStringV1Compat *)0x0,
                                                           (MethodInfo *)pGVar5);
                                  pGVar6 = (GizmoLineSlider3D *)
                                            func_?(TypeInfo__RTG__GizmoLineSlider3D);
                                  GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                            (pGVar6,(Gizmo *)0x0,XVar8,capHandleId,
                                             (MethodInfo *)0x0);
                                  ppGVar7 = &(this->fields)._negZSlider;
                                  *ppGVar7 = pGVar6;
                                  func_?(ppGVar7,pGVar6);
                                  if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                                    GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                              (*ppGVar7,GizmoDragChannel__Enum_Scale,
                                               (MethodInfo *)0x0);
                                    if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                                      GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                                (*ppGVar7,2,AxisSign__Enum_Negative,
                                                 (MethodInfo *)0x0);
                                      if (*ppGVar7 != (GizmoLineSlider3D *)0x0) {
                                        GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
                                                  (*ppGVar7,2,(MethodInfo *)0x0);
                                        pGVar9 = (this->fields)._axesSliders;
                                        if (pGVar9 != (GizmoLineSlider3DCollection *)0x0) {
                                          GizmoLineSlider3DCollection::
                                          GizmoLineSlider3DCollection_Add
                                                    (pGVar9,(this->fields)._pstvXSlider,
                                                     (MethodInfo *)0x0);
                                          pGVar9 = (this->fields)._axesSliders;
                                          if (pGVar9 != (GizmoLineSlider3DCollection *)0x0) {
                                            GizmoLineSlider3DCollection::
                                            GizmoLineSlider3DCollection_Add
                                                      (pGVar9,(this->fields)._pstvYSlider,
                                                       (MethodInfo *)0x0);
                                            pGVar9 = (this->fields)._axesSliders;
                                            if (pGVar9 != (GizmoLineSlider3DCollection *)0x0) {
                                              GizmoLineSlider3DCollection::
                                              GizmoLineSlider3DCollection_Add
                                                        (pGVar9,(this->fields)._pstvZSlider,
                                                         (MethodInfo *)0x0);
                                              pGVar9 = (this->fields)._axesSliders;
                                              if (pGVar9 != (GizmoLineSlider3DCollection *)0x0) {
                                                GizmoLineSlider3DCollection::
                                                GizmoLineSlider3DCollection_Add
                                                          (pGVar9,(this->fields)._negXSlider,
                                                           (MethodInfo *)0x0);
                                                pGVar9 = (this->fields)._axesSliders;
                                                if (pGVar9 != (GizmoLineSlider3DCollection *)0x0) {
                                                  GizmoLineSlider3DCollection::
                                                  GizmoLineSlider3DCollection_Add
                                                            (pGVar9,(this->fields)._negYSlider,
                                                             (MethodInfo *)0x0);
                                                  pGVar9 = (this->fields)._axesSliders;
                                                  if (pGVar9 != (GizmoLineSlider3DCollection *)0x0)
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                    GizmoLineSlider3DCollection_Add
                                                              (pGVar9,*ppGVar7,(MethodInfo *)0x0);
                                                    pGVar3 = (this->fields)._midCap;
                                                    pGVar9 = (this->fields)._axesSliders;
                                                    if (pGVar3 != (GizmoCap3D *)0x0) {
                                                      priority = Newtonsoft.Json.dll::Newtonsoft::
                                                                 Json::Converters::
                                                                 XDocumentTypeWrapper::
                                                                                                                                  
                                                  XDocumentTypeWrapper_get_InternalSubset
                                                            ((XDocumentTypeWrapper *)pGVar3,
                                                             (MethodInfo *)0x0);
                                                  if (pGVar9 != (GizmoLineSlider3DCollection *)0x0)
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar9,(Priority *)priority,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._midCap;
                                                  pGVar9 = (this->fields)._axesSliders;
                                                  if (pGVar3 != (GizmoCap3D *)0x0) {
                                                    handleId_00 = UnityEngine.AndroidJNIModule.dll::
                                                                  UnityEngine::AndroidJavaObject::
                                                                  AndroidJavaObject__GetRawClass
                                                                            ((AndroidJavaObject *)
                                                                             pGVar3,(MethodInfo *)
                                                                                    0x0);
                                                    pIVar10 = (IEnumerable_1_System_Int32_ *)
                                                              func_?(
                                                  TypeInfo__System__Int32,3);
                                                  if (pIVar10 != (IEnumerable_1_System_Int32_ *)0x0)
                                                  {
                                                    if ((pIVar10[1].monitor < (MonitorData *)0x2) ||
                                                       (pIVar10[2].monitor = (MonitorData *)0x1,
                                                       pIVar10[1].monitor < (MonitorData *)0x3))
                                                    goto code_?;
                                                    pIVar10[3].klass =
                                                         (IEnumerable_1_System_Int32___Class *)0x2;
                                                    if (pGVar9 != (GizmoLineSlider3DCollection *)0x0
                                                       ) {
                                                      GizmoLineSlider3DCollection::
                                                                                                            
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar9,(int32_t)handleId_00,pIVar10,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = (this->fields)._._gizmo;
                                                  XVar8 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_Name::Datatype_Name_get_TypeCode
                                                                     ((Datatype_Name *)0x0,
                                                                      (MethodInfo *)pGVar5);
                                                  pGVar11 = (GizmoPlaneSlider3D *)func_?();
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar11,pGVar1,XVar8,
                                                             (MethodInfo *)0x0);
                                                  ppGVar12 = &(this->fields)._xySlider;
                                                  *ppGVar12 = pGVar11;
                                                  func_?(ppGVar12,pGVar11);
                                                  if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (*ppGVar12,GizmoDragChannel__Enum_Scale
                                                               ,(MethodInfo *)0x0);
                                                    if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_set_ScaleDragAxisIndexRight
                                                                (*ppGVar12,0,(MethodInfo *)0x0);
                                                      if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                        GizmoPlaneSlider3D::
                                                        GizmoPlaneSlider3D_set_ScaleDragAxisIndexUp
                                                                  (*ppGVar12,1,(MethodInfo *)0x0);
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        iVar2 = UnityEngine.CoreModule.dll::Unity::
                                                                Collections::LowLevel::Unsafe::
                                                                UnsafeUtility::
                                                                UnsafeUtility_SizeOf_25
                                                                          ((MethodInfo *)0x0);
                                                        method_00 = 
                                                  TypeInfo__RTG__GizmoPlaneSlider3D;
                                                  pGVar11 = (GizmoPlaneSlider3D *)func_?();
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar11,pGVar1,iVar2,(MethodInfo *)0x0
                                                            );
                                                  ppGVar12 = &(this->fields)._yzSlider;
                                                  *ppGVar12 = pGVar11;
                                                  func_?(ppGVar12,pGVar11);
                                                  if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (*ppGVar12,GizmoDragChannel__Enum_Scale
                                                               ,(MethodInfo *)0x0);
                                                    if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_set_ScaleDragAxisIndexRight
                                                                (*ppGVar12,1,(MethodInfo *)0x0);
                                                      if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                        GizmoPlaneSlider3D::
                                                        GizmoPlaneSlider3D_set_ScaleDragAxisIndexUp
                                                                  (*ppGVar12,2,(MethodInfo *)0x0);
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        XVar8 = System.Xml.dll::System::Xml::Schema
                                                                 ::Datatype_ID::
                                                                 Datatype_ID_get_TypeCode
                                                                           ((Datatype_ID *)0x0,
                                                                            (MethodInfo *)method_00)
                                                        ;
                                                        pGVar11 = (GizmoPlaneSlider3D *)
                                                                  func_?();
                                                        GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                                  (pGVar11,pGVar1,XVar8,
                                                                   (MethodInfo *)0x0);
                                                        ppGVar12 = &(this->fields)._zxSlider;
                                                        *ppGVar12 = pGVar11;
                                                        func_?(ppGVar12,pGVar11);
                                                        if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                          GizmoPlaneSlider3D::
                                                          GizmoPlaneSlider3D_SetDragChannel
                                                                    (*ppGVar12,
                                                  GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
                                                  if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_set_ScaleDragAxisIndexRight
                                                              (*ppGVar12,2,(MethodInfo *)0x0);
                                                    if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_set_ScaleDragAxisIndexUp
                                                                (*ppGVar12,0,(MethodInfo *)0x0);
                                                      pGVar13 = (this->fields)._dblSliders;
                                                      if (pGVar13 != (GizmoPlaneSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoPlaneSlider3DCollection::
                                                        GizmoPlaneSlider3DCollection_Add
                                                                  (pGVar13,(this->fields)._xySlider,
                                                                   (MethodInfo *)0x0);
                                                        pGVar13 = (this->fields)._dblSliders;
                                                        if (pGVar13 != (GizmoPlaneSlider3DCollection
                                                                       *)0x0) {
                                                          GizmoPlaneSlider3DCollection::
                                                          GizmoPlaneSlider3DCollection_Add
                                                                    (pGVar13,(this->fields)._yzSlider
                                                                     ,(MethodInfo *)0x0);
                                                          pGVar13 = (this->fields)._dblSliders;
                                                          if (pGVar13 != (
                                                  GizmoPlaneSlider3DCollection *)0x0) {
                                                    GizmoPlaneSlider3DCollection::
                                                    GizmoPlaneSlider3DCollection_Add
                                                              (pGVar13,*ppGVar12,(MethodInfo *)0x0);
                                                    pGVar11 = (this->fields)._xySlider;
                                                    pGVar9 = (this->fields)._axesSliders;
                                                    if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                      iVar2 = mscorlib.dll::System::Threading::
                                                                                                                            
                                                  SparselyPopulatedArrayFragment`1[System::Object]::
                                                  SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                                            ((
                                                  SparselyPopulatedArrayFragment_1_System_Object_ *)
                                                  pGVar11,(MethodInfo *)0x0);
                                                  pIVar10 = (IEnumerable_1_System_Int32_ *)
                                                            func_?(TypeInfo__System__Int32,
                                                                            2);
                                                  pGVar11 = (this->fields)._xySlider;
                                                  if ((pGVar11 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pIVar10 != (IEnumerable_1_System_Int32_ *)0x0)
                                                     ) {
                                                    if (pIVar10[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pIVar10[2].klass =
                                                         (IEnumerable_1_System_Int32___Class *)
                                                         (pGVar11->fields)._scaleDragAxisIndexRight;
                                                    pGVar11 = (this->fields)._xySlider;
                                                    if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                      if (pIVar10[1].monitor < (MonitorData *)0x2)
                                                      goto code_?;
                                                      pIVar10[2].monitor =
                                                           (MonitorData *)
                                                           (pGVar11->fields)._scaleDragAxisIndexUp;
                                                      if (pGVar9 != (GizmoLineSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider3DCollection::
                                                                                                                
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar9,iVar2,pIVar10,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar11 = (this->fields)._yzSlider;
                                                  pGVar9 = (this->fields)._axesSliders;
                                                  if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                    iVar2 = mscorlib.dll::System::Threading::
                                                            SparselyPopulatedArrayFragment`1[System
                                                            ::Object]::
                                                                                                                        
                                                  SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                                            ((
                                                  SparselyPopulatedArrayFragment_1_System_Object_ *)
                                                  pGVar11,(MethodInfo *)0x0);
                                                  pIVar10 = (IEnumerable_1_System_Int32_ *)
                                                            func_?(TypeInfo__System__Int32,
                                                                            2);
                                                  pGVar11 = (this->fields)._yzSlider;
                                                  if ((pGVar11 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pIVar10 != (IEnumerable_1_System_Int32_ *)0x0)
                                                     ) {
                                                    if (pIVar10[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pIVar10[2].klass =
                                                         (IEnumerable_1_System_Int32___Class *)
                                                         (pGVar11->fields)._scaleDragAxisIndexRight;
                                                    pGVar11 = (this->fields)._yzSlider;
                                                    if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                      if (pIVar10[1].monitor < (MonitorData *)0x2)
                                                      goto code_?;
                                                      pIVar10[2].monitor =
                                                           (MonitorData *)
                                                           (pGVar11->fields)._scaleDragAxisIndexUp;
                                                      if (pGVar9 != (GizmoLineSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider3DCollection::
                                                                                                                
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar9,iVar2,pIVar10,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar9 = (this->fields)._axesSliders;
                                                  if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                    iVar2 = mscorlib.dll::System::Threading::
                                                            SparselyPopulatedArrayFragment`1[System
                                                            ::Object]::
                                                                                                                        
                                                  SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                                            ((
                                                  SparselyPopulatedArrayFragment_1_System_Object_ *)
                                                  *ppGVar12,(MethodInfo *)0x0);
                                                  pIVar10 = (IEnumerable_1_System_Int32_ *)
                                                            func_?(TypeInfo__System__Int32,
                                                                            2);
                                                  if ((*ppGVar12 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pIVar10 != (IEnumerable_1_System_Int32_ *)0x0)
                                                     ) {
                                                    if (pIVar10[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pIVar10[2].klass =
                                                         (IEnumerable_1_System_Int32___Class *)
                                                         ((*ppGVar12)->fields).
                                                         _scaleDragAxisIndexRight;
                                                    if (*ppGVar12 != (GizmoPlaneSlider3D *)0x0) {
                                                      if (pIVar10[1].monitor < (MonitorData *)0x2)
                                                      goto code_?;
                                                      pIVar10[2].monitor =
                                                           (MonitorData *)
                                                           ((*ppGVar12)->fields).
                                                           _scaleDragAxisIndexUp;
                                                      if (pGVar9 != (GizmoLineSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider3DCollection::
                                                                                                                
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar9,iVar2,pIVar10,(MethodInfo *)0x0)
                                                  ;
                                                  this_00 = (DataTable *)(this->fields)._._gizmo;
                                                  if (this_00 != (DataTable *)0x0) {
                                                    bVar14 = System.Data.dll::System::Data::DataTable
                                                            ::DataTable_get_CaseSensitive
                                                                      (this_00,(MethodInfo *)0x0);
                                                    if ((bVar14 != 0) ||
                                                       ((this->fields)._multiAxisScaleMode == 1)) {
code_?:
                                                      ScaleGizmo_SetupSharedLookAndFeel
                                                                (this,(MethodInfo *)0x0);
                                                      ScaleGizmo_SetupSharedSettings
                                                                (this,(MethodInfo *)0x0);
                                                      return;
                                                    }
                                                    (this->fields)._multiAxisScaleMode = 1;
                                                    pGVar13 = (this->fields)._dblSliders;
                                                    if (pGVar13 != (GizmoPlaneSlider3DCollection *)
                                                                  0x0) {
                                                      GizmoPlaneSlider3DCollection::
                                                      GizmoPlaneSlider3DCollection_SetVisible
                                                                (pGVar13,0,1,(MethodInfo *)0x0);
                                                      pGVar3 = (this->fields)._midCap;
                                                      if (pGVar3 != (GizmoCap3D *)0x0) {
                                                        GizmoCap::GizmoCap_SetVisible
                                                                  ((GizmoCap *)pGVar3,1,
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_OnGizmoAttemptHandleDragBegin
               (ScaleGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCap;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
    if ((void *)handleId != pvVar2) {
      return;
    }
    pGVar1 = (this->fields)._midCap;
    if (pGVar1 != (GizmoCap3D *)0x0) {
      GizmoCap3D::GizmoCap3D_get_Position((Vector3 *)&stack0xfffffff0,pGVar1,(MethodInfo *)0x0);
      pGVar3 = (this->fields)._._gizmo;
      if (((pGVar3 != (Gizmo *)0x0) &&
          (pCVar4 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0), pCVar4 != (Camera *)0x0)
          ) && (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar4,(MethodInfo *)0x0),
               pTVar5 != (Transform *)0x0)) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
        uVar7 = pVVar6->x;
        uVar8 = pVVar6->y;
        stack0xffffffe8 = (float)uVar8;
        fVar9 = (float)uVar7;
        handleId = (int32_t)pVVar6->z;
        pGVar3 = (this->fields)._._gizmo;
        if (((pGVar3 != (Gizmo *)0x0) &&
            (pCVar4 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
            pCVar4 != (Camera *)0x0)) &&
           (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0
           )) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
          uVar10 = pVVar6->x;
          uVar11 = pVVar6->y;
          if ((((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) ||
              ((this->fields)._settings3D != (ScaleGizmoSettings3D *)0x0)) &&
             (this_00 = (this->fields)._unformScaleDrag, this_00 != (GizmoUniformScaleDrag3D *)0x0))
          {
            this = (ScaleGizmo *)uVar8;
            fVar12 = (float)uVar7;
            fVar13 = (float)handleId;
            auVar14 = CONCAT48(fVar13,uVar15);
            fVar16 = (float)uVar10;
            auVar17 = CONCAT412(fVar16,auVar14);
            fVar18 = (float)uVar11;
            auVar19 = CONCAT416(fVar18,auVar17);
            fVar20 = pVVar6->z;
            auVar21 = CONCAT420(fVar20,auVar19);
            fVar22 = (float)this_00;
            workData._0_28_ = CONCAT424(fVar22,auVar21);
            workData = (GizmoUniformScaleDrag3D_WorkData)CONCAT1228(auVar23,workData._0_28_);
            GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
                      (this_00,workData,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_OnGizmoRender
               (ScaleGizmo *this,Camera *camera,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
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
    func_?(&TypeInfo__RTG__GameObjectEx);
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
  iVar1 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_02,(MethodInfo *)0x0);
  if (1 < iVar1) {
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
     (method_00 = (MethodInfo *)camera,
     this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_GetRenderSortedSliders
                         (pGVar3,camera,(MethodInfo *)0x0),
     this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffdc,this_03,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                       );
    RVar6 = pLVar5->_current;
    while (bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                             ), bVar7 != 0) {
      if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
      (**(code **)(*(int *)RVar6 + 0x130))();
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
               ,method_00);
    pGVar8 = (this->fields)._xySlider;
    if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
      (*(code *)(pGVar8->klass->vtable).Render_1.method)();
      pGVar8 = (this->fields)._yzSlider;
      if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
        (*(code *)(pGVar8->klass->vtable).Render_1.method)();
        pGVar8 = (this->fields)._zxSlider;
        if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
          (*(code *)(pGVar8->klass->vtable).Render_1.method)();
          pGVar2 = (this->fields)._midCap;
          if (pGVar2 != (GizmoCap3D *)0x0) {
            pCVar9 = camera;
            (*(code *)(pGVar2->klass->vtable).Render_1.method)();
            pSVar10 = (this->fields)._sharedLookAndFeel3D;
            if ((pSVar10 != (ScaleGizmoLookAndFeel3D *)0x0) ||
               (pSVar10 = (this->fields)._lookAndFeel3D, pSVar10 != (ScaleGizmoLookAndFeel3D *)0x0)) {
              if ((pSVar10->fields)._isScaleGuideVisible == 0) {
code_?:
                *unaff_FS_OFFSET = pCVar9;
                return;
              }
              this_00 = (DataTable *)(this->fields)._._gizmo;
              if (this_00 != (DataTable *)0x0) {
                bVar7 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                                  (this_00,(MethodInfo *)0x0);
                if (bVar7 == 0) goto code_?;
                this_01 = (this->fields)._._gizmo;
                if (this_01 != (Gizmo *)0x0) {
                  RVar6 = (RegexCharClass_SingleRange)
                           UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                           PointerEventBase`1[System::Object]::
                           PointerEventBase_1_System_Object__get_pointerType
                                     ((PointerEventBase_1_System_Object_ *)this_01,(MethodInfo *)0x0
                                     );
                  pGVar3 = (this->fields)._axesSliders;
                  if (pGVar3 != (GizmoLineSlider3DCollection *)0x0) {
                    bVar7 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains_1
                                      (pGVar3,(int32_t)RVar6,(MethodInfo *)0x0);
                    if (bVar7 == 0) {
                      pGVar3 = (this->fields)._axesSliders;
                      if (pGVar3 == (GizmoLineSlider3DCollection *)0x0) goto code_?;
                      bVar7 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ContainsCapId
                                        (pGVar3,(int32_t)RVar6,(MethodInfo *)0x0);
                      if (bVar7 == 0) {
                        pGVar4 = (this->fields)._dblSliders;
                        if (pGVar4 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
                        bVar7 = GizmoPlaneSlider3DCollection::
                                GizmoPlaneSlider3DCollection_Contains_1
                                          (pGVar4,(int32_t)RVar6,(MethodInfo *)0x0);
                        if (bVar7 == 0) {
                          pGVar2 = (this->fields)._midCap;
                          if (pGVar2 == (GizmoCap3D *)0x0) goto code_?;
                          RVar11 = (RegexCharClass_SingleRange)
                                   UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject
                                   ::AndroidJavaObject__GetRawClass
                                             ((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
                          if (RVar11 != RVar6) goto code_?;
                        }
                      }
                    }
                    RVar6 = (RegexCharClass_SingleRange)(this->fields)._scaleGuideTargetObjects;
                    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    gameObjects = GameObjectEx::GameObjectEx_FilterParentsOnly_1
                                            ((IEnumerable_1_UnityEngine_GameObject_ *)RVar6,
                                             (MethodInfo *)0x0);
                    if (RVar6 != (RegexCharClass_SingleRange)0x0) {
                      GizmoScaleGuide::GizmoScaleGuide_Render
                                ((GizmoScaleGuide *)RVar6,
                                 (IEnumerable_1_UnityEngine_GameObject_ *)gameObjects,camera,
                                 (MethodInfo *)0x0);
                      pCVar9 = camera;
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
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_OnGizmoUpdateBegin
               (ScaleGizmo *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedSettings3D;
  pGVar2 = (this->fields)._unformScaleDrag;
  if (((pSVar1 != (ScaleGizmoSettings3D *)0x0) ||
      (pSVar1 = (this->fields)._settings3D, pSVar1 != (ScaleGizmoSettings3D *)0x0)) &&
     (pGVar3 = (pSVar1->fields)._sglSliderSettings,
     pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0)) {
    if (pGVar3->max_length == 0) goto code_?;
    if ((pGVar3->vector[0] != (GizmoLineSlider3DSettings *)0x0) &&
       (pGVar2 != (GizmoUniformScaleDrag3D *)0x0)) {
      GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                ((GizmoScreenDrag *)pGVar2,(pGVar3->vector[0]->fields)._scaleSensitivity,
                 (MethodInfo *)0x0);
      if ((this->fields)._useSnapEnableHotkey == 0) {
code_?:
        if ((this->fields)._useMultiAxisScaleModeHotkey == 0) {
code_?:
          pSVar4 = (this->fields)._sharedLookAndFeel3D;
          pGVar5 = (this->fields)._pstvXSlider;
          if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0) ||
              (pSVar4 = (this->fields)._lookAndFeel3D, pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0))
             && (pBVar6 = (pSVar4->fields)._sglSliderVis, pBVar6 != (Boolean__Array *)0x0)) {
            if (pBVar6->max_length == 0) goto code_?;
            if (pGVar5 != (GizmoLineSlider3D *)0x0) {
              GizmoSlider::GizmoSlider_SetVisible
                        ((GizmoSlider *)pGVar5,pBVar6->vector[0] != 0,(MethodInfo *)0x0);
              pSVar4 = (this->fields)._sharedLookAndFeel3D;
              pGVar5 = (this->fields)._pstvXSlider;
              if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                  (pSVar4 = (this->fields)._lookAndFeel3D,
                  pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
                 (pBVar6 = (pSVar4->fields)._sglSliderCapVis, pBVar6 != (Boolean__Array *)0x0)) {
                if (pBVar6->max_length == 0) goto code_?;
                if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                            (pGVar5,pBVar6->vector[0] != 0,(MethodInfo *)0x0);
                  pSVar4 = (this->fields)._sharedLookAndFeel3D;
                  pGVar5 = (this->fields)._pstvYSlider;
                  if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                      (pSVar4 = (this->fields)._lookAndFeel3D,
                      pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
                     (pBVar6 = (pSVar4->fields)._sglSliderVis, pBVar6 != (Boolean__Array *)0x0)) {
                    if (pBVar6->max_length < 2) goto code_?;
                    if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                      GizmoSlider::GizmoSlider_SetVisible
                                ((GizmoSlider *)pGVar5,pBVar6->vector[1] != 0,(MethodInfo *)0x0);
                      pSVar4 = (this->fields)._sharedLookAndFeel3D;
                      pGVar5 = (this->fields)._pstvYSlider;
                      if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                          (pSVar4 = (this->fields)._lookAndFeel3D,
                          pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
                         (pBVar6 = (pSVar4->fields)._sglSliderCapVis,
                         pBVar6 != (Boolean__Array *)0x0)) {
                        if (pBVar6->max_length < 2) goto code_?;
                        if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                    (pGVar5,pBVar6->vector[1] != 0,(MethodInfo *)0x0);
                          pSVar4 = (this->fields)._sharedLookAndFeel3D;
                          pGVar5 = (this->fields)._pstvZSlider;
                          if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                              (pSVar4 = (this->fields)._lookAndFeel3D,
                              pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
                             (pBVar6 = (pSVar4->fields)._sglSliderVis,
                             pBVar6 != (Boolean__Array *)0x0)) {
                            if (pBVar6->max_length < 3) goto code_?;
                            if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                              GizmoSlider::GizmoSlider_SetVisible
                                        ((GizmoSlider *)pGVar5,pBVar6->vector[2] != 0,
                                         (MethodInfo *)0x0);
                              pSVar4 = (this->fields)._sharedLookAndFeel3D;
                              pGVar5 = (this->fields)._pstvZSlider;
                              if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                                  (pSVar4 = (this->fields)._lookAndFeel3D,
                                  pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
                                 (pBVar6 = (pSVar4->fields)._sglSliderCapVis,
                                 pBVar6 != (Boolean__Array *)0x0)) {
                                if (pBVar6->max_length < 3) goto code_?;
                                if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                  GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                            (pGVar5,pBVar6->vector[2] != 0,(MethodInfo *)0x0);
                                  pSVar4 = (this->fields)._sharedLookAndFeel3D;
                                  pGVar5 = (this->fields)._negXSlider;
                                  if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                                      (pSVar4 = (this->fields)._lookAndFeel3D,
                                      pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
                                     (pBVar6 = (pSVar4->fields)._sglSliderVis,
                                     pBVar6 != (Boolean__Array *)0x0)) {
                                    if (pBVar6->max_length < 4) goto code_?;
                                    if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                      GizmoSlider::GizmoSlider_SetVisible
                                                ((GizmoSlider *)pGVar5,pBVar6->vector[3] != 0,
                                                 (MethodInfo *)0x0);
                                      pSVar4 = (this->fields)._sharedLookAndFeel3D;
                                      pGVar5 = (this->fields)._negXSlider;
                                      if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                                          (pSVar4 = (this->fields)._lookAndFeel3D,
                                          pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
                                         (pBVar6 = (pSVar4->fields)._sglSliderCapVis,
                                         pBVar6 != (Boolean__Array *)0x0)) {
                                        if (pBVar6->max_length < 4) goto code_?;
                                        if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                          GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                                    (pGVar5,pBVar6->vector[3] != 0,(MethodInfo *)0x0
                                                    );
                                          pSVar4 = (this->fields)._sharedLookAndFeel3D;
                                          pGVar5 = (this->fields)._negYSlider;
                                          if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                                              (pSVar4 = (this->fields)._lookAndFeel3D,
                                              pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
                                             (pBVar6 = (pSVar4->fields)._sglSliderVis,
                                             pBVar6 != (Boolean__Array *)0x0)) {
                                            if (pBVar6->max_length < 5) goto code_?;
                                            if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                              GizmoSlider::GizmoSlider_SetVisible
                                                        ((GizmoSlider *)pGVar5,
                                                         pBVar6->vector[4] != 0,(MethodInfo *)0x0);
                                              pSVar4 = (this->fields)._sharedLookAndFeel3D;
                                              pGVar5 = (this->fields)._negYSlider;
                                              if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                                                  (pSVar4 = (this->fields)._lookAndFeel3D,
                                                  pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
                                                 (pBVar6 = (pSVar4->fields)._sglSliderCapVis,
                                                 pBVar6 != (Boolean__Array *)0x0)) {
                                                if (pBVar6->max_length < 5) goto code_?;
                                                if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                                  GizmoLineSlider3D::
                                                  GizmoLineSlider3D_Set3DCapVisible
                                                            (pGVar5,pBVar6->vector[4] != 0,
                                                             (MethodInfo *)0x0);
                                                  pSVar4 = (this->fields)._sharedLookAndFeel3D;
                                                  pGVar5 = (this->fields)._negZSlider;
                                                  if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)
                                                      || (pSVar4 = (this->fields)._lookAndFeel3D,
                                                         pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0))
                                                     && (pBVar6 = (pSVar4->fields)._sglSliderVis,
                                                        pBVar6 != (Boolean__Array *)0x0)) {
                                                    if (pBVar6->max_length < 6)
                                                    goto code_?;
                                                    if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                                      GizmoSlider::GizmoSlider_SetVisible
                                                                ((GizmoSlider *)pGVar5,
                                                                 pBVar6->vector[5] != 0,
                                                                 (MethodInfo *)0x0);
                                                      pSVar4 = (this->fields)._sharedLookAndFeel3D;
                                                      pGVar5 = (this->fields)._negZSlider;
                                                      if (((pSVar4 !=
                                                            (ScaleGizmoLookAndFeel3D *)0x0) ||
                                                          (pSVar4 = (this->fields)._lookAndFeel3D,
                                                          pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)
                                                          ) && (pBVar6 = (pSVar4->fields).
                                                                         _sglSliderCapVis,
                                                               pBVar6 != (Boolean__Array *)0x0)) {
                                                        if (pBVar6->max_length < 6)
                                                        goto code_?;
                                                        if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                                          GizmoLineSlider3D::
                                                          GizmoLineSlider3D_Set3DCapVisible
                                                                    (pGVar5,pBVar6->vector[5] != 0,
                                                                     (MethodInfo *)0x0);
                                                          if ((this->fields)._multiAxisScaleMode !=
                                                              0) {
                                                            return;
                                                          }
                                                          pSVar4 = (this->fields).
                                                                    _sharedLookAndFeel3D;
                                                          pGVar7 = (this->fields)._xySlider;
                                                          if (((pSVar4 !=
                                                                (ScaleGizmoLookAndFeel3D *)0x0) ||
                                                              (pSVar4 = (this->fields).
                                                                         _lookAndFeel3D,
                                                              pSVar4 !=
                                                              (ScaleGizmoLookAndFeel3D *)0x0)) &&
                                                             (pBVar6 = (pSVar4->fields).
                                                                       _dblSliderVis,
                                                             pBVar6 != (Boolean__Array *)0x0)) {
                                                            if (pBVar6->max_length == 0)
                                                            goto code_?;
                                                            if (pGVar7 != (GizmoPlaneSlider3D *)0x0)
                                                            {
                                                              GizmoSlider::GizmoSlider_SetVisible
                                                                        ((GizmoSlider *)pGVar7,
                                                                         pBVar6->vector[0] != 0,
                                                                         (MethodInfo *)0x0);
                                                              pGVar7 = (this->fields)._xySlider;
                                                              if (pGVar7 != (GizmoPlaneSlider3D *)
                                                                            0x0) {
                                                                GizmoPlaneSlider3D::
                                                                GizmoPlaneSlider3D_SetBorderVisible
                                                                          (pGVar7,(pGVar7->fields)._
                                                                                  ._isVisible,
                                                                           (MethodInfo *)0x0);
                                                                pSVar4 = (this->fields).
                                                                          _sharedLookAndFeel3D;
                                                                pGVar7 = (this->fields)._yzSlider;
                                                                if (((pSVar4 !=
                                                                      (ScaleGizmoLookAndFeel3D *)0x0
                                                                     ) || (pSVar4 = (this->fields).
                                                                                     _lookAndFeel3D,
                                                                          pSVar4 !=
                                                                          (ScaleGizmoLookAndFeel3D *
                                                                          )0x0)) &&
                                                                   (pBVar6 = (pSVar4->fields).
                                                                             _dblSliderVis,
                                                                   pBVar6 != (Boolean__Array *)0x0))
                                                                {
                                                                  if (pBVar6->max_length < 2)
                                                                  goto code_?;
                                                                  if (pGVar7 != (GizmoPlaneSlider3D
                                                                                 *)0x0) {
                                                                    GizmoSlider::
                                                                    GizmoSlider_SetVisible
                                                                              ((GizmoSlider *)pGVar7
                                                                               ,pBVar6->vector[1] !=
                                                                                0,(MethodInfo *)0x0)
                                                                    ;
                                                                    pGVar7 = (this->fields).
                                                                             _yzSlider;
                                                                    if (pGVar7 != (
                                                  GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetBorderVisible
                                                              (pGVar7,(pGVar7->fields)._._isVisible,
                                                               (MethodInfo *)0x0);
                                                    pSVar4 = (this->fields)._sharedLookAndFeel3D;
                                                    pGVar7 = (this->fields)._zxSlider;
                                                    if (((pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0)
                                                        || (pSVar4 = (this->fields)._lookAndFeel3D,
                                                           pSVar4 != (ScaleGizmoLookAndFeel3D *)0x0
                                                           )) && (pBVar6 = (pSVar4->fields).
                                                                           _dblSliderVis,
                                                                 pBVar6 != (Boolean__Array *)0x0)) {
                                                      if (pBVar6->max_length < 3)
                                                      goto code_?;
                                                      if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                                                        GizmoSlider::GizmoSlider_SetVisible
                                                                  ((GizmoSlider *)pGVar7,
                                                                   pBVar6->vector[2] != 0,
                                                                   (MethodInfo *)0x0);
                                                        pGVar7 = (this->fields)._zxSlider;
                                                        if (pGVar7 != (GizmoPlaneSlider3D *)0x0) {
                                                          GizmoPlaneSlider3D::
                                                          GizmoPlaneSlider3D_SetBorderVisible
                                                                    (pGVar7,(pGVar7->fields)._.
                                                                            _isVisible,
                                                                     (MethodInfo *)0x0);
                                                          this_03 = (this->fields)._._gizmo;
                                                          if (this_03 != (Gizmo *)0x0) {
                                                            camera = Gizmo::Gizmo_get_FocusCamera
                                                                               (this_03,(MethodInfo
                                                                                         *)0x0);
                                                            ScaleGizmo_PlaceDblSlidersInSliderPlanes
                                                                      (this,camera,(MethodInfo *)0x0
                                                                      );
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
        else {
          pSVar8 = (this->fields)._sharedHotkeys;
          if (((pSVar8 != (ScaleGizmoHotkeys *)0x0) ||
              (pSVar8 = (this->fields)._hotkeys, pSVar8 != (ScaleGizmoHotkeys *)0x0)) &&
             (pHVar9 = (pSVar8->fields)._changeMultiAxisMode, pHVar9 != (Hotkeys *)0x0)) {
            bVar10 = Hotkeys::Hotkeys_IsActive(pHVar9,1,(MethodInfo *)0x0);
            if (bVar10 != 0) {
              ScaleGizmo_SetMultiAxisScaleMode
                        (this,GizmoMultiAxisScaleMode__Enum_DoubleAxis,(MethodInfo *)0x0);
              goto code_?;
            }
            this_01 = (DataTable *)(this->fields)._._gizmo;
            if (this_01 != (DataTable *)0x0) {
              bVar10 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                                (this_01,(MethodInfo *)0x0);
              if ((bVar10 != 0) || ((this->fields)._multiAxisScaleMode == 1)) goto code_?;
              (this->fields)._multiAxisScaleMode = 1;
              pGVar11 = (this->fields)._dblSliders;
              if (pGVar11 != (GizmoPlaneSlider3DCollection *)0x0) {
                GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                          (pGVar11,0,1,(MethodInfo *)0x0);
                this_02 = (this->fields)._midCap;
                if (this_02 != (GizmoCap3D *)0x0) {
                  GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_02,1,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        pSVar8 = (this->fields)._sharedHotkeys;
        if (((pSVar8 != (ScaleGizmoHotkeys *)0x0) ||
            (pSVar8 = (this->fields)._hotkeys, pSVar8 != (ScaleGizmoHotkeys *)0x0)) &&
           (pHVar9 = (pSVar8->fields)._enableSnapping, pHVar9 != (Hotkeys *)0x0)) {
          bVar10 = Hotkeys::Hotkeys_IsActive(pHVar9,1,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._unformScaleDrag;
          if (pGVar2 != (GizmoUniformScaleDrag3D *)0x0) {
            (pGVar2->fields)._._isSnapEnabled = bVar10;
            this_00 = (this->fields)._axesSliders;
            if (this_00 != (GizmoLineSlider3DCollection *)0x0) {
              GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetSnapEnabled
                        (this_00,bVar10,(MethodInfo *)0x0);
              pGVar11 = (this->fields)._dblSliders;
              if (pGVar11 != (GizmoPlaneSlider3DCollection *)0x0) {
                GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                          (pGVar11,(bool)this_00,(MethodInfo *)0x0);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
        this_01 = (this->fields)._midCap;
        if (this_01 != (GizmoCap3D *)0x0) {
          pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                   AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_01,(MethodInfo *)0x0);
          return pvVar3 == (void *)handleId;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
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
                (pGVar1,(pGVar2->fields)._transform,PlaneId__Enum_XY,(this->fields)._pstvXSlider,
                 (this->fields)._pstvYSlider,camera,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields)._yzSlider;
    if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar1->fields)._._isVisible != 0) {
        pGVar2 = (this->fields)._._gizmo;
        if (pGVar2 == (Gizmo *)0x0) goto code_?;
        GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                  (pGVar1,(pGVar2->fields)._transform,PlaneId__Enum_YZ,(this->fields)._pstvYSlider,
                   (this->fields)._pstvZSlider,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._zxSlider;
      if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
        if ((pGVar1->fields)._._isVisible != 0) {
          pGVar2 = (this->fields)._._gizmo;
          if (pGVar2 == (Gizmo *)0x0) goto code_?;
          GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                    (pGVar1,(pGVar2->fields)._transform,PlaneId__Enum_ZX,(this->fields)._pstvZSlider
                     ,(this->fields)._pstvXSlider,camera,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMultiAxisScaleMode(GizmoMultiAxisScaleMode) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_SetMultiAxisScaleMode
               (ScaleGizmo *this,GizmoMultiAxisScaleMode__Enum scaleMode,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if ((bVar1 != 0) || (scaleMode == (this->fields)._multiAxisScaleMode)) {
      return;
    }
    (this->fields)._multiAxisScaleMode = scaleMode;
    if (scaleMode == GizmoMultiAxisScaleMode__Enum_DoubleAxis) {
      pGVar2 = (this->fields)._dblSliders;
      if (pGVar2 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                (pGVar2,1,1,(MethodInfo *)0x0);
      pGVar3 = (this->fields)._midCap;
    }
    else {
      if (scaleMode != GizmoMultiAxisScaleMode__Enum_Uniform) {
        return;
      }
      pGVar2 = (this->fields)._dblSliders;
      if (pGVar2 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                (pGVar2,0,1,(MethodInfo *)0x0);
      pGVar3 = (this->fields)._midCap;
    }
    if (pGVar3 != (GizmoCap3D *)0x0) {
      if ((char)in_stack_4[4] != in_stack_5) {
        *(char *)(in_stack_4 + 4) = in_stack_5;
        uStack6 = *(undefined4 *)(*in_stack_4 + 300);
        (**(code **)(*in_stack_4 + 0x128))();
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      this_01 = (this->fields)._dblSliders;
      if (this_01 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                  (this_01,isEnabled,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_SetupSharedLookAndFeel
               (ScaleGizmo *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedLookAndFeel3D;
  if ((pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0) ||
     (pSVar1 = (this->fields)._lookAndFeel3D, pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0)) {
    pGVar2 = (pSVar1->fields)._sglSlidersLookAndFeel;
    pGVar3 = (this->fields)._pstvXSlider;
    if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
      if (pGVar2->max_length == 0) goto code_?;
      if (pGVar3 != (GizmoLineSlider3D *)0x0) {
        GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                  (pGVar3,pGVar2->vector[0],(MethodInfo *)0x0);
        pSVar1 = (this->fields)._sharedLookAndFeel3D;
        if ((pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0) ||
           (pSVar1 = (this->fields)._lookAndFeel3D, pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0)) {
          pGVar2 = (pSVar1->fields)._sglSlidersLookAndFeel;
          pGVar3 = (this->fields)._pstvYSlider;
          if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if (pGVar2->max_length < 2) goto code_?;
            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                        (pGVar3,pGVar2->vector[1],(MethodInfo *)0x0);
              pSVar1 = (this->fields)._sharedLookAndFeel3D;
              if ((pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                 (pSVar1 = (this->fields)._lookAndFeel3D, pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0))
              {
                pGVar2 = (pSVar1->fields)._sglSlidersLookAndFeel;
                pGVar3 = (this->fields)._pstvZSlider;
                if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                  if (pGVar2->max_length < 3) goto code_?;
                  if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                              (pGVar3,pGVar2->vector[2],(MethodInfo *)0x0);
                    pSVar1 = (this->fields)._sharedLookAndFeel3D;
                    if ((pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                       (pSVar1 = (this->fields)._lookAndFeel3D,
                       pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0)) {
                      pGVar3 = (this->fields)._negXSlider;
                      pGVar2 = (pSVar1->fields)._sglSlidersLookAndFeel;
                      if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                        if (pGVar2->max_length < 4) goto code_?;
                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                    (pGVar3,pGVar2->vector[3],(MethodInfo *)0x0);
                          pSVar1 = (this->fields)._sharedLookAndFeel3D;
                          if ((pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                             (pSVar1 = (this->fields)._lookAndFeel3D,
                             pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0)) {
                            pGVar3 = (this->fields)._negYSlider;
                            pGVar2 = (pSVar1->fields)._sglSlidersLookAndFeel;
                            if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                              if (pGVar2->max_length < 5) goto code_?;
                              if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                          (pGVar3,pGVar2->vector[4],(MethodInfo *)0x0);
                                pSVar1 = (this->fields)._sharedLookAndFeel3D;
                                if ((pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                                   (pSVar1 = (this->fields)._lookAndFeel3D,
                                   pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0)) {
                                  pGVar3 = (this->fields)._negZSlider;
                                  pGVar2 = (pSVar1->fields)._sglSlidersLookAndFeel;
                                  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                    if (pGVar2->max_length < 6) goto code_?;
                                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                      GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                                (pGVar3,pGVar2->vector[5],(MethodInfo *)0x0);
                                      pSVar1 = (this->fields)._sharedLookAndFeel3D;
                                      if (((pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0) ||
                                          (pSVar1 = (this->fields)._lookAndFeel3D,
                                          pSVar1 != (ScaleGizmoLookAndFeel3D *)0x0)) &&
                                         (pGVar4 = (this->fields)._midCap,
                                         pGVar4 != (GizmoCap3D *)0x0)) {
                                        ppGStack5 = &(pGVar4->fields)._sharedLookAndFeel;
                                        *ppGStack5 = (pSVar1->fields)._midCapLookAndFeel;
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
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupSharedSettings() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_SetupSharedSettings
               (ScaleGizmo *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedSettings3D;
  if ((pSVar1 != (ScaleGizmoSettings3D *)0x0) ||
     (pSVar1 = (this->fields)._settings3D, pSVar1 != (ScaleGizmoSettings3D *)0x0)) {
    pGVar2 = (pSVar1->fields)._sglSliderSettings;
    pGVar3 = (this->fields)._pstvXSlider;
    if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
      if (pGVar2->max_length == 0) goto code_?;
      pGVar4 = pGVar2->vector[0];
      if (pGVar3 != (GizmoLineSlider3D *)0x0) {
        ppGVar5 = &(pGVar3->fields)._sharedSettings;
        *ppGVar5 = pGVar4;
        func_?(ppGVar5,&stack0xfffffffc,&UNK_?,ppGVar5,pGVar4);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ScaleGizmo() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo__ctor(ScaleGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoLineSlider3DCollection);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DCollection);
    func_?(&TypeInfo__RTG__GizmoScaleGuide);
    func_?(&TypeInfo__RTG__GizmoUniformScaleDrag3D);
    func_?(&TypeInfo__RTG__ScaleGizmoHotkeys);
    func_?(&TypeInfo__RTG__ScaleGizmoLookAndFeel3D);
    func_?(&TypeInfo__RTG__ScaleGizmoSettings3D);
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
  this_02 = (GizmoUniformScaleDrag3D *)func_?(TypeInfo__RTG__GizmoUniformScaleDrag3D);
  GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D__ctor(this_02,(MethodInfo *)0x0);
  ppGVar3 = &(this->fields)._unformScaleDrag;
  *ppGVar3 = this_02;
  func_?(ppGVar3,this_02);
  this_03 = (GizmoScaleGuide *)func_?(TypeInfo__RTG__GizmoScaleGuide);
  GizmoScaleGuide::GizmoScaleGuide__ctor(this_03,(MethodInfo *)0x0);
  (this->fields)._scaleGuide = this_03;
  func_?();
  this_04 = (ScaleGizmoLookAndFeel3D *)func_?(TypeInfo__RTG__ScaleGizmoLookAndFeel3D);
  ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D__ctor(this_04,(MethodInfo *)0x0);
  ppSVar4 = &(this->fields)._lookAndFeel3D;
  *ppSVar4 = this_04;
  func_?(ppSVar4,this_04);
  this_05 = (ScaleGizmoSettings3D *)func_?(TypeInfo__RTG__ScaleGizmoSettings3D);
  ScaleGizmoSettings3D::ScaleGizmoSettings3D__ctor(this_05,(MethodInfo *)0x0);
  ppSVar5 = &(this->fields)._settings3D;
  *ppSVar5 = this_05;
  func_?(ppSVar5,this_05);
  this_06 = (ScaleGizmoHotkeys *)func_?(TypeInfo__RTG__ScaleGizmoHotkeys);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pHVar6 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar6,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar6 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar6,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar6->fields)._lCtrl = 1;
    (this_06->fields)._enableSnapping = pHVar6;
    func_?();
    pHVar6 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar6,StringLiteral_Change_multi_axis_mode,(HotkeysStaticData)0x0,(MethodInfo *)0x0)
    ;
    if (pHVar6 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar6,KeyCode__Enum_None,(MethodInfo *)0x0);
      (pHVar6->fields)._lShift = 1;
      (this_06->fields)._changeMultiAxisMode = pHVar6;
      func_?();
      Settings::Settings__ctor((Settings *)this_06,(MethodInfo *)0x0);
      (this->fields)._hotkeys = this_06;
      func_?();
      (this->fields)._useSnapEnableHotkey = 1;
      (this->fields)._useMultiAxisScaleModeHotkey = 1;
      GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* ScaleGizmoHotkeys get_Hotkeys() */

ScaleGizmoHotkeys *
Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_get_Hotkeys(ScaleGizmo *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedHotkeys;
  if (pSVar1 == (ScaleGizmoHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return pSVar1;
}


/* ScaleGizmoLookAndFeel3D get_LookAndFeel3D() */

ScaleGizmoLookAndFeel3D *
Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_get_LookAndFeel3D
          (ScaleGizmo *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedLookAndFeel3D;
  if (pSVar1 == (ScaleGizmoLookAndFeel3D *)0x0) {
    return (this->fields)._lookAndFeel3D;
  }
  return pSVar1;
}


/* ScaleGizmoSettings3D get_Settings3D() */

ScaleGizmoSettings3D *
Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_get_Settings3D(ScaleGizmo *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedSettings3D;
  if (pSVar1 == (ScaleGizmoSettings3D *)0x0) {
    return (this->fields)._settings3D;
  }
  return pSVar1;
}


/* Void set_SharedHotkeys(ScaleGizmoHotkeys) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_set_SharedHotkeys
               (ScaleGizmo *this,ScaleGizmoHotkeys *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    ppSVar2 = &(this->fields)._sharedHotkeys;
    *ppSVar2 = value;
    func_?(ppSVar2,value);
  }
  return;
}


/* Void set_SharedLookAndFeel3D(ScaleGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_set_SharedLookAndFeel3D
               (ScaleGizmo *this,ScaleGizmoLookAndFeel3D *value,MethodInfo *method)

{
  ppSVar1 = &(this->fields)._sharedLookAndFeel3D;
  *ppSVar1 = value;
  func_?(ppSVar1,value);
  ScaleGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings3D(ScaleGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_set_SharedSettings3D
               (ScaleGizmo *this,ScaleGizmoSettings3D *value,MethodInfo *method)

{
  ppSVar1 = &(this->fields)._sharedSettings3D;
  *ppSVar1 = value;
  func_?(ppSVar1,value);
  ScaleGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
  return;
}

