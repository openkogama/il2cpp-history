
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
  cVar1 = (char)((uint)in_stack_2 >> 0x18);
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
    if ((root == (GameObject *)0x0) ||
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (root,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
    goto code_?;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xfffffe90,pTVar4,(MethodInfo *)0x0);
    plane_00.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
    plane_00.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
    plane_00.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
    plane_00.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
    pVVar15 = PlaneEx::PlaneEx_ProjectPoint
                        ((Vector3 *)&stack0xfffffe9c,plane_00,*pVVar15,(MethodInfo *)0x0);
    uVar16 = pVVar15->x;
    uVar17 = pVVar15->y;
    value_11.y = (float)uVar17 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
    value_11.x = (float)uVar16 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
    value_11.z = pVVar15->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar4,value_11,(MethodInfo *)0x0);
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xfffffed4,pTVar4,(MethodInfo *)0x0);
code_?:
    uVar18._0_4_ = pVVar15->x;
    uVar18._4_4_ = pVVar15->y;
    fVar8 = pVVar15->z;
    goto code_?;
  }
  pOVar19 = ObjectSurfaceSnap_CreateSurfaceRaycaster
                      (snapConfig.SurfaceType,snapConfig.SurfaceObject,1,(MethodInfo *)0x0);
  cVar12 = (char)((uint)pOVar19 >> 0x18);
  if (snapConfig.SurfaceType != 4) {
    if (root == (GameObject *)0x0) goto code_?;
    pOVar20 = (ObjectSurfaceSnap_SnapResult *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (root,(MethodInfo *)0x0);
    if (snapConfig.AlignAxis == 0) {
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      cVar12 = SUB41(in_stack_21,0);
      queryConfig_02.NoVolumeSize.x = in_stack_22;
      queryConfig_02.ObjectTypes = (int32_t)fVar11;
      queryConfig_02.NoVolumeSize.y = in_stack_23;
      queryConfig_02.NoVolumeSize.z = in_stack_24;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                          ((OBB *)&snapConfig.SurfaceHitPlane.m_Normal.z,root,queryConfig_02,
                           (MethodInfo *)0x0);
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
          if (((snapConfig.SurfaceObject != (GameObject *)0x0) &&
              (fVar8 = snapConfig.SurfaceHitPlane.m_Distance,
              this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (snapConfig.SurfaceObject,(MethodInfo *)0x0),
              this != (Transform *)0x0)) &&
             (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff28,this,(MethodInfo *)0x0),
             pOVar20 != (ObjectSurfaceSnap_SnapResult *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffff34,(Transform *)pOVar20,(MethodInfo *)0x0);
            puVar29 = (undefined8 *)func_?();
            fVar9 = (float)*puVar29;
            fVar10 = (float)((ulonglong)*puVar29 >> 0x20);
            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                ((Vector3 *)&stack0xffffff40,pTVar4,(MethodInfo *)0x0);
            Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar15,(MethodInfo *)0x0);
            uVar30 = (uint)in_stack_31 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
            uVar32 = (uint)__return_storage_ptr__ ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
            in_stack_33 =
                 (float)((uint)in_stack_33 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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
            direction_01.y = (float)uVar32;
            direction_01.x = (float)uVar30;
            direction_01.z = in_stack_33;
            BVar34 = BoxMath::BoxMath_GetMostAlignedFace
                               (boxCenter_01,boxSize_01,boxRotation_01,direction_01,
                                (MethodInfo *)0x0);
            if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pLVar35 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                (root,BVar34,0.001,0.01,(MethodInfo *)0x0);
            snapConfig.SurfaceHitNormal.y = fVar10 + fVar3 * in_stack_36;
            inNormal_00.y = snapConfig.SurfaceHitPoint.z;
            inNormal_00.x = snapConfig.SurfaceHitPoint.y;
            inNormal_00.z = in_stack_37;
            inPoint_00.y = snapConfig.SurfaceHitNormal.y;
            inPoint_00.x = fVar9 + (float)in_stack_38 * in_stack_36;
            inPoint_00.z = in_stack_39 + fVar5 * in_stack_36;
            UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                      ((Plane *)&stack0xfffffff0,inNormal_00,inPoint_00,(MethodInfo *)0x0);
            obb_01._size.y = in_stack_40;
            obb_01._size.x = (float)in_stack_41;
            obb_01._size.z = in_stack_42;
            obb_01._center.x = in_stack_43;
            obb_01._center.y = (float)in_stack_44;
            obb_01._center.z = in_stack_45;
            obb_01._rotation.x = fStack46;
            obb_01._rotation.y = fStack47;
            obb_01._rotation.z = in_stack_48;
            obb_01._rotation.w = in_stack_49;
            obb_01._40_4_ = snapConfig.SurfaceHitPlane.m_Normal.y;
            surfacePlane_01.m_Normal.y = (float)snapConfig.SurfaceType;
            surfacePlane_01.m_Normal.x = (float)snapConfig.AlignmentAxis;
            surfacePlane_01.m_Normal.z = snapConfig.OffsetFromSurface;
            surfacePlane_01.m_Distance = snapConfig.SurfaceHitPoint.x;
            pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                ((Vector3 *)&stack0xffffffd8,obb_01,surfacePlane_01,0.0,
                                 (MethodInfo *)0x0);
            pTStack50 = (Transform *)pVVar15->x;
            fStack51 = pVVar15->y;
            fVar8 = pVVar15->z;
            snapConfig.AlignmentAxis = (int32_t)pTStack50;
            snapConfig.SurfaceType = (int32_t)fStack51;
            snapConfig.OffsetFromSurface = fVar8;
            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0x000000f8,in_stack_52,(MethodInfo *)0x0);
            uVar53 = pVVar15->x;
            uVar54 = pVVar15->y;
            snapConfig.SurfaceHitPlane.m_Normal.x = pVVar15->z;
            __return_storage_ptr__ =
                 (ObjectSurfaceSnap_SnapResult *)(snapConfig.SurfaceHitPoint.x + (float)uVar53);
            snapConfig.SurfaceHitPoint.z =
                 snapConfig.SurfaceHitPoint.z + snapConfig.SurfaceHitPlane.m_Normal.x;
            snapConfig.AlignmentAxis = 0;
            snapConfig.AlignAxis = SUB41(snapConfig.SurfaceHitPoint.z,0);
            snapConfig._1_2_ = SUB42((uint)snapConfig.SurfaceHitPoint.z >> 8,0);
            snapConfig._3_1_ = SUB41((uint)snapConfig.SurfaceHitPoint.z >> 0x18,0);
            value.y = snapConfig.SurfaceHitPoint.y + (float)uVar54;
            value.x = (float)__return_storage_ptr__;
            value.z._0_1_ = snapConfig.AlignAxis;
            value.z._1_2_ = snapConfig._1_2_;
            value.z._3_1_ = snapConfig._3_1_;
            snapConfig.SurfaceHitNormal.y = (float)uVar53;
            snapConfig.SurfaceHitNormal.z = (float)uVar54;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTStack55,value,(MethodInfo *)0x0);
            snapConfig.SurfaceHitPoint.z = 0.0;
            snapConfig.AlignmentAxis = (int32_t)&UNK_?;
            offset.y = in_stack_56;
            offset.x = in_stack_57;
            offset.z = fVar8;
            snapConfig.SurfaceType = (int32_t)pLVar35;
            snapConfig.SurfaceHitPoint.y = fVar8;
            Vector3Ex::Vector3Ex_OffsetPoints(pLVar35,offset,(MethodInfo *)0x0);
            snapConfig.SurfaceHitPoint.x = (float)&stack0x00000054;
            snapConfig.SurfaceHitPoint.z = 0.0;
            snapConfig.SurfaceHitPoint.y = (float)in_stack_58;
            snapConfig.OffsetFromSurface = (float)&UNK_?;
            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)snapConfig.SurfaceHitPoint.x,in_stack_58,
                                 (MethodInfo *)0x0);
            uVar59 = pVVar15->x;
            uVar60 = pVVar15->y;
            snapConfig.SurfaceHitPlane.m_Normal.y =
                 (float)uVar59 + snapConfig.OffsetFromSurface * _cStack00000080;
            snapConfig.SurfaceHitPlane.m_Normal.z =
                 (float)uVar60 + snapConfig.OffsetFromSurface * in_stack_61;
            snapConfig.SurfaceHitPlane.m_Distance =
                 pVVar15->z + snapConfig.OffsetFromSurface * (float)pTStack50;
            snapConfig.SurfaceObject = (GameObject *)0x0;
            snapConfig.SurfaceHitPlane.m_Normal.x = (float)in_stack_58;
            snapConfig.SurfaceHitNormal.z = (float)&UNK_?;
            value_08.y = snapConfig.SurfaceHitPlane.m_Normal.z;
            value_08.x = snapConfig.SurfaceHitPlane.m_Normal.y;
            value_08.z = snapConfig.SurfaceHitPlane.m_Distance;
            in_stack_41 = (Transform *)uVar59;
            in_stack_40 = (float)uVar60;
            in_stack_42 = snapConfig.SurfaceHitPlane.m_Distance;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (in_stack_58,value_08,(MethodInfo *)0x0);
            fStack62 = in_stack_56;
            fStack63 = in_stack_48;
            fStack64 = in_stack_49;
            fStack65 = in_stack_66;
            fStack67 = fStack51;
