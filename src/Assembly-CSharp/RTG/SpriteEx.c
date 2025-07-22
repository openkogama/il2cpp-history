
/* List`1[UnityEngine.Vector3] GetModelVerts(Sprite) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::SpriteEx::SpriteEx_GetModelVerts(Sprite *sprite,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,7,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_)
  ;
  if (sprite != (Sprite *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_vertices
                       (sprite,(MethodInfo *)0x0);
    uVar2 = 0;
    if (pVVar1 != (Vector2__Array *)0x0) {
      pVVar3 = pVVar1->vector;
      while( true ) {
        pMVar4 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        if ((int)pVVar1->max_length <= (int)uVar2) {
          return (List_1_UnityEngine_Vector3_ *)this;
        }
        if (pVVar1->max_length <= uVar2) break;
        VVar5 = *pVVar3;
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        piVar6 = &(this->fields)._version;
        *piVar6 = *piVar6 + 1;
        pMVar7 = (this->fields)._items;
        if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar8 = (this->fields)._size;
        if (uVar8 < pMVar7->max_length) {
          (this->fields)._size = uVar8 + 1;
          if (pMVar7->max_length <= uVar8) break;
          uVar2 = uVar2 + 1;
          *(Vector2 *)(&pMVar7->vector[0].index + uVar8 * 3) = VVar5;
          pVVar3 = pVVar3 + 1;
          (&pMVar7->vector[0].actualWidth)[uVar8 * 3] = 0.0;
        }
        else {
          item.SecondAxisSign = 0;
          item.Quadrant = (int32_t)pVVar3->x;
          item.FirstAxisSign = (int32_t)pVVar3->y;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                    ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,item,
                     pMVar4->klass->rgctx_data[0xe].method);
          uVar2 = uVar2 + 1;
          pVVar3 = pVVar3 + 1;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pLVar10 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
  return pLVar10;
}


/* List`1[UnityEngine.Vector3] GetWorldVerts(Sprite, Transform) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::SpriteEx::SpriteEx_GetWorldVerts
          (Sprite *sprite,Transform *spriteTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,7,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_)
  ;
  if (sprite != (Sprite *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_vertices
                       (sprite,(MethodInfo *)0x0);
    uVar2 = 0;
    if (pVVar1 != (Vector2__Array *)0x0) {
      pVVar3 = pVVar1->vector;
      while (pMVar4 = 
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
            , (int)uVar2 < (int)pVVar1->max_length) {
        if (pVVar1->max_length <= uVar2) goto code_?;
        VVar5 = *pVVar3;
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        piVar6 = &(this->fields)._version;
        *piVar6 = *piVar6 + 1;
        pMVar7 = (this->fields)._items;
        if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar8 = (this->fields)._size;
        if (uVar8 < pMVar7->max_length) {
          (this->fields)._size = uVar8 + 1;
          if (pMVar7->max_length <= uVar8) goto code_?;
          uVar2 = uVar2 + 1;
          *(Vector2 *)(&pMVar7->vector[0].index + uVar8 * 3) = VVar5;
          pVVar3 = pVVar3 + 1;
          (&pMVar7->vector[0].actualWidth)[uVar8 * 3] = 0.0;
        }
        else {
          item.SecondAxisSign = 0;
          item.Quadrant = (int32_t)pVVar3->x;
          item.FirstAxisSign = (int32_t)pVVar3->y;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                    ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,item,
                     pMVar4->klass->rgctx_data[0xe].method);
          uVar2 = uVar2 + 1;
          pVVar3 = pVVar3 + 1;
        }
      }
      this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3___ctor_1
                ((List_1_UnityEngine_Vector3_ *)this_00,(IEnumerable_1_UnityEngine_Vector3_ *)this,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                );
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                       );
        cRam_? = '\x01';
      }
      index = 0;
      if (this_00 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
        while( true ) {
          if ((this_00->fields)._size <= index) {
            return (List_1_UnityEngine_Vector3_ *)this_00;
          }
          pVVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,
                              index,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          if (spriteTransform == (Transform *)0x0) break;
          pPVar10 = (PlaneIdHelper_PlaneQuadrantInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                             ((Vector3 *)&stack0xffffffec,spriteTransform,(Vector3)*pVVar9,
                              (MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                    (this_00,index,*pPVar10,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                    );
          index = index + 1;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pLVar12 = (List_1_UnityEngine_Vector3_ *)(*pcVar11)();
  return pLVar12;
}

