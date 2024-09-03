
/* Vector3 CalculateEmbedVector(List`1[UnityEngine.Vector3], GameObject, Vector3, ObjectSurfaceSnap+Type) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateEmbedVector(Vector3 *__return_storage_ptr__,List_1_UnityEngine_Vector3_ *embedPoints,GameObject *embedSurface,Vector3 embedDirection,ObjectSurfaceSnap_Type__Enum surfaceType,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff10;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff10;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__);
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__);
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  LStack_8._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current.Quadrant = 0;
  LStack_8._current.FirstAxisSign = 0;
  LStack_8._current.SecondAxisSign = 0;
  uStack_9 = 0;
  pMStack_10 = (MethodInfo *)0x0;
  uStack_11 = 0;
  uStack_12 = 0;
  fStack_13 = 0.0;
  pOVar14 = ObjectSurfaceSnap_CreateSurfaceRaycaster(surfaceType,embedSurface,0,(MethodInfo *)0x0);
  fStack_15 = -3.4028235e+38;
  cStack_16 = '\0';
  if (embedPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator((List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)&stack0xffffff30,(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)embedPoints,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__);
    uStack_18 = 0;
    LStack_8._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar17->_list;
    LStack_8._index = pLVar17->_index;
    LStack_8._version = pLVar17->_version;
    LStack_8._current.Quadrant = (int32_t)(pLVar17->_current).alias;
    uVar19 = (pLVar17->_current).path;
    uVar20 = (pLVar17->_current).asset;
    fStack_21 = embedDirection.z;
    fStack_22 = embedDirection.y;
    uStack_2 = 1;
    method_00 = (MethodInfo *)0x0;
    LStack_8._current.FirstAxisSign = uVar19;
    LStack_8._current.SecondAxisSign = uVar20;
    pLStack_23 = &LStack_8;
    while( true ) {
      bVar24 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext(&LStack_8,MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__);
      if (bVar24 == 0) {
        uStack_2 = 0xffffffff;
        pMVar25 = MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)&LStack_8,(ExceptionArgument__Enum)MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__,method_00);
        uStack_2 = 0xffffffff;
        if (cStack_16 == '\0') {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar27 = (pVVar26->zeroVector).y;
          fStack_21 = (pVVar26->zeroVector).z;
          __return_storage_ptr__->x = (pVVar26->zeroVector).x;
          __return_storage_ptr__->y = fVar27;
        }
        else {
          dVar28 = (double)fStack_15;
          if (dVar28 < 0.0) {
            func_?();
          }
          else {
            dVar28 = SQRT(dVar28);
          }
          fVar27 = (float)dVar28;
          fStack_21 = fStack_21 * fVar27;
          __return_storage_ptr__->x = (float)pMVar25 * fVar27;
          __return_storage_ptr__->y = fStack_22 * fVar27;
        }
        __return_storage_ptr__->z = fStack_21;
        *unaff_FS_OFFSET = uStack_4;
        return __return_storage_ptr__;
      }
      uStack_29 = CONCAT44(LStack_8._current.FirstAxisSign,LStack_8._current.Quadrant);
      fStack_30 = -embedDirection.z;
      pMStack_31 = (MethodInfo *)LStack_8._current.SecondAxisSign;
      pMStack_32 = (MethodInfo *)LStack_8._current.SecondAxisSign;
      pMStack_10 = (MethodInfo *)LStack_8._current.SecondAxisSign;
      uVar33 = CONCAT44(embedDirection.y,embedDirection.x) ^ 0x8000000080000000;
      value.z = fStack_30;
      value.x = (float)(int)uVar33;
      value.y = (float)(int)(uVar33 >> 0x20);
      uStack_9 = uStack_29;
      pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffff20,value,(MethodInfo *)0x0);
      uVar35 = pVVar34->x;
      uVar36 = pVVar34->y;
      fStack_13 = pVVar34->z;
      uStack_11 = uVar35;
      uStack_12 = uVar36;
      if (pOVar14 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) break;
      embedDirection.x = (float)uStack_9._4_4_;
      method_00 = pMStack_10;
      iVar37 = (*(code *)(pOVar14->klass->vtable).__unknown.method)();
      if (iVar37 == 0) {
        func_?(&uStack_9);
        iVar37 = func_?(4);
        if (iVar37 != 0) {
          uVar38 = *(undefined8 *)(iVar37 + 0xc);
          fStack_39 = *(float *)(iVar37 + 0x14);
          uStack_40._0_4_ = (float)uVar38;
          uStack_40._4_4_ = (float)((ulonglong)uVar38 >> 0x20);
          fVar27 = ((float)uStack_29 - (float)uStack_40) * ((float)uStack_29 - (float)uStack_40) + (uStack_29._4_4_ - uStack_40._4_4_) * (uStack_29._4_4_ - uStack_40._4_4_) + ((float)pMStack_32 - fStack_39) * ((float)pMStack_32 - fStack_39);
          uStack_40 = uVar38;
          if (fStack_15 < fVar27) {
            cStack_16 = '\x01';
            fStack_15 = fVar27;
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar41 = (code *)swi(3);
  pVVar34 = (Vector3 *)(*pcVar41)();
  return pVVar34;
}


/* Vector3 CalculateSitOnSurfaceOffset(OBB, Plane, Single) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(Vector3 *__return_storage_ptr__,OBB obb,Plane surfacePlane,float offsetFromSurface,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)OBB::OBB_GetCornerPoints(&obb,(MethodInfo *)0x0);
  index = PlaneEx::PlaneEx_GetFurthestPtBehind(surfacePlane,(List_1_UnityEngine_Vector3_ *)this,(MethodInfo *)0x0);
  if (index < 0) {
    index = PlaneEx::PlaneEx_GetClosestPtInFrontOrOnPlane(surfacePlane,(List_1_UnityEngine_Vector3_ *)this,(MethodInfo *)0x0);
    if (index < 0) {
      if (cRam_? == '\0') {
        obb._size.x = (float)&TypeInfo__UnityEngine__Vector3;
        __return_storage_ptr__ = (Vector3 *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      obb._size.z = (pVVar1->zeroVector).y;
      obb._size.y = (pVVar1->zeroVector).z;
      __return_storage_ptr__->x = (pVVar1->zeroVector).x;
      __return_storage_ptr__->y = obb._size.z;
      __return_storage_ptr__->z = obb._size.y;
      return __return_storage_ptr__;
    }
  }
  if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    obb._size.x = (float)MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,this,index,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pVVar3 = pVVar2->asset;
    obb._size.y = (float)pVVar2->alias;
    obb._size.z = (float)pVVar2->path;
    obb._center.x = (float)pVVar2->asset;
    obb._center.y = 0.0;
    obb._size.x = surfacePlane.m_Distance;
    pVVar4 = PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&stack0xffffffd8,surfacePlane,(Vector3)*pVVar2,(MethodInfo *)0x0);
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    *(ulonglong *)surfacePlane.m_Normal.z = CONCAT44(((float)uVar6 - obb._size.z) + surfacePlane.m_Normal.y * offsetFromSurface,((float)uVar5 - obb._size.y) + surfacePlane.m_Normal.x * offsetFromSurface);
    *(float *)((int)surfacePlane.m_Normal.z + 8) = (fVar7 - (float)pVVar3) + surfacePlane.m_Normal.z * offsetFromSurface;
    return (Vector3 *)surfacePlane.m_Normal.z;
  }
  obb._size.x = (float)&UNK_?;
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar8)();
  return pVVar4;
}


/* Vector3 CalculateSitOnSurfaceOffset(AABB, Plane, Single) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset_1(Vector3 *__return_storage_ptr__,AABB aabb,Plane surfacePlane,float offsetFromSurface,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)AABB::AABB_GetCornerPoints(&aabb,(MethodInfo *)0x0);
  index = PlaneEx::PlaneEx_GetFurthestPtBehind(surfacePlane,(List_1_UnityEngine_Vector3_ *)this,(MethodInfo *)0x0);
  if (index < 0) {
    index = PlaneEx::PlaneEx_GetClosestPtInFrontOrOnPlane(surfacePlane,(List_1_UnityEngine_Vector3_ *)this,(MethodInfo *)0x0);
    if (index < 0) {
      if (cRam_? == '\0') {
        aabb._size.x = (float)&TypeInfo__UnityEngine__Vector3;
        __return_storage_ptr__ = (Vector3 *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      aabb._size.z = (pVVar1->zeroVector).y;
      aabb._size.y = (pVVar1->zeroVector).z;
      __return_storage_ptr__->x = (pVVar1->zeroVector).x;
      __return_storage_ptr__->y = aabb._size.z;
      __return_storage_ptr__->z = aabb._size.y;
      return __return_storage_ptr__;
    }
  }
  if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    aabb._size.x = (float)MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,this,index,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pVVar3 = pVVar2->asset;
    aabb._size.y = (float)pVVar2->alias;
    aabb._size.z = (float)pVVar2->path;
    aabb._center.x = (float)pVVar2->asset;
    aabb._center.y = 0.0;
    aabb._size.x = surfacePlane.m_Distance;
    pVVar4 = PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&stack0xffffffd8,surfacePlane,(Vector3)*pVVar2,(MethodInfo *)0x0);
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    *(ulonglong *)surfacePlane.m_Normal.z = CONCAT44(((float)uVar6 - aabb._size.z) + surfacePlane.m_Normal.y * offsetFromSurface,((float)uVar5 - aabb._size.y) + surfacePlane.m_Normal.x * offsetFromSurface);
    *(float *)((int)surfacePlane.m_Normal.z + 8) = (fVar7 - (float)pVVar3) + surfacePlane.m_Normal.z * offsetFromSurface;
    return (Vector3 *)surfacePlane.m_Normal.z;
  }
  aabb._size.x = (float)&UNK_?;
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar8)();
  return pVVar4;
}


/* ObjectSurfaceSnap+SurfaceRaycaster CreateSurfaceRaycaster(ObjectSurfaceSnap+Type, GameObject, Boolean) */

