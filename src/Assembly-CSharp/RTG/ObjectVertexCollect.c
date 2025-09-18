
/* List`1[UnityEngine.Vector3] CollectHierarchyVerts(GameObject, BoxFace, Single, Single) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
          (GameObject *root,BoxFace__Enum collectFace,float collectBoxScale,float collectEps,
          MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__RTG__ObjectVertexCollect);
    func_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff34,0,0x2c);
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  pLVar2 = GameObjectEx::GameObjectEx_GetMeshObjectsInHierarchy(root,(MethodInfo *)0x0);
  pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            GameObjectEx::GameObjectEx_GetSpriteObjectsInHierarchy(root,(MethodInfo *)0x0);
  if (pLVar2 != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
      if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      if ((pLVar3->fields)._size == 0) goto code_?;
    }
    uVar4._0_4_ = 0.0;
    uVar4._4_4_ = 0.0;
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x5;
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    queryConfig.NoVolumeSize.x = (float)uVar4;
    queryConfig.ObjectTypes = (int32_t)pLVar5;
    queryConfig.NoVolumeSize.y = SUB84(uVar4,4);
    queryConfig.NoVolumeSize.z = 0.0;
    pOVar6 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                        ((OBB *)&stack0xffffff08,root,queryConfig,(MethodInfo *)0x0);
    fVar7 = (pOVar6->_size).x;
    fVar8 = (pOVar6->_size).y;
    RVar9 = (RegexCharClass_SingleRange)(pOVar6->_size).z;
    boxSize = pOVar6->_size;
    VVar10 = pOVar6->_size;
    pVVar11 = &pOVar6->_center;
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pVVar11->x;
    fVar12 = (pOVar6->_center).y;
    fVar13 = (pOVar6->_center).z;
    boxCenter = *pVVar11;
    VVar14 = *pVVar11;
    pQVar15 = &pOVar6->_rotation;
    pMVar16 = (MethodInfo *)pQVar15->x;
    pOVar17 = (ObjectVertexCollect__Class *)(pOVar6->_rotation).y;
    fVar18 = (pOVar6->_rotation).z;
    fVar19 = (pOVar6->_rotation).w;
    uVar20 = pQVar15->x;
    uVar21 = pQVar15->y;
    uVar22 = pQVar15->z;
    boxRotation_00.z = (float)uVar22;
    boxRotation_00.y = (float)uVar21;
    boxRotation_00.x = (float)uVar20;
    uVar23 = pQVar15->x;
    uVar24 = pQVar15->y;
    uVar25 = pQVar15->z;
    boxRotation.z = (float)uVar25;
    boxRotation.y = (float)uVar24;
    boxRotation.x = (float)uVar23;
    if ((char)*(undefined4 *)&pOVar6->_isValid == '\0') {
code_?:
      pLVar26 = (List_1_UnityEngine_Vector3_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar26,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      *unaff_FS_OFFSET = uVar1;
      return pLVar26;
    }
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar27 = (float)BoxMath::BoxMath_GetFaceAxisIndex(collectFace,(MethodInfo *)0x0);
    pMVar28 = (MethodInfo *)&UNK_?;
    boxRotation.w = fVar19;
    method_00 = RVar9;
    pVVar11 = BoxMath::BoxMath_CalcBoxFaceCenter
                        ((Vector3 *)&stack0xffffffb8,VVar14,VVar10,boxRotation,collectFace,
                         (MethodInfo *)0x0);
    uVar29 = pVVar11->x;
    boxRotation_00.w = fVar19;
    pVVar11 = BoxMath::BoxMath_CalcBoxFaceNormal
                        ((Vector3 *)&stack0xffffffb8,boxCenter,boxSize,boxRotation_00,collectFace,
                         (MethodInfo *)0x0);
    fVar30 = pVVar11->y;
    fVar31 = pVVar11->z;
    fVar32 = collectEps + collectEps;
    fVar33 = fVar27;
    fVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       ((Vector3 *)&stack0xffffffb8,(int32_t)fVar27,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              ((Vector3 *)&stack0xffffffcc,(int32_t)fVar27,fVar34 * collectBoxScale + fVar32,
               (MethodInfo *)0x0);
    iVar35 = ((int)fVar27 + 1) % 3;
    fVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       ((Vector3 *)&stack0xffffffcc,iVar35,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              ((Vector3 *)&stack0xffffffcc,iVar35,fVar34 + fVar32,(MethodInfo *)0x0);
    iVar35 = ((int)fVar27 + 2) % 3;
    puVar36 = &UNK_?;
    fVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       ((Vector3 *)&stack0xffffffcc,iVar35,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              ((Vector3 *)&stack0xffffffcc,iVar35,fVar34 + fVar32,(MethodInfo *)0x0);
    fVar34 = 0.0;
    pVVar11 = (Vector3 *)&stack0xffffffcc;
    puVar37 = &UNK_?;
    fVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       (pVVar11,(int32_t)fVar27,(MethodInfo *)0x0);
    fVar32 = (float)((uint)fVar32 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
             _UNK_? + collectEps;
    pLVar38 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              ((float)puVar36 + fVar31 * fVar32);
    VVar14.y = fVar30 * fVar32 + 4.4779087e-29;
    VVar14.x = (float)uVar29 + fVar34 * fVar32;
    VVar14.z = (float)pLVar38;
    VVar10.y = (float)pVVar11;
    VVar10.x = (float)puVar37;
    VVar10.z = fVar27;
    OBB::OBB__ctor((OBB *)&stack0xffffff34,VVar14,VVar10,(MethodInfo *)0x0);
    puVar36 = &UNK_?;
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,0x50,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    pLVar39 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffb4,pLVar38,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    RVar40 = pLVar39->_current;
    while( true ) {
      RVar41 = RVar40;
      bVar42 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff94,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                         );
      if (bVar42 == 0) break;
      fVar30 = fVar7;
      fVar31 = fVar8;
      RVar43 = RVar9;
      pMVar44 = pMVar16;
      RVar40 = RVar41;
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__GameObjectEx);
        fVar30 = fVar7;
        fVar31 = fVar8;
        RVar43 = RVar9;
        pMVar44 = pMVar16;
      }
      unityMesh = GameObjectEx::GameObjectEx_GetMesh((GameObject *)RVar41,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar28 = (MethodInfo *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
      if (pMVar28 == (MethodInfo *)0x0) goto code_?;
      this_00 = RTMeshDb::RTMeshDb_GetRTMesh((RTMeshDb *)pMVar28,unityMesh,(MethodInfo *)0x0);
      fVar7 = fVar30;
      fVar8 = fVar31;
      RVar9 = RVar43;
      pMVar16 = pMVar44;
      if (this_00 != (RTMesh *)0x0) {
        if (RVar41 == (RegexCharClass_SingleRange)0x0) goto code_?;
        pOVar45 = pOVar17;
        pLVar38 = pLVar5;
        fVar27 = fVar18;
        fVar32 = fVar19;
        fVar34 = fVar33;
        fVar46 = fVar12;
        fVar47 = fVar13;
        pTVar48 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)RVar41,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        method_00.First = 0;
        method_00.Last = 0;
        obb._size.y = fVar46;
        obb._size.x = (float)pLVar38;
        obb._size.z = fVar47;
        obb._center.x = fVar30;
        obb._center.y = fVar31;
        obb._center.z = (float)RVar43;
        obb._rotation.x = (float)pMVar44;
        obb._rotation.y = (float)pOVar45;
        obb._rotation.z = fVar27;
        obb._rotation.w = fVar32;
        obb._40_4_ = fVar34;
        RTMesh::RTMesh_OverlapVerts
                  (this_00,obb,pTVar48,
                   TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer,
                   (MethodInfo *)0x0);
        pLVar26 = TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer;
        if (pLVar26 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        pMVar28 = pMVar44;
        if ((pLVar26->fields)._size != 0) {
          if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
            pMVar16 = (MethodInfo *)&UNK_?;
            pOVar17 = TypeInfo__RTG__ObjectVertexCollect;
            func_?();
            pMVar28 = pMVar44;
          }
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
          List_1_UnityEngine_Vector3__AddRange
                    ((List_1_UnityEngine_Vector3_ *)this,
                     (IEnumerable_1_UnityEngine_Vector3_ *)
                     TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer
                     ,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                    );
        }
      }
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff94,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,pMVar28);
    if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar39 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffb4,pLVar3,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                          );
      RVar40 = pLVar39->_current;
      while( true ) {
        bVar42 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff94,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                           );
        if (bVar42 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff94,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                     ,(MethodInfo *)method_00);
          *unaff_FS_OFFSET = puVar36;
          return (List_1_UnityEngine_Vector3_ *)this;
        }
        pLVar3 = pLVar5;
        fVar30 = fVar12;
        fVar31 = fVar13;
        fVar27 = fVar7;
        fVar32 = fVar8;
        RVar41 = RVar9;
        pMVar28 = pMVar16;
        pOVar45 = pOVar17;
        fVar34 = fVar33;
        RVar43 = RVar40;
        if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pLVar3 = pLVar5;
          fVar30 = fVar12;
          fVar31 = fVar13;
          fVar27 = fVar7;
          fVar32 = fVar8;
          RVar41 = RVar9;
          pMVar28 = pMVar16;
          pOVar45 = pOVar17;
          fVar34 = fVar33;
        }
        sprite = GameObjectEx::GameObjectEx_GetSprite((GameObject *)RVar40,(MethodInfo *)0x0);
        if (RVar40 == (RegexCharClass_SingleRange)0x0) break;
        pTVar48 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)RVar40,(MethodInfo *)0x0);
        method_00 = RVar40;
        pLVar5 = pLVar3;
        fVar12 = fVar30;
        fVar13 = fVar31;
        fVar7 = fVar27;
        fVar8 = fVar32;
        RVar9 = RVar41;
        pMVar16 = pMVar28;
        pOVar17 = pOVar45;
        fVar33 = fVar34;
        fVar46 = fVar18;
        fVar47 = fVar19;
        if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          method_00 = RVar40;
        }
        RVar40 = RVar43;
        collectOBB._size.y = fVar30;
        collectOBB._size.x = (float)pLVar3;
        collectOBB._size.z = fVar31;
        collectOBB._center.x = fVar27;
        collectOBB._center.y = fVar32;
        collectOBB._center.z = (float)RVar41;
        collectOBB._rotation.x = (float)pMVar28;
        collectOBB._rotation.y = (float)pOVar45;
        collectOBB._rotation.z = fVar46;
        collectOBB._rotation.w = fVar47;
        collectOBB._40_4_ = fVar34;
        pLVar26 = ObjectVertexCollect_CollectWorldSpriteVerts
                            (sprite,pTVar48,collectOBB,(MethodInfo *)0x0);
        if (pLVar26 == (List_1_UnityEngine_Vector3_ *)0x0) break;
        if ((pLVar26->fields)._size != 0) {
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
          List_1_UnityEngine_Vector3__AddRange
                    ((List_1_UnityEngine_Vector3_ *)this,
                     (IEnumerable_1_UnityEngine_Vector3_ *)pLVar26,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                    );
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar49 = (code *)swi(3);
  pLVar26 = (List_1_UnityEngine_Vector3_ *)(*pcVar49)();
  return pLVar26;
}


/* List`1[UnityEngine.Vector3] CollectModelSpriteVerts(Sprite, AABB) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect_CollectModelSpriteVerts
          (Sprite *sprite,AABB collectAABB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?();
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if (sprite != (Sprite *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_vertices
                       (sprite,(MethodInfo *)0x0);
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    uVar2 = 0;
    if (pVVar1 != (Vector2__Array *)0x0) {
      pVVar3 = pVVar1->vector;
      while( true ) {
        if ((int)pVVar1->max_length <= (int)uVar2) {
          return (List_1_UnityEngine_Vector3_ *)this;
        }
        if (pVVar1->max_length <= uVar2) break;
        VVar4 = *pVVar3;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        boxRotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__BoxMath);
        }
        point.z = 0.0;
        point.x = pVVar3->x;
        point.y = pVVar3->y;
        bVar5 = BoxMath::BoxMath_ContainsPoint
                          (point,collectAABB._center,collectAABB._size,boxRotation,
                           (BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0);
        if (bVar5 != 0) {
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
          func_?(this,VVar4,0,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                         );
        }
        uVar2 = uVar2 + 1;
        pVVar3 = pVVar3 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_Vector3_ *)(*pcVar6)();
  return pLVar7;
}


/* List`1[UnityEngine.Vector3] CollectWorldSpriteVerts(Sprite, Transform, OBB) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect_CollectWorldSpriteVerts
          (Sprite *sprite,Transform *spriteTransform,OBB collectOBB,MethodInfo *method)

{
  pLStack_1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
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
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
         SpriteEx::SpriteEx_GetWorldVerts(sprite,spriteTransform,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,7,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                        &stack0xffffffa8,this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar4->_version;
    uVar5 = (pLVar4->_current).asset;
    uVar6 = (pLVar4->_current).alias;
    uVar7 = (pLVar4->_current).path;
    point.y = (float)uVar7;
    point.x = (float)uVar6;
    pLStack_1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x1;
    while( true ) {
      do {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                          ((List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                           &stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        if (bVar8 == 0) {
          pLStack_1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_Vector3_ *)this_00;
        }
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        point.z = (float)uVar5;
        bVar8 = BoxMath::BoxMath_ContainsPoint
                          (point,collectOBB._center,collectOBB._size,collectOBB._rotation,
                           (BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0);
      } while (bVar8 == 0);
      if (this_00 ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) break;
      pLStack_1 = this_00;
      func_?();
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  pLVar10 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
  return pLVar10;
}


/* ObjectVertexCollect() */

void Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__RTG__ObjectVertexCollect);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_Vector3_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer = this;
  func_?(TypeInfo__RTG__ObjectVertexCollect->static_fields,this);
  return;
}

