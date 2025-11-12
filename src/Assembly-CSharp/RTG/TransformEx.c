
/* Quaternion Align(Transform, Vector3, TransformAxis) */

Quaternion *
Assembly-CSharp.dll::RTG::TransformEx::TransformEx_Align
          (Quaternion *__return_storage_ptr__,Transform *transform,Vector3 *normAlignVector,
          TransformAxis__Enum alignmentAxis,MethodInfo *method)

{
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                      (aVStack_4,transform,(MethodInfo *)0x0);
  uVar5 = _UNK_?;
  uVar6._0_4_ = pVVar3->x;
  uVar6._4_4_ = pVVar3->y;
  fVar7 = pVVar3->z;
  VStack_8._0_8_ = uVar6;
  if (alignmentAxis != TransformAxis__Enum_PositiveY) {
    if (alignmentAxis == TransformAxis__Enum_PositiveX) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (aVStack_4,transform,(MethodInfo *)0x0);
code_?:
      VStack_8.x = pVVar3->x;
      VStack_8.y = pVVar3->y;
      fVar7 = pVVar3->z;
      uVar6._0_4_ = VStack_8.x;
      uVar6._4_4_ = VStack_8.y;
    }
    else {
      if (alignmentAxis == TransformAxis__Enum_NegativeX) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (aVStack_4,transform,(MethodInfo *)0x0);
      }
      else if (alignmentAxis == TransformAxis__Enum_NegativeY) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (aVStack_4,transform,(MethodInfo *)0x0);
      }
      else {
        if (alignmentAxis == TransformAxis__Enum_PositiveZ) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              (aVStack_4,transform,(MethodInfo *)0x0);
          goto code_?;
        }
        if (alignmentAxis != TransformAxis__Enum_NegativeZ) goto code_?;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (aVStack_4,transform,(MethodInfo *)0x0);
      }
      VStack_9.x = pVVar3->x;
      VStack_9.y = pVVar3->y;
      uVar6._4_4_ = (float)((uint)VStack_9.y ^ uVar5);
      uVar6._0_4_ = (float)((uint)VStack_9.x ^ uVar5);
      fVar7 = (float)((uint)pVVar3->z ^ uVar5);
      VStack_8._0_8_ = CONCAT44(uVar6._4_4_,(float)uVar6);
    }
  }
