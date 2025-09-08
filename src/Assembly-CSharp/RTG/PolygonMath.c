
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
          VStack_9.y * (point.y - VStack_10.y) + VStack_9.x * (point.x - VStack_10.x)) {
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
          (float)((uint)(point.x * (float)uVar8 + point.y * (float)uVar9 + point.z * pVVar5->z +
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
            (float)uVar19 * (point.y - (float)uVar21) + (float)uVar18 * (point.x - (float)uVar20) +
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
            (float)uVar27 * (point.y - (float)uVar29) + (float)uVar26 * (point.x - (float)uVar28) +
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
                         (&VStack_2,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cwPolyPoints,
                          0,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      uStack_3._0_4_ = (float)pVVar1->alias;
      uStack_3._4_4_ = (float)pVVar1->path;
      pVStack_4 = pVVar1->asset;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         ((Vector3 *)&stack0xffffffb8,polyNormal,(MethodInfo *)0x0);
      VStack_2.alias = (String *)pVVar5->x;
      VStack_2.path = (String *)pVVar5->y;
      VStack_2.asset = (VisualTreeAsset *)pVVar5->z;
      fVar6 = (float)((uint)(uStack_3._4_4_ * (float)VStack_2.path +
                             (float)uStack_3 * (float)VStack_2.alias +
                            (float)pVStack_4 * (float)VStack_2.asset) ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if (checkOnPlane == 0) {
        fVar6 = (float)VStack_2.path * point.y + (float)VStack_2.alias * point.x +
                (float)VStack_2.asset * point.z + fVar6;
        point.y = point.y - (float)VStack_2.path * fVar6;
        point.z = point.z - (float)VStack_2.asset * fVar6;
        VStack_2.asset = (VisualTreeAsset *)point.z;
      }
      else {
        VStack_2.alias = (String *)pVVar5->x;
        VStack_2.path = (String *)pVVar5->y;
        if (epsilon._extrudeEps <
            (float)((uint)(point.y * (float)VStack_2.path + point.x * (float)VStack_2.alias +
                           point.z * (float)VStack_2.asset + fVar6) & _UNK_?)) {
          return 0;
        }
      }
      piStack_7 = &(cwPolyPoints->fields)._size;
      index = 0;
      pVStack_8 = (VisualTreeAsset *)point.z;
      if (isClosed == 0) {
        for (; index < *piStack_7; index = index + 1) {
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             ((VisualTreeAsset_UsingEntry *)&stack0xffffffb8,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                              cwPolyPoints,index,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          uStack_3._0_4_ = (float)pVVar1->alias;
          uStack_3._4_4_ = (float)pVVar1->path;
          pVVar9 = pVVar1->asset;
          pMVar10 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_2,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                              cwPolyPoints,(index + 1) % *piStack_7,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          point_00.y = point.y;
          point_00.x = (float)pMVar10;
          point_00.z = (float)pVStack_8;
          point0.z = (float)pVVar9;
          point0.x = (float)uStack_3;
          point0.y = uStack_3._4_4_;
          point.y = (float)pVStack_8;
          pVStack_4 = (VisualTreeAsset *)
                       Vector3Ex::Vector3Ex_GetDistanceToSegment
                                 (point_00,point0,(Vector3)*pVVar1,(MethodInfo *)0x0);
          if ((float)pVStack_4 <= epsilon._wireEps) {
            return 1;
          }
        }
      }
      else {
        for (; index < *piStack_7 + -1; index = index + 1) {
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             ((VisualTreeAsset_UsingEntry *)&stack0xffffffb8,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                              cwPolyPoints,index,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          uStack_3._0_4_ = (float)pVVar1->alias;
          uStack_3._4_4_ = (float)pVVar1->path;
          pVVar9 = pVVar1->asset;
          pMVar10 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
          pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_2,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                              cwPolyPoints,index + 1,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          point_01.y = point.y;
          point_01.x = (float)pMVar10;
          point_01.z = (float)pVStack_8;
          point0_00.z = (float)pVVar9;
          point0_00.x = (float)uStack_3;
          point0_00.y = uStack_3._4_4_;
          point.y = (float)pVStack_8;
          pVStack_4 = (VisualTreeAsset *)
                       Vector3Ex::Vector3Ex_GetDistanceToSegment
                                 (point_01,point0_00,(Vector3)*pVVar1,(MethodInfo *)0x0);
          if ((float)pVStack_4 <= epsilon._wireEps) {
            return 1;
          }
        }
      }
    }
    return 0;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
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
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
      VisualTreeAsset+UsingEntry]::
      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,
                 (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cwPolyPoints,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                );
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                ((Vector3 *)&stack0xffffffd4,polyNormal,(MethodInfo *)0x0);
      ray_00.m_Origin.y = ray.m_Origin.y;
      ray_00.m_Origin.x = ray.m_Origin.x;
      ray_00.m_Origin.z = ray.m_Origin.z;
      ray_00.m_Direction.x = ray.m_Direction.x;
      ray_00.m_Direction.y = ray.m_Direction.y;
      ray_00.m_Direction.z = ray.m_Direction.z;
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                        ((Plane *)&stack0xffffffc4,ray_00,(float *)&stack0xfffffff8,
                         (MethodInfo *)0x0);
      if (bVar2 != 0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                           ((Vector3 *)&stack0xffffffd4,&ray,fVar1,(MethodInfo *)0x0);
        ray.m_Direction.x = 0.0;
        ray.m_Origin.x = epsilon._extrudeEps;
        ray.m_Origin.y = epsilon._wireEps;
        ray.m_Origin.z = epsilon._thickWireEps;
        fVar1 = polyNormal.y;
        bVar2 = PolygonMath_Contains3DPoint
                          (*pVVar3,0,cwPolyPoints,isClosed,polyNormal,epsilon,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          *t = fVar1;
          return 1;
        }
      }
    }
    return 0;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}

