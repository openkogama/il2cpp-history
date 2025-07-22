
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__RTG__ObjectVertexCollect);
    cRam_? = '\x01';
  }
  puVar1 = (undefined *)0x0;
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  puVar5 = (undefined *)0x0;
  pVVar6 = (Vector3 *)0x0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  bVar9 = GameObjectEx::GameObjectEx_HierarchyHasMesh(root,(MethodInfo *)0x0);
  bVar10 = GameObjectEx::GameObjectEx_HierarchyHasSprite(root,(MethodInfo *)0x0);
  PVar11 = snapConfig.SurfaceHitPlane;
  if ((bVar9 == 0) && (bVar10 == 0)) {
    if ((root == (GameObject *)0x0) || (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(root,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0)) goto code_?;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
    pVVar6 = PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&stack0xffffffe0,PVar11,*pVVar6,(MethodInfo *)0x0);
    uVar13 = pVVar6->x;
    uVar14 = pVVar6->y;
    VVar15.y = (float)uVar14 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
    VVar15.x = (float)uVar13 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
    VVar15.z = pVVar6->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,VVar15,(MethodInfo *)0x0);
    pVVar6 = (Vector3 *)0x1;
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
    fVar2 = snapConfig.SurfaceHitPlane.m_Normal.x;
code_?:
    uVar17._0_4_ = pVVar16->x;
    uVar17._4_4_ = pVVar16->y;
    fVar3 = pVVar16->z;
