
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
  uVar4._0_4_ = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar7 = 0.0;
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
       (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (root,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0))
    goto code_?;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,pTVar14,(MethodInfo *)0x0);
    pVVar15 = PlaneEx::PlaneEx_ProjectPoint
                         ((Vector3 *)&stack0xffffffe0,PVar13,*pVVar15,(MethodInfo *)0x0);
    uVar16 = pVVar15->x;
    uVar17 = pVVar15->y;
    VVar18.y = (float)uVar17 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
    VVar18.x = (float)uVar16 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
    VVar18.z = pVVar15->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar14,VVar18,(MethodInfo *)0x0);
    uVar4._0_4_ = 1.4013e-45;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,pTVar14,(MethodInfo *)0x0);
    fVar3 = snapConfig.SurfaceHitPlane.m_Distance;
code_?:
    uVar19._0_4_ = pVVar15->x;
    uVar19._4_4_ = pVVar15->y;
    fVar5 = pVVar15->z;
code_?:
    *(float *)__return_storage_ptr__ = (float)uVar4;
    (__return_storage_ptr__->SittingPlane).m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
    (__return_storage_ptr__->SittingPlane).m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
    (__return_storage_ptr__->SittingPlane).m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
    (__return_storage_ptr__->SittingPlane).m_Distance = fVar3;
    (__return_storage_ptr__->SittingPoint).x = (float)uVar19;
    (__return_storage_ptr__->SittingPoint).y = (float)((ulonglong)uVar19 >> 0x20);
    (__return_storage_ptr__->SittingPoint).z = fVar5;
    return __return_storage_ptr__;
  }
  cVar20 = snapConfig.SurfaceType == 3;
  fVar21 = 0.0;
  uVar4._4_4_ = 0.0;
  fVar22 = 0.0;
  fVar23 = 7.00649e-45;
  cVar24 = snapConfig.SurfaceType == 0 || snapConfig.SurfaceType == 2;
  cVar25 = snapConfig.SurfaceType == 0;
  pOVar26 = ObjectSurfaceSnap_CreateSurfaceRaycaster
                       (snapConfig.SurfaceType,snapConfig.SurfaceObject,1,(MethodInfo *)0x0);
  VVar18 = snapConfig.SurfaceHitNormal;
  if (snapConfig.SurfaceType != 4) {
    if (root == (GameObject *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (root,(MethodInfo *)0x0);
    if (snapConfig.AlignAxis == 0) {
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_02.NoVolumeSize.x = fVar21;
      queryConfig_02.ObjectTypes = (int32_t)fVar23;
      queryConfig_02.NoVolumeSize.y = uVar4._4_4_;
      queryConfig_02.NoVolumeSize.z = fVar22;
      pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                           ((OBB *)&stack0xfffffe90,root,queryConfig_02,(MethodInfo *)0x0);
      uVar4._0_4_ = (pOVar27->_size).x;
      fVar5 = (pOVar27->_size).y;
      fVar6 = (pOVar27->_size).z;
      fVar28 = (pOVar27->_center).x;
      fVar29 = (pOVar27->_center).y;
      fVar30 = (pOVar27->_center).z;
      this_00 = (ObjectSurfaceSnap_SnapResult *)(pOVar27->_rotation).x;
      fVar31 = (pOVar27->_rotation).y;
      fVar32 = (pOVar27->_rotation).z;
      fVar33 = (pOVar27->_rotation).w;
      fVar3 = *(float *)&pOVar27->_isValid;
      if (SUB41(fVar3,0) == '\0') goto code_?;
      fVar34 = snapConfig.SurfaceHitNormal.x;
      uVar35._0_4_ = (float)uVar4;
      uVar35._4_4_ = fVar5;
      fVar36 = fVar6;
      fVar37 = fVar28;
      fVar38 = fVar32;
      fVar39 = fVar33;
      if (cVar24 == '\0') {
        if (cVar20 != '\0') {
          if (snapConfig.SurfaceObject != (GameObject *)0x0) {
            puVar40 = &UNK_?;
            pOVar1 = this_00;
            pTVar41 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (snapConfig.SurfaceObject,(MethodInfo *)0x0);
            if (pTVar41 != (Transform *)0x0) {
              pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffffe0,pTVar41,(MethodInfo *)0x0);
              fVar22 = pVVar15->x;
              fVar34 = pVVar15->y;
              fVar23 = pVVar15->z;
              if (pTVar14 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe0,pTVar14,(MethodInfo *)0x0);
                puVar42 = (undefined8 *)func_?();
                fVar21 = *(float *)(puVar42 + 1);
                fVar37 = (float)*puVar42;
                fVar38 = (float)((ulonglong)*puVar42 >> 0x20);
                fVar28 = fVar37;
                fVar31 = fVar38;
                uVar35._0_4_ = fVar21;
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_lossyScale
                                     ((Vector3 *)&stack0xffffffe0,pTVar41,(MethodInfo *)0x0);
                uVar4._4_4_ = Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar15,(MethodInfo *)0x0);
                uVar4._4_4_ = uVar4._4_4_ * _UNK_?;
                fVar28 = (float)((uint)fVar28 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                );
                fVar36 = (float)((uint)fVar31 ^
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               );
                uVar35._4_4_ = (float)((uint)fVar21 ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                  pOVar1 = (ObjectSurfaceSnap_SnapResult *)&UNK_?;
                  func_?();
                }
                boxCenter_02.y = fVar28;
                boxCenter_02.x = fVar33;
                boxCenter_02.z = fVar30;
                boxSize_02.y = fVar5;
                boxSize_02.x = (float)uVar4;
                boxSize_02.z = fVar6;
                boxRotation_02.y = 0.0;
                boxRotation_02.x = (float)pOVar1;
                boxRotation_02.z = fVar32;
                boxRotation_02.w = fVar33;
                direction_02.y = fVar36;
                direction_02.x = fVar28;
                direction_02.z = uVar35._4_4_;
                BVar43 = BoxMath::BoxMath_GetMostAlignedFace
                                    (boxCenter_02,boxSize_02,boxRotation_02,direction_02,
                                     (MethodInfo *)0x0);
                if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                fVar5 = 0.001;
                puVar44 = &UNK_?;
                pLVar45 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                     (root,BVar43,0.001,0.01,(MethodInfo *)0x0);
                fVar22 = fVar5 * uVar4._4_4_ + fVar22;
                fVar23 = fVar21 * uVar4._4_4_ + fVar23;
                puVar46 = &UNK_?;
                inNormal_00.y = fVar38;
                inNormal_00.x = fVar37;
                inNormal_00.z = (float)uVar35;
                inPoint_01.y = fVar31 * uVar4._4_4_ + fVar34;
                inPoint_01.x = fVar22;
                inPoint_01.z = fVar23;
                UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                          ((Plane *)&stack0xffffff90,inNormal_00,inPoint_01,(MethodInfo *)0x0);
                obb_04._size.y = (float)puVar44;
                obb_04._size.x = (float)uVar4;
                obb_04._size.z = (float)root;
                obb_04._center.x = (float)puVar46;
                obb_04._center.y = fVar29;
                obb_04._center.z = fVar30;
                obb_04._rotation.x = (float)this_00;
                obb_04._rotation.y = (float)puVar40;
                obb_04._rotation.z = fVar30;
                obb_04._rotation.w = (float)this_00;
                obb_04._40_4_ = fVar3;
                surfacePlane_00.m_Normal.y = fVar8;
                surfacePlane_00.m_Normal.x = fVar7;
                surfacePlane_00.m_Normal.z = fVar9;
                surfacePlane_00.m_Distance = fVar10;
                pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                     ((Vector3 *)&stack0xffffffd0,obb_04,surfacePlane_00,0.0,
                                      (MethodInfo *)0x0);
                uVar35._0_4_ = pVVar15->x;
                uVar35._4_4_ = pVVar15->y;
                uVar4._0_4_ = pVVar15->z;
                uVar47 = uVar35;
                fVar5 = (float)uVar4;
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&stack0xffffff60,(Transform *)this_00,
                                      (MethodInfo *)0x0);
                uVar48 = pVVar15->x;
                uVar49 = pVVar15->y;
                value_09.y = SUB84(uVar47,4) + (float)uVar49;
                value_09.x = (float)uVar47 + (float)uVar48;
                value_09.z = fVar5 + pVVar15->z;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          ((Transform *)this_00,value_09,(MethodInfo *)0x0);
                offset_01.y = uVar35._4_4_;
                offset_01.x = (float)uVar35;
                offset_01.z = (float)uVar4;
                Vector3Ex::Vector3Ex_OffsetPoints(pLVar45,offset_01,(MethodInfo *)0x0);
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&stack0xffffffd0,(Transform *)this_00,
                                      (MethodInfo *)0x0);
                uVar50 = pVVar15->x;
                uVar51 = pVVar15->y;
                value.y = fVar31 * snapConfig.OffsetFromSurface + (float)uVar51;
                value.x = (float)puVar44 * snapConfig.OffsetFromSurface + (float)uVar50;
                value.z = fVar21 * snapConfig.OffsetFromSurface + pVVar15->z;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          ((Transform *)this_00,value,(MethodInfo *)0x0);
                *(undefined4 *)this_00 = 1;
                (this_00->SittingPlane).m_Normal.x = fVar7;
                (this_00->SittingPlane).m_Normal.y = fVar8;
                (this_00->SittingPlane).m_Normal.z = fVar9;
                (this_00->SittingPlane).m_Distance = fVar10;
                (this_00->SittingPoint).x = fVar22;
                (this_00->SittingPoint).y = fVar3;
                (this_00->SittingPoint).z = fVar23;
                return this_00;
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
      fVar7 = fVar28;
      fVar8 = fVar28;
      func_?();
      if (pOVar26 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
      uVar53 = 4;
      puVar40 = &UNK_?;
      iVar54 = func_?();
      if (iVar54 != 0) {
        obb_00._size.y = uVar35._4_4_;
        obb_00._size.x = (float)uVar35;
        obb_00._size.z = fVar36;
        obb_00._center.x = fVar37;
        obb_00._center.y = (float)puVar52;
        obb_00._center.z = fVar28;
        obb_00._rotation.x = (float)puVar40;
        obb_00._rotation.y = (float)uVar53;
        obb_00._rotation.z = fVar38;
        obb_00._rotation.w = fVar39;
        obb_00._40_4_ = fVar3;
        pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                             ((Vector3 *)&stack0xffffffe0,obb_00,*(Plane *)(iVar54 + 0x28),0.0,
                              (MethodInfo *)0x0);
        fVar36 = pVVar15->x;
        fVar37 = pVVar15->y;
        fVar3 = pVVar15->z;
        if (pTVar14 == (Transform *)0x0) goto code_?;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffb0,pTVar14,(MethodInfo *)0x0);
        uVar55 = pVVar15->x;
        uVar56 = pVVar15->y;
        value_01.y = fVar37 + (float)uVar56;
        value_01.x = fVar36 + (float)uVar55;
        value_01.z = fVar3 + pVVar15->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar14,value_01,(MethodInfo *)0x0);
        if (cVar24 != '\0') {
          fVar36 = fVar36 + fVar7;
          fVar37 = fVar37 + fVar29;
          fVar3 = fVar3 + fVar30;
          fVar9 = (float)((uint)(float)*(undefined8 *)(iVar54 + 0x1c) ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          fVar8 = (float)((uint)(float)((ulonglong)*(undefined8 *)(iVar54 + 0x1c) >> 0x20) ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          fVar7 = (float)(*(uint *)(iVar54 + 0x24) ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          boxCenter_03.y = fVar37;
          boxCenter_03.x = fVar36;
          boxCenter_03.z = fVar3;
          boxSize_03.y = fVar5;
          boxSize_03.x = (float)uVar4;
          boxSize_03.z = fVar6;
          boxRotation_03.y = fVar31;
          boxRotation_03.x = (float)this_00;
          boxRotation_03.z = fVar32;
          boxRotation_03.w = fVar33;
          direction_03.y = fVar8;
          direction_03.x = fVar9;
          direction_03.z = fVar7;
          BVar43 = BoxMath::BoxMath_GetMostAlignedFace
                              (boxCenter_03,boxSize_03,boxRotation_03,direction_03,(MethodInfo *)0x0
                              );
          if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pLVar45 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                               (root,BVar43,0.001,0.01,(MethodInfo *)0x0);
          pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                               ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
          uVar57 = pVVar15->x;
          uVar58 = pVVar15->y;
          embedDirection.y =
               (float)(uVar58 ^ 
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          embedDirection.x =
               (float)(uVar57 ^ 
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          embedDirection.z =
               (float)((uint)pVVar15->z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          pVVar15 = ObjectSurfaceSnap_CalculateEmbedVector
                               ((Vector3 *)&stack0xffffffd0,pLVar45,snapConfig.SurfaceObject,
                                embedDirection,snapConfig.SurfaceType,(MethodInfo *)0x0);
          uVar59._0_4_ = pVVar15->x;
          uVar59._4_4_ = pVVar15->y;
          fVar3 = pVVar15->z;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffb0,pTVar14,(MethodInfo *)0x0);
          uVar60 = pVVar15->x;
          uVar61 = pVVar15->y;
          value_02.y = SUB84(uVar59,4) + (float)uVar61;
          value_02.x = (float)uVar59 + (float)uVar60;
          value_02.z = fVar3 + pVVar15->z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar14,value_02,(MethodInfo *)0x0);
        }
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffe0,pTVar14,(MethodInfo *)0x0);
        uVar62 = pVVar15->x;
        uVar63 = pVVar15->y;
        value_05.y = snapConfig.OffsetFromSurface *
                     (float)((ulonglong)*(undefined8 *)(iVar54 + 0x1c) >> 0x20) + (float)uVar63;
        value_05.x = snapConfig.OffsetFromSurface * (float)*(undefined8 *)(iVar54 + 0x1c) +
                     (float)uVar62;
        value_05.z = snapConfig.OffsetFromSurface * *(float *)(iVar54 + 0x24) + pVVar15->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar14,value_05,(MethodInfo *)0x0);
        fVar5 = *(float *)(iVar54 + 0x14);
        uVar4._0_4_ = 1.4013e-45;
        snapConfig.SurfaceHitPlane.m_Normal.x = *(float *)(iVar54 + 0x28);
        snapConfig.SurfaceHitPlane.m_Normal.y = *(float *)(iVar54 + 0x2c);
        snapConfig.SurfaceHitPlane.m_Normal.z = *(float *)(iVar54 + 0x30);
        fVar3 = *(float *)(iVar54 + 0x34);
        uVar19 = *(undefined8 *)(iVar54 + 0xc);
        goto code_?;
      }
      if ((cVar20 == '\0') && (snapConfig.SurfaceType == 1)) {
        obb._size.y = uVar35._4_4_;
        obb._size.x = (float)uVar35;
        obb._size.z = fVar36;
        obb._center.x = fVar37;
        obb._center.y = (float)puVar52;
        obb._center.z = fVar28;
        obb._rotation.x = (float)puVar40;
        obb._rotation.y = (float)uVar53;
        obb._rotation.z = fVar38;
        obb._rotation.w = fVar39;
        obb._40_4_ = fVar3;
        pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                             ((Vector3 *)&stack0xffffffd0,obb,PVar13,0.0,(MethodInfo *)0x0);
        uVar64._0_4_ = pVVar15->x;
        uVar64._4_4_ = pVVar15->y;
        fVar3 = pVVar15->z;
        if (pTVar14 == (Transform *)0x0) goto code_?;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffb0,pTVar14,(MethodInfo *)0x0);
        uVar65 = pVVar15->x;
        uVar66 = pVVar15->y;
        value_00.y = SUB84(uVar64,4) + (float)uVar66;
        value_00.x = (float)uVar64 + (float)uVar65;
        value_00.z = fVar3 + pVVar15->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar14,value_00,(MethodInfo *)0x0);
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffd0,pTVar14,(MethodInfo *)0x0);
        uVar67 = pVVar15->x;
        uVar68 = pVVar15->y;
        value_04.y = snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface + (float)uVar68;
        value_04.x = fVar34 * snapConfig.OffsetFromSurface + (float)uVar67;
        value_04.z = snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface + pVVar15->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar14,value_04,(MethodInfo *)0x0);
        uVar4._0_4_ = 0.0;
        pt_01.y = fVar29;
        pt_01.x = fVar7;
        pt_01.z = fVar8;
        pVVar15 = PlaneEx::PlaneEx_ProjectPoint
                             ((Vector3 *)&stack0xffffffe0,PVar13,pt_01,(MethodInfo *)0x0);
        fVar3 = snapConfig.SurfaceHitPlane.m_Distance;
        goto code_?;
      }
    }
    else if (cVar24 == '\0') {
      if (cVar20 != '\0') {
        if ((snapConfig.SurfaceObject != (GameObject *)0x0) &&
           (pTVar41 = pTVar14,
           this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (snapConfig.SurfaceObject,(MethodInfo *)0x0), this != (Transform *)0x0))
        {
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
          fVar8 = pVVar15->x;
          fVar9 = pVVar15->y;
          fVar7 = pVVar15->z;
          if (pTVar14 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffb0,pTVar14,(MethodInfo *)0x0);
            puVar42 = (undefined8 *)func_?();
            fVar10 = *(float *)(puVar42 + 1);
            fVar32 = (float)*puVar42;
            fVar33 = (float)((ulonglong)*puVar42 >> 0x20);
            fVar29 = fVar32;
            fVar30 = fVar33;
            fVar31 = fVar10;
            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                 ((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
            fVar28 = Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar15,(MethodInfo *)0x0);
            fVar28 = fVar28 * _UNK_?;
            normAlignVector.y = fVar33;
            normAlignVector.x = fVar32;
            normAlignVector.z = fVar31;
            TransformEx::TransformEx_Align
                      ((Quaternion *)&stack0xffffff90,pTVar14,normAlignVector,
                       snapConfig.AlignmentAxis,(MethodInfo *)0x0);
            if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            queryConfig_01.NoVolumeSize.x = fVar21;
            queryConfig_01.ObjectTypes = (int32_t)fVar23;
            queryConfig_01.NoVolumeSize.y = uVar4._4_4_;
            queryConfig_01.NoVolumeSize.z = fVar22;
            pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                                 ((OBB *)&stack0xfffffe60,root,queryConfig_01,(MethodInfo *)0x0);
            uVar35._0_4_ = (pOVar27->_center).y;
            uVar35._4_4_ = (pOVar27->_rotation).x;
            fVar36 = (pOVar27->_rotation).y;
            fVar23 = (pOVar27->_size).x;
            uVar4._4_4_ = (pOVar27->_size).y;
            fVar22 = (pOVar27->_size).z;
            fVar34 = (pOVar27->_center).x;
            uVar69 = (pOVar27->_rotation).z;
            fVar21 = (pOVar27->_rotation).w;
            uVar53 = *(undefined4 *)&pOVar27->_isValid;
            if ((char)uVar53 != '\0') {
              fVar70 = (float)((uint)fVar29 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
              fVar71 = (float)((uint)fVar30 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
              fVar39 = (float)((uint)fVar10 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
              fVar37 = fVar36;
              fVar38 = fVar34;
              if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              uVar72 = 0;
              boxCenter_01.y = (float)uVar35;
              boxCenter_01.x = fVar34;
              boxCenter_01.z = fVar39;
              boxSize_01.y = uVar4._4_4_;
              boxSize_01.x = fVar23;
              boxSize_01.z = fVar22;
              boxRotation_01.y = fVar37;
              boxRotation_01.x = uVar35._4_4_;
              boxRotation_01.z = (float)uVar69;
              boxRotation_01.w = fVar21;
              direction_01.y = fVar71;
              direction_01.x = fVar70;
              direction_01.z = fVar39;
              fVar21 = fVar23;
              fVar34 = uVar4._4_4_;
              BVar43 = BoxMath::BoxMath_GetMostAlignedFace
                                  (boxCenter_01,boxSize_01,boxRotation_01,direction_01,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pLVar45 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                   (root,BVar43,0.001,0.01,(MethodInfo *)0x0);
              fVar9 = fVar9 + fVar30 * fVar28;
              inNormal.y = fVar33;
              inNormal.x = fVar32;
              inNormal.z = fVar31;
              inPoint_00.y = fVar9;
              inPoint_00.x = fVar8 + fVar29 * fVar28;
              inPoint_00.z = fVar7 + fVar10 * fVar28;
              UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                        ((Plane *)&stack0xffffff40,inNormal,inPoint_00,(MethodInfo *)0x0);
              obb_02._size.y = fVar34;
              obb_02._size.x = fVar21;
              obb_02._size.z = fVar22;
              obb_02._center.x = fVar38;
              obb_02._center.y = fVar71;
              obb_02._center.z = fVar39;
              obb_02._rotation.x = (float)uVar72;
              obb_02._rotation.y = fVar36;
              obb_02._rotation.z = fVar23;
              obb_02._rotation.w = uVar4._4_4_;
              obb_02._40_4_ = uVar53;
              surfacePlane.m_Normal.y = (float)uVar4;
              surfacePlane.m_Normal.x = fVar3;
              surfacePlane.m_Normal.z = fVar5;
              surfacePlane.m_Distance = fVar6;
              pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                   ((Vector3 *)&stack0xffffffd0,obb_02,surfacePlane,0.0,
                                    (MethodInfo *)0x0);
              fVar8 = 0.0;
              uVar4._0_4_ = pVVar15->x;
              uVar4._4_4_ = pVVar15->y;
              fVar3 = pVVar15->z;
              pTVar14 = pTVar41;
              uVar47 = uVar4;
              fVar7 = fVar3;
              pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffff60,pTVar41,(MethodInfo *)0x0);
              uVar73 = pVVar15->x;
              uVar74 = pVVar15->y;
              value_06.y = SUB84(uVar47,4) + (float)uVar74;
              value_06.x = (float)uVar47 + (float)uVar73;
              value_06.z = fVar7 + pVVar15->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar14,value_06,(MethodInfo *)0x0);
              offset.y = uVar4._4_4_;
              offset.x = (float)uVar4;
              offset.z = fVar3;
              Vector3Ex::Vector3Ex_OffsetPoints(pLVar45,offset,(MethodInfo *)0x0);
              pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffffd0,pTVar14,(MethodInfo *)0x0);
              uVar75 = pVVar15->x;
              uVar76 = pVVar15->y;
              fVar3 = pVVar15->z + fVar10 * snapConfig.OffsetFromSurface;
              uVar4._0_4_ = (float)uVar75 + fVar29 * snapConfig.OffsetFromSurface;
              value_08.y = (float)uVar76 + fVar30 * snapConfig.OffsetFromSurface;
              value_08.x = (float)uVar4;
              value_08.z = fVar3;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar14,value_08,(MethodInfo *)0x0);
              *(undefined4 *)pOVar1 = 1;
              (pOVar1->SittingPlane).m_Normal.x = (float)pTVar41;
              (pOVar1->SittingPlane).m_Normal.y = fVar8;
              (pOVar1->SittingPlane).m_Normal.z = fVar5;
              (pOVar1->SittingPlane).m_Distance = fVar6;
              (pOVar1->SittingPoint).x = fVar3;
              (pOVar1->SittingPoint).y = fVar9;
              (pOVar1->SittingPoint).z = (float)uVar4;
              return pOVar1;
            }
            goto code_?;
          }
        }
        goto code_?;
      }
      TransformEx::TransformEx_Align
                ((Quaternion *)&stack0xffffff90,pTVar14,VVar18,snapConfig.AlignmentAxis,
                 (MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig.NoVolumeSize.x = fVar21;
      queryConfig.ObjectTypes = (int32_t)fVar23;
      queryConfig.NoVolumeSize.y = uVar4._4_4_;
      queryConfig.NoVolumeSize.z = fVar22;
      pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                           ((OBB *)&stack0xfffffe60,root,queryConfig,(MethodInfo *)0x0);
      fVar3 = (pOVar27->_size).x;
      uVar4._0_4_ = (pOVar27->_size).y;
      fVar6 = (pOVar27->_size).z;
      fVar7 = (pOVar27->_center).x;
      fVar8 = (pOVar27->_center).y;
      fVar9 = (pOVar27->_center).z;
      fVar10 = (pOVar27->_rotation).x;
      fVar28 = (pOVar27->_rotation).y;
      uVar72 = (pOVar27->_rotation).z;
      fVar5 = (pOVar27->_rotation).w;
      if ((char)*(undefined4 *)&pOVar27->_isValid == '\0') goto code_?;
      fVar29 = (float)((uint)snapConfig.SurfaceHitNormal.z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      uVar77._4_4_ =
           (float)((uint)snapConfig.SurfaceHitNormal.y ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      uVar77._0_4_ =
           (float)((uint)snapConfig.SurfaceHitNormal.x ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter.y = fVar8;
      boxCenter.x = fVar7;
      boxCenter.z = fVar9;
      boxSize.y = (float)uVar4;
      boxSize.x = fVar3;
      boxSize.z = fVar6;
      boxRotation.y = fVar28;
      boxRotation.x = fVar10;
      boxRotation.z = (float)uVar72;
      boxRotation.w = fVar5;
      direction.z = fVar29;
      direction.x = (float)uVar77;
      direction.y = SUB84(uVar77,4);
      BVar43 = BoxMath::BoxMath_GetMostAlignedFace
                          (boxCenter,boxSize,boxRotation,direction,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar45 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                           (root,BVar43,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar45 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar45->fields)._size != 0) {
        pVVar15 = Vector3Ex::Vector3Ex_GetPointCloudCenter
                             ((Vector3 *)&stack0xffffffd0,
                              (IEnumerable_1_UnityEngine_Vector3_ *)pLVar45,(MethodInfo *)0x0);
        fVar28 = pVVar15->x;
        fVar29 = pVVar15->y;
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
        pAVar78 = ObjectBounds::ObjectBounds_CalcMeshModelAABB
                             ((AABB *)&stack0xffffff30,snapConfig.SurfaceObject,(MethodInfo *)0x0);
        if ((char)*(undefined4 *)&pAVar78->_isValid != '\0') {
          if ((snapConfig.SurfaceObject == (GameObject *)0x0) ||
             (pTVar41 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(snapConfig.SurfaceObject,(MethodInfo *)0x0),
             pTVar41 == (Transform *)0x0)) goto code_?;
          pMVar79 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                     Transform_get_localToWorldMatrix
                               ((Matrix4x4 *)&stack0xfffffe50,pTVar41,(MethodInfo *)0x0);
          transformMatrix.m02._1_2_ = (short)((uint)pMVar79->m02 >> 8);
          transformMatrix._0_33_ = *(undefined1 (*) [33])pMVar79;
          transformMatrix.m02._3_1_ = (char)((uint)pMVar79->m02 >> 0x18);
          transformMatrix.m12 = pMVar79->m12;
          transformMatrix.m22 = pMVar79->m22;
          transformMatrix.m32 = pMVar79->m32;
          transformMatrix.m03 = pMVar79->m03;
          transformMatrix.m13 = pMVar79->m13;
          transformMatrix.m23 = pMVar79->m23;
          transformMatrix.m33 = pMVar79->m33;
          AABB::AABB_Transform((AABB *)&stack0xffffff80,transformMatrix,(MethodInfo *)0x0);
        }
        OBB::OBB_get_Extents((Vector3 *)&stack0xffffffd0,(OBB *)&stack0xfffffee8,(MethodInfo *)0x0);
        func_?();
        fVar3 = 0.0;
        func_?();
        if (pOVar26 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
        uVar80 = func_?();
        uVar4._0_4_ = 0.0;
        if (uVar80 != 0) {
          fVar5 = *(float *)(uVar80 + 0x24);
          pVVar15 = (Vector3 *)(uVar80 + 0x1c);
          fVar30 = pVVar15->x;
          fVar31 = pVVar15->y;
          fVar6 = fVar30;
          fVar7 = fVar31;
          TransformEx::TransformEx_Align
                    ((Quaternion *)&stack0xffffff90,pTVar14,*pVVar15,snapConfig.AlignmentAxis,
                     (MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_07.NoVolumeSize.x = (float)uVar4;
          queryConfig_07.ObjectTypes = snapConfig.AlignmentAxis;
          queryConfig_07.NoVolumeSize.y = fVar3;
          queryConfig_07.NoVolumeSize.z = fVar22;
          pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                               ((OBB *)&stack0xfffffe60,root,queryConfig_07,(MethodInfo *)0x0);
          uVar81 = (pOVar27->_rotation).w;
          uVar82 = (pOVar27->_size).x;
          uVar83 = (pOVar27->_size).y;
          uVar84 = (pOVar27->_size).z;
          obb_06._size.z = (float)uVar84;
          obb_06._size.y = (float)uVar83;
          obb_06._size.x = (float)uVar82;
          uVar85 = (pOVar27->_center).x;
          uVar86 = (pOVar27->_center).y;
          uVar87 = (pOVar27->_center).z;
          obb_06._center.z = (float)uVar87;
          obb_06._center.y = (float)uVar86;
          obb_06._center.x = (float)uVar85;
          uVar88 = (pOVar27->_rotation).x;
          uVar89 = (pOVar27->_rotation).y;
          uVar90 = (pOVar27->_rotation).z;
          obb_06._rotation.z = (float)uVar90;
          obb_06._rotation.y = (float)uVar89;
          obb_06._rotation.x = (float)uVar88;
          snapConfig.SurfaceObject = *(GameObject **)&pOVar27->_isValid;
          obb_06._rotation.w = (float)uVar81;
          obb_06._40_4_ = snapConfig.SurfaceObject;
          pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                               ((Vector3 *)&stack0xffffffe0,obb_06,*(Plane *)(uVar80 + 0x28),0.0,
                                (MethodInfo *)0x0);
          fVar3 = pVVar15->z;
          if (pTVar14 == (Transform *)0x0) goto code_?;
          uVar4._0_4_ = 0.0;
          pTVar41 = pTVar14;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffff60,pTVar14,(MethodInfo *)0x0);
          uVar91 = pVVar15->x;
          uVar92 = pVVar15->y;
          value_11.y = (float)uVar92 + (float)uVar4;
          value_11.x = (float)uVar91 + (float)pTVar41;
          value_11.z = pVVar15->z + fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar14,value_11,(MethodInfo *)0x0);
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd0,pTVar14,(MethodInfo *)0x0);
          uVar93 = pVVar15->x;
          uVar94 = pVVar15->y;
          value_13.y = (float)uVar94 + snapConfig.OffsetFromSurface * fVar7;
          value_13.x = (float)uVar93 + snapConfig.OffsetFromSurface * fVar6;
          value_13.z = pVVar15->z + snapConfig.OffsetFromSurface * fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar14,value_13,(MethodInfo *)0x0);
          snapConfig.AlignmentAxis = *(int32_t *)(uVar80 + 0x14);
          root = (GameObject *)*(undefined8 *)(uVar80 + 0xc);
          snapConfig._0_4_ = SUB84((ulonglong)*(undefined8 *)(uVar80 + 0xc) >> 0x20,0);
          uVar47 = CONCAT44(fVar31,fVar30);
          goto code_?;
        }
        fVar5 = (float)snapConfig.AlignmentAxis;
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xffffff90,pTVar14,VVar18,snapConfig.AlignmentAxis,
                   (MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_06.NoVolumeSize.x = (float)uVar4;
        queryConfig_06.ObjectTypes = (int32_t)fVar5;
        queryConfig_06.NoVolumeSize.y = fVar3;
        queryConfig_06.NoVolumeSize.z = fVar22;
        pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                             ((OBB *)&stack0xfffffe60,root,queryConfig_06,(MethodInfo *)0x0);
        uVar95 = (pOVar27->_rotation).w;
        uVar96 = (pOVar27->_size).x;
        uVar97 = (pOVar27->_size).y;
        uVar98 = (pOVar27->_size).z;
        obb_05._size.z = (float)uVar98;
        obb_05._size.y = (float)uVar97;
        obb_05._size.x = (float)uVar96;
        uVar99 = (pOVar27->_center).x;
        uVar100 = (pOVar27->_center).y;
        uVar101 = (pOVar27->_center).z;
        obb_05._center.z = (float)uVar101;
        obb_05._center.y = (float)uVar100;
        obb_05._center.x = (float)uVar99;
        uVar102 = (pOVar27->_rotation).x;
        uVar103 = (pOVar27->_rotation).y;
        uVar104 = (pOVar27->_rotation).z;
        obb_05._rotation.z = (float)uVar104;
        obb_05._rotation.y = (float)uVar103;
        obb_05._rotation.x = (float)uVar102;
        fVar3 = *(float *)&pOVar27->_isValid;
        obb_05._rotation.w = (float)uVar95;
        obb_05._40_4_ = fVar3;
        pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                             ((Vector3 *)&stack0xffffffe0,obb_05,PVar13,0.0,(MethodInfo *)0x0);
        uVar4._0_4_ = pVVar15->z;
        if (pTVar14 == (Transform *)0x0) goto code_?;
        fVar5 = 0.0;
        pTVar41 = pTVar14;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffb0,pTVar14,(MethodInfo *)0x0);
        uVar105 = pVVar15->x;
        uVar106 = pVVar15->y;
        value_10.y = (float)uVar106 + fVar5;
        value_10.x = (float)uVar105 + (float)pTVar41;
        value_10.z = pVVar15->z + (float)uVar4;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar14,value_10,(MethodInfo *)0x0);
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffd0,pTVar14,(MethodInfo *)0x0);
        uVar107 = pVVar15->x;
        uVar108 = pVVar15->y;
        value_12.y = (float)uVar108 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
        value_12.x = (float)uVar107 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
        value_12.z = pVVar15->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar14,value_12,(MethodInfo *)0x0);
        uVar4._0_4_ = 1.4013e-45;
        pt.y = fVar29;
        pt.x = fVar28;
        pt.z = fVar3;
        fVar3 = snapConfig.SurfaceHitPlane.m_Distance;
        pVVar15 = PlaneEx::PlaneEx_ProjectPoint
                             ((Vector3 *)&stack0xffffffe0,snapConfig.SurfaceHitPlane,pt,
                              (MethodInfo *)0x0);
        __return_storage_ptr__ =
             (ObjectSurfaceSnap_SnapResult *)snapConfig.SurfaceHitPlane.m_Distance;
        goto code_?;
      }
    }
    else {
      pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                           ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
      TransformEx::TransformEx_Align
                ((Quaternion *)&stack0xffffff90,pTVar14,*pVVar15,snapConfig.AlignmentAxis,
                 (MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_00.NoVolumeSize.x = fVar21;
      queryConfig_00.ObjectTypes = (int32_t)fVar23;
      queryConfig_00.NoVolumeSize.y = uVar4._4_4_;
      queryConfig_00.NoVolumeSize.z = fVar22;
      pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                           ((OBB *)&stack0xfffffe60,root,queryConfig_00,(MethodInfo *)0x0);
      uVar4._0_4_ = (pOVar27->_size).x;
      fVar5 = (pOVar27->_size).y;
      fVar6 = (pOVar27->_size).z;
      fVar7 = (pOVar27->_center).x;
      fVar8 = (pOVar27->_center).y;
      fVar9 = (pOVar27->_center).z;
      fVar10 = (pOVar27->_rotation).x;
      fVar28 = (pOVar27->_rotation).y;
      uVar53 = (pOVar27->_rotation).z;
      fVar3 = (pOVar27->_rotation).w;
      if ((char)*(undefined4 *)&pOVar27->_isValid == '\0') goto code_?;
      pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                           ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
      uVar109 = pVVar15->x;
      uVar110 = pVVar15->y;
      fVar29 = (float)((uint)pVVar15->z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      uVar47._4_4_ =
           (float)(uVar110 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                  );
      uVar47._0_4_ =
           (float)(uVar109 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                  );
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter_00.y = fVar8;
      boxCenter_00.x = fVar7;
      boxCenter_00.z = fVar9;
      boxSize_00.y = fVar5;
      boxSize_00.x = (float)uVar4;
      boxSize_00.z = fVar6;
      boxRotation_00.y = fVar28;
      boxRotation_00.x = fVar10;
      boxRotation_00.z = (float)uVar53;
      boxRotation_00.w = fVar3;
      direction_00.z = fVar29;
      direction_00.x = (float)uVar47;
      direction_00.y = SUB84(uVar47,4);
      BVar43 = BoxMath::BoxMath_GetMostAlignedFace
                          (boxCenter_00,boxSize_00,boxRotation_00,direction_00,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar45 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                           (root,BVar43,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar45 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar45->fields)._size != 0) {
        Vector3Ex::Vector3Ex_GetPointCloudCenter
                  ((Vector3 *)&stack0xffffffe0,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar45,
                   (MethodInfo *)0x0);
        TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                  ((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
        TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                  ((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
        func_?();
        if (pOVar26 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
        iVar54 = func_?();
        if (iVar54 != 0) {
          uVar111 = *(undefined8 *)(iVar54 + 0x1c);
          fVar3 = *(float *)(iVar54 + 0x24);
          uVar4._0_4_ = (float)uVar111;
          fVar5 = (float)((ulonglong)uVar111 >> 0x20);
          if (cVar25 != '\0') {
            if (snapConfig.SurfaceObject == (GameObject *)0x0) goto code_?;
            terrain = (Terrain *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (snapConfig.SurfaceObject,
                                 UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                                );
            pVVar15 = TerrainEx::TerrainEx_GetInterpolatedNormal
                                 ((Vector3 *)&stack0xffffffe0,terrain,*(Vector3 *)(iVar54 + 0xc),
                                  (MethodInfo *)0x0);
            uVar111._0_4_ = pVVar15->x;
            uVar111._4_4_ = pVVar15->y;
            fVar3 = pVVar15->z;
            uVar4._0_4_ = (float)(undefined4)uVar111;
            fVar5 = (float)uVar111._4_4_;
          }
          normAlignVector_00.z = fVar3;
          normAlignVector_00.x = (float)(int)uVar111;
          normAlignVector_00.y = (float)(int)((ulonglong)uVar111 >> 0x20);
          pQVar112 = TransformEx::TransformEx_Align
                               ((Quaternion *)&stack0xffffff90,pTVar14,normAlignVector_00,
                                snapConfig.AlignmentAxis,(MethodInfo *)0x0);
          fVar6 = pQVar112->x;
          fVar7 = pQVar112->y;
          fVar8 = pQVar112->z;
          fVar9 = pQVar112->w;
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_03.NoVolumeSize.x = fVar21;
          queryConfig_03.ObjectTypes = (int32_t)fVar23;
          queryConfig_03.NoVolumeSize.y = uVar4._4_4_;
          queryConfig_03.NoVolumeSize.z = fVar22;
          pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                               ((OBB *)&stack0xfffffe60,root,queryConfig_03,(MethodInfo *)0x0);
          fVar21 = (pOVar27->_center).y;
          uVar4._4_4_ = (pOVar27->_center).z;
          fVar22 = (pOVar27->_rotation).x;
          fVar28 = (pOVar27->_rotation).y;
          fVar10 = (pOVar27->_rotation).z;
          fVar23 = (pOVar27->_rotation).w;
          if (pTVar14 == (Transform *)0x0) goto code_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffe0,pTVar14,(MethodInfo *)0x0);
          quat.y = fVar7;
          quat.x = fVar6;
          quat.z = fVar8;
          quat.w = fVar9;
          QuaternionEx::QuaternionEx_RotatePoints(quat,pLVar45,*pVVar15,(MethodInfo *)0x0);
          pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                               ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
          fVar6 = 0.0;
          fVar7 = 0.0;
          fVar8 = 0.0;
          fVar9 = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                    ((Plane *)&stack0xffffff90,*pVVar15,*(Vector3 *)(iVar54 + 0xc),
                     (MethodInfo *)0x0);
          obb_03._size.y = fVar8;
          obb_03._size.x = fVar7;
          obb_03._size.z = fVar9;
          obb_03._center.x = 0.1;
          obb_03._center.y = fVar21;
          obb_03._center.z = uVar4._4_4_;
          obb_03._rotation.x = fVar22;
          obb_03._rotation.y = fVar28;
          obb_03._rotation.z = fVar10;
          obb_03._rotation.w = fVar23;
          obb_03._isValid = pOVar27->_isValid;
          obb_03._41_3_ = *(undefined3 *)&pOVar27->field_0x29;
          PVar13.m_Normal.y = fVar7;
          PVar13.m_Normal.x = fVar6;
          PVar13.m_Normal.z = fVar8;
          PVar13.m_Distance = fVar9;
          pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                               ((Vector3 *)&stack0xffffffe0,obb_03,PVar13,0.1,(MethodInfo *)0x0);
          fVar6 = pVVar15->x;
          fVar7 = pVVar15->y;
          fVar8 = pVVar15->z;
          fVar9 = fVar6;
          fVar10 = fVar7;
          fVar23 = fVar8;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffff50,pTVar14,(MethodInfo *)0x0);
          uVar113 = pVVar15->x;
          uVar114 = pVVar15->y;
          value_07.y = (float)uVar114 + fVar10;
          value_07.x = (float)uVar113 + fVar9;
          value_07.z = pVVar15->z + fVar23;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar14,value_07,(MethodInfo *)0x0);
          offset_00.y = fVar7;
          offset_00.x = fVar6;
          offset_00.z = fVar8;
          Vector3Ex::Vector3Ex_OffsetPoints(pLVar45,offset_00,(MethodInfo *)0x0);
          pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                               ((Vector3 *)&stack0xffffff50,(MethodInfo *)0x0);
          uVar115 = pVVar15->x;
          uVar116 = pVVar15->y;
          uVar80 = uVar115 ^ 
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          embedDirection_00.y =
               (float)(uVar116 ^ 
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          embedDirection_00.x = (float)uVar80;
          embedDirection_00.z =
               (float)((uint)pVVar15->z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          pVVar15 = ObjectSurfaceSnap_CalculateEmbedVector
                               ((Vector3 *)&stack0xffffff50,pLVar45,snapConfig.SurfaceObject,
                                embedDirection_00,snapConfig.SurfaceType,(MethodInfo *)0x0);
          fVar7 = 0.0;
          uVar117._0_4_ = pVVar15->x;
          uVar117._4_4_ = pVVar15->y;
          fVar6 = pVVar15->z;
          pTVar41 = pTVar14;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffff50,pTVar14,(MethodInfo *)0x0);
          uVar118 = pVVar15->x;
          uVar119 = pVVar15->y;
          value_14.y = (float)uVar119 + snapConfig.OffsetFromSurface * fVar7 + SUB84(uVar117,4);
          value_14.x = (float)uVar118 +
                       snapConfig.OffsetFromSurface * (float)pTVar41 + (float)uVar117;
          value_14.z = pVVar15->z + snapConfig.OffsetFromSurface * fVar3 + fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar14,value_14,(MethodInfo *)0x0);
          snapConfig.AlignmentAxis = *(int32_t *)(uVar80 + 0x14);
          root = (GameObject *)*(undefined8 *)(uVar80 + 0xc);
          snapConfig._0_4_ = SUB84((ulonglong)*(undefined8 *)(uVar80 + 0xc) >> 0x20,0);
          uVar47 = CONCAT44(fVar5,(float)uVar4);
code_?:
          pVVar15 = (Vector3 *)0x0;
          puVar40 = (undefined *)0x0;
          snapConfig.SurfaceHitPlane.m_Normal.y = 0.0;
          snapConfig.SurfaceHitPlane.m_Normal.x = 0.0;
          uVar53 = (undefined4)((ulonglong)uVar47 >> 0x20);
          fVar120 = (float)uVar53;
          __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)snapConfig.SurfaceObject;
          inPoint.y = (float)snapConfig._0_4_;
          inPoint.x = (float)root;
          inPoint.z = (float)snapConfig.AlignmentAxis;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                    ((Plane *)&stack0xffffff90,(Vector3)CONCAT84(lVar2,(float)uVar47),inPoint,
                     (MethodInfo *)0x0);
          fVar3 = *(float *)(uVar80 + 0x14);
          uVar4._0_4_ = 1.4013e-45;
          uVar121 = *(undefined8 *)(uVar80 + 0xc);
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
  queryConfig_04.NoVolumeSize.x = fVar21;
  queryConfig_04.ObjectTypes = (int32_t)fVar23;
  queryConfig_04.NoVolumeSize.y = uVar4._4_4_;
  queryConfig_04.NoVolumeSize.z = fVar22;
  pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                       ((OBB *)&stack0xfffffe60,root,queryConfig_04,(MethodInfo *)0x0);
  fVar3 = (pOVar27->_size).x;
  uVar4._0_4_ = (pOVar27->_size).y;
  fVar5 = (pOVar27->_size).z;
  pGVar122 = (GameObject *)(pOVar27->_center).x;
  fVar6 = (pOVar27->_center).y;
  fVar7 = (pOVar27->_center).z;
  fVar8 = (pOVar27->_rotation).x;
  fVar9 = (pOVar27->_rotation).y;
  fVar38 = (pOVar27->_rotation).z;
  fVar39 = (pOVar27->_rotation).w;
  uVar53 = *(undefined4 *)&pOVar27->_isValid;
  if ((char)uVar53 != '\0') {
    if (root != (GameObject *)0x0) {
      fVar10 = 0.0;
      pGVar123 = root;
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (root,(MethodInfo *)0x0);
      fVar71 = fVar38;
      fVar70 = fVar39;
      if (snapConfig.AlignAxis != 0) {
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xffffff90,pTVar14,VVar18,snapConfig.AlignmentAxis,
                   (MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_05.NoVolumeSize.x = fVar21;
        queryConfig_05.ObjectTypes = (int32_t)fVar23;
        queryConfig_05.NoVolumeSize.y = uVar4._4_4_;
        queryConfig_05.NoVolumeSize.z = fVar22;
        pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                             ((OBB *)&stack0xfffffe60,root,queryConfig_05,(MethodInfo *)0x0);
        fVar3 = (pOVar27->_size).x;
        uVar4._0_4_ = (pOVar27->_size).y;
        fVar5 = (pOVar27->_size).z;
        pGVar123 = (GameObject *)(pOVar27->_center).x;
        uVar53 = *(undefined4 *)&pOVar27->_isValid;
        fVar10 = (pOVar27->_center).y;
        fVar7 = (pOVar27->_center).z;
        fVar8 = (pOVar27->_rotation).x;
        fVar9 = (pOVar27->_rotation).y;
        fVar71 = (pOVar27->_rotation).z;
        fVar70 = (pOVar27->_rotation).w;
        pGVar122 = pGVar123;
        fVar6 = fVar10;
      }
      if (pTVar14 != (Transform *)0x0) {
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffff50,pTVar14,(MethodInfo *)0x0);
        fVar124 = pVVar15->x;
        fVar125 = pVVar15->y;
        fVar23 = pVVar15->z;
        obb_01._size.y = (float)uVar4;
        obb_01._size.x = fVar3;
        obb_01._size.z = fVar5;
        obb_01._center.x = (float)pGVar122;
        obb_01._center.y = fVar6;
        obb_01._center.z = fVar7;
        obb_01._rotation.x = fVar8;
        obb_01._rotation.y = fVar9;
        obb_01._rotation.z._0_1_ = SUB41(fVar71,0);
        obb_01._rotation.z._1_2_ = (short)((uint)fVar71 >> 8);
        obb_01._rotation.z._3_1_ = (char)((uint)fVar71 >> 0x18);
        obb_01._rotation.w = fVar70;
        obb_01._40_4_ = uVar53;
        pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                             ((Vector3 *)&stack0xffffff50,obb_01,snapConfig.SurfaceHitPlane,
                              snapConfig.OffsetFromSurface,(MethodInfo *)0x0);
        uVar126 = pVVar15->x;
        uVar127 = pVVar15->y;
        value_03.y = (float)uVar127 + fVar125;
        value_03.x = (float)uVar126 + fVar124;
        value_03.z = pVVar15->z + fVar23;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar14,value_03,(MethodInfo *)0x0);
        uVar4._0_4_ = 1.4013e-45;
        pVVar15 = (Vector3 *)&stack0xffffff50;
        puVar40 = &UNK_?;
        pt_00.y = fVar10;
        pt_00.x = (float)pGVar123;
        pt_00.z = fVar7;
        pVVar128 = PlaneEx::PlaneEx_ProjectPoint
                             (pVVar15,snapConfig.SurfaceHitPlane,pt_00,(MethodInfo *)0x0);
        uVar121._0_4_ = pVVar128->x;
        uVar121._4_4_ = pVVar128->y;
        fVar3 = pVVar128->z;
code_?:
        __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)((ulonglong)lVar2 >> 0x20);
        *(float *)__return_storage_ptr__ = (float)uVar4;
        (__return_storage_ptr__->SittingPlane).m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        (__return_storage_ptr__->SittingPlane).m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)puVar40;
        (__return_storage_ptr__->SittingPlane).m_Distance = (float)pVVar15;
        (__return_storage_ptr__->SittingPoint).x = (float)uVar121;
        (__return_storage_ptr__->SittingPoint).y = (float)((ulonglong)uVar121 >> 0x20);
        (__return_storage_ptr__->SittingPoint).z = fVar3;
        return __return_storage_ptr__;
      }
    }
code_?:
    func_?();
    pcVar129 = (code *)swi(3);
    pOVar1 = (ObjectSurfaceSnap_SnapResult *)(*pcVar129)();
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