code_?:
  fVar10 = _UNK_?;
  aVStack_4[0].x = normAlignVector->x;
  aVStack_4[0].y = normAlignVector->y;
  uVar11._0_4_ = VStack_8.y * aVStack_4[0].y + VStack_8.x * aVStack_4[0].x +
                fVar7 * normAlignVector->z;
  if (_UNK_? - (float)uVar11 < _UNK_?) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uVar6._0_4_ = (pQVar12->identityQuaternion).y;
    uVar6._4_4_ = (pQVar12->identityQuaternion).z;
    fVar7 = (pQVar12->identityQuaternion).w;
    __return_storage_ptr__->x = (pQVar12->identityQuaternion).x;
    __return_storage_ptr__->y = (float)uVar6;
    __return_storage_ptr__->z = uVar6._4_4_;
    __return_storage_ptr__->w = fVar7;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar14 = (pVVar13->zeroVector).z;
  uVar15._0_4_ = (pVVar13->zeroVector).x;
  uVar15._4_4_ = (pVVar13->zeroVector).y;
  if (fVar10 <= (float)uVar11 + _UNK_?) {
    aVStack_4[0].x = normAlignVector->x;
    aVStack_4[0].y = normAlignVector->y;
    uVar11._0_4_ = VStack_8.y * normAlignVector->z - fVar7 * aVStack_4[0].y;
    uVar11._4_4_ = fVar7 * aVStack_4[0].x - VStack_8.x * normAlignVector->z;
    fVar14 = VStack_8.x * aVStack_4[0].y - VStack_8.y * aVStack_4[0].x;
    uStack_16 = CONCAT44(uStack_16._4_4_,fVar14);
    auStack_17._4_4_ = uVar11._4_4_;
    auStack_17._0_4_ = (float)uVar11;
    fVar18 = (float)FUN_?(auStack_17);
    if (fVar10 < fVar18) {
      uVar11._0_4_ = (float)uVar11 / fVar18;
      uVar11._4_4_ = uVar11._4_4_ / fVar18;
      fVar14 = fVar14 / fVar18;
      VStack_8.y = uVar11._4_4_;
      VStack_8.x = (float)uVar11;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar11._0_4_ = (pVVar13->zeroVector).x;
      uVar11._4_4_ = (pVVar13->zeroVector).y;
      fVar14 = (pVVar13->zeroVector).z;
      VStack_8._0_8_ = uVar11;
    }
    goto code_?;
  }
  if (alignmentAxis == TransformAxis__Enum_PositiveX) {
code_?:
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (aVStack_4,transform,(MethodInfo *)0x0);
code_?:
    VStack_8.x = pVVar3->x;
    VStack_8.y = pVVar3->y;
    fVar14 = pVVar3->z;
    uVar11._0_4_ = VStack_8.x;
    uVar11._4_4_ = VStack_8.y;
  }
  else {
    if (alignmentAxis != TransformAxis__Enum_NegativeX) {
      if (alignmentAxis == TransformAxis__Enum_PositiveY) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (aVStack_4,transform,(MethodInfo *)0x0);
        goto code_?;
      }
      if (alignmentAxis == TransformAxis__Enum_NegativeY) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (aVStack_4,transform,(MethodInfo *)0x0);
        uVar19 = pVVar3->x;
        uVar20 = pVVar3->y;
        uVar11._4_4_ = (float)(uVar20 ^ uVar5);
        uVar11._0_4_ = (float)(uVar19 ^ uVar5);
        fVar14 = (float)((uint)pVVar3->z ^ uVar5);
        VStack_8.y = uVar11._4_4_;
        VStack_8.x = (float)uVar11;
        goto code_?;
      }
      if (alignmentAxis == TransformAxis__Enum_PositiveZ) goto code_?;
      uVar11._0_4_ = (float)uVar15;
      uVar11._4_4_ = uVar15._4_4_;
      VStack_8._0_8_ = uVar15;
      if (alignmentAxis != TransformAxis__Enum_NegativeZ) goto code_?;
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (aVStack_4,transform,(MethodInfo *)0x0);
    uVar21 = pVVar3->x;
    uVar22 = pVVar3->y;
    uVar11._4_4_ = (float)(uVar22 ^ uVar5);
    uVar11._0_4_ = (float)(uVar21 ^ uVar5);
    fVar14 = (float)((uint)pVVar3->z ^ uVar5);
    VStack_8.y = uVar11._4_4_;
    VStack_8.x = (float)uVar11;
  }