code_?:
    *(Vector3 **)__return_storage_ptr__ = pVVar6;
    (__return_storage_ptr__->SittingPlane).m_Normal.x = fVar2;
    (__return_storage_ptr__->SittingPlane).m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
    (__return_storage_ptr__->SittingPlane).m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
    (__return_storage_ptr__->SittingPlane).m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
    (__return_storage_ptr__->SittingPoint).x = (float)uVar17;
    (__return_storage_ptr__->SittingPoint).y = (float)((ulonglong)uVar17 >> 0x20);
    (__return_storage_ptr__->SittingPoint).z = fVar3;
    return __return_storage_ptr__;
  }
  cVar18 = snapConfig.SurfaceType == 3;
  fVar19 = 0.0;
  fVar20 = 0.0;
  pVVar16 = (Vector3 *)0x0;
  fVar21 = 7.00649e-45;
  cVar22 = snapConfig.SurfaceType == 0 || snapConfig.SurfaceType == 2;
  cVar23 = snapConfig.SurfaceType == 0;
  pOVar24 = ObjectSurfaceSnap_CreateSurfaceRaycaster(snapConfig.SurfaceType,snapConfig.SurfaceObject,1,(MethodInfo *)0x0);
  VVar15 = snapConfig.SurfaceHitNormal;
  if (snapConfig.SurfaceType != 4) {
    if (root == (GameObject *)0x0) goto code_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(root,(MethodInfo *)0x0);
    if (snapConfig.AlignAxis == 0) {
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_02.NoVolumeSize.x = fVar19;
      queryConfig_02.ObjectTypes = (int32_t)fVar21;
      queryConfig_02.NoVolumeSize.y = fVar20;
      queryConfig_02.NoVolumeSize.z = (float)pVVar16;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xfffffe80,root,queryConfig_02,(MethodInfo *)0x0);
      fVar3 = (pOVar25->_size).x;
      fVar4 = (pOVar25->_size).y;
      fVar26 = (pOVar25->_size).z;
      fVar27 = (pOVar25->_center).x;
      fVar28 = (pOVar25->_center).y;
      fVar29 = (pOVar25->_center).z;
      fVar30 = (pOVar25->_rotation).x;
      fVar31 = (pOVar25->_rotation).y;
      fVar32 = (pOVar25->_rotation).z;
      fVar33 = (pOVar25->_rotation).w;
      uVar34 = *(undefined4 *)&pOVar25->_isValid;
      if ((char)uVar34 == '\0') goto code_?;
      fVar2 = fVar30;
      fVar35 = fVar31;
      if (cVar22 == '\0') {
        if (cVar18 != '\0') {
          if (snapConfig.SurfaceObject != (GameObject *)0x0) {
            puVar1 = &UNK_?;
            fVar21 = fVar30;
            pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(snapConfig.SurfaceObject,(MethodInfo *)0x0);
            if (pTVar36 != (Transform *)0x0) {
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffe0,pTVar36,(MethodInfo *)0x0);
              fVar37 = pVVar16->x;
              fVar38 = pVVar16->y;
              fVar19 = pVVar16->z;
              if (pTVar12 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
                puVar39 = &stack0xffffffb4;
                puVar40 = &stack0xffffffe0;
                puVar41 = (undefined8 *)func_?();
                fVar20 = *(float *)(puVar41 + 1);
                fVar42 = (float)*puVar41;
                fVar43 = (float)((ulonglong)*puVar41 >> 0x20);
                fVar2 = fVar20;
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale((Vector3 *)&stack0xffffffe0,pTVar36,(MethodInfo *)0x0);
                uVar44 = pVVar16->x;
                fVar45 = pVVar16->y;
                puVar46 = &UNK_?;
                fVar35 = Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar16,(MethodInfo *)0x0);
                fVar35 = fVar35 * 0.5;
                fVar47 = -fVar42;
                fVar48 = -fVar43;
                fVar33 = -fVar20;
                if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                boxCenter_02.y = (float)puVar39;
                boxCenter_02.x = (float)puVar40;
                boxCenter_02.z = fVar29;
                boxSize_02.y = fVar4;
                boxSize_02.x = fVar3;
                boxSize_02.z = fVar26;
                boxRotation_02.y = (float)puVar46;
                boxRotation_02.x = fVar21;
                boxRotation_02.z = (float)uVar44;
                boxRotation_02.w = fVar45;
                direction_02.y = fVar48;
                direction_02.x = fVar47;
                direction_02.z = fVar33;
                BVar49 = BoxMath::BoxMath_GetMostAlignedFace(boxCenter_02,boxSize_02,boxRotation_02,direction_02,(MethodInfo *)0x0);
                if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar49,0.001,0.01,(MethodInfo *)0x0);
                pTVar12 = (Transform *)(fVar37 + fVar42 * fVar35);
                puVar46 = (undefined *)(fVar19 + fVar20 * fVar35);
                inNormal_01.y = (float)BVar49;
                inNormal_01.x = (float)root;
                inNormal_01.z = fVar2;
                inPoint_01.y = fVar38 + fVar43 * fVar35;
                inPoint_01.x = (float)pTVar12;
                inPoint_01.z = (float)puVar46;
                UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition((Plane *)&stack0xffffff90,inNormal_01,inPoint_01,(MethodInfo *)0x0);
                pTVar36 = (Transform *)&UNK_?;
                obb_04._size.y = fVar4;
                obb_04._size.x = fVar3;
                obb_04._size.z = fVar26;
                obb_04._center.x = fVar27;
                obb_04._center.y = fVar28;
                obb_04._center.z = fVar29;
                obb_04._rotation.x = fVar30;
                obb_04._rotation.y = fVar31;
                obb_04._rotation.z = fVar32;
                obb_04._rotation.w = (float)puVar1;
                obb_04._40_4_ = fVar2;
                surfacePlane_00.m_Normal.y = (float)pVVar6;
                surfacePlane_00.m_Normal.x = (float)puVar5;
                surfacePlane_00.m_Normal.z = fVar7;
                surfacePlane_00.m_Distance = fVar8;
                pVVar16 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffd0,obb_04,surfacePlane_00,0.0,(MethodInfo *)0x0);
                fVar48 = pVVar16->x;
                fVar47 = pVVar16->y;
                fVar3 = pVVar16->z;
                fVar4 = fVar48;
                fVar7 = fVar47;
                fVar8 = fVar3;
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xfffffef0,pTVar36,(MethodInfo *)0x0);
                uVar50 = pVVar16->x;
                uVar51 = pVVar16->y;
                value_12.y = fVar7 + (float)uVar51;
                value_12.x = fVar4 + (float)uVar50;
                value_12.z = fVar8 + pVVar16->z;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar36,value_12,(MethodInfo *)0x0);
                offset.y = fVar47;
                offset.x = fVar48;
                offset.z = fVar3;
                Vector3Ex::Vector3Ex_OffsetPoints((List_1_UnityEngine_Vector3_ *)__return_storage_ptr__,offset,(MethodInfo *)0x0);
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd0,pTVar36,(MethodInfo *)0x0);
                uVar52 = pVVar16->x;
                uVar53 = pVVar16->y;
                value_02.y = (float)uVar53 + snapConfig.OffsetFromSurface * fVar43;
                value_02.x = (float)uVar52 + fVar42 * snapConfig.OffsetFromSurface;
                value_02.z = pVVar16->z + snapConfig.OffsetFromSurface * fVar20;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar36,value_02,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
          goto code_?;
        }
        if (snapConfig.SurfaceType != 1) goto code_?;
      }
      else {
        TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
      }
      fVar7 = fVar29;
      func_?();
      if (pOVar24 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
      uVar54 = 4;
      puVar1 = &UNK_?;
      iVar55 = func_?();
      if (iVar55 != 0) {
        fVar7 = (((Plane *)(iVar55 + 0x28))->m_Normal).x;
        uVar56 = *(undefined4 *)(iVar55 + 0x2c);
        fVar8 = *(float *)(iVar55 + 0x30);
        fVar21 = *(float *)(iVar55 + 0x34);
        fVar20 = 0.0;
        fVar19 = 0.0;
        obb_00._size.y = fVar4;
        obb_00._size.x = fVar3;
        obb_00._size.z = fVar26;
        obb_00._center.x = fVar27;
        obb_00._center.y = fVar28;
        obb_00._center.z = fVar29;
        obb_00._rotation.x = fVar30;
        obb_00._rotation.y = fVar31;
        obb_00._rotation.z = (float)puVar1;
        obb_00._rotation.w = (float)uVar54;
        obb_00._40_4_ = uVar34;
        pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffe0,obb_00,*(Plane *)(iVar55 + 0x28),0.0,(MethodInfo *)0x0);
        fVar42 = pVVar6->x;
        fVar43 = pVVar6->y;
        fVar3 = pVVar6->z;
        if (pTVar12 == (Transform *)0x0) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffb0,pTVar12,(MethodInfo *)0x0);
        uVar57 = pVVar6->x;
        uVar58 = pVVar6->y;
        value_04.y = fVar43 + (float)uVar58;
        value_04.x = fVar42 + (float)uVar57;
        value_04.z = fVar3 + pVVar6->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_04,(MethodInfo *)0x0);
        if (cVar22 != '\0') {
          fVar42 = fVar42 + fVar21;
          fVar43 = fVar43 + fVar19;
          fVar3 = fVar3 + fVar20;
          fVar19 = -(float)*(undefined8 *)(iVar55 + 0x1c);
          fVar21 = -(float)((ulonglong)*(undefined8 *)(iVar55 + 0x1c) >> 0x20);
          fVar4 = -*(float *)(iVar55 + 0x24);
          if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          boxCenter_03.y = fVar43;
          boxCenter_03.x = fVar42;
          boxCenter_03.z = fVar3;
          boxSize_03.y = (float)uVar56;
          boxSize_03.x = fVar7;
          boxSize_03.z = fVar8;
          boxRotation_03.y = fVar35;
          boxRotation_03.x = fVar2;
          boxRotation_03.z = fVar32;
          boxRotation_03.w = fVar33;
          direction_03.y = fVar21;
          direction_03.x = fVar19;
          direction_03.z = fVar4;
          BVar49 = BoxMath::BoxMath_GetMostAlignedFace(boxCenter_03,boxSize_03,boxRotation_03,direction_03,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pLVar59 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar49,0.001,0.01,(MethodInfo *)0x0);
          pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
          uVar60._0_4_ = pVVar6->x;
          uVar60._4_4_ = pVVar6->y;
          embedDirection.z = -pVVar6->z;
          embedDirection.x = (float)(int)(uVar60 ^ 0x8000000080000000);
          embedDirection.y = (float)(int)((uVar60 ^ 0x8000000080000000) >> 0x20);
          pVVar6 = ObjectSurfaceSnap_CalculateEmbedVector((Vector3 *)&stack0xffffffd0,pLVar59,snapConfig.SurfaceObject,embedDirection,snapConfig.SurfaceType,(MethodInfo *)0x0);
          fVar61 = pVVar6->x;
          fVar62 = pVVar6->y;
          fVar2 = pVVar6->z;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffb0,pTVar12,(MethodInfo *)0x0);
          uVar63 = pVVar6->x;
          uVar64 = pVVar6->y;
          value_05.y = fVar62 + (float)uVar64;
          value_05.x = fVar61 + (float)uVar63;
          value_05.z = fVar2 + pVVar6->z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_05,(MethodInfo *)0x0);
        }
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
        uVar65 = pVVar6->x;
        uVar66 = pVVar6->y;
        value_08.y = (float)uVar66 + snapConfig.OffsetFromSurface * (float)((ulonglong)*(undefined8 *)(iVar55 + 0x1c) >> 0x20);
        value_08.x = (float)uVar65 + snapConfig.OffsetFromSurface * (float)*(undefined8 *)(iVar55 + 0x1c);
        value_08.z = pVVar6->z + snapConfig.OffsetFromSurface * *(float *)(iVar55 + 0x24);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_08,(MethodInfo *)0x0);
        fVar3 = *(float *)(iVar55 + 0x14);
        pVVar6 = (Vector3 *)0x1;
        fVar2 = *(float *)(iVar55 + 0x28);
        snapConfig.SurfaceHitPlane.m_Normal.y = *(float *)(iVar55 + 0x2c);
        snapConfig.SurfaceHitPlane.m_Normal.z = *(float *)(iVar55 + 0x30);
        snapConfig.SurfaceHitPlane.m_Distance = *(float *)(iVar55 + 0x34);
        uVar17 = *(undefined8 *)(iVar55 + 0xc);
        goto code_?;
      }
      if ((cVar18 == '\0') && (snapConfig.SurfaceType == 1)) {
        obb._size.y = fVar4;
        obb._size.x = fVar3;
        obb._size.z = fVar26;
        obb._center.x = fVar27;
        obb._center.y = fVar28;
        obb._center.z = fVar29;
        obb._rotation.x = fVar30;
        obb._rotation.y = fVar31;
        obb._rotation.z = (float)puVar1;
        obb._rotation.w = (float)uVar54;
        obb._40_4_ = uVar34;
        fVar3 = snapConfig.SurfaceHitPlane.m_Distance;
        pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffd0,obb,PVar11,0.0,(MethodInfo *)0x0);
        fVar67 = pVVar6->x;
        fVar68 = pVVar6->y;
        fVar2 = pVVar6->z;
        if (pTVar12 == (Transform *)0x0) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffb0,pTVar12,(MethodInfo *)0x0);
        uVar69 = pVVar6->x;
        uVar70 = pVVar6->y;
        value_03.y = fVar68 + (float)uVar70;
        value_03.x = fVar67 + (float)uVar69;
        value_03.z = fVar2 + pVVar6->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_03,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd0,pTVar12,(MethodInfo *)0x0);
        uVar71 = pVVar6->x;
        uVar72 = pVVar6->y;
        value_07.y = (float)uVar72 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
        value_07.x = (float)uVar71 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
        value_07.z = pVVar6->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_07,(MethodInfo *)0x0);
        pVVar6 = (Vector3 *)&stack0xffffffe0;
        pt_01.y = (float)iVar55;
        pt_01.x = fVar3;
        pt_01.z = fVar7;
        pVVar16 = PlaneEx::PlaneEx_ProjectPoint(pVVar6,PVar11,pt_01,(MethodInfo *)0x0);
        fVar2 = snapConfig.SurfaceHitPlane.m_Normal.x;
        goto code_?;
      }
    }
    else if (cVar22 == '\0') {
      if (cVar18 != '\0') {
        if ((snapConfig.SurfaceObject != (GameObject *)0x0) && (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(snapConfig.SurfaceObject,(MethodInfo *)0x0), pTVar36 != (Transform *)0x0)) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffe0,pTVar36,(MethodInfo *)0x0);
          fVar7 = pVVar6->x;
          fVar26 = pVVar6->y;
          fVar8 = pVVar6->z;
          if (pTVar12 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffb0,pTVar12,(MethodInfo *)0x0);
            puVar41 = (undefined8 *)func_?();
            fVar27 = *(float *)(puVar41 + 1);
            fVar35 = (float)*puVar41;
            fVar32 = (float)((ulonglong)*puVar41 >> 0x20);
            fVar29 = fVar35;
            fVar30 = fVar32;
            fVar31 = fVar27;
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale((Vector3 *)&stack0xffffffe0,pTVar36,(MethodInfo *)0x0);
            fVar28 = Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar6,(MethodInfo *)0x0);
            fVar28 = fVar28 * 0.5;
            normAlignVector.y = fVar32;
            normAlignVector.x = fVar35;
            normAlignVector.z = fVar31;
            TransformEx::TransformEx_Align((Quaternion *)&stack0xffffff90,pTVar12,normAlignVector,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
            if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            queryConfig_01.NoVolumeSize.x = fVar19;
            queryConfig_01.ObjectTypes = (int32_t)fVar21;
            queryConfig_01.NoVolumeSize.y = fVar20;
            queryConfig_01.NoVolumeSize.z = (float)pVVar16;
            pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xfffffe80,root,queryConfig_01,(MethodInfo *)0x0);
            fVar37 = (pOVar25->_center).y;
            fVar38 = (pOVar25->_center).z;
            fVar45 = (pOVar25->_rotation).x;
            fVar48 = (pOVar25->_rotation).y;
            fVar19 = (pOVar25->_size).x;
            fVar20 = (pOVar25->_size).y;
            fVar35 = (pOVar25->_size).z;
            fVar33 = (pOVar25->_center).x;
            uVar54 = (pOVar25->_rotation).z;
            fVar21 = (pOVar25->_rotation).w;
            uVar34 = *(undefined4 *)&pOVar25->_isValid;
            if ((char)uVar34 != '\0') {
              fVar67 = -fVar29;
              fVar62 = -fVar30;
              fVar61 = -fVar27;
              fVar47 = fVar37;
              uVar56 = uVar54;
              fVar42 = fVar21;
              fVar43 = fVar33;
              if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              fVar68 = 0.0;
              puVar5 = &UNK_?;
              boxCenter_01.y._0_1_ = SUB41(fVar47,0);
              boxCenter_01.x = fVar33;
              boxCenter_01.y._1_2_ = (short)((uint)fVar47 >> 8);
              boxCenter_01.y._3_1_ = (char)((uint)fVar47 >> 0x18);
              boxCenter_01.z = fVar38;
              boxSize_01.y = fVar20;
              boxSize_01.x = fVar19;
              boxSize_01.z = fVar35;
              boxRotation_01.y = fVar48;
              boxRotation_01.x = fVar45;
              boxRotation_01.z = (float)uVar54;
              boxRotation_01.w = fVar21;
              direction_01.y = fVar62;
              direction_01.x = fVar67;
              direction_01.z = fVar61;
              BVar49 = BoxMath::BoxMath_GetMostAlignedFace(boxCenter_01,boxSize_01,boxRotation_01,direction_01,(MethodInfo *)0x0);
              if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pLVar59 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar49,0.001,0.01,(MethodInfo *)0x0);
              fVar26 = fVar26 + fVar30 * fVar28;
              inNormal_00.y = fVar32;
              inNormal_00.x = fVar68;
              inNormal_00.z = fVar31;
              inPoint_00.y = fVar26;
              inPoint_00.x = fVar7 + fVar29 * fVar28;
              inPoint_00.z = fVar8 + fVar27 * fVar28;
              UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition((Plane *)&stack0xffffff50,inNormal_00,inPoint_00,(MethodInfo *)0x0);
              obb_02._size.y = fVar20;
              obb_02._size.x = fVar19;
              obb_02._size.z = fVar35;
              obb_02._center.x = fVar43;
              obb_02._center.y = fVar37;
              obb_02._center.z = fVar38;
              obb_02._rotation.x = (float)puVar5;
              obb_02._rotation.y = fVar33;
              obb_02._rotation.z = (float)uVar56;
              obb_02._rotation.w = fVar42;
              obb_02._40_4_ = uVar34;
              surfacePlane.m_Normal.y = fVar2;
              surfacePlane.m_Normal.x = (float)puVar1;
              surfacePlane.m_Normal.z = fVar3;
              surfacePlane.m_Distance = fVar4;
              pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffd0,obb_02,surfacePlane,0.0,(MethodInfo *)0x0);
              pTVar36 = (Transform *)0x0;
              fVar8 = pVVar6->x;
              fVar19 = pVVar6->y;
              fVar3 = pVVar6->z;
              pVVar6 = (Vector3 *)&stack0xfffffef0;
              puVar5 = &UNK_?;
              fVar4 = fVar8;
              fVar7 = fVar19;
              fVar21 = fVar3;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(pVVar6,(Transform *)0x0,(MethodInfo *)0x0);
              uVar73 = pVVar16->x;
              uVar74 = pVVar16->y;
              fVar21 = fVar21 + pVVar16->z;
              value_09.y = fVar7 + (float)uVar74;
              value_09.x = fVar4 + (float)uVar73;
              value_09.z = fVar21;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar36,value_09,(MethodInfo *)0x0);
              puVar75 = &UNK_?;
              offset_00.y = fVar19;
              offset_00.x = fVar8;
              offset_00.z = fVar3;
              Vector3Ex::Vector3Ex_OffsetPoints(pLVar59,offset_00,(MethodInfo *)0x0);
              puVar46 = &UNK_?;
              pTVar12 = pTVar36;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd0,pTVar36,(MethodInfo *)0x0);
              uVar76 = pVVar16->x;
              uVar77 = pVVar16->y;
              value_11.y = (float)uVar77 + (float)puVar75 * snapConfig.OffsetFromSurface;
              value_11.x = (float)uVar76 + fVar21 * snapConfig.OffsetFromSurface;
              value_11.z = pVVar16->z + (float)pLVar59 * snapConfig.OffsetFromSurface;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar36,value_11,(MethodInfo *)0x0);
