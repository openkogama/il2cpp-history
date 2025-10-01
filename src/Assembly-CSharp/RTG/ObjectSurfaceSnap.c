
/* Vector3 CalculateEmbedVector(List`1[UnityEngine.Vector3], GameObject, Vector3,
   ObjectSurfaceSnap+Type) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateEmbedVector
                    (Vector3 *__return_storage_ptr__,List_1_UnityEngine_Vector3_ *embedPoints,
                    GameObject *embedSurface,Vector3 embedDirection,
                    ObjectSurfaceSnap_Type__Enum surfaceType,MethodInfo *method)

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
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
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
  fStack_15 = _UNK_?;
  cStack_16 = '\0';
  if (embedPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                        ((List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                         &stack0xffffff30,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)embedPoints,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                        );
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
      bVar24 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
               PlaneIdHelper+PlaneQuadrantInfo]::
               List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                         (&LStack_8,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                         );
      if (bVar24 == 0) {
        uStack_2 = 0xffffffff;
        pMVar25 = 
        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
        ;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   ,method_00);
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
      fStack_30 = (float)((uint)embedDirection.z ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      pMStack_31 = (MethodInfo *)LStack_8._current.SecondAxisSign;
      pMStack_32 = (MethodInfo *)LStack_8._current.SecondAxisSign;
      pMStack_10 = (MethodInfo *)LStack_8._current.SecondAxisSign;
      value.y = (float)((uint)embedDirection.y ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      value.x = (float)((uint)embedDirection.x ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      value.z = fStack_30;
      uStack_9 = uStack_29;
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffff20,value,(MethodInfo *)0x0);
      uVar34 = pVVar33->x;
      uVar35 = pVVar33->y;
      fStack_13 = pVVar33->z;
      uStack_11 = uVar34;
      uStack_12 = uVar35;
      if (pOVar14 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) break;
      embedDirection.x = (float)uStack_9._4_4_;
      method_00 = pMStack_10;
      iVar36 = (*(code *)(pOVar14->klass->vtable).__unknown.method)();
      if (iVar36 == 0) {
        func_?(&uStack_9);
        iVar36 = func_?(4);
        if (iVar36 != 0) {
          uVar37 = *(undefined8 *)(iVar36 + 0xc);
          fStack_38 = *(float *)(iVar36 + 0x14);
          uStack_39._0_4_ = (float)uVar37;
          uStack_39._4_4_ = (float)((ulonglong)uVar37 >> 0x20);
          fVar27 = ((float)uStack_29 - (float)uStack_39) * ((float)uStack_29 - (float)uStack_39) +
                   (uStack_29._4_4_ - uStack_39._4_4_) * (uStack_29._4_4_ - uStack_39._4_4_) +
                   ((float)pMStack_32 - fStack_38) * ((float)pMStack_32 - fStack_38);
          uStack_39 = uVar37;
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
  pcVar40 = (code *)swi(3);
  pVVar33 = (Vector3 *)(*pcVar40)();
  return pVVar33;
}


/* Vector3 CalculateSitOnSurfaceOffset(OBB, Plane, Single) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                    (Vector3 *__return_storage_ptr__,OBB obb,Plane surfacePlane,
                    float offsetFromSurface,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
         OBB::OBB_GetCornerPoints(&obb,(MethodInfo *)0x0);
  index = PlaneEx::PlaneEx_GetFurthestPtBehind
                    (surfacePlane,(List_1_UnityEngine_Vector3_ *)this,(MethodInfo *)0x0);
  if (index < 0) {
    index = PlaneEx::PlaneEx_GetClosestPtInFrontOrOnPlane
                      (surfacePlane,(List_1_UnityEngine_Vector3_ *)this,(MethodInfo *)0x0);
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
    obb._size.x = (float)
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
    ;
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,this,index,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    pVVar3 = pVVar2->asset;
    obb._size.y = (float)pVVar2->alias;
    obb._size.z = (float)pVVar2->path;
    obb._center.x = (float)pVVar2->asset;
    obb._center.y = 0.0;
    obb._size.x = surfacePlane.m_Distance;
    pVVar4 = PlaneEx::PlaneEx_ProjectPoint
                       ((Vector3 *)&stack0xffffffd8,surfacePlane,(Vector3)*pVVar2,(MethodInfo *)0x0)
    ;
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    *(ulonglong *)surfacePlane.m_Normal.z =
         CONCAT44(((float)uVar6 - obb._size.z) + surfacePlane.m_Normal.y * offsetFromSurface,
                  ((float)uVar5 - obb._size.y) + surfacePlane.m_Normal.x * offsetFromSurface);
    *(float *)((int)surfacePlane.m_Normal.z + 8) =
         (fVar7 - (float)pVVar3) + surfacePlane.m_Normal.z * offsetFromSurface;
    return (Vector3 *)surfacePlane.m_Normal.z;
  }
  obb._size.x = (float)&UNK_?;
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar8)();
  return pVVar4;
}


/* Vector3 CalculateSitOnSurfaceOffset(AABB, Plane, Single) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::
          ObjectSurfaceSnap_CalculateSitOnSurfaceOffset_1
                    (Vector3 *__return_storage_ptr__,AABB aabb,Plane surfacePlane,
                    float offsetFromSurface,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
         AABB::AABB_GetCornerPoints(&aabb,(MethodInfo *)0x0);
  index = PlaneEx::PlaneEx_GetFurthestPtBehind
                    (surfacePlane,(List_1_UnityEngine_Vector3_ *)this,(MethodInfo *)0x0);
  if (index < 0) {
    index = PlaneEx::PlaneEx_GetClosestPtInFrontOrOnPlane
                      (surfacePlane,(List_1_UnityEngine_Vector3_ *)this,(MethodInfo *)0x0);
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
    aabb._size.x = (float)
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
    ;
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,this,index,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    pVVar3 = pVVar2->asset;
    aabb._size.y = (float)pVVar2->alias;
    aabb._size.z = (float)pVVar2->path;
    aabb._center.x = (float)pVVar2->asset;
    aabb._center.y = 0.0;
    aabb._size.x = surfacePlane.m_Distance;
    pVVar4 = PlaneEx::PlaneEx_ProjectPoint
                       ((Vector3 *)&stack0xffffffd8,surfacePlane,(Vector3)*pVVar2,(MethodInfo *)0x0)
    ;
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    *(ulonglong *)surfacePlane.m_Normal.z =
         CONCAT44(((float)uVar6 - aabb._size.z) + surfacePlane.m_Normal.y * offsetFromSurface,
                  ((float)uVar5 - aabb._size.y) + surfacePlane.m_Normal.x * offsetFromSurface);
    *(float *)((int)surfacePlane.m_Normal.z + 8) =
         (fVar7 - (float)pVVar3) + surfacePlane.m_Normal.z * offsetFromSurface;
    return (Vector3 *)surfacePlane.m_Normal.z;
  }
  aabb._size.x = (float)&UNK_?;
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar8)();
  return pVVar4;
}


/* ObjectSurfaceSnap+SurfaceRaycaster CreateSurfaceRaycaster(ObjectSurfaceSnap+Type, GameObject,
   Boolean) */

