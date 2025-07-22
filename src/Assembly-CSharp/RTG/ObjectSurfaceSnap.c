
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
                         __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      pMStack_31 = (MethodInfo *)LStack_8._current.SecondAxisSign;
      pMStack_32 = (MethodInfo *)LStack_8._current.SecondAxisSign;
      pMStack_10 = (MethodInfo *)LStack_8._current.SecondAxisSign;
      value.y = (float)((uint)embedDirection.y ^
                       __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      value.x = (float)((uint)embedDirection.x ^
                       __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
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
    if ((root == (GameObject *)0x0) ||
       (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (root,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
    goto code_?;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
    pVVar6 = PlaneEx::PlaneEx_ProjectPoint
                        ((Vector3 *)&stack0xffffffe0,PVar11,*pVVar6,(MethodInfo *)0x0);
    uVar13 = pVVar6->x;
    uVar14 = pVVar6->y;
    VVar15.y = (float)uVar14 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
    VVar15.x = (float)uVar13 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
    VVar15.z = pVVar6->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar12,VVar15,(MethodInfo *)0x0);
    pVVar6 = (Vector3 *)0x1;
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
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
  pOVar24 = ObjectSurfaceSnap_CreateSurfaceRaycaster
                       (snapConfig.SurfaceType,snapConfig.SurfaceObject,1,(MethodInfo *)0x0);
  VVar15 = snapConfig.SurfaceHitNormal;
  if (snapConfig.SurfaceType != 4) {
    if (root == (GameObject *)0x0) goto code_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (root,(MethodInfo *)0x0);
    if (snapConfig.AlignAxis == 0) {
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_02.NoVolumeSize.x = fVar19;
      queryConfig_02.ObjectTypes = (int32_t)fVar21;
      queryConfig_02.NoVolumeSize.y = fVar20;
      queryConfig_02.NoVolumeSize.z = (float)pVVar16;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                           ((OBB *)&stack0xfffffe80,root,queryConfig_02,(MethodInfo *)0x0);
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
            pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (snapConfig.SurfaceObject,(MethodInfo *)0x0);
            if (pTVar36 != (Transform *)0x0) {
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffffe0,pTVar36,(MethodInfo *)0x0);
              fVar37 = pVVar16->x;
              fVar38 = pVVar16->y;
              fVar19 = pVVar16->z;
              if (pTVar12 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
                puVar39 = &stack0xffffffb4;
                puVar40 = &stack0xffffffe0;
                puVar41 = (undefined8 *)func_?();
                fVar20 = *(float *)(puVar41 + 1);
                fVar42 = (float)*puVar41;
                fVar43 = (float)((ulonglong)*puVar41 >> 0x20);
                fVar2 = fVar20;
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_lossyScale
                                     ((Vector3 *)&stack0xffffffe0,pTVar36,(MethodInfo *)0x0);
                uVar44 = pVVar16->x;
                fVar45 = pVVar16->y;
                puVar46 = &UNK_?;
                fVar35 = Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar16,(MethodInfo *)0x0);
                fVar35 = fVar35 * _UNK_?;
                fVar47 = (float)((uint)fVar42 ^
                                __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                );
                fVar48 = (float)((uint)fVar43 ^
                               __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                               );
                fVar33 = (float)((uint)fVar20 ^
                                __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                );
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
                BVar49 = BoxMath::BoxMath_GetMostAlignedFace
                                    (boxCenter_02,boxSize_02,boxRotation_02,direction_02,
                                     (MethodInfo *)0x0);
                if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                __return_storage_ptr__ =
                     (ObjectSurfaceSnap_SnapResult *)
                     ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                               (root,BVar49,0.001,0.01,(MethodInfo *)0x0);
                pTVar12 = (Transform *)(fVar37 + fVar42 * fVar35);
                puVar46 = (undefined *)(fVar19 + fVar20 * fVar35);
                inNormal_01.y = (float)BVar49;
                inNormal_01.x = (float)root;
                inNormal_01.z = fVar2;
                inPoint_01.y = fVar38 + fVar43 * fVar35;
                inPoint_01.x = (float)pTVar12;
                inPoint_01.z = (float)puVar46;
                UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                          ((Plane *)&stack0xffffff90,inNormal_01,inPoint_01,(MethodInfo *)0x0);
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
                pVVar16 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                     ((Vector3 *)&stack0xffffffd0,obb_04,surfacePlane_00,0.0,
                                      (MethodInfo *)0x0);
                fVar48 = pVVar16->x;
                fVar47 = pVVar16->y;
                fVar3 = pVVar16->z;
                fVar4 = fVar48;
                fVar7 = fVar47;
                fVar8 = fVar3;
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&stack0xfffffef0,pTVar36,(MethodInfo *)0x0);
                uVar50 = pVVar16->x;
                uVar51 = pVVar16->y;
                value_12.y = fVar7 + (float)uVar51;
                value_12.x = fVar4 + (float)uVar50;
                value_12.z = fVar8 + pVVar16->z;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar36,value_12,(MethodInfo *)0x0);
                offset.y = fVar47;
                offset.x = fVar48;
                offset.z = fVar3;
                Vector3Ex::Vector3Ex_OffsetPoints
                          ((List_1_UnityEngine_Vector3_ *)__return_storage_ptr__,offset,
                           (MethodInfo *)0x0);
                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&stack0xffffffd0,pTVar36,(MethodInfo *)0x0);
                uVar52 = pVVar16->x;
                uVar53 = pVVar16->y;
                value_02.y = (float)uVar53 + snapConfig.OffsetFromSurface * fVar43;
                value_02.x = (float)uVar52 + fVar42 * snapConfig.OffsetFromSurface;
                value_02.z = pVVar16->z + snapConfig.OffsetFromSurface * fVar20;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar36,value_02,(MethodInfo *)0x0);
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
        pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xffffffe0,obb_00,*(Plane *)(iVar55 + 0x28),0.0,
                             (MethodInfo *)0x0);
        fVar42 = pVVar6->x;
        fVar43 = pVVar6->y;
        fVar3 = pVVar6->z;
        if (pTVar12 == (Transform *)0x0) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffb0,pTVar12,(MethodInfo *)0x0);
        uVar57 = pVVar6->x;
        uVar58 = pVVar6->y;
        value_04.y = fVar43 + (float)uVar58;
        value_04.x = fVar42 + (float)uVar57;
        value_04.z = fVar3 + pVVar6->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar12,value_04,(MethodInfo *)0x0);
        if (cVar22 != '\0') {
          fVar42 = fVar42 + fVar21;
          fVar43 = fVar43 + fVar19;
          fVar3 = fVar3 + fVar20;
          fVar19 = (float)((uint)(float)*(undefined8 *)(iVar55 + 0x1c) ^
                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          fVar21 = (float)((uint)(float)((ulonglong)*(undefined8 *)(iVar55 + 0x1c) >> 0x20) ^
                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          fVar4 = (float)(*(uint *)(iVar55 + 0x24) ^
                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
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
          BVar49 = BoxMath::BoxMath_GetMostAlignedFace
                              (boxCenter_03,boxSize_03,boxRotation_03,direction_03,(MethodInfo *)0x0
                              );
          if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pLVar59 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                               (root,BVar49,0.001,0.01,(MethodInfo *)0x0);
          pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                              ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
          uVar60 = pVVar6->x;
          uVar61 = pVVar6->y;
          embedDirection.y =
               (float)(uVar61 ^ 
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          embedDirection.x =
               (float)(uVar60 ^ 
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          embedDirection.z =
               (float)((uint)pVVar6->z ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          pVVar6 = ObjectSurfaceSnap_CalculateEmbedVector
                              ((Vector3 *)&stack0xffffffd0,pLVar59,snapConfig.SurfaceObject,
                               embedDirection,snapConfig.SurfaceType,(MethodInfo *)0x0);
          fVar62 = pVVar6->x;
          fVar63 = pVVar6->y;
          fVar2 = pVVar6->z;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffb0,pTVar12,(MethodInfo *)0x0);
          uVar64 = pVVar6->x;
          uVar65 = pVVar6->y;
          value_05.y = fVar63 + (float)uVar65;
          value_05.x = fVar62 + (float)uVar64;
          value_05.z = fVar2 + pVVar6->z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar12,value_05,(MethodInfo *)0x0);
        }
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
        uVar66 = pVVar6->x;
        uVar67 = pVVar6->y;
        value_08.y = (float)uVar67 +
                     snapConfig.OffsetFromSurface *
                     (float)((ulonglong)*(undefined8 *)(iVar55 + 0x1c) >> 0x20);
        value_08.x = (float)uVar66 +
                     snapConfig.OffsetFromSurface * (float)*(undefined8 *)(iVar55 + 0x1c);
        value_08.z = pVVar6->z + snapConfig.OffsetFromSurface * *(float *)(iVar55 + 0x24);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar12,value_08,(MethodInfo *)0x0);
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
        pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xffffffd0,obb,PVar11,0.0,(MethodInfo *)0x0);
        fVar68 = pVVar6->x;
        fVar69 = pVVar6->y;
        fVar2 = pVVar6->z;
        if (pTVar12 == (Transform *)0x0) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffb0,pTVar12,(MethodInfo *)0x0);
        uVar70 = pVVar6->x;
        uVar71 = pVVar6->y;
        value_03.y = fVar69 + (float)uVar71;
        value_03.x = fVar68 + (float)uVar70;
        value_03.z = fVar2 + pVVar6->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar12,value_03,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd0,pTVar12,(MethodInfo *)0x0);
        uVar72 = pVVar6->x;
        uVar73 = pVVar6->y;
        value_07.y = (float)uVar73 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
        value_07.x = (float)uVar72 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
        value_07.z = pVVar6->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar12,value_07,(MethodInfo *)0x0);
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
        if ((snapConfig.SurfaceObject != (GameObject *)0x0) &&
           (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (snapConfig.SurfaceObject,(MethodInfo *)0x0),
           pTVar36 != (Transform *)0x0)) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffe0,pTVar36,(MethodInfo *)0x0);
          fVar7 = pVVar6->x;
          fVar26 = pVVar6->y;
          fVar8 = pVVar6->z;
          if (pTVar12 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffb0,pTVar12,(MethodInfo *)0x0);
            puVar41 = (undefined8 *)func_?();
            fVar27 = *(float *)(puVar41 + 1);
            fVar35 = (float)*puVar41;
            fVar32 = (float)((ulonglong)*puVar41 >> 0x20);
            fVar29 = fVar35;
            fVar30 = fVar32;
            fVar31 = fVar27;
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                ((Vector3 *)&stack0xffffffe0,pTVar36,(MethodInfo *)0x0);
            fVar28 = Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar6,(MethodInfo *)0x0);
            fVar28 = fVar28 * _UNK_?;
            normAlignVector.y = fVar32;
            normAlignVector.x = fVar35;
            normAlignVector.z = fVar31;
            TransformEx::TransformEx_Align
                      ((Quaternion *)&stack0xffffff90,pTVar12,normAlignVector,
                       snapConfig.AlignmentAxis,(MethodInfo *)0x0);
            if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            queryConfig_01.NoVolumeSize.x = fVar19;
            queryConfig_01.ObjectTypes = (int32_t)fVar21;
            queryConfig_01.NoVolumeSize.y = fVar20;
            queryConfig_01.NoVolumeSize.z = (float)pVVar16;
            pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                                 ((OBB *)&stack0xfffffe80,root,queryConfig_01,(MethodInfo *)0x0);
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
              fVar68 = (float)((uint)fVar29 ^
                             __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                             );
              fVar63 = (float)((uint)fVar30 ^
                              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                              );
              fVar62 = (float)((uint)fVar27 ^
                              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                              );
              fVar47 = fVar37;
              uVar56 = uVar54;
              fVar42 = fVar21;
              fVar43 = fVar33;
              if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              fVar69 = 0.0;
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
              direction_01.y = fVar63;
              direction_01.x = fVar68;
              direction_01.z = fVar62;
              BVar49 = BoxMath::BoxMath_GetMostAlignedFace
                                  (boxCenter_01,boxSize_01,boxRotation_01,direction_01,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pLVar59 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                   (root,BVar49,0.001,0.01,(MethodInfo *)0x0);
              fVar26 = fVar26 + fVar30 * fVar28;
              inNormal_00.y = fVar32;
              inNormal_00.x = fVar69;
              inNormal_00.z = fVar31;
              inPoint_00.y = fVar26;
              inPoint_00.x = fVar7 + fVar29 * fVar28;
              inPoint_00.z = fVar8 + fVar27 * fVar28;
              UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                        ((Plane *)&stack0xffffff50,inNormal_00,inPoint_00,(MethodInfo *)0x0);
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
              pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                  ((Vector3 *)&stack0xffffffd0,obb_02,surfacePlane,0.0,
                                   (MethodInfo *)0x0);
              pTVar36 = (Transform *)0x0;
              fVar8 = pVVar6->x;
              fVar19 = pVVar6->y;
              fVar3 = pVVar6->z;
              pVVar6 = (Vector3 *)&stack0xfffffef0;
              puVar5 = &UNK_?;
              fVar4 = fVar8;
              fVar7 = fVar19;
              fVar21 = fVar3;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   (pVVar6,(Transform *)0x0,(MethodInfo *)0x0);
              uVar74 = pVVar16->x;
              uVar75 = pVVar16->y;
              fVar21 = fVar21 + pVVar16->z;
              value_09.y = fVar7 + (float)uVar75;
              value_09.x = fVar4 + (float)uVar74;
              value_09.z = fVar21;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar36,value_09,(MethodInfo *)0x0);
              puVar76 = &UNK_?;
              offset_00.y = fVar19;
              offset_00.x = fVar8;
              offset_00.z = fVar3;
              Vector3Ex::Vector3Ex_OffsetPoints(pLVar59,offset_00,(MethodInfo *)0x0);
              puVar46 = &UNK_?;
              pTVar12 = pTVar36;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffffd0,pTVar36,(MethodInfo *)0x0);
              uVar77 = pVVar16->x;
              uVar78 = pVVar16->y;
              value_11.y = (float)uVar78 + (float)puVar76 * snapConfig.OffsetFromSurface;
              value_11.x = (float)uVar77 + fVar21 * snapConfig.OffsetFromSurface;
              value_11.z = pVVar16->z + (float)pLVar59 * snapConfig.OffsetFromSurface;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar36,value_11,(MethodInfo *)0x0);
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
      TransformEx::TransformEx_Align
                ((Quaternion *)&stack0xffffff90,pTVar12,VVar15,snapConfig.AlignmentAxis,
                 (MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig.NoVolumeSize.x = fVar19;
      queryConfig.ObjectTypes = (int32_t)fVar21;
      queryConfig.NoVolumeSize.y = fVar20;
      queryConfig.NoVolumeSize.z = (float)pVVar16;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                           ((OBB *)&stack0xfffffe80,root,queryConfig,(MethodInfo *)0x0);
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
      fVar35 = (float)((uint)snapConfig.SurfaceHitNormal.x ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fVar31 = (float)((uint)snapConfig.SurfaceHitNormal.y ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fVar30 = (float)((uint)snapConfig.SurfaceHitNormal.z ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
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
      BVar49 = BoxMath::BoxMath_GetMostAlignedFace
                          (boxCenter,boxSize,boxRotation,direction,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar59 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                           (root,BVar49,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar59 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar59->fields)._size != 0) {
        Vector3Ex::Vector3Ex_GetPointCloudCenter
                  ((Vector3 *)&stack0xffffffd0,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar59,
                   (MethodInfo *)0x0);
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
        pAVar79 = ObjectBounds::ObjectBounds_CalcMeshModelAABB
                             ((AABB *)&stack0xffffff40,snapConfig.SurfaceObject,(MethodInfo *)0x0);
        if ((char)*(undefined4 *)&pAVar79->_isValid != '\0') {
          if ((snapConfig.SurfaceObject == (GameObject *)0x0) ||
             (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(snapConfig.SurfaceObject,(MethodInfo *)0x0),
             pTVar36 == (Transform *)0x0)) goto code_?;
          pMVar80 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                     Transform_get_localToWorldMatrix
                               ((Matrix4x4 *)&stack0xfffffe70,pTVar36,(MethodInfo *)0x0);
          AABB::AABB_Transform((AABB *)&stack0xffffff80,*pMVar80,(MethodInfo *)0x0);
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
          TransformEx::TransformEx_Align
                    ((Quaternion *)&stack0xffffff90,pTVar12,*pVVar6,snapConfig.AlignmentAxis,
                     method_00);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_07.NoVolumeSize.x = fVar19;
          queryConfig_07.ObjectTypes = (int32_t)fVar21;
          queryConfig_07.NoVolumeSize.y = fVar20;
          queryConfig_07.NoVolumeSize.z = (float)pVVar16;
          pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                               ((OBB *)&stack0xfffffe80,root,queryConfig_07,(MethodInfo *)0x0);
          fVar8 = (pOVar25->_size).x;
          fVar7 = (pOVar25->_size).z;
          uVar81 = (pOVar25->_rotation).w;
          uVar82 = (pOVar25->_size).x;
          uVar83 = (pOVar25->_size).y;
          uVar84 = (pOVar25->_size).z;
          obb_06._size.z = (float)uVar84;
          obb_06._size.y = (float)uVar83;
          obb_06._size.x = (float)uVar82;
          uVar85 = (pOVar25->_center).x;
          uVar86 = (pOVar25->_center).y;
          uVar87 = (pOVar25->_center).z;
          obb_06._center.z = (float)uVar87;
          obb_06._center.y = (float)uVar86;
          obb_06._center.x = (float)uVar85;
          uVar88 = (pOVar25->_rotation).x;
          uVar89 = (pOVar25->_rotation).y;
          uVar90 = (pOVar25->_rotation).z;
          obb_06._rotation.z = (float)uVar90;
          obb_06._rotation.y = (float)uVar89;
          obb_06._rotation.x = (float)uVar88;
          pVVar16 = (Vector3 *)&stack0xffffffd0;
          obb_06._rotation.w = (float)uVar81;
          obb_06._isValid = pOVar25->_isValid;
          obb_06._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
          pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                              (pVVar16,obb_06,*(Plane *)(puVar1 + 0x28),0.0,(MethodInfo *)0x0);
          fVar20 = pVVar6->x;
          fVar30 = pVVar6->y;
          if (pTVar12 == (Transform *)0x0) goto code_?;
          puVar5 = &UNK_?;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xfffffef0,pTVar12,(MethodInfo *)0x0);
          uVar91 = pVVar6->x;
          uVar92 = pVVar6->y;
          value_14.y = fVar30 + (float)uVar92;
          value_14.x = fVar20 + (float)uVar91;
          value_14.z = (float)puVar5 + pVVar6->z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar12,value_14,(MethodInfo *)0x0);
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffd0,pTVar12,(MethodInfo *)0x0);
          uVar93 = pVVar6->x;
          uVar94 = pVVar6->y;
          value_00.y = (float)uVar94 + fVar29 * snapConfig.OffsetFromSurface;
          value_00.x = (float)uVar93 + fVar28 * snapConfig.OffsetFromSurface;
          value_00.z = pVVar6->z + (float)method_00 * snapConfig.OffsetFromSurface;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar12,value_00,(MethodInfo *)0x0);
          snapConfig.SurfaceHitNormal.z = *(float *)(puVar1 + 0x14);
          snapConfig.SurfaceHitNormal.x = (float)*(undefined8 *)(puVar1 + 0xc);
          snapConfig.SurfaceHitNormal.y =
               (float)((ulonglong)*(undefined8 *)(puVar1 + 0xc) >> 0x20);
          goto code_?;
        }
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xffffff90,pTVar12,VVar15,snapConfig.AlignmentAxis,
                   (MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_06.NoVolumeSize.x = fVar19;
        queryConfig_06.ObjectTypes = (int32_t)fVar21;
        queryConfig_06.NoVolumeSize.y = fVar20;
        queryConfig_06.NoVolumeSize.z = (float)pVVar16;
        pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                             ((OBB *)&stack0xfffffe80,root,queryConfig_06,(MethodInfo *)0x0);
        fVar3 = (pOVar25->_size).x;
        fVar4 = (pOVar25->_size).z;
        uVar95 = (pOVar25->_rotation).w;
        uVar96 = (pOVar25->_size).x;
        uVar97 = (pOVar25->_size).y;
        uVar98 = (pOVar25->_size).z;
        obb_05._size.z = (float)uVar98;
        obb_05._size.y = (float)uVar97;
        obb_05._size.x = (float)uVar96;
        uVar99 = (pOVar25->_center).x;
        uVar100 = (pOVar25->_center).y;
        uVar101 = (pOVar25->_center).z;
        obb_05._center.z = (float)uVar101;
        obb_05._center.y = (float)uVar100;
        obb_05._center.x = (float)uVar99;
        uVar102 = (pOVar25->_rotation).x;
        uVar103 = (pOVar25->_rotation).y;
        uVar104 = (pOVar25->_rotation).z;
        obb_05._rotation.z = (float)uVar104;
        obb_05._rotation.y = (float)uVar103;
        obb_05._rotation.x = (float)uVar102;
        pVVar16 = (Vector3 *)&stack0xffffffd0;
        obb_05._rotation.w = (float)uVar95;
        obb_05._isValid = pOVar25->_isValid;
        obb_05._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
        pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            (pVVar16,obb_05,PVar11,0.0,(MethodInfo *)0x0);
        fVar31 = pVVar6->x;
        fVar35 = pVVar6->y;
        if (pTVar12 == (Transform *)0x0) goto code_?;
        puVar1 = &UNK_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffb0,pTVar12,(MethodInfo *)0x0);
        uVar105 = pVVar6->x;
        uVar106 = pVVar6->y;
        value_13.y = fVar35 + (float)uVar106;
        value_13.x = fVar31 + (float)uVar105;
        value_13.z = (float)puVar1 + pVVar6->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar12,value_13,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd0,pTVar12,(MethodInfo *)0x0);
        uVar107 = pVVar6->x;
        uVar108 = pVVar6->y;
        value.y = (float)uVar108 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
        value.x = (float)uVar107 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
        value.z = pVVar6->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar12,value,(MethodInfo *)0x0);
        pVVar6 = (Vector3 *)0x1;
        fVar2 = 0.0;
        auVar109._12_4_ = 0;
        auVar109._0_12_ = snapConfig.SurfaceHitPlane._4_12_;
        pt.y = fVar3;
        pt.x = (float)pVVar16;
        pt.z = fVar4;
        pVVar16 = PlaneEx::PlaneEx_ProjectPoint
                             ((Vector3 *)&stack0xffffffe0,(Plane)(auVar109 << 0x20),pt,
                              (MethodInfo *)0x0);
        goto code_?;
      }
    }
    else {
      pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
      TransformEx::TransformEx_Align
                ((Quaternion *)&stack0xffffff90,pTVar12,*pVVar6,snapConfig.AlignmentAxis,
                 (MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_00.NoVolumeSize.x = fVar19;
      queryConfig_00.ObjectTypes = (int32_t)fVar21;
      queryConfig_00.NoVolumeSize.y = fVar20;
      queryConfig_00.NoVolumeSize.z = (float)pVVar16;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                           ((OBB *)&stack0xfffffe80,root,queryConfig_00,(MethodInfo *)0x0);
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
      pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
      uVar110 = pVVar6->x;
      uVar111 = pVVar6->y;
      fVar35 = (float)(uVar110 ^ 
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fVar31 = (float)(uVar111 ^ 
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fVar30 = (float)((uint)pVVar6->z ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
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
      BVar49 = BoxMath::BoxMath_GetMostAlignedFace
                          (boxCenter_00,boxSize_00,boxRotation_00,direction_00,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar59 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                           (root,BVar49,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar59 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar59->fields)._size != 0) {
        Vector3Ex::Vector3Ex_GetPointCloudCenter
                  ((Vector3 *)&stack0xffffffe0,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar59,
                   (MethodInfo *)0x0);
        TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                  ((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
        pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
        fVar21 = (float)((uint)pVVar6->z ^
                        __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        fVar19 = 0.0;
        func_?();
        if (pOVar24 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
        iVar55 = func_?();
        if (iVar55 != 0) {
          uVar112 = *(undefined8 *)(iVar55 + 0x1c);
          fVar2 = *(float *)(iVar55 + 0x24);
          if (cVar23 != '\0') {
            if (snapConfig.SurfaceObject == (GameObject *)0x0) goto code_?;
            terrain = (Terrain *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (snapConfig.SurfaceObject,
                                 UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                                );
            pVVar6 = TerrainEx::TerrainEx_GetInterpolatedNormal
                                ((Vector3 *)&stack0xffffffe0,terrain,*(Vector3 *)(iVar55 + 0xc),
                                 (MethodInfo *)0x0);
            uVar112._0_4_ = pVVar6->x;
            uVar112._4_4_ = pVVar6->y;
            fVar2 = pVVar6->z;
          }
          normAlignVector_00.z = fVar2;
          normAlignVector_00.x = (float)(int)uVar112;
          normAlignVector_00.y = (float)(int)((ulonglong)uVar112 >> 0x20);
          pQVar113 = TransformEx::TransformEx_Align
                               ((Quaternion *)&stack0xffffff90,pTVar12,normAlignVector_00,
                                snapConfig.AlignmentAxis,(MethodInfo *)0x0);
          fVar2 = pQVar113->x;
          fVar3 = pQVar113->y;
          fVar4 = pQVar113->z;
          fVar7 = pQVar113->w;
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar8 = 0.0;
          queryConfig_03.NoVolumeSize.x = fVar19;
          queryConfig_03.ObjectTypes = (int32_t)fVar21;
          queryConfig_03.NoVolumeSize.y = fVar20;
          queryConfig_03.NoVolumeSize.z = (float)pVVar16;
          pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                               ((OBB *)&stack0xfffffe80,root,queryConfig_03,(MethodInfo *)0x0);
          fVar21 = (pOVar25->_size).y;
          fVar19 = (pOVar25->_size).z;
          fVar20 = (pOVar25->_center).y;
          fVar26 = (pOVar25->_center).z;
          fVar27 = (pOVar25->_rotation).x;
          fVar28 = (pOVar25->_rotation).y;
          if (pTVar12 == (Transform *)0x0) goto code_?;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
          quat.y = fVar3;
          quat.x = fVar2;
          quat.z = fVar4;
          quat.w = fVar7;
          QuaternionEx::QuaternionEx_RotatePoints(quat,pLVar59,*pVVar6,(MethodInfo *)0x0);
          pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                              ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
          fVar3 = 0.0;
          fVar4 = 0.0;
          fVar7 = 0.0;
          fVar29 = 0.0;
          fVar2 = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                    ((Plane *)&stack0xffffff90,*pVVar6,*(Vector3 *)(iVar55 + 0xc),
                     (MethodInfo *)0x0);
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
          pVVar114 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                               ((Vector3 *)&stack0xffffffb0,obb_03,PVar11,0.1,(MethodInfo *)0x0);
          pVVar6 = (Vector3 *)pVVar114->x;
          pTVar36 = (Transform *)pVVar114->y;
          fVar2 = pVVar114->z;
          pVVar114 = pVVar6;
          pTVar115 = pTVar36;
          fVar7 = fVar2;
          pVVar116 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (pVVar6,pTVar36,(MethodInfo *)0x0);
          uVar117 = pVVar116->x;
          uVar118 = pVVar116->y;
          fVar7 = fVar7 + pVVar116->z;
          value_10.y = (float)pTVar115 + (float)uVar118;
          value_10.x = (float)pVVar114 + (float)uVar117;
          value_10.z = fVar7;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar12,value_10,(MethodInfo *)0x0);
          puVar1 = &UNK_?;
          offset_01.y = (float)pTVar36;
          offset_01.x = (float)pVVar6;
          offset_01.z = fVar2;
          Vector3Ex::Vector3Ex_OffsetPoints(pLVar59,offset_01,(MethodInfo *)0x0);
          puVar5 = &UNK_?;
          pVVar114 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                               ((Vector3 *)&stack0xffffff30,(MethodInfo *)0x0);
          uVar119 = pVVar114->x;
          uVar120 = pVVar114->y;
          pVVar6 = (Vector3 *)&stack0xffffff30;
          puVar46 = &UNK_?;
          embedDirection_00.y =
               (float)(uVar120 ^ 
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          embedDirection_00.x =
               (float)(uVar119 ^ 
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          embedDirection_00.z =
               (float)((uint)pVVar114->z ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          pVVar114 = ObjectSurfaceSnap_CalculateEmbedVector
                               (pVVar6,pLVar59,snapConfig.SurfaceObject,embedDirection_00,
                                snapConfig.SurfaceType,(MethodInfo *)0x0);
          fVar3 = pVVar114->x;
          fVar4 = pVVar114->y;
          puVar76 = &UNK_?;
          pVVar114 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffff30,pTVar12,(MethodInfo *)0x0);
          uVar121 = pVVar114->x;
          uVar122 = pVVar114->y;
          value_01.y = (float)uVar122 + fVar4 + (float)puVar46 * snapConfig.OffsetFromSurface;
          value_01.x = (float)uVar121 + fVar3 + (float)puVar5 * snapConfig.OffsetFromSurface;
          value_01.z = pVVar114->z + (float)puVar76 + (float)pVVar6 * snapConfig.OffsetFromSurface
          ;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar12,value_01,(MethodInfo *)0x0);
          snapConfig.SurfaceHitNormal.z = *(float *)(puVar1 + 0x14);
          snapConfig.SurfaceHitNormal.x = (float)*(undefined8 *)(puVar1 + 0xc);
          snapConfig.SurfaceHitNormal.y =
               (float)((ulonglong)*(undefined8 *)(puVar1 + 0xc) >> 0x20);
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
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                    ((Plane *)&stack0xffffff90,inNormal,inPoint,(MethodInfo *)0x0);
          fVar2 = *(float *)(puVar1 + 0x14);
          fVar3 = 1.4013e-45;
          uVar123 = *(undefined8 *)(puVar1 + 0xc);
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
  pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                       ((OBB *)&stack0xfffffe80,root,queryConfig_04,(MethodInfo *)0x0);
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
      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (root,(MethodInfo *)0x0);
      if (snapConfig.AlignAxis != 0) {
        fVar2 = 0.0;
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xffffff90,pTVar12,VVar15,snapConfig.AlignmentAxis,
                   (MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_05.NoVolumeSize.x = snapConfig.SurfaceHitNormal.z;
        queryConfig_05.ObjectTypes = (int32_t)snapConfig.SurfaceHitNormal.y;
        queryConfig_05.NoVolumeSize.y = (float)snapConfig.AlignmentAxis;
        queryConfig_05.NoVolumeSize.z = fVar2;
        pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                             ((OBB *)&stack0xfffffe80,root,queryConfig_05,(MethodInfo *)0x0);
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
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff30,pTVar12,(MethodInfo *)0x0);
        fVar124 = pVVar6->x;
        fVar125 = pVVar6->y;
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
        pVVar6 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xffffff30,obb_01,PVar11,snapConfig.OffsetFromSurface,
                             (MethodInfo *)0x0);
        uVar126 = pVVar6->x;
        uVar127 = pVVar6->y;
        value_06.y = (float)uVar127 + fVar125;
        value_06.x = (float)uVar126 + fVar124;
        value_06.z = pVVar6->z + fVar26;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar12,value_06,(MethodInfo *)0x0);
        fVar3 = 1.4013e-45;
        pt_00.y = fVar4;
        pt_00.x = fVar2;
        pt_00.z = fVar21;
        pVVar6 = PlaneEx::PlaneEx_ProjectPoint
                            ((Vector3 *)&stack0xffffff30,PVar11,pt_00,(MethodInfo *)0x0);
        uVar123._0_4_ = pVVar6->x;
        uVar123._4_4_ = pVVar6->y;
        fVar2 = pVVar6->z;
code_?:
        *(float *)__return_storage_ptr__ = fVar3;
        (__return_storage_ptr__->SittingPlane).m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        (__return_storage_ptr__->SittingPlane).m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        (__return_storage_ptr__->SittingPlane).m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        (__return_storage_ptr__->SittingPlane).m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
        (__return_storage_ptr__->SittingPoint).x = (float)uVar123;
        (__return_storage_ptr__->SittingPoint).y = (float)((ulonglong)uVar123 >> 0x20);
        (__return_storage_ptr__->SittingPoint).z = fVar2;
        return __return_storage_ptr__;
      }
    }
code_?:
    func_?();
    pcVar128 = (code *)swi(3);
    pOVar129 = (ObjectSurfaceSnap_SnapResult *)(*pcVar128)();
    return pOVar129;
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