code_?:
              *(undefined4 *)__return_storage_ptr__ = 1;
              (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)puVar1;
              (__return_storage_ptr__->SittingPlane).m_Normal.y = fVar2;
              (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)puVar5;
              (__return_storage_ptr__->SittingPlane).m_Distance = (float)pVVar6;
              (__return_storage_ptr__->SittingPoint).x = (float)pTVar12;
              (__return_storage_ptr__->SittingPoint).y = fVar26;
              (__return_storage_ptr__->SittingPoint).z = (float)puVar46;
              return __return_storage_ptr__;
            }
            goto code_?;
          }
        }
        goto code_?;
      }
      TransformEx::TransformEx_Align((Quaternion *)&stack0xffffff90,pTVar12,VVar15,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig.NoVolumeSize.x = fVar19;
      queryConfig.ObjectTypes = (int32_t)fVar21;
      queryConfig.NoVolumeSize.y = fVar20;
      queryConfig.NoVolumeSize.z = (float)pVVar16;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xfffffe80,root,queryConfig,(MethodInfo *)0x0);
      fVar2 = (pOVar25->_size).x;
      fVar3 = (pOVar25->_size).y;
      fVar4 = (pOVar25->_size).z;
      fVar7 = (pOVar25->_center).x;
      fVar8 = (pOVar25->_center).y;
      fVar26 = (pOVar25->_center).z;
      fVar28 = (pOVar25->_rotation).x;
      fVar29 = (pOVar25->_rotation).y;
      uVar56 = (pOVar25->_rotation).z;
      fVar27 = (pOVar25->_rotation).w;
      if ((char)*(undefined4 *)&pOVar25->_isValid == '\0') goto code_?;
      fVar35 = -snapConfig.SurfaceHitNormal.x;
      fVar31 = -snapConfig.SurfaceHitNormal.y;
      fVar30 = -snapConfig.SurfaceHitNormal.z;
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter.y = fVar8;
      boxCenter.x = fVar7;
      boxCenter.z = fVar26;
      boxSize.y = fVar3;
      boxSize.x = fVar2;
      boxSize.z = fVar4;
      boxRotation.y = fVar29;
      boxRotation.x = fVar28;
      boxRotation.z = (float)uVar56;
      boxRotation.w = fVar27;
      direction.y = fVar31;
      direction.x = fVar35;
      direction.z = fVar30;
      BVar49 = BoxMath::BoxMath_GetMostAlignedFace(boxCenter,boxSize,boxRotation,direction,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar59 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar49,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar59 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar59->fields)._size != 0) {
        Vector3Ex::Vector3Ex_GetPointCloudCenter((Vector3 *)&stack0xffffffd0,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar59,(MethodInfo *)0x0);
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
        pAVar78 = ObjectBounds::ObjectBounds_CalcMeshModelAABB((AABB *)&stack0xffffff40,snapConfig.SurfaceObject,(MethodInfo *)0x0);
        if ((char)*(undefined4 *)&pAVar78->_isValid != '\0') {
          if ((snapConfig.SurfaceObject == (GameObject *)0x0) || (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(snapConfig.SurfaceObject,(MethodInfo *)0x0), pTVar36 == (Transform *)0x0)) goto code_?;
          pMVar79 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix((Matrix4x4 *)&stack0xfffffe70,pTVar36,(MethodInfo *)0x0);
          AABB::AABB_Transform((AABB *)&stack0xffffff80,*pMVar79,(MethodInfo *)0x0);
        }
        OBB::OBB_get_Extents((Vector3 *)&stack0xffffffd0,(OBB *)&stack0xfffffecc,(MethodInfo *)0x0);
        func_?();
        func_?();
        if (pOVar24 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
        puVar1 = (undefined *)func_?();
        if (puVar1 != (undefined *)0x0) {
          method_00 = *(MethodInfo **)(puVar1 + 0x24);
          pVVar6 = (Vector3 *)(puVar1 + 0x1c);
          fVar28 = pVVar6->x;
          fVar29 = pVVar6->y;
          TransformEx::TransformEx_Align((Quaternion *)&stack0xffffff90,pTVar12,*pVVar6,snapConfig.AlignmentAxis,method_00);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_07.NoVolumeSize.x = fVar19;
          queryConfig_07.ObjectTypes = (int32_t)fVar21;
          queryConfig_07.NoVolumeSize.y = fVar20;
          queryConfig_07.NoVolumeSize.z = (float)pVVar16;
          pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xfffffe80,root,queryConfig_07,(MethodInfo *)0x0);
          fVar8 = (pOVar25->_size).x;
          fVar7 = (pOVar25->_size).z;
          uVar80 = (pOVar25->_rotation).w;
          uVar81 = (pOVar25->_size).x;
          uVar82 = (pOVar25->_size).y;
          uVar83 = (pOVar25->_size).z;
          obb_06._size.z = (float)uVar83;
          obb_06._size.y = (float)uVar82;
          obb_06._size.x = (float)uVar81;
          uVar84 = (pOVar25->_center).x;
          uVar85 = (pOVar25->_center).y;
          uVar86 = (pOVar25->_center).z;
          obb_06._center.z = (float)uVar86;
          obb_06._center.y = (float)uVar85;
          obb_06._center.x = (float)uVar84;
          uVar87 = (pOVar25->_rotation).x;
          uVar88 = (pOVar25->_rotation).y;
          uVar89 = (pOVar25->_rotation).z;
          obb_06._rotation.z = (float)uVar89;
          obb_06._rotation.y = (float)uVar88;
          obb_06._rotation.x = (float)uVar87;
          pVVar16 = (Vector3 *)&stack0xffffffd0;
          obb_06._rotation.w = (float)uVar80;
          obb_06._isValid = pOVar25->_isValid;
          obb_06._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
          pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(pVVar16,obb_06,*(Plane *)(puVar1 + 0x28),0.0,(MethodInfo *)0x0);
          fVar20 = pVVar6->x;
          fVar30 = pVVar6->y;
          if (pTVar12 == (Transform *)0x0) goto code_?;
          puVar5 = &UNK_?;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xfffffef0,pTVar12,(MethodInfo *)0x0);
          uVar90 = pVVar6->x;
          uVar91 = pVVar6->y;
          value_14.y = fVar30 + (float)uVar91;
          value_14.x = fVar20 + (float)uVar90;
          value_14.z = (float)puVar5 + pVVar6->z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_14,(MethodInfo *)0x0);
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd0,pTVar12,(MethodInfo *)0x0);
          uVar92 = pVVar6->x;
          uVar93 = pVVar6->y;
          value_00.y = (float)uVar93 + fVar29 * snapConfig.OffsetFromSurface;
          value_00.x = (float)uVar92 + fVar28 * snapConfig.OffsetFromSurface;
          value_00.z = pVVar6->z + (float)method_00 * snapConfig.OffsetFromSurface;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_00,(MethodInfo *)0x0);
          snapConfig.SurfaceHitNormal.z = *(float *)(puVar1 + 0x14);
          snapConfig.SurfaceHitNormal.x = (float)*(undefined8 *)(puVar1 + 0xc);
          snapConfig.SurfaceHitNormal.y = (float)((ulonglong)*(undefined8 *)(puVar1 + 0xc) >> 0x20);
          goto code_?;
        }
        TransformEx::TransformEx_Align((Quaternion *)&stack0xffffff90,pTVar12,VVar15,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_06.NoVolumeSize.x = fVar19;
        queryConfig_06.ObjectTypes = (int32_t)fVar21;
        queryConfig_06.NoVolumeSize.y = fVar20;
        queryConfig_06.NoVolumeSize.z = (float)pVVar16;
        pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xfffffe80,root,queryConfig_06,(MethodInfo *)0x0);
        fVar3 = (pOVar25->_size).x;
        fVar4 = (pOVar25->_size).z;
        uVar94 = (pOVar25->_rotation).w;
        uVar95 = (pOVar25->_size).x;
        uVar96 = (pOVar25->_size).y;
        uVar97 = (pOVar25->_size).z;
        obb_05._size.z = (float)uVar97;
        obb_05._size.y = (float)uVar96;
        obb_05._size.x = (float)uVar95;
        uVar98 = (pOVar25->_center).x;
        uVar99 = (pOVar25->_center).y;
        uVar100 = (pOVar25->_center).z;
        obb_05._center.z = (float)uVar100;
        obb_05._center.y = (float)uVar99;
        obb_05._center.x = (float)uVar98;
        uVar101 = (pOVar25->_rotation).x;
        uVar102 = (pOVar25->_rotation).y;
        uVar103 = (pOVar25->_rotation).z;
        obb_05._rotation.z = (float)uVar103;
        obb_05._rotation.y = (float)uVar102;
        obb_05._rotation.x = (float)uVar101;
        pVVar16 = (Vector3 *)&stack0xffffffd0;
        obb_05._rotation.w = (float)uVar94;
        obb_05._isValid = pOVar25->_isValid;
        obb_05._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
        pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(pVVar16,obb_05,PVar11,0.0,(MethodInfo *)0x0);
        fVar31 = pVVar6->x;
        fVar35 = pVVar6->y;
        if (pTVar12 == (Transform *)0x0) goto code_?;
        puVar1 = &UNK_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffb0,pTVar12,(MethodInfo *)0x0);
        uVar104 = pVVar6->x;
        uVar105 = pVVar6->y;
        value_13.y = fVar35 + (float)uVar105;
        value_13.x = fVar31 + (float)uVar104;
        value_13.z = (float)puVar1 + pVVar6->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_13,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd0,pTVar12,(MethodInfo *)0x0);
        uVar106 = pVVar6->x;
        uVar107 = pVVar6->y;
        value.y = (float)uVar107 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
        value.x = (float)uVar106 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
        value.z = pVVar6->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value,(MethodInfo *)0x0);
        pVVar6 = (Vector3 *)0x1;
        fVar2 = 0.0;
        auVar108._12_4_ = 0;
        auVar108._0_12_ = snapConfig.SurfaceHitPlane._4_12_;
        pt.y = fVar3;
        pt.x = (float)pVVar16;
        pt.z = fVar4;
        pVVar16 = PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&stack0xffffffe0,(Plane)(auVar108 << 0x20),pt,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    else {
      pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
      TransformEx::TransformEx_Align((Quaternion *)&stack0xffffff90,pTVar12,*pVVar6,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_00.NoVolumeSize.x = fVar19;
      queryConfig_00.ObjectTypes = (int32_t)fVar21;
      queryConfig_00.NoVolumeSize.y = fVar20;
      queryConfig_00.NoVolumeSize.z = (float)pVVar16;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xfffffe80,root,queryConfig_00,(MethodInfo *)0x0);
      fVar3 = (pOVar25->_size).x;
      fVar4 = (pOVar25->_size).y;
      fVar7 = (pOVar25->_size).z;
      fVar8 = (pOVar25->_center).x;
      fVar26 = (pOVar25->_center).y;
      fVar27 = (pOVar25->_center).z;
      fVar28 = (pOVar25->_rotation).x;
      fVar29 = (pOVar25->_rotation).y;
      uVar34 = (pOVar25->_rotation).z;
      fVar2 = (pOVar25->_rotation).w;
      if ((char)*(undefined4 *)&pOVar25->_isValid == '\0') goto code_?;
      pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
      uVar109 = pVVar6->x;
      uVar110 = pVVar6->y;
      fVar35 = -(float)uVar109;
      fVar31 = -(float)uVar110;
      fVar30 = -pVVar6->z;
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter_00.y = fVar26;
      boxCenter_00.x = fVar8;
      boxCenter_00.z = fVar27;
      boxSize_00.y = fVar4;
      boxSize_00.x = fVar3;
      boxSize_00.z = fVar7;
      boxRotation_00.y = fVar29;
      boxRotation_00.x = fVar28;
      boxRotation_00.z = (float)uVar34;
      boxRotation_00.w = fVar2;
      direction_00.y = fVar31;
      direction_00.x = fVar35;
      direction_00.z._0_1_ = SUB41(fVar30,0);
      direction_00.z._1_2_ = (short)((uint)fVar30 >> 8);
      direction_00.z._3_1_ = (char)((uint)fVar30 >> 0x18);
      BVar49 = BoxMath::BoxMath_GetMostAlignedFace(boxCenter_00,boxSize_00,boxRotation_00,direction_00,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar59 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar49,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar59 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar59->fields)._size != 0) {
        Vector3Ex::Vector3Ex_GetPointCloudCenter((Vector3 *)&stack0xffffffe0,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar59,(MethodInfo *)0x0);
        TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
        pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
        fVar21 = -pVVar6->z;
        fVar19 = 0.0;
        func_?();
        if (pOVar24 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
        iVar55 = func_?();
        if (iVar55 != 0) {
          uVar111 = *(undefined8 *)(iVar55 + 0x1c);
          fVar2 = *(float *)(iVar55 + 0x24);
          if (cVar23 != '\0') {
            if (snapConfig.SurfaceObject == (GameObject *)0x0) goto code_?;
            terrain = (Terrain *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1(snapConfig.SurfaceObject,UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__);
            pVVar6 = TerrainEx::TerrainEx_GetInterpolatedNormal((Vector3 *)&stack0xffffffe0,terrain,*(Vector3 *)(iVar55 + 0xc),(MethodInfo *)0x0);
            uVar111._0_4_ = pVVar6->x;
            uVar111._4_4_ = pVVar6->y;
            fVar2 = pVVar6->z;
          }
          normAlignVector_00.z = fVar2;
          normAlignVector_00.x = (float)(int)uVar111;
          normAlignVector_00.y = (float)(int)((ulonglong)uVar111 >> 0x20);
          pQVar112 = TransformEx::TransformEx_Align((Quaternion *)&stack0xffffff90,pTVar12,normAlignVector_00,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
          fVar2 = pQVar112->x;
          fVar3 = pQVar112->y;
          fVar4 = pQVar112->z;
          fVar7 = pQVar112->w;
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar8 = 0.0;
          queryConfig_03.NoVolumeSize.x = fVar19;
          queryConfig_03.ObjectTypes = (int32_t)fVar21;
          queryConfig_03.NoVolumeSize.y = fVar20;
          queryConfig_03.NoVolumeSize.z = (float)pVVar16;
          pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xfffffe80,root,queryConfig_03,(MethodInfo *)0x0);
          fVar21 = (pOVar25->_size).y;
          fVar19 = (pOVar25->_size).z;
          fVar20 = (pOVar25->_center).y;
          fVar26 = (pOVar25->_center).z;
          fVar27 = (pOVar25->_rotation).x;
          fVar28 = (pOVar25->_rotation).y;
          if (pTVar12 == (Transform *)0x0) goto code_?;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
          quat.y = fVar3;
          quat.x = fVar2;
          quat.z = fVar4;
          quat.w = fVar7;
          QuaternionEx::QuaternionEx_RotatePoints(quat,pLVar59,*pVVar6,(MethodInfo *)0x0);
          pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
          fVar3 = 0.0;
          fVar4 = 0.0;
          fVar7 = 0.0;
          fVar29 = 0.0;
          fVar2 = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition((Plane *)&stack0xffffff90,*pVVar6,*(Vector3 *)(iVar55 + 0xc),(MethodInfo *)0x0);
          obb_03._size.y = fVar21;
          obb_03._size.x = fVar2;
          obb_03._size.z = fVar19;
          obb_03._center.x = fVar3;
          obb_03._center.y = fVar20;
          obb_03._center.z = fVar26;
          obb_03._rotation.x = fVar27;
          obb_03._rotation.y = fVar28;
          obb_03._rotation.z = fVar29;
          obb_03._rotation.w = 0.1;
          obb_03._isValid = pOVar25->_isValid;
          obb_03._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
          PVar11.m_Normal.y = fVar4;
          PVar11.m_Normal.x = fVar3;
          PVar11.m_Normal.z = fVar7;
          PVar11.m_Distance = fVar29;
          pVVar113 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffb0,obb_03,PVar11,0.1,(MethodInfo *)0x0);
          pVVar6 = (Vector3 *)pVVar113->x;
          pTVar36 = (Transform *)pVVar113->y;
          fVar2 = pVVar113->z;
          pVVar113 = pVVar6;
          pTVar114 = pTVar36;
          fVar7 = fVar2;
          pVVar115 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(pVVar6,pTVar36,(MethodInfo *)0x0);
          uVar116 = pVVar115->x;
          uVar117 = pVVar115->y;
          fVar7 = fVar7 + pVVar115->z;
          value_10.y = (float)pTVar114 + (float)uVar117;
          value_10.x = (float)pVVar113 + (float)uVar116;
          value_10.z = fVar7;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_10,(MethodInfo *)0x0);
          puVar1 = &UNK_?;
          offset_01.y = (float)pTVar36;
          offset_01.x = (float)pVVar6;
          offset_01.z = fVar2;
          Vector3Ex::Vector3Ex_OffsetPoints(pLVar59,offset_01,(MethodInfo *)0x0);
          puVar5 = &UNK_?;
          pVVar113 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffff30,(MethodInfo *)0x0);
          uVar118._0_4_ = pVVar113->x;
          uVar118._4_4_ = pVVar113->y;
          pVVar6 = (Vector3 *)&stack0xffffff30;
          puVar46 = &UNK_?;
          embedDirection_00.z = -pVVar113->z;
          embedDirection_00.x = (float)(int)(uVar118 ^ 0x8000000080000000);
          embedDirection_00.y = (float)(int)((uVar118 ^ 0x8000000080000000) >> 0x20);
          pVVar113 = ObjectSurfaceSnap_CalculateEmbedVector(pVVar6,pLVar59,snapConfig.SurfaceObject,embedDirection_00,snapConfig.SurfaceType,(MethodInfo *)0x0);
          fVar3 = pVVar113->x;
          fVar4 = pVVar113->y;
          puVar75 = &UNK_?;
          pVVar113 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffff30,pTVar12,(MethodInfo *)0x0);
          uVar119 = pVVar113->x;
          uVar120 = pVVar113->y;
          value_01.y = (float)uVar120 + fVar4 + (float)puVar46 * snapConfig.OffsetFromSurface;
          value_01.x = (float)uVar119 + fVar3 + (float)puVar5 * snapConfig.OffsetFromSurface;
          value_01.z = pVVar113->z + (float)puVar75 + (float)pVVar6 * snapConfig.OffsetFromSurface;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_01,(MethodInfo *)0x0);
          snapConfig.SurfaceHitNormal.z = *(float *)(puVar1 + 0x14);
          snapConfig.SurfaceHitNormal.x = (float)*(undefined8 *)(puVar1 + 0xc);
          snapConfig.SurfaceHitNormal.y = (float)((ulonglong)*(undefined8 *)(puVar1 + 0xc) >> 0x20);