ObjectSurfaceSnap_SurfaceRaycaster * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CreateSurfaceRaycaster(ObjectSurfaceSnap_Type__Enum surfaceType,GameObject *surfaceObject,bool raycastReverse,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectSurfaceSnap__MeshSurfaceRaycaster);
    func_?(&TypeInfo__RTG__ObjectSurfaceSnap__TerrainSurfaceRaycaster);
    cRam_? = '\x01';
  }
  if (((surfaceType == ObjectSurfaceSnap_Type__Enum_Mesh) || (surfaceType == ObjectSurfaceSnap_Type__Enum_TerrainMesh)) || (surfaceType == ObjectSurfaceSnap_Type__Enum_SphericalMesh)) {
    method_00 = TypeInfo__RTG__ObjectSurfaceSnap__MeshSurfaceRaycaster;
    pOVar1 = (ObjectSurfaceSnap_SurfaceRaycaster *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pOVar1->fields)._surfaceObject = surfaceObject;
    func_?(&pOVar1->fields,surfaceObject);
    (pOVar1->fields)._raycastReverse = raycastReverse;
    return pOVar1;
  }
  if (surfaceType != ObjectSurfaceSnap_Type__Enum_UnityTerrain) {
    return (ObjectSurfaceSnap_SurfaceRaycaster *)0x0;
  }
  pOVar1 = (ObjectSurfaceSnap_SurfaceRaycaster *)func_?(TypeInfo__RTG__ObjectSurfaceSnap__TerrainSurfaceRaycaster);
  if (cRam_? == '\0') {
    func_?(&UnityEngine__TerrainCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::TerrainCollider>__);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
  (pOVar1->fields)._surfaceObject = surfaceObject;
  func_?(&pOVar1->fields,surfaceObject);
  (pOVar1->fields)._raycastReverse = raycastReverse;
  if (surfaceObject != (GameObject *)0x0) {
    pOVar2 = (ObjectSurfaceSnap_SurfaceRaycaster__Class *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1(surfaceObject,UnityEngine__TerrainCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::TerrainCollider>__);
    pOVar1[1].klass = pOVar2;
    func_?(pOVar1 + 1,pOVar2);
    return pOVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar1 = (ObjectSurfaceSnap_SurfaceRaycaster *)(*pcVar3)();
  return pOVar1;
}


/* ObjectSurfaceSnap+SnapResult SnapHierarchy(GameObject, ObjectSurfaceSnap+SnapConfig) */

ObjectSurfaceSnap_SnapResult * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_SnapHierarchy(ObjectSurfaceSnap_SnapResult *__return_storage_ptr__,GameObject *root,ObjectSurfaceSnap_SnapConfig snapConfig,MethodInfo *method)

{
  cVar1 = (char)((uint)in_stack_2 >> 0x18);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__RTG__ObjectVertexCollect);
    cRam_? = '\x01';
  }
  fVar3 = 0.0;
  pTVar4 = (Transform *)0x0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  cVar12 = '\0';
  cVar13 = '\0';
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    cVar12 = '\0';
    cVar13 = '\0';
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  GameObjectEx::GameObjectEx_HierarchyHasMesh(root,(MethodInfo *)0x0);
  bVar14 = GameObjectEx::GameObjectEx_HierarchyHasSprite(root,(MethodInfo *)0x0);
  if ((cVar12 == '\0') && (bVar14 == 0)) {
    if ((root == (GameObject *)0x0) || (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(root,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0)) goto code_?;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xfffffe90,pTVar4,(MethodInfo *)0x0);
    plane_00.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
    plane_00.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
    plane_00.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
    plane_00.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
    pVVar15 = PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&stack0xfffffe9c,plane_00,*pVVar15,(MethodInfo *)0x0);
    uVar16 = pVVar15->x;
    uVar17 = pVVar15->y;
    value_11.y = (float)uVar17 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
    value_11.x = (float)uVar16 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
    value_11.z = pVVar15->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar4,value_11,(MethodInfo *)0x0);
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xfffffed4,pTVar4,(MethodInfo *)0x0);
code_?:
    uVar18._0_4_ = pVVar15->x;
    uVar18._4_4_ = pVVar15->y;
    fVar8 = pVVar15->z;
    goto code_?;
  }
  pOVar19 = ObjectSurfaceSnap_CreateSurfaceRaycaster(snapConfig.SurfaceType,snapConfig.SurfaceObject,1,(MethodInfo *)0x0);
  cVar12 = (char)((uint)pOVar19 >> 0x18);
  if (snapConfig.SurfaceType != 4) {
    if (root == (GameObject *)0x0) goto code_?;
    pOVar20 = (ObjectSurfaceSnap_SnapResult *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(root,(MethodInfo *)0x0);
    if (snapConfig.AlignAxis == 0) {
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      cVar12 = SUB41(in_stack_21,0);
      queryConfig_02.NoVolumeSize.x = in_stack_22;
      queryConfig_02.ObjectTypes = (int32_t)fVar11;
      queryConfig_02.NoVolumeSize.y = in_stack_23;
      queryConfig_02.NoVolumeSize.z = in_stack_24;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&snapConfig.SurfaceHitPlane.m_Normal.z,root,queryConfig_02,(MethodInfo *)0x0);
      fVar3 = (pOVar25->_size).x;
      fVar5 = (pOVar25->_size).y;
      fVar6 = (pOVar25->_size).z;
      in_stack_26 = (undefined *)(pOVar25->_center).x;
      snapConfig.SurfaceHitPlane.m_Distance = (pOVar25->_center).y;
      snapConfig.SurfaceObject = (GameObject *)(pOVar25->_center).z;
      uVar27 = (pOVar25->_rotation).w;
      __return_storage_ptr__ = *(ObjectSurfaceSnap_SnapResult **)&pOVar25->_isValid;
      snapConfig.AlignAxis = (bool)uVar27;
      snapConfig._1_2_ = SUB42((uint)uVar27 >> 8,0);
      snapConfig._3_1_ = SUB41((uint)uVar27 >> 0x18,0);
      if ((char)__return_storage_ptr__ == '\0') goto code_?;
      in_stack_28 = __return_storage_ptr__;
      if (cVar12 == '\0') {
        if (cVar1 != '\0') {
          if (((snapConfig.SurfaceObject != (GameObject *)0x0) && (fVar8 = snapConfig.SurfaceHitPlane.m_Distance, this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(snapConfig.SurfaceObject,(MethodInfo *)0x0), this != (Transform *)0x0)) && (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffff28,this,(MethodInfo *)0x0), pOVar20 != (ObjectSurfaceSnap_SnapResult *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffff34,(Transform *)pOVar20,(MethodInfo *)0x0);
            puVar29 = (undefined8 *)func_?();
            fVar10 = (float)*puVar29;
            fVar7 = (float)((ulonglong)*puVar29 >> 0x20);
            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale((Vector3 *)&stack0xffffff40,pTVar4,(MethodInfo *)0x0);
            Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar15,(MethodInfo *)0x0);
            in_stack_30 = -in_stack_30;
            fVar9 = -(float)__return_storage_ptr__;
            in_stack_31 = -in_stack_31;
            if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            boxCenter_01.y = snapConfig.SurfaceHitNormal.x;
            boxCenter_01.x = snapConfig.SurfaceHitPoint.z;
            boxCenter_01.z = _cStack00000080;
            boxSize_01.y = (float)in_stack_26;
            boxSize_01.x = fVar6;
            boxSize_01.z = fVar8;
            boxRotation_01.y = snapConfig.SurfaceHitPlane.m_Normal.x;
            boxRotation_01.x = snapConfig.SurfaceHitNormal.z;
            boxRotation_01.z = snapConfig.SurfaceHitPlane.m_Normal.y;
            boxRotation_01.w = snapConfig.SurfaceHitPlane.m_Normal.z;
            direction_01.y = fVar9;
            direction_01.x = in_stack_30;
            direction_01.z = in_stack_31;
            BVar32 = BoxMath::BoxMath_GetMostAlignedFace(boxCenter_01,boxSize_01,boxRotation_01,direction_01,(MethodInfo *)0x0);
            if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pLVar33 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar32,0.001,0.01,(MethodInfo *)0x0);
            snapConfig.SurfaceHitNormal.y = fVar7 + fVar3 * in_stack_34;
            inNormal_00.y = snapConfig.SurfaceHitPoint.z;
            inNormal_00.x = snapConfig.SurfaceHitPoint.y;
            inNormal_00.z = in_stack_35;
            inPoint_00.y = snapConfig.SurfaceHitNormal.y;
            inPoint_00.x = fVar10 + (float)in_stack_36 * in_stack_34;
            inPoint_00.z = in_stack_37 + fVar5 * in_stack_34;
            UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition((Plane *)&stack0xfffffff0,inNormal_00,inPoint_00,(MethodInfo *)0x0);
            obb_01._size.y = in_stack_38;
            obb_01._size.x = (float)in_stack_39;
            obb_01._size.z = in_stack_40;
            obb_01._center.x = in_stack_41;
            obb_01._center.y = (float)in_stack_42;
            obb_01._center.z = in_stack_43;
            obb_01._rotation.x = fStack44;
            obb_01._rotation.y = fStack45;
            obb_01._rotation.z = in_stack_46;
            obb_01._rotation.w = in_stack_47;
            obb_01._40_4_ = snapConfig.SurfaceHitPlane.m_Normal.y;
            surfacePlane_01.m_Normal.y = (float)snapConfig.SurfaceType;
            surfacePlane_01.m_Normal.x = (float)snapConfig.AlignmentAxis;
            surfacePlane_01.m_Normal.z = snapConfig.OffsetFromSurface;
            surfacePlane_01.m_Distance = snapConfig.SurfaceHitPoint.x;
            pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffd8,obb_01,surfacePlane_01,0.0,(MethodInfo *)0x0);
            pTStack48 = (Transform *)pVVar15->x;
            fStack49 = pVVar15->y;
            fVar8 = pVVar15->z;
            snapConfig.AlignmentAxis = (int32_t)pTStack48;
            snapConfig.SurfaceType = (int32_t)fStack49;
            snapConfig.OffsetFromSurface = fVar8;
            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0x000000f8,in_stack_50,(MethodInfo *)0x0);
            uVar51 = pVVar15->x;
            uVar52 = pVVar15->y;
            snapConfig.SurfaceHitPlane.m_Normal.x = pVVar15->z;
            __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)(snapConfig.SurfaceHitPoint.x + (float)uVar51);
            snapConfig.SurfaceHitPoint.z = snapConfig.SurfaceHitPoint.z + snapConfig.SurfaceHitPlane.m_Normal.x;
            snapConfig.AlignmentAxis = 0;
            snapConfig.AlignAxis = SUB41(snapConfig.SurfaceHitPoint.z,0);
            snapConfig._1_2_ = SUB42((uint)snapConfig.SurfaceHitPoint.z >> 8,0);
            snapConfig._3_1_ = SUB41((uint)snapConfig.SurfaceHitPoint.z >> 0x18,0);
            value.y = snapConfig.SurfaceHitPoint.y + (float)uVar52;
            value.x = (float)__return_storage_ptr__;
            value.z._0_1_ = snapConfig.AlignAxis;
            value.z._1_2_ = snapConfig._1_2_;
            value.z._3_1_ = snapConfig._3_1_;
            snapConfig.SurfaceHitNormal.y = (float)uVar51;
            snapConfig.SurfaceHitNormal.z = (float)uVar52;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTStack53,value,(MethodInfo *)0x0);
            snapConfig.SurfaceHitPoint.z = 0.0;
            snapConfig.AlignmentAxis = (int32_t)&UNK_?;
            offset.y = in_stack_54;
            offset.x = in_stack_55;
            offset.z = fVar8;
            snapConfig.SurfaceType = (int32_t)pLVar33;
            snapConfig.SurfaceHitPoint.y = fVar8;
            Vector3Ex::Vector3Ex_OffsetPoints(pLVar33,offset,(MethodInfo *)0x0);
            snapConfig.SurfaceHitPoint.x = (float)&stack0x00000054;
            snapConfig.SurfaceHitPoint.z = 0.0;
            snapConfig.SurfaceHitPoint.y = (float)in_stack_56;
            snapConfig.OffsetFromSurface = (float)&UNK_?;
            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)snapConfig.SurfaceHitPoint.x,in_stack_56,(MethodInfo *)0x0);
            uVar57 = pVVar15->x;
            uVar58 = pVVar15->y;
            snapConfig.SurfaceHitPlane.m_Normal.y = (float)uVar57 + snapConfig.OffsetFromSurface * _cStack00000080;
            snapConfig.SurfaceHitPlane.m_Normal.z = (float)uVar58 + snapConfig.OffsetFromSurface * in_stack_59;
            snapConfig.SurfaceHitPlane.m_Distance = pVVar15->z + snapConfig.OffsetFromSurface * (float)pTStack48;
            snapConfig.SurfaceObject = (GameObject *)0x0;
            snapConfig.SurfaceHitPlane.m_Normal.x = (float)in_stack_56;
            snapConfig.SurfaceHitNormal.z = (float)&UNK_?;
            value_08.y = snapConfig.SurfaceHitPlane.m_Normal.z;
            value_08.x = snapConfig.SurfaceHitPlane.m_Normal.y;
            value_08.z = snapConfig.SurfaceHitPlane.m_Distance;
            in_stack_39 = (Transform *)uVar57;
            in_stack_38 = (float)uVar58;
            in_stack_40 = snapConfig.SurfaceHitPlane.m_Distance;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(in_stack_56,value_08,(MethodInfo *)0x0);
            fStack60 = in_stack_54;
            fStack61 = in_stack_46;
            fStack62 = in_stack_47;
            fStack63 = in_stack_64;
            fStack65 = fStack49;