ObjectSurfaceSnap_SurfaceRaycaster *
Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CreateSurfaceRaycaster
          (ObjectSurfaceSnap_Type__Enum surfaceType,GameObject *surfaceObject,bool raycastReverse,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectSurfaceSnap__MeshSurfaceRaycaster);
    func_?(&TypeInfo__RTG__ObjectSurfaceSnap__TerrainSurfaceRaycaster);
    cRam_? = '\x01';
  }
  if (((surfaceType == ObjectSurfaceSnap_Type__Enum_Mesh) ||
      (surfaceType == ObjectSurfaceSnap_Type__Enum_TerrainMesh)) ||
     (surfaceType == ObjectSurfaceSnap_Type__Enum_SphericalMesh)) {
    method_00 = TypeInfo__RTG__ObjectSurfaceSnap__MeshSurfaceRaycaster;
    pOVar1 = (ObjectSurfaceSnap_SurfaceRaycaster *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pOVar1->fields)._surfaceObject = surfaceObject;
    func_?(&pOVar1->fields,surfaceObject);
    (pOVar1->fields)._raycastReverse = raycastReverse;
    return pOVar1;
  }
  if (surfaceType != ObjectSurfaceSnap_Type__Enum_UnityTerrain) {
    return (ObjectSurfaceSnap_SurfaceRaycaster *)0x0;
  }
  pOVar1 = (ObjectSurfaceSnap_SurfaceRaycaster *)
           func_?(TypeInfo__RTG__ObjectSurfaceSnap__TerrainSurfaceRaycaster);
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__TerrainCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::TerrainCollider>__
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
  (pOVar1->fields)._surfaceObject = surfaceObject;
  func_?(&pOVar1->fields,surfaceObject);
  (pOVar1->fields)._raycastReverse = raycastReverse;
  if (surfaceObject != (GameObject *)0x0) {
    pOVar2 = (ObjectSurfaceSnap_SurfaceRaycaster__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (surfaceObject,
                        UnityEngine__TerrainCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::TerrainCollider>__
                       );
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

ObjectSurfaceSnap_SnapResult *
Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_SnapHierarchy
          (ObjectSurfaceSnap_SnapResult *__return_storage_ptr__,GameObject *root,
          ObjectSurfaceSnap_SnapConfig snapConfig,MethodInfo *method)

{
  pOVar1 = __return_storage_ptr__;
  lVar2 = ZEXT48(__return_storage_ptr__) << 0x20;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__RTG__ObjectVertexCollect);
    cRam_? = '\x01';
  }
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  pTVar7 = (Transform *)0x0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  bVar11 = GameObjectEx::GameObjectEx_HierarchyHasMesh(root,(MethodInfo *)0x0);
  bVar12 = GameObjectEx::GameObjectEx_HierarchyHasSprite(root,(MethodInfo *)0x0);
  PVar13 = snapConfig.SurfaceHitPlane;
  __return_storage_ptr__ = pOVar1;
  if ((bVar11 == 0) && (bVar12 == 0)) {
    if ((root == (GameObject *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (root,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffe0,pTVar7,(MethodInfo *)0x0);
    pVVar14 = PlaneEx::PlaneEx_ProjectPoint
                        ((Vector3 *)&stack0xffffffe0,PVar13,*pVVar14,(MethodInfo *)0x0);
    uVar15 = pVVar14->x;
    uVar16 = pVVar14->y;
    VVar17.y = (float)uVar16 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
    VVar17.x = (float)uVar15 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
    VVar17.z = pVVar14->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar7,VVar17,(MethodInfo *)0x0);
    fVar6 = 1.4013e-45;
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffe0,pTVar7,(MethodInfo *)0x0);
    fVar5 = snapConfig.SurfaceHitPlane.m_Distance;
code_?:
    uVar18._0_4_ = pVVar14->x;
    uVar18._4_4_ = pVVar14->y;
    fVar8 = pVVar14->z;
code_?:
    *(float *)__return_storage_ptr__ = fVar6;
    (__return_storage_ptr__->SittingPlane).m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
    (__return_storage_ptr__->SittingPlane).m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
    (__return_storage_ptr__->SittingPlane).m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
    (__return_storage_ptr__->SittingPlane).m_Distance = fVar5;
    (__return_storage_ptr__->SittingPoint).x = (float)uVar18;
    (__return_storage_ptr__->SittingPoint).y = (float)((ulonglong)uVar18 >> 0x20);
    (__return_storage_ptr__->SittingPoint).z = fVar8;
    return __return_storage_ptr__;
  }
  cVar19 = snapConfig.SurfaceType == 3;
  fVar20 = 0.0;
  uVar21._0_4_ = 0.0;
  puVar22 = (undefined *)0x0;
  fVar23 = 7.00649e-45;
  cVar24 = snapConfig.SurfaceType == 0 || snapConfig.SurfaceType == 2;
  cVar25 = snapConfig.SurfaceType == 0;
  pOVar26 = ObjectSurfaceSnap_CreateSurfaceRaycaster
                       (snapConfig.SurfaceType,snapConfig.SurfaceObject,1,(MethodInfo *)0x0);
  VVar17 = snapConfig.SurfaceHitNormal;
  if (snapConfig.SurfaceType != 4) {
    if (root == (GameObject *)0x0) goto code_?;
    pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (root,(MethodInfo *)0x0);
    if (snapConfig.AlignAxis == 0) {
      fVar5 = fVar9;
      fVar6 = fVar10;
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        fVar5 = fVar9;
        fVar6 = fVar10;
      }
      queryConfig_02.NoVolumeSize.x = fVar20;
      queryConfig_02.ObjectTypes = (int32_t)fVar23;
      queryConfig_02.NoVolumeSize.y = (float)uVar21;
      queryConfig_02.NoVolumeSize.z = (float)puVar22;
      pOVar28 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                           ((OBB *)&stack0xfffffe90,root,queryConfig_02,(MethodInfo *)0x0);
      fVar10 = (pOVar28->_size).x;
      fVar29 = (pOVar28->_size).y;
      uVar21._4_4_ = (pOVar28->_size).z;
      fVar3 = (pOVar28->_center).x;
      fVar30 = (pOVar28->_center).y;
      fVar31 = (pOVar28->_center).z;
      puVar32 = (undefined *)(pOVar28->_rotation).x;
      fVar4 = (pOVar28->_rotation).y;
      fVar33 = (pOVar28->_rotation).z;
      fVar34 = (pOVar28->_rotation).w;
      fVar9 = *(float *)&pOVar28->_isValid;
      if (SUB41(fVar9,0) == '\0') goto code_?;
      fVar35 = snapConfig.SurfaceHitNormal.x;
      fVar36 = fVar10;
      fVar37 = fVar29;
      uVar38._0_4_ = uVar21._4_4_;
      uVar38._4_4_ = fVar3;
      fVar39 = fVar33;
      fVar40 = fVar34;
      if (cVar24 == '\0') {
        if (cVar19 != '\0') {
          if (snapConfig.SurfaceObject != (GameObject *)0x0) {
            puVar41 = &UNK_?;
            puVar22 = puVar32;
            pTVar42 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (snapConfig.SurfaceObject,(MethodInfo *)0x0);
            if (pTVar42 != (Transform *)0x0) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffe0,pTVar42,(MethodInfo *)0x0);
              fVar4 = pVVar14->x;
              fVar37 = pVVar14->y;
              fVar3 = pVVar14->z;
              if (pTVar27 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe0,pTVar27,(MethodInfo *)0x0);
                puVar43 = (undefined8 *)func_?();
                fVar23 = *(float *)(puVar43 + 1);
                fVar40 = (float)*puVar43;
                fVar44 = (float)((ulonglong)*puVar43 >> 0x20);
                uVar21._0_4_ = fVar40;
                fVar35 = fVar44;
                fVar36 = fVar23;
                pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_lossyScale
                                    ((Vector3 *)&stack0xffffffe0,pTVar42,(MethodInfo *)0x0);
                fVar20 = Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar14,(MethodInfo *)0x0);
                fVar20 = fVar20 * _UNK_?;
                fVar39 = (float)((uint)(float)uVar21 ^
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               );
                uVar38._4_4_ = (float)((uint)fVar35 ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                uVar38._0_4_ = (float)((uint)fVar23 ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                  puVar22 = &UNK_?;
                  func_?();
                }
                boxCenter_02.y = fVar39;
                boxCenter_02.x = fVar34;
                boxCenter_02.z = fVar31;
                boxSize_02.y = fVar29;
                boxSize_02.x = fVar10;
                boxSize_02.z = uVar21._4_4_;
                boxRotation_02.y = 0.0;
                boxRotation_02.x = (float)puVar22;
                boxRotation_02.z = fVar33;
                boxRotation_02.w = fVar34;
                direction_02.y = uVar38._4_4_;
                direction_02.x = fVar39;
                direction_02.z = (float)uVar38;
                BVar45 = BoxMath::BoxMath_GetMostAlignedFace
                                    (boxCenter_02,boxSize_02,boxRotation_02,direction_02,
                                     (MethodInfo *)0x0);
                if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                puVar22 = &UNK_?;
                pLVar46 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                     (root,BVar45,0.001,0.01,(MethodInfo *)0x0);
                fVar4 = fVar4 + (float)uVar21 * fVar20;
                fVar3 = fVar3 + fVar23 * fVar20;
                puVar47 = &UNK_?;
                inNormal_00.y = fVar44;
                inNormal_00.x = fVar40;
                inNormal_00.z = fVar36;
                inPoint_01.y = fVar37 + fVar35 * fVar20;
                inPoint_01.x = fVar4;
                inPoint_01.z = fVar3;
                UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                          ((Plane *)&stack0xffffff90,inNormal_00,inPoint_01,(MethodInfo *)0x0);
                obb_04._size.y = (float)puVar22;
                obb_04._size.x = fVar10;
                obb_04._size.z = (float)root;
                obb_04._center.x = (float)puVar47;
                obb_04._center.y = fVar30;
                obb_04._center.z = fVar31;
                obb_04._rotation.x = (float)puVar32;
                obb_04._rotation.y = (float)puVar41;
                obb_04._rotation.z = (float)puVar22;
                obb_04._rotation.w = (float)root;
                obb_04._40_4_ = fVar9;
                surfacePlane_00.m_Normal.y = fVar8;
                surfacePlane_00.m_Normal.x = (float)pTVar7;
                surfacePlane_00.m_Normal.z = fVar5;
                surfacePlane_00.m_Distance = fVar6;
                pVVar14 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                    ((Vector3 *)&stack0xffffffd0,obb_04,surfacePlane_00,0.0,
                                     (MethodInfo *)0x0);
                uVar38._0_4_ = pVVar14->x;
                uVar38._4_4_ = pVVar14->y;
                fVar10 = pVVar14->z;
                uVar21 = uVar38;
                fVar20 = fVar10;
                pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffff50,(Transform *)root,(MethodInfo *)0x0
                                    );
                uVar48 = pVVar14->x;
                uVar49 = pVVar14->y;
                value_09.y = SUB84(uVar21,4) + (float)uVar49;
                value_09.x = (float)uVar21 + (float)uVar48;
                value_09.z = fVar20 + pVVar14->z;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          ((Transform *)root,value_09,(MethodInfo *)0x0);
                offset_01.y = uVar38._4_4_;
                offset_01.x = (float)uVar38;
                offset_01.z = fVar10;
                Vector3Ex::Vector3Ex_OffsetPoints(pLVar46,offset_01,(MethodInfo *)0x0);
                pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffd0,(Transform *)root,(MethodInfo *)0x0
                                    );
                uVar50 = pVVar14->x;
                uVar51 = pVVar14->y;
                value.y = fVar35 * snapConfig.OffsetFromSurface + (float)uVar51;
                value.x = fVar31 * snapConfig.OffsetFromSurface + (float)uVar50;
                value.z = fVar23 * snapConfig.OffsetFromSurface + pVVar14->z;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          ((Transform *)root,value,(MethodInfo *)0x0);
                __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)root;
                goto code_?;
              }
            }
          }
          goto code_?;
        }
        if (snapConfig.SurfaceType != 1) goto code_?;
      }
      else {
        TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                  ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
      }
      puVar52 = &stack0xffffffa8;
      fVar5 = fVar3;
      fVar8 = fVar3;
      func_?();
      if (pOVar26 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
      uVar53 = 4;
      puVar41 = &UNK_?;
      iVar54 = func_?();
      if (iVar54 != 0) {
        obb_00._size.y = fVar37;
        obb_00._size.x = fVar36;
        obb_00._size.z = (float)uVar38;
        obb_00._center.x = uVar38._4_4_;
        obb_00._center.y = (float)puVar52;
        obb_00._center.z = fVar3;
        obb_00._rotation.x = (float)puVar41;
        obb_00._rotation.y = (float)uVar53;
        obb_00._rotation.z = fVar39;
        obb_00._rotation.w = fVar40;
        obb_00._40_4_ = fVar9;
        pVVar14 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xffffffe0,obb_00,*(Plane *)(iVar54 + 0x28),0.0,
                             (MethodInfo *)0x0);
        fVar39 = pVVar14->x;
        fVar40 = pVVar14->y;
        fVar6 = pVVar14->z;
        if (pTVar27 == (Transform *)0x0) goto code_?;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffb0,pTVar27,(MethodInfo *)0x0);
        uVar55 = pVVar14->x;
        uVar56 = pVVar14->y;
        value_01.y = fVar40 + (float)uVar56;
        value_01.x = fVar39 + (float)uVar55;
        value_01.z = fVar6 + pVVar14->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar27,value_01,(MethodInfo *)0x0);
        if (cVar24 != '\0') {
          fVar5 = fVar5 + fVar39;
          fVar30 = fVar30 + fVar40;
          fVar31 = fVar31 + fVar6;
          fVar3 = (float)((uint)(float)*(undefined8 *)(iVar54 + 0x1c) ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          fVar8 = (float)((uint)(float)((ulonglong)*(undefined8 *)(iVar54 + 0x1c) >> 0x20) ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          fVar6 = (float)(*(uint *)(iVar54 + 0x24) ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          boxCenter_03.y = fVar30;
          boxCenter_03.x = fVar5;
          boxCenter_03.z = fVar31;
          boxSize_03.y = fVar29;
          boxSize_03.x = fVar10;
          boxSize_03.z = uVar21._4_4_;
          boxRotation_03.y = fVar4;
          boxRotation_03.x = (float)puVar32;
          boxRotation_03.z = fVar33;
          boxRotation_03.w = fVar34;
          direction_03.y = fVar8;
          direction_03.x = fVar3;
          direction_03.z = fVar6;
          BVar45 = BoxMath::BoxMath_GetMostAlignedFace
                              (boxCenter_03,boxSize_03,boxRotation_03,direction_03,(MethodInfo *)0x0
                              );
          if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pLVar46 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                               (root,BVar45,0.001,0.01,(MethodInfo *)0x0);
          pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                              ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
          uVar57 = pVVar14->x;
          uVar58 = pVVar14->y;
          embedDirection.y =
               (float)(uVar58 ^ 
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          embedDirection.x =
               (float)(uVar57 ^ 
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          embedDirection.z =
               (float)((uint)pVVar14->z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          pVVar14 = ObjectSurfaceSnap_CalculateEmbedVector
                              ((Vector3 *)&stack0xffffffd0,pLVar46,snapConfig.SurfaceObject,
                               embedDirection,snapConfig.SurfaceType,(MethodInfo *)0x0);
          uVar59._0_4_ = pVVar14->x;
          uVar59._4_4_ = pVVar14->y;
          fVar5 = pVVar14->z;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffb0,pTVar27,(MethodInfo *)0x0);
          uVar60 = pVVar14->x;
          uVar61 = pVVar14->y;
          value_02.y = SUB84(uVar59,4) + (float)uVar61;
          value_02.x = (float)uVar59 + (float)uVar60;
          value_02.z = fVar5 + pVVar14->z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar27,value_02,(MethodInfo *)0x0);
        }
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe0,pTVar27,(MethodInfo *)0x0);
        uVar62 = pVVar14->x;
        uVar63 = pVVar14->y;
        value_05.y = snapConfig.OffsetFromSurface *
                     (float)((ulonglong)*(undefined8 *)(iVar54 + 0x1c) >> 0x20) + (float)uVar63;
        value_05.x = snapConfig.OffsetFromSurface * (float)*(undefined8 *)(iVar54 + 0x1c) +
                     (float)uVar62;
        value_05.z = snapConfig.OffsetFromSurface * *(float *)(iVar54 + 0x24) + pVVar14->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar27,value_05,(MethodInfo *)0x0);
        fVar8 = *(float *)(iVar54 + 0x14);
        fVar6 = 1.4013e-45;
        snapConfig.SurfaceHitPlane.m_Normal.x = *(float *)(iVar54 + 0x28);
        snapConfig.SurfaceHitPlane.m_Normal.y = *(float *)(iVar54 + 0x2c);
        snapConfig.SurfaceHitPlane.m_Normal.z = *(float *)(iVar54 + 0x30);
        fVar5 = *(float *)(iVar54 + 0x34);
        uVar18 = *(undefined8 *)(iVar54 + 0xc);
        goto code_?;
      }
      if ((cVar19 == '\0') && (snapConfig.SurfaceType == 1)) {
        obb._size.y = fVar37;
        obb._size.x = fVar36;
        obb._size.z = (float)uVar38;
        obb._center.x = uVar38._4_4_;
        obb._center.y = (float)puVar52;
        obb._center.z = fVar3;
        obb._rotation.x = (float)puVar41;
        obb._rotation.y = (float)uVar53;
        obb._rotation.z = fVar39;
        obb._rotation.w = fVar40;
        obb._40_4_ = fVar9;
        pVVar14 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xffffffd0,obb,PVar13,0.0,(MethodInfo *)0x0);
        uVar64._0_4_ = pVVar14->x;
        uVar64._4_4_ = pVVar14->y;
        fVar6 = pVVar14->z;
        if (pTVar27 == (Transform *)0x0) goto code_?;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffb0,pTVar27,(MethodInfo *)0x0);
        uVar65 = pVVar14->x;
        uVar66 = pVVar14->y;
        value_00.y = SUB84(uVar64,4) + (float)uVar66;
        value_00.x = (float)uVar64 + (float)uVar65;
        value_00.z = fVar6 + pVVar14->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar27,value_00,(MethodInfo *)0x0);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd0,pTVar27,(MethodInfo *)0x0);
        uVar67 = pVVar14->x;
        uVar68 = pVVar14->y;
        value_04.y = snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface + (float)uVar68;
        value_04.x = fVar35 * snapConfig.OffsetFromSurface + (float)uVar67;
        value_04.z = snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface + pVVar14->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar27,value_04,(MethodInfo *)0x0);
        fVar6 = 0.0;
        pt_01.y = fVar30;
        pt_01.x = fVar5;
        pt_01.z = fVar8;
        pVVar14 = PlaneEx::PlaneEx_ProjectPoint
                            ((Vector3 *)&stack0xffffffe0,PVar13,pt_01,(MethodInfo *)0x0);
        fVar5 = snapConfig.SurfaceHitPlane.m_Distance;
        goto code_?;
      }
    }
    else if (cVar24 == '\0') {
      if (cVar19 != '\0') {
        if ((snapConfig.SurfaceObject != (GameObject *)0x0) &&
           (pTVar7 = pTVar27,
           pTVar42 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (snapConfig.SurfaceObject,(MethodInfo *)0x0),
           pTVar42 != (Transform *)0x0)) {
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffe0,pTVar42,(MethodInfo *)0x0);
          fVar29 = pVVar14->x;
          fVar9 = pVVar14->y;
          fVar8 = pVVar14->z;
          if (pTVar27 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffb0,pTVar27,(MethodInfo *)0x0);
            puVar43 = (undefined8 *)func_?();
            fVar10 = *(float *)(puVar43 + 1);
            fVar36 = (float)*puVar43;
            fVar33 = (float)((ulonglong)*puVar43 >> 0x20);
            fVar30 = fVar36;
            fVar31 = fVar33;
            fVar35 = fVar10;
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                ((Vector3 *)&stack0xffffffe0,pTVar42,(MethodInfo *)0x0);
            uVar21._4_4_ = Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar14,(MethodInfo *)0x0);
            uVar21._4_4_ = uVar21._4_4_ * _UNK_?;
            normAlignVector.y = fVar33;
            normAlignVector.x = fVar36;
            normAlignVector.z = fVar35;
            TransformEx::TransformEx_Align
                      ((Quaternion *)&stack0xffffff90,pTVar27,normAlignVector,
                       snapConfig.AlignmentAxis,(MethodInfo *)0x0);
            if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            queryConfig_01.NoVolumeSize.x = fVar20;
            queryConfig_01.ObjectTypes = (int32_t)fVar23;
            queryConfig_01.NoVolumeSize.y = (float)uVar21;
            queryConfig_01.NoVolumeSize.z = (float)puVar22;
            pOVar28 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                                 ((OBB *)&stack0xfffffe60,root,queryConfig_01,(MethodInfo *)0x0);
            uVar38._0_4_ = (pOVar28->_center).y;
            uVar38._4_4_ = (pOVar28->_rotation).x;
            fVar39 = (pOVar28->_rotation).y;
            fVar23 = (pOVar28->_size).x;
            uVar21._0_4_ = (pOVar28->_size).y;
            fVar34 = (pOVar28->_size).z;
            fVar37 = (pOVar28->_center).x;
            uVar69 = (pOVar28->_rotation).z;
            fVar20 = (pOVar28->_rotation).w;
            uVar53 = *(undefined4 *)&pOVar28->_isValid;
            if ((char)uVar53 != '\0') {
              fVar70 = (float)((uint)fVar30 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
              fVar71 = (float)((uint)fVar31 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
              fVar72 = (float)((uint)fVar10 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
              fVar40 = fVar39;
              fVar44 = fVar37;
              if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              uVar73 = 0;
              boxCenter_01.y = (float)uVar38;
              boxCenter_01.x = fVar37;
              boxCenter_01.z = fVar72;
              boxSize_01.y = (float)uVar21;
              boxSize_01.x = fVar23;
              boxSize_01.z = fVar34;
              boxRotation_01.y = fVar40;
              boxRotation_01.x = uVar38._4_4_;
              boxRotation_01.z = (float)uVar69;
              boxRotation_01.w = fVar20;
              direction_01.y = fVar71;
              direction_01.x = fVar70;
              direction_01.z = fVar72;
              fVar20 = fVar23;
              fVar37 = (float)uVar21;
              BVar45 = BoxMath::BoxMath_GetMostAlignedFace
                                  (boxCenter_01,boxSize_01,boxRotation_01,direction_01,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pLVar46 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                   (root,BVar45,0.001,0.01,(MethodInfo *)0x0);
              fVar9 = fVar9 + fVar31 * uVar21._4_4_;
              inNormal.y = fVar33;
              inNormal.x = fVar36;
              inNormal.z = fVar35;
              inPoint_00.y = fVar9;
              inPoint_00.x = fVar29 + fVar30 * uVar21._4_4_;
              inPoint_00.z = fVar8 + fVar10 * uVar21._4_4_;
              UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                        ((Plane *)&stack0xffffff40,inNormal,inPoint_00,(MethodInfo *)0x0);
              obb_02._size.y = fVar37;
              obb_02._size.x = fVar20;
              obb_02._size.z = fVar34;
              obb_02._center.x = fVar44;
              obb_02._center.y = fVar71;
              obb_02._center.z = fVar72;
              obb_02._rotation.x = (float)uVar73;
              obb_02._rotation.y = fVar39;
              obb_02._rotation.z = fVar23;
              obb_02._rotation.w = (float)uVar21;
              obb_02._40_4_ = uVar53;
              surfacePlane.m_Normal.y = fVar4;
              surfacePlane.m_Normal.x = fVar3;
              surfacePlane.m_Normal.z = fVar5;
              surfacePlane.m_Distance = fVar6;
              pVVar14 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                  ((Vector3 *)&stack0xffffffd0,obb_02,surfacePlane,0.0,
                                   (MethodInfo *)0x0);
              fVar8 = 0.0;
              uVar21._0_4_ = pVVar14->x;
              uVar21._4_4_ = pVVar14->y;
              fVar3 = pVVar14->z;
              pTVar27 = pTVar7;
              uVar74 = uVar21;
              fVar4 = fVar3;
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffff50,pTVar7,(MethodInfo *)0x0);
              uVar75 = pVVar14->x;
              uVar76 = pVVar14->y;
              value_06.y = SUB84(uVar74,4) + (float)uVar76;
              value_06.x = (float)uVar74 + (float)uVar75;
              value_06.z = fVar4 + pVVar14->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar27,value_06,(MethodInfo *)0x0);
              offset.y = uVar21._4_4_;
              offset.x = (float)uVar21;
              offset.z = fVar3;
              Vector3Ex::Vector3Ex_OffsetPoints(pLVar46,offset,(MethodInfo *)0x0);
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffd0,pTVar27,(MethodInfo *)0x0);
              uVar77 = pVVar14->x;
              uVar78 = pVVar14->y;
              fVar4 = fVar10 * snapConfig.OffsetFromSurface + pVVar14->z;
              fVar3 = fVar30 * snapConfig.OffsetFromSurface + (float)uVar77;
              value_08.y = fVar31 * snapConfig.OffsetFromSurface + (float)uVar78;
              value_08.x = fVar3;
              value_08.z = fVar4;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar27,value_08,(MethodInfo *)0x0);
code_?:
              *(undefined4 *)__return_storage_ptr__ = 1;
              (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)pTVar7;
              (__return_storage_ptr__->SittingPlane).m_Normal.y = fVar8;
              (__return_storage_ptr__->SittingPlane).m_Normal.z = fVar5;
              (__return_storage_ptr__->SittingPlane).m_Distance = fVar6;
              (__return_storage_ptr__->SittingPoint).x = fVar4;
              (__return_storage_ptr__->SittingPoint).y = fVar9;
              (__return_storage_ptr__->SittingPoint).z = fVar3;
              return __return_storage_ptr__;
            }
            goto code_?;
          }
        }
        goto code_?;
      }
      TransformEx::TransformEx_Align
                ((Quaternion *)&stack0xffffff90,pTVar27,VVar17,snapConfig.AlignmentAxis,
                 (MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig.NoVolumeSize.x = fVar20;
      queryConfig.ObjectTypes = (int32_t)fVar23;
      queryConfig.NoVolumeSize.y = (float)uVar21;
      queryConfig.NoVolumeSize.z = (float)puVar22;
      pOVar28 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                           ((OBB *)&stack0xfffffe60,root,queryConfig,(MethodInfo *)0x0);
      fVar5 = (pOVar28->_size).x;
      fVar8 = (pOVar28->_size).y;
      fVar3 = (pOVar28->_size).z;
      fVar4 = (pOVar28->_center).x;
      fVar9 = (pOVar28->_center).y;
      fVar10 = (pOVar28->_center).z;
      fVar29 = (pOVar28->_rotation).x;
      uVar21._4_4_ = (pOVar28->_rotation).y;
      uVar73 = (pOVar28->_rotation).z;
      fVar6 = (pOVar28->_rotation).w;
      if ((char)*(undefined4 *)&pOVar28->_isValid == '\0') goto code_?;
      fVar30 = (float)((uint)snapConfig.SurfaceHitNormal.z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      uVar79._4_4_ =
           (float)((uint)snapConfig.SurfaceHitNormal.y ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      uVar79._0_4_ =
           (float)((uint)snapConfig.SurfaceHitNormal.x ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter.y = fVar9;
      boxCenter.x = fVar4;
      boxCenter.z = fVar10;
      boxSize.y = fVar8;
      boxSize.x = fVar5;
      boxSize.z = fVar3;
      boxRotation.y = uVar21._4_4_;
      boxRotation.x = fVar29;
      boxRotation.z = (float)uVar73;
      boxRotation.w = fVar6;
      direction.z = fVar30;
      direction.x = (float)uVar79;
      direction.y = SUB84(uVar79,4);
      BVar45 = BoxMath::BoxMath_GetMostAlignedFace
                          (boxCenter,boxSize,boxRotation,direction,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar46 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                           (root,BVar45,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar46 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar46->fields)._size != 0) {
        pVVar14 = Vector3Ex::Vector3Ex_GetPointCloudCenter
                            ((Vector3 *)&stack0xffffffd0,
                             (IEnumerable_1_UnityEngine_Vector3_ *)pLVar46,(MethodInfo *)0x0);
        fVar30 = pVVar14->x;
        fVar31 = pVVar14->y;
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
        pAVar80 = ObjectBounds::ObjectBounds_CalcMeshModelAABB
                             ((AABB *)&stack0xffffff30,snapConfig.SurfaceObject,(MethodInfo *)0x0);
        if ((char)*(undefined4 *)&pAVar80->_isValid != '\0') {
          if ((snapConfig.SurfaceObject == (GameObject *)0x0) ||
             (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(snapConfig.SurfaceObject,(MethodInfo *)0x0),
             pTVar7 == (Transform *)0x0)) goto code_?;
          pMVar81 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                     Transform_get_localToWorldMatrix
                               ((Matrix4x4 *)&stack0xfffffe50,pTVar7,(MethodInfo *)0x0);
          transformMatrix.m02._1_2_ = (short)((uint)pMVar81->m02 >> 8);
          transformMatrix._0_33_ = *(undefined1 (*) [33])pMVar81;
          transformMatrix.m02._3_1_ = (char)((uint)pMVar81->m02 >> 0x18);
          transformMatrix.m12 = pMVar81->m12;
          transformMatrix.m22 = pMVar81->m22;
          transformMatrix.m32 = pMVar81->m32;
          transformMatrix.m03 = pMVar81->m03;
          transformMatrix.m13 = pMVar81->m13;
          transformMatrix.m23 = pMVar81->m23;
          transformMatrix.m33 = pMVar81->m33;
          AABB::AABB_Transform((AABB *)&stack0xffffff80,transformMatrix,(MethodInfo *)0x0);
        }
        OBB::OBB_get_Extents((Vector3 *)&stack0xffffffd0,(OBB *)&stack0xfffffee8,(MethodInfo *)0x0);
        func_?();
        func_?();
        if (pOVar26 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
        uVar82 = func_?();
        if (uVar82 != 0) {
          fVar5 = *(float *)(uVar82 + 0x24);
          pVVar14 = (Vector3 *)(uVar82 + 0x1c);
          fVar35 = pVVar14->x;
          fVar36 = pVVar14->y;
          fVar6 = fVar35;
          fVar8 = fVar36;
          TransformEx::TransformEx_Align
                    ((Quaternion *)&stack0xffffff90,pTVar27,*pVVar14,snapConfig.AlignmentAxis,
                     (MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            puVar22 = &UNK_?;
            func_?();
          }
          queryConfig_07.NoVolumeSize.x = fVar20;
          queryConfig_07.ObjectTypes = (int32_t)fVar23;
          queryConfig_07.NoVolumeSize.y = (float)uVar21;
          queryConfig_07.NoVolumeSize.z = (float)puVar22;
          pOVar28 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                               ((OBB *)&stack0xfffffe60,root,queryConfig_07,(MethodInfo *)0x0);
          uVar83 = (pOVar28->_rotation).w;
          uVar84 = (pOVar28->_size).x;
          uVar85 = (pOVar28->_size).y;
          uVar86 = (pOVar28->_size).z;
          obb_06._size.z = (float)uVar86;
          obb_06._size.y = (float)uVar85;
          obb_06._size.x = (float)uVar84;
          uVar87 = (pOVar28->_center).x;
          uVar88 = (pOVar28->_center).y;
          uVar89 = (pOVar28->_center).z;
          obb_06._center.z = (float)uVar89;
          obb_06._center.y = (float)uVar88;
          obb_06._center.x = (float)uVar87;
          uVar90 = (pOVar28->_rotation).x;
          uVar91 = (pOVar28->_rotation).y;
          uVar92 = (pOVar28->_rotation).z;
          obb_06._rotation.z = (float)uVar92;
          obb_06._rotation.y = (float)uVar91;
          obb_06._rotation.x = (float)uVar90;
          snapConfig.SurfaceObject = *(GameObject **)&pOVar28->_isValid;
          obb_06._rotation.w = (float)uVar83;
          obb_06._40_4_ = snapConfig.SurfaceObject;
          pVVar14 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                              ((Vector3 *)&stack0xffffffe0,obb_06,*(Plane *)(uVar82 + 0x28),0.0,
                               (MethodInfo *)0x0);
          fVar3 = pVVar14->z;
          if (pTVar27 == (Transform *)0x0) goto code_?;
          fVar4 = 0.0;
          pTVar7 = pTVar27;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff50,pTVar27,(MethodInfo *)0x0);
          uVar93 = pVVar14->x;
          uVar94 = pVVar14->y;
          value_11.y = (float)uVar94 + fVar4;
          value_11.x = (float)uVar93 + (float)pTVar7;
          value_11.z = pVVar14->z + fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar27,value_11,(MethodInfo *)0x0);
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffd0,pTVar27,(MethodInfo *)0x0);
          uVar95 = pVVar14->x;
          uVar96 = pVVar14->y;
          value_13.y = (float)uVar96 + snapConfig.OffsetFromSurface * fVar8;
          value_13.x = (float)uVar95 + snapConfig.OffsetFromSurface * fVar6;
          value_13.z = pVVar14->z + snapConfig.OffsetFromSurface * fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar27,value_13,(MethodInfo *)0x0);
          snapConfig.AlignmentAxis = *(int32_t *)(uVar82 + 0x14);
          root = (GameObject *)*(undefined8 *)(uVar82 + 0xc);
          snapConfig._0_4_ = SUB84((ulonglong)*(undefined8 *)(uVar82 + 0xc) >> 0x20,0);
          uVar21 = CONCAT44(fVar36,fVar35);
          goto code_?;
        }
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xffffff90,pTVar27,VVar17,snapConfig.AlignmentAxis,
                   (MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          puVar22 = &UNK_?;
          func_?();
        }
        queryConfig_06.NoVolumeSize.x = fVar20;
        queryConfig_06.ObjectTypes = (int32_t)fVar23;
        queryConfig_06.NoVolumeSize.y = (float)uVar21;
        queryConfig_06.NoVolumeSize.z = (float)puVar22;
        pOVar28 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                             ((OBB *)&stack0xfffffe60,root,queryConfig_06,(MethodInfo *)0x0);
        uVar97 = (pOVar28->_rotation).w;
        uVar98 = (pOVar28->_size).x;
        uVar99 = (pOVar28->_size).y;
        uVar100 = (pOVar28->_size).z;
        obb_05._size.z = (float)uVar100;
        obb_05._size.y = (float)uVar99;
        obb_05._size.x = (float)uVar98;
        uVar101 = (pOVar28->_center).x;
        uVar102 = (pOVar28->_center).y;
        uVar103 = (pOVar28->_center).z;
        obb_05._center.z = (float)uVar103;
        obb_05._center.y = (float)uVar102;
        obb_05._center.x = (float)uVar101;
        uVar104 = (pOVar28->_rotation).x;
        uVar105 = (pOVar28->_rotation).y;
        uVar106 = (pOVar28->_rotation).z;
        obb_05._rotation.z = (float)uVar106;
        obb_05._rotation.y = (float)uVar105;
        obb_05._rotation.x = (float)uVar104;
        fVar5 = *(float *)&pOVar28->_isValid;
        obb_05._rotation.w = (float)uVar97;
        obb_05._40_4_ = fVar5;
        pVVar14 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xffffffe0,obb_05,PVar13,0.0,(MethodInfo *)0x0);
        fVar6 = pVVar14->z;
        if (pTVar27 == (Transform *)0x0) goto code_?;
        fVar8 = 0.0;
        pTVar7 = pTVar27;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffb0,pTVar27,(MethodInfo *)0x0);
        uVar107 = pVVar14->x;
        uVar108 = pVVar14->y;
        value_10.y = (float)uVar108 + fVar8;
        value_10.x = (float)uVar107 + (float)pTVar7;
        value_10.z = pVVar14->z + fVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar27,value_10,(MethodInfo *)0x0);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd0,pTVar27,(MethodInfo *)0x0);
        uVar109 = pVVar14->x;
        uVar110 = pVVar14->y;
        value_12.y = (float)uVar110 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
        value_12.x = (float)uVar109 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
        value_12.z = pVVar14->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar27,value_12,(MethodInfo *)0x0);
        fVar6 = 1.4013e-45;
        pt.y = fVar31;
        pt.x = fVar30;
        pt.z = fVar5;
        fVar5 = snapConfig.SurfaceHitPlane.m_Distance;
        pVVar14 = PlaneEx::PlaneEx_ProjectPoint
                            ((Vector3 *)&stack0xffffffe0,snapConfig.SurfaceHitPlane,pt,
                             (MethodInfo *)0x0);
        __return_storage_ptr__ =
             (ObjectSurfaceSnap_SnapResult *)snapConfig.SurfaceHitPlane.m_Distance;
        goto code_?;
      }
    }
    else {
      pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
      TransformEx::TransformEx_Align
                ((Quaternion *)&stack0xffffff90,pTVar27,*pVVar14,snapConfig.AlignmentAxis,
                 (MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_00.NoVolumeSize.x = fVar20;
      queryConfig_00.ObjectTypes = (int32_t)fVar23;
      queryConfig_00.NoVolumeSize.y = (float)uVar21;
      queryConfig_00.NoVolumeSize.z = (float)puVar22;
      pOVar28 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                           ((OBB *)&stack0xfffffe60,root,queryConfig_00,(MethodInfo *)0x0);
      fVar6 = (pOVar28->_size).x;
      fVar8 = (pOVar28->_size).y;
      fVar3 = (pOVar28->_size).z;
      fVar4 = (pOVar28->_center).x;
      fVar9 = (pOVar28->_center).y;
      fVar10 = (pOVar28->_center).z;
      fVar29 = (pOVar28->_rotation).x;
      uVar21._4_4_ = (pOVar28->_rotation).y;
      uVar53 = (pOVar28->_rotation).z;
      fVar5 = (pOVar28->_rotation).w;
      if ((char)*(undefined4 *)&pOVar28->_isValid == '\0') goto code_?;
      pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
      uVar111 = pVVar14->x;
      uVar112 = pVVar14->y;
      fVar30 = (float)((uint)pVVar14->z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      uVar74._4_4_ =
           (float)(uVar112 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                  );
      uVar74._0_4_ =
           (float)(uVar111 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                  );
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter_00.y = fVar9;
      boxCenter_00.x = fVar4;
      boxCenter_00.z = fVar10;
      boxSize_00.y = fVar8;
      boxSize_00.x = fVar6;
      boxSize_00.z = fVar3;
      boxRotation_00.y = uVar21._4_4_;
      boxRotation_00.x = fVar29;
      boxRotation_00.z = (float)uVar53;
      boxRotation_00.w = fVar5;
      direction_00.z = fVar30;
      direction_00.x = (float)uVar74;
      direction_00.y = SUB84(uVar74,4);
      BVar45 = BoxMath::BoxMath_GetMostAlignedFace
                          (boxCenter_00,boxSize_00,boxRotation_00,direction_00,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar46 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                           (root,BVar45,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar46 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar46->fields)._size != 0) {
        Vector3Ex::Vector3Ex_GetPointCloudCenter
                  ((Vector3 *)&stack0xffffffe0,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar46,
                   (MethodInfo *)0x0);
        TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                  ((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
        TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                  ((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
        func_?();
        if (pOVar26 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
        iVar54 = func_?();
        if (iVar54 != 0) {
          uVar113 = *(undefined8 *)(iVar54 + 0x1c);
          fVar5 = *(float *)(iVar54 + 0x24);
          fVar6 = (float)((ulonglong)uVar113 >> 0x20);
          if (cVar25 != '\0') {
            if (snapConfig.SurfaceObject == (GameObject *)0x0) goto code_?;
            terrain = (Terrain *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (snapConfig.SurfaceObject,
                                 UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                                );
            pVVar14 = TerrainEx::TerrainEx_GetInterpolatedNormal
                                ((Vector3 *)&stack0xffffffe0,terrain,*(Vector3 *)(iVar54 + 0xc),
                                 (MethodInfo *)0x0);
            uVar113._0_4_ = pVVar14->x;
            uVar113._4_4_ = pVVar14->y;
            fVar5 = pVVar14->z;
            fVar6 = (float)uVar113._4_4_;
          }
          normAlignVector_00.z = fVar5;
          normAlignVector_00.x = (float)(int)uVar113;
          normAlignVector_00.y = (float)(int)((ulonglong)uVar113 >> 0x20);
          pQVar114 = TransformEx::TransformEx_Align
                               ((Quaternion *)&stack0xffffff90,pTVar27,normAlignVector_00,
                                snapConfig.AlignmentAxis,(MethodInfo *)0x0);
          fVar8 = pQVar114->x;
          fVar3 = pQVar114->y;
          fVar4 = pQVar114->z;
          fVar9 = pQVar114->w;
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_03.NoVolumeSize.x = fVar20;
          queryConfig_03.ObjectTypes = (int32_t)fVar23;
          queryConfig_03.NoVolumeSize.y = (float)uVar21;
          queryConfig_03.NoVolumeSize.z = (float)puVar22;
          pOVar28 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                               ((OBB *)&stack0xfffffe60,root,queryConfig_03,(MethodInfo *)0x0);
          fVar20 = (pOVar28->_center).y;
          uVar21._0_4_ = (pOVar28->_center).z;
          fVar29 = (pOVar28->_rotation).x;
          uVar21._4_4_ = (pOVar28->_rotation).y;
          fVar10 = (pOVar28->_rotation).z;
          fVar23 = (pOVar28->_rotation).w;
          if (pTVar27 == (Transform *)0x0) goto code_?;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffe0,pTVar27,(MethodInfo *)0x0);
          quat.y = fVar3;
          quat.x = fVar8;
          quat.z = fVar4;
          quat.w = fVar9;
          QuaternionEx::QuaternionEx_RotatePoints(quat,pLVar46,*pVVar14,(MethodInfo *)0x0);
          pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                              ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
          fVar8 = 0.0;
          fVar3 = 0.0;
          fVar4 = 0.0;
          fVar9 = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                    ((Plane *)&stack0xffffff90,*pVVar14,*(Vector3 *)(iVar54 + 0xc),
                     (MethodInfo *)0x0);
          obb_03._size.y = fVar4;
          obb_03._size.x = fVar3;
          obb_03._size.z = fVar9;
          obb_03._center.x = 0.1;
          obb_03._center.y = fVar20;
          obb_03._center.z = (float)uVar21;
          obb_03._rotation.x = fVar29;
          obb_03._rotation.y = uVar21._4_4_;
          obb_03._rotation.z = fVar10;
          obb_03._rotation.w = fVar23;
          obb_03._isValid = pOVar28->_isValid;
          obb_03._41_3_ = *(undefined3 *)&pOVar28->field_0x29;
          PVar13.m_Normal.y = fVar3;
          PVar13.m_Normal.x = fVar8;
          PVar13.m_Normal.z = fVar4;
          PVar13.m_Distance = fVar9;
          pVVar14 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                              ((Vector3 *)&stack0xffffffe0,obb_03,PVar13,0.1,(MethodInfo *)0x0);
          fVar20 = 0.0;
          fVar8 = pVVar14->x;
          fVar3 = pVVar14->y;
          fVar4 = pVVar14->z;
          fVar9 = fVar8;
          fVar10 = fVar3;
          fVar23 = fVar4;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff60,pTVar27,(MethodInfo *)0x0);
          uVar115 = pVVar14->x;
          uVar116 = pVVar14->y;
          value_07.y = (float)uVar116 + fVar10;
          value_07.x = (float)uVar115 + fVar9;
          value_07.z = pVVar14->z + fVar23;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar27,value_07,(MethodInfo *)0x0);
          offset_00.y = fVar3;
          offset_00.x = fVar8;
          offset_00.z = fVar4;
          Vector3Ex::Vector3Ex_OffsetPoints(pLVar46,offset_00,(MethodInfo *)0x0);
          pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                              ((Vector3 *)&stack0xffffff60,(MethodInfo *)0x0);
          uVar117 = pVVar14->x;
          uVar118 = pVVar14->y;
          uVar82 = uVar117 ^ 
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          embedDirection_00.y =
               (float)(uVar118 ^ 
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          embedDirection_00.x = (float)uVar82;
          embedDirection_00.z =
               (float)((uint)pVVar14->z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          pVVar14 = ObjectSurfaceSnap_CalculateEmbedVector
                              ((Vector3 *)&stack0xffffff60,pLVar46,snapConfig.SurfaceObject,
                               embedDirection_00,snapConfig.SurfaceType,(MethodInfo *)0x0);
          fVar3 = 0.0;
          uVar119._0_4_ = pVVar14->x;
          uVar119._4_4_ = pVVar14->y;
          fVar8 = pVVar14->z;
          pTVar7 = pTVar27;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff60,pTVar27,(MethodInfo *)0x0);
          uVar120 = pVVar14->x;
          uVar121 = pVVar14->y;
          value_14.y = (float)uVar121 + snapConfig.OffsetFromSurface * fVar3 + SUB84(uVar119,4);
          value_14.x = (float)uVar120 +
                       snapConfig.OffsetFromSurface * (float)pTVar7 + (float)uVar119;
          value_14.z = pVVar14->z + snapConfig.OffsetFromSurface * fVar5 + fVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar27,value_14,(MethodInfo *)0x0);
          snapConfig.AlignmentAxis = *(int32_t *)(uVar82 + 0x14);
          root = (GameObject *)*(undefined8 *)(uVar82 + 0xc);
          snapConfig._0_4_ = SUB84((ulonglong)*(undefined8 *)(uVar82 + 0xc) >> 0x20,0);
          uVar21 = CONCAT44(fVar6,fVar20);
code_?:
          pVVar14 = (Vector3 *)0x0;
          puVar22 = (undefined *)0x0;
          snapConfig.SurfaceHitPlane.m_Normal.y = 0.0;
          snapConfig.SurfaceHitPlane.m_Normal.x = 0.0;
          uVar53 = (undefined4)((ulonglong)uVar21 >> 0x20);
          fVar122 = (float)uVar53;
          __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)snapConfig.SurfaceObject;
          inPoint.y = (float)snapConfig._0_4_;
          inPoint.x = (float)root;
          inPoint.z = (float)snapConfig.AlignmentAxis;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                    ((Plane *)&stack0xffffff90,(Vector3)CONCAT84(lVar2,(float)uVar21),inPoint,
                     (MethodInfo *)0x0);
          fVar5 = *(float *)(uVar82 + 0x14);
          fVar6 = 1.4013e-45;
          uVar123 = *(undefined8 *)(uVar82 + 0xc);
          lVar2 = CONCAT44(snapConfig.SurfaceObject,uVar53);
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
  queryConfig_04.NoVolumeSize.x = fVar20;
  queryConfig_04.ObjectTypes = (int32_t)fVar23;
  queryConfig_04.NoVolumeSize.y = (float)uVar21;
  queryConfig_04.NoVolumeSize.z = (float)puVar22;
  pOVar28 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                       ((OBB *)&stack0xfffffe60,root,queryConfig_04,(MethodInfo *)0x0);
  fVar5 = (pOVar28->_size).x;
  fVar6 = (pOVar28->_size).y;
  fVar8 = (pOVar28->_size).z;
  pGVar124 = (GameObject *)(pOVar28->_center).x;
  fVar3 = (pOVar28->_center).y;
  fVar4 = (pOVar28->_center).z;
  fVar9 = (pOVar28->_rotation).x;
  fVar10 = (pOVar28->_rotation).y;
  fVar44 = (pOVar28->_rotation).z;
  fVar72 = (pOVar28->_rotation).w;
  uVar53 = *(undefined4 *)&pOVar28->_isValid;
  if ((char)uVar53 != '\0') {
    if (root != (GameObject *)0x0) {
      fVar29 = 0.0;
      pGVar125 = root;
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (root,(MethodInfo *)0x0);
      fVar71 = fVar44;
      fVar70 = fVar72;
      if (snapConfig.AlignAxis != 0) {
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xffffff90,pTVar7,VVar17,snapConfig.AlignmentAxis,
                   (MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_05.NoVolumeSize.x = fVar20;
        queryConfig_05.ObjectTypes = (int32_t)fVar23;
        queryConfig_05.NoVolumeSize.y = (float)uVar21;
        queryConfig_05.NoVolumeSize.z = (float)puVar22;
        pOVar28 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                             ((OBB *)&stack0xfffffe60,root,queryConfig_05,(MethodInfo *)0x0);
        fVar5 = (pOVar28->_size).x;
        fVar6 = (pOVar28->_size).y;
        fVar8 = (pOVar28->_size).z;
        pGVar125 = (GameObject *)(pOVar28->_center).x;
        uVar53 = *(undefined4 *)&pOVar28->_isValid;
        fVar29 = (pOVar28->_center).y;
        fVar4 = (pOVar28->_center).z;
        fVar9 = (pOVar28->_rotation).x;
        fVar10 = (pOVar28->_rotation).y;
        fVar71 = (pOVar28->_rotation).z;
        fVar70 = (pOVar28->_rotation).w;
        pGVar124 = pGVar125;
        fVar3 = fVar29;
      }
      if (pTVar7 != (Transform *)0x0) {
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff60,pTVar7,(MethodInfo *)0x0);
        fVar126 = pVVar14->x;
        fVar127 = pVVar14->y;
        fVar23 = pVVar14->z;
        obb_01._size.y = fVar6;
        obb_01._size.x = fVar5;
        obb_01._size.z = fVar8;
        obb_01._center.x = (float)pGVar124;
        obb_01._center.y = fVar3;
        obb_01._center.z = fVar4;
        obb_01._rotation.x = fVar9;
        obb_01._rotation.y = fVar10;
        obb_01._rotation.z._0_1_ = SUB41(fVar71,0);
        obb_01._rotation.z._1_2_ = (short)((uint)fVar71 >> 8);
        obb_01._rotation.z._3_1_ = (char)((uint)fVar71 >> 0x18);
        obb_01._rotation.w = fVar70;
        obb_01._40_4_ = uVar53;
        pVVar14 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xffffff60,obb_01,snapConfig.SurfaceHitPlane,
                             snapConfig.OffsetFromSurface,(MethodInfo *)0x0);
        uVar128 = pVVar14->x;
        uVar129 = pVVar14->y;
        value_03.y = (float)uVar129 + fVar127;
        value_03.x = (float)uVar128 + fVar126;
        value_03.z = pVVar14->z + fVar23;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar7,value_03,(MethodInfo *)0x0);
        fVar6 = 1.4013e-45;
        pVVar14 = (Vector3 *)&stack0xffffff60;
        puVar22 = &UNK_?;
        pt_00.y = fVar29;
        pt_00.x = (float)pGVar125;
        pt_00.z = fVar4;
        pVVar130 = PlaneEx::PlaneEx_ProjectPoint
                             (pVVar14,snapConfig.SurfaceHitPlane,pt_00,(MethodInfo *)0x0);
        uVar123._0_4_ = pVVar130->x;
        uVar123._4_4_ = pVVar130->y;
        fVar5 = pVVar130->z;
code_?:
        __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)((ulonglong)lVar2 >> 0x20);
        *(float *)__return_storage_ptr__ = fVar6;
        (__return_storage_ptr__->SittingPlane).m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        (__return_storage_ptr__->SittingPlane).m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)puVar22;
        (__return_storage_ptr__->SittingPlane).m_Distance = (float)pVVar14;
        (__return_storage_ptr__->SittingPoint).x = (float)uVar123;
        (__return_storage_ptr__->SittingPoint).y = (float)((ulonglong)uVar123 >> 0x20);
        (__return_storage_ptr__->SittingPoint).z = fVar5;
        return __return_storage_ptr__;
      }
    }
code_?:
    func_?();
    pcVar131 = (code *)swi(3);
    pOVar1 = (ObjectSurfaceSnap_SnapResult *)(*pcVar131)();
    return pOVar1;
  }
code_?:
  *(undefined4 *)pOVar1 = 0;
  (pOVar1->SittingPlane).m_Normal.x = 0.0;
  (pOVar1->SittingPlane).m_Normal.y = 0.0;
  (pOVar1->SittingPlane).m_Normal.z = 0.0;
  (pOVar1->SittingPlane).m_Distance = 0.0;
  (pOVar1->SittingPoint).x = 0.0;
  (pOVar1->SittingPoint).y = 0.0;
  (pOVar1->SittingPoint).z = 0.0;
  return pOVar1;
}

