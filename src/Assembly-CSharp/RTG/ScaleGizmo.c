
/* Single GetZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_GetZoomFactor
                (ScaleGizmo *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  iVar1 = 0x50;
  if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
    iVar1 = 0x60;
  }
  iVar1 = *(int *)((int)&this->klass + iVar1);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x14), iVar1 != 0)) {
    if (*(char *)(iVar1 + 0x18) == '\0') {
      return 1.0;
    }
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      fVar2 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single GetZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_GetZoomFactor_1
                (ScaleGizmo *this,Vector3 position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar1 = 0x50;
  if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
    iVar1 = 0x60;
  }
  iVar1 = *(int *)((int)&this->klass + iVar1);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x14), iVar1 != 0)) {
    if (*(char *)(iVar1 + 0x18) != '\0') {
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar2 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar2;
    }
    return 1.0;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
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
  (this->fields)._midCap = pGVar3;
  func_?(&(this->fields)._midCap,pGVar3);
  pGVar3 = (this->fields)._midCap;
  if (pGVar3 != (GizmoCap3D *)0x0) {
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._unformScaleDrag,(MethodInfo *)0x0);
    iVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_SizeOf_23((MethodInfo *)0x0);
    pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::
                      Datatype_hexBinary_get_TypeCode((Datatype_hexBinary *)0x0,(MethodInfo *)this);
    pGVar4 = TypeInfo__RTG__GizmoLineSlider3D;
    pGVar5 = (GizmoLineSlider3D *)func_?();
    GizmoLineSlider3D::GizmoLineSlider3D__ctor
              (pGVar5,pGVar1,iVar2,(int32_t)pGVar1,(MethodInfo *)0x0);
    (this->fields)._pstvXSlider = pGVar5;
    func_?(&(this->fields)._pstvXSlider,pGVar5);
    pGVar5 = (this->fields)._pstvXSlider;
    if (pGVar5 != (GizmoLineSlider3D *)0x0) {
      GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                (pGVar5,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
      pGVar5 = (this->fields)._pstvXSlider;
      if (pGVar5 != (GizmoLineSlider3D *)0x0) {
        GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                  (pGVar5,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
        pGVar5 = (this->fields)._pstvXSlider;
        if (pGVar5 != (GizmoLineSlider3D *)0x0) {
          GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex(pGVar5,0,(MethodInfo *)0x0);
          handleId = System.Core.dll::System::Linq::Expressions::MemberExpression::
                     MemberExpression_get_NodeType((MemberExpression *)0x0,(MethodInfo *)pGVar4);
          pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_QName::
                            Datatype_QName_get_TypeCode((Datatype_QName *)0x0,(MethodInfo *)this);
          pGVar4 = TypeInfo__RTG__GizmoLineSlider3D;
          pGVar5 = (GizmoLineSlider3D *)func_?();
          GizmoLineSlider3D::GizmoLineSlider3D__ctor
                    (pGVar5,pGVar1,handleId,(int32_t)pGVar1,(MethodInfo *)0x0);
          (this->fields)._negXSlider = pGVar5;
          func_?(&(this->fields)._negXSlider,pGVar5);
          pGVar5 = (this->fields)._negXSlider;
          if (pGVar5 != (GizmoLineSlider3D *)0x0) {
            GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                      (pGVar5,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
            pGVar5 = (this->fields)._negXSlider;
            if (pGVar5 != (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                        (pGVar5,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
              pGVar5 = (this->fields)._negXSlider;
              if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
                          (pGVar5,0,(MethodInfo *)0x0);
                XVar6 = System.Xml.dll::System::Xml::Schema::Datatype_yearMonth::
                        Datatype_yearMonth_get_TypeCode
                                  ((Datatype_yearMonth *)0x0,(MethodInfo *)pGVar4);
                pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
                                  Datatype_base64Binary_get_TypeCode
                                            ((Datatype_base64Binary *)0x0,(MethodInfo *)this);
                pGVar5 = (GizmoLineSlider3D *)func_?();
                GizmoLineSlider3D::GizmoLineSlider3D__ctor
                          (pGVar5,pGVar1,XVar6,(int32_t)pGVar1,(MethodInfo *)0x0);
                (this->fields)._pstvYSlider = pGVar5;
                func_?(&(this->fields)._pstvYSlider,pGVar5);
                pGVar5 = (this->fields)._pstvYSlider;
                if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                            (pGVar5,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
                  pGVar5 = (this->fields)._pstvYSlider;
                  if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                              (pGVar5,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                    pGVar5 = (this->fields)._pstvYSlider;
                    if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                      GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
                                (pGVar5,1,(MethodInfo *)0x0);
                      iVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                              UnsafeUtility::UnsafeUtility_SizeOf_11((MethodInfo *)0x0);
                      pGVar1 = (Gizmo *)System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::
                                        Datatype_NOTATION_get_TypeCode
                                                  ((Datatype_NOTATION *)0x0,(MethodInfo *)this);
                      pGVar4 = TypeInfo__RTG__GizmoLineSlider3D;
                      pGVar5 = (GizmoLineSlider3D *)func_?();
                      GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                (pGVar5,pGVar1,iVar2,(int32_t)pGVar1,(MethodInfo *)0x0);
                      (this->fields)._negYSlider = pGVar5;
                      func_?(&(this->fields)._negYSlider,pGVar5);
                      pGVar5 = (this->fields)._negYSlider;
                      if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                        GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                  (pGVar5,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
                        pGVar5 = (this->fields)._negYSlider;
                        if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                    (pGVar5,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                          pGVar5 = (this->fields)._negYSlider;
                          if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                            GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
                                      (pGVar5,1,(MethodInfo *)0x0);
                            XVar6 = System.Xml.dll::System::Xml::Schema::Datatype_year::
                                    Datatype_year_get_TypeCode
                                              ((Datatype_year *)0x0,(MethodInfo *)pGVar4);
                            pGVar1 = (Gizmo *)UnityEngine.CoreModule.dll::Unity::Collections::
                                              LowLevel::Unsafe::UnsafeUtility::
                                              UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
                            pGVar4 = TypeInfo__RTG__GizmoLineSlider3D;
                            pGVar5 = (GizmoLineSlider3D *)func_?();
                            GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                      (pGVar5,pGVar1,XVar6,(int32_t)pGVar1,(MethodInfo *)0x0);
                            (this->fields)._pstvZSlider = pGVar5;
                            func_?(&(this->fields)._pstvZSlider,pGVar5);
                            pGVar5 = (this->fields)._pstvZSlider;
                            if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                              GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                        (pGVar5,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
                              pGVar5 = (this->fields)._pstvZSlider;
                              if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                          (pGVar5,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                                pGVar5 = (this->fields)._pstvZSlider;
                                if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                  GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
                                            (pGVar5,2,(MethodInfo *)0x0);
                                  XVar6 = System.Xml.dll::System::Xml::Schema::Datatype_month::
                                          Datatype_month_get_TypeCode
                                                    ((Datatype_month *)0x0,(MethodInfo *)pGVar4);
                                  capHandleId = System.Xml.dll::System::Xml::Schema::
                                                Datatype_normalizedStringV1Compat::
                                                Datatype_normalizedStringV1Compat_get_TypeCode
                                                          ((Datatype_normalizedStringV1Compat *)0x0,
                                                           (MethodInfo *)pGVar4);
                                  pGVar5 = (GizmoLineSlider3D *)
                                           func_?(TypeInfo__RTG__GizmoLineSlider3D);
                                  GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                            (pGVar5,(Gizmo *)0x0,XVar6,capHandleId,(MethodInfo *)0x0
                                            );
                                  (this->fields)._negZSlider = pGVar5;
                                  func_?(&(this->fields)._negZSlider,pGVar5);
                                  pGVar5 = (this->fields)._negZSlider;
                                  if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                    GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                              (pGVar5,GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0
                                              );
                                    pGVar5 = (this->fields)._negZSlider;
                                    if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                      GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                                (pGVar5,2,AxisSign__Enum_Negative,(MethodInfo *)0x0)
                                      ;
                                      pGVar5 = (this->fields)._negZSlider;
                                      if (pGVar5 != (GizmoLineSlider3D *)0x0) {
                                        GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
                                                  (pGVar5,2,(MethodInfo *)0x0);
                                        pGVar7 = (this->fields)._axesSliders;
                                        if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                          GizmoLineSlider3DCollection::
                                          GizmoLineSlider3DCollection_Add
                                                    (pGVar7,(this->fields)._pstvXSlider,
                                                     (MethodInfo *)0x0);
                                          pGVar7 = (this->fields)._axesSliders;
                                          if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                            GizmoLineSlider3DCollection::
                                            GizmoLineSlider3DCollection_Add
                                                      (pGVar7,(this->fields)._pstvYSlider,
                                                       (MethodInfo *)0x0);
                                            pGVar7 = (this->fields)._axesSliders;
                                            if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                              GizmoLineSlider3DCollection::
                                              GizmoLineSlider3DCollection_Add
                                                        (pGVar7,(this->fields)._pstvZSlider,
                                                         (MethodInfo *)0x0);
                                              pGVar7 = (this->fields)._axesSliders;
                                              if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                                GizmoLineSlider3DCollection::
                                                GizmoLineSlider3DCollection_Add
                                                          (pGVar7,(this->fields)._negXSlider,
                                                           (MethodInfo *)0x0);
                                                pGVar7 = (this->fields)._axesSliders;
                                                if (pGVar7 != (GizmoLineSlider3DCollection *)0x0) {
                                                  GizmoLineSlider3DCollection::
                                                  GizmoLineSlider3DCollection_Add
                                                            (pGVar7,(this->fields)._negYSlider,
                                                             (MethodInfo *)0x0);
                                                  pGVar7 = (this->fields)._axesSliders;
                                                  if (pGVar7 != (GizmoLineSlider3DCollection *)0x0)
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                    GizmoLineSlider3DCollection_Add
                                                              (pGVar7,(this->fields)._negZSlider,
                                                               (MethodInfo *)0x0);
                                                    pGVar3 = (this->fields)._midCap;
                                                    pGVar7 = (this->fields)._axesSliders;
                                                    if (pGVar3 != (GizmoCap3D *)0x0) {
                                                      priority = Newtonsoft.Json.dll::Newtonsoft::
                                                                 Json::Converters::
                                                                 XDocumentTypeWrapper::
                                                                                                                                  
                                                  XDocumentTypeWrapper_get_InternalSubset
                                                            ((XDocumentTypeWrapper *)pGVar3,
                                                             (MethodInfo *)0x0);
                                                  if (pGVar7 != (GizmoLineSlider3DCollection *)0x0)
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar7,(Priority *)priority,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._midCap;
                                                  pGVar7 = (this->fields)._axesSliders;
                                                  if (pGVar3 != (GizmoCap3D *)0x0) {
                                                    handleId_00 = UnityEngine.AndroidJNIModule.dll::
                                                                  UnityEngine::AndroidJavaObject::
                                                                  AndroidJavaObject__GetRawClass
                                                                            ((AndroidJavaObject *)
                                                                             pGVar3,(MethodInfo *)
                                                                                    0x0);
                                                    pIVar8 = (IEnumerable_1_System_Int32_ *)
                                                              func_?(
                                                  TypeInfo__System__Int32,3);
                                                  if (pIVar8 != (IEnumerable_1_System_Int32_ *)0x0)
                                                  {
                                                    if ((pIVar8[1].monitor < (MonitorData *)0x2) ||
                                                       (pIVar8[2].monitor = (MonitorData *)0x1,
                                                       pIVar8[1].monitor < (MonitorData *)0x3))
                                                    goto code_?;
                                                    pIVar8[3].klass =
                                                         (IEnumerable_1_System_Int32___Class *)0x2;
                                                    if (pGVar7 != (GizmoLineSlider3DCollection *)0x0
                                                       ) {
                                                      GizmoLineSlider3DCollection::
                                                                                                            
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar7,(int32_t)handleId_00,pIVar8,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = (this->fields)._._gizmo;
                                                  XVar6 = System.Xml.dll::System::Xml::Schema::
                                                          Datatype_Name::Datatype_Name_get_TypeCode
                                                                    ((Datatype_Name *)0x0,
                                                                     (MethodInfo *)pGVar4);
                                                  pGVar9 = (GizmoPlaneSlider3D *)func_?();
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar9,pGVar1,XVar6,(MethodInfo *)0x0)
                                                  ;
                                                  (this->fields)._xySlider = pGVar9;
                                                  func_?(&(this->fields)._xySlider,pGVar9)
                                                  ;
                                                  pGVar9 = (this->fields)._xySlider;
                                                  if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar9,GizmoDragChannel__Enum_Scale,
                                                               (MethodInfo *)0x0);
                                                    pGVar9 = (this->fields)._xySlider;
                                                    if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_set_ScaleDragAxisIndexRight
                                                                (pGVar9,0,(MethodInfo *)0x0);
                                                      pGVar9 = (this->fields)._xySlider;
                                                      if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                        GizmoPlaneSlider3D::
                                                        GizmoPlaneSlider3D_set_ScaleDragAxisIndexUp
                                                                  (pGVar9,1,(MethodInfo *)0x0);
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        iVar2 = UnityEngine.CoreModule.dll::Unity::
                                                                Collections::LowLevel::Unsafe::
                                                                UnsafeUtility::
                                                                UnsafeUtility_SizeOf_25
                                                                          ((MethodInfo *)0x0);
                                                        method_00 = 
                                                  TypeInfo__RTG__GizmoPlaneSlider3D;
                                                  pGVar9 = (GizmoPlaneSlider3D *)func_?();
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar9,pGVar1,iVar2,(MethodInfo *)0x0)
                                                  ;
                                                  (this->fields)._yzSlider = pGVar9;
                                                  func_?(&(this->fields)._yzSlider,pGVar9)
                                                  ;
                                                  pGVar9 = (this->fields)._yzSlider;
                                                  if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar9,GizmoDragChannel__Enum_Scale,
                                                               (MethodInfo *)0x0);
                                                    pGVar9 = (this->fields)._yzSlider;
                                                    if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_set_ScaleDragAxisIndexRight
                                                                (pGVar9,1,(MethodInfo *)0x0);
                                                      pGVar9 = (this->fields)._yzSlider;
                                                      if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                        GizmoPlaneSlider3D::
                                                        GizmoPlaneSlider3D_set_ScaleDragAxisIndexUp
                                                                  (pGVar9,2,(MethodInfo *)0x0);
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        XVar6 = System.Xml.dll::System::Xml::Schema
                                                                ::Datatype_ID::
                                                                Datatype_ID_get_TypeCode
                                                                          ((Datatype_ID *)0x0,
                                                                           (MethodInfo *)method_00);
                                                        pGVar9 = (GizmoPlaneSlider3D *)
                                                                  func_?();
                                                        GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                                  (pGVar9,pGVar1,XVar6,
                                                                   (MethodInfo *)0x0);
                                                        (this->fields)._zxSlider = pGVar9;
                                                        func_?(&(this->fields)._zxSlider,
                                                                        pGVar9);
                                                        pGVar9 = (this->fields)._zxSlider;
                                                        if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                          GizmoPlaneSlider3D::
                                                          GizmoPlaneSlider3D_SetDragChannel
                                                                    (pGVar9,
                                                  GizmoDragChannel__Enum_Scale,(MethodInfo *)0x0);
                                                  pGVar9 = (this->fields)._zxSlider;
                                                  if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_set_ScaleDragAxisIndexRight
                                                              (pGVar9,2,(MethodInfo *)0x0);
                                                    pGVar9 = (this->fields)._zxSlider;
                                                    if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_set_ScaleDragAxisIndexUp
                                                                (pGVar9,0,(MethodInfo *)0x0);
                                                      pGVar10 = (this->fields)._dblSliders;
                                                      if (pGVar10 != (GizmoPlaneSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoPlaneSlider3DCollection::
                                                        GizmoPlaneSlider3DCollection_Add
                                                                  (pGVar10,(this->fields)._xySlider,
                                                                   (MethodInfo *)0x0);
                                                        pGVar10 = (this->fields)._dblSliders;
                                                        if (pGVar10 != (GizmoPlaneSlider3DCollection
                                                                       *)0x0) {
                                                          GizmoPlaneSlider3DCollection::
                                                          GizmoPlaneSlider3DCollection_Add
                                                                    (pGVar10,(this->fields)._yzSlider
                                                                     ,(MethodInfo *)0x0);
                                                          pGVar10 = (this->fields)._dblSliders;
                                                          if (pGVar10 != (
                                                  GizmoPlaneSlider3DCollection *)0x0) {
                                                    GizmoPlaneSlider3DCollection::
                                                    GizmoPlaneSlider3DCollection_Add
                                                              (pGVar10,(this->fields)._zxSlider,
                                                               (MethodInfo *)0x0);
                                                    pGVar9 = (this->fields)._xySlider;
                                                    pGVar7 = (this->fields)._axesSliders;
                                                    if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                      iVar2 = mscorlib.dll::System::Threading::
                                                                                                                            
                                                  SparselyPopulatedArrayFragment`1[System::Object]::
                                                  SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                                            ((
                                                  SparselyPopulatedArrayFragment_1_System_Object_ *)
                                                  pGVar9,(MethodInfo *)0x0);
                                                  pIVar8 = (IEnumerable_1_System_Int32_ *)
                                                            func_?(TypeInfo__System__Int32,
                                                                            2);
                                                  pGVar9 = (this->fields)._xySlider;
                                                  if ((pGVar9 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pIVar8 != (IEnumerable_1_System_Int32_ *)0x0)
                                                     ) {
                                                    if (pIVar8[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pIVar8[2].klass =
                                                         (IEnumerable_1_System_Int32___Class *)
                                                         (pGVar9->fields)._scaleDragAxisIndexRight;
                                                    pGVar9 = (this->fields)._xySlider;
                                                    if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                      if (pIVar8[1].monitor < (MonitorData *)0x2)
                                                      goto code_?;
                                                      pIVar8[2].monitor =
                                                           (MonitorData *)
                                                           (pGVar9->fields)._scaleDragAxisIndexUp;
                                                      if (pGVar7 != (GizmoLineSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider3DCollection::
                                                                                                                
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar7,iVar2,pIVar8,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar9 = (this->fields)._yzSlider;
                                                  pGVar7 = (this->fields)._axesSliders;
                                                  if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                    iVar2 = mscorlib.dll::System::Threading::
                                                            SparselyPopulatedArrayFragment`1[System
                                                            ::Object]::
                                                                                                                        
                                                  SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                                            ((
                                                  SparselyPopulatedArrayFragment_1_System_Object_ *)
                                                  pGVar9,(MethodInfo *)0x0);
                                                  pIVar8 = (IEnumerable_1_System_Int32_ *)
                                                            func_?(TypeInfo__System__Int32,
                                                                            2);
                                                  pGVar9 = (this->fields)._yzSlider;
                                                  if ((pGVar9 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pIVar8 != (IEnumerable_1_System_Int32_ *)0x0)
                                                     ) {
                                                    if (pIVar8[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pIVar8[2].klass =
                                                         (IEnumerable_1_System_Int32___Class *)
                                                         (pGVar9->fields)._scaleDragAxisIndexRight;
                                                    pGVar9 = (this->fields)._yzSlider;
                                                    if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                      if (pIVar8[1].monitor < (MonitorData *)0x2)
                                                      goto code_?;
                                                      pIVar8[2].monitor =
                                                           (MonitorData *)
                                                           (pGVar9->fields)._scaleDragAxisIndexUp;
                                                      if (pGVar7 != (GizmoLineSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider3DCollection::
                                                                                                                
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar7,iVar2,pIVar8,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar9 = (this->fields)._zxSlider;
                                                  pGVar7 = (this->fields)._axesSliders;
                                                  if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                    iVar2 = mscorlib.dll::System::Threading::
                                                            SparselyPopulatedArrayFragment`1[System
                                                            ::Object]::
                                                                                                                        
                                                  SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                                            ((
                                                  SparselyPopulatedArrayFragment_1_System_Object_ *)
                                                  pGVar9,(MethodInfo *)0x0);
                                                  pIVar8 = (IEnumerable_1_System_Int32_ *)
                                                            func_?(TypeInfo__System__Int32,
                                                                            2);
                                                  pGVar9 = (this->fields)._zxSlider;
                                                  if ((pGVar9 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pIVar8 != (IEnumerable_1_System_Int32_ *)0x0)
                                                     ) {
                                                    if (pIVar8[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pIVar8[2].klass =
                                                         (IEnumerable_1_System_Int32___Class *)
                                                         (pGVar9->fields)._scaleDragAxisIndexRight;
                                                    pGVar9 = (this->fields)._zxSlider;
                                                    if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                                      if (pIVar8[1].monitor < (MonitorData *)0x2)
                                                      goto code_?;
                                                      pIVar8[2].monitor =
                                                           (MonitorData *)
                                                           (pGVar9->fields)._scaleDragAxisIndexUp;
                                                      if (pGVar7 != (GizmoLineSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider3DCollection::
                                                                                                                
                                                  GizmoLineSlider3DCollection_RegisterScalerHandle
                                                            (pGVar7,iVar2,pIVar8,(MethodInfo *)0x0)
                                                  ;
                                                  this_00 = (DataTable *)(this->fields)._._gizmo;
                                                  if (this_00 != (DataTable *)0x0) {
                                                    bVar11 = System.Data.dll::System::Data::DataTable
                                                            ::DataTable_get_CaseSensitive
                                                                      (this_00,(MethodInfo *)0x0);
                                                    if ((bVar11 != 0) ||
                                                       ((this->fields)._multiAxisScaleMode == 1)) {
code_?:
                                                      ScaleGizmo_SetupSharedLookAndFeel
                                                                (this,(MethodInfo *)0x0);
                                                      ScaleGizmo_SetupSharedSettings
                                                                (this,(MethodInfo *)0x0);
                                                      return;
                                                    }
                                                    (this->fields)._multiAxisScaleMode = 1;
                                                    pGVar10 = (this->fields)._dblSliders;
                                                    if (pGVar10 != (GizmoPlaneSlider3DCollection *)
                                                                  0x0) {
                                                      GizmoPlaneSlider3DCollection::
                                                      GizmoPlaneSlider3DCollection_SetVisible
                                                                (pGVar10,0,1,(MethodInfo *)0x0);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
          iVar12 = 0x54;
          if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
            iVar12 = 100;
          }
          if ((*(int *)((int)&this->klass + iVar12) != 0) &&
             (this_00 = (this->fields)._unformScaleDrag, this_00 != (GizmoUniformScaleDrag3D *)0x0))
          {
            this = (ScaleGizmo *)uVar8;
            fVar13 = (float)uVar7;
            fVar14 = (float)handleId;
            auVar15 = CONCAT48(fVar14,uVar16);
            fVar17 = (float)uVar10;
            auVar18 = CONCAT412(fVar17,auVar15);
            fVar19 = (float)uVar11;
            auVar20 = CONCAT416(fVar19,auVar18);
            fVar21 = pVVar6->z;
            auVar22 = CONCAT420(fVar21,auVar20);
            fVar23 = (float)this_00;
            workData._0_28_ = CONCAT424(fVar23,auVar22);
            workData = (GizmoUniformScaleDrag3D_WorkData)CONCAT1228(auVar24,workData._0_28_);
            GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
                      (this_00,workData,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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
                         *)&stack0xffffffd4,this_03,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                       );
    RVar6 = pLVar5->_current;
    while (bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc4,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                             ), bVar7 != 0) {
      if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
      (**(code **)(*(int *)RVar6 + 0x130))();
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc4,
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
            pGVar9 = pGVar2->klass;
            pIVar10 = (pGVar9->vtable).OnVisibilityStateChanged.methodPtr;
            (*(code *)(pGVar9->vtable).Render_1.method)();
            iVar11 = 0x50;
            if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
              iVar11 = 0x60;
            }
            iVar11 = *(int *)((int)&this->klass + iVar11);
            if (iVar11 != 0) {
              if (*(char *)(iVar11 + 0x28) == '\0') {
code_?:
                *unaff_FS_OFFSET = pIVar10;
                return;
              }
              this_00 = (DataTable *)(this->fields)._._gizmo;
              if (this_00 != (DataTable *)0x0) {
                bVar7 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                                  (this_00,(MethodInfo *)0x0);
                if (bVar7 == 0) goto code_?;
                this_01 = (this->fields)._._gizmo;
                if (this_01 != (Gizmo *)0x0) {
                  sliderHandleId =
                       UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                       PointerEventBase`1[System::Object]::
                       PointerEventBase_1_System_Object__get_pointerType
                                 ((PointerEventBase_1_System_Object_ *)this_01,(MethodInfo *)0x0);
                  pGVar3 = (this->fields)._axesSliders;
                  if (pGVar3 != (GizmoLineSlider3DCollection *)0x0) {
                    bVar7 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains_1
                                      (pGVar3,(int32_t)sliderHandleId,(MethodInfo *)0x0);
                    if (bVar7 == 0) {
                      pGVar3 = (this->fields)._axesSliders;
                      if (pGVar3 == (GizmoLineSlider3DCollection *)0x0) goto code_?;
                      bVar7 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ContainsCapId
                                        (pGVar3,(int32_t)sliderHandleId,(MethodInfo *)0x0);
                      if (bVar7 == 0) {
                        pGVar4 = (this->fields)._dblSliders;
                        if (pGVar4 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
                        bVar7 = GizmoPlaneSlider3DCollection::
                                GizmoPlaneSlider3DCollection_Contains_1
                                          (pGVar4,(int32_t)sliderHandleId,(MethodInfo *)0x0);
                        if (bVar7 == 0) {
                          pGVar2 = (this->fields)._midCap;
                          if (pGVar2 == (GizmoCap3D *)0x0) goto code_?;
                          pSVar12 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject
                                    ::AndroidJavaObject__GetRawClass
                                              ((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
                          if (pSVar12 != sliderHandleId) goto code_?;
                        }
                      }
                    }
                    gameObjects = (this->fields)._scaleGuideTargetObjects;
                    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    this_04 = (GizmoScaleGuide *)0x0;
                    gameObjects_00 =
                         GameObjectEx::GameObjectEx_FilterParentsOnly_1
                                   (gameObjects,(MethodInfo *)0x0);
                    if (this_04 != (GizmoScaleGuide *)0x0) {
                      pIVar10 = (Il2CppMethodPointer)0x0;
                      GizmoScaleGuide::GizmoScaleGuide_Render
                                (this_04,(IEnumerable_1_UnityEngine_GameObject_ *)gameObjects_00,
                                 camera,(MethodInfo *)0x0);
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_OnGizmoUpdateBegin
               (ScaleGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._unformScaleDrag;
  iVar2 = 0x54;
  if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
    iVar2 = 100;
  }
  iVar2 = *(int *)((int)&this->klass + iVar2);
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) {
    if (*(int *)(iVar2 + 0xc) == 0) goto code_?;
    if ((*(int *)(iVar2 + 0x10) != 0) && (pGVar1 != (GizmoUniformScaleDrag3D *)0x0)) {
      GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                ((GizmoScreenDrag *)pGVar1,*(float *)(*(int *)(iVar2 + 0x10) + 0x2c),
                 (MethodInfo *)0x0);
      if ((this->fields)._useSnapEnableHotkey == 0) {
code_?:
        if ((this->fields)._useMultiAxisScaleModeHotkey == 0) {
code_?:
          pGVar3 = (this->fields)._pstvXSlider;
          iVar4 = 0x50;
          iVar2 = 0x50;
          if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
            iVar2 = 0x60;
          }
          iVar2 = *(int *)((int)&this->klass + iVar2);
          if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) {
            if (*(int *)(iVar2 + 0xc) == 0) goto code_?;
            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
              GizmoSlider::GizmoSlider_SetVisible
                        ((GizmoSlider *)pGVar3,*(char *)(iVar2 + 0x10) != '\0',(MethodInfo *)0x0);
              pGVar3 = (this->fields)._pstvXSlider;
              iVar2 = 0x50;
              if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                iVar2 = 0x60;
              }
              iVar2 = *(int *)((int)&this->klass + iVar2);
              if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 != 0)) {
                if (*(int *)(iVar2 + 0xc) == 0) goto code_?;
                if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                            (pGVar3,*(char *)(iVar2 + 0x10) != '\0',(MethodInfo *)0x0);
                  pGVar3 = (this->fields)._pstvYSlider;
                  iVar2 = 0x50;
                  if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                    iVar2 = 0x60;
                  }
                  iVar2 = *(int *)((int)&this->klass + iVar2);
                  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) {
                    if (*(uint *)(iVar2 + 0xc) < 2) goto code_?;
                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                      GizmoSlider::GizmoSlider_SetVisible
                                ((GizmoSlider *)pGVar3,*(char *)(iVar2 + 0x11) != '\0',
                                 (MethodInfo *)0x0);
                      pGVar3 = (this->fields)._pstvYSlider;
                      iVar2 = 0x50;
                      if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                        iVar2 = 0x60;
                      }
                      iVar2 = *(int *)((int)&this->klass + iVar2);
                      if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 != 0)) {
                        if (*(uint *)(iVar2 + 0xc) < 2) goto code_?;
                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                    (pGVar3,*(char *)(iVar2 + 0x11) != '\0',(MethodInfo *)0x0);
                          pGVar3 = (this->fields)._pstvZSlider;
                          iVar2 = 0x50;
                          if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0)
                          {
                            iVar2 = 0x60;
                          }
                          iVar2 = *(int *)((int)&this->klass + iVar2);
                          if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) {
                            if (*(uint *)(iVar2 + 0xc) < 3) goto code_?;
                            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                              GizmoSlider::GizmoSlider_SetVisible
                                        ((GizmoSlider *)pGVar3,*(char *)(iVar2 + 0x12) != '\0',
                                         (MethodInfo *)0x0);
                              pGVar3 = (this->fields)._pstvZSlider;
                              iVar2 = 0x50;
                              if ((this->fields)._sharedLookAndFeel3D !=
                                  (ScaleGizmoLookAndFeel3D *)0x0) {
                                iVar2 = 0x60;
                              }
                              iVar2 = *(int *)((int)&this->klass + iVar2);
                              if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 != 0)) {
                                if (*(uint *)(iVar2 + 0xc) < 3) goto code_?;
                                if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                  GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                            (pGVar3,*(char *)(iVar2 + 0x12) != '\0',
                                             (MethodInfo *)0x0);
                                  pGVar3 = (this->fields)._negXSlider;
                                  iVar2 = 0x50;
                                  if ((this->fields)._sharedLookAndFeel3D !=
                                      (ScaleGizmoLookAndFeel3D *)0x0) {
                                    iVar2 = 0x60;
                                  }
                                  iVar2 = *(int *)((int)&this->klass + iVar2);
                                  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0))
                                  {
                                    if (*(uint *)(iVar2 + 0xc) < 4) goto code_?;
                                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                      GizmoSlider::GizmoSlider_SetVisible
                                                ((GizmoSlider *)pGVar3,
                                                 *(char *)(iVar2 + 0x13) != '\0',(MethodInfo *)0x0);
                                      pGVar3 = (this->fields)._negXSlider;
                                      iVar2 = 0x50;
                                      if ((this->fields)._sharedLookAndFeel3D !=
                                          (ScaleGizmoLookAndFeel3D *)0x0) {
                                        iVar2 = 0x60;
                                      }
                                      iVar2 = *(int *)((int)&this->klass + iVar2);
                                      if ((iVar2 != 0) &&
                                         (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 != 0)) {
                                        if (*(uint *)(iVar2 + 0xc) < 4) goto code_?;
                                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                          GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                                    (pGVar3,*(char *)(iVar2 + 0x13) != '\0',
                                                     (MethodInfo *)0x0);
                                          pGVar3 = (this->fields)._negYSlider;
                                          iVar2 = 0x50;
                                          if ((this->fields)._sharedLookAndFeel3D !=
                                              (ScaleGizmoLookAndFeel3D *)0x0) {
                                            iVar2 = 0x60;
                                          }
                                          iVar2 = *(int *)((int)&this->klass + iVar2);
                                          if ((iVar2 != 0) &&
                                             (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) {
                                            if (*(uint *)(iVar2 + 0xc) < 5) goto code_?;
                                            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                              GizmoSlider::GizmoSlider_SetVisible
                                                        ((GizmoSlider *)pGVar3,
                                                         *(char *)(iVar2 + 0x14) != '\0',
                                                         (MethodInfo *)0x0);
                                              pGVar3 = (this->fields)._negYSlider;
                                              iVar2 = 0x50;
                                              if ((this->fields)._sharedLookAndFeel3D !=
                                                  (ScaleGizmoLookAndFeel3D *)0x0) {
                                                iVar2 = 0x60;
                                              }
                                              iVar2 = *(int *)((int)&this->klass + iVar2);
                                              if ((iVar2 != 0) &&
                                                 (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 != 0)) {
                                                if (*(uint *)(iVar2 + 0xc) < 5)
                                                goto code_?;
                                                if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                                  GizmoLineSlider3D::
                                                  GizmoLineSlider3D_Set3DCapVisible
                                                            (pGVar3,*(char *)(iVar2 + 0x14) != '\0',
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._negZSlider;
                                                  iVar2 = 0x50;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (ScaleGizmoLookAndFeel3D *)0x0) {
                                                    iVar2 = 0x60;
                                                  }
                                                  iVar2 = *(int *)((int)&this->klass + iVar2);
                                                  if ((iVar2 != 0) &&
                                                     (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) {
                                                    if (*(uint *)(iVar2 + 0xc) < 6)
                                                    goto code_?;
                                                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                                      GizmoSlider::GizmoSlider_SetVisible
                                                                ((GizmoSlider *)pGVar3,
                                                                 *(char *)(iVar2 + 0x15) != '\0',
                                                                 (MethodInfo *)0x0);
                                                      pGVar3 = (this->fields)._negZSlider;
                                                      iVar2 = 0x50;
                                                      if ((this->fields)._sharedLookAndFeel3D !=
                                                          (ScaleGizmoLookAndFeel3D *)0x0) {
                                                        iVar2 = 0x60;
                                                      }
                                                      iVar2 = *(int *)((int)&this->klass + iVar2);
                                                      if ((iVar2 != 0) &&
                                                         (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 != 0
                                                         )) {
                                                        if (*(uint *)(iVar2 + 0xc) < 6)
                                                        goto code_?;
                                                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                                          GizmoLineSlider3D::
                                                          GizmoLineSlider3D_Set3DCapVisible
                                                                    (pGVar3,*(char *)(iVar2 + 0x15)
                                                                            != '\0',
                                                                     (MethodInfo *)0x0);
                                                          if ((this->fields)._multiAxisScaleMode !=
                                                              0) {
                                                            return;
                                                          }
                                                          pGVar5 = (this->fields)._xySlider;
                                                          iVar2 = 0x50;
                                                          if ((this->fields)._sharedLookAndFeel3D !=
                                                              (ScaleGizmoLookAndFeel3D *)0x0) {
                                                            iVar2 = 0x60;
                                                          }
                                                          iVar2 = *(int *)((int)&this->klass + iVar2
                                                                          );
                                                          if ((iVar2 != 0) &&
                                                             (iVar2 = *(int *)(iVar2 + 0x20),
                                                             iVar2 != 0)) {
                                                            if (*(int *)(iVar2 + 0xc) == 0)
                                                            goto code_?;
                                                            if (pGVar5 != (GizmoPlaneSlider3D *)0x0)
                                                            {
                                                              GizmoSlider::GizmoSlider_SetVisible
                                                                        ((GizmoSlider *)pGVar5,
                                                                         *(char *)(iVar2 + 0x10) !=
                                                                         '\0',(MethodInfo *)0x0);
                                                              pGVar5 = (this->fields)._xySlider;
                                                              if (pGVar5 != (GizmoPlaneSlider3D *)
                                                                            0x0) {
                                                                GizmoPlaneSlider3D::
                                                                GizmoPlaneSlider3D_SetBorderVisible
                                                                          ((this->fields)._xySlider,
                                                                           (pGVar5->fields)._.
                                                                           _isVisible,
                                                                           (MethodInfo *)0x0);
                                                                pGVar5 = (this->fields)._yzSlider;
                                                                iVar2 = 0x50;
                                                                if ((this->fields).
                                                                    _sharedLookAndFeel3D !=
                                                                    (ScaleGizmoLookAndFeel3D *)0x0)
                                                                {
                                                                  iVar2 = 0x60;
                                                                }
                                                                iVar2 = *(int *)((int)&this->klass +
                                                                                iVar2);
                                                                if ((iVar2 != 0) &&
                                                                   (iVar2 = *(int *)(iVar2 + 0x20),
                                                                   iVar2 != 0)) {
                                                                  if (*(uint *)(iVar2 + 0xc) < 2)
                                                                  goto code_?;
                                                                  if (pGVar5 != (GizmoPlaneSlider3D
                                                                                 *)0x0) {
                                                                    GizmoSlider::
                                                                    GizmoSlider_SetVisible
                                                                              ((GizmoSlider *)pGVar5
                                                                               ,*(char *)(iVar2 + 
                                                  0x11) != '\0',(MethodInfo *)0x0);
                                                  pGVar5 = (this->fields)._yzSlider;
                                                  if (pGVar5 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetBorderVisible
                                                              ((this->fields)._yzSlider,
                                                               (pGVar5->fields)._._isVisible,
                                                               (MethodInfo *)0x0);
                                                    pGVar5 = (this->fields)._zxSlider;
                                                    if ((this->fields)._sharedLookAndFeel3D !=
                                                        (ScaleGizmoLookAndFeel3D *)0x0) {
                                                      iVar4 = 0x60;
                                                    }
                                                    iVar2 = *(int *)((int)&this->klass + iVar4);
                                                    if ((iVar2 != 0) &&
                                                       (iVar2 = *(int *)(iVar2 + 0x20), iVar2 != 0))
                                                    {
                                                      if (*(uint *)(iVar2 + 0xc) < 3)
                                                      goto code_?;
                                                      if (pGVar5 != (GizmoPlaneSlider3D *)0x0) {
                                                        GizmoSlider::GizmoSlider_SetVisible
                                                                  ((GizmoSlider *)pGVar5,
                                                                   *(char *)(iVar2 + 0x12) != '\0',
                                                                   (MethodInfo *)0x0);
                                                        pGVar5 = (this->fields)._zxSlider;
                                                        if (pGVar5 != (GizmoPlaneSlider3D *)0x0) {
                                                          GizmoPlaneSlider3D::
                                                          GizmoPlaneSlider3D_SetBorderVisible
                                                                    ((this->fields)._zxSlider,
                                                                     (pGVar5->fields)._._isVisible,
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
          iVar2 = 0x58;
          if ((this->fields)._sharedHotkeys != (ScaleGizmoHotkeys *)0x0) {
            iVar2 = 0x68;
          }
          iVar2 = *(int *)((int)&this->klass + iVar2);
          if ((iVar2 != 0) && (pHVar6 = *(Hotkeys **)(iVar2 + 0x18), pHVar6 != (Hotkeys *)0x0)) {
            bVar7 = Hotkeys::Hotkeys_IsActive(pHVar6,1,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              ScaleGizmo_SetMultiAxisScaleMode
                        (this,GizmoMultiAxisScaleMode__Enum_DoubleAxis,(MethodInfo *)0x0);
              goto code_?;
            }
            this_01 = (DataTable *)(this->fields)._._gizmo;
            if (this_01 != (DataTable *)0x0) {
              bVar7 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                                (this_01,(MethodInfo *)0x0);
              if ((bVar7 != 0) || ((this->fields)._multiAxisScaleMode == 1)) goto code_?;
              (this->fields)._multiAxisScaleMode = 1;
              pGVar8 = (this->fields)._dblSliders;
              if (pGVar8 != (GizmoPlaneSlider3DCollection *)0x0) {
                GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                          (pGVar8,0,1,(MethodInfo *)0x0);
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
        iVar2 = 0x58;
        if ((this->fields)._sharedHotkeys != (ScaleGizmoHotkeys *)0x0) {
          iVar2 = 0x68;
        }
        iVar2 = *(int *)((int)&this->klass + iVar2);
        if ((iVar2 != 0) && (pHVar6 = *(Hotkeys **)(iVar2 + 0x14), pHVar6 != (Hotkeys *)0x0)) {
          bVar7 = Hotkeys::Hotkeys_IsActive(pHVar6,1,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._unformScaleDrag;
          if (pGVar1 != (GizmoUniformScaleDrag3D *)0x0) {
            (pGVar1->fields)._._isSnapEnabled = bVar7;
            this_00 = (this->fields)._axesSliders;
            if (this_00 != (GizmoLineSlider3DCollection *)0x0) {
              GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetSnapEnabled
                        (this_00,bVar7,(MethodInfo *)0x0);
              pGVar8 = (this->fields)._dblSliders;
              if (pGVar8 != (GizmoPlaneSlider3DCollection *)0x0) {
                GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                          (pGVar8,bVar7,(MethodInfo *)0x0);
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  iVar1 = 0x50;
  if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
    iVar1 = 0x60;
  }
  iVar1 = *(int *)((int)&this->klass + iVar1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x2c);
    pGVar2 = (this->fields)._pstvXSlider;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
      if (pGVar2 != (GizmoLineSlider3D *)0x0) {
        GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                  (pGVar2,*(GizmoLineSlider3DLookAndFeel **)(iVar1 + 0x10),(MethodInfo *)0x0);
        iVar1 = 0x50;
        if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
          iVar1 = 0x60;
        }
        iVar1 = *(int *)((int)&this->klass + iVar1);
        if (iVar1 != 0) {
          iVar1 = *(int *)(iVar1 + 0x2c);
          pGVar2 = (this->fields)._pstvYSlider;
          if (iVar1 != 0) {
            if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
            if (pGVar2 != (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                        (pGVar2,*(GizmoLineSlider3DLookAndFeel **)(iVar1 + 0x14),(MethodInfo *)0x0);
              iVar1 = 0x50;
              if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                iVar1 = 0x60;
              }
              iVar1 = *(int *)((int)&this->klass + iVar1);
              if (iVar1 != 0) {
                iVar1 = *(int *)(iVar1 + 0x2c);
                pGVar2 = (this->fields)._pstvZSlider;
                if (iVar1 != 0) {
                  if (*(uint *)(iVar1 + 0xc) < 3) goto code_?;
                  if (pGVar2 != (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                              (pGVar2,*(GizmoLineSlider3DLookAndFeel **)(iVar1 + 0x18),
                               (MethodInfo *)0x0);
                    iVar1 = 0x50;
                    if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0) {
                      iVar1 = 0x60;
                    }
                    iVar1 = *(int *)((int)&this->klass + iVar1);
                    if (iVar1 != 0) {
                      pGVar2 = (this->fields)._negXSlider;
                      iVar1 = *(int *)(iVar1 + 0x2c);
                      if (iVar1 != 0) {
                        if (*(uint *)(iVar1 + 0xc) < 4) goto code_?;
                        if (pGVar2 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                    (pGVar2,*(GizmoLineSlider3DLookAndFeel **)(iVar1 + 0x1c),
                                     (MethodInfo *)0x0);
                          iVar1 = 0x50;
                          if ((this->fields)._sharedLookAndFeel3D != (ScaleGizmoLookAndFeel3D *)0x0)
                          {
                            iVar1 = 0x60;
                          }
                          iVar1 = *(int *)((int)&this->klass + iVar1);
                          if (iVar1 != 0) {
                            pGVar2 = (this->fields)._negYSlider;
                            iVar1 = *(int *)(iVar1 + 0x2c);
                            if (iVar1 != 0) {
                              if (*(uint *)(iVar1 + 0xc) < 5) goto code_?;
                              if (pGVar2 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                          (pGVar2,*(GizmoLineSlider3DLookAndFeel **)(iVar1 + 0x20),
                                           (MethodInfo *)0x0);
                                iVar1 = 0x50;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (ScaleGizmoLookAndFeel3D *)0x0) {
                                  iVar1 = 0x60;
                                }
                                iVar1 = *(int *)((int)&this->klass + iVar1);
                                if (iVar1 != 0) {
                                  pGVar2 = (this->fields)._negZSlider;
                                  iVar1 = *(int *)(iVar1 + 0x2c);
                                  if (iVar1 != 0) {
                                    if (*(uint *)(iVar1 + 0xc) < 6) goto code_?;
                                    if (pGVar2 != (GizmoLineSlider3D *)0x0) {
                                      GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                                (pGVar2,*(GizmoLineSlider3DLookAndFeel **)
                                                         (iVar1 + 0x24),(MethodInfo *)0x0);
                                      iVar1 = 0x50;
                                      if ((this->fields)._sharedLookAndFeel3D !=
                                          (ScaleGizmoLookAndFeel3D *)0x0) {
                                        iVar1 = 0x60;
                                      }
                                      iVar1 = *(int *)((int)&this->klass + iVar1);
                                      if ((iVar1 != 0) &&
                                         (pGVar3 = (this->fields)._midCap,
                                         pGVar3 != (GizmoCap3D *)0x0)) {
                                        (pGVar3->fields)._sharedLookAndFeel =
                                             *(GizmoCap3DLookAndFeel **)(iVar1 + 0x14);
                                        ppGStack4 = &(pGVar3->fields)._sharedLookAndFeel;
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupSharedSettings() */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_SetupSharedSettings
               (ScaleGizmo *this,MethodInfo *method)