code_?:
            *(undefined4 *)__return_storage_ptr__ = 1;
            (__return_storage_ptr__->SittingPlane).m_Normal.x = fStack60;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = fStack61;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = fStack62;
            (__return_storage_ptr__->SittingPlane).m_Distance = fStack63;
            (__return_storage_ptr__->SittingPoint).x = fStack65;
            (__return_storage_ptr__->SittingPoint).y = (float)in_stack_42;
            (__return_storage_ptr__->SittingPoint).z = (float)pTStack48;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
        if (snapConfig.SurfaceType != 1) goto code_?;
      }
      else {
        TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffff30,(MethodInfo *)0x0);
      }
      func_?();
      if (in_stack_66 == 0) goto code_?;
      snapConfig.SurfaceType = func_?();
      if (snapConfig.SurfaceType != 0) {
        uVar67 = *(undefined4 *)(snapConfig.SurfaceType + 0x2c);
        uVar68 = *(undefined4 *)(snapConfig.SurfaceType + 0x30);
        fVar8 = *(float *)(snapConfig.SurfaceType + 0x34);
        obb_05._size.y = in_stack_69;
        obb_05._size.x = in_stack_70;
        obb_05._size.z = in_stack_71;
        obb_05._center.x = _cStack00000080;
        obb_05._center.y = fStack72;
        obb_05._center.z = fStack73;
        obb_05._rotation.x = (float)in_stack_74;
        obb_05._rotation.y = in_stack_75;
        obb_05._rotation.z = (float)in_stack_76;
        obb_05._rotation.w = in_stack_77;
        obb_05._40_4_ = in_stack_41;
        pTVar4 = in_stack_76;
        fVar9 = in_stack_77;
        fVar10 = in_stack_41;
        pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffec,obb_05,*(Plane *)(snapConfig.SurfaceType + 0x28),0.0,(MethodInfo *)0x0);
        uVar78 = pVVar15->x;
        snapConfig.SurfaceObject = (GameObject *)uVar78;
        if (pOVar20 != (ObjectSurfaceSnap_SnapResult *)0x0) {
          snapConfig.SurfaceHitNormal.x = 0.0;
          snapConfig.SurfaceHitPoint.y = (float)&stack0x00000064;
          snapConfig.SurfaceHitPoint.x = (float)&UNK_?;
          snapConfig.SurfaceHitPoint.z = (float)pOVar20;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)snapConfig.SurfaceHitPoint.y,(Transform *)pOVar20,(MethodInfo *)0x0);
          uVar79 = pVVar15->x;
          uVar80 = pVVar15->y;
          snapConfig.SurfaceHitNormal.x = (float)in_stack_39 + (float)uVar79;
          snapConfig.SurfaceHitNormal.y = in_stack_38 + (float)uVar80;
          method = (MethodInfo *)(in_stack_40 + pVVar15->z);
          snapConfig.SurfaceHitPlane.m_Normal.x = 0.0;
          snapConfig.SurfaceHitPoint.y = (float)&UNK_?;
          value_06.y = snapConfig.SurfaceHitNormal.y;
          value_06.x = snapConfig.SurfaceHitNormal.x;
          value_06.z = (float)method;
          snapConfig.SurfaceHitPoint.z = (float)pOVar20;
          snapConfig.SurfaceHitNormal.z = (float)method;
          snapConfig.SurfaceHitPlane.m_Distance = (float)uVar79;
          snapConfig.SurfaceObject = (GameObject *)uVar80;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position((Transform *)pOVar20,value_06,(MethodInfo *)0x0);
          if (cStack81 != '\0') {
            in_stack_82 = (List_1_UnityEngine_Vector3_ *)((float)in_stack_82 + in_stack_83);
            in_stack_84 = in_stack_84 + in_stack_85;
            in_stack_86 = in_stack_86 + in_stack_87;
            in_stack_38 = (float)*(undefined8 *)((int)in_stack_71 + 0x1c);
            in_stack_40 = (float)((ulonglong)*(undefined8 *)((int)in_stack_71 + 0x1c) >> 0x20);
            in_stack_38 = -in_stack_38;
            in_stack_40 = -in_stack_40;
            in_stack_41 = -*(float *)((int)in_stack_71 + 0x24);
            if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
              method = (MethodInfo *)TypeInfo__RTG__BoxMath;
              snapConfig.SurfaceObject = (GameObject *)&UNK_?;
              func_?();
            }
            boxCenter_03.y = (float)uVar68;
            boxCenter_03.x = (float)uVar67;
            boxCenter_03.z = fVar8;
            boxSize_03.y = _cStack00000080;
            boxSize_03.x = in_stack_71;
            boxSize_03.z = in_stack_59;
            boxRotation_03.y = fStack88;
            boxRotation_03.x = in_stack_89;
            boxRotation_03.z = (float)pTStack53;
            boxRotation_03.w = (float)in_stack_90;
            direction_03.y = fVar9;
            direction_03.x = (float)pTVar4;
            direction_03.z = fVar10;
            snapConfig.SurfaceHitPoint.x = (float)BoxMath::BoxMath_GetMostAlignedFace(boxCenter_03,boxSize_03,boxRotation_03,direction_03,(MethodInfo *)0x0);
            if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pLVar33 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,(BoxFace__Enum)snapConfig.SurfaceHitPoint.x,0.001,0.01,(MethodInfo *)0x0);
            pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&snapConfig.SurfaceHitPoint,(MethodInfo *)0x0);
            uVar91._0_4_ = pVVar15->x;
            uVar91._4_4_ = pVVar15->y;
            snapConfig.SurfaceHitPoint.x = -pVVar15->z;
            embedDirection_00.z = snapConfig.SurfaceHitPoint.x;
            embedDirection_00.x = (float)(int)(uVar91 ^ 0x8000000080000000);
            embedDirection_00.y = (float)(int)((uVar91 ^ 0x8000000080000000) >> 0x20);
            snapConfig.SurfaceType = (undefined4)uVar91;
            snapConfig.OffsetFromSurface = (float)uVar91._4_4_;
            pVVar15 = ObjectSurfaceSnap_CalculateEmbedVector((Vector3 *)&snapConfig.SurfaceHitPoint.z,pLVar33,snapConfig.SurfaceObject,embedDirection_00,(undefined4)uVar91,(MethodInfo *)0x0);
            uVar92 = pVVar15->x;
            uVar93 = pVVar15->y;
            snapConfig.SurfaceHitPlane.m_Normal.z = pVVar15->z;
            snapConfig.SurfaceHitPlane.m_Normal.x = (float)uVar92;
            snapConfig.SurfaceHitPlane.m_Normal.y = (float)uVar93;
            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0x00000064,(Transform *)pOVar20,(MethodInfo *)0x0);
            uVar94 = pVVar15->x;
            uVar95 = pVVar15->y;
            in_stack_40 = pVVar15->z;
            snapConfig.SurfaceHitNormal.x = snapConfig.SurfaceHitPlane.m_Distance + (float)uVar94;
            snapConfig.SurfaceHitNormal.y = (float)snapConfig.SurfaceObject + (float)uVar95;
            snapConfig.SurfaceHitNormal.z = (float)method + in_stack_40;
            snapConfig.SurfaceHitPlane.m_Normal.x = 0.0;
            snapConfig.SurfaceHitPoint.y = (float)&UNK_?;
            value_07.y = snapConfig.SurfaceHitNormal.y;
            value_07.x = snapConfig.SurfaceHitNormal.x;
            value_07.z = snapConfig.SurfaceHitNormal.z;
            snapConfig.SurfaceHitPoint.z = (float)pOVar20;
            in_stack_39 = (Transform *)uVar94;
            in_stack_38 = (float)uVar95;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position((Transform *)pOVar20,value_07,(MethodInfo *)0x0);
            __return_storage_ptr__ = pOVar20;
          }
          snapConfig.SurfaceHitPlane.m_Distance = (float)&stack0x00000054;
          snapConfig.SurfaceHitPlane.m_Normal.z = (float)&UNK_?;
          snapConfig.SurfaceObject = (GameObject *)pOVar20;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)snapConfig.SurfaceHitPlane.m_Distance,(Transform *)pOVar20,(MethodInfo *)0x0);
          uVar96 = pVVar15->x;
          uVar97 = pVVar15->y;
          in_stack_69 = pVVar15->z;
          in_stack_98 = (float)*(undefined8 *)((int)pTStack48 + 0x1c);
          in_stack_82 = (List_1_UnityEngine_Vector3_ *)((ulonglong)*(undefined8 *)((int)pTStack48 + 0x1c) >> 0x20);
          in_stack_39 = (Transform *)(in_stack_69 + snapConfig.OffsetFromSurface * *(float *)((int)pTStack48 + 0x24));
          in_stack_38 = 0.0;
          snapConfig.SurfaceHitPlane.m_Distance = (float)&UNK_?;
          value_10.y = (float)uVar97 + snapConfig.OffsetFromSurface * (float)in_stack_82;
          value_10.x = (float)uVar96 + snapConfig.OffsetFromSurface * in_stack_98;
          value_10.z = (float)in_stack_39;
          snapConfig.SurfaceObject = (GameObject *)pOVar20;
          in_stack_84 = (float)in_stack_39;
          in_stack_99 = (float)uVar96;
          in_stack_70 = (float)uVar97;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position((Transform *)pOVar20,value_10,(MethodInfo *)0x0);
          fVar8 = *(float *)((int)pTStack48 + 0x14);
          in_stack_100 = 1.4013e-45;
          in_stack_101 = *(float *)((int)pTStack48 + 0x28);
          in_stack_56 = *(Transform **)((int)pTStack48 + 0x2c);
          in_stack_102 = *(float *)((int)pTStack48 + 0x30);
          in_stack_103 = *(float *)((int)pTStack48 + 0x34);
          uVar18 = *(undefined8 *)((int)pTStack48 + 0xc);
