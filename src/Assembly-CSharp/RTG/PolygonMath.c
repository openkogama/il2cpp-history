
/* Boolean Contains2DPoint(Vector2, List`1[UnityEngine.Vector2], Boolean, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Contains2DPoint
               (Vector2 point,List_1_UnityEngine_Vector2_ *polyPoints,bool isClosed,
               PolygonEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (isClosed == 0) {
    iVar1 = 0;
    if (polyPoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    do {
      iVar4 = (polyPoints->fields)._size;
      if (iVar4 <= iVar1) {
        return 1;
      }
      VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,(iVar1 + 1) % iVar4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,iVar1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      VStack_7.y = VVar5.x - VStack_8.x;
      VStack_8.y = VVar6.y;
      VStack_7.x = (float)((uint)(VVar5.y - VStack_8.y) ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                (&VStack_7,(MethodInfo *)0x0);
      VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,iVar1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar9 = point.x - VStack_10.x;
      VStack_10.y = VVar5.y;
      fVar11 = point.y - VStack_10.y;
      iVar1 = iVar1 + 1;
      VStack_10 = VVar5;
      VStack_8 = VVar6;
    } while (VStack_7.x * fVar9 + VStack_7.y * fVar11 <= epsilon._areaEps);
  }
  else {
    iVar1 = 0;
    if (polyPoints == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
    do {
      if ((polyPoints->fields)._size + -1 <= iVar1) {
        return 1;
      }
      VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,iVar1 + 1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,iVar1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      VStack_7.y = VVar5.x - VStack_8.x;
      VStack_8.y = VVar6.y;
      VStack_7.x = (float)((uint)(VVar5.y - VStack_8.y) ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                (&VStack_7,(MethodInfo *)0x0);
      VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,iVar1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar9 = point.x - VStack_12.x;
      VStack_12.y = VVar5.y;
      fVar11 = point.y - VStack_12.y;
      iVar1 = iVar1 + 1;
      VStack_8 = VVar6;
      VStack_12 = VVar5;
    } while (VStack_7.x * fVar9 + VStack_7.y * fVar11 <= epsilon._areaEps);
  }
  return 0;
}


/* Boolean Contains3DPoint(Vector3, Boolean, List`1[UnityEngine.Vector3], Boolean, Vector3,
   PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Contains3DPoint
               (Vector3 point,bool checkOnPlane,List_1_UnityEngine_Vector3_ *cwPolyPoints,
               bool isClosed,Vector3 polyNormal,PolygonEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (cwPolyPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((int)(isClosed + 3) <= (cwPolyPoints->fields)._size) {
      pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                VisualTreeAsset+UsingEntry]::
                List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                          ((VisualTreeAsset_UsingEntry *)&stack0xffffffc0,
                           (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cwPolyPoints
                           ,0,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                          );
      uVar2 = pVVar1->alias;
      uVar3 = pVVar1->path;
      pVVar4 = pVVar1->asset;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffc0,polyNormal,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      uVar7 = pVVar5->y;
      if (checkOnPlane != 0) {
        uVar8 = pVVar5->x;
        uVar9 = pVVar5->y;
        if (epsilon._extrudeEps <
            (float)((uint)(point.y * (float)uVar9 + point.x * (float)uVar8 + point.z * pVVar5->z +
                          (float)((uint)((float)uVar2 * (float)uVar6 + (float)uVar3 * (float)uVar7
                                        + (float)pVVar4 * pVVar5->z) ^
                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                 )) & _UNK_?)) {
          return 0;
        }
      }
      iVar10 = 0;
      if (isClosed == 0) {
        do {
          iVar11 = (cwPolyPoints->fields)._size;
          if (iVar11 <= iVar10) {
            return 1;
          }
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&pSStack_12,
                               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                               cwPolyPoints,(iVar10 + 1) % iVar11,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar13 = pVVar1->alias;
          uVar14 = pVVar1->path;
          pVVar4 = pVVar1->asset;
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffffa8,
                               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                               cwPolyPoints,iVar10,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar15 = pVVar1->alias;
          uVar16 = pVVar1->path;
          fVar17 = (float)pVVar4 - (float)pVVar1->asset;
          value.y = polyNormal.x * fVar17 - polyNormal.z * ((float)uVar13 - (float)uVar15);
          value.x = polyNormal.z * ((float)uVar14 - (float)uVar16) - polyNormal.y * fVar17;
          value.z = polyNormal.y * ((float)uVar13 - (float)uVar15) -
                    polyNormal.x * ((float)uVar14 - (float)uVar16);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&stack0xffffff9c,value,(MethodInfo *)0x0);
          uVar18 = pVVar5->x;
          uVar19 = pVVar5->y;
          fVar17 = pVVar5->z;
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffff90,
                               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                               cwPolyPoints,iVar10,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar20 = pVVar1->alias;
          uVar21 = pVVar1->path;
          iVar10 = iVar10 + 1;
        } while ((float)uVar19 * (point.y - (float)uVar21) + (float)uVar18 * (point.x - (float)uVar20)
                 + fVar17 * (point.z - (float)pVVar1->asset) <= epsilon._areaEps);
      }
      else {
        do {
          if ((cwPolyPoints->fields)._size + -1 <= iVar10) {
            return 1;
          }
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffff90,
                               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                               cwPolyPoints,iVar10 + 1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar22 = pVVar1->alias;
          uVar23 = pVVar1->path;
          pVVar4 = pVVar1->asset;
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffff9c,
                               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                               cwPolyPoints,iVar10,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar24 = pVVar1->alias;
          uVar25 = pVVar1->path;
          fVar17 = (float)pVVar4 - (float)pVVar1->asset;
          value_00.y = polyNormal.x * fVar17 - polyNormal.z * ((float)uVar22 - (float)uVar24);
          value_00.x = polyNormal.z * ((float)uVar23 - (float)uVar25) - polyNormal.y * fVar17;
          value_00.z = polyNormal.y * ((float)uVar22 - (float)uVar24) -
                       polyNormal.x * ((float)uVar23 - (float)uVar25);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&stack0xffffffa8,value_00,(MethodInfo *)0x0);
          uVar26 = pVVar5->x;
          uVar27 = pVVar5->y;
          fVar17 = pVVar5->z;
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&pSStack_12,
                               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                               cwPolyPoints,iVar10,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar28 = pVVar1->alias;
          uVar29 = pVVar1->path;
          iVar10 = iVar10 + 1;
        } while ((float)uVar27 * (point.y - (float)uVar29) +
                 (float)uVar26 * (point.x - (float)uVar28) +
                 fVar17 * (point.z - (float)pVVar1->asset) <= epsilon._areaEps);
      }
    }
    return 0;
  }
  func_?();
  pcVar30 = (code *)swi(3);
  bVar31 = (*pcVar30)();
  return bVar31;
}


/* Boolean Is2DPointOnBorder(Vector2, List`1[UnityEngine.Vector2], Boolean, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Is2DPointOnBorder
               (Vector2 point,List_1_UnityEngine_Vector2_ *polyPoints,bool isClosed,
               PolygonEpsilon epsilon,MethodInfo *method)

{
  this = polyPoints;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (polyPoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    if ((polyPoints->fields)._size < (int)(isClosed + 3)) {
      return 0;
    }
    if (isClosed == 0) {
      polyPoints = (List_1_UnityEngine_Vector2_ *)0x0;
      do {
        if ((this->fields)._size <= (int)polyPoints) {
          return 0;
        }
        VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this,(int32_t)polyPoints,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        polyPoints = (List_1_UnityEngine_Vector2_ *)((int)&polyPoints->klass + 1);
        VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this,(int)polyPoints % (this->fields)._size,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        fVar3 = Vector2Ex::Vector2Ex_GetDistanceToSegment(point,VVar1,VVar2,(MethodInfo *)0x0);
      } while (epsilon._wireEps < fVar3);
    }
    else {
      polyPoints = (List_1_UnityEngine_Vector2_ *)0x0;
      do {
        if ((this->fields)._size + -1 <= (int)polyPoints) {
          return 0;
        }
        VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this,(int32_t)polyPoints,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        polyPoints = (List_1_UnityEngine_Vector2_ *)((int)&polyPoints->klass + 1);
        VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this,(int32_t)polyPoints,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        fVar3 = Vector2Ex::Vector2Ex_GetDistanceToSegment(point,VVar1,VVar2,(MethodInfo *)0x0);
      } while (epsilon._wireEps < fVar3);
    }
    return 1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean Is2DPointOnThickBorder(Vector2, List`1[UnityEngine.Vector2], List`1[UnityEngine.Vector2],
   Boolean, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Is2DPointOnThickBorder
               (Vector2 point,List_1_UnityEngine_Vector2_ *polyPoints,
               List_1_UnityEngine_Vector2_ *thickBorderPoints,bool isClosed,PolygonEpsilon epsilon,
               MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if ((polyPoints != (List_1_UnityEngine_Vector2_ *)0x0) &&
     (thickBorderPoints != (List_1_UnityEngine_Vector2_ *)0x0)) {
    iVar2 = (polyPoints->fields)._size;
    if ((iVar2 == (thickBorderPoints->fields)._size) && ((int)(isClosed + 3) <= iVar2)) {
      this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>,
                                uVar1);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this,4,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
      method_00 = (MethodInfo *)((uint)epsilon._thickWireEps & _UNK_?);
      iVar2 = 0;
      while (iVar2 < (polyPoints->fields)._size + -1) {
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        piVar3 = &(this->fields)._version;
        *piVar3 = *piVar3 + 1;
        (this->fields)._size = 0;
        VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (polyPoints,iVar2,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        pMVar5 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar3 = &(this->fields)._version;
        *piVar3 = *piVar3 + 1;
        pMVar6 = (this->fields)._items;
        if (pMVar6 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar7 = (this->fields)._size;
        if (uVar7 < pMVar6->max_length) {
          (this->fields)._size = uVar7 + 1;
          if (pMVar6->max_length <= uVar7) goto code_?;
          fStack_8 = VVar4.x;
          (&pMVar6->vector[0].index)[uVar7 * 2] = (int32_t)fStack_8;
          pSStack_9 = (String *)VVar4.y;
          (&pMVar6->vector[0].name)[uVar7 * 2] = pSStack_9;
        }
        else {
          method_00 = pMVar5->klass->rgctx_data[0xe].method;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar4,method_00);
        }
        VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (thickBorderPoints,iVar2,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        pMVar5 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar3 = &(this->fields)._version;
        *piVar3 = *piVar3 + 1;
        pMVar6 = (this->fields)._items;
        if (pMVar6 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar7 = (this->fields)._size;
        if (uVar7 < pMVar6->max_length) {
          (this->fields)._size = uVar7 + 1;
          if (pMVar6->max_length <= uVar7) goto code_?;
          fStack_10 = VVar4.x;
          (&pMVar6->vector[0].index)[uVar7 * 2] = (int32_t)fStack_10;
          pSStack_11 = (String *)VVar4.y;
          (&pMVar6->vector[0].name)[uVar7 * 2] = pSStack_11;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar4,pMVar5->klass->rgctx_data[0xe].method
                    );
        }
        index = iVar2 + 1;
        VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (thickBorderPoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        pMVar5 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar3 = &(this->fields)._version;
        *piVar3 = *piVar3 + 1;
        pMVar6 = (this->fields)._items;
        if (pMVar6 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar7 = (this->fields)._size;
        if (uVar7 < pMVar6->max_length) {
          (this->fields)._size = uVar7 + 1;
          if (pMVar6->max_length <= uVar7) goto code_?;
          fStack_12 = VVar4.x;
          (&pMVar6->vector[0].index)[uVar7 * 2] = (int32_t)fStack_12;
          pSStack_13 = (String *)VVar4.y;
          (&pMVar6->vector[0].name)[uVar7 * 2] = pSStack_13;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar4,pMVar5->klass->rgctx_data[0xe].method
                    );
        }
        VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (polyPoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        pMVar5 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar3 = &(this->fields)._version;
        *piVar3 = *piVar3 + 1;
        pMVar6 = (this->fields)._items;
        if (pMVar6 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar7 = (this->fields)._size;
        if (uVar7 < pMVar6->max_length) {
          (this->fields)._size = uVar7 + 1;
          if (pMVar6->max_length <= uVar7) goto code_?;
          (&pMVar6->vector[0].index)[uVar7 * 2] = (int32_t)VVar4.x;
          (&pMVar6->vector[0].name)[uVar7 * 2] = (String *)VVar4.y;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar4,pMVar5->klass->rgctx_data[0xe].method
                    );
        }
        VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (polyPoints,iVar2,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        pMVar5 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar3 = &(this->fields)._version;
        *piVar3 = *piVar3 + 1;
        pMVar6 = (this->fields)._items;
        if (pMVar6 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar7 = (this->fields)._size;
        if (uVar7 < pMVar6->max_length) {
          (this->fields)._size = uVar7 + 1;
          if (pMVar6->max_length <= uVar7) goto code_?;
          fStack_14 = VVar4.x;
          (&pMVar6->vector[0].index)[uVar7 * 2] = (int32_t)fStack_14;
          pSStack_15 = (String *)VVar4.y;
          (&pMVar6->vector[0].name)[uVar7 * 2] = pSStack_15;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar4,pMVar5->klass->rgctx_data[0xe].method
                    );
        }
        bVar16 = PolygonMath_Contains2DPoint
                          (point,(List_1_UnityEngine_Vector2_ *)this,1,
                           (PolygonEpsilon)ZEXT416(method_00),(MethodInfo *)0x0);
        iVar2 = index;
        if (bVar16 != 0) {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  bVar16 = (*pcVar17)();
  return bVar16;
}


/* Boolean Is3DPointOnBorder(Vector3, Boolean, List`1[UnityEngine.Vector3], Boolean, Vector3,
   PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Is3DPointOnBorder
               (Vector3 point,bool checkOnPlane,List_1_UnityEngine_Vector3_ *cwPolyPoints,
               bool isClosed,Vector3 polyNormal,PolygonEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (cwPolyPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar1 = &(cwPolyPoints->fields)._size;
    if (*piVar1 < (int)(isClosed + 3)) {
      return 0;
    }
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&pSStack_3,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cwPolyPoints,0
                         ,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar4 = pVVar2->alias;
    uVar5 = pVVar2->path;
    pVVar6 = pVVar2->asset;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffd0,polyNormal,(MethodInfo *)0x0);
    uVar8 = pVVar7->x;
    uVar9 = pVVar7->y;
    pMVar10 = (MethodInfo *)pVVar7->z;
    fVar11 = (float)((uint)((float)uVar5 * (float)uVar9 + (float)uVar4 * (float)uVar8 +
                           (float)pVVar6 * (float)pMVar10) ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    if (checkOnPlane == 0) {
      plane.m_Normal.y = (float)uVar9;
      plane.m_Normal.x = point.y;
      plane.m_Normal.z = (float)pMVar10;
      plane.m_Distance = fVar11;
      pSStack_3 = (String *)uVar8;
      pVVar7 = PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&stack0xffffffd0,plane,point,pMVar10);
      uVar12._0_4_ = pVVar7->x;
      uVar12._4_4_ = pVVar7->y;
    }
    else {
      uVar13 = pVVar7->x;
      uVar14 = pVVar7->y;
      if (epsilon._extrudeEps <
          (float)((uint)(point.y * (float)uVar14 + point.x * (float)uVar13 + point.z * (float)pMVar10
                        + fVar11) & _UNK_?)) {
        return 0;
      }
      uVar12 = point._0_8_;
    }
    iStack_15 = (int)((ulonglong)uVar12 >> 0x20);
    if (isClosed == 0) {
      iVar16 = 0;
      do {
        if (*piVar1 <= iVar16) {
          return 0;
        }
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&stack0xffffffd0,
                             (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                             cwPolyPoints,iVar16,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        pVVar6 = pVVar2->asset;
        pMVar10 = (MethodInfo *)
                  ((int)&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         ->methodPointer + 1);
        fVar11 = (float)((int)pMVar10 % *piVar1);
        pSVar17 = (String *)&stack0xffffffc0;
        pVVar18 = (VisualTreeAsset *)cwPolyPoints;
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)pSVar17,
                             (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                             cwPolyPoints,(int32_t)fVar11,pMVar10);
        cwPolyPoints = (List_1_UnityEngine_Vector3_ *)pVVar2->asset;
        point_00.z = fVar11;
        point_00.x = (float)(int)uVar12;
        point_00.y = (float)(int)((ulonglong)uVar12 >> 0x20);
        point0.y = (float)pVVar18;
        point0.x = (float)pSVar17;
        point0.z = (float)pVVar6;
        iVar16 = iStack_15;
        fVar11 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                           (point_00,point0,(Vector3)*pVVar2,(MethodInfo *)0x0);
      } while (epsilon._wireEps < fVar11);
    }
    else {
      iVar16 = 0;
      do {
        if (*piVar1 + -1 <= iVar16) {
          return 0;
        }
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&stack0xffffffc0,
                             (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                             cwPolyPoints,iVar16,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        pVVar6 = pVVar2->asset;
        method_00 = (undefined1 *)
                    ((int)&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           ->methodPointer + 1);
        pSVar17 = (String *)&stack0xffffffd0;
        pVVar18 = (VisualTreeAsset *)cwPolyPoints;
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)pSVar17,
                             (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                             cwPolyPoints,(int32_t)method_00,(MethodInfo *)method_00);
        cwPolyPoints = (List_1_UnityEngine_Vector3_ *)pVVar2->asset;
        point_01.z = (float)method_00;
        point_01.x = (float)(int)uVar12;
        point_01.y = (float)(int)((ulonglong)uVar12 >> 0x20);
        point0_00.y = (float)pVVar18;
        point0_00.x = (float)pSVar17;
        point0_00.z = (float)pVVar6;
        iVar16 = iStack_15;
        fVar11 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                           (point_01,point0_00,(Vector3)*pVVar2,(MethodInfo *)0x0);
      } while (epsilon._wireEps < fVar11);
    }
    return 1;
  }
  func_?();
  pcVar19 = (code *)swi(3);
  bVar20 = (*pcVar19)();
  return bVar20;
}


/* Boolean Raycast(Ray, Single ByRef, List`1[UnityEngine.Vector3], Boolean, Vector3, PolygonEpsilon)
    */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Raycast
               (Ray ray,float *t,List_1_UnityEngine_Vector3_ *cwPolyPoints,bool isClosed,
               Vector3 polyNormal,PolygonEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  *t = 0.0;
  if (cwPolyPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((int)(isClosed + 3) <= (cwPolyPoints->fields)._size) {
      pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cwPolyPoints,
                          0,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      uVar3._0_4_ = pVVar2->alias;
      uVar3._4_4_ = pVVar2->path;
      pVVar4 = pVVar2->asset;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         ((Vector3 *)&stack0xffffffd4,polyNormal,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      uVar7 = pVVar5->y;
      ray_00.m_Origin.y = ray.m_Origin.y;
      ray_00.m_Origin.x = ray.m_Origin.x;
      ray_00.m_Origin.z = ray.m_Origin.z;
      ray_00.m_Direction.x = ray.m_Direction.x;
      ray_00.m_Direction.y =
           (float)((uint)((float)((ulonglong)uVar3 >> 0x20) * (float)uVar7 +
                          (float)uVar3 * (float)uVar6 + (float)pVVar4 * pVVar5->z) ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      ray_00.m_Direction.z = ray.m_Direction.z;
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                        ((Plane *)&stack0xffffffc4,ray_00,(float *)&stack0xfffffff8,
                         (MethodInfo *)0x0);
      if (bVar8 != 0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                           ((Vector3 *)&stack0xffffffd4,&ray,fVar1,(MethodInfo *)0x0);
        ray.m_Direction.x = 0.0;
        ray.m_Origin.x = epsilon._extrudeEps;
        ray.m_Origin.y = epsilon._wireEps;
        ray.m_Origin.z = epsilon._thickWireEps;
        fVar1 = polyNormal.y;
        bVar8 = PolygonMath_Contains3DPoint
                          (*pVVar5,0,cwPolyPoints,isClosed,polyNormal,epsilon,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          *t = fVar1;
          return 1;
        }
      }
    }
    return 0;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}