code_?:
            *(undefined4 *)__return_storage_ptr__ = 1;
            (__return_storage_ptr__->SittingPlane).m_Normal.x = fStack62;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = fStack63;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = fStack64;
            (__return_storage_ptr__->SittingPlane).m_Distance = fStack65;
            (__return_storage_ptr__->SittingPoint).x = fStack67;
            (__return_storage_ptr__->SittingPoint).y = (float)in_stack_44;
            (__return_storage_ptr__->SittingPoint).z = (float)pTStack50;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
        if (snapConfig.SurfaceType != 1) goto code_?;
      }
      else {
        TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                  ((Vector3 *)&stack0xffffff30,(MethodInfo *)0x0);
      }
      func_?();
      if (in_stack_68 == 0) goto code_?;
      snapConfig.SurfaceType = func_?();
      if (snapConfig.SurfaceType != 0) {
        uVar69 = *(undefined4 *)(snapConfig.SurfaceType + 0x2c);
        uVar70 = *(undefined4 *)(snapConfig.SurfaceType + 0x30);
        fVar8 = *(float *)(snapConfig.SurfaceType + 0x34);
        obb_05._size.y = in_stack_71;
        obb_05._size.x = in_stack_72;
        obb_05._size.z = in_stack_73;
        obb_05._center.x = _cStack00000080;
        obb_05._center.y = fStack74;
        obb_05._center.z = fStack75;
        obb_05._rotation.x = (float)in_stack_76;
        obb_05._rotation.y = in_stack_77;
        obb_05._rotation.z = (float)in_stack_78;
        obb_05._rotation.w = in_stack_79;
        obb_05._40_4_ = in_stack_43;
        pTVar4 = in_stack_78;
        fVar9 = in_stack_79;
        fVar10 = in_stack_43;
        pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xffffffec,obb_05,
                             *(Plane *)(snapConfig.SurfaceType + 0x28),0.0,(MethodInfo *)0x0);
        uVar80 = pVVar15->x;
        snapConfig.SurfaceObject = (GameObject *)uVar80;
        if (pOVar20 != (ObjectSurfaceSnap_SnapResult *)0x0) {
          snapConfig.SurfaceHitNormal.x = 0.0;
          snapConfig.SurfaceHitPoint.y = (float)&stack0x00000064;
          snapConfig.SurfaceHitPoint.x = (float)&UNK_?;
          snapConfig.SurfaceHitPoint.z = (float)pOVar20;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)snapConfig.SurfaceHitPoint.y,(Transform *)pOVar20,
                               (MethodInfo *)0x0);
          uVar81 = pVVar15->x;
          uVar82 = pVVar15->y;
          snapConfig.SurfaceHitNormal.x = (float)in_stack_41 + (float)uVar81;
          snapConfig.SurfaceHitNormal.y = in_stack_40 + (float)uVar82;
          method = (MethodInfo *)(in_stack_42 + pVVar15->z);
          snapConfig.SurfaceHitPlane.m_Normal.x = 0.0;
          snapConfig.SurfaceHitPoint.y = (float)&UNK_?;
          value_06.y = snapConfig.SurfaceHitNormal.y;
          value_06.x = snapConfig.SurfaceHitNormal.x;
          value_06.z = (float)method;
          snapConfig.SurfaceHitPoint.z = (float)pOVar20;
          snapConfig.SurfaceHitNormal.z = (float)method;
          snapConfig.SurfaceHitPlane.m_Distance = (float)uVar81;
          snapConfig.SurfaceObject = (GameObject *)uVar82;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    ((Transform *)pOVar20,value_06,(MethodInfo *)0x0);
          if (cStack83 != '\0') {
            in_stack_84 =
                 (List_1_UnityEngine_Vector3_ *)((float)in_stack_84 + in_stack_85);
            in_stack_86 = in_stack_86 + in_stack_87;
            in_stack_88 = in_stack_88 + in_stack_89;
            in_stack_40 = (float)*(undefined8 *)((int)in_stack_73 + 0x1c);
            in_stack_42 =
                 (float)((ulonglong)*(undefined8 *)((int)in_stack_73 + 0x1c) >> 0x20);
            in_stack_40 =
                 (float)((uint)in_stack_40 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
            in_stack_42 =
                 (float)((uint)in_stack_42 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
            in_stack_43 =
                 (float)(*(uint *)((int)in_stack_73 + 0x24) ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
            if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
              method = (MethodInfo *)TypeInfo__RTG__BoxMath;
              snapConfig.SurfaceObject = (GameObject *)&UNK_?;
              func_?();
            }
            boxCenter_03.y = (float)uVar70;
            boxCenter_03.x = (float)uVar69;
            boxCenter_03.z = fVar8;
            boxSize_03.y = _cStack00000080;
            boxSize_03.x = in_stack_73;
            boxSize_03.z = in_stack_61;
            boxRotation_03.y = fStack90;
            boxRotation_03.x = in_stack_91;
            boxRotation_03.z = (float)pTStack55;
            boxRotation_03.w = (float)in_stack_92;
            direction_03.y = fVar9;
            direction_03.x = (float)pTVar4;
            direction_03.z = fVar10;
            snapConfig.SurfaceHitPoint.x =
                 (float)BoxMath::BoxMath_GetMostAlignedFace
                                  (boxCenter_03,boxSize_03,boxRotation_03,direction_03,
                                   (MethodInfo *)0x0);
            if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pLVar35 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                (root,(BoxFace__Enum)snapConfig.SurfaceHitPoint.x,0.001,0.01,
                                 (MethodInfo *)0x0);
            pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                                (&snapConfig.SurfaceHitPoint,(MethodInfo *)0x0);
            surfaceType = pVVar15->x;
            uVar93 = pVVar15->y;
            snapConfig.SurfaceHitPoint.x =
                 (float)((uint)pVVar15->z ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
            embedDirection_00.y =
                 (float)(uVar93 ^ 
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
            embedDirection_00.x =
                 (float)(surfaceType ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
            embedDirection_00.z = snapConfig.SurfaceHitPoint.x;
            snapConfig.SurfaceType = surfaceType;
            snapConfig.OffsetFromSurface = (float)uVar93;
            pVVar15 = ObjectSurfaceSnap_CalculateEmbedVector
                                ((Vector3 *)&snapConfig.SurfaceHitPoint.z,pLVar35,
                                 snapConfig.SurfaceObject,embedDirection_00,surfaceType,
                                 (MethodInfo *)0x0);
            uVar94 = pVVar15->x;
            uVar95 = pVVar15->y;
            snapConfig.SurfaceHitPlane.m_Normal.z = pVVar15->z;
            snapConfig.SurfaceHitPlane.m_Normal.x = (float)uVar94;
            snapConfig.SurfaceHitPlane.m_Normal.y = (float)uVar95;
            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0x00000064,(Transform *)pOVar20,(MethodInfo *)0x0
                                );
            uVar96 = pVVar15->x;
            uVar97 = pVVar15->y;
            in_stack_42 = pVVar15->z;
            snapConfig.SurfaceHitNormal.x = snapConfig.SurfaceHitPlane.m_Distance + (float)uVar96;
            snapConfig.SurfaceHitNormal.y = (float)snapConfig.SurfaceObject + (float)uVar97;
            snapConfig.SurfaceHitNormal.z = (float)method + in_stack_42;
            snapConfig.SurfaceHitPlane.m_Normal.x = 0.0;
            snapConfig.SurfaceHitPoint.y = (float)&UNK_?;
            value_07.y = snapConfig.SurfaceHitNormal.y;
            value_07.x = snapConfig.SurfaceHitNormal.x;
            value_07.z = snapConfig.SurfaceHitNormal.z;
            snapConfig.SurfaceHitPoint.z = (float)pOVar20;
            in_stack_41 = (Transform *)uVar96;
            in_stack_40 = (float)uVar97;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      ((Transform *)pOVar20,value_07,(MethodInfo *)0x0);
            __return_storage_ptr__ = pOVar20;
          }
          snapConfig.SurfaceHitPlane.m_Distance = (float)&stack0x00000054;
          snapConfig.SurfaceHitPlane.m_Normal.z = (float)&UNK_?;
          snapConfig.SurfaceObject = (GameObject *)pOVar20;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)snapConfig.SurfaceHitPlane.m_Distance,
                               (Transform *)pOVar20,(MethodInfo *)0x0);
          uVar98 = pVVar15->x;
          uVar99 = pVVar15->y;
          in_stack_71 = pVVar15->z;
          in_stack_100 = (float)*(undefined8 *)((int)pTStack50 + 0x1c);
          in_stack_84 =
               (List_1_UnityEngine_Vector3_ *)
               ((ulonglong)*(undefined8 *)((int)pTStack50 + 0x1c) >> 0x20);
          in_stack_41 =
               (Transform *)
               (in_stack_71 +
               snapConfig.OffsetFromSurface * *(float *)((int)pTStack50 + 0x24));
          in_stack_40 = 0.0;
          snapConfig.SurfaceHitPlane.m_Distance = (float)&UNK_?;
          value_10.y = (float)uVar99 + snapConfig.OffsetFromSurface * (float)in_stack_84;
          value_10.x = (float)uVar98 + snapConfig.OffsetFromSurface * in_stack_100;
          value_10.z = (float)in_stack_41;
          snapConfig.SurfaceObject = (GameObject *)pOVar20;
          in_stack_86 = (float)in_stack_41;
          in_stack_101 = (float)uVar98;
          in_stack_72 = (float)uVar99;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    ((Transform *)pOVar20,value_10,(MethodInfo *)0x0);
          fVar8 = *(float *)((int)pTStack50 + 0x14);
          in_stack_102 = 1.4013e-45;
          in_stack_103 = *(float *)((int)pTStack50 + 0x28);
          in_stack_58 = *(Transform **)((int)pTStack50 + 0x2c);
          in_stack_104 = *(float *)((int)pTStack50 + 0x30);
          in_stack_105 = *(float *)((int)pTStack50 + 0x34);
          uVar18 = *(undefined8 *)((int)pTStack50 + 0xc);
code_?:
          in_stack_106 = (float)uVar18;
          in_stack_78 = (Transform *)((ulonglong)uVar18 >> 0x20);
          *(float *)__return_storage_ptr__ = in_stack_102;
          (__return_storage_ptr__->SittingPlane).m_Normal.x = in_stack_103;
          (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)in_stack_58;
          (__return_storage_ptr__->SittingPlane).m_Normal.z = in_stack_104;
          (__return_storage_ptr__->SittingPlane).m_Distance = in_stack_105;
          (__return_storage_ptr__->SittingPoint).x = in_stack_106;
          (__return_storage_ptr__->SittingPoint).y = (float)in_stack_78;
          (__return_storage_ptr__->SittingPoint).z = fVar8;
          return __return_storage_ptr__;
        }
        goto code_?;
      }
    }
    else if (cVar13 == '\0') {
      if (cVar12 != '\0') {
        if (((snapConfig.SurfaceObject == (GameObject *)0x0) ||
            (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (snapConfig.SurfaceObject,(MethodInfo *)0x0),
            pTVar4 == (Transform *)0x0)) ||
           (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xfffffea8,pTVar4,(MethodInfo *)0x0),
           pOVar20 == (ObjectSurfaceSnap_SnapResult *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0xfffffee4,(Transform *)pOVar20,(MethodInfo *)0x0);
        puVar29 = (undefined8 *)func_?();
        fVar8 = (float)*puVar29;
        fVar9 = (float)((ulonglong)*puVar29 >> 0x20);
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                            ((Vector3 *)&stack0xffffff08,in_stack_107,(MethodInfo *)0x0);
        Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar15,(MethodInfo *)0x0);
        normAlignVector_01.x._1_2_ = snapConfig._1_2_;
        normAlignVector_01.x._0_1_ = snapConfig.AlignAxis;
        normAlignVector_01.x._3_1_ = snapConfig._3_1_;
        normAlignVector_01.y = (float)snapConfig.AlignmentAxis;
        normAlignVector_01.z = in_stack_21;
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xffffff6c,(Transform *)pOVar20,normAlignVector_01,
                   snapConfig.AlignmentAxis,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_04.NoVolumeSize.x = in_stack_108;
        queryConfig_04.ObjectTypes = (int32_t)in_stack_26;
        queryConfig_04.NoVolumeSize.y = fVar8;
        queryConfig_04.NoVolumeSize.z = fVar9;
        pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                            ((OBB *)&stack0x00000078,root,queryConfig_04,(MethodInfo *)0x0);
        snapConfig.SurfaceHitNormal.x = (pOVar25->_center).y;
        snapConfig.SurfaceHitNormal.y = (pOVar25->_center).z;
        snapConfig.SurfaceHitNormal.z = (pOVar25->_rotation).x;
        snapConfig.SurfaceHitPlane.m_Normal.x = (pOVar25->_rotation).y;
        fVar9 = (pOVar25->_size).x;
        fVar10 = (pOVar25->_size).y;
        fVar3 = (pOVar25->_size).z;
        snapConfig.SurfaceHitPoint.z = (pOVar25->_center).x;
        pTStack50 = (Transform *)snapConfig.SurfaceHitPlane.m_Normal.x;
        uVar109 = (pOVar25->_rotation).z;
        fVar8 = (pOVar25->_rotation).w;
        snapConfig.SurfaceHitPlane.m_Distance = *(float *)&pOVar25->_isValid;
        if (SUB41(snapConfig.SurfaceHitPlane.m_Distance,0) != '\0') {
          uVar30 = (uint)in_stack_31 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          uVar32 = (uint)in_stack_28 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          in_stack_33 =
               (float)((uint)in_stack_33 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          snapConfig.OffsetFromSurface = fVar9;
          snapConfig.SurfaceHitPoint.x = fVar10;
          snapConfig.SurfaceHitPoint.y = fVar3;
          snapConfig.SurfaceHitPlane.m_Normal.y = (float)uVar109;
          snapConfig.SurfaceHitPlane.m_Normal.z = fVar8;
          in_stack_73 = snapConfig.SurfaceHitNormal.x;
          _cStack00000080 = snapConfig.SurfaceHitNormal.y;
          in_stack_61 = snapConfig.SurfaceHitNormal.z;
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
          direction_02.y = (float)uVar32;
          direction_02.x = (float)uVar30;
          direction_02.z = in_stack_33;
          BVar34 = BoxMath::BoxMath_GetMostAlignedFace
                             (boxCenter_02,boxSize_02,boxRotation_02,direction_02,(MethodInfo *)0x0)
          ;
          if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pLVar35 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                              (root,BVar34,0.001,0.01,(MethodInfo *)0x0);
          snapConfig.OffsetFromSurface = in_stack_110 + in_stack_111 * in_stack_112;
          inNormal_01.y = in_stack_91;
          inNormal_01.x = (float)in_stack_52;
          inNormal_01.z = in_stack_36;
          inPoint_01.y = snapConfig.OffsetFromSurface;
          inPoint_01.x = in_stack_24 + fVar8 * in_stack_112;
          inPoint_01.z = in_stack_39 + fVar5 * in_stack_112;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                    ((Plane *)&snapConfig.SurfaceHitNormal.z,inNormal_01,inPoint_01,
                     (MethodInfo *)0x0);
          obb_02._size.y = (float)snapConfig.SurfaceType;
          obb_02._size.x = (float)snapConfig.AlignmentAxis;
          obb_02._size.z = snapConfig.OffsetFromSurface;
          obb_02._center.x = snapConfig.SurfaceHitPoint.x;
          obb_02._center.y = (float)in_stack_44;
          obb_02._center.z = in_stack_45;
          obb_02._rotation.x = fStack46;
          obb_02._rotation.y = fStack47;
          obb_02._rotation.z = snapConfig.SurfaceHitPlane.m_Distance;
          obb_02._rotation.w = (float)snapConfig.SurfaceObject;
          obb_02._40_4_ = in_stack_113;
          surfacePlane_02.m_Normal.y = in_stack_40;
          surfacePlane_02.m_Normal.x = (float)in_stack_41;
          surfacePlane_02.m_Normal.z = in_stack_42;
          surfacePlane_02.m_Distance = in_stack_43;
          pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                              ((Vector3 *)&stack0xffffffd8,obb_02,surfacePlane_02,0.0,
                               (MethodInfo *)0x0);
          pTStack50 = (Transform *)pVVar15->x;
          fStack51 = pVVar15->y;
          fVar8 = pVVar15->z;
          snapConfig.AlignmentAxis = (int32_t)pTStack50;
          snapConfig.SurfaceType = (int32_t)fStack51;
          snapConfig.OffsetFromSurface = fVar8;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0x000000f8,in_stack_52,(MethodInfo *)0x0);
          uVar114 = pVVar15->x;
          uVar115 = pVVar15->y;
          snapConfig.SurfaceHitPlane.m_Normal.x = pVVar15->z;
          __return_storage_ptr__ =
               (ObjectSurfaceSnap_SnapResult *)(snapConfig.SurfaceHitPoint.x + (float)uVar114);
          snapConfig.SurfaceHitPoint.z =
               snapConfig.SurfaceHitPoint.z + snapConfig.SurfaceHitPlane.m_Normal.x;
          snapConfig.AlignmentAxis = 0;
          snapConfig.AlignAxis = SUB41(snapConfig.SurfaceHitPoint.z,0);
          snapConfig._1_2_ = SUB42((uint)snapConfig.SurfaceHitPoint.z >> 8,0);
          snapConfig._3_1_ = SUB41((uint)snapConfig.SurfaceHitPoint.z >> 0x18,0);
          value_00.y = snapConfig.SurfaceHitPoint.y + (float)uVar115;
          value_00.x = (float)__return_storage_ptr__;
          value_00.z._0_1_ = snapConfig.AlignAxis;
          value_00.z._1_2_ = snapConfig._1_2_;
          value_00.z._3_1_ = snapConfig._3_1_;
          snapConfig.SurfaceHitNormal.y = (float)uVar114;
          snapConfig.SurfaceHitNormal.z = (float)uVar115;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTStack55,value_00,(MethodInfo *)0x0);
          snapConfig.SurfaceHitPoint.z = 0.0;
          snapConfig.AlignmentAxis = (int32_t)&UNK_?;
          offset_00.y = in_stack_56;
          offset_00.x = in_stack_57;
          offset_00.z = fVar8;
          snapConfig.SurfaceType = (int32_t)pLVar35;
          snapConfig.SurfaceHitPoint.y = fVar8;
          Vector3Ex::Vector3Ex_OffsetPoints(pLVar35,offset_00,(MethodInfo *)0x0);
          snapConfig.SurfaceHitPoint.x = (float)&stack0x00000054;
          snapConfig.SurfaceHitPoint.z = 0.0;
          snapConfig.SurfaceHitPoint.y = (float)in_stack_58;
          snapConfig.OffsetFromSurface = (float)&UNK_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)snapConfig.SurfaceHitPoint.x,in_stack_58,
                               (MethodInfo *)0x0);
          uVar116 = pVVar15->x;
          uVar117 = pVVar15->y;
          snapConfig.SurfaceHitPlane.m_Normal.y =
               (float)uVar116 + snapConfig.OffsetFromSurface * _cStack00000080;
          snapConfig.SurfaceHitPlane.m_Normal.z =
               (float)uVar117 + snapConfig.OffsetFromSurface * in_stack_61;
          snapConfig.SurfaceHitPlane.m_Distance =
               pVVar15->z + snapConfig.OffsetFromSurface * (float)pTStack50;
          snapConfig.SurfaceObject = (GameObject *)0x0;
          snapConfig.SurfaceHitPlane.m_Normal.x = (float)in_stack_58;
          snapConfig.SurfaceHitNormal.z = (float)&UNK_?;
          value_09.y = snapConfig.SurfaceHitPlane.m_Normal.z;
          value_09.x = snapConfig.SurfaceHitPlane.m_Normal.y;
          value_09.z = snapConfig.SurfaceHitPlane.m_Distance;
          in_stack_41 = (Transform *)uVar116;
          in_stack_40 = (float)uVar117;
          in_stack_42 = snapConfig.SurfaceHitPlane.m_Distance;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (in_stack_58,value_09,(MethodInfo *)0x0);
          fStack62 = in_stack_45;
          fStack63 = fStack46;
          fStack64 = fStack47;
          fStack65 = in_stack_118;
          fStack67 = (float)pTStack50;
          pTStack50 = in_stack_52;
          in_stack_44 = in_stack_78;
          goto code_?;
        }
        goto code_?;
      }
      normAlignVector.y = snapConfig.SurfaceHitNormal.y;
      normAlignVector.x = snapConfig.SurfaceHitNormal.x;
      normAlignVector.z = snapConfig.SurfaceHitNormal.z;
      TransformEx::TransformEx_Align
                ((Quaternion *)&stack0xfffffee8,(Transform *)pOVar20,normAlignVector,
                 snapConfig.AlignmentAxis,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_00.NoVolumeSize.x = (float)in_stack_119;
      queryConfig_00.ObjectTypes = in_stack_120;
      queryConfig_00.NoVolumeSize.y = (float)in_stack_68;
      queryConfig_00.NoVolumeSize.z = fVar3;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                          ((OBB *)&stack0xffffffe4,root,queryConfig_00,(MethodInfo *)0x0);
      fVar3 = (pOVar25->_size).x;
      in_stack_121 = (pOVar25->_size).y;
      in_stack_31 = (pOVar25->_size).z;
      in_stack_28 = (ObjectSurfaceSnap_SnapResult *)(pOVar25->_center).x;
      in_stack_33 = (pOVar25->_center).y;
      fVar8 = (pOVar25->_center).z;
      fVar9 = (pOVar25->_rotation).x;
      fVar10 = (pOVar25->_rotation).y;
      uVar69 = (pOVar25->_rotation).z;
      fVar6 = (pOVar25->_rotation).w;
      if ((char)*(undefined4 *)&pOVar25->_isValid == '\0') goto code_?;
      uVar30 = (uint)snapConfig.SurfaceHitNormal.x ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      uVar32 = (uint)snapConfig.SurfaceHitNormal.y ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      fVar5 = (float)((uint)snapConfig.SurfaceHitNormal.z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter.y = in_stack_33;
      boxCenter.x = (float)in_stack_28;
      boxCenter.z = fVar8;
      boxSize.y = in_stack_121;
      boxSize.x = fVar3;
      boxSize.z = in_stack_31;
      boxRotation.y = fVar10;
      boxRotation.x = fVar9;
      boxRotation.z = (float)uVar69;
      boxRotation.w = fVar6;
      direction.y = (float)uVar32;
      direction.x = (float)uVar30;
      direction.z = fVar5;
      fVar3 = (float)BoxMath::BoxMath_GetMostAlignedFace
                                (boxCenter,boxSize,boxRotation,direction,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar35 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                          (root,(BoxFace__Enum)fVar3,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar35 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar35->fields)._size != 0) {
        Vector3Ex::Vector3Ex_GetPointCloudCenter
                  ((Vector3 *)&stack0xffffff24,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar35,
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
        pAVar122 = ObjectBounds::ObjectBounds_CalcMeshModelAABB
                            ((AABB *)&stack0xffffffa8,snapConfig.SurfaceObject,(MethodInfo *)0x0);
        fVar8 = (pAVar122->_size).x;
        fVar9 = (pAVar122->_size).y;
        pTVar4 = (Transform *)(pAVar122->_size).z;
        fVar10 = (pAVar122->_center).x;
        uVar123._0_4_ = (pAVar122->_center).y;
        uVar123._4_4_ = (pAVar122->_center).z;
        puVar124 = *(undefined **)&pAVar122->_isValid;
        if ((char)puVar124 != '\0') {
          if ((snapConfig.SurfaceObject == (GameObject *)0x0) ||
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(snapConfig.SurfaceObject,(MethodInfo *)0x0),
             pTVar4 == (Transform *)0x0)) goto code_?;
          pMVar125 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_get_localToWorldMatrix
                              ((Matrix4x4 *)&stack0x0000006c,pTVar4,(MethodInfo *)0x0);
          fVar8 = in_stack_36;
          fVar9 = in_stack_37;
          pTVar4 = in_stack_38;
          fVar10 = in_stack_111;
          puVar124 = in_stack_26;
          AABB::AABB_Transform((AABB *)&stack0xffffff88,*pMVar125,(MethodInfo *)0x0);
          uVar123._4_4_ = in_stack_126;
          uVar123._0_4_ = in_stack_127;
        }
        fStack51 = fVar9;
        pTStack50 = (Transform *)fVar8;
        in_stack_52 = pTVar4;
        in_stack_91 = fVar10;
        _fStack00000098 = uVar123;
        in_stack_92 = puVar124;
        pVVar15 = OBB::OBB_get_Extents
                            ((Vector3 *)&stack0xffffff98,(OBB *)&stack0x00000088,(MethodInfo *)0x0);
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
        if (in_stack_68 == 0) goto code_?;
        snapConfig.SurfaceType = func_?();
        uVar128 = snapConfig._3_1_;
        uVar129 = snapConfig._1_2_;
        bVar14 = snapConfig.AlignAxis;
        snapConfig.AlignAxis = (bool)pOVar20;
        bVar130 = snapConfig.AlignAxis;
        snapConfig._3_1_ = SUB41((uint)pOVar20 >> 0x18,0);
        uVar131 = snapConfig._3_1_;
        snapConfig._1_2_ = SUB42((uint)pOVar20 >> 8,0);
        uVar132 = snapConfig._1_2_;
        if (snapConfig.SurfaceType != 0) {
          uVar133 = ((Vector3 *)(snapConfig.SurfaceType + 0x1c))->y;
          snapConfig.AlignAxis = (bool)uVar133;
          snapConfig._1_2_ = SUB42((uint)uVar133 >> 8,0);
          snapConfig._3_1_ = SUB41((uint)uVar133 >> 0x18,0);
          TransformEx::TransformEx_Align
                    ((Quaternion *)&stack0xffffffd8,(Transform *)pOVar20,
                     *(Vector3 *)(snapConfig.SurfaceType + 0x1c),snapConfig.AlignmentAxis,
                     (MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_06.NoVolumeSize.x = in_stack_42;
          queryConfig_06.ObjectTypes = (int32_t)in_stack_40;
          queryConfig_06.NoVolumeSize.y = in_stack_43;
          queryConfig_06.NoVolumeSize.z = in_stack_100;
          pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                              ((OBB *)&stack0x000000e4,root,queryConfig_06,(MethodInfo *)0x0);
          uVar134 = (pOVar25->_rotation).w;
          uVar135 = (pOVar25->_size).x;
          uVar136 = (pOVar25->_size).y;
          uVar137 = (pOVar25->_size).z;
          obb_04._size.z = (float)uVar137;
          obb_04._size.y = (float)uVar136;
          obb_04._size.x = (float)uVar135;
          uVar138 = (pOVar25->_center).x;
          uVar139 = (pOVar25->_center).y;
          uVar140 = (pOVar25->_center).z;
          obb_04._center.z = (float)uVar140;
          obb_04._center.y = (float)uVar139;
          obb_04._center.x = (float)uVar138;
          uVar141 = (pOVar25->_rotation).x;
          uVar142 = (pOVar25->_rotation).y;
          uVar143 = (pOVar25->_rotation).z;
          obb_04._rotation.z = (float)uVar143;
          obb_04._rotation.y = (float)uVar142;
          obb_04._rotation.x = (float)uVar141;
          obb_04._rotation.w = (float)uVar134;
          obb_04._isValid = pOVar25->_isValid;
          obb_04._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
          pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                              ((Vector3 *)&stack0xffffffd8,obb_04,
                               *(Plane *)((int)in_stack_113 + 0x28),0.0,(MethodInfo *)0x0);
          uVar144 = pVVar15->x;
          uVar145 = pVVar15->y;
          snapConfig.OffsetFromSurface = pVVar15->z;
          snapConfig.AlignmentAxis = uVar144;
          snapConfig.SurfaceType = uVar145;
          if (pOVar20 == (ObjectSurfaceSnap_SnapResult *)0x0) goto code_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0x000000f8,(Transform *)pOVar20,(MethodInfo *)0x0);
          uVar146 = pVVar15->x;
          uVar147 = pVVar15->y;
          snapConfig.SurfaceHitPlane.m_Normal.x = pVVar15->z;
          snapConfig.SurfaceHitPoint.z =
               snapConfig.SurfaceHitPoint.z + snapConfig.SurfaceHitPlane.m_Normal.x;
          snapConfig.AlignmentAxis = 0;
          snapConfig.AlignAxis = SUB41(snapConfig.SurfaceHitPoint.z,0);
          snapConfig._1_2_ = SUB42((uint)snapConfig.SurfaceHitPoint.z >> 8,0);
          snapConfig._3_1_ = SUB41((uint)snapConfig.SurfaceHitPoint.z >> 0x18,0);
          value_02.y = snapConfig.SurfaceHitPoint.y + (float)uVar147;
          value_02.x = snapConfig.SurfaceHitPoint.x + (float)uVar146;
          value_02.z._0_1_ = snapConfig.AlignAxis;
          value_02.z._1_2_ = snapConfig._1_2_;
          value_02.z._3_1_ = snapConfig._3_1_;
          snapConfig.SurfaceHitNormal.y = (float)uVar146;
          snapConfig.SurfaceHitNormal.z = (float)uVar147;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    ((Transform *)pOVar20,value_02,(MethodInfo *)0x0);
          snapConfig.AlignmentAxis = 0;
          __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)&UNK_?;
          snapConfig.AlignAxis = bVar130;
          snapConfig._1_2_ = uVar132;
          snapConfig._3_1_ = uVar131;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&snapConfig.SurfaceHitPlane.m_Distance,
                               (Transform *)pOVar20,(MethodInfo *)0x0);
          uVar148 = pVVar15->x;
          uVar149 = pVVar15->y;
          snapConfig.SurfaceHitNormal.y =
               pVVar15->z + in_stack_72 * snapConfig.OffsetFromSurface;
          snapConfig.SurfaceHitPoint.z =
               (float)uVar148 + in_stack_88 * snapConfig.OffsetFromSurface;
          snapConfig.SurfaceHitNormal.x =
               (float)uVar149 + in_stack_101 * snapConfig.OffsetFromSurface;
          snapConfig.SurfaceHitNormal.z = 0.0;
          snapConfig.SurfaceHitPoint.x = (float)&UNK_?;
          value_04.y = snapConfig.SurfaceHitNormal.x;
          value_04.x = snapConfig.SurfaceHitPoint.z;
          value_04.z = snapConfig.SurfaceHitNormal.y;
          snapConfig.SurfaceHitPoint.y = (float)pOVar20;
          snapConfig.SurfaceObject = (GameObject *)snapConfig.SurfaceHitNormal.y;
          snapConfig.SurfaceHitPlane.m_Normal.z = (float)uVar148;
          snapConfig.SurfaceHitPlane.m_Distance = (float)uVar149;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    ((Transform *)pOVar20,value_04,(MethodInfo *)0x0);
          snapConfig.SurfaceHitPlane.m_Distance = *(float *)((int)in_stack_113 + 0x14);
          snapConfig.SurfaceHitPlane.m_Normal.y =
               (float)*(undefined8 *)((int)in_stack_113 + 0xc);
          snapConfig.SurfaceHitPlane.m_Normal.z =
               (float)((ulonglong)*(undefined8 *)((int)in_stack_113 + 0xc) >> 0x20);
          in_stack_73 = in_stack_72;
          goto code_?;
        }
        normAlignVector_02.y = snapConfig.SurfaceHitNormal.y;
        normAlignVector_02.x = snapConfig.SurfaceHitNormal.x;
        normAlignVector_02.z = snapConfig.SurfaceHitNormal.z;
        snapConfig.AlignAxis = bVar14;
        snapConfig._1_2_ = uVar129;
        snapConfig._3_1_ = uVar128;
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xffffffd8,(Transform *)pOVar20,normAlignVector_02,
                   snapConfig.AlignmentAxis,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_05.NoVolumeSize.x = in_stack_42;
        queryConfig_05.ObjectTypes = (int32_t)in_stack_40;
        queryConfig_05.NoVolumeSize.y = in_stack_43;
        queryConfig_05.NoVolumeSize.z = in_stack_100;
        pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                            ((OBB *)&stack0x000000e4,root,queryConfig_05,(MethodInfo *)0x0);
        uVar150 = (pOVar25->_rotation).w;
        uVar151 = (pOVar25->_size).x;
        uVar152 = (pOVar25->_size).y;
        uVar153 = (pOVar25->_size).z;
        obb_03._size.z = (float)uVar153;
        obb_03._size.y = (float)uVar152;
        obb_03._size.x = (float)uVar151;
        uVar154 = (pOVar25->_center).x;
        uVar155 = (pOVar25->_center).y;
        uVar156 = (pOVar25->_center).z;
        obb_03._center.z = (float)uVar156;
        obb_03._center.y = (float)uVar155;
        obb_03._center.x = (float)uVar154;
        uVar157 = (pOVar25->_rotation).x;
        uVar158 = (pOVar25->_rotation).y;
        uVar159 = (pOVar25->_rotation).z;
        obb_03._rotation.z = (float)uVar159;
        obb_03._rotation.y = (float)uVar158;
        obb_03._rotation.x = (float)uVar157;
        obb_03._rotation.w = (float)uVar150;
        obb_03._isValid = pOVar25->_isValid;
        obb_03._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
        surfacePlane_03.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        surfacePlane_03.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        surfacePlane_03.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        surfacePlane_03.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
        pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xffffffd8,obb_03,surfacePlane_03,0.0,
                             (MethodInfo *)0x0);
        uVar160 = pVVar15->x;
        uVar161 = pVVar15->y;
        snapConfig.OffsetFromSurface = pVVar15->z;
        snapConfig.AlignmentAxis = uVar160;
        snapConfig.SurfaceType = uVar161;
        if (pOVar20 == (ObjectSurfaceSnap_SnapResult *)0x0) goto code_?;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&snapConfig.SurfaceHitPlane.m_Distance,(Transform *)pOVar20
                             ,(MethodInfo *)0x0);
        uVar162 = pVVar15->x;
        uVar163 = pVVar15->y;
        snapConfig.SurfaceHitPlane.m_Normal.x = pVVar15->z;
        snapConfig.SurfaceHitPoint.z =
             snapConfig.SurfaceHitPoint.z + snapConfig.SurfaceHitPlane.m_Normal.x;
        snapConfig.AlignmentAxis = 0;
        snapConfig.AlignAxis = SUB41(snapConfig.SurfaceHitPoint.z,0);
        snapConfig._1_2_ = SUB42((uint)snapConfig.SurfaceHitPoint.z >> 8,0);
        snapConfig._3_1_ = SUB41((uint)snapConfig.SurfaceHitPoint.z >> 0x18,0);
        value_01.y = snapConfig.SurfaceHitPoint.y + (float)uVar163;
        value_01.x = snapConfig.SurfaceHitPoint.x + (float)uVar162;
        value_01.z._0_1_ = snapConfig.AlignAxis;
        value_01.z._1_2_ = snapConfig._1_2_;
        value_01.z._3_1_ = snapConfig._3_1_;
        snapConfig.SurfaceHitNormal.y = (float)uVar162;
        snapConfig.SurfaceHitNormal.z = (float)uVar163;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  ((Transform *)pOVar20,value_01,(MethodInfo *)0x0);
        snapConfig.AlignmentAxis = 0;
        __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)&UNK_?;
        snapConfig.AlignAxis = bVar130;
        snapConfig._1_2_ = uVar132;
        snapConfig._3_1_ = uVar131;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&snapConfig.SurfaceHitPlane.m_Distance,(Transform *)pOVar20
                             ,(MethodInfo *)0x0);
        uVar164 = pVVar15->x;
        uVar165 = pVVar15->y;
        fVar8 = snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
        snapConfig.SurfaceHitNormal.y =
             pVVar15->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
        snapConfig.SurfaceHitPoint.z =
             (float)uVar164 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
        snapConfig.SurfaceHitNormal.x = (float)uVar165 + fVar8;
        snapConfig.SurfaceHitNormal.z = 0.0;
        snapConfig.SurfaceHitPoint.x = (float)&UNK_?;
        value_03.y = snapConfig.SurfaceHitNormal.x;
        value_03.x = snapConfig.SurfaceHitPoint.z;
        value_03.z = snapConfig.SurfaceHitNormal.y;
        snapConfig.SurfaceHitPoint.y = (float)pOVar20;
        snapConfig.SurfaceObject = (GameObject *)snapConfig.SurfaceHitNormal.y;
        snapConfig.SurfaceHitPlane.m_Normal.z = (float)uVar164;
        snapConfig.SurfaceHitPlane.m_Distance = (float)uVar165;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  ((Transform *)pOVar20,value_03,(MethodInfo *)0x0);
        in_stack_57 = snapConfig.SurfaceHitPlane.m_Distance;
        fVar8 = snapConfig.SurfaceHitPlane.m_Normal.x;
        snapConfig.SurfaceObject = (GameObject *)0x0;
        in_stack_56 = 0.0;
        in_stack_48 = 0.0;
        in_stack_49 = 0.0;
        snapConfig.SurfaceHitPlane.m_Distance = in_stack_72;
        pTStack55 = (Transform *)snapConfig.SurfaceHitPlane.m_Normal.x;
        fStack90 = 1.4013e-45;
        in_stack_92 = (undefined *)snapConfig.SurfaceHitPlane.m_Normal.y;
        fStack166 = snapConfig.SurfaceHitPlane.m_Normal.z;
        snapConfig.SurfaceHitNormal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        snapConfig.SurfaceHitNormal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        snapConfig.SurfaceHitNormal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        snapConfig.SurfaceHitPlane.m_Normal.x = in_stack_57;
        snapConfig.SurfaceHitPoint.z = (float)&stack0x00000050;
        snapConfig.SurfaceHitPoint.y = (float)&UNK_?;
        plane.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        plane.m_Normal.x = fVar8;
        plane.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        plane.m_Distance = in_stack_57;
        pt.y = in_stack_105;
        pt.x = in_stack_104;
        pt.z = in_stack_72;
        pVVar15 = PlaneEx::PlaneEx_ProjectPoint
                            ((Vector3 *)snapConfig.SurfaceHitPoint.z,plane,pt,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    else {
      pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)&stack0xfffffea0,(MethodInfo *)0x0);
      TransformEx::TransformEx_Align
                ((Quaternion *)&stack0xfffffef0,(Transform *)pOVar20,*pVVar15,
                 snapConfig.AlignmentAxis,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_01.NoVolumeSize.x = fVar6;
      queryConfig_01.ObjectTypes = (int32_t)fVar5;
      queryConfig_01.NoVolumeSize.y = fVar7;
      queryConfig_01.NoVolumeSize.z = in_stack_167;
      pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                          ((OBB *)&stack0xfffffffc,root,queryConfig_01,(MethodInfo *)0x0);
      fVar9 = (pOVar25->_size).x;
      fVar10 = (pOVar25->_size).y;
      fVar7 = (pOVar25->_size).z;
      fVar11 = (pOVar25->_center).x;
      fVar168 = (pOVar25->_center).y;
      fVar169 = (pOVar25->_center).z;
      fVar170 = (pOVar25->_rotation).x;
      fVar171 = (pOVar25->_rotation).y;
      fVar3 = (pOVar25->_rotation).z;
      fVar5 = (pOVar25->_rotation).w;
      fVar6 = *(float *)&pOVar25->_isValid;
      if (SUB41(fVar6,0) == '\0') goto code_?;
      pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)&stack0xfffffef0,(MethodInfo *)0x0);
      uVar172 = pVVar15->x;
      uVar173 = pVVar15->y;
      fVar174 = (float)(uVar172 ^ 
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fVar175 = (float)(uVar173 ^ 
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fVar176 = (float)((uint)pVVar15->z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter_00.y = fVar170;
      boxCenter_00.x = fVar169;
      boxCenter_00.z = fVar171;
      boxSize_00.y = fVar11;
      boxSize_00.x = fVar7;
      boxSize_00.z = fVar168;
      boxRotation_00.y = fVar5;
      boxRotation_00.x = fVar3;
      boxRotation_00.z = fVar6;
      boxRotation_00.w = in_stack_177;
      direction_00.y = fVar175;
      direction_00.x = fVar174;
      direction_00.z = fVar176;
      fVar3 = (float)BoxMath::BoxMath_GetMostAlignedFace
                                (boxCenter_00,boxSize_00,boxRotation_00,direction_00,
                                 (MethodInfo *)0x0);
      if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar35 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                          (root,(BoxFace__Enum)fVar3,0.001,0.01,(MethodInfo *)0x0);
      if (pLVar35 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar35->fields)._size != 0) {
        pVVar15 = Vector3Ex::Vector3Ex_GetPointCloudCenter
                            ((Vector3 *)&stack0xffffff34,
                             (IEnumerable_1_UnityEngine_Vector3_ *)pLVar35,(MethodInfo *)0x0);
        fVar8 = pVVar15->z;
        pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0xffffff70,(MethodInfo *)0x0);
        uVar178 = pVVar15->x;
        in_stack_28 = (ObjectSurfaceSnap_SnapResult *)(fVar8 + (float)uVar178 * _UNK_?)
        ;
        in_stack_33 = 0.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
        pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0xffffff78,(MethodInfo *)0x0);
        uVar179 = pVVar15->x;
        cVar1 = (char)((uint)uVar179 >> 0x18);
        func_?();
        if (in_stack_68 == 0) goto code_?;
        fVar3 = 5.60519e-45;
        iVar180 = func_?();
        if (iVar180 != 0) {
          uVar181 = *(undefined8 *)(iVar180 + 0x1c);
          fVar8 = *(float *)(iVar180 + 0x24);
          fVar9 = (float)uVar181;
          uVar69 = (undefined4)((ulonglong)uVar181 >> 0x20);
          if (cVar1 != '\0') {
            if (snapConfig.SurfaceObject == (GameObject *)0x0) goto code_?;
            terrain = (Terrain *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (snapConfig.SurfaceObject,
                                 UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                                );
            pVVar15 = TerrainEx::TerrainEx_GetInterpolatedNormal
                                ((Vector3 *)&stack0xfffffee4,terrain,*(Vector3 *)((int)fVar3 + 0xc)
                                 ,(MethodInfo *)0x0);
            uVar181._0_4_ = pVVar15->x;
            uVar181._4_4_ = pVVar15->y;
            fVar8 = pVVar15->z;
            in_stack_126 = (float)(undefined4)uVar181;
            in_stack_26 = (undefined *)uVar181._4_4_;
          }
          normAlignVector_00.z = fVar8;
          normAlignVector_00.x = (float)(int)uVar181;
          normAlignVector_00.y = (float)(int)((ulonglong)uVar181 >> 0x20);
          TransformEx::TransformEx_Align
                    ((Quaternion *)&stack0xffffff44,(Transform *)pOVar20,normAlignVector_00,
                     snapConfig.AlignmentAxis,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_03.NoVolumeSize.x = fVar9;
          queryConfig_03.ObjectTypes = (int32_t)fVar5;
          queryConfig_03.NoVolumeSize.y = (float)uVar69;
          queryConfig_03.NoVolumeSize.z = in_stack_112;
          pOVar25 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                              ((OBB *)&stack0x00000050,root,queryConfig_03,(MethodInfo *)0x0);
          in_stack_40 = (pOVar25->_center).y;
          in_stack_42 = (pOVar25->_center).z;
          in_stack_43 = (pOVar25->_rotation).x;
          in_stack_100 = (pOVar25->_rotation).y;
          pLVar35 = (List_1_UnityEngine_Vector3_ *)(pOVar25->_rotation).w;
          if (pOVar20 == (ObjectSurfaceSnap_SnapResult *)0x0) goto code_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff34,(Transform *)pOVar20,(MethodInfo *)0x0);
          quat.y = in_stack_31;
          quat.x = in_stack_121;
          quat.z = (float)in_stack_28;
          quat.w = in_stack_33;
          QuaternionEx::QuaternionEx_RotatePoints(quat,pLVar35,*pVVar15,(MethodInfo *)0x0);
          pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                              ((Vector3 *)&stack0xffffff64,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                    ((Plane *)&stack0xffffffb4,*pVVar15,*(Vector3 *)((int)in_stack_33 + 0xc),
                     (MethodInfo *)0x0);
          obb_00._size.y = snapConfig.OffsetFromSurface;
          obb_00._size.x = (float)snapConfig.SurfaceType;
          obb_00._size.z = snapConfig.SurfaceHitPoint.x;
          obb_00._center.x = snapConfig.SurfaceHitPoint.y;
          obb_00._center.y = in_stack_56;
          obb_00._center.z = in_stack_48;
          obb_00._rotation.x = in_stack_49;
          obb_00._rotation.y = in_stack_66;
          obb_00._rotation.z = (float)__return_storage_ptr__;
          obb_00._rotation.w = (float)root;
          obb_00._isValid = pOVar25->_isValid;
          obb_00._41_3_ = *(undefined3 *)&pOVar25->field_0x29;
          surfacePlane_00.m_Normal.y = (float)in_stack_38;
          surfacePlane_00.m_Normal.x = in_stack_37;
          surfacePlane_00.m_Normal.z = in_stack_111;
          surfacePlane_00.m_Distance = in_stack_127;
          pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                              ((Vector3 *)&stack0xffffffbc,obb_00,surfacePlane_00,0.1,
                               (MethodInfo *)0x0);
          uVar182 = pVVar15->x;
          uVar183 = pVVar15->y;
          fVar8 = pVVar15->z;
          in_stack_41 = (Transform *)uVar183;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0x0000007c,(Transform *)pOVar20,(MethodInfo *)0x0);
          uVar184 = pVVar15->x;
          uVar185 = pVVar15->y;
          snapConfig.OffsetFromSurface = pVVar15->z;
          value_13.y = in_stack_126 + (float)uVar185;
          value_13.x = in_stack_127 + (float)uVar184;
          value_13.z = (float)in_stack_26 + snapConfig.OffsetFromSurface;
          snapConfig.AlignmentAxis = uVar184;
          snapConfig.SurfaceType = uVar185;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    ((Transform *)pOVar20,value_13,(MethodInfo *)0x0);
          offset_01.y = in_stack_101;
          offset_01.x = in_stack_88;
          offset_01.z = fVar8;
          Vector3Ex::Vector3Ex_OffsetPoints(in_stack_84,offset_01,(MethodInfo *)0x0);
          pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                              ((Vector3 *)&stack0x000000b0,(MethodInfo *)0x0);
          uVar186 = pVVar15->x;
          surfaceType_00 = pVVar15->y;
          snapConfig.OffsetFromSurface =
               (float)((uint)pVVar15->z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          embedDirection.y =
               (float)(surfaceType_00 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          embedDirection.x =
               (float)(uVar186 ^ 
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          embedDirection.z = snapConfig.OffsetFromSurface;
          snapConfig.AlignmentAxis = uVar186;
          snapConfig.SurfaceType = surfaceType_00;
          pVVar15 = ObjectSurfaceSnap_CalculateEmbedVector
                              ((Vector3 *)&stack0x000000b8,in_stack_84,
                               snapConfig.SurfaceObject,embedDirection,surfaceType_00,
                               (MethodInfo *)0x0);
          __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)0x0;
          uVar187 = pVVar15->x;
          uVar188 = pVVar15->y;
          snapConfig.SurfaceHitPlane.m_Normal.y = pVVar15->z;
          snapConfig.SurfaceHitNormal.z = (float)uVar187;
          snapConfig.SurfaceHitPlane.m_Normal.x = (float)uVar188;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0x000000d8,(Transform *)pOVar20,(MethodInfo *)0x0);
          uVar189 = pVVar15->x;
          uVar190 = pVVar15->y;
          in_stack_72 = pVVar15->z;
          snapConfig.SurfaceHitPoint.z =
               (float)uVar189 +
               snapConfig.OffsetFromSurface * (float)uVar182 + snapConfig.SurfaceHitPlane.m_Normal.z;
          snapConfig.SurfaceHitNormal.x =
               (float)uVar190 +
               snapConfig.OffsetFromSurface * (float)in_stack_41 +
               snapConfig.SurfaceHitPlane.m_Distance;
          snapConfig.SurfaceHitNormal.y =
               in_stack_72 +
               snapConfig.OffsetFromSurface * in_stack_40 + (float)snapConfig.SurfaceObject;
          snapConfig.SurfaceHitNormal.z = 0.0;
          snapConfig.SurfaceHitPoint.x = (float)&UNK_?;
          value_05.y = snapConfig.SurfaceHitNormal.x;
          value_05.x = snapConfig.SurfaceHitPoint.z;
          value_05.z = snapConfig.SurfaceHitNormal.y;
          snapConfig.SurfaceHitPoint.y = (float)pOVar20;
          snapConfig.SurfaceObject = (GameObject *)snapConfig.SurfaceHitNormal.y;
          in_stack_88 = (float)uVar189;
          in_stack_101 = (float)uVar190;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    ((Transform *)pOVar20,value_05,(MethodInfo *)0x0);
          snapConfig.SurfaceHitPlane.m_Distance = *(float *)((int)in_stack_71 + 0x14);
          snapConfig.SurfaceHitPlane.m_Normal.y =
               (float)*(undefined8 *)((int)in_stack_71 + 0xc);
          snapConfig.SurfaceHitPlane.m_Normal.z =
               (float)((ulonglong)*(undefined8 *)((int)in_stack_71 + 0xc) >> 0x20);
          in_stack_113 = in_stack_71;
          in_stack_104 = in_stack_191;
          in_stack_105 = in_stack_192;
code_?:
          fStack90 = 0.0;
          pTStack55 = (Transform *)0x0;
          fStack166 = 0.0;
          in_stack_92 = (undefined *)0x0;
          snapConfig.SurfaceObject = (GameObject *)0x0;
          snapConfig.SurfaceHitNormal.x = (float)&stack0x00000098;
          snapConfig.SurfaceHitPoint.z = (float)&UNK_?;
          inNormal.y = in_stack_105;
          inNormal.x = in_stack_104;
          inNormal.z = in_stack_73;
          inPoint.y = snapConfig.SurfaceHitPlane.m_Normal.z;
          inPoint.x = snapConfig.SurfaceHitPlane.m_Normal.y;
          inPoint.z = snapConfig.SurfaceHitPlane.m_Distance;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                    ((Plane *)snapConfig.SurfaceHitNormal.x,inNormal,inPoint,(MethodInfo *)0x0);
          fVar8 = *(float *)((int)in_stack_113 + 0x14);
          in_stack_118 = 1.4013e-45;
          in_stack_193 = in_stack_66;
          in_stack_194 = in_stack_102;
          in_stack_195 = in_stack_103;
          in_stack_196 = in_stack_58;
          uVar197 = *(undefined8 *)((int)in_stack_113 + 0xc);
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
  queryConfig_07.NoVolumeSize.x = fStack90;
  queryConfig_07.ObjectTypes = (int32_t)in_stack_91;
  queryConfig_07.NoVolumeSize.y = (float)pTStack55;
  queryConfig_07.NoVolumeSize.z = (float)in_stack_92;
  pGVar198 = root;
  fVar3 = in_stack_91;
  fVar5 = fStack90;
  pOVar199 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                       (pOVar25,root,queryConfig_07,(MethodInfo *)0x0);
  in_stack_52 = (Transform *)(pOVar199->_size).x;
  in_stack_91 = (pOVar199->_size).y;
  pfVar200 = &(pOVar199->_size).z;
  in_stack_105 = *pfVar200;
  in_stack_106 = (pOVar199->_center).x;
  _fStack00000098 = *(undefined8 *)pfVar200;
  in_stack_41 = (Transform *)(pOVar199->_center).y;
  in_stack_40 = (pOVar199->_center).z;
  in_stack_42 = (pOVar199->_rotation).x;
  in_stack_43 = (pOVar199->_rotation).y;
  fStack46 = (pOVar199->_rotation).z;
  fStack47 = (pOVar199->_rotation).w;
  snapConfig.SurfaceHitNormal.y = *(float *)&pOVar199->_isValid;
  if (SUB41(snapConfig.SurfaceHitNormal.y,0) != '\0') {
    in_stack_58 = in_stack_52;
    in_stack_104 = in_stack_91;
    in_stack_78 = in_stack_41;
    in_stack_79 = in_stack_40;
    in_stack_201 = in_stack_42;
    in_stack_202 = in_stack_43;
    in_stack_45 = snapConfig.SurfaceHitNormal.y;
    if (root != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (root,(MethodInfo *)0x0);
      fVar6 = snapConfig.SurfaceHitPlane.m_Normal.x;
      if (snapConfig.AlignAxis != 0) {
        in_stack_26 = &UNK_?;
        normAlignVector_03.y = snapConfig.SurfaceHitNormal.y;
        normAlignVector_03.x = snapConfig.SurfaceHitNormal.x;
        normAlignVector_03.z = snapConfig.SurfaceHitNormal.z;
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0x00000058,pTVar4,normAlignVector_03,
                   snapConfig.AlignmentAxis,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          snapConfig.SurfaceHitPoint.y = (float)TypeInfo__RTG__ObjectBounds;
          snapConfig.SurfaceHitPoint.x = (float)&UNK_?;
          func_?();
        }
        snapConfig.SurfaceHitPoint.y = 0.0;
        snapConfig.AlignAxis = (bool)root;
        snapConfig._1_2_ = SUB42((uint)root >> 8,0);
        snapConfig._3_1_ = SUB41((uint)root >> 0x18,0);
        snapConfig.AlignmentAxis = (int32_t)in_stack_78;
        snapConfig.SurfaceType = (int32_t)in_stack_79;
        snapConfig.OffsetFromSurface = in_stack_201;
        snapConfig.SurfaceHitPoint.x = in_stack_202;
        __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)&UNK_?;
        queryConfig.NoVolumeSize.x = in_stack_79;
        queryConfig.ObjectTypes = (int32_t)in_stack_78;
        queryConfig.NoVolumeSize.y = in_stack_201;
        queryConfig.NoVolumeSize.z = in_stack_202;
        pOVar199 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                             ((OBB *)&stack0x00000164,root,queryConfig,(MethodInfo *)0x0);
        in_stack_106 = (pOVar199->_size).x;
        in_stack_78 = (Transform *)(pOVar199->_size).y;
        pfVar200 = &(pOVar199->_size).z;
        in_stack_79 = *pfVar200;
        in_stack_201 = (pOVar199->_center).x;
        _fStack0000010c = *(undefined8 *)pfVar200;
        in_stack_52 = (Transform *)(pOVar199->_center).y;
        in_stack_91 = (pOVar199->_center).z;
        pQVar203 = &pOVar199->_rotation;
        in_stack_85 = pQVar203->x;
        in_stack_87 = (pOVar199->_rotation).y;
        fStack90 = pQVar203->x;
        pTStack55 = (Transform *)pQVar203->y;
        in_stack_204._0_4_ = (pOVar199->_rotation).z;
        in_stack_204._4_4_ = (pOVar199->_rotation).w;
        fVar6 = *(float *)&pOVar199->_isValid;
        in_stack_195 = in_stack_106;
        in_stack_196 = in_stack_78;
        in_stack_76 = in_stack_52;
        in_stack_77 = in_stack_91;
      }
      if (pTVar4 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0xffffffdc,pTVar4,(MethodInfo *)0x0);
        obb._size.y = (float)pGVar198;
        obb._size.x = (float)pOVar25;
        obb._size.z = fVar3;
        obb._center.x = fVar5;
        obb._center.y = in_stack_121;
        obb._center.z = in_stack_31;
        obb._rotation.x = (float)in_stack_28;
        obb._rotation.y = in_stack_33;
        obb._rotation.z = snapConfig.SurfaceHitNormal.x;
        obb._rotation.w = snapConfig.SurfaceHitNormal.y;
        obb._40_4_ = fVar6;
        surfacePlane.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
        surfacePlane.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
        surfacePlane.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
        surfacePlane.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
        pVVar15 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xffffffe8,obb,surfacePlane,
                             snapConfig.OffsetFromSurface,(MethodInfo *)0x0);
        uVar205 = pVVar15->x;
        uVar206 = pVVar15->y;
        value_12.y = (float)uVar206 + fVar9;
        value_12.x = (float)uVar205 + fVar8;
        value_12.z = pVVar15->z + fVar10;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar4,value_12,(MethodInfo *)0x0);
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
        pt_00.y = in_stack_86;
        pt_00.x = (float)in_stack_84;
        pt_00.z = (float)in_stack_26;
        pVVar15 = PlaneEx::PlaneEx_ProjectPoint
                            ((Vector3 *)&snapConfig.SurfaceObject,plane_01,pt_00,(MethodInfo *)0x0);
        uVar197._0_4_ = pVVar15->x;
        uVar197._4_4_ = pVVar15->y;
        fVar8 = pVVar15->z;
code_?:
        *(float *)__return_storage_ptr__ = in_stack_118;
        (__return_storage_ptr__->SittingPlane).m_Normal.x = in_stack_193;
        (__return_storage_ptr__->SittingPlane).m_Normal.y = in_stack_194;
        (__return_storage_ptr__->SittingPlane).m_Normal.z = in_stack_195;
        fStack74 = (float)uVar197;
        fStack75 = (float)((ulonglong)uVar197 >> 0x20);
        (__return_storage_ptr__->SittingPlane).m_Distance = (float)in_stack_196;
        (__return_storage_ptr__->SittingPoint).x = fStack74;
        (__return_storage_ptr__->SittingPoint).y = fStack75;
        (__return_storage_ptr__->SittingPoint).z = fVar8;
        return __return_storage_ptr__;
      }
    }
code_?:
    func_?();
    pcVar207 = (code *)swi(3);
    pOVar20 = (ObjectSurfaceSnap_SnapResult *)(*pcVar207)();
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