code_?:
          in_stack_104 = (float)uVar18;
          in_stack_76 = (Transform *)((ulonglong)uVar18 >> 0x20);
          *(float *)__return_storage_ptr__ = in_stack_100;
          (__return_storage_ptr__->SittingPlane).m_Normal.x = in_stack_101;
          (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)in_stack_56;
          (__return_storage_ptr__->SittingPlane).m_Normal.z = in_stack_102;
          (__return_storage_ptr__->SittingPlane).m_Distance = in_stack_103;
          (__return_storage_ptr__->SittingPoint).x = in_stack_104;
          (__return_storage_ptr__->SittingPoint).y = (float)in_stack_76;
          (__return_storage_ptr__->SittingPoint).z = fVar8;
          return __return_storage_ptr__;
        }
        goto code_?;
      }
    }
    else if (cVar13 == '\0') {
      if (cVar12 != '\0') {
        if (((snapConfig.SurfaceObject == (GameObject *)0x0) || (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(snapConfig.SurfaceObject,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0)) || (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xfffffea8,pTVar4,(MethodInfo *)0x0), pOVar20 == (ObjectSurfaceSnap_SnapResult *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xfffffee4,(Transform *)pOVar20,(MethodInfo *)0x0);
        puVar29 = (undefined8 *)func_?();
        fVar8 = (float)*puVar29;
        fVar9 = (float)((ulonglong)*puVar29 >> 0x20);
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale((Vector3 *)&stack0xffffff08,in_stack_105,(MethodInfo *)0x0);
        Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar15,(MethodInfo *)0x0);
        normAlignVector_01.x._1_2_ = snapConfig._1_2_;
        normAlignVector_01.x._0_1_ = snapConfig.AlignAxis;
        normAlignVector_01.x._3_1_ = snapConfig._3_1_;
        normAlignVector_01.y = (float)snapConfig.AlignmentAxis;
        normAlignVector_01.z = in_stack_21;
        TransformEx::TransformEx_Align((Quaternion *)&stack0xffffff6c,(Transform *)pOVar20,normAlignVector_01,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_04.NoVolumeSize.x = in_stack_106;
        queryConfig_04.ObjectTypes = (int32_t)in_stack_26;
        queryConfig_04.NoVolumeSize.y = fVar8;
        queryConfig_04.NoVolumeSize.z = fVar9;
        pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0x00000078,root,queryConfig_04,(MethodInfo *)0x0);
        snapConfig.SurfaceHitNormal.x = (pOVar25->_center).y;
        snapConfig.SurfaceHitNormal.y = (pOVar25->_center).z;
        snapConfig.SurfaceHitNormal.z = (pOVar25->_rotation).x;
        snapConfig.SurfaceHitPlane.m_Normal.x = (pOVar25->_rotation).y;
        fVar9 = (pOVar25->_size).x;
        fVar10 = (pOVar25->_size).y;
        fVar3 = (pOVar25->_size).z;
        snapConfig.SurfaceHitPoint.z = (pOVar25->_center).x;
        pTStack48 = (Transform *)snapConfig.SurfaceHitPlane.m_Normal.x;
        uVar107 = (pOVar25->_rotation).z;
        fVar8 = (pOVar25->_rotation).w;
        snapConfig.SurfaceHitPlane.m_Distance = *(float *)&pOVar25->_isValid;
        if (SUB41(snapConfig.SurfaceHitPlane.m_Distance,0) != '\0') {
          in_stack_30 = -in_stack_30;
          fVar6 = -(float)in_stack_28;
          in_stack_31 = -in_stack_31;
          snapConfig.OffsetFromSurface = fVar9;
          snapConfig.SurfaceHitPoint.x = fVar10;
          snapConfig.SurfaceHitPoint.y = fVar3;
          snapConfig.SurfaceHitPlane.m_Normal.y = (float)uVar107;
          snapConfig.SurfaceHitPlane.m_Normal.z = fVar8;
          in_stack_71 = snapConfig.SurfaceHitNormal.x;
          _cStack00000080 = snapConfig.SurfaceHitNormal.y;
          in_stack_59 = snapConfig.SurfaceHitNormal.z;
          fVar5 = snapConfig.SurfaceHitPlane.m_Distance;
          if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          boxCenter_02.y = snapConfig.SurfaceHitNormal.x;
          boxCenter_02.x = snapConfig.SurfaceHitPoint.z;
          boxCenter_02.z = _cStack00000080;
          boxSize_02.y = fVar10;
          boxSize_02.x = fVar9;
          boxSize_02.z = fVar3;
          boxRotation_02.y = snapConfig.SurfaceHitPlane.m_Normal.x;
          boxRotation_02.x = snapConfig.SurfaceHitNormal.z;
          boxRotation_02.z = snapConfig.SurfaceHitPlane.m_Normal.y;
          boxRotation_02.w = snapConfig.SurfaceHitPlane.m_Normal.z;
          direction_02.y = fVar6;
          direction_02.x = in_stack_30;
          direction_02.z = in_stack_31;
          BVar32 = BoxMath::BoxMath_GetMostAlignedFace(boxCenter_02,boxSize_02,boxRotation_02,direction_02,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pLVar33 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar32,0.001,0.01,(MethodInfo *)0x0);
          snapConfig.OffsetFromSurface = in_stack_108 + in_stack_109 * in_stack_110;
          inNormal_01.y = in_stack_89;
          inNormal_01.x = (float)in_stack_50;
          inNormal_01.z = in_stack_34;
          inPoint_01.y = snapConfig.OffsetFromSurface;
          inPoint_01.x = in_stack_24 + fVar8 * in_stack_110;
          inPoint_01.z = in_stack_37 + fVar5 * in_stack_110;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition((Plane *)&snapConfig.SurfaceHitNormal.z,inNormal_01,inPoint_01,(MethodInfo *)0x0);
          obb_02._size.y = (float)snapConfig.SurfaceType;
          obb_02._size.x = (float)snapConfig.AlignmentAxis;
          obb_02._size.z = snapConfig.OffsetFromSurface;
          obb_02._center.x = snapConfig.SurfaceHitPoint.x;
          obb_02._center.y = (float)in_stack_42;
          obb_02._center.z = in_stack_43;
          obb_02._rotation.x = fStack44;
          obb_02._rotation.y = fStack45;
          obb_02._rotation.z = snapConfig.SurfaceHitPlane.m_Distance;
          obb_02._rotation.w = (float)snapConfig.SurfaceObject;
          obb_02._40_4_ = in_stack_111;
          surfacePlane_02.m_Normal.y = in_stack_38;
          surfacePlane_02.m_Normal.x = (float)in_stack_39;
          surfacePlane_02.m_Normal.z = in_stack_40;
          surfacePlane_02.m_Distance = in_stack_41;
          pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffd8,obb_02,surfacePlane_02,0.0,(MethodInfo *)0x0);
          pTStack48 = (Transform *)pVVar15->x;
          fStack49 = pVVar15->y;
          fVar8 = pVVar15->z;
          snapConfig.AlignmentAxis = (int32_t)pTStack48;
          snapConfig.SurfaceType = (int32_t)fStack49;
          snapConfig.OffsetFromSurface = fVar8;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0x000000f8,in_stack_50,(MethodInfo *)0x0);
          uVar112 = pVVar15->x;
          uVar113 = pVVar15->y;
          snapConfig.SurfaceHitPlane.m_Normal.x = pVVar15->z;
          __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)(snapConfig.SurfaceHitPoint.x + (float)uVar112);
          snapConfig.SurfaceHitPoint.z = snapConfig.SurfaceHitPoint.z + snapConfig.SurfaceHitPlane.m_Normal.x;
          snapConfig.AlignmentAxis = 0;
          snapConfig.AlignAxis = SUB41(snapConfig.SurfaceHitPoint.z,0);
          snapConfig._1_2_ = SUB42((uint)snapConfig.SurfaceHitPoint.z >> 8,0);
          snapConfig._3_1_ = SUB41((uint)snapConfig.SurfaceHitPoint.z >> 0x18,0);
          value_00.y = snapConfig.SurfaceHitPoint.y + (float)uVar113;
          value_00.x = (float)__return_storage_ptr__;
          value_00.z._0_1_ = snapConfig.AlignAxis;
          value_00.z._1_2_ = snapConfig._1_2_;
          value_00.z._3_1_ = snapConfig._3_1_;
          snapConfig.SurfaceHitNormal.y = (float)uVar112;
          snapConfig.SurfaceHitNormal.z = (float)uVar113;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTStack53,value_00,(MethodInfo *)0x0);
          snapConfig.SurfaceHitPoint.z = 0.0;
          snapConfig.AlignmentAxis = (int32_t)&UNK_?;
          offset_00.y = in_stack_54;
          offset_00.x = in_stack_55;
          offset_00.z = fVar8;
          snapConfig.SurfaceType = (int32_t)pLVar33;
          snapConfig.SurfaceHitPoint.y = fVar8;
          Vector3Ex::Vector3Ex_OffsetPoints(pLVar33,offset_00,(MethodInfo *)0x0);
          snapConfig.SurfaceHitPoint.x = (float)&stack0x00000054;
          snapConfig.SurfaceHitPoint.z = 0.0;
          snapConfig.SurfaceHitPoint.y = (float)in_stack_56;
          snapConfig.OffsetFromSurface = (float)&UNK_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)snapConfig.SurfaceHitPoint.x,in_stack_56,(MethodInfo *)0x0);
          uVar114 = pVVar15->x;
          uVar115 = pVVar15->y;
          snapConfig.SurfaceHitPlane.m_Normal.y = (float)uVar114 + snapConfig.OffsetFromSurface * _cStack00000080;
          snapConfig.SurfaceHitPlane.m_Normal.z = (float)uVar115 + snapConfig.OffsetFromSurface * in_stack_59;
          snapConfig.SurfaceHitPlane.m_Distance = pVVar15->z + snapConfig.OffsetFromSurface * (float)pTStack48;
          snapConfig.SurfaceObject = (GameObject *)0x0;
          snapConfig.SurfaceHitPlane.m_Normal.x = (float)in_stack_56;
          snapConfig.SurfaceHitNormal.z = (float)&UNK_?;
          value_09.y = snapConfig.SurfaceHitPlane.m_Normal.z;
          value_09.x = snapConfig.SurfaceHitPlane.m_Normal.y;
          value_09.z = snapConfig.SurfaceHitPlane.m_Distance;
          in_stack_39 = (Transform *)uVar114;
          in_stack_38 = (float)uVar115;
          in_stack_40 = snapConfig.SurfaceHitPlane.m_Distance;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(in_stack_56,value_09,(MethodInfo *)0x0);
          fStack60 = in_stack_43;
          fStack61 = fStack44;
          fStack62 = fStack45;
          fStack63 = in_stack_116;
          fStack65 = (float)pTStack48;
          pTStack48 = in_stack_50;
          in_stack_42 = in_stack_76;
          goto code_?;
        }
        goto code_?;
      }
      normAlignVector.y = snapConfig.SurfaceHitNormal.y;
      normAlignVector.x = snapConfig.SurfaceHitNormal.x;
      normAlignVector.z = snapConfig.SurfaceHitNormal.z;
      TransformEx::TransformEx_Align((Quaternion *)&stack0xfffffee8,(Transform *)pOVar20,normAlignVector,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_00.NoVolumeSize.x = (float)in_stack_117;
      queryConfig_00.ObjectTypes = in_stack_118;
      queryConfig_00.NoVolumeSize.y = (float)in_stack_66;
      queryConfig_00.NoVolumeSize.z = fVar3;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xffffffe4,root,queryConfig_00,(MethodInfo *)0x0);
      fVar3 = (pOVar25->_size).x;
      in_stack_119 = (pOVar25->_size).y;
      in_stack_30 = (pOVar25->_size).z;
      in_stack_28 = (ObjectSurfaceSnap_SnapResult *)(pOVar25->_center).x;
      in_stack_31 = (pOVar25->_center).y;
      fVar8 = (pOVar25->_center).z;
      fVar9 = (pOVar25->_rotation).x;
      fVar10 = (pOVar25->_rotation).y;
      uVar67 = (pOVar25->_rotation).z;
      fVar6 = (pOVar25->_rotation).w;
      if ((char)*(undefined4 *)&pOVar25->_isValid == '\0') goto code_?;
      fVar11 = -snapConfig.SurfaceHitNormal.x;
      fVar7 = -snapConfig.SurfaceHitNormal.y;
      fVar5 = -snapConfig.SurfaceHitNormal.z;
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter.y = in_stack_31;
      boxCenter.x = (float)in_stack_28;
      boxCenter.z = fVar8;
      boxSize.y = in_stack_119;
      boxSize.x = fVar3;
      boxSize.z = in_stack_30;
      boxRotation.y = fVar10;
      boxRotation.x = fVar9;
      boxRotation.z = (float)uVar67;
      boxRotation.w = fVar6;
      direction.y = fVar7;
      direction.x = fVar11;
      direction.z = fVar5;
      fVar3 = (float)BoxMath::BoxMath_GetMostAlignedFace(boxCenter,boxSize,boxRotation,direction,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar33 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,(BoxFace__Enum)fVar3,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar33 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar33->fields)._size != 0) {
        Vector3Ex::Vector3Ex_GetPointCloudCenter((Vector3 *)&stack0xffffff24,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar33,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pAVar120 = ObjectBounds::ObjectBounds_CalcMeshModelAABB((AABB *)&stack0xffffffa8,snapConfig.SurfaceObject,(MethodInfo *)0x0);
        fVar8 = (pAVar120->_size).x;
        fVar9 = (pAVar120->_size).y;
        pTVar4 = (Transform *)(pAVar120->_size).z;
        fVar10 = (pAVar120->_center).x;
        uVar121._0_4_ = (pAVar120->_center).y;
        uVar121._4_4_ = (pAVar120->_center).z;
        puVar122 = *(undefined **)&pAVar120->_isValid;
        if ((char)puVar122 != '\0') {
          if ((snapConfig.SurfaceObject == (GameObject *)0x0) || (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(snapConfig.SurfaceObject,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0)) goto code_?;
          pMVar123 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix((Matrix4x4 *)&stack0x0000006c,pTVar4,(MethodInfo *)0x0);
          fVar8 = in_stack_34;
          fVar9 = in_stack_35;
          pTVar4 = in_stack_36;
          fVar10 = in_stack_109;
          puVar122 = in_stack_26;
          AABB::AABB_Transform((AABB *)&stack0xffffff88,*pMVar123,(MethodInfo *)0x0);
          uVar121._4_4_ = in_stack_124;
          uVar121._0_4_ = in_stack_125;
        }
        fStack49 = fVar9;
        pTStack48 = (Transform *)fVar8;
        in_stack_50 = pTVar4;
        in_stack_89 = fVar10;
        _fStack00000098 = uVar121;
        in_stack_90 = puVar122;
        pVVar15 = OBB::OBB_get_Extents((Vector3 *)&stack0xffffff98,(OBB *)&stack0x00000088,(MethodInfo *)0x0);
        fVar9 = pVVar15->x;
        fVar10 = pVVar15->y;
        fVar8 = pVVar15->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 < 0.0) {
          func_?();
        }
        func_?();
        if (in_stack_66 == 0) goto code_?;
        snapConfig.SurfaceType = func_?();
        uVar126 = snapConfig._3_1_;
        uVar127 = snapConfig._1_2_;
        bVar14 = snapConfig.AlignAxis;
        snapConfig.AlignAxis = (bool)pOVar20;
        bVar128 = snapConfig.AlignAxis;
        snapConfig._3_1_ = SUB41((uint)pOVar20 >> 0x18,0);
        uVar129 = snapConfig._3_1_;
        snapConfig._1_2_ = SUB42((uint)pOVar20 >> 8,0);
        uVar130 = snapConfig._1_2_;
        if (snapConfig.SurfaceType != 0) {
          uVar131 = ((Vector3 *)(snapConfig.SurfaceType + 0x1c))->y;
          snapConfig.AlignAxis = (bool)uVar131;
          snapConfig._1_2_ = SUB42((uint)uVar131 >> 8,0);
          snapConfig._3_1_ = SUB41((uint)uVar131 >> 0x18,0);
          TransformEx::TransformEx_Align((Quaternion *)&stack0xffffffd8,(Transform *)pOVar20,*(Vector3 *)(snapConfig.SurfaceType + 0x1c),snapConfig.AlignmentAxis,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_06.NoVolumeSize.x = in_stack_40;
          queryConfig_06.ObjectTypes = (int32_t)in_stack_38;
          queryConfig_06.NoVolumeSize.y = in_stack_41;
          queryConfig_06.NoVolumeSize.z = in_stack_98;
          pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0x000000e4,root,queryConfig_06,(MethodInfo *)0x0);
          uVar132 = (pOVar25->_rotation).w;
          uVar133 = (pOVar25->_size).x;
          uVar134 = (pOVar25->_size).y;
          uVar135 = (pOVar25->_size).z;
          obb_04._size.z = (float)uVar135;
          obb_04._size.y = (float)uVar134;
          obb_04._size.x = (float)uVar133;
          uVar136 = (pOVar25->_center).x;
          uVar137 = (pOVar25->_center).y;
          uVar138 = (pOVar25->_center).z;
          obb_04._center.z = (float)uVar138;
          obb_04._center.y = (float)uVar137;
          obb_04._center.x = (float)uVar136;
          uVar139 = (pOVar25->_rotation).x;
          uVar140 = (pOVar25->_rotation).y;
          uVar141 = (pOVar25->_rotation).z;
          obb_04._rotation.z = (float)uVar141;
          obb_04._rotation.y = (float)uVar140;
          obb_04._rotation.x = (float)uVar139;
          obb_04._rotation.w = (float)uVar132;
          obb_04._isValid = pOVar25->_isValid;
          obb_04._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
          pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffd8,obb_04,*(Plane *)((int)in_stack_111 + 0x28),0.0,(MethodInfo *)0x0);
          uVar142 = pVVar15->x;
          uVar143 = pVVar15->y;
          snapConfig.OffsetFromSurface = pVVar15->z;
          snapConfig.AlignmentAxis = uVar142;
          snapConfig.SurfaceType = uVar143;
          if (pOVar20 == (ObjectSurfaceSnap_SnapResult *)0x0) goto code_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0x000000f8,(Transform *)pOVar20,(MethodInfo *)0x0);
          uVar144 = pVVar15->x;
          uVar145 = pVVar15->y;
          snapConfig.SurfaceHitPlane.m_Normal.x = pVVar15->z;
          snapConfig.SurfaceHitPoint.z = snapConfig.SurfaceHitPoint.z + snapConfig.SurfaceHitPlane.m_Normal.x;
          snapConfig.AlignmentAxis = 0;
          snapConfig.AlignAxis = SUB41(snapConfig.SurfaceHitPoint.z,0);
          snapConfig._1_2_ = SUB42((uint)snapConfig.SurfaceHitPoint.z >> 8,0);
          snapConfig._3_1_ = SUB41((uint)snapConfig.SurfaceHitPoint.z >> 0x18,0);
          value_02.y = snapConfig.SurfaceHitPoint.y + (float)uVar145;
          value_02.x = snapConfig.SurfaceHitPoint.x + (float)uVar144;
          value_02.z._0_1_ = snapConfig.AlignAxis;
          value_02.z._1_2_ = snapConfig._1_2_;
          value_02.z._3_1_ = snapConfig._3_1_;
          snapConfig.SurfaceHitNormal.y = (float)uVar144;
          snapConfig.SurfaceHitNormal.z = (float)uVar145;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position((Transform *)pOVar20,value_02,(MethodInfo *)0x0);
          snapConfig.AlignmentAxis = 0;
          __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)&UNK_?;
          snapConfig.AlignAxis = bVar128;
          snapConfig._1_2_ = uVar130;
          snapConfig._3_1_ = uVar129;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&snapConfig.SurfaceHitPlane.m_Distance,(Transform *)pOVar20,(MethodInfo *)0x0);
          uVar146 = pVVar15->x;
          uVar147 = pVVar15->y;
          snapConfig.SurfaceHitNormal.y = pVVar15->z + in_stack_70 * snapConfig.OffsetFromSurface;
          snapConfig.SurfaceHitPoint.z = (float)uVar146 + in_stack_86 * snapConfig.OffsetFromSurface;
          snapConfig.SurfaceHitNormal.x = (float)uVar147 + in_stack_99 * snapConfig.OffsetFromSurface;
          snapConfig.SurfaceHitNormal.z = 0.0;
          snapConfig.SurfaceHitPoint.x = (float)&UNK_?;
          value_04.y = snapConfig.SurfaceHitNormal.x;
          value_04.x = snapConfig.SurfaceHitPoint.z;
          value_04.z = snapConfig.SurfaceHitNormal.y;
          snapConfig.SurfaceHitPoint.y = (float)pOVar20;
          snapConfig.SurfaceObject = (GameObject *)snapConfig.SurfaceHitNormal.y;
          snapConfig.SurfaceHitPlane.m_Normal.z = (float)uVar146;
          snapConfig.SurfaceHitPlane.m_Distance = (float)uVar147;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position((Transform *)pOVar20,value_04,(MethodInfo *)0x0);
          snapConfig.SurfaceHitPlane.m_Distance = *(float *)((int)in_stack_111 + 0x14);
          snapConfig.SurfaceHitPlane.m_Normal.y = (float)*(undefined8 *)((int)in_stack_111 + 0xc);
          snapConfig.SurfaceHitPlane.m_Normal.z = (float)((ulonglong)*(undefined8 *)((int)in_stack_111 + 0xc) >> 0x20);
          in_stack_71 = in_stack_70;
          goto code_?;
        }
        normAlignVector_02.y = snapConfig.SurfaceHitNormal.y;
        normAlignVector_02.x = snapConfig.SurfaceHitNormal.x;
        normAlignVector_02.z = snapConfig.SurfaceHitNormal.z;
        snapConfig.AlignAxis = bVar14;
        snapConfig._1_2_ = uVar127;
        snapConfig._3_1_ = uVar126;
        TransformEx::TransformEx_Align((Quaternion *)&stack0xffffffd8,(Transform *)pOVar20,normAlignVector_02,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_05.NoVolumeSize.x = in_stack_40;
        queryConfig_05.ObjectTypes = (int32_t)in_stack_38;
        queryConfig_05.NoVolumeSize.y = in_stack_41;
        queryConfig_05.NoVolumeSize.z = in_stack_98;
        pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0x000000e4,root,queryConfig_05,(MethodInfo *)0x0);
        uVar148 = (pOVar25->_rotation).w;
        uVar149 = (pOVar25->_size).x;
        uVar150 = (pOVar25->_size).y;
        uVar151 = (pOVar25->_size).z;
        obb_03._size.z = (float)uVar151;
        obb_03._size.y = (float)uVar150;
        obb_03._size.x = (float)uVar149;
        uVar152 = (pOVar25->_center).x;
        uVar153 = (pOVar25->_center).y;
        uVar154 = (pOVar25->_center).z;
        obb_03._center.z = (float)uVar154;
        obb_03._center.y = (float)uVar153;
        obb_03._center.x = (float)uVar152;
        uVar155 = (pOVar25->_rotation).x;
        uVar156 = (pOVar25->_rotation).y;
        uVar157 = (pOVar25->_rotation).z;
        obb_03._rotation.z = (float)uVar157;
        obb_03._rotation.y = (float)uVar156;
        obb_03._rotation.x = (float)uVar155;
        obb_03._rotation.w = (float)uVar148;
        obb_03._isValid = pOVar25->_isValid;
        obb_03._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
        surfacePlane_03.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        surfacePlane_03.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        surfacePlane_03.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        surfacePlane_03.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
        pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffd8,obb_03,surfacePlane_03,0.0,(MethodInfo *)0x0);
        uVar158 = pVVar15->x;
        uVar159 = pVVar15->y;
        snapConfig.OffsetFromSurface = pVVar15->z;
        snapConfig.AlignmentAxis = uVar158;
        snapConfig.SurfaceType = uVar159;
        if (pOVar20 == (ObjectSurfaceSnap_SnapResult *)0x0) goto code_?;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&snapConfig.SurfaceHitPlane.m_Distance,(Transform *)pOVar20,(MethodInfo *)0x0);
        uVar160 = pVVar15->x;
        uVar161 = pVVar15->y;
        snapConfig.SurfaceHitPlane.m_Normal.x = pVVar15->z;
        snapConfig.SurfaceHitPoint.z = snapConfig.SurfaceHitPoint.z + snapConfig.SurfaceHitPlane.m_Normal.x;
        snapConfig.AlignmentAxis = 0;
        snapConfig.AlignAxis = SUB41(snapConfig.SurfaceHitPoint.z,0);
        snapConfig._1_2_ = SUB42((uint)snapConfig.SurfaceHitPoint.z >> 8,0);
        snapConfig._3_1_ = SUB41((uint)snapConfig.SurfaceHitPoint.z >> 0x18,0);
        value_01.y = snapConfig.SurfaceHitPoint.y + (float)uVar161;
        value_01.x = snapConfig.SurfaceHitPoint.x + (float)uVar160;
        value_01.z._0_1_ = snapConfig.AlignAxis;
        value_01.z._1_2_ = snapConfig._1_2_;
        value_01.z._3_1_ = snapConfig._3_1_;
        snapConfig.SurfaceHitNormal.y = (float)uVar160;
        snapConfig.SurfaceHitNormal.z = (float)uVar161;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position((Transform *)pOVar20,value_01,(MethodInfo *)0x0);
        snapConfig.AlignmentAxis = 0;
        __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)&UNK_?;
        snapConfig.AlignAxis = bVar128;
        snapConfig._1_2_ = uVar130;
        snapConfig._3_1_ = uVar129;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&snapConfig.SurfaceHitPlane.m_Distance,(Transform *)pOVar20,(MethodInfo *)0x0);
        uVar162 = pVVar15->x;
        uVar163 = pVVar15->y;
        fVar8 = snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
        snapConfig.SurfaceHitNormal.y = pVVar15->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
        snapConfig.SurfaceHitPoint.z = (float)uVar162 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
        snapConfig.SurfaceHitNormal.x = (float)uVar163 + fVar8;
        snapConfig.SurfaceHitNormal.z = 0.0;
        snapConfig.SurfaceHitPoint.x = (float)&UNK_?;
        value_03.y = snapConfig.SurfaceHitNormal.x;
        value_03.x = snapConfig.SurfaceHitPoint.z;
        value_03.z = snapConfig.SurfaceHitNormal.y;
        snapConfig.SurfaceHitPoint.y = (float)pOVar20;
        snapConfig.SurfaceObject = (GameObject *)snapConfig.SurfaceHitNormal.y;
        snapConfig.SurfaceHitPlane.m_Normal.z = (float)uVar162;
        snapConfig.SurfaceHitPlane.m_Distance = (float)uVar163;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position((Transform *)pOVar20,value_03,(MethodInfo *)0x0);
        in_stack_55 = snapConfig.SurfaceHitPlane.m_Distance;
        fVar8 = snapConfig.SurfaceHitPlane.m_Normal.x;
        snapConfig.SurfaceObject = (GameObject *)0x0;
        in_stack_54 = 0.0;
        in_stack_46 = 0.0;
        in_stack_47 = 0.0;
        snapConfig.SurfaceHitPlane.m_Distance = in_stack_70;
        pTStack53 = (Transform *)snapConfig.SurfaceHitPlane.m_Normal.x;
        fStack88 = 1.4013e-45;
        in_stack_90 = (undefined *)snapConfig.SurfaceHitPlane.m_Normal.y;
        fStack164 = snapConfig.SurfaceHitPlane.m_Normal.z;
        snapConfig.SurfaceHitNormal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        snapConfig.SurfaceHitNormal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        snapConfig.SurfaceHitNormal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        snapConfig.SurfaceHitPlane.m_Normal.x = in_stack_55;
        snapConfig.SurfaceHitPoint.z = (float)&stack0x00000050;
        snapConfig.SurfaceHitPoint.y = (float)&UNK_?;
        plane.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        plane.m_Normal.x = fVar8;
        plane.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        plane.m_Distance = in_stack_55;
        pt.y = in_stack_103;
        pt.x = in_stack_102;
        pt.z = in_stack_70;
        pVVar15 = PlaneEx::PlaneEx_ProjectPoint((Vector3 *)snapConfig.SurfaceHitPoint.z,plane,pt,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    else {
      pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xfffffea0,(MethodInfo *)0x0);
      TransformEx::TransformEx_Align((Quaternion *)&stack0xfffffef0,(Transform *)pOVar20,*pVVar15,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_01.NoVolumeSize.x = fVar6;
      queryConfig_01.ObjectTypes = (int32_t)fVar5;
      queryConfig_01.NoVolumeSize.y = fVar7;
      queryConfig_01.NoVolumeSize.z = in_stack_165;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xfffffffc,root,queryConfig_01,(MethodInfo *)0x0);
      fVar9 = (pOVar25->_size).x;
      fVar10 = (pOVar25->_size).y;
      fVar7 = (pOVar25->_size).z;
      fVar11 = (pOVar25->_center).x;
      fVar166 = (pOVar25->_center).y;
      fVar167 = (pOVar25->_center).z;
      fVar168 = (pOVar25->_rotation).x;
      fVar169 = (pOVar25->_rotation).y;
      fVar3 = (pOVar25->_rotation).z;
      fVar5 = (pOVar25->_rotation).w;
      fVar6 = *(float *)&pOVar25->_isValid;
      if (SUB41(fVar6,0) == '\0') goto code_?;
      pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xfffffef0,(MethodInfo *)0x0);
      uVar170 = pVVar15->x;
      uVar171 = pVVar15->y;
      fVar172 = -(float)uVar170;
      fVar173 = -(float)uVar171;
      fVar174 = -pVVar15->z;
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter_00.y = fVar168;
      boxCenter_00.x = fVar167;
      boxCenter_00.z = fVar169;
      boxSize_00.y = fVar11;
      boxSize_00.x = fVar7;
      boxSize_00.z = fVar166;
      boxRotation_00.y = fVar5;
      boxRotation_00.x = fVar3;
      boxRotation_00.z = fVar6;
      boxRotation_00.w = in_stack_175;
      direction_00.y = fVar173;
      direction_00.x = fVar172;
      direction_00.z = fVar174;
      fVar3 = (float)BoxMath::BoxMath_GetMostAlignedFace(boxCenter_00,boxSize_00,boxRotation_00,direction_00,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar33 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,(BoxFace__Enum)fVar3,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar33 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar33->fields)._size != 0) {
        pVVar15 = Vector3Ex::Vector3Ex_GetPointCloudCenter((Vector3 *)&stack0xffffff34,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar33,(MethodInfo *)0x0);
        fVar8 = pVVar15->z;
        pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffff70,(MethodInfo *)0x0);
        uVar176 = pVVar15->x;
        in_stack_28 = (ObjectSurfaceSnap_SnapResult *)(fVar8 + (float)uVar176 * 0.001);
        in_stack_31 = 0.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
        pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffff78,(MethodInfo *)0x0);
        uVar177 = pVVar15->x;
        cVar1 = (char)((uint)uVar177 >> 0x18);
        func_?();
        if (in_stack_66 == 0) goto code_?;
        fVar3 = 5.60519e-45;
        iVar178 = func_?();
        if (iVar178 != 0) {
          uVar179 = *(undefined8 *)(iVar178 + 0x1c);
          fVar8 = *(float *)(iVar178 + 0x24);
          fVar9 = (float)uVar179;
          uVar67 = (undefined4)((ulonglong)uVar179 >> 0x20);
          if (cVar1 != '\0') {
            if (snapConfig.SurfaceObject == (GameObject *)0x0) goto code_?;
            terrain = (Terrain *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1(snapConfig.SurfaceObject,UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__);
            pVVar15 = TerrainEx::TerrainEx_GetInterpolatedNormal((Vector3 *)&stack0xfffffee4,terrain,*(Vector3 *)((int)fVar3 + 0xc),(MethodInfo *)0x0);
            uVar179._0_4_ = pVVar15->x;
            uVar179._4_4_ = pVVar15->y;
            fVar8 = pVVar15->z;
            in_stack_124 = (float)(undefined4)uVar179;
            in_stack_26 = (undefined *)uVar179._4_4_;
          }
          normAlignVector_00.z = fVar8;
          normAlignVector_00.x = (float)(int)uVar179;
          normAlignVector_00.y = (float)(int)((ulonglong)uVar179 >> 0x20);
          TransformEx::TransformEx_Align((Quaternion *)&stack0xffffff44,(Transform *)pOVar20,normAlignVector_00,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_03.NoVolumeSize.x = fVar9;
          queryConfig_03.ObjectTypes = (int32_t)fVar5;
          queryConfig_03.NoVolumeSize.y = (float)uVar67;
          queryConfig_03.NoVolumeSize.z = in_stack_110;
          pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0x00000050,root,queryConfig_03,(MethodInfo *)0x0);
          in_stack_38 = (pOVar25->_center).y;
          in_stack_40 = (pOVar25->_center).z;
          in_stack_41 = (pOVar25->_rotation).x;
          in_stack_98 = (pOVar25->_rotation).y;
          pLVar33 = (List_1_UnityEngine_Vector3_ *)(pOVar25->_rotation).w;
          if (pOVar20 == (ObjectSurfaceSnap_SnapResult *)0x0) goto code_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffff34,(Transform *)pOVar20,(MethodInfo *)0x0);
          quat.y = in_stack_30;
          quat.x = in_stack_119;
          quat.z = (float)in_stack_28;
          quat.w = in_stack_31;
          QuaternionEx::QuaternionEx_RotatePoints(quat,pLVar33,*pVVar15,(MethodInfo *)0x0);
          pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffff64,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition((Plane *)&stack0xffffffb4,*pVVar15,*(Vector3 *)((int)in_stack_31 + 0xc),(MethodInfo *)0x0);
          obb_00._size.y = snapConfig.OffsetFromSurface;
          obb_00._size.x = (float)snapConfig.SurfaceType;
          obb_00._size.z = snapConfig.SurfaceHitPoint.x;
          obb_00._center.x = snapConfig.SurfaceHitPoint.y;
          obb_00._center.y = in_stack_54;
          obb_00._center.z = in_stack_46;
          obb_00._rotation.x = in_stack_47;
          obb_00._rotation.y = in_stack_64;
          obb_00._rotation.z = (float)__return_storage_ptr__;
          obb_00._rotation.w = (float)root;
          obb_00._isValid = pOVar25->_isValid;
          obb_00._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
          surfacePlane_00.m_Normal.y = (float)in_stack_36;
          surfacePlane_00.m_Normal.x = in_stack_35;
          surfacePlane_00.m_Normal.z = in_stack_109;
          surfacePlane_00.m_Distance = in_stack_125;
          pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffbc,obb_00,surfacePlane_00,0.1,(MethodInfo *)0x0);
          uVar180 = pVVar15->x;
          uVar181 = pVVar15->y;
          fVar8 = pVVar15->z;
          in_stack_39 = (Transform *)uVar181;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0x0000007c,(Transform *)pOVar20,(MethodInfo *)0x0);
          uVar182 = pVVar15->x;
          uVar183 = pVVar15->y;
          snapConfig.OffsetFromSurface = pVVar15->z;
          value_13.y = in_stack_124 + (float)uVar183;
          value_13.x = in_stack_125 + (float)uVar182;
          value_13.z = (float)in_stack_26 + snapConfig.OffsetFromSurface;
          snapConfig.AlignmentAxis = uVar182;
          snapConfig.SurfaceType = uVar183;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position((Transform *)pOVar20,value_13,(MethodInfo *)0x0);
          offset_01.y = in_stack_99;
          offset_01.x = in_stack_86;
          offset_01.z = fVar8;
          Vector3Ex::Vector3Ex_OffsetPoints(in_stack_82,offset_01,(MethodInfo *)0x0);
          pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0x000000b0,(MethodInfo *)0x0);
          uVar184._0_4_ = pVVar15->x;
          uVar184._4_4_ = pVVar15->y;
          snapConfig.OffsetFromSurface = -pVVar15->z;
          embedDirection.z = snapConfig.OffsetFromSurface;
          embedDirection.x = (float)(int)(uVar184 ^ 0x8000000080000000);
          embedDirection.y = (float)(int)((uVar184 ^ 0x8000000080000000) >> 0x20);
          snapConfig.AlignmentAxis = (undefined4)uVar184;
          snapConfig.SurfaceType = uVar184._4_4_;
          pVVar15 = ObjectSurfaceSnap_CalculateEmbedVector((Vector3 *)&stack0x000000b8,in_stack_82,snapConfig.SurfaceObject,embedDirection,uVar184._4_4_,(MethodInfo *)0x0);
          __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)0x0;
          uVar185 = pVVar15->x;
          uVar186 = pVVar15->y;
          snapConfig.SurfaceHitPlane.m_Normal.y = pVVar15->z;
          snapConfig.SurfaceHitNormal.z = (float)uVar185;
          snapConfig.SurfaceHitPlane.m_Normal.x = (float)uVar186;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0x000000d8,(Transform *)pOVar20,(MethodInfo *)0x0);
          uVar187 = pVVar15->x;
          uVar188 = pVVar15->y;
          in_stack_70 = pVVar15->z;
          snapConfig.SurfaceHitPoint.z = (float)uVar187 + snapConfig.OffsetFromSurface * (float)uVar180 + snapConfig.SurfaceHitPlane.m_Normal.z;
          snapConfig.SurfaceHitNormal.x = (float)uVar188 + snapConfig.OffsetFromSurface * (float)in_stack_39 + snapConfig.SurfaceHitPlane.m_Distance;
          snapConfig.SurfaceHitNormal.y = in_stack_70 + snapConfig.OffsetFromSurface * in_stack_38 + (float)snapConfig.SurfaceObject;
          snapConfig.SurfaceHitNormal.z = 0.0;
          snapConfig.SurfaceHitPoint.x = (float)&UNK_?;
          value_05.y = snapConfig.SurfaceHitNormal.x;
          value_05.x = snapConfig.SurfaceHitPoint.z;
          value_05.z = snapConfig.SurfaceHitNormal.y;
          snapConfig.SurfaceHitPoint.y = (float)pOVar20;
          snapConfig.SurfaceObject = (GameObject *)snapConfig.SurfaceHitNormal.y;
          in_stack_86 = (float)uVar187;
          in_stack_99 = (float)uVar188;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position((Transform *)pOVar20,value_05,(MethodInfo *)0x0);
          snapConfig.SurfaceHitPlane.m_Distance = *(float *)((int)in_stack_69 + 0x14);
          snapConfig.SurfaceHitPlane.m_Normal.y = (float)*(undefined8 *)((int)in_stack_69 + 0xc);
          snapConfig.SurfaceHitPlane.m_Normal.z = (float)((ulonglong)*(undefined8 *)((int)in_stack_69 + 0xc) >> 0x20);
          in_stack_111 = in_stack_69;
          in_stack_102 = in_stack_189;
          in_stack_103 = in_stack_190;