code_?:
  VStack_9.x = normAlignVector->x;
  VStack_9.y = normAlignVector->y;
  VStack_9.z = normAlignVector->z;
  auStack_17._4_4_ = uVar11._4_4_;
  auStack_17._0_4_ = (float)uVar11;
  uStack_16 = CONCAT44(uStack_16._4_4_,fVar14);
  aVStack_4[0].y = uVar6._4_4_;
  aVStack_4[0].x = (float)uVar6;
  aVStack_4[0].z = fVar7;
  uVar6._0_4_ = Vector3Ex::Vector3Ex_SignedAngle
                           (aVStack_4,&VStack_9,(Vector3 *)auStack_17,(MethodInfo *)0x0);
  uVar6._4_4_ = (float)uVar6 * _UNK_?;
  aVStack_4[0].x = VStack_8.x;
  aVStack_4[0].y = VStack_8.y;
  aVStack_4[0].z = fVar14;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar23 = (transform->fields)._._.m_CachedPtr;
  if (pvVar23 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar23,aVStack_4,uVar6._4_4_);
  VStack_9.y = uVar11._4_4_;
  VStack_9.x = (float)uVar11;
  auStack_17._0_4_ = 0.0;
  auStack_17._4_4_ = 0.0;
  uStack_16 = 0;
  pcVar1 = pcRam_?;
  VStack_9.z = fVar14;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)((float)uVar6,&VStack_9,auStack_17);
  __return_storage_ptr__->x = (float)auStack_17._0_4_;
  __return_storage_ptr__->y = (float)auStack_17._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_16;
  __return_storage_ptr__->w = (float)uStack_16._4_4_;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Transform] FilterParentsOnly(IEnumerable`1[UnityEngine.Transform]) */

List_1_UnityEngine_Transform_ *
Assembly-CSharp.dll::RTG::TransformEx::TransformEx_FilterParentsOnly
          (IEnumerable_1_UnityEngine_Transform_ *transforms,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Transform>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Transform>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lStackX_20 = 0;
  pLVar1 = (List_1_UnityEngine_Transform_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  if (transforms == (IEnumerable_1_UnityEngine_Transform_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    return pLVar1;
  }
  pvVar2 = MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List_int_->klass
           ->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pTVar3 = (Transform__Array *)FUN_?(pvVar2,10);
  (pLVar1->fields)._items = pTVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = pLVar1;
  lStack_9 = FUN_?(0,
                            TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Transform>
                            ,transforms);
  uStack_10 = 0;
  plStack_11 = &lStack_9;
code_?:
  do {
    if (lStack_9 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar12 = (code *)swi(3);
      pLVar1 = (List_1_UnityEngine_Transform_ *)(*pcVar12)();
      return pLVar1;
    }
    cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar13 == '\0') {
      if (*plStack_11 == 0) {
        return pLVar1;
      }
      FUN_?(0,TypeInfo__System__IDisposable,*plStack_11);
      return pLVar1;
    }
    if (lStack_9 == 0) {
code_?:
      FUN_?();
      goto code_?;
    }
    this = (Transform *)
           FUN_?(0,
                         TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Transform>
                        );
    pTStack_14 = this;
    lStackX_20 = FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Transform>
                               ,transforms);
    uStack_15 = 0;
    plStack_16 = &lStackX_20;
    do {
      do {
        if (lStackX_20 == 0) {
code_?:
          FUN_?();
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar13 == '\0') {
          if (lStackX_20 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
          }
          if (pLVar1 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          FUN_?(pLVar1,this);
          goto code_?;
        }
        if (lStackX_20 == 0) {
code_?:
          FUN_?();
          goto code_?;
        }
        pTVar17 = (Transform *)FUN_?(0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this != (Transform *)0x0 || pTVar17 != (Transform *)0x0) {
          if (this != (Transform *)0x0) {
            if (pTVar17 == (Transform *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar18 = (this->fields)._._.m_CachedPtr != (void *)0x0;
            }
            else {
              bVar18 = pTVar17 != this;
            }
            goto code_?;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar17 != (Transform *)0x0) {
            bVar18 = (pTVar17->fields)._._.m_CachedPtr != (void *)0x0;
            goto code_?;
          }
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        bVar18 = false;
code_?:
      } while (!bVar18);
      if (pTVar17 == (Transform *)0x0) goto code_?;
      pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pTVar17,(MethodInfo *)0x0);
      if (this == (Transform *)0x0) goto code_?;
      bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_IsChildOf
                        (this,pTVar17,(MethodInfo *)0x0);
    } while (bVar19 == 0);
    if (lStackX_20 != 0) {
      FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
    }
  } while( true );
}


/* List`1[UnityEngine.Transform]
   GetGameObjectTransformCollection(IEnumerable`1[UnityEngine.GameObject]) */

List_1_UnityEngine_Transform_ *
Assembly-CSharp.dll::RTG::TransformEx::TransformEx_GetGameObjectTransformCollection
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Transform_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List_int_->klass
            ->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pTVar3 = (Transform__Array *)FUN_?(pvVar2);
  (pLVar1->fields)._items = pTVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
code_?:
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException(unaff_RDI,(MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    plVar9 = (longlong *)
              FUN_?(0,
                            TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                            ,gameObjects);
    while (plVar9 != (longlong *)0x0) {
      cVar10 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar10 == '\0') {
        if (plVar9 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plVar9);
        }
        return pLVar1;
      }
      if (plVar9 == (longlong *)0x0) goto code_?;
      lVar11 = *plVar9;
      uVar12 = 0;
      if (*(ushort *)(lVar11 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
               (*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            puVar13 = (undefined8 *)
                      ((longlong)
                       *(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) * 0x10 +
                       0x138 + lVar11);
            goto code_?;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
      }
      puVar13 = (undefined8 *)
                FUN_?(plVar9,
                              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                              ,0);
code_?:
      unaff_RDI = (Object *)(*(code *)*puVar13)(plVar9);
      if (unaff_RDI == (Object *)0x0) goto code_?;
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
      pOVar14 = unaff_RDI[1].klass;
      if (pOVar14 == (Object__Class *)0x0) goto code_?;
      pcVar15 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar15;
      pvVar2 = (void *)(*pcRam_?)(pOVar14);
      item = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
             Unmarshal_UnmarshalUnityObject
                       (pvVar2,
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
      pMVar16 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
      ;
      if (pLVar1 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
      piVar17 = &(pLVar1->fields)._version;
      *piVar17 = *piVar17 + 1;
      pTVar3 = (pLVar1->fields)._items;
      uVar4 = (pLVar1->fields)._size;
      if (pTVar3 == (Transform__Array *)0x0) goto code_?;
      if (uVar4 < (uint)pTVar3->max_length) {
        (pLVar1->fields)._size = uVar4 + 1;
        FUN_?(pTVar3,(longlong)(int)uVar4,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,item,pMVar16->klass->rgctx_data[0xe].method);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar15 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Transform_ *)(*pcVar15)();
  return pLVar1;
}


/* Vector3 GetLocalAxis(Transform, AxisDescriptor) */

Vector3 * Assembly-CSharp.dll::RTG::TransformEx::TransformEx_GetLocalAxis
                    (Vector3 *__return_storage_ptr__,Transform *transform,AxisDescriptor *axisDesc,
                    MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (transform == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                     (&VStack_3,transform,(MethodInfo *)0x0);
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  if (axisDesc == (AxisDescriptor *)0x0) goto code_?;
  if ((axisDesc->fields)._index == 1) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_3,transform,(MethodInfo *)0x0);
  }
  else {
    if ((axisDesc->fields)._index != 2) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_3,transform,(MethodInfo *)0x0);
  }
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
code_?:
  if ((axisDesc->fields)._sign == 1) {
    uVar6 = __return_storage_ptr__->x;
    uVar7 = (uint)__return_storage_ptr__->y ^ _UNK_?;
    fVar5 = (float)((uint)__return_storage_ptr__->z ^ _UNK_?);
    __return_storage_ptr__->x = (float)(uVar6 ^ _UNK_?);
    __return_storage_ptr__->y = (float)uVar7;
    __return_storage_ptr__->z = fVar5;
  }
  return __return_storage_ptr__;
}


/* Plane GetLocalPlane(Transform, PlaneDescriptor) */

Plane * Assembly-CSharp.dll::RTG::TransformEx::TransformEx_GetLocalPlane
                  (Plane *__return_storage_ptr__,Transform *transform,PlaneDescriptor *planeDesc,
                  MethodInfo *method)

{
  pAVar1 = planeDesc->_firstAxisDescriptor;
  if (transform == (Transform *)0x0) goto DAT_?;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                     (&VStack_3,transform,(MethodInfo *)0x0);
  VStack_4.x = pVVar2->x;
  VStack_4.y = pVVar2->y;
  VStack_4.z = pVVar2->z;
  if (pAVar1 == (AxisDescriptor *)0x0) goto DAT_?;
  if ((pAVar1->fields)._index == 1) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_3,transform,(MethodInfo *)0x0);
code_?:
    VStack_4.x = pVVar2->x;
    VStack_4.y = pVVar2->y;
    VStack_4.z = pVVar2->z;
  }
  else if ((pAVar1->fields)._index == 2) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_3,transform,(MethodInfo *)0x0);
    goto code_?;
  }
  uVar5 = _UNK_?;
  fVar6 = VStack_4.z;
  if ((pAVar1->fields)._sign == 1) {
    fVar6 = (float)((uint)VStack_4.z ^ _UNK_?);
    VStack_4.y = (float)((uint)VStack_4.y ^ _UNK_?);
    VStack_4.x = (float)((uint)VStack_4.x ^ _UNK_?);
  }
  pAVar1 = planeDesc->_secondAxisDescriptor;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                     (aVStack_7,transform,(MethodInfo *)0x0);
  VStack_3.x = pVVar2->x;
  VStack_3.y = pVVar2->y;
  VStack_3.z = pVVar2->z;
  if (pAVar1 == (AxisDescriptor *)0x0) {
DAT_?:
    FUN_?();
    pcVar8 = (code *)swi(3);
    pPVar9 = (Plane *)(*pcVar8)();
    return pPVar9;
  }
  if ((pAVar1->fields)._index == 1) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (aVStack_7,transform,(MethodInfo *)0x0);
  }
  else {
    if ((pAVar1->fields)._index != 2) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (aVStack_7,transform,(MethodInfo *)0x0);
  }
  VStack_3.x = pVVar2->x;
  VStack_3.y = pVVar2->y;
  VStack_3.z = pVVar2->z;
code_?:
  fVar10 = VStack_3.z;
  if ((pAVar1->fields)._sign == 1) {
    fVar10 = (float)((uint)VStack_3.z ^ uVar5);
    VStack_3.y = (float)((uint)VStack_3.y ^ uVar5);
    VStack_3.x = (float)((uint)VStack_3.x ^ uVar5);
  }
  fVar11 = VStack_3.y * VStack_4.x - VStack_3.x * VStack_4.y;
  fVar12 = fVar10 * VStack_4.y - VStack_3.y * fVar6;
  fVar6 = VStack_3.x * fVar6 - fVar10 * VStack_4.x;
  VStack_4.y = fVar6;
  VStack_4.x = fVar12;
  VStack_4.z = fVar11;
  fVar10 = (float)FUN_?(&VStack_4);
  if (_UNK_? < fVar10) {
    fVar12 = fVar12 / fVar10;
    fVar6 = fVar6 / fVar10;
    fVar11 = fVar11 / fVar10;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar12 = (pVVar13->zeroVector).x;
    fVar6 = (pVVar13->zeroVector).y;
    fVar11 = (pVVar13->zeroVector).z;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  pvVar14 = (transform->fields)._._.m_CachedPtr;
  if (pvVar14 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    pPVar9 = (Plane *)(*pcVar8)();
    return pPVar9;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar8 = (code *)swi(3);
    pPVar9 = (Plane *)(*pcVar8)();
    return pPVar9;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(pvVar14,&VStack_4);
  VStack_3.z = VStack_4.z;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
  VStack_3.x = VStack_4.x;
  VStack_3.y = VStack_4.y;
  VStack_4.y = fVar6;
  VStack_4.x = fVar12;
  VStack_4.z = fVar11;
  FUN_?(__return_storage_ptr__,&VStack_4,&VStack_3);
  return __return_storage_ptr__;
}


/* Void RotateAroundPivot(Transform, Quaternion, Vector3) */

void Assembly-CSharp.dll::RTG::TransformEx::TransformEx_RotateAroundPivot
               (Transform *transform,Quaternion *rotation,Vector3 *pivot,MethodInfo *method)

{
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4);
  uStack_6._0_4_ = pivot->x;
  uStack_6._4_4_ = pivot->y;
  fVar7 = (float)uStack_2 - (float)uStack_6;
  fVar8 = fStack_3 - pivot->z;
  fVar9 = uStack_2._4_4_ - uStack_6._4_4_;
  fVar10 = rotation->x;
  fVar11 = rotation->y;
  fVar12 = rotation->z;
  fVar13 = rotation->w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_6 = 0;
  uStack_14 = 0;
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4);
  fStack_15 = ((float)uStack_6 * fVar13 + uStack_14._4_4_ * fVar10 + (float)uStack_14 * fVar11) -
              uStack_6._4_4_ * fVar12;
  fStack_16 = (uStack_6._4_4_ * fVar13 + uStack_14._4_4_ * fVar11 + (float)uStack_6 * fVar12) -
              (float)uStack_14 * fVar10;
  fStack_3 = ((float)uStack_14 * fVar13 + uStack_14._4_4_ * fVar12 + uStack_6._4_4_ * fVar10) -
              (float)uStack_6 * fVar11;
  fStack_17 = ((uStack_14._4_4_ * fVar13 - (float)uStack_6 * fVar10) - uStack_6._4_4_ * fVar11) -
              (float)uStack_14 * fVar12;
  uStack_2 = CONCAT44(fStack_16,fStack_15);
  fStack_18 = fStack_3;
  fStack_19 = fStack_17;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4);
  fVar20 = fVar11 + fVar11;
  fVar21 = fVar12 + fVar12;
  fVar22 = fVar10 * (fVar10 + fVar10);
  fVar23 = fVar13 * (fVar10 + fVar10);
  uStack_6._0_4_ = pivot->x;
  uStack_6._4_4_ = pivot->y;
  uStack_2 = CONCAT44((_UNK_? - (fVar12 * fVar21 + fVar22)) * fVar9 +
                       (fVar13 * fVar21 + fVar10 * fVar20) * fVar7 + (fVar11 * fVar21 - fVar23) * fVar8
                       + uStack_6._4_4_,
                       (_UNK_? - (fVar12 * fVar21 + fVar11 * fVar20)) * fVar7 +
                       (fVar10 * fVar20 - fVar13 * fVar21) * fVar9 +
                       (fVar13 * fVar20 + fVar10 * fVar21) * fVar8 + (float)uStack_6);
  fStack_3 = (fVar23 + fVar11 * fVar21) * fVar9 + (fVar10 * fVar21 - fVar13 * fVar20) * fVar7 +
              (_UNK_? - (fVar11 * fVar20 + fVar22)) * fVar8 + pivot->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  return;
}


/* Void ScaleFromPivot(Transform, Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::TransformEx::TransformEx_ScaleFromPivot
               (Transform *transform,Vector3 *scaleFactor,Vector3 *pivot,MethodInfo *method)

{
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  VStack_6.x = scaleFactor->x;
  VStack_6.y = scaleFactor->y;
  VStack_7.z = fStack_3 * scaleFactor->z;
  VStack_7.y = uStack_2._4_4_ * VStack_6.y;
  VStack_7.x = (float)uStack_2 * VStack_6.x;
  TransformEx_SetWorldScale(transform,&VStack_7,(MethodInfo *)0x0);
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                     (&VStack_6,transform,(MethodInfo *)0x0);
  uStack_9._0_4_ = pVVar8->x;
  uStack_9._4_4_ = pVVar8->y;
  fVar10 = pVVar8->z;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                     (&VStack_6,transform,(MethodInfo *)0x0);
  VStack_7.x = pVVar8->x;
  VStack_7.y = pVVar8->y;
  fVar11 = pVVar8->z;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                     (aVStack_12,transform,(MethodInfo *)0x0);
  VStack_6.x = pVVar8->x;
  VStack_6.y = pVVar8->y;
  fVar13 = pVVar8->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4);
  uVar14 = pivot->x;
  uVar15 = pivot->y;
  fVar16 = (float)uStack_2 - (float)uVar14;
  fVar17 = fStack_3 - pivot->z;
  fVar18 = uStack_2._4_4_ - (float)uVar15;
  fVar19 = (fVar18 * uStack_9._4_4_ + fVar16 * (float)uStack_9 + fVar17 * fVar10) * scaleFactor->x;
  aVStack_12[0].x = pivot->x;
  aVStack_12[0].y = pivot->y;
  fVar20 = (fVar18 * VStack_7.y + fVar16 * VStack_7.x + fVar17 * fVar11) * scaleFactor->y;
  fVar17 = (fVar18 * VStack_6.y + fVar16 * VStack_6.x + fVar17 * fVar13) * scaleFactor->z;
  VStack_6.z = fVar19 * fVar10 + pivot->z + fVar20 * fVar11 + fVar13 * fVar17;
  VStack_6.y = fVar19 * uStack_9._4_4_ + aVStack_12[0].y + fVar20 * VStack_7.y +
                VStack_6.y * fVar17;
  VStack_6.x = fVar19 * (float)uStack_9 + aVStack_12[0].x + fVar20 * VStack_7.x +
                VStack_6.x * fVar17;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&VStack_6);
  return;
}


/* Void SetWorldScale(Transform, Vector3) */

void Assembly-CSharp.dll::RTG::TransformEx::TransformEx_SetWorldScale
               (Transform *transform,Vector3 *worldScale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3._0_4_ = (pVVar1->oneVector).x;
  uStack_3._4_4_ = (pVVar1->oneVector).y;
  fStack_4 = (pVVar1->oneVector).z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (transform->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar5);
  fVar7 = worldScale->x;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (transform->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar5);
  fVar8 = worldScale->y;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_9 = 0;
  fStack_10 = 0.0;
  pvVar5 = (transform->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar5);
  fVar11 = worldScale->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (transform->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar5);
  fStack_10 = fVar11 / fStack_4;
  uStack_9 = CONCAT44(fVar8 / uStack_9._4_4_,fVar7 / 0.0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (transform->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar5,&uStack_9);
  return;
}


/* Void TransformPoints(Transform, List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::TransformEx::TransformEx_TransformPoints
               (Transform *transform,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar3 = 0;
  do {
    if ((points->fields)._size <= (int)uVar1) {
      return;
    }
    if ((uint)(points->fields)._size <= uVar1) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar4 = (points->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length <= uVar1) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (transform == (Transform *)0x0) goto code_?;
    uStack_5 = *(undefined8 *)((longlong)&pVVar4->vector[0].x + lVar3);
    uStack_6 = *(undefined4 *)((longlong)&pVVar4->vector[0].z + lVar3);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_7 = 0;
    uStack_8 = 0;
    pvVar9 = (transform->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar9,&uStack_5,&uStack_7);
    if ((uint)(points->fields)._size <= uVar1) goto code_?;
    pVVar4 = (points->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length <= uVar1) goto code_?;
    uVar1 = uVar1 + 1;
    *(undefined8 *)((longlong)&pVVar4->vector[0].x + lVar3) = uStack_7;
    *(undefined4 *)((longlong)&pVVar4->vector[0].z + lVar3) = uStack_8;
    piVar11 = &(points->fields)._version;
    *piVar11 = *piVar11 + 1;
    lVar3 = lVar3 + 0xc;
  } while( true );
}

