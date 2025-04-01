
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxQuad3DBorderController::
     GizmoBoxQuad3DBorderController_UpdateEpsilons
               (GizmoBoxQuad3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).PlaneSlider, pGVar2 != (GizmoPlaneSlider3D *)0x0)) {
    if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
      pGVar3 = (pGVar2->fields)._settings;
      if (pGVar3 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
    }
    else {
      pGVar3 = (pGVar2->fields)._sharedSettings;
    }
    pVVar4 = Vector3Ex::Vector3Ex_FromValue
                       ((Vector3 *)&stack0xffffffe8,(pGVar3->fields)._borderBoxHoverEps * zoomFactor
                        ,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
       (pBVar8 = (pGVar1->fields).TopLeftBox, pBVar8 != (BoxShape3D *)0x0)) {
      BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,*pVVar4,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
         (pBVar8 = (pGVar1->fields).TopRightBox, pBVar8 != (BoxShape3D *)0x0)) {
        value_05.y = (float)uVar6;
        value_05.x = (float)uVar5;
        value_05.z = fVar7;
        fVar9 = fVar7;
        BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value_05,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
           (pBVar8 = (pGVar1->fields).BottomRightBox, pBVar8 != (BoxShape3D *)0x0)) {
          value.y = fVar9;
          value.x = (float)uVar6;
          value.z = fVar7;
          BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
             (pBVar8 = (pGVar1->fields).BottomLeftBox, pBVar8 != (BoxShape3D *)0x0)) {
            value_00.y = fVar9;
            value_00.x = (float)uVar6;
            value_00.z = fVar7;
            BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value_00,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
               (pBVar8 = (pGVar1->fields).TopBox, pBVar8 != (BoxShape3D *)0x0)) {
              value_01.y = fVar9;
              value_01.x = (float)uVar6;
              value_01.z = fVar7;
              BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value_01,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._._data;
              if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                 (pBVar8 = (pGVar1->fields).BottomBox, pBVar8 != (BoxShape3D *)0x0)) {
                value_02.y = fVar9;
                value_02.x = (float)uVar6;
                value_02.z = fVar7;
                BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value_02,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                   (pBVar8 = (pGVar1->fields).LeftBox, pBVar8 != (BoxShape3D *)0x0)) {
                  value_03.y = fVar9;
                  value_03.x = (float)uVar6;
                  value_03.z = fVar7;
                  BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value_03,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._data;
                  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                     (pBVar8 = (pGVar1->fields).RightBox, pBVar8 != (BoxShape3D *)0x0)) {
                    value_04.y = fVar9;
                    value_04.x = (float)uVar6;
                    value_04.z = fVar7;
                    BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value_04,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoBoxQuad3DBorderController::
     GizmoBoxQuad3DBorderController_UpdateHandles
               (GizmoBoxQuad3DBorderController *this,MethodInfo *method)

{
  pGVar1 = this;
  pGVar2 = (this->fields)._._data;
  if (pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) {
    this_00 = (pGVar2->fields).TargetHandle;
    pGVar3 = (((this->fields)._._data)->fields).Border;
    if (pGVar3 != (GizmoQuad3DBorder *)0x0) {
      pGVar2 = (this->fields)._._data;
      if ((pGVar3->fields)._isVisible == 0) {
        if (this_00 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).TopBoxIndex,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).RightBoxIndex,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).BottomBoxIndex,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).LeftBoxIndex,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).TopLeftBoxIndex,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).TopRightBoxIndex,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).BottomRightBoxIndex,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        this._0_1_ = 0;
      }
      else {
        if (this_00 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).TopBoxIndex,1,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).RightBoxIndex,1,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).BottomBoxIndex,1,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).LeftBoxIndex,1,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).TopLeftBoxIndex,1,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).TopRightBoxIndex,1,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).BottomRightBoxIndex,1,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._data;
        if (pGVar2 == (GizmoQuad3DBorderControllerData *)0x0) goto code_?;
        this._0_1_ = 1;
      }
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (this_00,(pGVar2->fields).BottomLeftBoxIndex,(bool)this,(MethodInfo *)0x0);
      pGVar2 = (pGVar1->fields)._._data;
      if (pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar2->fields).BorderQuadIndex,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxQuad3DBorderController::
     GizmoBoxQuad3DBorderController_UpdateTransforms
               (GizmoBoxQuad3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) ||
      ((pGVar1->fields).PlaneSlider == (GizmoPlaneSlider3D *)0x0)) ||
     (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 == (QuadShape3D *)0x0)) goto code_?;
  pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Right
                     ((Vector3 *)&VStack_4,(TriangPrismShape3D *)pQVar2,(MethodInfo *)0x0);
  uStack_5._0_4_ = pVVar3->x;
  uStack_5._4_4_ = pVVar3->y;
  fVar6 = pVVar3->z;
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) ||
     (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 == (QuadShape3D *)0x0)) goto code_?;
  pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     ((Vector3 *)&VStack_4,(TriangPrismShape3D *)pQVar2,(MethodInfo *)0x0);
  uStack_7._0_4_ = pVVar3->x;
  uStack_7._4_4_ = pVVar3->y;
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) ||
     (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 == (QuadShape3D *)0x0)) goto code_?;
  pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Look
                     ((Vector3 *)&VStack_4,(TriangPrismShape3D *)pQVar2,(MethodInfo *)0x0);
  uStack_8._0_4_ = pVVar3->x;
  uStack_8._4_4_ = pVVar3->y;
  fVar9 = pVVar3->z;
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) ||
     (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 == (QuadShape3D *)0x0)) goto code_?;
  fVar10 = SphereTreeNodeRayHit`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
           SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_HitEnter
                     ((SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      pQVar2,(MethodInfo *)0x0);
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) ||
     (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 == (QuadShape3D *)0x0)) goto code_?;
  fVar11 = SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__get_Radius
                     ((SphereTreeNode_1_System_Object_ *)pQVar2,(MethodInfo *)0x0);
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) ||
     (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 == (QuadShape3D *)0x0)) goto code_?;
  this_03 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            QuadShape3D::QuadShape3D_GetCorners(pQVar2,(MethodInfo *)0x0);
  if (this_03 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
  goto code_?;
  pVVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
           VisualTreeAsset+UsingEntry]::
           List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                     (&VStack_4,this_03,0,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                     );
  this_00 = pVVar12->alias;
  index = pVVar12->path;
  pVVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
           VisualTreeAsset+UsingEntry]::
           List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                     (&VStack_4,
                      (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,index,
                      (MethodInfo *)pVVar12->asset);
  fVar13 = (float)pVVar12->alias;
  pVVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
           VisualTreeAsset+UsingEntry]::
           List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                     (&VStack_4,this_03,2,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                     );
  uVar14 = pVVar12->alias;
  uVar15 = pVVar12->path;
  pVVar16 = pVVar12->asset;
  pVVar12 = (VisualTreeAsset_UsingEntry *)&stack0xffffff74;
  fVar17 = 4.2039e-45;
  puVar18 = &UNK_?;
  pMVar19 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
  pVVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
           VisualTreeAsset+UsingEntry]::
           List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                     (pVVar12,this_03,3,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                     );
  pGVar1 = (this->fields)._._data;
  VStack_4.alias = pVVar20->alias;
  VStack_4.path = pVVar20->path;
  VStack_4.asset = pVVar20->asset;
  if (((pGVar1 == (GizmoQuad3DBorderControllerData *)0x0) ||
      (pGVar21 = (pGVar1->fields).Border, pGVar21 == (GizmoQuad3DBorder *)0x0)) ||
     (pGVar22 = (pGVar21->fields)._planeSlider, pGVar22 == (GizmoPlaneSlider3D *)0x0))
  goto code_?;
  if ((pGVar22->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    if ((pGVar22->fields)._lookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0)
    goto code_?;
    pGVar21 = (((this->fields)._._data)->fields).Border;
    pGVar22 = (pGVar21->fields)._planeSlider;
code_?:
    pGVar23 = (pGVar22->fields)._lookAndFeel;
    if (pGVar23 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
    fVar24 = (pGVar23->fields)._borderBoxDepth;
    pGVar23 = (((pGVar21->fields)._planeSlider)->fields)._lookAndFeel;
  }
  else {
    pGVar21 = (((this->fields)._._data)->fields).Border;
    pGVar22 = (pGVar21->fields)._planeSlider;
    if ((pGVar22->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0)
    goto code_?;
    fVar24 = (((pGVar22->fields)._sharedLookAndFeel)->fields)._borderBoxDepth;
    pGVar23 = (((pGVar21->fields)._planeSlider)->fields)._sharedLookAndFeel;
  }
  this_01 = (((this->fields)._._data)->fields).TopLeftBox;
  fVar24 = fVar24 * zoomFactor * (pGVar23->fields)._scale;
  if (this_01 != (BoxShape3D *)0x0) {
    fVar25 = (float)uStack_8;
    fVar26 = (float)((ulonglong)uStack_8 >> 0x20);
    uStack_5 = CONCAT44(&UNK_?,(undefined4)uStack_5);
    axis_13.z = fVar9;
    axis_13.x = (float)(undefined4)uStack_8;
    axis_13.y = (float)uStack_8._4_4_;
    pBVar27 = this_01;
    BoxShape3D::BoxShape3D_AlignHeight(this_01,axis_13,(MethodInfo *)0x0);
    value = 0.0;
    fVar28 = (float)uStack_5;
    axis_14.z = fVar6;
    axis_14.x = (float)(undefined4)uStack_5;
    axis_14.y = (float)uStack_5._4_4_;
    pBVar29 = this_01;
    BoxShape3D::BoxShape3D_AlignWidth(this_01,axis_14,(MethodInfo *)0x0);
    TorusShape3D::TorusShape3D_set_TubeRadius((TorusShape3D *)this_01,fVar24,(MethodInfo *)0x0);
    RightAngTriangle2D::RightAngTriangle2D_set_XLength
              ((RightAngTriangle2D *)this_01,value,(MethodInfo *)0x0);
    TriangPrismShape3D::TriangPrismShape3D_set_Width
              ((TriangPrismShape3D *)this_01,fVar24,(MethodInfo *)0x0);
    direction.z = fVar9;
    direction.x = (float)(undefined4)uStack_7;
    direction.y = (float)uStack_7._4_4_;
    fVar6 = fVar9;
    fVar30 = BoxShape3D::BoxShape3D_GetSizeAlongDirection(this_01,direction,(MethodInfo *)0x0);
    newCenter.y = fVar17 - fVar25 * fVar30 * _UNK_?;
    newCenter.x = (float)this_03 - (float)pBVar27 * fVar30 * _UNK_?;
    newCenter.z = (float)pMVar19 - fVar26 * fVar30 * _UNK_?;
    BoxShape3D::BoxShape3D_SetFaceCenter(this_01,BoxFace__Enum_Left,newCenter,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
      this_05 = (pGVar1->fields).TopRightBox;
      if (this_05 != (BoxShape3D *)0x0) {
        axis.z = (float)pBVar29;
        axis.x = (float)(undefined4)uStack_8;
        axis.y = (float)uStack_8._4_4_;
        BoxShape3D::BoxShape3D_AlignHeight(this_05,axis,(MethodInfo *)0x0);
        axis_00.z = fVar28;
        axis_00.x = (float)(undefined4)uStack_5;
        axis_00.y = (float)uStack_5._4_4_;
        BoxShape3D::BoxShape3D_AlignWidth(this_05,axis_00,(MethodInfo *)0x0);
        TorusShape3D::TorusShape3D_set_TubeRadius((TorusShape3D *)this_05,fVar24,(MethodInfo *)0x0);
        RightAngTriangle2D::RightAngTriangle2D_set_XLength
                  ((RightAngTriangle2D *)this_05,value,(MethodInfo *)0x0);
        TriangPrismShape3D::TriangPrismShape3D_set_Width
                  ((TriangPrismShape3D *)this_05,fVar24,(MethodInfo *)0x0);
        direction_00.z = fVar9;
        direction_00.x = (float)(undefined4)uStack_7;
        direction_00.y = (float)uStack_7._4_4_;
        fVar17 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                           (this_05,direction_00,(MethodInfo *)0x0);
        newCenter_00.y = (float)puVar18 - fVar25 * fVar17 * _UNK_?;
        newCenter_00.x = fVar13 - (float)pBVar27 * fVar17 * _UNK_?;
        newCenter_00.z = (float)pVVar12 - fVar26 * fVar17 * _UNK_?;
        BoxShape3D::BoxShape3D_SetFaceCenter
                  (this_05,BoxFace__Enum_Right,newCenter_00,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
          this_04 = (pGVar1->fields).BottomRightBox;
          if (this_04 != (BoxShape3D *)0x0) {
            axis_01.z = (float)pBVar29;
            axis_01.x = (float)(undefined4)uStack_8;
            axis_01.y = (float)uStack_8._4_4_;
            BoxShape3D::BoxShape3D_AlignHeight(this_04,axis_01,(MethodInfo *)0x0);
            axis_02.z = fVar28;
            axis_02.x = (float)(undefined4)uStack_5;
            axis_02.y = (float)uStack_5._4_4_;
            BoxShape3D::BoxShape3D_AlignWidth(this_04,axis_02,(MethodInfo *)0x0);
            TorusShape3D::TorusShape3D_set_TubeRadius
                      ((TorusShape3D *)this_04,fVar24,(MethodInfo *)0x0);
            RightAngTriangle2D::RightAngTriangle2D_set_XLength
                      ((RightAngTriangle2D *)this_04,value,(MethodInfo *)0x0);
            TriangPrismShape3D::TriangPrismShape3D_set_Width
                      ((TriangPrismShape3D *)this_04,fVar24,(MethodInfo *)0x0);
            direction_01.z = fVar9;
            direction_01.x = (float)(undefined4)uStack_7;
            direction_01.y = (float)uStack_7._4_4_;
            fVar13 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                              (this_04,direction_01,(MethodInfo *)0x0);
            newCenter_01.y = (float)uVar15 + fVar25 * fVar13 * _UNK_?;
            newCenter_01.x = (float)uVar14 + (float)pBVar27 * fVar13 * _UNK_?;
            newCenter_01.z = (float)pVVar16 + fVar26 * fVar13 * _UNK_?;
            BoxShape3D::BoxShape3D_SetFaceCenter
                      (this_04,BoxFace__Enum_Right,newCenter_01,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
              this_02 = (pGVar1->fields).BottomLeftBox;
              if (this_02 != (BoxShape3D *)0x0) {
                axis_03.z = (float)pBVar29;
                axis_03.x = (float)(undefined4)uStack_8;
                axis_03.y = (float)uStack_8._4_4_;
                BoxShape3D::BoxShape3D_AlignHeight(this_02,axis_03,(MethodInfo *)0x0);
                axis_04.z = fVar28;
                axis_04.x = (float)(undefined4)uStack_5;
                axis_04.y = (float)uStack_5._4_4_;
                BoxShape3D::BoxShape3D_AlignWidth(this_02,axis_04,(MethodInfo *)0x0);
                TorusShape3D::TorusShape3D_set_TubeRadius
                          ((TorusShape3D *)this_02,fVar24,(MethodInfo *)0x0);
                RightAngTriangle2D::RightAngTriangle2D_set_XLength
                          ((RightAngTriangle2D *)this_02,value,(MethodInfo *)0x0);
                TriangPrismShape3D::TriangPrismShape3D_set_Width
                          ((TriangPrismShape3D *)this_02,fVar24,(MethodInfo *)0x0);
                direction_02.z = fVar9;
                direction_02.x = (float)(undefined4)uStack_7;
                direction_02.y = (float)uStack_7._4_4_;
                fVar9 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                   (this_02,direction_02,(MethodInfo *)0x0);
                VStack_4.asset =
                     (VisualTreeAsset *)((float)VStack_4.asset + fVar26 * fVar9 * _UNK_?);
                newCenter_02.y = (float)VStack_4.path + fVar25 * fVar9 * _UNK_?;
                newCenter_02.x = (float)VStack_4.alias + (float)pBVar27 * fVar9 * _UNK_?;
                newCenter_02.z = (float)VStack_4.asset;
                BoxShape3D::BoxShape3D_SetFaceCenter
                          (this_02,BoxFace__Enum_Left,newCenter_02,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                   (pBVar27 = (pGVar1->fields).TopBox, pBVar27 != (BoxShape3D *)0x0)) {
                  axis_05.z = (float)pBVar29;
                  axis_05.x = (float)(undefined4)uStack_8;
                  axis_05.y = (float)uStack_8._4_4_;
                  BoxShape3D::BoxShape3D_AlignHeight(pBVar27,axis_05,(MethodInfo *)0x0);
                  axis_06.z = fVar28;
                  axis_06.x = (float)(undefined4)uStack_5;
                  axis_06.y = (float)uStack_5._4_4_;
                  BoxShape3D::BoxShape3D_AlignWidth(pBVar27,axis_06,(MethodInfo *)0x0);
                  direction_03.z = fVar28;
                  direction_03.x = (float)(undefined4)uStack_5;
                  direction_03.y = (float)uStack_5._4_4_;
                  fVar9 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                     (this_01,direction_03,(MethodInfo *)0x0);
                  TorusShape3D::TorusShape3D_set_TubeRadius
                            ((TorusShape3D *)pBVar27,fVar10 - (fVar9 + fVar9),(MethodInfo *)0x0);
                  RightAngTriangle2D::RightAngTriangle2D_set_XLength
                            ((RightAngTriangle2D *)pBVar27,value,(MethodInfo *)0x0);
                  TriangPrismShape3D::TriangPrismShape3D_set_Width
                            ((TriangPrismShape3D *)pBVar27,fVar24,(MethodInfo *)0x0);
                  pVVar3 = BoxShape3D::BoxShape3D_GetFaceCenter
                                     ((Vector3 *)&stack0xffffff74,this_01,BoxFace__Enum_Right,
                                      (MethodInfo *)0x0);
                  BoxShape3D::BoxShape3D_SetFaceCenter
                            (pBVar27,BoxFace__Enum_Left,*pVVar3,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._data;
                  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                     (pBVar27 = (pGVar1->fields).RightBox, pBVar27 != (BoxShape3D *)0x0)) {
                    axis_07.z = (float)pBVar29;
                    axis_07.x = (float)(undefined4)uStack_8;
                    axis_07.y = (float)uStack_8._4_4_;
                    BoxShape3D::BoxShape3D_AlignHeight(pBVar27,axis_07,(MethodInfo *)0x0);
                    axis_08.z = fVar6;
                    axis_08.x = (float)(undefined4)uStack_7;
                    axis_08.y = (float)uStack_7._4_4_;
                    BoxShape3D::BoxShape3D_AlignWidth(pBVar27,axis_08,(MethodInfo *)0x0);
                    direction_04.z = fVar6;
                    direction_04.x = (float)(undefined4)uStack_7;
                    direction_04.y = (float)uStack_7._4_4_;
                    fVar9 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                       (this_05,direction_04,(MethodInfo *)0x0);
                    TorusShape3D::TorusShape3D_set_TubeRadius
                              ((TorusShape3D *)pBVar27,fVar11 - (fVar9 + fVar9),(MethodInfo *)0x0)
                    ;
                    RightAngTriangle2D::RightAngTriangle2D_set_XLength
                              ((RightAngTriangle2D *)pBVar27,value,(MethodInfo *)0x0);
                    TriangPrismShape3D::TriangPrismShape3D_set_Width
                              ((TriangPrismShape3D *)pBVar27,fVar24,(MethodInfo *)0x0);
                    pVVar3 = BoxShape3D::BoxShape3D_GetFaceCenter
                                       ((Vector3 *)&stack0xffffff74,this_05,BoxFace__Enum_Back,
                                        (MethodInfo *)0x0);
                    BoxShape3D::BoxShape3D_SetFaceCenter
                              (pBVar27,BoxFace__Enum_Right,*pVVar3,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._._data;
                    if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                       (pBVar27 = (pGVar1->fields).BottomBox, pBVar27 != (BoxShape3D *)0x0)) {
                      axis_09.z = (float)pBVar29;
                      axis_09.x = (float)(undefined4)uStack_8;
                      axis_09.y = (float)uStack_8._4_4_;
                      BoxShape3D::BoxShape3D_AlignHeight(pBVar27,axis_09,(MethodInfo *)0x0);
                      axis_10.z = fVar28;
                      axis_10.x = (float)(undefined4)uStack_5;
                      axis_10.y = (float)uStack_5._4_4_;
                      BoxShape3D::BoxShape3D_AlignWidth(pBVar27,axis_10,(MethodInfo *)0x0);
                      direction_05.z = fVar28;
                      direction_05.x = (float)(undefined4)uStack_5;
                      direction_05.y = (float)uStack_5._4_4_;
                      fVar9 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                         (this_04,direction_05,(MethodInfo *)0x0);
                      TorusShape3D::TorusShape3D_set_TubeRadius
                                ((TorusShape3D *)pBVar27,fVar10 - (fVar9 + fVar9),
                                 (MethodInfo *)0x0);
                      RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                ((RightAngTriangle2D *)pBVar27,value,(MethodInfo *)0x0);
                      TriangPrismShape3D::TriangPrismShape3D_set_Width
                                ((TriangPrismShape3D *)pBVar27,fVar24,(MethodInfo *)0x0);
                      pVVar3 = BoxShape3D::BoxShape3D_GetFaceCenter
                                         ((Vector3 *)&stack0xffffff74,this_02,BoxFace__Enum_Right,
                                          (MethodInfo *)0x0);
                      BoxShape3D::BoxShape3D_SetFaceCenter
                                (pBVar27,BoxFace__Enum_Left,*pVVar3,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._._data;
                      if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                         (pBVar27 = (pGVar1->fields).LeftBox, pBVar27 != (BoxShape3D *)0x0)) {
                        axis_11.z = (float)pBVar29;
                        axis_11.x = (float)(undefined4)uStack_8;
                        axis_11.y = (float)uStack_8._4_4_;
                        BoxShape3D::BoxShape3D_AlignHeight(pBVar27,axis_11,(MethodInfo *)0x0);
                        axis_12.z = fVar6;
                        axis_12.x = (float)(undefined4)uStack_7;
                        axis_12.y = (float)uStack_7._4_4_;
                        BoxShape3D::BoxShape3D_AlignWidth(pBVar27,axis_12,(MethodInfo *)0x0);
                        direction_06.z = fVar6;
                        direction_06.x = (float)(undefined4)uStack_7;
                        direction_06.y = (float)uStack_7._4_4_;
                        fVar6 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                           (this_01,direction_06,(MethodInfo *)0x0);
                        TorusShape3D::TorusShape3D_set_TubeRadius
                                  ((TorusShape3D *)pBVar27,fVar11 - (fVar6 + fVar6),
                                   (MethodInfo *)0x0);
                        RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                  ((RightAngTriangle2D *)pBVar27,value,(MethodInfo *)0x0);
                        TriangPrismShape3D::TriangPrismShape3D_set_Width
                                  ((TriangPrismShape3D *)pBVar27,fVar24,(MethodInfo *)0x0);
                        pVVar3 = BoxShape3D::BoxShape3D_GetFaceCenter
                                           ((Vector3 *)&stack0xffffff74,this_01,BoxFace__Enum_Back,
                                            (MethodInfo *)0x0);
                        BoxShape3D::BoxShape3D_SetFaceCenter
                                  (pBVar27,BoxFace__Enum_Right,*pVVar3,(MethodInfo *)0x0);
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
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}

