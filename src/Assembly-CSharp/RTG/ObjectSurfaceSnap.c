
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
  pOVar8 = ObjectSurfaceSnap_CreateSurfaceRaycaster(surfaceType,embedSurface,0,(MethodInfo *)0x0);
  fStack_9 = _UNK_?;
  cStack_10 = '\0';
  if (embedPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                        (&LStack_12,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)embedPoints,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                        );
    LStack_13._current.path = (String *)0x0;
    LStack_14._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar11->_list;
    LStack_14._index = pLVar11->_index;
    LStack_14._version = pLVar11->_version;
    LStack_14._current.Quadrant = (int32_t)(pLVar11->_current).alias;
    uVar15 = (pLVar11->_current).path;
    uVar16 = (pLVar11->_current).asset;
    fStack_17 = embedDirection.z;
    fStack_18 = embedDirection.y;
    uStack_2 = 1;
    fStack_19 = embedDirection.x;
    uStack_20 = 0;
    uStack_21 = 0;
    uStack_22 = 0;
    LStack_14._current.FirstAxisSign = uVar15;
    LStack_14._current.SecondAxisSign = uVar16;
    LStack_13._current.asset = (VisualTreeAsset *)&LStack_14;
    while( true ) {
      bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
               PlaneIdHelper+PlaneQuadrantInfo]::
               List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                         (&LStack_14,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                         );
      if (bVar23 == 0) {
        uStack_2 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_14,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   ,in_stack_24);
        uStack_2 = 0xffffffff;
        if (cStack_10 == '\0') {
          if (cRam_? == '\0') {
            LStack_14._list =
                 (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)&TypeInfo__UnityEngine__Vector3;
            func_?();
            cRam_? = '\x01';
          }
          pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar26 = (pVVar25->zeroVector).y;
          fStack_17 = (pVVar25->zeroVector).z;
          __return_storage_ptr__->x = (pVVar25->zeroVector).x;
          __return_storage_ptr__->y = fVar26;
        }
        else {
          dVar27 = (double)fStack_9;
          if (dVar27 < 0.0) {
            LStack_14._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)&UNK_?;
            func_?();
          }
          else {
            dVar27 = SQRT(dVar27);
          }
          fVar26 = (float)dVar27;
          fStack_17 = fStack_17 * fVar26;
          __return_storage_ptr__->x = fStack_19 * fVar26;
          __return_storage_ptr__->y = fStack_18 * fVar26;
        }
        __return_storage_ptr__->z = fStack_17;
        *unaff_FS_OFFSET = uStack_4;
        return __return_storage_ptr__;
      }
      LStack_28._index = LStack_14._current.FirstAxisSign;
      LStack_28._list =
           (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)LStack_14._current.Quadrant;
      LStack_28._current.asset =
           (VisualTreeAsset *)
           ((uint)embedDirection.z ^
           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      LStack_13._current.alias = (String *)LStack_14._current.SecondAxisSign;
      LStack_13._version = LStack_14._current.SecondAxisSign;
      LStack_12._version = LStack_14._current.SecondAxisSign;
      value.y = (float)((uint)embedDirection.y ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      value.x = (float)((uint)fStack_19 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      value.z = (float)LStack_28._current.asset;
      LStack_12._0_8_ = LStack_28._0_8_;
      LStack_13._0_8_ = LStack_28._0_8_;
      pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffff28,value,(MethodInfo *)0x0);
      uVar30 = pVVar29->x;
      uVar31 = pVVar29->y;
      LStack_12._current.asset = (VisualTreeAsset *)pVVar29->z;
      LStack_12._current.alias = (String *)uVar30;
      LStack_12._current.path = (String *)uVar31;
      if (pOVar8 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) break;
      LStack_14._current.Quadrant = (int32_t)pOVar8->klass[1]._0.image;
      LStack_14._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)uVar30;
      LStack_14._version = (int32_t)LStack_12._current.asset;
      LStack_14._index = uVar31;
      in_stack_24 = (MethodInfo *)LStack_12._version;
      iVar32 = (*(code *)(pOVar8->klass->vtable).__unknown.method)();
      if (iVar32 == 0) {
        func_?(&LStack_12);
        iVar32 = func_?(4);
        if (iVar32 != 0) {
          uVar33 = *(undefined8 *)(iVar32 + 0xc);
          fStack_34 = *(float *)(iVar32 + 0x14);
          uStack_35._0_4_ = (float)uVar33;
          uStack_35._4_4_ = (float)((ulonglong)uVar33 >> 0x20);
          fVar26 = ((float)LStack_13._index - uStack_35._4_4_) *
                   ((float)LStack_13._index - uStack_35._4_4_) +
                   ((float)LStack_13._list - (float)uStack_35) *
                   ((float)LStack_13._list - (float)uStack_35) +
                   ((float)LStack_13._version - fStack_34) * ((float)LStack_13._version - fStack_34)
          ;
          uStack_35 = uVar33;
          if (fStack_9 < fVar26) {
            cStack_10 = '\x01';
            fStack_9 = fVar26;
          }
        }
      }
    }
  }
  LStack_14._current.Quadrant = (int32_t)&UNK_?;
  LStack_14._current.Quadrant = func_?();
  LStack_14._version = (int32_t)&UNK_?;
  func_?();
  pcVar36 = (code *)swi(3);
  pVVar29 = (Vector3 *)(*pcVar36)();
  return pVVar29;
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
         CONCAT44(surfacePlane.m_Normal.y * offsetFromSurface + ((float)uVar6 - obb._size.z),
                  surfacePlane.m_Normal.x * offsetFromSurface + ((float)uVar5 - obb._size.y));
    *(float *)((int)surfacePlane.m_Normal.z + 8) =
         surfacePlane.m_Normal.z * offsetFromSurface + (fVar7 - (float)pVVar3);
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
         CONCAT44(surfacePlane.m_Normal.y * offsetFromSurface + ((float)uVar6 - aabb._size.z),
                  surfacePlane.m_Normal.x * offsetFromSurface + ((float)uVar5 - aabb._size.y));
    *(float *)((int)surfacePlane.m_Normal.z + 8) =
         surfacePlane.m_Normal.z * offsetFromSurface + (fVar7 - (float)pVVar3);
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
  cVar3 = (char)((uint)in_stack_4 >> 0x18);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  cVar5 = '\0';
  iVar6 = 0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  cVar12 = '\0';
  pTVar13 = (Transform *)0x0;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    cVar12 = '\0';
    cVar5 = '\0';
    func_?();
  }
  GameObjectEx::GameObjectEx_HierarchyHasMesh(root,(MethodInfo *)0x0);
  bVar14 = GameObjectEx::GameObjectEx_HierarchyHasSprite(root,(MethodInfo *)0x0);
  iVar15 = snapConfig.SurfaceType;
  if ((cVar12 == '\0') && (bVar14 == 0)) {
    if ((root == (GameObject *)0x0) ||
       (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (root,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0))
    goto code_?;
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xfffffe78,pTVar13,(MethodInfo *)0x0);
    plane.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
    plane.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
    plane.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
    plane.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
    pVVar16 = PlaneEx::PlaneEx_ProjectPoint
                        ((Vector3 *)&stack0xfffffe84,plane,*pVVar16,(MethodInfo *)0x0);
    uVar17 = pVVar16->x;
    uVar18 = pVVar16->y;
    value_01.y = (float)uVar18 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
    value_01.x = (float)uVar17 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
    value_01.z = pVVar16->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar13,value_01,(MethodInfo *)0x0);
    puStack_19 = (undefined *)snapConfig.SurfaceHitPlane.m_Normal.z;
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xfffffebc,pTVar13,(MethodInfo *)0x0);
  }
  else {
    ObjectSurfaceSnap_CreateSurfaceRaycaster
              (snapConfig.SurfaceType,snapConfig.SurfaceObject,1,(MethodInfo *)0x0);
    if (iVar15 == 4) {
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      queryConfig_05.NoVolumeSize.x = in_stack_20;
      queryConfig_05.ObjectTypes = (int32_t)in_stack_21;
      queryConfig_05.NoVolumeSize.y = in_stack_22;
      queryConfig_05.NoVolumeSize.z = in_stack_23;
      pOVar24 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                          ((OBB *)&method,root,queryConfig_05,(MethodInfo *)0x0);
      __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)(pOVar24->_size).y;
      auStack_25._28_4_ = (pOVar24->_size).z;
      snapConfig._0_4_ = (pOVar24->_center).x;
      auStack_25._20_4_ = (pOVar24->_size).x;
      snapConfig.AlignmentAxis = (int32_t)(pOVar24->_center).y;
      snapConfig.SurfaceType = (int32_t)(pOVar24->_center).z;
      snapConfig.OffsetFromSurface = (pOVar24->_rotation).x;
      fVar8 = (pOVar24->_rotation).y;
      snapConfig.SurfaceHitPoint.x._0_1_ = SUB41(fVar8,0);
      snapConfig.SurfaceHitPoint.x._1_2_ = (undefined2)((uint)fVar8 >> 8);
      snapConfig.SurfaceHitPoint.x._3_1_ = (undefined1)((uint)fVar8 >> 0x18);
      snapConfig.SurfaceHitNormal.x = *(float *)&pOVar24->_isValid;
      if (SUB41(snapConfig.SurfaceHitNormal.x,0) == '\0') goto code_?;
      auStack_25._24_4_ = __return_storage_ptr__;
      auStack_25._32_4_ = snapConfig._0_4_;
      if (root == (GameObject *)0x0) {
code_?:
        func_?();
        pcVar26 = (code *)swi(3);
        pOVar27 = (ObjectSurfaceSnap_SnapResult *)(*pcVar26)();
        return pOVar27;
      }
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (root,(MethodInfo *)0x0);
      if (snapConfig.AlignAxis != 0) {
        normAlignVector_03.y = snapConfig.SurfaceHitNormal.y;
        normAlignVector_03.x = snapConfig.SurfaceHitNormal.x;
        normAlignVector_03.z = snapConfig.SurfaceHitNormal.z;
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xffffff8c,pTVar13,normAlignVector_03,snapConfig.AlignmentAxis
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_07.NoVolumeSize.z._1_2_ = snapConfig.SurfaceHitPoint.x._1_2_;
        queryConfig_07.NoVolumeSize.z._0_1_ = snapConfig.SurfaceHitPoint.x._0_1_;
        queryConfig_07.NoVolumeSize.z._3_1_ = snapConfig.SurfaceHitPoint.x._3_1_;
        queryConfig_07.NoVolumeSize.x = (float)snapConfig.SurfaceType;
        queryConfig_07.ObjectTypes = snapConfig.AlignmentAxis;
        queryConfig_07.NoVolumeSize.y = snapConfig.OffsetFromSurface;
        pOVar24 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                            ((OBB *)&stack0x00000088,root,queryConfig_07,(MethodInfo *)0x0);
        snapConfig.SurfaceHitPlane.m_Distance = (pOVar24->_size).x;
        snapConfig.SurfaceObject = (GameObject *)(pOVar24->_size).y;
        fVar7 = (pOVar24->_size).z;
        in_stack_28 = (pOVar24->_center).x;
        in_stack_29 = *(float *)&pOVar24->_isValid;
        uStack_30 = SUB41(snapConfig.SurfaceObject,0);
        uStack_31 = (undefined2)((uint)snapConfig.SurfaceObject >> 8);
        uStack_32 = (undefined1)((uint)snapConfig.SurfaceObject >> 0x18);
        method._0_1_ = SUB41(fVar7,0);
        method._1_2_ = (undefined2)((uint)fVar7 >> 8);
        method._3_1_ = (undefined1)((uint)fVar7 >> 0x18);
        auStack_25._36_4_ = (pOVar24->_center).y;
        auStack_25._40_4_ = (pOVar24->_center).z;
        _cStack00000050 = (pOVar24->_center).y;
        fStack33 = (pOVar24->_center).z;
        in_stack_34 = (pOVar24->_rotation).x;
        in_stack_35 = (pOVar24->_rotation).y;
        uVar36 = (pOVar24->_rotation).z;
        uVar37 = (pOVar24->_rotation).w;
        snapConfig.SurfaceHitPoint.x._0_1_ = (char)uVar36;
        snapConfig.SurfaceHitPoint.x._1_2_ = (undefined2)((uint)uVar36 >> 8);
        snapConfig.SurfaceHitPoint.x._3_1_ = (undefined1)((uint)uVar36 >> 0x18);
        snapConfig.SurfaceHitPoint.y = (float)uVar37;
        puStack_38 = (undefined *)in_stack_34;
        in_stack_21 = in_stack_35;
        in_stack_39 = snapConfig.SurfaceHitPlane.m_Distance;
      }
      if (pTVar13 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                ((Vector3 *)&stack0xffffff1c,pTVar13,(MethodInfo *)0x0);
      obb_04._size.y = (float)puStack_38;
      obb_04._size.x = (float)auStack_25._40_4_;
      obb_04._size.z = in_stack_21;
      obb_04._center.x = in_stack_20;
      obb_04._center.y = fStack_40;
      obb_04._center.z = fStack_41;
      obb_04._rotation.x = (float)auStack_25._0_4_;
      obb_04._rotation.y = (float)auStack_25._4_4_;
      obb_04._rotation.z = in_stack_42;
      obb_04._rotation.w = in_stack_39;
      obb_04._40_4_ = in_stack_29;
      surfacePlane_02.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
      surfacePlane_02.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
      surfacePlane_02.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
      surfacePlane_02.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
      pVVar16 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                          ((Vector3 *)&stack0xffffff28,obb_04,surfacePlane_02,
                           snapConfig.OffsetFromSurface,(MethodInfo *)0x0);
      uVar43 = pVVar16->x;
      uVar44 = pVVar16->y;
      value_05.y = (float)uVar44 + fStack_45;
      value_05.x = (float)uVar43 + fVar8;
      value_05.z = pVVar16->z + fStack_40;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar13,value_05,(MethodInfo *)0x0);
      fVar8 = snapConfig.SurfaceHitPlane.m_Normal.x;
      snapConfig.SurfaceHitPoint.z._0_1_ = 1;
      snapConfig.SurfaceHitPoint.z._1_2_ = 0;
      snapConfig.SurfaceHitPoint.z._3_1_ = 0;
      snapConfig.SurfaceHitNormal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
      snapConfig.SurfaceHitNormal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
      snapConfig.SurfaceHitNormal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
      snapConfig.SurfaceHitPlane.m_Normal.x = snapConfig.SurfaceHitPlane.m_Distance;
      pt.z._1_2_ = uStack_31;
      pt.z._0_1_ = uStack_30;
      pt.z._3_1_ = uStack_32;
      plane_00.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
      plane_00.m_Normal.x = fVar8;
      plane_00.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
      plane_00.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
      pt.y = in_stack_46;
      pt.x = in_stack_47;
      pVVar16 = PlaneEx::PlaneEx_ProjectPoint
                          ((Vector3 *)&stack0xffffff84,plane_00,pt,(MethodInfo *)0x0);
      uVar48._0_4_ = pVVar16->x;
      uVar48._4_4_ = pVVar16->y;
      fVar8 = pVVar16->z;
      goto code_?;
    }
    if (root == (GameObject *)0x0) goto code_?;
    transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (root,(MethodInfo *)0x0);
    if (snapConfig.AlignAxis != 0) {
      if (cVar5 == '\0') {
        if (cVar3 != '\0') {
          if (((snapConfig.SurfaceObject == (GameObject *)0x0) ||
              (this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (snapConfig.SurfaceObject,(MethodInfo *)0x0),
              this == (Transform *)0x0)) ||
             (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xfffffe90,this,(MethodInfo *)0x0),
             transform == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xfffffe9c,transform,(MethodInfo *)0x0);
          puVar49 = (undefined8 *)func_?();
          auStack_25._24_4_ = (undefined4)*puVar49;
          auStack_25._28_4_ = (undefined4)((ulonglong)*puVar49 >> 0x20);
          puStack_19 = (undefined *)auStack_25._28_4_;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                              ((Vector3 *)&stack0xfffffef0,pTVar13,(MethodInfo *)0x0);
          Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar16,(MethodInfo *)0x0);
          normAlignVector_02.y = in_stack_22;
          normAlignVector_02.x = in_stack_20;
          normAlignVector_02.z = in_stack_50;
          TransformEx::TransformEx_Align
                    ((Quaternion *)&snapConfig.SurfaceHitPoint.z,transform,normAlignVector_02,
                     snapConfig.AlignmentAxis,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_06.NoVolumeSize.x = (float)__return_storage_ptr__;
          queryConfig_06.ObjectTypes = (int32_t)unaff_retaddr;
          queryConfig_06.NoVolumeSize.y = (float)root;
          queryConfig_06.NoVolumeSize.z = (float)snapConfig._0_4_;
          pOVar24 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                              ((OBB *)&stack0x00000078,root,queryConfig_06,(MethodInfo *)0x0);
          snapConfig.SurfaceHitPlane.m_Distance = (pOVar24->_center).y;
          snapConfig.SurfaceHitPoint.y = (pOVar24->_center).z;
          fVar8 = (pOVar24->_rotation).x;
          snapConfig.SurfaceHitNormal.x = (pOVar24->_rotation).y;
          snapConfig.SurfaceHitNormal.z = (pOVar24->_size).x;
          snapConfig.SurfaceHitPlane.m_Normal.x = (pOVar24->_size).y;
          snapConfig.SurfaceHitPlane.m_Normal.y = (pOVar24->_size).z;
          snapConfig.SurfaceHitPlane.m_Normal.z = (pOVar24->_center).x;
          snapConfig.SurfaceHitPoint.x._0_1_ = SUB41(snapConfig.SurfaceHitPlane.m_Distance,0);
          snapConfig.SurfaceHitPoint.x._1_2_ =
               (undefined2)((uint)snapConfig.SurfaceHitPlane.m_Distance >> 8);
          snapConfig.SurfaceHitPoint.x._3_1_ =
               (undefined1)((uint)snapConfig.SurfaceHitPlane.m_Distance >> 0x18);
          snapConfig.SurfaceHitPoint.z._0_1_ = SUB41(fVar8,0);
          snapConfig.SurfaceHitPoint.z._1_2_ = (undefined2)((uint)fVar8 >> 8);
          snapConfig.SurfaceHitPoint.z._3_1_ = (undefined1)((uint)fVar8 >> 0x18);
          _cStack00000050 = (pOVar24->_rotation).z;
          fStack33 = (pOVar24->_rotation).w;
          in_stack_34 = *(float *)&pOVar24->_isValid;
          if (SUB41(in_stack_34,0) != '\0') {
            uVar51 = (uint)fVar10 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
            puStack_19 = (undefined *)
                         ((uint)fVar11 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
            fVar8 = (float)((uint)fStack_52 ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
            snapConfig.SurfaceObject = (GameObject *)snapConfig.SurfaceHitPoint.y;
            method._0_1_ = snapConfig.SurfaceHitPoint.z._0_1_;
            method._1_2_ = snapConfig.SurfaceHitPoint.z._1_2_;
            method._3_1_ = snapConfig.SurfaceHitPoint.z._3_1_;
            in_stack_28 = snapConfig.SurfaceHitNormal.x;
            in_stack_35 = snapConfig.SurfaceHitNormal.z;
            in_stack_53 = snapConfig.SurfaceHitPlane.m_Normal.x;
            in_stack_54 = snapConfig.SurfaceHitPlane.m_Normal.y;
            fStack55 = snapConfig.SurfaceHitPlane.m_Normal.z;
            auStack_25._4_4_ = _cStack00000050;
            auStack_25._8_4_ = fStack33;
            if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            boxRotation_01.x._1_2_ = method._1_2_;
            boxRotation_01.x._0_1_ = method._0_1_;
            boxRotation_01.x._3_1_ = method._3_1_;
            boxCenter_03.y = snapConfig.SurfaceHitPlane.m_Distance;
            boxCenter_03.x = snapConfig.SurfaceHitPlane.m_Normal.z;
            boxCenter_03.z = snapConfig.SurfaceHitPoint.y;
            boxSize_03.y = in_stack_53;
            boxSize_03.x = in_stack_35;
            boxSize_03.z = in_stack_54;
            boxRotation_01.y = in_stack_28;
            boxRotation_01.z = _cStack00000050;
            boxRotation_01.w = fStack33;
            direction_03.y = (float)puStack_19;
            direction_03.x = (float)uVar51;
            direction_03.z = fVar8;
            BVar56 = BoxMath::BoxMath_GetMostAlignedFace
                               (boxCenter_03,boxSize_03,boxRotation_01,direction_03,
                                (MethodInfo *)0x0);
            if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pLVar57 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                (root,BVar56,0.001,0.01,(MethodInfo *)0x0);
            snapConfig.SurfaceHitNormal.z =
                 snapConfig.SurfaceHitNormal.z + in_stack_20 * (float)auStack_25._8_4_;
            auStack_25._20_4_ =
                 (float)auStack_25._20_4_ + in_stack_22 * (float)auStack_25._8_4_;
            snapConfig.SurfaceHitPlane.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.x;
            snapConfig.SurfaceHitPlane.m_Normal.z = 0.0;
            inNormal_01.y = in_stack_35;
            inNormal_01.x = in_stack_34;
            inNormal_01.z = (float)auStack_25._4_4_;
            inPoint_01.y = (float)auStack_25._20_4_;
            inPoint_01.x = snapConfig.SurfaceHitNormal.z;
            inPoint_01.z = (float)auStack_25._24_4_ + in_stack_23 * (float)auStack_25._8_4_;
            snapConfig.SurfaceHitPlane.m_Normal.x = (float)auStack_25._20_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                      ((Plane *)&stack0x00000000,inNormal_01,inPoint_01,(MethodInfo *)0x0);
            surfacePlane_04.m_Normal.y._1_2_ = snapConfig.SurfaceHitPoint.z._1_2_;
            surfacePlane_04.m_Normal.y._0_1_ = snapConfig.SurfaceHitPoint.z._0_1_;
            surfacePlane_04.m_Normal.y._3_1_ = snapConfig.SurfaceHitPoint.z._3_1_;
            obb_06._size.y = (float)in_stack_58;
            obb_06._size.x = in_stack_59;
            obb_06._size.z = (float)in_stack_60;
            obb_06._center.x = (float)in_stack_61;
            obb_06._center.y = in_stack_62;
            obb_06._center.z = in_stack_63;
            obb_06._rotation.x = in_stack_64;
            obb_06._rotation.y = in_stack_65;
            obb_06._rotation.z = (float)snapConfig.AlignmentAxis;
            obb_06._rotation.w = (float)snapConfig.SurfaceType;
            obb_06._40_4_ = puStack_38;
            surfacePlane_04.m_Normal.x = snapConfig.SurfaceHitPoint.y;
            surfacePlane_04.m_Normal.z = snapConfig.SurfaceHitNormal.x;
            surfacePlane_04.m_Distance = snapConfig.SurfaceHitNormal.y;
            pVVar16 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                ((Vector3 *)auStack_25,obb_06,surfacePlane_04,0.0,(MethodInfo *)0x0)
            ;
            uVar66 = pVVar16->x;
            uVar67 = pVVar16->y;
            fVar8 = pVVar16->z;
            snapConfig.SurfaceHitPoint.x._0_1_ = (char)uVar67;
            snapConfig.SurfaceHitPoint.x._1_2_ = (undefined2)((uint)uVar67 >> 8);
            snapConfig.SurfaceHitPoint.x._3_1_ = (undefined1)((uint)uVar67 >> 0x18);
            snapConfig.OffsetFromSurface = (float)uVar66;
            snapConfig.SurfaceHitPoint.y = fVar8;
            in_stack_34 = (float)uVar66;
            in_stack_35 = (float)uVar67;
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0x000000c0,
                                 (Transform *)snapConfig.SurfaceHitPlane.m_Normal.y,
                                 (MethodInfo *)0x0);
            uVar68 = pVVar16->x;
            uVar69 = pVVar16->y;
            uStack_30 = (undefined1)uVar69;
            uStack_31 = (undefined2)((uint)uVar69 >> 8);
            uStack_32 = (undefined1)((uint)uVar69 >> 0x18);
            value_15.y = (float)uVar69 + snapConfig.SurfaceHitNormal.x;
            value_15.x = (float)uVar68 +
                         (float)CONCAT13(snapConfig.SurfaceHitPoint.z._3_1_,
                                         CONCAT21(snapConfig.SurfaceHitPoint.z._1_2_,
                                                  snapConfig.SurfaceHitPoint.z._0_1_));
            value_15.z = pVVar16->z + snapConfig.SurfaceHitNormal.y;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      ((Transform *)snapConfig.SurfaceObject,value_15,(MethodInfo *)0x0);
            offset_01.y = in_stack_47;
            offset_01.x = in_stack_70;
            offset_01.z = fVar8;
            Vector3Ex::Vector3Ex_OffsetPoints(pLVar57,offset_01,(MethodInfo *)0x0);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0x0000004c,(Transform *)in_stack_71,
                                 (MethodInfo *)0x0);
            uVar72 = pVVar16->x;
            uVar73 = pVVar16->y;
            snapConfig._0_4_ = (float)uVar73 + snapConfig.OffsetFromSurface * in_stack_46;
            snapConfig.AlignmentAxis =
                 (int32_t)(pVVar16->z + snapConfig.OffsetFromSurface * in_stack_74);
            snapConfig.SurfaceType = 0;
            __return_storage_ptr__ = in_stack_71;
            value_00.y = (float)snapConfig._0_4_;
            value_00.x = (float)uVar72 + snapConfig.OffsetFromSurface * in_stack_47;
            value_00.z = (float)snapConfig.AlignmentAxis;
            snapConfig.SurfaceHitNormal.z = (float)snapConfig.AlignmentAxis;
            snapConfig.SurfaceHitNormal.x = (float)uVar72;
            snapConfig.SurfaceHitNormal.y = (float)uVar73;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      ((Transform *)in_stack_71,value_00,(MethodInfo *)0x0);
            fStack75 = in_stack_76;
            fStack77 = in_stack_78;
            fStack79 = in_stack_80;
            fStack81 = in_stack_59;
            in_stack_76 = in_stack_82;
            in_stack_78 = in_stack_83;
code_?:
            *(undefined4 *)__return_storage_ptr__ = 1;
            (__return_storage_ptr__->SittingPlane).m_Normal.x = fStack75;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = fStack77;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = fStack79;
            (__return_storage_ptr__->SittingPlane).m_Distance = fStack81;
            (__return_storage_ptr__->SittingPoint).x = in_stack_76;
            (__return_storage_ptr__->SittingPoint).y = in_stack_78;
            (__return_storage_ptr__->SittingPoint).z = fStack33;
            return __return_storage_ptr__;
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
        normAlignVector_00.y = snapConfig.SurfaceHitNormal.y;
        normAlignVector_00.x = snapConfig.SurfaceHitNormal.x;
        normAlignVector_00.z = snapConfig.SurfaceHitNormal.z;
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xfffffef8,transform,normAlignVector_00,
                   snapConfig.AlignmentAxis,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_00.NoVolumeSize.x = in_stack_84;
        queryConfig_00.ObjectTypes = (int32_t)in_stack_85;
        queryConfig_00.NoVolumeSize.y = in_stack_86;
        queryConfig_00.NoVolumeSize.z = fVar7;
        pOVar24 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                            ((OBB *)&stack0xffffffe4,root,queryConfig_00,(MethodInfo *)0x0);
        fVar9 = (pOVar24->_size).x;
        auStack_25._0_4_ = (pOVar24->_size).y;
        auStack_25._4_4_ = (pOVar24->_size).z;
        auStack_25._8_4_ = (pOVar24->_center).x;
        auStack_25._12_4_ = (pOVar24->_center).y;
        auStack_25._16_8_ = *(undefined8 *)&(pOVar24->_center).z;
        auStack_25._24_4_ = (pOVar24->_rotation).y;
        uVar87 = (pOVar24->_rotation).z;
        uVar88 = (pOVar24->_rotation).w;
        auStack_25._36_4_ = *(undefined4 *)&pOVar24->_isValid;
        if ((char)auStack_25._36_4_ == '\0') goto code_?;
        fVar10 = (float)((uint)snapConfig.SurfaceHitNormal.x ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar11 = (float)((uint)snapConfig.SurfaceHitNormal.y ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar89 = (float)((uint)snapConfig.SurfaceHitNormal.z ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        auStack_25._28_4_ = uVar87;
        auStack_25._32_4_ = uVar88;
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        boxCenter.y = (float)auStack_25._12_4_;
        boxCenter.x = (float)auStack_25._8_4_;
        boxCenter.z = (float)auStack_25._16_4_;
        boxSize.y = (float)auStack_25._0_4_;
        boxSize.x = fVar9;
        boxSize.z = (float)auStack_25._4_4_;
        boxRotation.y = (float)auStack_25._24_4_;
        boxRotation.x = (float)auStack_25._20_4_;
        boxRotation.z = (float)auStack_25._28_4_;
        boxRotation.w = (float)auStack_25._32_4_;
        direction.y = fVar11;
        direction.x = fVar10;
        direction.z = fVar89;
        fVar9 = (float)BoxMath::BoxMath_GetMostAlignedFace
                                  (boxCenter,boxSize,boxRotation,direction,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pLVar57 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                            (root,(BoxFace__Enum)fVar9,0.001,0.01,(MethodInfo *)0x0);
        if (pLVar57 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((pLVar57->fields)._size == 0) goto code_?;
        Vector3Ex::Vector3Ex_GetPointCloudCenter
                  ((Vector3 *)&stack0xfffffefc,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar57,
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
        pAVar90 = ObjectBounds::ObjectBounds_CalcMeshModelAABB
                            ((AABB *)&stack0xffffff28,snapConfig.SurfaceObject,(MethodInfo *)0x0);
        fVar9 = (pAVar90->_size).x;
        auStack_25._24_4_ = (pAVar90->_size).y;
        auStack_25._28_4_ = (pAVar90->_size).z;
        fVar10 = (pAVar90->_center).x;
        auStack_25._20_4_ = fVar9;
        uVar91._0_4_ = (pAVar90->_center).y;
        uVar91._4_4_ = (pAVar90->_center).z;
        puStack_38 = *(undefined **)&pAVar90->_isValid;
        fVar11 = (float)puStack_38;
        pOVar27 = (ObjectSurfaceSnap_SnapResult *)auStack_25._24_4_;
        fVar89 = (float)auStack_25._28_4_;
        auStack_25._32_4_ = fVar10;
        auStack_25._36_4_ = (float)uVar91;
        auStack_25._40_4_ = uVar91._4_4_;
        if ((char)puStack_38 != '\0') {
          if ((snapConfig.SurfaceObject == (GameObject *)0x0) ||
             (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (snapConfig.SurfaceObject,(MethodInfo *)0x0),
             pTVar13 == (Transform *)0x0)) goto code_?;
          pMVar92 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_get_localToWorldMatrix
                              ((Matrix4x4 *)&stack0x0000006c,pTVar13,(MethodInfo *)0x0);
          AABB::AABB_Transform((AABB *)(auStack_25 + 0x28),*pMVar92,(MethodInfo *)0x0);
          uVar91._4_1_ = snapConfig.SurfaceHitPoint.z._0_1_;
          uVar91._0_4_ = snapConfig.SurfaceHitPoint.y;
          uVar91._5_2_ = snapConfig.SurfaceHitPoint.z._1_2_;
          uVar91._7_1_ = snapConfig.SurfaceHitPoint.z._3_1_;
          fVar10 = (float)CONCAT13(snapConfig.SurfaceHitPoint.x._3_1_,
                                   CONCAT21(snapConfig.SurfaceHitPoint.x._1_2_,
                                            snapConfig.SurfaceHitPoint.x._0_1_));
          fVar11 = snapConfig.SurfaceHitNormal.x;
          fVar9 = (float)snapConfig.AlignmentAxis;
          pOVar27 = (ObjectSurfaceSnap_SnapResult *)snapConfig.SurfaceType;
          fVar89 = snapConfig.OffsetFromSurface;
        }
        in_stack_93 = fVar9;
        in_stack_94 = pOVar27;
        in_stack_95 = fVar89;
        in_stack_96 = fVar10;
        in_stack_97 = uVar91;
        in_stack_98 = fVar11;
        pVVar16 = OBB::OBB_get_Extents
                            ((Vector3 *)&stack0xffffff70,(OBB *)&stack0x000000a0,(MethodInfo *)0x0);
        uVar99 = pVVar16->x;
        uVar100 = pVVar16->y;
        auStack_25._40_4_ = pVVar16->z;
        auStack_25._32_4_ = uVar99;
        auStack_25._36_4_ = uVar100;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        dVar101 = (double)((float)auStack_25._36_4_ * (float)auStack_25._36_4_ +
                           (float)auStack_25._32_4_ * (float)auStack_25._32_4_ +
                          (float)auStack_25._40_4_ * (float)auStack_25._40_4_);
        if (dVar101 < 0.0) {
          func_?();
        }
        else {
          dVar101 = SQRT(dVar101);
        }
        in_stack_86 = in_stack_86 + snapConfig.SurfaceHitNormal.z * (float)dVar101;
        func_?();
        if (in_stack_29 == 0.0) goto code_?;
        iVar6 = func_?();
        if (iVar6 == 0) {
          normAlignVector_01.y = snapConfig.SurfaceHitNormal.y;
          normAlignVector_01.x = snapConfig.SurfaceHitNormal.x;
          normAlignVector_01.z = snapConfig.SurfaceHitNormal.z;
          TransformEx::TransformEx_Align
                    ((Quaternion *)&puStack_19,transform,normAlignVector_01,snapConfig.AlignmentAxis
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_02.NoVolumeSize.x = (float)auStack_25._32_4_;
          queryConfig_02.ObjectTypes = auStack_25._28_4_;
          queryConfig_02.NoVolumeSize.y = (float)auStack_25._36_4_;
          queryConfig_02.NoVolumeSize.z = (float)auStack_25._40_4_;
          pOVar24 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                              ((OBB *)&snapConfig.SurfaceHitPlane,root,queryConfig_02,
                               (MethodInfo *)0x0);
          uVar102 = (pOVar24->_rotation).w;
          uVar103 = (pOVar24->_size).x;
          uVar104 = (pOVar24->_size).y;
          uVar105 = (pOVar24->_size).z;
          obb_00._size.z = (float)uVar105;
          obb_00._size.y = (float)uVar104;
          obb_00._size.x = (float)uVar103;
          uVar106 = (pOVar24->_center).x;
          uVar107 = (pOVar24->_center).y;
          uVar108 = (pOVar24->_center).z;
          obb_00._center.z = (float)uVar108;
          obb_00._center.y = (float)uVar107;
          obb_00._center.x = (float)uVar106;
          uVar109 = (pOVar24->_rotation).x;
          uVar110 = (pOVar24->_rotation).y;
          uVar111 = (pOVar24->_rotation).z;
          obb_00._rotation.z = (float)uVar111;
          obb_00._rotation.y = (float)uVar110;
          obb_00._rotation.x = (float)uVar109;
          obb_00._rotation.w = (float)uVar102;
          obb_00._isValid = pOVar24->_isValid;
          obb_00._41_3_ = *(undefined3 *)&pOVar24->field_0x29;
          surfacePlane_00.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
          surfacePlane_00.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
          surfacePlane_00.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
          surfacePlane_00.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
          ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                    ((Vector3 *)&stack0xffffff00,obb_00,surfacePlane_00,0.0,(MethodInfo *)0x0);
          if (transform == (Transform *)0x0) goto code_?;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff48,transform,(MethodInfo *)0x0);
          uVar112 = pVVar16->x;
          uVar113 = pVVar16->y;
          fVar8 = pVVar16->z + fVar8;
          value_03.y = (float)uVar113 + fVar7;
          value_03.x = (float)uVar112 + in_stack_86;
          value_03.z._0_1_ = SUB41(fVar8,0);
          value_03.z._1_2_ = (short)((uint)fVar8 >> 8);
          value_03.z._3_1_ = (char)((uint)fVar8 >> 0x18);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (transform,value_03,(MethodInfo *)0x0);
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff68,transform,(MethodInfo *)0x0);
          uVar114 = pVVar16->x;
          uVar115 = pVVar16->y;
          value_06.y = (float)uVar115 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
          value_06.x = (float)uVar114 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
          value_06.z = pVVar16->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (transform,value_06,(MethodInfo *)0x0);
          uStack_31 = 0;
          uStack_32 = 0;
          uStack_30 = 1;
          __return_storage_ptr__ =
               (ObjectSurfaceSnap_SnapResult *)snapConfig.SurfaceHitPlane.m_Normal.z;
          plane_01.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
          plane_01.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
          plane_01.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
          plane_01.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
          pt_00.y = in_stack_116;
          pt_00.x = in_stack_117;
          pt_00.z = (float)auStack_25._0_4_;
          pVVar16 = PlaneEx::PlaneEx_ProjectPoint
                              ((Vector3 *)&stack0xffffff88,plane_01,pt_00,(MethodInfo *)0x0);
          goto code_?;
        }
        fStack_41 = *(float *)(iVar6 + 0x24);
        TransformEx::TransformEx_Align
                  ((Quaternion *)&puStack_19,transform,*(Vector3 *)(iVar6 + 0x1c),
                   snapConfig.AlignmentAxis,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig_03.NoVolumeSize.x = (float)auStack_25._32_4_;
        queryConfig_03.ObjectTypes = auStack_25._28_4_;
        queryConfig_03.NoVolumeSize.y = (float)auStack_25._36_4_;
        queryConfig_03.NoVolumeSize.z = (float)auStack_25._40_4_;
        pOVar24 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                            ((OBB *)&snapConfig.SurfaceHitPlane,root,queryConfig_03,
                             (MethodInfo *)0x0);
        uVar118 = (pOVar24->_rotation).w;
        uVar119 = (pOVar24->_size).x;
        uVar120 = (pOVar24->_size).y;
        uVar121 = (pOVar24->_size).z;
        obb_01._size.z = (float)uVar121;
        obb_01._size.y = (float)uVar120;
        obb_01._size.x = (float)uVar119;
        uVar122 = (pOVar24->_center).x;
        uVar123 = (pOVar24->_center).y;
        uVar124 = (pOVar24->_center).z;
        obb_01._center.z = (float)uVar124;
        obb_01._center.y = (float)uVar123;
        obb_01._center.x = (float)uVar122;
        uVar125 = (pOVar24->_rotation).x;
        uVar126 = (pOVar24->_rotation).y;
        uVar127 = (pOVar24->_rotation).z;
        obb_01._rotation.z = (float)uVar127;
        obb_01._rotation.y = (float)uVar126;
        obb_01._rotation.x = (float)uVar125;
        obb_01._rotation.w = (float)uVar118;
        obb_01._isValid = pOVar24->_isValid;
        obb_01._41_3_ = *(undefined3 *)&pOVar24->field_0x29;
        ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                  ((Vector3 *)&stack0xffffff00,obb_01,*(Plane *)((int)fStack_41 + 0x28),0.0,
                   (MethodInfo *)0x0);
        if (transform == (Transform *)0x0) goto code_?;
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff48,transform,(MethodInfo *)0x0);
        uVar128 = pVVar16->x;
        uVar129 = pVVar16->y;
        fVar8 = pVVar16->z + fVar8;
        value_04.y = (float)uVar129 + fVar7;
        value_04.x = (float)uVar128 + in_stack_86;
        value_04.z._0_1_ = SUB41(fVar8,0);
        value_04.z._1_2_ = (short)((uint)fVar8 >> 8);
        value_04.z._3_1_ = (char)((uint)fVar8 >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (transform,value_04,(MethodInfo *)0x0);
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff68,transform,(MethodInfo *)0x0);
        uVar130 = pVVar16->x;
        uVar131 = pVVar16->y;
        value_07.y = (float)uVar131 + (float)auStack_25._28_4_ * snapConfig.OffsetFromSurface;
        value_07.x = (float)uVar130 + (float)auStack_25._24_4_ * snapConfig.OffsetFromSurface;
        value_07.z = pVVar16->z + (float)auStack_25._32_4_ * snapConfig.OffsetFromSurface;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (transform,value_07,(MethodInfo *)0x0);
        fVar8 = *(float *)((int)fStack_41 + 0x14);
        uVar132 = (undefined4)*(undefined8 *)((int)fStack_41 + 0xc);
        fVar9 = (float)((ulonglong)*(undefined8 *)((int)fStack_41 + 0xc) >> 0x20);
        fStack33 = in_stack_116;
        _cStack00000050 = in_stack_117;
        fVar7 = (float)auStack_25._0_4_;
      }
      else {
        pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0xfffffe88,(MethodInfo *)0x0);
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xffffff00,transform,*pVVar16,snapConfig.AlignmentAxis,
                   (MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar24 = (OBB *)&stack0xfffffffc;
        queryConfig_01.NoVolumeSize.x = fVar10;
        queryConfig_01.ObjectTypes = (int32_t)fVar9;
        queryConfig_01.NoVolumeSize.y = fVar11;
        queryConfig_01.NoVolumeSize.z = fStack_52;
        pOVar133 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                            (pOVar24,root,queryConfig_01,(MethodInfo *)0x0);
        cVar3 = (char)((uint)pOVar24 >> 0x18);
        auStack_25._24_4_ = (pOVar133->_size).y;
        auStack_25._28_4_ = (pOVar133->_size).z;
        auStack_25._32_4_ = (pOVar133->_center).x;
        auStack_25._20_4_ = (pOVar133->_size).x;
        auStack_25._36_4_ = (pOVar133->_center).y;
        auStack_25._40_4_ = (pOVar133->_center).z;
        puStack_38 = (undefined *)(pOVar133->_rotation).x;
        fVar7 = (pOVar133->_rotation).y;
        pLVar57 = (List_1_UnityEngine_Vector3_ *)(pOVar133->_rotation).z;
        fVar8 = (pOVar133->_rotation).w;
        uVar132 = *(undefined4 *)&pOVar133->_isValid;
        if ((char)uVar132 == '\0') goto code_?;
        pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0xfffffec8,(MethodInfo *)0x0);
        uVar134 = pVVar16->x;
        uVar135 = pVVar16->y;
        fVar9 = (float)(uVar134 ^ 
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar10 = (float)(uVar135 ^ 
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar11 = (float)((uint)pVVar16->z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        boxCenter_00.y = (float)puStack_38;
        boxCenter_00.x = (float)auStack_25._40_4_;
        boxCenter_00.z = fVar7;
        boxSize_00.y = (float)auStack_25._32_4_;
        boxSize_00.x = (float)auStack_25._28_4_;
        boxSize_00.z = (float)auStack_25._36_4_;
        QVar136.y = fVar8;
        QVar136.x = (float)pLVar57;
        QVar136.z = (float)uVar132;
        QVar136.w = in_stack_137;
        direction_00.y = fVar10;
        direction_00.x = fVar9;
        direction_00.z = fVar11;
        fVar8 = (float)BoxMath::BoxMath_GetMostAlignedFace
                                  (boxCenter_00,boxSize_00,QVar136,direction_00,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        ptCloud = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                            (root,(BoxFace__Enum)fVar8,0.001,0.01,(MethodInfo *)0x0);
        if (ptCloud == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((ptCloud->fields)._size == 0) goto code_?;
        pVVar16 = Vector3Ex::Vector3Ex_GetPointCloudCenter
                            ((Vector3 *)&stack0xffffff1c,
                             (IEnumerable_1_UnityEngine_Vector3_ *)ptCloud,(MethodInfo *)0x0);
        fVar8 = pVVar16->z;
        pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0xffffff28,(MethodInfo *)0x0);
        uVar138 = pVVar16->x;
        fVar9 = pVVar16->y;
        auStack_25._0_4_ = fVar8 + (float)uVar138 * _UNK_?;
        auStack_25._4_4_ = 0.0;
        auStack_25._8_4_ = 0.0;
        auStack_25._12_4_ = 0.0;
        pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0xffffff30,(MethodInfo *)0x0);
        fVar7 = pVVar16->x;
        uVar139 = pVVar16->y;
        fVar8 = pVVar16->z;
        uVar140 = (undefined1)uVar139;
        uVar141 = (undefined2)((uint)uVar139 >> 8);
        uVar142 = (undefined1)((uint)uVar139 >> 0x18);
        fVar11 = (float)((uint)fVar7 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar10 = (float)((uint)fVar8 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        func_?();
        if (fVar8 == 0.0) goto code_?;
        fVar89 = in_stack_143;
        fVar144 = in_stack_145;
        fVar146 = in_stack_85;
        fVar147 = in_stack_84;
        iVar148 = func_?();
        if (iVar148 == 0) goto code_?;
        uVar149 = *(undefined8 *)(iVar148 + 0x1c);
        fVar150 = *(float *)(iVar148 + 0x24);
        if (cVar3 != '\0') {
          if (snapConfig.SurfaceObject == (GameObject *)0x0) goto code_?;
          terrain = (Terrain *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (snapConfig.SurfaceObject,
                               UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                              );
          pVVar16 = TerrainEx::TerrainEx_GetInterpolatedNormal
                              ((Vector3 *)&stack0xfffffe1c,terrain,*(Vector3 *)((int)fVar150 + 0xc),
                               (MethodInfo *)0x0);
          uVar149._0_4_ = pVVar16->x;
          uVar149._4_4_ = pVVar16->y;
          fVar150 = pVVar16->z;
        }
        normAlignVector.z = fVar150;
        normAlignVector.x = (float)(int)uVar149;
        normAlignVector.y = (float)(int)((ulonglong)uVar149 >> 0x20);
        TransformEx::TransformEx_Align
                  ((Quaternion *)&stack0xfffffea4,transform,normAlignVector,snapConfig.AlignmentAxis
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig.NoVolumeSize.x._1_2_ = uVar141;
        queryConfig.NoVolumeSize.x._0_1_ = uVar140;
        queryConfig.NoVolumeSize.x._3_1_ = uVar142;
        queryConfig.ObjectTypes = (int32_t)fVar7;
        queryConfig.NoVolumeSize.y = fVar8;
        queryConfig.NoVolumeSize.z = (float)ptCloud;
        pOVar24 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                            ((OBB *)auStack_25,root,queryConfig,(MethodInfo *)0x0);
        fVar8 = (pOVar24->_size).x;
        fVar150 = (pOVar24->_size).y;
        fVar151 = (pOVar24->_rotation).x;
        fVar152 = (pOVar24->_rotation).y;
        if (transform == (Transform *)0x0) goto code_?;
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xfffffe6c,transform,(MethodInfo *)0x0);
        quat.y = in_stack_145;
        quat.x = in_stack_143;
        quat.z = in_stack_85;
        quat.w = in_stack_84;
        QuaternionEx::QuaternionEx_RotatePoints(quat,pLVar57,*pVVar16,(MethodInfo *)0x0);
        pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0xfffffe9c,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                  ((Plane *)&stack0xffffff14,*pVVar16,*(Vector3 *)(iVar6 + 0xc),(MethodInfo *)0x0);
        obb._size.y = fVar144;
        obb._size.x = fVar89;
        obb._size.z = fVar146;
        obb._center.x = fVar147;
        obb._center.y = (float)uVar132;
        obb._center.z = in_stack_137;
        obb._rotation.x = in_stack_153;
        obb._rotation.y = in_stack_117;
        obb._rotation.z = fVar9;
        obb._rotation.w = fVar7;
        obb._isValid = pOVar24->_isValid;
        obb._41_3_ = *(undefined3 *)&pOVar24->field_0x29;
        surfacePlane.m_Normal.y = (float)puStack_19;
        surfacePlane.m_Normal.x = (float)ptCloud;
        surfacePlane.m_Normal.z = in_stack_154;
        surfacePlane.m_Distance = fVar10;
        pVVar16 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                            ((Vector3 *)&stack0xfffffec4,obb,surfacePlane,0.1,(MethodInfo *)0x0);
        fVar10 = pVVar16->x;
        fVar7 = pVVar16->z;
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff0c,transform,(MethodInfo *)0x0);
        uVar155 = pVVar16->x;
        uVar156 = pVVar16->y;
        fVar9 = pVVar16->z;
        value_02.y = fVar8 + (float)uVar156;
        value_02.x = fVar11 + (float)uVar155;
        value_02.z = fVar150 + fVar9;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (transform,value_02,(MethodInfo *)0x0);
        offset.y = fVar152;
        offset.x = fVar151;
        offset.z = fVar7;
        Vector3Ex::Vector3Ex_OffsetPoints(in_stack_157,offset,(MethodInfo *)0x0);
        pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0xffffff40,(MethodInfo *)0x0);
        uVar158 = pVVar16->x;
        uVar159 = pVVar16->y;
        embedDirection.y =
             (float)(uVar159 ^ 
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        embedDirection.x =
             (float)(uVar158 ^ 
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        embedDirection.z =
             (float)((uint)pVVar16->z ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        puStack_19 = (undefined *)uVar158;
        ObjectSurfaceSnap_CalculateEmbedVector
                  ((Vector3 *)&stack0xffffff48,in_stack_157,snapConfig.SurfaceObject,
                   embedDirection,snapConfig.SurfaceType,(MethodInfo *)0x0);
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff68,transform,(MethodInfo *)0x0);
        uVar160 = pVVar16->x;
        uVar161 = pVVar16->y;
        auStack_25._32_4_ = pVVar16->z;
        value_08.y = (float)uVar161 + fVar144 + fStack_40 * snapConfig.OffsetFromSurface;
        value_08.x = (float)uVar160 + fVar9 + fStack_45 * snapConfig.OffsetFromSurface;
        value_08.z = (float)auStack_25._32_4_ + fVar10 + fStack_41 * snapConfig.OffsetFromSurface;
        auStack_25._24_4_ = uVar160;
        auStack_25._28_4_ = uVar161;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (transform,value_08,(MethodInfo *)0x0);
        fVar8 = *(float *)((int)fStack_41 + 0x14);
        uVar132 = (undefined4)*(undefined8 *)((int)fStack_41 + 0xc);
        fVar9 = (float)((ulonglong)*(undefined8 *)((int)fStack_41 + 0xc) >> 0x20);
        fVar7 = (float)auStack_25._4_4_;
      }
      uStack_32 = 0;
      uStack_31 = 0;
      uStack_30 = 0;
      __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)0x0;
      inNormal.z = fVar7;
      inNormal.x = (float)_cStack00000050;
      inNormal.y = SUB84(_cStack00000050,4);
      inPoint.y = fVar9;
      inPoint.x = (float)uVar132;
      inPoint.z = fVar8;
      UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                ((Plane *)&uStack_30,inNormal,inPoint,(MethodInfo *)0x0);
      uStack162 = snapConfig.SurfaceHitPoint.x._1_2_;
      cStack163 = snapConfig.SurfaceHitPoint.x._0_1_;
      uStack164 = snapConfig.SurfaceHitPoint.x._3_1_;
      in_stack_34 =
           (float)CONCAT13(snapConfig.SurfaceHitPoint.z._3_1_,
                           CONCAT21(snapConfig.SurfaceHitPoint.z._1_2_,
                                    snapConfig.SurfaceHitPoint.z._0_1_));
      method._0_1_ = 1;
      method._1_2_ = 0;
      method._3_1_ = 0;
      fVar8 = *(float *)((int)fStack_41 + 0x14);
      in_stack_28 = snapConfig.OffsetFromSurface;
      fStack33 = snapConfig.SurfaceHitPoint.y;
      uVar48 = *(undefined8 *)((int)fStack_41 + 0xc);
code_?:
      in_stack_35 = (float)uVar48;
      in_stack_53 = (float)((ulonglong)uVar48 >> 0x20);
      *(uint *)__return_storage_ptr__ = CONCAT13(method._3_1_,CONCAT21(method._1_2_,method._0_1_));
      (__return_storage_ptr__->SittingPlane).m_Normal.x = in_stack_28;
      (__return_storage_ptr__->SittingPlane).m_Normal.y = _cStack00000050;
      (__return_storage_ptr__->SittingPlane).m_Normal.z = fStack33;
      (__return_storage_ptr__->SittingPlane).m_Distance = in_stack_34;
      (__return_storage_ptr__->SittingPoint).x = in_stack_35;
      (__return_storage_ptr__->SittingPoint).y = in_stack_53;
      (__return_storage_ptr__->SittingPoint).z = fVar8;
      return __return_storage_ptr__;
    }
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    queryConfig_04.NoVolumeSize.x = (float)auStack_25._40_4_;
    queryConfig_04.ObjectTypes = auStack_25._36_4_;
    queryConfig_04.NoVolumeSize.y = (float)puStack_38;
    queryConfig_04.NoVolumeSize.z = in_stack_21;
    pOVar24 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                        ((OBB *)&stack0xffffff5c,root,queryConfig_04,(MethodInfo *)0x0);
    snapConfig.SurfaceHitPoint.y = (pOVar24->_size).x;
    fVar8 = (pOVar24->_size).y;
    pfVar165 = &(pOVar24->_size).z;
    fVar7 = *pfVar165;
    fVar9 = (pOVar24->_center).x;
    snapConfig.SurfaceHitPoint.z._0_1_ = SUB41(fVar8,0);
    snapConfig.SurfaceHitPoint.z._1_2_ = (undefined2)((uint)fVar8 >> 8);
    snapConfig.SurfaceHitPoint.z._3_1_ = (undefined1)((uint)fVar8 >> 0x18);
    __return_storage_ptr__ = (ObjectSurfaceSnap_SnapResult *)(pOVar24->_center).y;
    fVar10 = (pOVar24->_center).z;
    QVar136 = *(Quaternion *)pfVar165;
    snapConfig._0_4_ = (pOVar24->_rotation).x;
    snapConfig.AlignmentAxis = (int32_t)(pOVar24->_rotation).y;
    fVar11 = (pOVar24->_rotation).z;
    fVar89 = (pOVar24->_rotation).w;
    fVar8 = *(float *)&pOVar24->_isValid;
    snapConfig.SurfaceHitPoint.x._0_1_ = SUB41(fVar8,0);
    snapConfig.SurfaceHitPoint.x._1_2_ = (undefined2)((uint)fVar8 >> 8);
    snapConfig.SurfaceHitPoint.x._3_1_ = (undefined1)((uint)fVar8 >> 0x18);
    if (snapConfig.SurfaceHitPoint.x._0_1_ == '\0') goto code_?;
    fVar147 = (float)snapConfig.AlignmentAxis;
    fVar146 = (float)snapConfig._0_4_;
    snapConfig.SurfaceType = (int32_t)fVar11;
    snapConfig.SurfaceHitNormal.y = fVar9;
    snapConfig.SurfaceHitNormal.x = fVar7;
    snapConfig.OffsetFromSurface = fVar89;
    fVar144 = fVar10;
    if (in_stack_166 == '\0') {
      uStack_30 = snapConfig.SurfaceHitPoint.z._0_1_;
      uStack_31 = snapConfig.SurfaceHitPoint.z._1_2_;
      uStack_32 = snapConfig.SurfaceHitPoint.z._3_1_;
      if (cVar1 != '\0') {
        if ((snapConfig.SurfaceObject != (GameObject *)0x0) &&
           (fVar8 = snapConfig.SurfaceHitPoint.y, uStack_30 = snapConfig.SurfaceHitPoint.z._0_1_,
           uStack_31 = snapConfig.SurfaceHitPoint.z._1_2_,
           uStack_32 = snapConfig.SurfaceHitPoint.z._3_1_,
           pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (snapConfig.SurfaceObject,(MethodInfo *)0x0),
           pTVar13 != (Transform *)0x0)) {
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff10,pTVar13,(MethodInfo *)0x0);
          pTVar13 = (Transform *)pVVar16->x;
          if (transform != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffff1c,transform,(MethodInfo *)0x0);
            auStack_25._0_4_ = 0.0;
            auStack_25._4_4_ = 0.0;
            puVar49 = (undefined8 *)func_?();
            fVar10 = (float)*puVar49;
            fVar11 = (float)((ulonglong)*puVar49 >> 0x20);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                ((Vector3 *)&stack0xffffff28,pTVar13,(MethodInfo *)0x0);
            Vector3Ex::Vector3Ex_GetMaxAbsComp(*pVVar16,(MethodInfo *)0x0);
            uVar51 = (uint)fVar10 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
            puStack_19 = (undefined *)
                         ((uint)fVar11 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
            fVar10 = (float)((uint)fStack_52 ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
            if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            boxRotation_00.x._1_2_ = method._1_2_;
            boxRotation_00.x._0_1_ = method._0_1_;
            boxRotation_00.x._3_1_ = method._3_1_;
            boxCenter_02.y = snapConfig.SurfaceHitPlane.m_Distance;
            boxCenter_02.x = snapConfig.SurfaceHitPlane.m_Normal.z;
            boxCenter_02.z = snapConfig.SurfaceHitPoint.y;
            boxSize_02.y = in_stack_53;
            boxSize_02.x = in_stack_35;
            boxSize_02.z = in_stack_54;
            boxRotation_00.y = in_stack_28;
            boxRotation_00.z = _cStack00000050;
            boxRotation_00.w = fStack33;
            direction_02.y = (float)puStack_19;
            direction_02.x = (float)uVar51;
            direction_02.z = fVar10;
            BVar56 = BoxMath::BoxMath_GetMostAlignedFace
                               (boxCenter_02,boxSize_02,boxRotation_00,direction_02,
                                (MethodInfo *)0x0);
            if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pLVar57 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                (root,BVar56,0.001,0.01,(MethodInfo *)0x0);
            snapConfig.AlignAxis = 0;
            snapConfig._1_3_ = 0;
            inNormal_00.y = fVar8;
            inNormal_00.x = in_stack_42;
            inNormal_00.z = (float)auStack_25._12_4_;
            inPoint_00.y = (float)auStack_25._20_4_ + in_stack_22 * (float)auStack_25._4_4_;
            inPoint_00.x = fVar9 + fVar89 * (float)auStack_25._4_4_;
            inPoint_00.z = (float)auStack_25._24_4_ + in_stack_23 * (float)auStack_25._4_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                      ((Plane *)&snapConfig.SurfaceHitNormal.z,inNormal_00,inPoint_00,
                       (MethodInfo *)0x0);
            obb_05._size.y = (float)in_stack_58;
            obb_05._size.x = in_stack_59;
            obb_05._size.z = (float)in_stack_60;
            obb_05._center.x = (float)in_stack_61;
            obb_05._center.y = in_stack_62;
            obb_05._center.z = in_stack_63;
            obb_05._rotation.x = in_stack_64;
            obb_05._rotation.y = in_stack_65;
            obb_05._rotation.z = in_stack_70;
            obb_05._rotation.w = in_stack_47;
            obb_05._40_4_ = auStack_25._40_4_;
            surfacePlane_03.m_Normal.z = in_stack_34;
            surfacePlane_03.m_Normal.x = _cStack00000050;
            surfacePlane_03.m_Normal.y = fStack33;
            surfacePlane_03.m_Distance = in_stack_35;
            pVVar16 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                ((Vector3 *)&stack0xffffffd0,obb_05,surfacePlane_03,0.0,
                                 (MethodInfo *)0x0);
            uVar167 = pVVar16->x;
            uVar168 = pVVar16->y;
            fVar9 = pVVar16->z;
            in_stack_34 = (float)uVar167;
            in_stack_35 = (float)uVar168;
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0x000000c0,
                                 (Transform *)snapConfig.SurfaceHitPlane.m_Normal.y,
                                 (MethodInfo *)0x0);
            uVar169 = pVVar16->x;
            uVar170 = pVVar16->y;
            snapConfig.SurfaceHitNormal.y = pVVar16->z;
            snapConfig.SurfaceHitPoint.z._0_1_ = (undefined1)uVar169;
            snapConfig.SurfaceHitPoint.z._1_2_ = (undefined2)((uint)uVar169 >> 8);
            snapConfig.SurfaceHitPoint.z._3_1_ = (undefined1)((uint)uVar169 >> 0x18);
            value_14.y = (float)CONCAT13(uStack_32,CONCAT21(uStack_31,uStack_30)) + (float)uVar170;
            value_14.x = fVar8 + (float)uVar169;
            value_14.z = fVar7 + snapConfig.SurfaceHitNormal.y;
            snapConfig.SurfaceHitNormal.x = (float)uVar170;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      ((Transform *)snapConfig.SurfaceObject,value_14,(MethodInfo *)0x0);
            offset_00.y = in_stack_47;
            offset_00.x = in_stack_70;
            offset_00.z = fVar9;
            Vector3Ex::Vector3Ex_OffsetPoints(pLVar57,offset_00,(MethodInfo *)0x0);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0x0000004c,(Transform *)in_stack_71,
                                 (MethodInfo *)0x0);
            uVar171 = pVVar16->x;
            uVar172 = pVVar16->y;
            snapConfig._0_4_ = (float)uVar172 + snapConfig.OffsetFromSurface * in_stack_46;
            snapConfig.AlignmentAxis =
                 (int32_t)(pVVar16->z + snapConfig.OffsetFromSurface * in_stack_74);
            snapConfig.SurfaceType = 0;
            __return_storage_ptr__ = in_stack_71;
            value.y = (float)snapConfig._0_4_;
            value.x = (float)uVar171 + snapConfig.OffsetFromSurface * in_stack_47;
            value.z = (float)snapConfig.AlignmentAxis;
            snapConfig.SurfaceHitNormal.z = (float)snapConfig.AlignmentAxis;
            snapConfig.SurfaceHitNormal.x = (float)uVar171;
            snapConfig.SurfaceHitNormal.y = (float)uVar172;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      ((Transform *)in_stack_71,value,(MethodInfo *)0x0);
            fStack75 = in_stack_82;
            fStack77 = in_stack_83;
            fStack79 = in_stack_173;
            fStack81 = in_stack_174;
            goto code_?;
          }
        }
        goto code_?;
      }
      fVar89 = snapConfig.SurfaceHitNormal.z;
      if (fVar11 != 1.4013e-45) goto code_?;
    }
    else {
      uStack_30 = snapConfig.SurfaceHitPoint.z._0_1_;
      uStack_31 = snapConfig.SurfaceHitPoint.z._1_2_;
      uStack_32 = snapConfig.SurfaceHitPoint.z._3_1_;
      pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)&stack0xffffff08,(MethodInfo *)0x0);
      fVar89 = pVVar16->z;
    }
    fVar89 = (float)((uint)fVar89 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    func_?();
    if (in_stack_29 == 0.0) goto code_?;
    puStack_19 = (undefined *)func_?();
    if (puStack_19 != (undefined *)0x0) {
      obb_03._center.x._1_2_ = method._1_2_;
      obb_03._center.x._0_1_ = method._0_1_;
      obb_03._center.x._3_1_ = method._3_1_;
      obb_03._size.y = snapConfig.SurfaceHitPlane.m_Distance;
      obb_03._size.x = snapConfig.SurfaceHitPlane.m_Normal.z;
      obb_03._size.z = (float)snapConfig.SurfaceObject;
      obb_03._center.y = fVar7;
      obb_03._center.z = fVar9;
      obb_03._rotation.x = (float)__return_storage_ptr__;
      obb_03._rotation.y = fVar10;
      obb_03._rotation.z = fVar147;
      obb_03._rotation.w = in_stack_42;
      obb_03._40_4_ = in_stack_154;
      pVVar16 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                          ((Vector3 *)&stack0xffffff24,obb_03,*(Plane *)(puStack_19 + 0x28),0.0,
                           (MethodInfo *)0x0);
      auStack_25._16_4_ = pVVar16->x;
      auStack_25._20_4_ = pVVar16->y;
      auStack_25._24_4_ = pVVar16->z;
      if (transform == (Transform *)0x0) goto code_?;
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff6c,transform,(MethodInfo *)0x0);
      uVar175 = pVVar16->x;
      uVar176 = pVVar16->y;
      value_10.y = (float)uVar176 + (float)auStack_25._32_4_;
      value_10.x = (float)uVar175 + (float)auStack_25._28_4_;
      value_10.z = pVVar16->z + (float)auStack_25._36_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (transform,value_10,(MethodInfo *)0x0);
      if (auStack_25[8] != '\0') {
        fVar11 = in_stack_74 + fVar11;
        auStack_25._12_4_ =
             (uint)(float)*(undefined8 *)(auStack_25._0_4_ + 0x1c) ^
             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
        auStack_25._20_4_ =
             *(uint *)(auStack_25._0_4_ + 0x24) ^
             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
        auStack_25._16_4_ =
             (uint)(float)((ulonglong)*(undefined8 *)(auStack_25._0_4_ + 0x1c) >> 0x20) ^
             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        boxCenter_01.y = in_stack_177;
        boxCenter_01.x = (float)in_stack_178;
        boxCenter_01.z = in_stack_179;
        boxSize_01.y = fVar146;
        boxSize_01.x = fVar144;
        boxSize_01.z = fVar11;
        direction_01.y = in_stack_180;
        direction_01.x = fVar89;
        direction_01.z = fVar8;
        fVar8 = (float)BoxMath::BoxMath_GetMostAlignedFace
                                  (boxCenter_01,boxSize_01,QVar136,direction_01,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pLVar57 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                            (root,(BoxFace__Enum)fVar8,0.001,0.01,(MethodInfo *)0x0);
        pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0xffffff44,(MethodInfo *)0x0);
        uVar181 = pVVar16->x;
        uVar182 = pVVar16->y;
        embedDirection_00.y =
             (float)(uVar182 ^ 
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        embedDirection_00.x =
             (float)(uVar181 ^ 
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        embedDirection_00.z =
             (float)((uint)pVVar16->z ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        ObjectSurfaceSnap_CalculateEmbedVector
                  ((Vector3 *)&stack0xffffff4c,pLVar57,snapConfig.SurfaceObject,embedDirection_00,
                   snapConfig.SurfaceType,(MethodInfo *)0x0);
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff6c,transform,(MethodInfo *)0x0);
        uVar183 = pVVar16->x;
        uVar184 = pVVar16->y;
        value_11.y = (float)uVar184 + fStack_41;
        value_11.x = (float)uVar183 + fStack_40;
        value_11.z = pVVar16->z + (float)auStack_25._0_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (transform,value_11,(MethodInfo *)0x0);
      }
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff8c,transform,(MethodInfo *)0x0);
      uVar185 = auStack_25._12_4_;
      uVar186 = pVVar16->x;
      uVar187 = pVVar16->y;
      auStack_25._32_4_ = pVVar16->z;
      auStack_25._0_4_ =
           (float)auStack_25._32_4_ +
           snapConfig.OffsetFromSurface * *(float *)(auStack_25._12_4_ + 0x24);
      value_13.y = (float)uVar187 +
                   snapConfig.OffsetFromSurface *
                   (float)((ulonglong)*(undefined8 *)(auStack_25._12_4_ + 0x1c) >> 0x20);
      value_13.x = (float)uVar186 +
                   snapConfig.OffsetFromSurface * (float)*(undefined8 *)(auStack_25._12_4_ + 0x1c);
      value_13.z = (float)auStack_25._0_4_;
      auStack_25._24_4_ = uVar186;
      auStack_25._28_4_ = uVar187;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (transform,value_13,(MethodInfo *)0x0);
      snapConfig.SurfaceHitPoint.y = *(float *)(uVar185 + 0x28);
      uVar132 = *(undefined4 *)(uVar185 + 0x2c);
      snapConfig.SurfaceHitNormal.x = *(float *)(uVar185 + 0x30);
      snapConfig.SurfaceHitNormal.y = *(float *)(uVar185 + 0x34);
      snapConfig.SurfaceHitPoint.x._0_1_ = '\x01';
      snapConfig.SurfaceHitPoint.x._1_2_ = 0;
      snapConfig.SurfaceHitPoint.x._3_1_ = 0;
      fVar8 = *(float *)(uVar185 + 0x14);
      snapConfig.SurfaceHitPoint.z._0_1_ = (undefined1)uVar132;
      snapConfig.SurfaceHitPoint.z._1_2_ = (undefined2)((uint)uVar132 >> 8);
      snapConfig.SurfaceHitPoint.z._3_1_ = (undefined1)((uint)uVar132 >> 0x18);
      uVar188 = *(undefined8 *)(uVar185 + 0xc);
      goto code_?;
    }
    if ((cStack_189 != '\0') || (snapConfig.SurfaceType != 1)) goto code_?;
    obb_02._center.x._1_2_ = method._1_2_;
    obb_02._center.x._0_1_ = method._0_1_;
    obb_02._center.x._3_1_ = method._3_1_;
    obb_02._size.y = snapConfig.SurfaceHitPlane.m_Distance;
    obb_02._size.x = snapConfig.SurfaceHitPlane.m_Normal.z;
    obb_02._size.z = (float)snapConfig.SurfaceObject;
    obb_02._center.y = fVar7;
    obb_02._center.z = fVar9;
    obb_02._rotation.x = (float)__return_storage_ptr__;
    obb_02._rotation.y = fVar10;
    obb_02._rotation.z = fVar147;
    obb_02._rotation.w = in_stack_42;
    obb_02._40_4_ = in_stack_154;
    surfacePlane_01.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
    surfacePlane_01.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
    surfacePlane_01.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
    surfacePlane_01.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
    ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
              ((Vector3 *)&stack0xffffff24,obb_02,surfacePlane_01,0.0,(MethodInfo *)0x0);
    if (transform == (Transform *)0x0) goto code_?;
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff6c,transform,(MethodInfo *)0x0);
    uVar190 = pVVar16->x;
    uVar191 = pVVar16->y;
    value_09.y = (float)uVar191 + fStack_41;
    value_09.x = (float)uVar190 + fStack_40;
    value_09.z = pVVar16->z + (float)auStack_25._0_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (transform,value_09,(MethodInfo *)0x0);
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff8c,transform,(MethodInfo *)0x0);
    uVar192 = pVVar16->x;
    uVar193 = pVVar16->y;
    auStack_25._0_4_ = pVVar16->z + snapConfig.SurfaceHitNormal.z * snapConfig.OffsetFromSurface;
    value_12.y = (float)uVar193 + snapConfig.SurfaceHitNormal.y * snapConfig.OffsetFromSurface;
    value_12.x = (float)uVar192 + snapConfig.SurfaceHitNormal.x * snapConfig.OffsetFromSurface;
    value_12.z = (float)auStack_25._0_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (transform,value_12,(MethodInfo *)0x0);
    snapConfig.SurfaceHitPoint.x._1_2_ = 0;
    snapConfig.SurfaceHitPoint.x._3_1_ = 0;
    snapConfig.SurfaceHitPoint.x._0_1_ = '\x01';
    snapConfig.SurfaceHitPoint.y = snapConfig.SurfaceHitPlane.m_Normal.x;
    snapConfig.SurfaceHitPoint.z._0_1_ = SUB41(snapConfig.SurfaceHitPlane.m_Normal.y,0);
    snapConfig.SurfaceHitPoint.z._1_2_ =
         (undefined2)((uint)snapConfig.SurfaceHitPlane.m_Normal.y >> 8);
    snapConfig.SurfaceHitPoint.z._3_1_ =
         (undefined1)((uint)snapConfig.SurfaceHitPlane.m_Normal.y >> 0x18);
    snapConfig.SurfaceHitNormal.x = snapConfig.SurfaceHitPlane.m_Normal.z;
    snapConfig.SurfaceHitNormal.y = snapConfig.SurfaceHitPlane.m_Distance;
    plane_02.m_Normal.y = snapConfig.SurfaceHitPlane.m_Normal.y;
    plane_02.m_Normal.x = snapConfig.SurfaceHitPlane.m_Normal.x;
    plane_02.m_Normal.z = snapConfig.SurfaceHitPlane.m_Normal.z;
    plane_02.m_Distance = snapConfig.SurfaceHitPlane.m_Distance;
    pt_01.y = in_stack_95;
    pt_01.x = (float)in_stack_94;
    pt_01.z = fVar147;
    pVVar16 = PlaneEx::PlaneEx_ProjectPoint
                        ((Vector3 *)(auStack_25 + 0xc),plane_02,pt_01,(MethodInfo *)0x0);
  }
code_?:
  uVar188._0_4_ = pVVar16->x;
  uVar188._4_4_ = pVVar16->y;
  fVar8 = pVVar16->z;
code_?:
  snapConfig.SurfaceHitNormal.z = (float)uVar188;
  snapConfig.SurfaceHitPlane.m_Normal.x = (float)((ulonglong)uVar188 >> 0x20);
  *(uint *)__return_storage_ptr__ =
       CONCAT13(snapConfig.SurfaceHitPoint.x._3_1_,
                CONCAT21(snapConfig.SurfaceHitPoint.x._1_2_,snapConfig.SurfaceHitPoint.x._0_1_));
  (__return_storage_ptr__->SittingPlane).m_Normal.x = snapConfig.SurfaceHitPoint.y;
  (__return_storage_ptr__->SittingPlane).m_Normal.y =
       (float)CONCAT13(snapConfig.SurfaceHitPoint.z._3_1_,
                       CONCAT21(snapConfig.SurfaceHitPoint.z._1_2_,
                                snapConfig.SurfaceHitPoint.z._0_1_));
  (__return_storage_ptr__->SittingPlane).m_Normal.z = snapConfig.SurfaceHitNormal.x;
  (__return_storage_ptr__->SittingPlane).m_Distance = snapConfig.SurfaceHitNormal.y;
  (__return_storage_ptr__->SittingPoint).x = snapConfig.SurfaceHitNormal.z;
  (__return_storage_ptr__->SittingPoint).y = snapConfig.SurfaceHitPlane.m_Normal.x;
  (__return_storage_ptr__->SittingPoint).z = fVar8;
  return __return_storage_ptr__;
}