code_?:
          fStack88 = 0.0;
          pTStack53 = (Transform *)0x0;
          fStack164 = 0.0;
          in_stack_90 = (undefined *)0x0;
          snapConfig.SurfaceObject = (GameObject *)0x0;
          snapConfig.SurfaceHitNormal.x = (float)&stack0x00000098;
          snapConfig.SurfaceHitPoint.z = (float)&UNK_?;
          inNormal.y = in_stack_103;
          inNormal.x = in_stack_102;
          inNormal.z = in_stack_71;
          inPoint.y = snapConfig.SurfaceHitPlane.m_Normal.z;
          inPoint.x = snapConfig.SurfaceHitPlane.m_Normal.y;
          inPoint.z = snapConfig.SurfaceHitPlane.m_Distance;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition((Plane *)snapConfig.SurfaceHitNormal.x,inNormal,inPoint,(MethodInfo *)0x0);
          fVar8 = *(float *)((int)in_stack_111 + 0x14);
          in_stack_116 = 1.4013e-45;
          in_stack_191 = in_stack_64;
          in_stack_192 = in_stack_100;
          in_stack_193 = in_stack_101;
          in_stack_194 = in_stack_56;
          uVar195 = *(undefined8 *)((int)in_stack_111 + 0xc);
          goto code_?;
        }
      }
    }
