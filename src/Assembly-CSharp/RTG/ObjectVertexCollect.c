
/* List`1[UnityEngine.Vector3] CollectHierarchyVerts(GameObject, BoxFace, Single, Single) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
          (GameObject *root,BoxFace__Enum collectFace,float collectBoxScale,float collectEps,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectVertexCollect);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIStack_1 = (InvokerMethod)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  pLStack_4 = (List_1_UnityEngine_GameObject_ *)0x0;
  pIStack_5 = (Il2CppGenericMethod *)0x0;
  uStack_6._0_1_ = 0;
  uStack_6._1_3_ = 0;
  _Stack_108.genericMethod = (Il2CppGenericMethod *)0x0;
  _Stack_100.genericMethod = (Il2CppGenericMethod *)0x0;
  pIStack_7 = (IndexOutOfRangeException *)0x0;
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  _Var21.genericMethod =
       (Il2CppGenericMethod *)
       GameObjectEx::GameObjectEx_GetMeshObjectsInHierarchy(root,(MethodInfo *)0x0);
  _Var22.genericMethod =
       (Il2CppGenericMethod *)
       GameObjectEx::GameObjectEx_GetSpriteObjectsInHierarchy(root,(MethodInfo *)0x0);
  _Stack_98.genericMethod = _Var22.genericMethod;
  unique0x100016c8 = (_union_155 *)CONCAT44(fStack_8,auStack_9._8_4_);
  if ((List_1_UnityEngine_GameObject_ *)_Var21.genericMethod !=
      (List_1_UnityEngine_GameObject_ *)0x0) {
    if (*(int *)&_Var21.genericMethod[1].methodDefinition == 0) {
      unique0x100016d0 = (_union_155 *)CONCAT44(fStack_8,auStack_9._8_4_);
      if ((List_1_UnityEngine_GameObject_ *)_Var22.genericMethod ==
          (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      if (*(int *)&_Var22.genericMethod[1].methodDefinition == 0) goto code_?;
    }
    AStack_10._size.x = 0.0;
    AStack_10._size.y = 0.0;
    AStack_10._size.z = 0.0;
    AStack_10._center.x = 0.0;
    if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__ObjectBounds);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_9._0_4_ = 7.00649e-45;
    auStack_9._4_4_ = AStack_10._size.y;
    auStack_9._8_4_ = AStack_10._size.z;
    fStack_8 = AStack_10._center.x;
    if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
      FUN_?();
    }
    p_Var24 = (_union_155 *)
              ObjectBounds::ObjectBounds_CalcHierarchyModelAABB
                        (&AStack_10,root,(ObjectBounds_QueryConfig *)auStack_9,(MethodInfo *)0x0);
    _Var9 = *p_Var24;
    _Var10 = p_Var24[1];
    _Var3 = p_Var24[2];
    _Stack_138 = _Var9;
    _Stack_130 = _Var10;
    _Stack_128 = _Var3;
    if (*(bool *)(p_Var24 + 3) == 0) {
      uStack_11 = 0;
      uStack_12 = (InvokerMethod)0x0;
      fStack_13 = 0.0;
      fStack_14 = 0.0;
      fStack_15 = 0.0;
      fStack_16 = 0.0;
      pLStack_17 = (List_1_UnityEngine_GameObject_ *)0x0;
      pIStack_18 = (Il2CppGenericMethod *)0x0;
      _Stack_140._0_4_ = 0;
    }
    else {
      uVar19 = *(undefined4 *)(p_Var24 + 3);
      if (root == (GameObject *)0x0) goto code_?;
      pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (root,(MethodInfo *)0x0);
      uStack_12 = (InvokerMethod)0x0;
      fStack_13 = 0.0;
      fStack_14 = 0.0;
      fStack_15 = 0.0;
      fStack_16 = 0.0;
      pLStack_17 = (List_1_UnityEngine_GameObject_ *)0x0;
      pIStack_18 = (Il2CppGenericMethod *)0x0;
      _Stack_140._0_4_ = 0;
      _Stack_138 = _Var9;
      _Stack_130 = _Var10;
      _Stack_128 = _Var3;
      uStack_21 = uVar19;
      OBB::OBB__ctor_7((OBB *)&uStack_12,(AABB *)&_Stack_138,pTVar20,(MethodInfo *)0x0);
    }
    if (_Stack_140._0_1_ == 0) {
code_?:
      pLVar22 = (List_1_UnityEngine_Vector3_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      FUN_?(pLVar22,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      return pLVar22;
    }
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar23 = pIStack_18;
    pLVar24 = pLStack_17;
    fVar25 = fStack_16;
    fVar26 = fStack_13;
    pIVar27 = uStack_12;
    if ((collectFace == BoxFace__Enum_Top) || (collectFace == BoxFace__Enum_Bottom)) {
      iVar28 = 1;
    }
    else if ((collectFace == BoxFace__Enum_Left) || (collectFace == BoxFace__Enum_Right)) {
      iVar28 = 0;
    }
    else {
      iVar28 = 2;
      if (BoxFace__Enum_Back < collectFace) {
        iVar28 = -1;
      }
    }
    AStack_10._size.x = SUB84(pLStack_17,0);
    AStack_10._size.y = (float)((ulonglong)pLStack_17 >> 0x20);
    AStack_10._size.z = SUB84(pIStack_18,0);
    AStack_10._center.x = (float)((ulonglong)pIStack_18 >> 0x20);
    uStack_29 = uStack_12;
    fStack_30 = fStack_13;
    pIVar31 = (Il2CppMethodPointer)CONCAT44(fStack_15,fStack_14);
    fStack_32 = fStack_16;
    auStack_33 = (undefined1  [8])pIVar31;
    pVVar34 = BoxMath::BoxMath_CalcBoxFaceCenter
                        ((Vector3 *)auStack_9,(Vector3 *)auStack_33,(Vector3 *)&uStack_29,
                         (Quaternion *)&AStack_10,collectFace,(MethodInfo *)0x0);
    uVar35 = pVVar34->x;
    uVar36 = pVVar34->y;
    fVar37 = pVVar34->z;
    _Stack_138.genericMethod = (Il2CppGenericMethod *)pLVar24;
    _Stack_130.genericMethod = pIVar23;
    auStack_33 = (undefined1  [8])pIVar27;
    fStack_32 = fVar26;
    fStack_30 = fVar25;
    p_Var24 = &_Stack_138;
    method_00 = (MethodInfo *)auStack_33;
    uStack_29 = (InvokerMethod)pIVar31;
    AStack_10._size.x = (float)uVar35;
    AStack_10._size.y = (float)uVar36;
    pVVar34 = BoxMath::BoxMath_CalcBoxFaceNormal
                        ((Vector3 *)auStack_9,(Vector3 *)&uStack_29,(Vector3 *)method_00,
                         (Quaternion *)p_Var24,collectFace,(MethodInfo *)0x0);
    auStack_33 = *(undefined1 (*) [8])pVVar34;
    fVar25 = pVVar34->z;
    fVar38 = collectEps + collectEps;
    uStack_29 = uStack_12;
    fStack_30 = fVar26;
    if (iVar28 == 0) {
      uStack_29 = (InvokerMethod)
                   CONCAT44(uStack_12._4_4_,(float)uStack_12 * collectBoxScale + fVar38);
    }
    else if (iVar28 == 1) {
      uStack_29 = (InvokerMethod)
                   CONCAT44(uStack_12._4_4_ * collectBoxScale + fVar38,(float)uStack_12);
    }
    else {
      if (iVar28 != 2) {
        uVar39 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar40 = (IndexOutOfRangeException *)func_?(uVar39);
        pSVar41 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (pIVar40,pSVar41,(MethodInfo *)0x0);
        uVar39 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
        FUN_?(pIVar40,uVar39);
        pcVar42 = (code *)swi(3);
        pLVar22 = (List_1_UnityEngine_Vector3_ *)(*pcVar42)();
        return pLVar22;
      }
      fStack_30 = fVar26 * collectBoxScale + fVar38;
    }
    iVar43 = iVar28 + 1;
    iVar43 = iVar43 + (iVar43 / 3 + (iVar43 >> 0x1f) +
                      (int)(((longlong)iVar43 / 3 + ((longlong)iVar43 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * -3;
    fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       ((Vector3 *)&uStack_29,iVar43,method_00);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              ((Vector3 *)&uStack_29,iVar43,fVar38 + fVar26,(MethodInfo *)p_Var24);
    iVar43 = iVar28 + 2;
    iVar43 = iVar43 + (iVar43 / 3 + (iVar43 >> 0x1f) +
                      (int)(((longlong)iVar43 / 3 + ((longlong)iVar43 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * -3;
    fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       ((Vector3 *)&uStack_29,iVar43,method_00);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              ((Vector3 *)&uStack_29,iVar43,fVar38 + fVar26,(MethodInfo *)p_Var24);
    fVar26 = (float)uStack_29;
    if (((iVar28 == 0) || (fVar26 = uStack_29._4_4_, iVar28 == 1)) ||
       (fVar26 = fStack_30, iVar28 == 2)) {
      fVar26 = (float)((uint)fVar26 ^ _UNK_?) * _UNK_? + collectEps;
      uStack_3 = CONCAT44(fVar26 * fVar25 + fVar37,
                           fVar26 * (float)auStack_33._4_4_ + AStack_10._size.y);
      pIStack_1 = uStack_29;
      uStack_2 = CONCAT44(fVar26 * (float)auStack_33._0_4_ + AStack_10._size.x,fStack_30);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_6._0_1_ = 1;
      pLStack_4 = pLVar24;
      pIStack_5 = pIVar23;
      pLVar22 = (List_1_UnityEngine_Vector3_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      pvVar44 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_->
                klass->rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar44 + 0x135) & 1) == 0) {
        pvVar44 = (void *)FUN_?(pvVar44);
      }
      pVVar45 = (Vector3__Array *)FUN_?(pvVar44,0x50);
      uVar19 = uStack_6;
      pIVar23 = pIStack_5;
      pLVar24 = pLStack_4;
      uVar46 = uStack_3;
      uVar39 = uStack_2;
      pIVar27 = pIStack_1;
      (pLVar22->fields)._items = pVVar45;
      pIVar40 = (IndexOutOfRangeException *)0xADDR;
      if (iRam_? != 0) {
        uVar47 = (uint)((ulonglong)&pLVar22->fields >> 0xc);
        uVar48 = (ulonglong)((uVar47 & 0x1fffff) >> 6);
        do {
          uVar49 = *(ulonglong *)(uVar48 * 8 + 0xADDR);
          puVar50 = (ulonglong *)(uVar48 * 8 + 0xADDR);
          LOCK();
          bVar51 = uVar49 == *puVar50;
          if (bVar51) {
            *puVar50 = uVar49 | 1L << (uVar47 & 0x3f);
          }
          UNLOCK();
        } while (!bVar51);
      }
      if (iRam_? != 0) {
        uVar47 = (uint)((ulonglong)&_Stack_138 >> 0xc);
        uVar48 = (ulonglong)((uVar47 & 0x1fffff) >> 6);
        do {
          uVar49 = *(ulonglong *)(uVar48 * 8 + 0xADDR);
          puVar50 = (ulonglong *)(uVar48 * 8 + 0xADDR);
          LOCK();
          bVar51 = uVar49 == *puVar50;
          if (bVar51) {
            *puVar50 = uVar49 | 1L << (uVar47 & 0x3f);
          }
          UNLOCK();
        } while (!bVar51);
      }
      _Stack_130.genericMethod =
           (Il2CppGenericMethod *)
           ((ulonglong)(uint)*(int32_t *)((longlong)&_Var21.genericMethod[1].methodDefinition + 4)
           << 0x20);
      _Stack_128.genericMethod = (Il2CppGenericMethod *)0x0;
      _Stack_100.genericMethod = (Il2CppGenericMethod *)_Stack_130;
      pIStack_7 = (IndexOutOfRangeException *)0x0;
      auStack_9._0_4_ = 0.0;
      auStack_9._4_4_ = 0.0;
      unique0x0000a500 = &_Stack_108;
      _Stack_138.genericMethod = _Var21.genericMethod;
      _Stack_108.genericMethod = _Var21.genericMethod;
      while( true ) {
        bVar52 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&_Stack_108,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                           );
        gameObject = pIStack_7;
        fVar53 = fStack_16;
        fVar54 = fStack_15;
        fVar37 = fStack_14;
        fVar26 = fStack_13;
        fStack_13 = (float)uVar39;
        fVar25 = fStack_13;
        fStack_14 = (float)((ulonglong)uVar39 >> 0x20);
        fVar38 = fStack_14;
        fStack_15 = (float)uVar46;
        fVar55 = fStack_15;
        fStack_16 = (float)((ulonglong)uVar46 >> 0x20);
        fVar56 = fStack_16;
        fStack_13 = fVar26;
        fStack_14 = fVar37;
        fStack_15 = fVar54;
        fStack_16 = fVar53;
        if (bVar52 == 0) break;
        if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        unityMesh = GameObjectEx::GameObjectEx_GetMesh((GameObject *)gameObject,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).field_0x1c == 0) {
          FUN_?();
        }
        this = (RTMeshDb *)
               Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                         (MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
        if (this == (RTMeshDb *)0x0) goto code_?;
        this_00 = RTMeshDb::RTMeshDb_GetRTMesh(this,unityMesh,(MethodInfo *)0x0);
        if (this_00 != (RTMesh *)0x0) {
          if (gameObject == (IndexOutOfRangeException *)0x0) goto code_?;
          pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)gameObject,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__RTG__ObjectVertexCollect);
          }
          uStack_12 = pIVar27;
          pLStack_17 = pLVar24;
          pIStack_18 = pIVar23;
          _Stack_140._0_4_ = uVar19;
          fStack_13 = fVar25;
          fStack_14 = fVar38;
          fStack_15 = fVar55;
          fStack_16 = fVar56;
          RTMesh::RTMesh_OverlapVerts
                    (this_00,(OBB *)&uStack_12,pTVar20,
                     TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer
                     ,(MethodInfo *)0x0);
          pLVar57 = TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer;
          if (pLVar57 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          if ((pLVar57->fields)._size != 0) {
            if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pLVar22 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
            List_1_UnityEngine_Vector3__InsertRange
                      (pLVar22,(pLVar22->fields)._size,
                       (IEnumerable_1_UnityEngine_Vector3_ *)
                       TypeInfo__RTG__ObjectVertexCollect->static_fields->
                       _hierarchyVertsCollectBuffer,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                       ->klass->rgctx_data[0x12].method);
          }
        }
      }
      if ((List_1_UnityEngine_GameObject_ *)_Var22.genericMethod ==
          (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      if (iRam_? != 0) {
        uVar47 = (uint)((ulonglong)&_Stack_138 >> 0xc);
        uVar48 = (ulonglong)((uVar47 & 0x1fffff) >> 6);
        do {
          uVar49 = *(ulonglong *)(uVar48 * 8 + 0xADDR);
          puVar50 = (ulonglong *)(uVar48 * 8 + 0xADDR);
          LOCK();
          bVar51 = uVar49 == *puVar50;
          if (bVar51) {
            *puVar50 = uVar49 | 1L << (uVar47 & 0x3f);
          }
          UNLOCK();
        } while (!bVar51);
      }
      _Stack_130.genericMethod =
           (Il2CppGenericMethod *)
           ((ulonglong)(uint)*(int32_t *)((longlong)&_Var22.genericMethod[1].methodDefinition + 4)
           << 0x20);
      _Stack_128.genericMethod = (Il2CppGenericMethod *)0x0;
      _Stack_100.genericMethod = (Il2CppGenericMethod *)_Stack_130;
      pIStack_7 = (IndexOutOfRangeException *)0x0;
      auStack_9._0_4_ = 0.0;
      auStack_9._4_4_ = 0.0;
      unique0x0000a500 = &_Stack_108;
      _Stack_138.genericMethod = _Var22.genericMethod;
      _Stack_108.genericMethod = _Var22.genericMethod;
      while( true ) {
        bVar52 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&_Stack_108,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                           );
        pIVar40 = pIStack_7;
        if (bVar52 == 0) {
          return pLVar22;
        }
        if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        sprite = GameObjectEx::GameObjectEx_GetSprite((GameObject *)pIVar40,(MethodInfo *)0x0);
        if (pIVar40 == (IndexOutOfRangeException *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar41 = (pIVar40->fields)._._._className;
        if (pSVar41 == (String *)0x0) goto code_?;
        pcVar42 = pcRam_?;
        if (pcRam_? == (code *)0x0) {
          pcVar42 = (code *)FUN_?(&UNK_?);
          if (pcVar42 == (code *)0x0) goto code_?;
        }
        pcRam_? = pcVar42;
        pvVar44 = (void *)(*pcRam_?)(pSVar41);
        pIVar40 = (IndexOutOfRangeException *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar44,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
          FUN_?();
        }
        uStack_12 = pIVar27;
        pLStack_17 = pLVar24;
        pIStack_18 = pIVar23;
        _Stack_140._0_4_ = uVar19;
        fStack_13 = fVar25;
        fStack_14 = fVar38;
        fStack_15 = fVar55;
        fStack_16 = fVar56;
        pLVar57 = ObjectVertexCollect_CollectWorldSpriteVerts
                            (sprite,(Transform *)pIVar40,(OBB *)&uStack_12,(MethodInfo *)0x0);
        if (pLVar57 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((pLVar57->fields)._size != 0) {
          if (pLVar22 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
          List_1_UnityEngine_Vector3__InsertRange
                    (pLVar22,(pLVar22->fields)._size,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar57,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                     ->klass->rgctx_data[0x12].method);
        }
      }
    }
    else {
      uVar39 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar40 = (IndexOutOfRangeException *)func_?(uVar39);
      pSVar41 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (pIVar40,pSVar41,(MethodInfo *)0x0);
      func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
      FUN_?(pIVar40);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
code_?:
      uVar39 = func_?(&UNK_?);
      FUN_?(uVar39);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar40,(MethodInfo *)0x0);
    }
    FUN_?();
    FUN_?();
    pcVar42 = (code *)swi(3);
    pLVar22 = (List_1_UnityEngine_Vector3_ *)(*pcVar42)();
    return pLVar22;
  }
code_?:
  FUN_?();
  pcVar42 = (code *)swi(3);
  pLVar22 = (List_1_UnityEngine_Vector3_ *)(*pcVar42)();
  return pLVar22;
}


/* List`1[UnityEngine.Vector3] CollectModelSpriteVerts(Sprite, AABB) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect_CollectModelSpriteVerts
          (Sprite *sprite,AABB *collectAABB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sprite != (Sprite *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (sprite->fields)._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)sprite,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pLVar3 = (List_1_UnityEngine_Vector3_ *)(*pcVar2)();
      return pLVar3;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      pLVar3 = (List_1_UnityEngine_Vector3_ *)(*pcVar2)();
      return pLVar3;
    }
    pcRam_? = pcVar2;
    lVar5 = (*pcRam_?)(pvVar1);
    pLVar3 = (List_1_UnityEngine_Vector3_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    pvVar1 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_->klass
              ->rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
      pvVar1 = (void *)FUN_?(pvVar1);
    }
    pVVar6 = (Vector3__Array *)FUN_?(pvVar1,7);
    bVar7 = iRam_? != 0;
    (pLVar3->fields)._items = pVVar6;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&pLVar3->fields >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uVar8 = 0;
    if (lVar5 != 0) {
      puVar12 = (undefined8 *)(lVar5 + 0x20);
      while( true ) {
        if (*(int *)(lVar5 + 0x18) <= (int)uVar8) {
          return pLVar3;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar8) break;
        uVar13 = *puVar12;
        uVar4 = *puVar12;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_14.x = 0.0;
        VStack_14.y = 0.0;
        pQVar15 = TypeInfo__UnityEngine__Quaternion->static_fields;
        uVar16._0_4_ = (pQVar15->identityQuaternion).x;
        uVar16._4_4_ = (pQVar15->identityQuaternion).y;
        uVar17._0_4_ = (pQVar15->identityQuaternion).z;
        uVar17._4_4_ = (pQVar15->identityQuaternion).w;
        if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
          FUN_?();
        }
        VStack_18.z = (collectAABB->_size).z;
        VStack_19.x = VStack_14.x;
        VStack_19.y = VStack_14.y;
        VStack_18.x = (collectAABB->_size).x;
        VStack_18.y = (collectAABB->_size).y;
        VStack_20.x = (collectAABB->_center).x;
        VStack_20.y = (collectAABB->_center).y;
        VStack_20.z = (collectAABB->_center).z;
        VStack_21.z = 0.0;
        VStack_19.z = 0.0;
        VStack_21._0_8_ = uVar4;
        aQStack_22[0]._0_8_ = uVar16;
        aQStack_22[0]._8_8_ = uVar17;
        bVar23 = BoxMath::BoxMath_ContainsPoint
                          (&VStack_21,&VStack_20,&VStack_18,aQStack_22,(BoxEpsilon *)&VStack_19,
                           (MethodInfo *)0x0);
        if (bVar23 != 0) {
          uStack_24 = 0;
          uStack_25 = uVar13;
          FUN_?(pLVar3,&uStack_25,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                       );
        }
        uVar8 = uVar8 + 1;
        puVar12 = puVar12 + 1;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pLVar3 = (List_1_UnityEngine_Vector3_ *)(*pcVar2)();
      return pLVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pLVar3 = (List_1_UnityEngine_Vector3_ *)(*pcVar2)();
  return pLVar3;
}


/* List`1[UnityEngine.Vector3] CollectWorldSpriteVerts(Sprite, Transform, OBB) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect_CollectWorldSpriteVerts
          (Sprite *sprite,Transform *spriteTransform,OBB *collectOBB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = SpriteEx::SpriteEx_GetWorldVerts(sprite,spriteTransform,(MethodInfo *)0x0);
  pLVar2 = (List_1_UnityEngine_Vector3_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  pvVar3 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_->klass->
            rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  pVVar4 = (Vector3__Array *)FUN_?(pvVar3,7);
  (pLVar2->fields)._items = pVVar4;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pLVar2->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&QStack_10 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    QStack_10._8_8_ = (ulonglong)(uint)(pLVar1->fields)._version << 0x20;
    uStack_11 = 0;
    uStack_12 = 0;
    lStack_13._0_4_ = QStack_10.z;
    lStack_13._4_4_ = QStack_10.w;
    auStack_14._0_4_ = 0.0;
    auStack_14._4_4_ = 0.0;
    auStack_14._8_8_ = 0;
    uStack_15 = 0;
    ppLStack_16 = &pLStack_17;
    QStack_10._0_8_ = pLVar1;
    pLStack_17 = pLVar1;
    while( true ) {
      do {
        cVar18 = FUN_?(&pLStack_17,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                             );
        uVar19 = auStack_14._0_8_;
        if (cVar18 == '\0') {
          return pLVar2;
        }
        fVar20 = (float)auStack_14._8_8_;
        VStack_21.x = 0.0;
        VStack_21.y = 0.0;
        if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar22 = auStack_14._0_8_;
        VStack_23.x = VStack_21.x;
        VStack_23.y = VStack_21.y;
        VStack_23.z = 0.0;
        QStack_10._0_8_ = *(undefined8 *)&collectOBB->_rotation;
        QStack_10.z = (collectOBB->_rotation).z;
        QStack_10.w = (collectOBB->_rotation).w;
        VStack_24.x = (collectOBB->_size).x;
        VStack_24.y = (collectOBB->_size).y;
        VStack_24.z = (collectOBB->_size).z;
        VStack_25.x = (collectOBB->_center).x;
        VStack_25.y = (collectOBB->_center).y;
        VStack_25.z = (collectOBB->_center).z;
        auStack_14._0_4_ = (undefined4)uVar19;
        auStack_14._4_4_ = SUB84(uVar19,4);
        VStack_26.x = (float)auStack_14._0_4_;
        VStack_26.y = (float)auStack_14._4_4_;
        VStack_26.z = fVar20;
        auStack_14._0_8_ = uVar22;
        bVar27 = BoxMath::BoxMath_ContainsPoint
                          (&VStack_26,&VStack_25,&VStack_24,&QStack_10,(BoxEpsilon *)&VStack_23,
                           (MethodInfo *)0x0);
        uVar22 = auStack_14._0_8_;
      } while (bVar27 == 0);
      if (pLVar2 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      auStack_14._0_4_ = (undefined4)uVar19;
      auStack_14._4_4_ = SUB84(uVar19,4);
      VStack_28.x = (float)auStack_14._0_4_;
      VStack_28.y = (float)auStack_14._4_4_;
      VStack_28.z = fVar20;
      auStack_14._0_8_ = uVar22;
      FUN_?(pLVar2,&VStack_28,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    }
  }
  FUN_?();
  FUN_?();
  pcVar29 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar29)();
  return pLVar1;
}


/* ObjectVertexCollect() */

void Assembly-CSharp.dll::RTG::ObjectVertexCollect::ObjectVertexCollect__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectVertexCollect);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__)
  ;
  bVar2 = iRam_? != 0;
  TypeInfo__RTG__ObjectVertexCollect->static_fields->_hierarchyVertsCollectBuffer = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)TypeInfo__RTG__ObjectVertexCollect->static_fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