code_?:
          snapConfig.SurfaceHitPlane.m_Distance = 0.0;
          snapConfig.SurfaceHitPlane.m_Normal.z = 0.0;
          snapConfig.SurfaceHitPlane.m_Normal.y = 0.0;
          snapConfig.SurfaceHitPlane.m_Normal.x = 0.0;
          inNormal.y = fVar8;
          inNormal.x = (float)pVVar16;
          inNormal.z = fVar7;
          inPoint.y = snapConfig.SurfaceHitNormal.y;
          inPoint.x = snapConfig.SurfaceHitNormal.x;
          inPoint.z = snapConfig.SurfaceHitNormal.z;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition((Plane *)&stack0xffffff90,inNormal,inPoint,(MethodInfo *)0x0);
          fVar2 = *(float *)(puVar1 + 0x14);
          fVar3 = 1.4013e-45;
          uVar121 = *(undefined8 *)(puVar1 + 0xc);
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
  queryConfig_04.NoVolumeSize.x = fVar19;
  queryConfig_04.ObjectTypes = (int32_t)fVar21;
  queryConfig_04.NoVolumeSize.y = fVar20;
  queryConfig_04.NoVolumeSize.z = (float)pVVar16;
  pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xfffffe80,root,queryConfig_04,(MethodInfo *)0x0);
  fVar2 = (pOVar25->_size).x;
  fVar3 = (pOVar25->_size).y;
  fVar4 = (pOVar25->_size).z;
  fVar7 = (pOVar25->_center).x;
  fVar8 = (pOVar25->_center).y;
  fVar21 = (pOVar25->_center).z;
  fVar19 = (pOVar25->_rotation).x;
  fVar20 = (pOVar25->_rotation).y;
  uVar34 = *(undefined4 *)&pOVar25->_isValid;
  if ((char)uVar34 != '\0') {
    if (root != (GameObject *)0x0) {
      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(root,(MethodInfo *)0x0);
      if (snapConfig.AlignAxis != 0) {
        fVar2 = 0.0;
        TransformEx::TransformEx_Align((Quaternion *)&stack0xffffff90,pTVar12,VVar15,snapConfig.AlignmentAxis,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_05.NoVolumeSize.x = snapConfig.SurfaceHitNormal.z;
        queryConfig_05.ObjectTypes = (int32_t)snapConfig.SurfaceHitNormal.y;
        queryConfig_05.NoVolumeSize.y = (float)snapConfig.AlignmentAxis;
        queryConfig_05.NoVolumeSize.z = fVar2;
        pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xfffffe80,root,queryConfig_05,(MethodInfo *)0x0);
        fVar2 = (pOVar25->_size).x;
        fVar3 = (pOVar25->_size).y;
        fVar4 = (pOVar25->_size).z;
        fVar7 = (pOVar25->_center).x;
        uVar34 = *(undefined4 *)&pOVar25->_isValid;
        fVar8 = (pOVar25->_center).y;
        fVar21 = (pOVar25->_center).z;
        fVar19 = (pOVar25->_rotation).x;
        fVar20 = (pOVar25->_rotation).y;
      }
      if (pTVar12 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffff30,pTVar12,(MethodInfo *)0x0);
        fVar122 = pVVar6->x;
        fVar123 = pVVar6->y;
        fVar26 = pVVar6->z;
        obb_01._size.y = fVar3;
        obb_01._size.x = fVar2;
        obb_01._size.z = fVar4;
        obb_01._center.x = fVar7;
        obb_01._center.y = fVar8;
        obb_01._center.z = fVar21;
        obb_01._rotation.x = fVar19;
        obb_01._rotation.y = fVar20;
        obb_01._rotation.z = fVar21;
        obb_01._rotation.w = fVar19;
        obb_01._40_4_ = uVar34;
        fVar2 = snapConfig.SurfaceHitPlane.m_Normal.x;
        fVar4 = snapConfig.SurfaceHitPlane.m_Normal.y;
        pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffff30,obb_01,PVar11,snapConfig.OffsetFromSurface,(MethodInfo *)0x0);
        uVar124 = pVVar6->x;
        uVar125 = pVVar6->y;
        value_06.y = (float)uVar125 + fVar123;
        value_06.x = (float)uVar124 + fVar122;
        value_06.z = pVVar6->z + fVar26;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar12,value_06,(MethodInfo *)0x0);
        fVar3 = 1.4013e-45;
        pt_00.y = fVar4;
        pt_00.x = fVar2;
        pt_00.z = fVar21;
        pVVar6 = PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&stack0xffffff30,PVar11,pt_00,(MethodInfo *)0x0);
        uVar121._0_4_ = pVVar6->x;
        uVar121._4_4_ = pVVar6->y;
        fVar2 = pVVar6->z;
code_?:
        *(float *)__return_storage_ptr__ = fVar3;
        (__return_storage_ptr__->SittingPlane).m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        (__return_storage_ptr__->SittingPlane).m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        (__return_storage_ptr__->SittingPlane).m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        (__return_storage_ptr__->SittingPlane).m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
        (__return_storage_ptr__->SittingPoint).x = (float)uVar121;
        (__return_storage_ptr__->SittingPoint).y = (float)((ulonglong)uVar121 >> 0x20);
        (__return_storage_ptr__->SittingPoint).z = fVar2;
        return __return_storage_ptr__;
      }
    }
code_?:
    func_?();
    pcVar126 = (code *)swi(3);
    pOVar127 = (ObjectSurfaceSnap_SnapResult *)(*pcVar126)();
    return pOVar127;
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