code_?:
    if (snapConfig.SurfaceType != 4) goto code_?;
  }
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar25 = (OBB *)&stack0x00000124;
  queryConfig_07.NoVolumeSize.x = fStack88;
  queryConfig_07.ObjectTypes = (int32_t)in_stack_89;
  queryConfig_07.NoVolumeSize.y = (float)pTStack53;
  queryConfig_07.NoVolumeSize.z = (float)in_stack_90;
  pGVar196 = root;
  fVar3 = in_stack_89;
  fVar5 = fStack88;
  pOVar197 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB(pOVar25,root,queryConfig_07,(MethodInfo *)0x0);
  in_stack_50 = (Transform *)(pOVar197->_size).x;
  in_stack_89 = (pOVar197->_size).y;
  pfVar198 = &(pOVar197->_size).z;
  in_stack_103 = *pfVar198;
  in_stack_104 = (pOVar197->_center).x;
  _fStack00000098 = *(undefined8 *)pfVar198;
  in_stack_39 = (Transform *)(pOVar197->_center).y;
  in_stack_38 = (pOVar197->_center).z;
  in_stack_40 = (pOVar197->_rotation).x;
  in_stack_41 = (pOVar197->_rotation).y;
  fStack44 = (pOVar197->_rotation).z;
  fStack45 = (pOVar197->_rotation).w;
  snapConfig.SurfaceHitNormal.y = *(float *)&pOVar197->_isValid;
  if (SUB41(snapConfig.SurfaceHitNormal.y,0) != '\0') {
    in_stack_56 = in_stack_50;
    in_stack_102 = in_stack_89;
    in_stack_76 = in_stack_39;
    in_stack_77 = in_stack_38;
    in_stack_199 = in_stack_40;
    in_stack_200 = in_stack_41;
    in_stack_43 = snapConfig.SurfaceHitNormal.y;
    if (root != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(root,(MethodInfo *)0x0);
      fVar6 = snapConfig.SurfaceHitPlane.m_Normal.x;
      if (snapConfig.AlignAxis != 0) {
        in_stack_26 = &UNK_?;
        normAlignVector_03.y = snapConfig.SurfaceHitNormal.y;
        normAlignVector_03.x = snapConfig.SurfaceHitNormal.x;
        normAlignVector_03.z = snapConfig.SurfaceHitNormal.z;
        TransformEx::TransformEx_Align((Quaternion *)&stack0x00000058,pTVar4,normAlignVector_03,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          snapConfig.SurfaceHitPoint.y = (float)TypeInfo__RTG__ObjectBounds;
          snapConfig.SurfaceHitPoint.x = (float)&UNK_?;
          func_?();
        }
        snapConfig.SurfaceHitPoint.y = 0.0;
        snapConfig.AlignAxis = (bool)root;
        snapConfig._1_2_ = SUB42((uint)root >> 8,0);
        snapConfig._3_1_ = SUB41((uint)root >> 0x18,0);
        snapConfig.AlignmentAxis = (int32_t)in_stack_76;
        snapConfig.SurfaceType = (int32_t)in_stack_77;
        snapConfig.OffsetFromSurface = in_stack_199;
        snapConfig.SurfaceHitPoint.x = in_stack_200;
        __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)&UNK_?;
        queryConfig.NoVolumeSize.x = in_stack_77;
        queryConfig.ObjectTypes = (int32_t)in_stack_76;
        queryConfig.NoVolumeSize.y = in_stack_199;
        queryConfig.NoVolumeSize.z = in_stack_200;
        pOVar197 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0x00000164,root,queryConfig,(MethodInfo *)0x0);
        in_stack_104 = (pOVar197->_size).x;
        in_stack_76 = (Transform *)(pOVar197->_size).y;
        pfVar198 = &(pOVar197->_size).z;
        in_stack_77 = *pfVar198;
        in_stack_199 = (pOVar197->_center).x;
        _fStack0000010c = *(undefined8 *)pfVar198;
        in_stack_50 = (Transform *)(pOVar197->_center).y;
        in_stack_89 = (pOVar197->_center).z;
        pQVar201 = &pOVar197->_rotation;
        in_stack_83 = pQVar201->x;
        in_stack_85 = (pOVar197->_rotation).y;
        fStack88 = pQVar201->x;
        pTStack53 = (Transform *)pQVar201->y;
        in_stack_202._0_4_ = (pOVar197->_rotation).z;
        in_stack_202._4_4_ = (pOVar197->_rotation).w;
        fVar6 = *(float *)&pOVar197->_isValid;
        in_stack_193 = in_stack_104;
        in_stack_194 = in_stack_76;
        in_stack_74 = in_stack_50;
        in_stack_75 = in_stack_89;
      }
      if (pTVar4 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffdc,pTVar4,(MethodInfo *)0x0);
        obb._size.y = (float)pGVar196;
        obb._size.x = (float)pOVar25;
        obb._size.z = fVar3;
        obb._center.x = fVar5;
        obb._center.y = in_stack_119;
        obb._center.z = in_stack_30;
        obb._rotation.x = (float)in_stack_28;
        obb._rotation.y = in_stack_31;
        obb._rotation.z = snapConfig.SurfaceHitNormal.x;
        obb._rotation.w = snapConfig.SurfaceHitNormal.y;
        obb._40_4_ = fVar6;
        surfacePlane.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        surfacePlane.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        surfacePlane.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        surfacePlane.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
        pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffe8,obb,surfacePlane,snapConfig.OffsetFromSurface,(MethodInfo *)0x0);
        uVar203 = pVVar15->x;
        uVar204 = pVVar15->y;
        value_12.y = (float)uVar204 + fVar9;
        value_12.x = (float)uVar203 + fVar8;
        value_12.z = pVVar15->z + fVar10;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar4,value_12,(MethodInfo *)0x0);
        fVar9 = snapConfig.SurfaceHitPlane.m_Distance;
        snapConfig.SurfaceHitNormal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        snapConfig.SurfaceHitNormal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        fVar8 = snapConfig.SurfaceHitPlane.m_Normal.x;
        snapConfig.SurfaceHitPoint.z = 1.4013e-45;
        snapConfig.SurfaceHitPlane.m_Normal.y = 0.0;
        snapConfig.SurfaceHitPlane.m_Normal.z = 0.0;
        snapConfig.SurfaceHitPlane.m_Distance = 0.0;
        snapConfig.SurfaceHitNormal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        snapConfig.SurfaceHitPlane.m_Normal.x = fVar9;
        plane_01.m_Normal.y = snapConfig.SurfaceHitNormal.y;
        plane_01.m_Normal.x = fVar8;
        plane_01.m_Normal.z = snapConfig.SurfaceHitNormal.z;
        plane_01.m_Distance = fVar9;
        pt_00.y = in_stack_84;
        pt_00.x = (float)in_stack_82;
        pt_00.z = (float)in_stack_26;
        pVVar15 = PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&snapConfig.SurfaceObject,plane_01,pt_00,(MethodInfo *)0x0);
        uVar195._0_4_ = pVVar15->x;
        uVar195._4_4_ = pVVar15->y;
        fVar8 = pVVar15->z;
