
/* Void CalculateRect() */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_CalculateRect
               (PolygonShape2D *this,MethodInfo *method)

{
  pRVar1 = RectEx::RectEx_FromPoints
                     (&RStack_2,(IEnumerable_1_UnityEngine_Vector2_ *)(this->fields)._cwPolyPoints,
                      (MethodInfo *)0x0);
  fVar3 = pRVar1->m_XMin;
  fVar4 = pRVar1->m_YMin;
  fVar5 = pRVar1->m_Width;
  fVar6 = pRVar1->m_Height;
  (this->fields)._isRectDirty = 0;
  (this->fields)._rect.m_XMin = fVar3;
  (this->fields)._rect.m_YMin = fVar4;
  (this->fields)._rect.m_Width = fVar5;
  (this->fields)._rect.m_Height = fVar6;
  return;
}


/* Void CalculateThickBorderPoints() */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_CalculateThickBorderPoints
               (PolygonShape2D *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._borderRenderDesc;
  if (pPVar1 != (PolygonShape2D_BorderRenderDescriptor *)0x0) {
    pLVar2 = PrimitiveFactory::PrimitiveFactory_Generate2DPolyBorderPointsCW
                       ((this->fields)._cwPolyPoints,(uint)((pPVar1->fields)._direction != 0),
                        (pPVar1->fields)._thickness,(this->fields)._isClosed,(MethodInfo *)0x0);
    (this->fields)._thickCwBorderPoints = pLVar2;
    func_?(&(this->fields)._thickCwBorderPoints,pLVar2);
    (this->fields)._isThickBorderDirty = 0;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_ContainsPoint
               (PolygonShape2D *this,Vector2 point,MethodInfo *method)

{
  pPVar1 = (this->fields)._borderRenderDesc;
  if (pPVar1 == (PolygonShape2D_BorderRenderDescriptor *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  iVar4 = (this->fields)._ptContainMode;
  if ((pPVar1->fields)._borderType == 0) {
    polyPoints = (this->fields)._cwPolyPoints;
    bVar3 = (this->fields)._isClosed;
    pPVar5 = &(this->fields)._epsilon;
    fVar6 = pPVar5->_areaEps;
    fVar7 = (this->fields)._epsilon._extrudeEps;
    fVar8 = (this->fields)._epsilon._wireEps;
    fVar9 = (this->fields)._epsilon._thickWireEps;
    if (iVar4 != 0) {
      bVar3 = PolygonMath::PolygonMath_Is2DPointOnBorder
                        (point,polyPoints,bVar3,*pPVar5,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  else {
    if (iVar4 != 0) {
      if ((this->fields)._isThickBorderDirty != 0) {
        PolygonShape2D_CalculateThickBorderPoints(this,(MethodInfo *)0x0);
      }
      bVar3 = PolygonMath::PolygonMath_Is2DPointOnThickBorder
                        (point,(this->fields)._cwPolyPoints,(this->fields)._thickCwBorderPoints,
                         (this->fields)._isClosed,(this->fields)._epsilon,(MethodInfo *)0x0);
      return bVar3;
    }
    bVar3 = (this->fields)._isClosed;
    fVar6 = (this->fields)._epsilon._areaEps;
    fVar7 = (this->fields)._epsilon._extrudeEps;
    fVar8 = (this->fields)._epsilon._wireEps;
    fVar9 = (this->fields)._epsilon._thickWireEps;
    polyPoints = (this->fields)._cwPolyPoints;
  }
  epsilon._extrudeEps = fVar7;
  epsilon._areaEps = fVar6;
  epsilon._wireEps = fVar8;
  epsilon._thickWireEps = fVar9;
  bVar3 = PolygonMath::PolygonMath_Contains2DPoint(point,polyPoints,bVar3,epsilon,(MethodInfo *)0x0)
  ;
  return bVar3;
}


/* Void CopyPoints(PolygonShape2D) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_CopyPoints
               (PolygonShape2D *this,PolygonShape2D *sourcePoly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if (sourcePoly != (PolygonShape2D *)0x0) {
    bVar1 = cRam_? == '\0';
    (this->fields)._isClosed = (sourcePoly->fields)._isClosed;
    if (bVar1) {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pLVar2 = (sourcePoly->fields)._cwPolyPoints;
    if (pLVar2 != (List_1_UnityEngine_Vector2_ *)0x0) {
      if ((pLVar2->fields)._size != 0) {
        this_00 = (List_1_UnityEngine_Vector2_ *)
                  func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>
                                 );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2___ctor_1
                  (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)pLVar2,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                  );
        (this->fields)._cwPolyPoints = this_00;
        func_?(&(this->fields)._cwPolyPoints,this_00);
        (this->fields)._isThickBorderDirty = 1;
        (this->fields)._isRectDirty = 1;
        return;
      }
      pLVar2 = (this->fields)._cwPolyPoints;
      if (pLVar2 != (List_1_UnityEngine_Vector2_ *)0x0) {
        piVar3 = &(pLVar2->fields)._version;
        *piVar3 = *piVar3 + 1;
        (pLVar2->fields)._size = 0;
        (this->fields)._isThickBorderDirty = 1;
        (this->fields)._isRectDirty = 1;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,PolygonShape2D *this,MethodInfo *method)

{
  if ((this->fields)._isRectDirty != 0) {
    pRVar1 = RectEx::RectEx_FromPoints
                       (&RStack_2,
                        (IEnumerable_1_UnityEngine_Vector2_ *)(this->fields)._cwPolyPoints,
                        (MethodInfo *)0x0);
    fVar3 = pRVar1->m_XMin;
    fVar4 = pRVar1->m_YMin;
    fVar5 = pRVar1->m_Width;
    fVar6 = pRVar1->m_Height;
    (this->fields)._isRectDirty = 0;
    (this->fields)._rect.m_XMin = fVar3;
    (this->fields)._rect.m_YMin = fVar4;
    (this->fields)._rect.m_Width = fVar5;
    (this->fields)._rect.m_Height = fVar6;
  }
  fVar3 = (this->fields)._rect.m_YMin;
  fVar4 = (this->fields)._rect.m_Width;
  fVar5 = (this->fields)._rect.m_Height;
  __return_storage_ptr__->m_XMin = (this->fields)._rect.m_XMin;
  __return_storage_ptr__->m_YMin = fVar3;
  __return_storage_ptr__->m_Width = fVar4;
  __return_storage_ptr__->m_Height = fVar5;
  return __return_storage_ptr__;
}


/* Vector2 GetExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_GetExtentPoint
                  (PolygonShape2D *this,Shape2DExtentPoint__Enum extentPt,MethodInfo *method)

{
  pfVar1 = (float *)(*(code *)(this->klass->vtable).GetEncapsulatingRect.method)
                              (&fStack_2,this,this->klass[1]._0.image);
  fVar3 = _UNK_?;
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  fVar7 = pfVar1[3];
  fStack_2 = fVar4;
  fStack_8 = fVar5;
  fStack_9 = fVar6;
  fStack_10 = fVar7;
  switch(extentPt) {
  case Shape2DExtentPoint__Enum_Left:
    VVar11 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight((MethodInfo *)0x0);
    VStack_12.x = VVar11.x;
    VStack_12.y = VVar11.y;
    VStack_12.x = VStack_12.x * fStack_9;
    VStack_12.y = VStack_12.y * fStack_9;
    break;
  case Shape2DExtentPoint__Enum_Top:
    fVar6 = fVar6 * _UNK_?;
    fVar7 = fVar7 * _UNK_?;
    VVar11 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp((MethodInfo *)0x0);
    VStack_12.x = VVar11.x;
    VStack_12.y = VVar11.y;
    VStack_12.y = fVar7 + fVar5 + VStack_12.y * fStack_10 * _UNK_?;
    VStack_12.x = fVar6 + fVar4 + VStack_12.x * fStack_10 * _UNK_?;
    return VStack_12;
  case Shape2DExtentPoint__Enum_Right:
    fVar6 = fVar6 * _UNK_?;
    fVar7 = fVar7 * _UNK_?;
    VVar11 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight((MethodInfo *)0x0);
    VStack_12.x = VVar11.x;
    VStack_12.y = VVar11.y;
    VStack_12.y = VStack_12.y * fStack_9 * _UNK_? + fVar7 + fVar5;
    VStack_12.x = VStack_12.x * fStack_9 * _UNK_? + fVar6 + fVar4;
    return VStack_12;
  case Shape2DExtentPoint__Enum_Bottom:
    VVar11 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp((MethodInfo *)0x0);
    VStack_12.x = VVar11.x;
    VStack_12.y = VVar11.y;
    VStack_12.x = VStack_12.x * fStack_10;
    VStack_12.y = VStack_12.y * fStack_10;
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
  }
  extentPt = (Shape2DExtentPoint__Enum)(fVar7 * fVar3 + fVar5);
  this = (PolygonShape2D *)(fVar6 * fVar3 + fVar4);
  VStack_12.y = (float)extentPt - VStack_12.y * _UNK_?;
  VStack_12.x = (float)this - VStack_12.x * _UNK_?;
  return VStack_12;
}


/* List`1[UnityEngine.Vector2] GetPoints() */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_GetPoints
          (PolygonShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  collection = (this->fields)._cwPolyPoints;
  this_00 = (List_1_UnityEngine_Vector2_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
  List_1_UnityEngine_Vector2___ctor_1
            (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)collection,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
            );
  return this_00;
}


/* Void MakeSphereBorder(Vector3, Single, Int32, Camera) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_MakeSphereBorder
               (PolygonShape2D *this,Vector3 sphereCenter,float sphereRadius,int32_t numPoints,
               Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  worldPoints = PrimitiveFactory::PrimitiveFactory_GenerateSphereBorderPoints
                          (camera,sphereCenter,sphereRadius,numPoints,(MethodInfo *)0x0);
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  camera = (Camera *)
           CameraEx::CameraEx_ConvertWorldToScreenPoints(camera,worldPoints,(MethodInfo *)0x0);
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    this = (PolygonShape2D *)
           &MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__;
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((List_1_UnityEngine_Vector2_ *)camera != (List_1_UnityEngine_Vector2_ *)0x0) {
    sphereRadius = (float)(((List_1_UnityEngine_Vector2_ *)camera)->fields)._size;
    pLVar1 = (this->fields)._cwPolyPoints;
    if (pLVar1 != (List_1_UnityEngine_Vector2_ *)0x0) {
      piVar2 = &(pLVar1->fields)._version;
      *piVar2 = *piVar2 + 1;
      (pLVar1->fields)._size = 0;
      numPoints = 0;
      pLVar1 = (List_1_UnityEngine_Vector2_ *)camera;
      if (0 < (int)sphereRadius) {
        do {
          item = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (pLVar1,numPoints,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
          fVar3 = item.y;
          this = (PolygonShape2D *)camera;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__get_Item
                    ((List_1_UnityEngine_Vector2_ *)camera,(numPoints + 1) % (int)sphereRadius,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                    );
          pMVar4 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          pLVar1 = (List_1_UnityEngine_Vector2_ *)camera[2].monitor;
          if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
          piVar2 = &(pLVar1->fields)._version;
          *piVar2 = *piVar2 + 1;
          pVVar5 = (pLVar1->fields)._items;
          if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
          uVar6 = (pLVar1->fields)._size;
          if (uVar6 < pVVar5->max_length) {
            (pLVar1->fields)._size = uVar6 + 1;
            if (pVVar5->max_length <= uVar6) goto code_?;
            pVVar5->vector[uVar6].x = item.x;
            pVVar5->vector[uVar6].y = fVar3;
          }
          else {
            sphereRadius = (float)&UNK_?;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (pLVar1,item,pMVar4->klass->rgctx_data[0xe].method);
            numPoints = (int32_t)pLVar1;
            _camera = item;
          }
          numPoints = numPoints + 1;
          pLVar1 = (List_1_UnityEngine_Vector2_ *)camera;
        } while (numPoints < (int)sphereRadius);
      }
      (this->fields)._isRectDirty = 1;
      (this->fields)._isClosed = 1;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_RenderArea
               (PolygonShape2D *this,Camera *camera,MethodInfo *method)

{
  pfVar1 = (float *)(*(code *)(this->klass->vtable).GetEncapsulatingRect.method)
                              (auStack_2,this,this->klass[1]._0.image);
  fStack_3 = pfVar1[2] * _UNK_? + *pfVar1;
  fStack_4 = pfVar1[3] * _UNK_? + pfVar1[1];
  origin.y = fStack_4;
  origin.x = fStack_3;
  GLRenderer::GLRenderer_DrawTriangleFan2D_1
            (origin,(this->fields)._cwPolyPoints,camera,(MethodInfo *)0x0);
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_RenderBorder
               (PolygonShape2D *this,Camera *camera,MethodInfo *method)

{
  pPVar1 = (this->fields)._borderRenderDesc;
  if (pPVar1 != (PolygonShape2D_BorderRenderDescriptor *)0x0) {
    if ((pPVar1->fields)._borderType == 0) {
      GLRenderer::GLRenderer_DrawLines2D((this->fields)._cwPolyPoints,camera,(MethodInfo *)0x0);
      return;
    }
    if ((this->fields)._isThickBorderDirty != 0) {
      PolygonShape2D_CalculateThickBorderPoints(this,(MethodInfo *)0x0);
    }
    pPVar1 = (this->fields)._borderRenderDesc;
    if (pPVar1 != (PolygonShape2D_BorderRenderDescriptor *)0x0) {
      if ((pPVar1->fields)._fillMode == 1) {
        GLRenderer::GLRenderer_DrawLines2D((this->fields)._cwPolyPoints,camera,(MethodInfo *)0x0);
        GLRenderer::GLRenderer_DrawLines2D
                  ((this->fields)._thickCwBorderPoints,camera,(MethodInfo *)0x0);
        return;
      }
      pMVar2 = (MethodInfo *)
               PrimitiveFactory::PrimitiveFactory_Generate2DPolyBorderQuadsCW
                         ((this->fields)._cwPolyPoints,(this->fields)._thickCwBorderPoints,
                          (uint)((pPVar1->fields)._direction != 0),(this->fields)._isClosed,
                          (MethodInfo *)0x0);
      pVVar3 = (Vector3 *)0x0;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                        ,in_stack_4);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      if (in_stack_5 != (List_1_UnityEngine_Vector2_ *)0x0) {
        iVar6 = (in_stack_5->fields)._size;
        if (0 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(7,(MethodInfo *)0x0);
          iVar6 = 2;
          fVar7 = 0.0;
          do {
            VVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                    List_1_UnityEngine_Vector2__get_Item
                              (in_stack_5,iVar6 + -2,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                              );
            if (in_stack_9 == (Camera *)0x0) goto code_?;
            position_00.y = VVar8.y;
            position_00.x = (float)pVVar3;
            position_00.z = fVar7;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                               ((Vector3 *)&stack0xffffffb8,in_stack_9,position_00,
                                (MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar3,(MethodInfo *)0x0);
            VVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                    List_1_UnityEngine_Vector2__get_Item
                              (in_stack_5,iVar6 + -1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                              );
            camera = (Camera *)VVar8.y;
            position_01.y = (float)camera;
            position_01.x = (float)pMVar2;
            position_01.z = 0.0;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                               ((Vector3 *)&stack0xffffffac,in_stack_9,position_01,
                                (MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar3,(MethodInfo *)0x0);
            VVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                    List_1_UnityEngine_Vector2__get_Item
                              (in_stack_5,iVar6,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                              );
            position_02.z = 0.0;
            position_02.x = VVar8.x;
            position_02.y = VVar8.y;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                               ((Vector3 *)&puStack_10,in_stack_9,position_02,
                                (MethodInfo *)0x0);
            puVar11 = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar3,(MethodInfo *)0x0);
            pMVar2 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_;
            VVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                    List_1_UnityEngine_Vector2__get_Item
                              (in_stack_5,iVar6 + 1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                              );
            pVVar3 = (Vector3 *)&stack0xffffff94;
            position.y = VVar8.y;
            position.x = (float)puVar11;
            position.z = 0.0;
            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                               (pVVar3,in_stack_9,position,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar12,(MethodInfo *)0x0);
            iVar6 = iVar6 + 4;
          } while (1 < (int)puVar11);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
        }
        return;
      }
code_?:
      func_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetClockwisePoints(List`1[UnityEngine.Vector2], Boolean) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_SetClockwisePoints
               (PolygonShape2D *this,List_1_UnityEngine_Vector2_ *cwBorderPoints,bool isClosed,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (cwBorderPoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    iVar1 = (cwBorderPoints->fields)._size;
    pLVar2 = (this->fields)._cwPolyPoints;
    if (pLVar2 != (List_1_UnityEngine_Vector2_ *)0x0) {
      piVar3 = &(pLVar2->fields)._version;
      *piVar3 = *piVar3 + 1;
      (pLVar2->fields)._size = 0;
      iStack_4 = 0;
      if (0 < iVar1) {
        do {
          item = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwBorderPoints,iStack_4,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
          VVar5 = item;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__get_Item
                    (cwBorderPoints,(iStack_4 + 1) % iVar1,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                    );
          pMVar6 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          pLVar2 = (this->fields)._cwPolyPoints;
          if (pLVar2 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
          piVar3 = &(pLVar2->fields)._version;
          *piVar3 = *piVar3 + 1;
          pVVar7 = (pLVar2->fields)._items;
          if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
          uVar8 = (pLVar2->fields)._size;
          if (uVar8 < pVVar7->max_length) {
            (pLVar2->fields)._size = uVar8 + 1;
            if (pVVar7->max_length <= uVar8) goto code_?;
            pVVar7->vector[uVar8].x = VVar5.x;
            pVVar7->vector[uVar8].y = VVar5.y;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (pLVar2,item,pMVar6->klass->rgctx_data[0xe].method);
          }
          iStack_4 = iStack_4 + 1;
        } while (iStack_4 < iVar1);
      }
      (this->fields)._isRectDirty = 1;
      (this->fields)._isClosed = isClosed;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* PolygonShape2D() */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D__ctor
               (PolygonShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__PolygonShape2D__BorderRenderDescriptor);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  (this->fields)._isRectDirty = 1;
  pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (pLVar1,100,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
  (this->fields)._cwPolyPoints = (List_1_UnityEngine_Vector2_ *)pLVar1;
  func_?(&(this->fields)._cwPolyPoints,pLVar1);
  pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (pLVar1,100,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
  (this->fields)._thickCwBorderPoints = (List_1_UnityEngine_Vector2_ *)pLVar1;
  func_?(&(this->fields)._thickCwBorderPoints,pLVar1);
  (this->fields)._isThickBorderDirty = 1;
  method_00 = TypeInfo__RTG__PolygonShape2D__BorderRenderDescriptor;
  value = (PolygonShape2D_BorderRenderDescriptor *)func_?();
  (value->fields)._thickness = 5.0;
  (value->fields)._direction = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._borderRenderDesc = value;
  func_?(&(this->fields)._borderRenderDesc,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,in_stack_2);
  return;
}


/* Int32 get_NumPoints() */

int32_t Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_get_NumPoints
                  (PolygonShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._cwPolyPoints;
  if (pLVar2 != (List_1_UnityEngine_Vector2_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_ThickWireEps(Single) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_set_ThickWireEps
               (PolygonShape2D *this,float value,MethodInfo *method)

{
  TorusShape3D::TorusShape3D_set_TubeRadius
            ((TorusShape3D *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_WireEps(Single) */

void Assembly-CSharp.dll::RTG::PolygonShape2D::PolygonShape2D_set_WireEps
               (PolygonShape2D *this,float value,MethodInfo *method)

{
  TorusShape3D::TorusShape3D_set_CoreRadius
            ((TorusShape3D *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

