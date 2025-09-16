
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxQuad3DBorderController::
     GizmoBoxQuad3DBorderController_UpdateEpsilons
               (GizmoBoxQuad3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).PlaneSlider, this_00 != (GizmoPlaneSlider3D *)0x0)) {
    pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Settings(this_00,(MethodInfo *)0x0);
    if (pGVar2 != (GizmoPlaneSlider3DSettings *)0x0) {
      pVVar3 = Vector3Ex::Vector3Ex_FromValue
                         ((Vector3 *)&stack0xffffffe8,
                          zoomFactor * (pGVar2->fields)._borderBoxHoverEps,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      uVar4 = pVVar3->x;
      uVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
         (pBVar7 = (pGVar1->fields).TopLeftBox, pBVar7 != (BoxShape3D *)0x0)) {
        BoxShape3D::BoxShape3D_set_SizeEps(pBVar7,*pVVar3,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
           (pBVar7 = (pGVar1->fields).TopRightBox, pBVar7 != (BoxShape3D *)0x0)) {
          value_05.y = (float)uVar5;
          value_05.x = (float)uVar4;
          value_05.z = fVar6;
          BoxShape3D::BoxShape3D_set_SizeEps(pBVar7,value_05,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
             (pBVar8 = (pGVar1->fields).BottomRightBox, pBVar8 != (BoxShape3D *)0x0)) {
            value.y = (float)uVar4;
            value.x = (float)pBVar7;
            value.z = fVar6;
            BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
               (pBVar8 = (pGVar1->fields).BottomLeftBox, pBVar8 != (BoxShape3D *)0x0)) {
              value_00.y = (float)uVar4;
              value_00.x = (float)pBVar7;
              value_00.z = fVar6;
              BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value_00,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._._data;
              if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                 (pBVar8 = (pGVar1->fields).TopBox, pBVar8 != (BoxShape3D *)0x0)) {
                value_01.y = (float)uVar4;
                value_01.x = (float)pBVar7;
                value_01.z = fVar6;
                BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value_01,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                   (pBVar8 = (pGVar1->fields).BottomBox, pBVar8 != (BoxShape3D *)0x0)) {
                  value_02.y = (float)uVar4;
                  value_02.x = (float)pBVar7;
                  value_02.z = fVar6;
                  BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value_02,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._data;
                  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                     (pBVar8 = (pGVar1->fields).LeftBox, pBVar8 != (BoxShape3D *)0x0)) {
                    value_03.y = (float)uVar4;
                    value_03.x = (float)pBVar7;
                    value_03.z = fVar6;
                    BoxShape3D::BoxShape3D_set_SizeEps(pBVar8,value_03,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._._data;
                    if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                       (pBVar8 = (pGVar1->fields).RightBox, pBVar8 != (BoxShape3D *)0x0)) {
                      value_04.y = (float)uVar4;
                      value_04.x = (float)pBVar7;
                      value_04.z = fVar6;
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
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).PlaneSlider, pGVar2 != (GizmoPlaneSlider3D *)0x0)) {
    GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
       (pQVar3 = (pGVar1->fields).TargetQuad, pQVar3 != (QuadShape3D *)0x0)) {
      pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_Right
                          ((Vector3 *)&VStack_5,(TriangPrismShape3D *)pQVar3,(MethodInfo *)0x0);
      fVar6 = pVVar4->z;
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
         (pQVar3 = (pGVar1->fields).TargetQuad, pQVar3 != (QuadShape3D *)0x0)) {
        pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                            ((Vector3 *)&VStack_5,(TriangPrismShape3D *)pQVar3,(MethodInfo *)0x0);
        pSVar7 = (String *)pVVar4->x;
        uVar8 = pVVar4->y;
        fVar9 = pVVar4->z;
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
           (pQVar3 = (pGVar1->fields).TargetQuad, pQVar3 != (QuadShape3D *)0x0)) {
          pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_Look
                              ((Vector3 *)&VStack_5,(TriangPrismShape3D *)pQVar3,(MethodInfo *)0x0)
          ;
          fVar10 = pVVar4->z;
          pGVar1 = (this->fields)._._data;
          if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
             (pQVar3 = (pGVar1->fields).TargetQuad, pQVar3 != (QuadShape3D *)0x0)) {
            fVar11 = SphereTreeNodeRayHit`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
                     ::
                     SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_HitEnter
                               ((SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                 *)pQVar3,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
               (pQVar3 = (pGVar1->fields).TargetQuad, pQVar3 != (QuadShape3D *)0x0)) {
              fVar12 = SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__get_Radius
                                 ((SphereTreeNode_1_System_Object_ *)pQVar3,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._._data;
              if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                 (pQVar3 = (pGVar1->fields).TargetQuad, pQVar3 != (QuadShape3D *)0x0)) {
                this_02 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                          QuadShape3D::QuadShape3D_GetCorners(pQVar3,(MethodInfo *)0x0);
                if (this_02 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
                  pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      (&VStack_5,this_02,0,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  uVar14 = pVVar13->alias;
                  uVar15 = pVVar13->path;
                  pVVar16 = pVVar13->asset;
                  pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      (&VStack_5,this_02,1,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  this_00 = pVVar13->alias;
                  index = pVVar13->path;
                  pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      (&VStack_5,
                                       (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                                       this_00,index,(MethodInfo *)pVVar13->asset);
                  uVar17._0_4_ = pVVar13->alias;
                  uVar17._4_4_ = pVVar13->path;
                  fVar18 = 4.2039e-45;
                  puVar19 = &UNK_?;
                  pMVar20 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                  ;
                  pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      ((VisualTreeAsset_UsingEntry *)&stack0xffffff40,this_02,3,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  pGVar1 = (this->fields)._._data;
                  VStack_5.alias = pVVar13->alias;
                  VStack_5.path = pVVar13->path;
                  VStack_5.asset = pVVar13->asset;
                  if (((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                      (pGVar21 = (pGVar1->fields).Border, pGVar21 != (GizmoQuad3DBorder *)0x0)) &&
                     (pGVar2 = (pGVar21->fields)._planeSlider, pGVar2 != (GizmoPlaneSlider3D *)0x0))
                  {
                    VStack_5.asset = (VisualTreeAsset *)&UNK_?;
                    pGVar22 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                        (pGVar2,(MethodInfo *)0x0);
                    if (pGVar22 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      fVar23 = (pGVar22->fields)._borderBoxHeight;
                      pGVar2 = (pGVar21->fields)._planeSlider;
                      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                        uVar24 = CONCAT44(pGVar2,&UNK_?);
                        pGVar22 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                            (pGVar2,(MethodInfo *)0x0);
                        if (pGVar22 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                          pGVar1 = (this->fields)._._data;
                          fVar23 = fVar23 * zoomFactor * (pGVar22->fields)._scale;
                          if (((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
                              (pGVar21 = (pGVar1->fields).Border, pGVar21 != (GizmoQuad3DBorder *)0x0)
                              ) && (pGVar2 = (pGVar21->fields)._planeSlider,
                                   pGVar2 != (GizmoPlaneSlider3D *)0x0)) {
                            uVar25 = CONCAT44(pGVar2,&UNK_?);
                            pGVar22 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                (pGVar2,(MethodInfo *)0x0);
                            if (pGVar22 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                              fVar26 = (pGVar22->fields)._borderBoxDepth;
                              pGVar2 = (pGVar21->fields)._planeSlider;
                              if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                pGVar22 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                    (pGVar2,(MethodInfo *)0x0);
                                if (pGVar22 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                  pGVar1 = (this->fields)._._data;
                                  fVar27 = (pGVar22->fields)._scale;
                                  if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
                                    this_01 = (pGVar1->fields).TopLeftBox;
                                    if (this_01 != (BoxShape3D *)0x0) {
                                      fVar28 = (float)uVar25;
                                      uVar29 = CONCAT44(&UNK_?,fVar28);
                                      axis_13.z = fVar10;
                                      axis_13.x = (float)(int)uVar25;
                                      axis_13.y = (float)(int)((ulonglong)uVar25 >> 0x20);
                                      pBVar30 = this_01;
                                      BoxShape3D::BoxShape3D_AlignHeight
                                                (this_01,axis_13,(MethodInfo *)0x0);
                                      axis_14.y = fVar28;
                                      axis_14.x = (float)pBVar30;
                                      axis_14.z = fVar6;
                                      pBVar31 = pBVar30;
                                      fVar6 = fVar28;
                                      BoxShape3D::BoxShape3D_AlignWidth
                                                (this_01,axis_14,(MethodInfo *)0x0);
                                      TorusShape3D::TorusShape3D_set_TubeRadius
                                                ((TorusShape3D *)this_01,
                                                 fVar26 * zoomFactor * fVar27,(MethodInfo *)0x0);
                                      RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                                ((RightAngTriangle2D *)this_01,fVar23,
                                                 (MethodInfo *)0x0);
                                      TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                ((TriangPrismShape3D *)this_01,4.2851373e-29,
                                                 (MethodInfo *)0x0);
                                      direction.z = fVar10;
                                      direction.x = (float)(int)uVar24;
                                      direction.y = (float)(int)((ulonglong)uVar24 >> 0x20);
                                      fVar26 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                         (this_01,direction,(MethodInfo *)0x0);
                                      newCenter.y = (float)uVar15 -
                                                    (float)uVar8 * fVar26 * _UNK_?;
                                      newCenter.x = (float)uVar14 -
                                                    (float)pSVar7 * fVar26 * _UNK_?;
                                      newCenter.z = (float)pVVar16 - fVar9 * fVar26 * _UNK_?;
                                      BoxShape3D::BoxShape3D_SetFaceCenter
                                                (this_01,BoxFace__Enum_Left,newCenter,
                                                 (MethodInfo *)0x0);
                                      pGVar1 = (this->fields)._._data;
                                      if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
                                        pBVar32 = (pGVar1->fields).TopRightBox;
                                        if (pBVar32 != (BoxShape3D *)0x0) {
                                          axis.z = (float)pBVar31;
                                          axis.x = (float)(int)uVar29;
                                          axis.y = (float)(int)((ulonglong)uVar29 >> 0x20);
                                          pBVar33 = pBVar32;
                                          BoxShape3D::BoxShape3D_AlignHeight
                                                    (pBVar32,axis,(MethodInfo *)0x0);
                                          axis_00.y = fVar28;
                                          axis_00.x = (float)pBVar30;
                                          axis_00.z = fVar6;
                                          BoxShape3D::BoxShape3D_AlignWidth
                                                    (pBVar32,axis_00,(MethodInfo *)0x0);
                                          TorusShape3D::TorusShape3D_set_TubeRadius
                                                    ((TorusShape3D *)pBVar32,4.2851373e-29,
                                                     (MethodInfo *)0x0);
                                          RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                                    ((RightAngTriangle2D *)pBVar32,fVar23,
                                                     (MethodInfo *)0x0);
                                          TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                    ((TriangPrismShape3D *)pBVar32,4.2851373e-29,
                                                     (MethodInfo *)0x0);
                                          direction_00.z = fVar10;
                                          direction_00.x = (float)(int)uVar24;
                                          direction_00.y = (float)(int)((ulonglong)uVar24 >> 0x20);
                                          fVar26 = fVar10;
                                          fVar27 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                             (pBVar33,direction_00,(MethodInfo *)0x0
                                                             );
                                          newCenter_00.y =
                                               fVar18 - (float)uVar8 * fVar27 * _UNK_?;
                                          newCenter_00.x =
                                               (float)this_02 -
                                               (float)pSVar7 * fVar27 * _UNK_?;
                                          newCenter_00.z =
                                               (float)pMVar20 - fVar9 * fVar27 * _UNK_?;
                                          BoxShape3D::BoxShape3D_SetFaceCenter
                                                    (pBVar33,BoxFace__Enum_Right,newCenter_00,
                                                     (MethodInfo *)0x0);
                                          pGVar1 = (this->fields)._._data;
                                          if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
                                            pBVar32 = (pGVar1->fields).BottomRightBox;
                                            if (pBVar32 != (BoxShape3D *)0x0) {
                                              axis_01.z = (float)pBVar31;
                                              axis_01.x = (float)(int)uVar29;
                                              axis_01.y = (float)(int)((ulonglong)uVar29 >> 0x20);
                                              BoxShape3D::BoxShape3D_AlignHeight
                                                        (pBVar32,axis_01,(MethodInfo *)0x0);
                                              axis_02.y = fVar28;
                                              axis_02.x = (float)pBVar30;
                                              axis_02.z = fVar6;
                                              BoxShape3D::BoxShape3D_AlignWidth
                                                        (pBVar32,axis_02,(MethodInfo *)0x0);
                                              TorusShape3D::TorusShape3D_set_TubeRadius
                                                        ((TorusShape3D *)pBVar32,4.2851373e-29,
                                                         (MethodInfo *)0x0);
                                              RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                                        ((RightAngTriangle2D *)pBVar32,fVar23,
                                                         (MethodInfo *)0x0);
                                              TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                        ((TriangPrismShape3D *)pBVar32,4.2851373e-29
                                                         ,(MethodInfo *)0x0);
                                              direction_01.z = fVar10;
                                              direction_01.x = (float)(int)uVar24;
                                              direction_01.y =
                                                   (float)(int)((ulonglong)uVar24 >> 0x20);
                                              fVar18 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                                 (pBVar32,direction_01,
                                                                  (MethodInfo *)0x0);
                                              newCenter_01.y =
                                                   (float)uVar8 * fVar18 * _UNK_? +
                                                   (float)((ulonglong)uVar17 >> 0x20);
                                              newCenter_01.x =
                                                   (float)pSVar7 * fVar18 * _UNK_? +
                                                   (float)uVar17;
                                              newCenter_01.z =
                                                   fVar9 * fVar18 * _UNK_? + (float)puVar19;
                                              BoxShape3D::BoxShape3D_SetFaceCenter
                                                        (pBVar32,BoxFace__Enum_Right,newCenter_01,
                                                         (MethodInfo *)0x0);
                                              pGVar1 = (this->fields)._._data;
                                              if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0)
                                              {
                                                pBVar34 = (pGVar1->fields).BottomLeftBox;
                                                if (pBVar34 != (BoxShape3D *)0x0) {
                                                  axis_03.z = (float)pBVar31;
                                                  axis_03.x = (float)(int)uVar29;
                                                  axis_03.y = (float)(int)((ulonglong)uVar29 >> 0x20
                                                                          );
                                                  BoxShape3D::BoxShape3D_AlignHeight
                                                            (pBVar34,axis_03,(MethodInfo *)0x0);
                                                  axis_04.y = fVar28;
                                                  axis_04.x = (float)pBVar30;
                                                  axis_04.z = fVar6;
                                                  BoxShape3D::BoxShape3D_AlignWidth
                                                            (pBVar34,axis_04,(MethodInfo *)0x0);
                                                  TorusShape3D::TorusShape3D_set_TubeRadius
                                                            ((TorusShape3D *)pBVar34,4.2851373e-29,
                                                             (MethodInfo *)0x0);
                                                  RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                                            ((RightAngTriangle2D *)pBVar34,fVar23,
                                                             (MethodInfo *)0x0);
                                                  TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                            ((TriangPrismShape3D *)pBVar34,
                                                             4.2851373e-29,(MethodInfo *)0x0);
                                                  direction_02.z = fVar10;
                                                  direction_02.x = (float)(int)uVar24;
                                                  direction_02.y =
                                                       (float)(int)((ulonglong)uVar24 >> 0x20);
                                                  this_03 = pBVar34;
                                                  fVar10 = BoxShape3D::
                                                           BoxShape3D_GetSizeAlongDirection
                                                                     (pBVar34,direction_02,
                                                                      (MethodInfo *)0x0);
                                                  VStack_5.asset =
                                                       (VisualTreeAsset *)
                                                       (fVar9 * fVar10 * _UNK_? +
                                                       (float)VStack_5.asset);
                                                  newCenter_02.y =
                                                       (float)uVar8 * fVar10 * _UNK_? +
                                                       (float)VStack_5.path;
                                                  newCenter_02.x =
                                                       (float)pSVar7 * fVar10 * _UNK_? +
                                                       (float)VStack_5.alias;
                                                  newCenter_02.z = (float)VStack_5.asset;
                                                  BoxShape3D::BoxShape3D_SetFaceCenter
                                                            (pBVar34,BoxFace__Enum_Left,newCenter_02
                                                             ,(MethodInfo *)0x0);
                                                  pGVar1 = (this->fields)._._data;
                                                  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)
                                                                 0x0) &&
                                                     (pBVar34 = (pGVar1->fields).TopBox,
                                                     pBVar34 != (BoxShape3D *)0x0)) {
                                                    axis_05.z = (float)pBVar31;
                                                    axis_05.x = (float)(int)uVar29;
                                                    axis_05.y = (float)(int)((ulonglong)uVar29 >>
                                                                            0x20);
                                                    BoxShape3D::BoxShape3D_AlignHeight
                                                              (pBVar34,axis_05,(MethodInfo *)0x0);
                                                    axis_06.y = fVar28;
                                                    axis_06.x = (float)pBVar30;
                                                    axis_06.z = fVar6;
                                                    BoxShape3D::BoxShape3D_AlignWidth
                                                              (pBVar34,axis_06,(MethodInfo *)0x0);
                                                    direction_03.y = fVar28;
                                                    direction_03.x = (float)pBVar30;
                                                    direction_03.z = fVar6;
                                                    fVar9 = BoxShape3D::
                                                             BoxShape3D_GetSizeAlongDirection
                                                                       (this_01,direction_03,
                                                                        (MethodInfo *)0x0);
                                                    TorusShape3D::TorusShape3D_set_TubeRadius
                                                              ((TorusShape3D *)pBVar34,
                                                               fVar11 - (fVar9 + fVar9),
                                                               (MethodInfo *)0x0);
                                                    RightAngTriangle2D::
                                                    RightAngTriangle2D_set_XLength
                                                              ((RightAngTriangle2D *)pBVar34,fVar23,
                                                               (MethodInfo *)0x0);
                                                    TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                              ((TriangPrismShape3D *)pBVar34,
                                                               4.2851373e-29,(MethodInfo *)0x0);
                                                    pVVar4 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                                        ((Vector3 *)&stack0xffffff40
                                                                         ,this_01,
                                                  BoxFace__Enum_Right,(MethodInfo *)0x0);
                                                  BoxShape3D::BoxShape3D_SetFaceCenter
                                                            (pBVar34,BoxFace__Enum_Left,*pVVar4,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = (this->fields)._._data;
                                                  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)
                                                                 0x0) &&
                                                     (pBVar34 = (pGVar1->fields).RightBox,
                                                     pBVar34 != (BoxShape3D *)0x0)) {
                                                    axis_07.z = (float)pBVar31;
                                                    axis_07.x = (float)(int)uVar29;
                                                    axis_07.y = (float)(int)((ulonglong)uVar29 >>
                                                                            0x20);
                                                    BoxShape3D::BoxShape3D_AlignHeight
                                                              (pBVar34,axis_07,(MethodInfo *)0x0);
                                                    axis_08.z = fVar26;
                                                    axis_08.x = (float)(int)uVar24;
                                                    axis_08.y = (float)(int)((ulonglong)uVar24 >>
                                                                            0x20);
                                                    BoxShape3D::BoxShape3D_AlignWidth
                                                              (pBVar34,axis_08,(MethodInfo *)0x0);
                                                    direction_04.z = fVar26;
                                                    direction_04.x = (float)(int)uVar24;
                                                    direction_04.y =
                                                         (float)(int)((ulonglong)uVar24 >> 0x20);
                                                    fVar9 = BoxShape3D::
                                                             BoxShape3D_GetSizeAlongDirection
                                                                       (pBVar33,direction_04,
                                                                        (MethodInfo *)0x0);
                                                    TorusShape3D::TorusShape3D_set_TubeRadius
                                                              ((TorusShape3D *)pBVar34,
                                                               fVar12 - (fVar9 + fVar9),
                                                               (MethodInfo *)0x0);
                                                    RightAngTriangle2D::
                                                    RightAngTriangle2D_set_XLength
                                                              ((RightAngTriangle2D *)pBVar34,fVar23,
                                                               (MethodInfo *)0x0);
                                                    TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                              ((TriangPrismShape3D *)pBVar34,
                                                               4.2851373e-29,(MethodInfo *)0x0);
                                                    pVVar4 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                                        ((Vector3 *)&stack0xffffff40
                                                                         ,pBVar33,BoxFace__Enum_Back
                                                                         ,(MethodInfo *)0x0);
                                                    BoxShape3D::BoxShape3D_SetFaceCenter
                                                              (pBVar34,BoxFace__Enum_Right,*pVVar4,
                                                               (MethodInfo *)0x0);
                                                    pGVar1 = (this->fields)._._data;
                                                    if ((pGVar1 != (GizmoQuad3DBorderControllerData
                                                                    *)0x0) &&
                                                       (pBVar33 = (pGVar1->fields).BottomBox,
                                                       pBVar33 != (BoxShape3D *)0x0)) {
                                                      axis_09.z = (float)pBVar31;
                                                      axis_09.x = (float)(int)uVar29;
                                                      axis_09.y = (float)(int)((ulonglong)uVar29 >>
                                                                              0x20);
                                                      BoxShape3D::BoxShape3D_AlignHeight
                                                                (pBVar33,axis_09,(MethodInfo *)0x0);
                                                      axis_10.y = fVar28;
                                                      axis_10.x = (float)pBVar30;
                                                      axis_10.z = fVar6;
                                                      BoxShape3D::BoxShape3D_AlignWidth
                                                                (pBVar33,axis_10,(MethodInfo *)0x0);
                                                      direction_05.y = fVar28;
                                                      direction_05.x = (float)pBVar30;
                                                      direction_05.z = fVar6;
                                                      fVar6 = BoxShape3D::
                                                               BoxShape3D_GetSizeAlongDirection
                                                                         (pBVar32,direction_05,
                                                                          (MethodInfo *)0x0);
                                                      TorusShape3D::TorusShape3D_set_TubeRadius
                                                                ((TorusShape3D *)pBVar33,
                                                                 fVar11 - (fVar6 + fVar6),
                                                                 (MethodInfo *)0x0);
                                                      RightAngTriangle2D::
                                                      RightAngTriangle2D_set_XLength
                                                                ((RightAngTriangle2D *)pBVar33,
                                                                 fVar23,(MethodInfo *)0x0);
                                                      TriangPrismShape3D::
                                                      TriangPrismShape3D_set_Width
                                                                ((TriangPrismShape3D *)pBVar33,
                                                                 4.2851373e-29,(MethodInfo *)0x0);
                                                      pVVar4 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                                          ((Vector3 *)
                                                                           &stack0xffffff40,this_03,
                                                                           BoxFace__Enum_Right,
                                                                           (MethodInfo *)0x0);
                                                      BoxShape3D::BoxShape3D_SetFaceCenter
                                                                (pBVar33,BoxFace__Enum_Left,*pVVar4
                                                                 ,(MethodInfo *)0x0);
                                                      pGVar1 = (this->fields)._._data;
                                                      if ((pGVar1 != (
                                                  GizmoQuad3DBorderControllerData *)0x0) &&
                                                  (pBVar30 = (pGVar1->fields).LeftBox,
                                                  pBVar30 != (BoxShape3D *)0x0)) {
                                                    axis_11.z = (float)pBVar31;
                                                    axis_11.x = (float)(int)uVar29;
                                                    axis_11.y = (float)(int)((ulonglong)uVar29 >>
                                                                            0x20);
                                                    BoxShape3D::BoxShape3D_AlignHeight
                                                              (pBVar30,axis_11,(MethodInfo *)0x0);
                                                    axis_12.z = fVar26;
                                                    axis_12.x = (float)(int)uVar24;
                                                    axis_12.y = (float)(int)((ulonglong)uVar24 >>
                                                                            0x20);
                                                    BoxShape3D::BoxShape3D_AlignWidth
                                                              (pBVar30,axis_12,(MethodInfo *)0x0);
                                                    direction_06.z = fVar26;
                                                    direction_06.x = (float)(int)uVar24;
                                                    direction_06.y =
                                                         (float)(int)((ulonglong)uVar24 >> 0x20);
                                                    fVar6 = BoxShape3D::
                                                             BoxShape3D_GetSizeAlongDirection
                                                                       (this_01,direction_06,
                                                                        (MethodInfo *)0x0);
                                                    TorusShape3D::TorusShape3D_set_TubeRadius
                                                              ((TorusShape3D *)pBVar30,
                                                               fVar12 - (fVar6 + fVar6),
                                                               (MethodInfo *)0x0);
                                                    RightAngTriangle2D::
                                                    RightAngTriangle2D_set_XLength
                                                              ((RightAngTriangle2D *)pBVar30,fVar23,
                                                               (MethodInfo *)0x0);
                                                    TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                              ((TriangPrismShape3D *)pBVar30,
                                                               4.2851373e-29,(MethodInfo *)0x0);
                                                    pVVar4 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                                        ((Vector3 *)&stack0xffffff40
                                                                         ,this_01,BoxFace__Enum_Back
                                                                         ,(MethodInfo *)0x0);
                                                    BoxShape3D::BoxShape3D_SetFaceCenter
                                                              (pBVar30,BoxFace__Enum_Right,*pVVar4,
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
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}