code_?:
        *(float *)__return_storage_ptr__ = in_stack_116;
        (__return_storage_ptr__->SittingPlane).m_Normal.x = in_stack_191;
        (__return_storage_ptr__->SittingPlane).m_Normal.y = in_stack_192;
        (__return_storage_ptr__->SittingPlane).m_Normal.z = in_stack_193;
        fStack72 = (float)uVar195;
        fStack73 = (float)((ulonglong)uVar195 >> 0x20);
        (__return_storage_ptr__->SittingPlane).m_Distance = (float)in_stack_194;
        (__return_storage_ptr__->SittingPoint).x = fStack72;
        (__return_storage_ptr__->SittingPoint).y = fStack73;
        (__return_storage_ptr__->SittingPoint).z = fVar8;
        return __return_storage_ptr__;
      }
    }
code_?:
    func_?();
    pcVar205 = (code *)swi(3);
    pOVar20 = (ObjectSurfaceSnap_SnapResult *)(*pcVar205)();
    return pOVar20;
  }
code_?:
  *(undefined4 *)__return_storage_ptr__ = 0;
  (__return_storage_ptr__->SittingPlane).m_Normal.x = 0.0;
  (__return_storage_ptr__->SittingPlane).m_Normal.y = 0.0;
  (__return_storage_ptr__->SittingPlane).m_Normal.z = 0.0;
  (__return_storage_ptr__->SittingPlane).m_Distance = 0.0;
  (__return_storage_ptr__->SittingPoint).x = 0.0;
  (__return_storage_ptr__->SittingPoint).y = 0.0;
  (__return_storage_ptr__->SittingPoint).z = 0.0;
  return __return_storage_ptr__;
}

