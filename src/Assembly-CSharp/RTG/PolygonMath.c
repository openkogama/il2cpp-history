
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
  index = 0;
  if (isClosed == 0) {
    if (polyPoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    piVar3 = &(polyPoints->fields)._size;
    for (; index < *piVar3; index = index + 1) {
      VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,(index + 1) % *piVar3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      VStack_5 = VVar4;
      VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fStack_6 = VStack_5.x - VStack_7.x;
      VStack_7.y = VVar4.y;
      uStack_8 = (uint)(VStack_5.y - VStack_7.y) ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      VStack_7 = VVar4;
      VVar4 = (Vector2)func_?(&uStack_8,0);
      VStack_9 = VVar4;
      VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      VStack_10.y = VVar4.y;
      if (epsilon._areaEps <
          VStack_9.x * (point.x - VStack_10.x) + VStack_9.y * (point.y - VStack_10.y)) {
        return 0;
      }
      VStack_10 = VVar4;
    }
  }
  else {
    if (polyPoints == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
    for (; index < (polyPoints->fields)._size + -1; index = index + 1) {
      VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,index + 1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      VStack_9 = VVar4;
      VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fStack_6 = VStack_9.x - VStack_10.x;
      VStack_10.y = VVar4.y;
      uStack_8 = (uint)(VStack_9.y - VStack_10.y) ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      VStack_10 = VVar4;
      VVar4 = (Vector2)func_?(&uStack_8,0);
      VStack_5 = VVar4;
      VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (polyPoints,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      VStack_7.y = VVar4.y;
      if (epsilon._areaEps <
          VStack_5.y * (point.y - VStack_7.y) + VStack_5.x * (point.x - VStack_7.x)) {
        return 0;
      }
      VStack_7 = VVar4;
    }
  }
  return 1;
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
    if ((cwPolyPoints->fields)._size < (int)(isClosed + 3)) {
      return 0;
    }
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc0,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cwPolyPoints,0
                         ,
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
                        (float)((uint)((float)uVar3 * (float)uVar7 + (float)uVar2 * (float)uVar6 +
                                      (float)pVVar4 * pVVar5->z) ^
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               )) & _UNK_?)) {
        return 0;
      }
    }
    piVar10 = &(cwPolyPoints->fields)._size;
    index = 0;
    if (isClosed == 0) {
      for (; index < *piVar10; index = index + 1) {
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&pSStack_11,
                             (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                             cwPolyPoints,(index + 1) % *piVar10,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        uVar12 = pVVar1->alias;
        uVar13 = pVVar1->path;
        pVVar4 = pVVar1->asset;
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&stack0xffffffa8,
                             (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                             cwPolyPoints,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        uVar14 = pVVar1->alias;
        uVar15 = pVVar1->path;
        fVar16 = (float)pVVar4 - (float)pVVar1->asset;
        pMVar17 = (MethodInfo *)
                  (polyNormal.y * ((float)uVar12 - (float)uVar14) -
                  polyNormal.x * ((float)uVar13 - (float)uVar15));
        value.y = polyNormal.x * fVar16 - polyNormal.z * ((float)uVar12 - (float)uVar14);
        value.x = polyNormal.z * ((float)uVar13 - (float)uVar15) - polyNormal.y * fVar16;
        value.z = (float)pMVar17;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffff9c,value,pMVar17);
        uVar18 = pVVar5->x;
        uVar19 = pVVar5->y;
        fVar16 = pVVar5->z;
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&stack0xffffff90,
                             (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                             cwPolyPoints,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        uVar20 = pVVar1->alias;
        uVar21 = pVVar1->path;
        if (epsilon._areaEps <
            (float)uVar18 * (point.x - (float)uVar20) + (float)uVar19 * (point.y - (float)uVar21) +
            fVar16 * (point.z - (float)pVVar1->asset)) {
          return 0;
        }
      }
    }
    else {
      for (; index < *piVar10 + -1; index = index + 1) {
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&stack0xffffff90,
                             (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                             cwPolyPoints,index + 1,
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
                             cwPolyPoints,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        uVar24 = pVVar1->alias;
        uVar25 = pVVar1->path;
        fVar16 = (float)pVVar4 - (float)pVVar1->asset;
        pMVar17 = (MethodInfo *)
                  (polyNormal.y * ((float)uVar22 - (float)uVar24) -
                  polyNormal.x * ((float)uVar23 - (float)uVar25));
        value_00.y = polyNormal.x * fVar16 - polyNormal.z * ((float)uVar22 - (float)uVar24);
        value_00.x = polyNormal.z * ((float)uVar23 - (float)uVar25) - polyNormal.y * fVar16;
        value_00.z = (float)pMVar17;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffa8,value_00,pMVar17);
        uVar26 = pVVar5->x;
        uVar27 = pVVar5->y;
        fVar16 = pVVar5->z;
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&pSStack_11,
                             (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                             cwPolyPoints,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        uVar28 = pVVar1->alias;
        uVar29 = pVVar1->path;
        if (epsilon._areaEps <
            (float)uVar26 * (point.x - (float)uVar28) + (float)uVar27 * (point.y - (float)uVar29) +
            fVar16 * (point.z - (float)pVVar1->asset)) {
          return 0;
        }
      }
    }
    return 1;
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
    index = 0;
    if (isClosed == 0) {
      for (; index < (polyPoints->fields)._size; index = index + 1) {
        VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (polyPoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (polyPoints,(index + 1) % (polyPoints->fields)._size,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        fVar3 = Vector2Ex::Vector2Ex_GetDistanceToSegment(point,VVar1,VVar2,(MethodInfo *)0x0);
        if (fVar3 <= epsilon._wireEps) {
          return 1;
        }
      }
    }
    else {
      for (; index < (polyPoints->fields)._size + -1; index = index + 1) {
        VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (polyPoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (polyPoints,index + 1,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        fVar3 = Vector2Ex::Vector2Ex_GetDistanceToSegment(point,VVar1,VVar2,(MethodInfo *)0x0);
        if (fVar3 <= epsilon._wireEps) {
          return 1;
        }
      }
    }
    return 0;
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
    if (((polyPoints->fields)._size == (thickBorderPoints->fields)._size) &&
       ((int)(isClosed + 3) <= (polyPoints->fields)._size)) {
      this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>,
                                uVar1);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this,4,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
      index = 0;
      method_00 = (MethodInfo *)((uint)epsilon._thickWireEps & _UNK_?);
      while( true ) {
        if ((polyPoints->fields)._size + -1 <= index) break;
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        piVar2 = &(this->fields)._version;
        *piVar2 = *piVar2 + 1;
        (this->fields)._size = 0;
        VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (polyPoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        pMVar4 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar2 = &(this->fields)._version;
        *piVar2 = *piVar2 + 1;
        pMVar5 = (this->fields)._items;
        if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar6 = (this->fields)._size;
        if (uVar6 < pMVar5->max_length) {
          (this->fields)._size = uVar6 + 1;
          if (pMVar5->max_length <= uVar6) goto code_?;
          fStack_7 = VVar3.x;
          (&pMVar5->vector[0].index)[uVar6 * 2] = (int32_t)fStack_7;
          pSStack_8 = (String *)VVar3.y;
          (&pMVar5->vector[0].name)[uVar6 * 2] = pSStack_8;
        }
        else {
          method_00 = pMVar4->klass->rgctx_data[0xe].method;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar3,method_00);
        }
        VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (thickBorderPoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        pMVar4 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar2 = &(this->fields)._version;
        *piVar2 = *piVar2 + 1;
        pMVar5 = (this->fields)._items;
        if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar6 = (this->fields)._size;
        if (uVar6 < pMVar5->max_length) {
          (this->fields)._size = uVar6 + 1;
          if (pMVar5->max_length <= uVar6) goto code_?;
          fStack_9 = VVar3.x;
          (&pMVar5->vector[0].index)[uVar6 * 2] = (int32_t)fStack_9;
          pSStack_10 = (String *)VVar3.y;
          (&pMVar5->vector[0].name)[uVar6 * 2] = pSStack_10;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar3,pMVar4->klass->rgctx_data[0xe].method
                    );
        }
        VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (thickBorderPoints,index + 1,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        pMVar4 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar2 = &(this->fields)._version;
        *piVar2 = *piVar2 + 1;
        pMVar5 = (this->fields)._items;
        if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar6 = (this->fields)._size;
        if (uVar6 < pMVar5->max_length) {
          (this->fields)._size = uVar6 + 1;
          if (pMVar5->max_length <= uVar6) goto code_?;
          fStack_11 = VVar3.x;
          (&pMVar5->vector[0].index)[uVar6 * 2] = (int32_t)fStack_11;
          pSStack_12 = (String *)VVar3.y;
          (&pMVar5->vector[0].name)[uVar6 * 2] = pSStack_12;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar3,pMVar4->klass->rgctx_data[0xe].method
                    );
        }
        VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (polyPoints,index + 1,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        pMVar4 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar2 = &(this->fields)._version;
        *piVar2 = *piVar2 + 1;
        pMVar5 = (this->fields)._items;
        if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar6 = (this->fields)._size;
        if (uVar6 < pMVar5->max_length) {
          (this->fields)._size = uVar6 + 1;
          if (pMVar5->max_length <= uVar6) goto code_?;
          (&pMVar5->vector[0].index)[uVar6 * 2] = (int32_t)VVar3.x;
          (&pMVar5->vector[0].name)[uVar6 * 2] = (String *)VVar3.y;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar3,pMVar4->klass->rgctx_data[0xe].method
                    );
        }
        VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (polyPoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        pMVar4 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar2 = &(this->fields)._version;
        *piVar2 = *piVar2 + 1;
        pMVar5 = (this->fields)._items;
        if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar6 = (this->fields)._size;
        if (uVar6 < pMVar5->max_length) {
          (this->fields)._size = uVar6 + 1;
          if (pMVar5->max_length <= uVar6) goto code_?;
          fStack_13 = VVar3.x;
          (&pMVar5->vector[0].index)[uVar6 * 2] = (int32_t)fStack_13;
          pSStack_14 = (String *)VVar3.y;
          (&pMVar5->vector[0].name)[uVar6 * 2] = pSStack_14;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar3,pMVar4->klass->rgctx_data[0xe].method
                    );
        }
        bVar15 = PolygonMath_Contains2DPoint
                          (point,(List_1_UnityEngine_Vector2_ *)this,1,
                           (PolygonEpsilon)ZEXT416(method_00),(MethodInfo *)0x0);
        if (bVar15 != 0) {
          return 1;
        }
        index = index + 1;
      }
    }
    return 0;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  bVar15 = (*pcVar16)();
  return bVar15;
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
    if ((int)(isClosed + 3) <= (cwPolyPoints->fields)._size) {
      pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                VisualTreeAsset+UsingEntry]::
                List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                          ((VisualTreeAsset_UsingEntry *)&pLStack_2,
                           (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cwPolyPoints
                           ,0,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                          );
      uVar3 = pVVar1->alias;
      uVar4 = pVVar1->path;
      pVVar5 = pVVar1->asset;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffd0,polyNormal,(MethodInfo *)0x0);
      uVar7 = pVVar6->x;
      uVar8 = pVVar6->y;
      pLStack_2 = (List_1_UnityEngine_UIElements_VisualElementAsset_ *)uVar7;
      if (checkOnPlane == 0) {
        plane.m_Distance = point.x;
        plane.m_Normal = *pVVar6;
        pVStack_9 = (VisualTreeAsset__Class *)uVar8;
        pVVar6 = PlaneEx::PlaneEx_ProjectPoint
                            ((Vector3 *)&stack0xffffffd0,plane,point,(MethodInfo *)0x0);
        uVar10._0_4_ = pVVar6->x;
        uVar10._4_4_ = pVVar6->y;
      }
      else {
        uVar11 = pVVar6->x;
        uVar12 = pVVar6->y;
        if (epsilon._extrudeEps <
            (float)((uint)(point.y * (float)uVar12 + point.x * (float)uVar11 + point.z * pVVar6->z +
                          (float)((uint)((float)uVar4 * (float)uVar8 + (float)uVar3 * (float)uVar7 +
                                        (float)pVVar5 * pVVar6->z) ^
                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                 )) & _UNK_?)) {
          return 0;
        }
        uVar10 = point._0_8_;
      }
      pLVar13 = (List_1_System_Int32_ *)&(cwPolyPoints->fields)._size;
      index = 0;
      if (isClosed == 0) {
        for (; index < (int)pLVar13->klass; index = index + 1) {
          pLVar14 = cwPolyPoints;
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffffd0,
                               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                               cwPolyPoints,index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          pVVar15 = pVVar1->asset;
          pLVar16 = (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)
                    ((index + 1) % (int)pLVar14->klass);
          pVVar5 = (VisualTreeAsset *)&stack0xffffffc4;
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)pVVar5,
                               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                               cwPolyPoints,(int32_t)pLVar16,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar17 = pVVar1->path;
          pLVar13 = (List_1_System_Int32_ *)&UNK_?;
          point_00.z = (float)pLVar16;
          point_00.x = (float)(int)uVar10;
          point_00.y = (float)(int)((ulonglong)uVar10 >> 0x20);
          point0.y = (float)pVVar5;
          point0.x = (float)pVStack_9;
          point0.z = (float)pVVar15;
          fVar18 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                             (point_00,point0,(Vector3)*pVVar1,(MethodInfo *)0x0);
          if (fVar18 <= epsilon._wireEps) {
            return 1;
          }
          cwPolyPoints = (List_1_UnityEngine_Vector3_ *)uVar17;
        }
      }
      else {
        for (; index < (int)((int)&pLVar13->klass[-1].vtable.get_Count_2.method + 3);
            index = index + 1) {
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffffc4,
                               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                               cwPolyPoints,index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          pVVar15 = pVVar1->asset;
          pLVar16 = (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)(index + 1);
          pVVar5 = (VisualTreeAsset *)&stack0xffffffd0;
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)pVVar5,
                               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                               cwPolyPoints,(int32_t)pLVar16,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar19 = pVVar1->path;
          pLVar13 = (List_1_System_Int32_ *)&UNK_?;
          point_01.z = (float)pLVar16;
          point_01.x = (float)(int)uVar10;
          point_01.y = (float)(int)((ulonglong)uVar10 >> 0x20);
          point0_00.y = (float)pVVar5;
          point0_00.x = (float)pVStack_9;
          point0_00.z = (float)pVVar15;
          fVar18 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                             (point_01,point0_00,(Vector3)*pVVar1,(MethodInfo *)0x0);
          if (fVar18 <= epsilon._wireEps) {
            return 1;
          }
          cwPolyPoints = (List_1_UnityEngine_Vector3_ *)uVar19;
        }
      }
    }
    return 0;
  }
  func_?();
  pcVar20 = (code *)swi(3);
  bVar21 = (*pcVar20)();
  return bVar21;
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

