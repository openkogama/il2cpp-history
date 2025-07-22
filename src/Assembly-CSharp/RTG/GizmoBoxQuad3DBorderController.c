
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
                          (pGVar2->fields)._borderBoxHoverEps * zoomFactor,(MethodInfo *)0x0);
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
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pGVar2 = (this->fields)._._data;
  if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
     (pGVar3 = (pGVar2->fields).PlaneSlider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) {
    GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar3,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._._data;
    if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
       (pQVar4 = (pGVar2->fields).TargetQuad, pQVar4 != (QuadShape3D *)0x0)) {
      pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_Right
                         ((Vector3 *)&VStack_6,(TriangPrismShape3D *)pQVar4,(MethodInfo *)0x0);
      uStack_7._0_4_ = pVVar5->x;
      uStack_7._4_4_ = pVVar5->y;
      pGVar2 = (this->fields)._._data;
      if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
         (pQVar4 = (pGVar2->fields).TargetQuad, pQVar4 != (QuadShape3D *)0x0)) {
        pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                           ((Vector3 *)&VStack_6,(TriangPrismShape3D *)pQVar4,(MethodInfo *)0x0);
        uStack_8._0_4_ = pVVar5->x;
        uStack_8._4_4_ = pVVar5->y;
        fStack_9 = pVVar5->z;
        pGVar2 = (this->fields)._._data;
        uStack_10 = uStack_8;
        fStack_11 = fStack_9;
        if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
           (pQVar4 = (pGVar2->fields).TargetQuad, pQVar4 != (QuadShape3D *)0x0)) {
          pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_Look
                             ((Vector3 *)&VStack_6,(TriangPrismShape3D *)pQVar4,(MethodInfo *)0x0);
          uStack_12._0_4_ = pVVar5->x;
          uStack_12._4_4_ = pVVar5->y;
          pGVar2 = (this->fields)._._data;
          if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
             (pQVar4 = (pGVar2->fields).TargetQuad, pQVar4 != (QuadShape3D *)0x0)) {
            SphereTreeNodeRayHit`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
            SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_HitEnter
                      ((SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
                       )pQVar4,(MethodInfo *)0x0);
            pGVar2 = (this->fields)._._data;
            if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
               (pQVar4 = (pGVar2->fields).TargetQuad, pQVar4 != (QuadShape3D *)0x0)) {
              SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__get_Radius
                        ((SphereTreeNode_1_System_Object_ *)pQVar4,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._._data;
              if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
                 (pQVar4 = (pGVar2->fields).TargetQuad, pQVar4 != (QuadShape3D *)0x0)) {
                this_01 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                          QuadShape3D::QuadShape3D_GetCorners(pQVar4,(MethodInfo *)0x0);
                if (this_01 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
                  pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           UIElements::VisualTreeAsset+UsingEntry]::
                           List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                     (&VStack_6,this_01,0,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                     );
                  __return_storage_ptr__ = pVVar13->path;
                  pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           UIElements::VisualTreeAsset+UsingEntry]::
                           List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                     ((VisualTreeAsset_UsingEntry *)__return_storage_ptr__,this_01,1
                                      ,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                     );
                  uVar14._0_4_ = pVVar13->alias;
                  uVar14._4_4_ = pVVar13->path;
                  pVVar15 = pVVar13->asset;
                  pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           UIElements::VisualTreeAsset+UsingEntry]::
                           List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                     (&VStack_6,this_01,2,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                     );
                  fVar16 = 4.2039e-45;
                  uVar17._0_4_ = pVVar13->alias;
                  uVar17._4_4_ = pVVar13->path;
                  pVVar18 = pVVar13->asset;
                  pVVar13 = (VisualTreeAsset_UsingEntry *)&stack0xffffff74;
                  puVar19 = &UNK_?;
                  pMVar20 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                  ;
                  pVVar21 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           UIElements::VisualTreeAsset+UsingEntry]::
                           List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                     (pVVar13,this_01,3,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                     );
                  pGVar2 = (this->fields)._._data;
                  VStack_6.alias = pVVar21->alias;
                  VStack_6.path = pVVar21->path;
                  VStack_6.asset = pVVar21->asset;
                  if (((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
                      (pGVar22 = (pGVar2->fields).Border, pGVar22 != (GizmoQuad3DBorder *)0x0)) &&
                     (pGVar3 = (pGVar22->fields)._planeSlider, pGVar3 != (GizmoPlaneSlider3D *)0x0)
                     ) {
                    pGVar23 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                        (pGVar3,(MethodInfo *)0x0);
                    if (pGVar23 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      pGVar24 = (pGVar22->fields)._planeSlider;
                      if (pGVar24 != (GizmoPlaneSlider3D *)0x0) {
                        puVar25 = &UNK_?;
                        pGVar23 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                            (pGVar24,(MethodInfo *)0x0);
                        if (pGVar23 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                          pGVar2 = (this->fields)._._data;
                          if (((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
                              (pGVar22 = (pGVar2->fields).Border, pGVar22 != (GizmoQuad3DBorder *)0x0)
                              ) && (pGVar24 = (pGVar22->fields)._planeSlider,
                                   pGVar24 != (GizmoPlaneSlider3D *)0x0)) {
                            pGVar23 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                (pGVar24,(MethodInfo *)0x0);
                            if (pGVar23 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                              pGVar24 = (pGVar22->fields)._planeSlider;
                              if (pGVar24 != (GizmoPlaneSlider3D *)0x0) {
                                pGVar23 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                    (pGVar24,(MethodInfo *)0x0);
                                if (pGVar23 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                  pGVar2 = (this->fields)._._data;
                                  if ((pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) &&
                                     (this_00 = (pGVar2->fields).TopLeftBox,
                                     this_00 != (BoxShape3D *)0x0)) {
                                    fVar26 = (float)uStack_12;
                                    this = (GizmoBoxQuad3DBorderController *)pGVar3;
                                    fVar27 = (float)(int)((ulonglong)uStack_12 >> 0x20);
                                    value = &UNK_?;
                                    VVar28 = (Vector3)CONCAT84(uVar29,fVar26);
                                    pGVar24 = pGVar3;
                                    BoxShape3D::BoxShape3D_AlignHeight
                                              (this_00,VVar28,(MethodInfo *)0x0);
                                    VVar28.z = (float)puVar25;
                                    VVar28.x = (float)(undefined4)uStack_7;
                                    VVar28.y = (float)uStack_7._4_4_;
                                    BoxShape3D::BoxShape3D_AlignWidth
                                              (this_00,VVar28,(MethodInfo *)0x0);
                                    TorusShape3D::TorusShape3D_set_TubeRadius
                                              ((TorusShape3D *)this_00,(float)pGVar3,
                                               (MethodInfo *)0x0);
                                    RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                              ((RightAngTriangle2D *)this_00,(float)value,
                                               (MethodInfo *)0x0);
                                    TriangPrismShape3D::TriangPrismShape3D_set_Width
                                              ((TriangPrismShape3D *)this_00,(float)pGVar3,
                                               (MethodInfo *)0x0);
                                    fVar30 = fStack_11;
                                    direction.z = fStack_11;
                                    direction.x = (float)(undefined4)uStack_8;
                                    direction.y = (float)uStack_8._4_4_;
                                    fVar31 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                       (this_00,direction,(MethodInfo *)0x0);
                                    newCenter.y = (float)pVVar13 -
                                                  uStack_10._4_4_ * fVar31 * _UNK_?;
                                    newCenter.x = (float)puVar19 -
                                                  (float)uStack_10 * fVar31 * _UNK_?;
                                    newCenter.z = (float)this_01 -
                                                  fStack_9 * fVar31 * _UNK_?;
                                    BoxShape3D::BoxShape3D_SetFaceCenter
                                              (this_00,BoxFace__Enum_Left,newCenter,
                                               (MethodInfo *)0x0);
                                    pGVar2 = (pGVar1->fields)._._data;
                                    if (pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) {
                                      pBVar32 = (pGVar2->fields).TopRightBox;
                                      if (pBVar32 != (BoxShape3D *)0x0) {
                                        axis.z = (float)pGVar24;
                                        axis.x = (float)(undefined4)uStack_12;
                                        axis.y = (float)uStack_12._4_4_;
                                        BoxShape3D::BoxShape3D_AlignHeight
                                                  (pBVar32,axis,(MethodInfo *)0x0);
                                        axis_00.z = (float)puVar25;
                                        axis_00.x = (float)(undefined4)uStack_7;
                                        axis_00.y = (float)uStack_7._4_4_;
                                        BoxShape3D::BoxShape3D_AlignWidth
                                                  (pBVar32,axis_00,(MethodInfo *)0x0);
                                        TorusShape3D::TorusShape3D_set_TubeRadius
                                                  ((TorusShape3D *)pBVar32,(float)pGVar3,
                                                   (MethodInfo *)0x0);
                                        RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                                  ((RightAngTriangle2D *)pBVar32,(float)value,
                                                   (MethodInfo *)0x0);
                                        TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                  ((TriangPrismShape3D *)pBVar32,(float)pGVar3,
                                                   (MethodInfo *)0x0);
                                        direction_00.z = fVar30;
                                        direction_00.x = (float)(undefined4)uStack_8;
                                        direction_00.y = (float)uStack_8._4_4_;
                                        fVar31 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                           (pBVar32,direction_00,(MethodInfo *)0x0);
                                        newCenter_00.y =
                                             (float)((ulonglong)uVar14 >> 0x20) -
                                             uStack_10._4_4_ * fVar31 * _UNK_?;
                                        newCenter_00.x =
                                             (float)uVar14 -
                                             (float)uStack_10 * fVar31 * _UNK_?;
                                        newCenter_00.z =
                                             (float)pVVar15 - fStack_9 * fVar31 * _UNK_?;
                                        BoxShape3D::BoxShape3D_SetFaceCenter
                                                  (pBVar32,BoxFace__Enum_Right,newCenter_00,
                                                   (MethodInfo *)0x0);
                                        pGVar2 = (pGVar1->fields)._._data;
                                        if (pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) {
                                          pBStack_33 = (pGVar2->fields).BottomRightBox;
                                          if (pBStack_33 != (BoxShape3D *)0x0) {
                                            axis_01.z = (float)pGVar24;
                                            axis_01.x = (float)(undefined4)uStack_12;
                                            axis_01.y = (float)uStack_12._4_4_;
                                            BoxShape3D::BoxShape3D_AlignHeight
                                                      (pBStack_33,axis_01,(MethodInfo *)0x0);
                                            axis_02.z = (float)puVar25;
                                            axis_02.x = (float)(undefined4)uStack_7;
                                            axis_02.y = (float)uStack_7._4_4_;
                                            BoxShape3D::BoxShape3D_AlignWidth
                                                      (pBStack_33,axis_02,(MethodInfo *)0x0);
                                            TorusShape3D::TorusShape3D_set_TubeRadius
                                                      ((TorusShape3D *)pBStack_33,(float)pGVar3,
                                                       (MethodInfo *)0x0);
                                            RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                                      ((RightAngTriangle2D *)pBStack_33,(float)value
                                                       ,(MethodInfo *)0x0);
                                            TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                      ((TriangPrismShape3D *)pBStack_33,
                                                       (float)pGVar3,(MethodInfo *)0x0);
                                            direction_01.z = fVar30;
                                            direction_01.x = (float)(undefined4)uStack_8;
                                            direction_01.y = (float)uStack_8._4_4_;
                                            fVar31 = BoxShape3D::BoxShape3D_GetSizeAlongDirection
                                                               (pBStack_33,direction_01,
                                                                (MethodInfo *)0x0);
                                            newCenter_01.y =
                                                 (float)((ulonglong)uVar17 >> 0x20) +
                                                 uStack_10._4_4_ * fVar31 * _UNK_?;
                                            newCenter_01.x =
                                                 (float)uVar17 +
                                                 (float)uStack_10 * fVar31 * _UNK_?;
                                            newCenter_01.z =
                                                 (float)pVVar18 + fStack_9 * fVar31 * _UNK_?;
                                            BoxShape3D::BoxShape3D_SetFaceCenter
                                                      (pBStack_33,BoxFace__Enum_Right,newCenter_01,
                                                       (MethodInfo *)0x0);
                                            pGVar2 = (pGVar1->fields)._._data;
                                            if (pGVar2 != (GizmoQuad3DBorderControllerData *)0x0) {
                                              pBVar34 = (pGVar2->fields).BottomLeftBox;
                                              if (pBVar34 != (BoxShape3D *)0x0) {
                                                axis_03.z = (float)pGVar24;
                                                axis_03.x = (float)(undefined4)uStack_12;
                                                axis_03.y = (float)uStack_12._4_4_;
                                                BoxShape3D::BoxShape3D_AlignHeight
                                                          (pBVar34,axis_03,(MethodInfo *)0x0);
                                                axis_04.z = (float)puVar25;
                                                axis_04.x = (float)(undefined4)uStack_7;
                                                axis_04.y = (float)uStack_7._4_4_;
                                                BoxShape3D::BoxShape3D_AlignWidth
                                                          (pBVar34,axis_04,(MethodInfo *)0x0);
                                                TorusShape3D::TorusShape3D_set_TubeRadius
                                                          ((TorusShape3D *)pBVar34,(float)pGVar3,
                                                           (MethodInfo *)0x0);
                                                RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                                          ((RightAngTriangle2D *)pBVar34,
                                                           (float)value,(MethodInfo *)0x0);
                                                TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                          ((TriangPrismShape3D *)pBVar34,
                                                           (float)pGVar3,(MethodInfo *)0x0);
                                                direction_02.z = fVar30;
                                                direction_02.x = (float)(undefined4)uStack_8;
                                                direction_02.y = (float)uStack_8._4_4_;
                                                this_02 = pBVar34;
                                                fVar30 = BoxShape3D::
                                                         BoxShape3D_GetSizeAlongDirection
                                                                   (pBVar34,direction_02,
                                                                    (MethodInfo *)0x0);
                                                VStack_6.asset =
                                                     (VisualTreeAsset *)
                                                     ((float)VStack_6.asset +
                                                     fStack_9 * fVar30 * _UNK_?);
                                                newCenter_02.y =
                                                     (float)VStack_6.path +
                                                     uStack_10._4_4_ * fVar30 * _UNK_?;
                                                newCenter_02.x =
                                                     (float)VStack_6.alias +
                                                     (float)uStack_10 * fVar30 * _UNK_?;
                                                newCenter_02.z = (float)VStack_6.asset;
                                                BoxShape3D::BoxShape3D_SetFaceCenter
                                                          (pBVar34,BoxFace__Enum_Left,newCenter_02,
                                                           (MethodInfo *)0x0);
                                                pGVar2 = (pGVar1->fields)._._data;
                                                if ((pGVar2 != (GizmoQuad3DBorderControllerData *)
                                                               0x0) &&
                                                   (pBVar34 = (pGVar2->fields).TopBox,
                                                   pBVar34 != (BoxShape3D *)0x0)) {
                                                  axis_05.z = (float)pGVar24;
                                                  axis_05.x = (float)(undefined4)uStack_12;
                                                  axis_05.y = (float)uStack_12._4_4_;
                                                  BoxShape3D::BoxShape3D_AlignHeight
                                                            (pBVar34,axis_05,(MethodInfo *)0x0);
                                                  axis_06.z = (float)puVar25;
                                                  axis_06.x = (float)(undefined4)uStack_7;
                                                  axis_06.y = (float)uStack_7._4_4_;
                                                  BoxShape3D::BoxShape3D_AlignWidth
                                                            (pBVar34,axis_06,(MethodInfo *)0x0);
                                                  direction_03.z = (float)puVar25;
                                                  direction_03.x = (float)(undefined4)uStack_7;
                                                  direction_03.y = (float)uStack_7._4_4_;
                                                  fVar30 = BoxShape3D::
                                                           BoxShape3D_GetSizeAlongDirection
                                                                     (this_00,direction_03,
                                                                      (MethodInfo *)0x0);
                                                  TorusShape3D::TorusShape3D_set_TubeRadius
                                                            ((TorusShape3D *)pBVar34,
                                                             (float)pMVar20 - (fVar30 + fVar30),
                                                             (MethodInfo *)0x0);
                                                  RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                                            ((RightAngTriangle2D *)pBVar34,
                                                             (float)value,(MethodInfo *)0x0);
                                                  TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                            ((TriangPrismShape3D *)pBVar34,
                                                             (float)pGVar3,(MethodInfo *)0x0);
                                                  pVVar5 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                                     ((Vector3 *)&stack0xffffff74,
                                                                      this_00,BoxFace__Enum_Right,
                                                                      (MethodInfo *)0x0);
                                                  BoxShape3D::BoxShape3D_SetFaceCenter
                                                            (pBVar34,BoxFace__Enum_Left,*pVVar5,
                                                             (MethodInfo *)0x0);
                                                  pGVar2 = (pGVar1->fields)._._data;
                                                  if ((pGVar2 != (GizmoQuad3DBorderControllerData *)
                                                                 0x0) &&
                                                     (pBVar34 = (pGVar2->fields).RightBox,
                                                     pBVar34 != (BoxShape3D *)0x0)) {
                                                    axis_07.z = (float)pGVar24;
                                                    axis_07.x = (float)(undefined4)uStack_12;
                                                    axis_07.y = (float)uStack_12._4_4_;
                                                    BoxShape3D::BoxShape3D_AlignHeight
                                                              (pBVar34,axis_07,(MethodInfo *)0x0);
                                                    axis_08.z = fStack_11;
                                                    axis_08.x = (float)(undefined4)uStack_8;
                                                    axis_08.y = (float)uStack_8._4_4_;
                                                    BoxShape3D::BoxShape3D_AlignWidth
                                                              (pBVar34,axis_08,(MethodInfo *)0x0);
                                                    direction_04.z = fStack_11;
                                                    direction_04.x = (float)(undefined4)uStack_8;
                                                    direction_04.y = (float)uStack_8._4_4_;
                                                    fVar30 = BoxShape3D::
                                                             BoxShape3D_GetSizeAlongDirection
                                                                       (pBVar32,direction_04,
                                                                        (MethodInfo *)0x0);
                                                    TorusShape3D::TorusShape3D_set_TubeRadius
                                                              ((TorusShape3D *)pBVar34,
                                                               fVar16 - (fVar30 + fVar30),
                                                               (MethodInfo *)0x0);
                                                    RightAngTriangle2D::
                                                    RightAngTriangle2D_set_XLength
                                                              ((RightAngTriangle2D *)pBVar34,
                                                               (float)value,(MethodInfo *)0x0);
                                                    TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                              ((TriangPrismShape3D *)pBVar34,
                                                               (float)pGVar3,(MethodInfo *)0x0);
                                                    pVVar5 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                                       ((Vector3 *)&stack0xffffff74,
                                                                        pBVar32,BoxFace__Enum_Back,
                                                                        (MethodInfo *)0x0);
                                                    BoxShape3D::BoxShape3D_SetFaceCenter
                                                              (pBVar34,BoxFace__Enum_Right,*pVVar5,
                                                               (MethodInfo *)0x0);
                                                    pGVar2 = (pGVar1->fields)._._data;
                                                    if ((pGVar2 != (GizmoQuad3DBorderControllerData
                                                                    *)0x0) &&
                                                       (pBVar32 = (pGVar2->fields).BottomBox,
                                                       pBVar32 != (BoxShape3D *)0x0)) {
                                                      axis_09.z = (float)pGVar24;
                                                      axis_09.x = (float)(undefined4)uStack_12;
                                                      axis_09.y = (float)uStack_12._4_4_;
                                                      BoxShape3D::BoxShape3D_AlignHeight
                                                                (pBVar32,axis_09,(MethodInfo *)0x0);
                                                      axis_10.z = (float)puVar25;
                                                      axis_10.x = (float)(undefined4)uStack_7;
                                                      axis_10.y = (float)uStack_7._4_4_;
                                                      BoxShape3D::BoxShape3D_AlignWidth
                                                                (pBVar32,axis_10,(MethodInfo *)0x0);
                                                      direction_05.z = (float)puVar25;
                                                      direction_05.x = (float)(undefined4)uStack_7;
                                                      direction_05.y = (float)uStack_7._4_4_;
                                                      fVar30 = BoxShape3D::
                                                               BoxShape3D_GetSizeAlongDirection
                                                                         (pBStack_33,direction_05,
                                                                          (MethodInfo *)0x0);
                                                      TorusShape3D::TorusShape3D_set_TubeRadius
                                                                ((TorusShape3D *)pBVar32,
                                                                 (float)pMVar20 - (fVar30 + fVar30),
                                                                 (MethodInfo *)0x0);
                                                      RightAngTriangle2D::
                                                      RightAngTriangle2D_set_XLength
                                                                ((RightAngTriangle2D *)pBVar32,
                                                                 (float)value,(MethodInfo *)0x0);
                                                      TriangPrismShape3D::
                                                      TriangPrismShape3D_set_Width
                                                                ((TriangPrismShape3D *)pBVar32,
                                                                 (float)pGVar3,(MethodInfo *)0x0);
                                                      pVVar5 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                                         ((Vector3 *)
                                                                          &stack0xffffff74,this_02,
                                                                          BoxFace__Enum_Right,
                                                                          (MethodInfo *)0x0);
                                                      BoxShape3D::BoxShape3D_SetFaceCenter
                                                                (pBVar32,BoxFace__Enum_Left,*pVVar5,
                                                                 (MethodInfo *)0x0);
                                                      pGVar2 = (pGVar1->fields)._._data;
                                                      if ((pGVar2 != (
                                                  GizmoQuad3DBorderControllerData *)0x0) &&
                                                  (pBVar32 = (pGVar2->fields).LeftBox,
                                                  pBVar32 != (BoxShape3D *)0x0)) {
                                                    axis_11.z = (float)pGVar24;
                                                    axis_11.x = (float)(undefined4)uStack_12;
                                                    axis_11.y = (float)uStack_12._4_4_;
                                                    BoxShape3D::BoxShape3D_AlignHeight
                                                              (pBVar32,axis_11,(MethodInfo *)0x0);
                                                    fVar30 = fStack_11;
                                                    axis_12.z = fStack_11;
                                                    axis_12.x = (float)(undefined4)uStack_8;
                                                    axis_12.y = (float)uStack_8._4_4_;
                                                    BoxShape3D::BoxShape3D_AlignWidth
                                                              (pBVar32,axis_12,(MethodInfo *)0x0);
                                                    direction_06.z = fVar30;
                                                    direction_06.x = (float)(undefined4)uStack_8;
                                                    direction_06.y = (float)uStack_8._4_4_;
                                                    fVar30 = BoxShape3D::
                                                             BoxShape3D_GetSizeAlongDirection
                                                                       (this_00,direction_06,
                                                                        (MethodInfo *)0x0);
                                                    TorusShape3D::TorusShape3D_set_TubeRadius
                                                              ((TorusShape3D *)pBVar32,
                                                               fVar16 - (fVar30 + fVar30),
                                                               (MethodInfo *)0x0);
                                                    RightAngTriangle2D::
                                                    RightAngTriangle2D_set_XLength
                                                              ((RightAngTriangle2D *)pBVar32,
                                                               (float)value,(MethodInfo *)0x0);
                                                    TriangPrismShape3D::TriangPrismShape3D_set_Width
                                                              ((TriangPrismShape3D *)pBVar32,
                                                               (float)pGVar3,(MethodInfo *)0x0);
                                                    pVVar5 = BoxShape3D::BoxShape3D_GetFaceCenter
                                                                       ((Vector3 *)&stack0xffffff74,
                                                                        this_00,BoxFace__Enum_Back,
                                                                        (MethodInfo *)0x0);
                                                    BoxShape3D::BoxShape3D_SetFaceCenter
                                                              (pBVar32,BoxFace__Enum_Right,*pVVar5,
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
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}