{
  iVar1 = 0x54;
  if ((this->fields)._sharedSettings3D != (ScaleGizmoSettings3D *)0x0) {
    iVar1 = 100;
  }
  iVar1 = *(int *)((int)&this->klass + iVar1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x18);
    pGVar2 = (this->fields)._pstvXSlider;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
      pGVar3 = *(GizmoLineSlider3DSettings **)(iVar1 + 0x10);
      if (pGVar2 != (GizmoLineSlider3D *)0x0) {
        (pGVar2->fields)._sharedSettings = pGVar3;
        ppGVar4 = &(pGVar2->fields)._sharedSettings;
        func_?(ppGVar4,&stack0xfffffffc,&UNK_?,ppGVar4,pGVar3);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  (this->fields)._axesSliders = this_00;
  func_?(&(this->fields)._axesSliders,this_00);
  this_01 = (GizmoPlaneSlider3DCollection *)
            func_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._dblSliders = this_01;
  func_?(&(this->fields)._dblSliders,this_01);
  this_02 = (GizmoUniformScaleDrag3D *)func_?(TypeInfo__RTG__GizmoUniformScaleDrag3D);
  GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._unformScaleDrag = this_02;
  func_?(&(this->fields)._unformScaleDrag,this_02);
  this_03 = (GizmoScaleGuide *)func_?(TypeInfo__RTG__GizmoScaleGuide);
  GizmoScaleGuide::GizmoScaleGuide__ctor(this_03,(MethodInfo *)0x0);
  (this->fields)._scaleGuide = this_03;
  func_?();
  this_04 = (ScaleGizmoLookAndFeel3D *)func_?(TypeInfo__RTG__ScaleGizmoLookAndFeel3D);
  ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D__ctor(this_04,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel3D = this_04;
  func_?(&(this->fields)._lookAndFeel3D,this_04);
  this_05 = (ScaleGizmoSettings3D *)func_?(TypeInfo__RTG__ScaleGizmoSettings3D);
  ScaleGizmoSettings3D::ScaleGizmoSettings3D__ctor(this_05,(MethodInfo *)0x0);
  (this->fields)._settings3D = this_05;
  func_?(&(this->fields)._settings3D,this_05);
  this_06 = (ScaleGizmoHotkeys *)func_?(TypeInfo__RTG__ScaleGizmoHotkeys);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pHVar1 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar1,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar1 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar1->fields)._lCtrl = 1;
    (this_06->fields)._enableSnapping = pHVar1;
    func_?();
    pHVar1 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar1,StringLiteral_Change_multi_axis_mode,(HotkeysStaticData)0x0,(MethodInfo *)0x0)
    ;
    if (pHVar1 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_None,(MethodInfo *)0x0);
      (pHVar1->fields)._lShift = 1;
      (this_06->fields)._changeMultiAxisMode = pHVar1;
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    (this->fields)._sharedHotkeys = value;
    func_?(&(this->fields)._sharedHotkeys,value);
  }
  return;
}


/* Void set_SharedLookAndFeel3D(ScaleGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_set_SharedLookAndFeel3D
               (ScaleGizmo *this,ScaleGizmoLookAndFeel3D *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel3D = value;
  func_?(&(this->fields)._sharedLookAndFeel3D,value);
  ScaleGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings3D(ScaleGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmo::ScaleGizmo_set_SharedSettings3D
               (ScaleGizmo *this,ScaleGizmoSettings3D *value,MethodInfo *method)

{
  (this->fields)._sharedSettings3D = value;
  func_?(&(this->fields)._sharedSettings3D,value);
  ScaleGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
  return;
}

