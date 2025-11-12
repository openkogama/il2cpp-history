
/* List`1[UnityEngine.Vector3] GetModelVerts(Sprite) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::SpriteEx::SpriteEx_GetModelVerts(Sprite *sprite,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  pvVar1 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pPVar2 = (PlaneIdHelper_PlaneQuadrantInfo__Array *)FUN_?(pvVar1);
  bVar3 = iRam_? != 0;
  (this->fields)._items = pPVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
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
      pcVar8 = (code *)swi(3);
      pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar8)();
      return pLVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar8)();
      return pLVar9;
    }
    pcRam_? = pcVar8;
    lVar11 = (*pcRam_?)(pvVar1);
    uVar4 = 0;
    if (lVar11 != 0) {
      puVar12 = (undefined8 *)(lVar11 + 0x20);
      do {
        pMVar13 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        if (*(int *)(lVar11 + 0x18) <= (int)uVar4) {
          return (List_1_UnityEngine_Vector3_ *)this;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar4) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar8)();
          return pLVar9;
        }
        uVar14 = *puVar12;
        uVar10 = *puVar12;
        piVar15 = &(this->fields)._version;
        *piVar15 = *piVar15 + 1;
        pPVar2 = (this->fields)._items;
        if (pPVar2 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) break;
        uVar16 = (this->fields)._size;
        if (uVar16 < (uint)pPVar2->max_length) {
          (this->fields)._size = uVar16 + 1;
          if ((uint)pPVar2->max_length <= uVar16) goto code_?;
          pPVar2->vector[(int)uVar16].Quadrant = (int)uVar14;
          pPVar2->vector[(int)uVar16].FirstAxisSign = (int)((ulonglong)uVar14 >> 0x20);
          uVar4 = uVar4 + 1;
          pPVar2->vector[(int)uVar16].SecondAxisSign = 0;
          puVar12 = puVar12 + 1;
        }
        else {
          aPStack_17[0].SecondAxisSign = 0;
          aPStack_17[0]._0_8_ = uVar10;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                    (this,aPStack_17,pMVar13->klass->rgctx_data[0xe].method);
          uVar4 = uVar4 + 1;
          puVar12 = puVar12 + 1;
        }
      } while( true );
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar8)();
  return pLVar9;
}


/* List`1[UnityEngine.Vector3] GetWorldVerts(Sprite, Transform) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::SpriteEx::SpriteEx_GetWorldVerts
          (Sprite *sprite,Transform *spriteTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = SpriteEx_GetModelVerts(sprite,(MethodInfo *)0x0);
  this = (List_1_UnityEngine_Vector3_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
  List_1_UnityEngine_Vector3___ctor_1
            (this,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
            );
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
  uVar2 = 0;
  if (this == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar3)();
    return pLVar1;
  }
  lVar4 = 0;
  do {
    if ((this->fields)._size <= (int)uVar2) {
      return this;
    }
    if ((uint)(this->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar3)();
      return pLVar1;
    }
    pVVar5 = (this->fields)._items;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar5->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar3)();
      return pLVar1;
    }
    if (spriteTransform == (Transform *)0x0) goto code_?;
    uStack_6 = *(undefined8 *)((longlong)&pVVar5->vector[0].x + lVar4);
    uStack_7 = *(undefined4 *)((longlong)&pVVar5->vector[0].z + lVar4);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    uStack_9 = 0;
    pvVar10 = (spriteTransform->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)spriteTransform,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar3)();
      return pLVar1;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar3 = (code *)swi(3);
      pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar3)();
      return pLVar1;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar10,&uStack_6,&uStack_8);
    if ((uint)(this->fields)._size <= uVar2) goto code_?;
    pVVar5 = (this->fields)._items;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar5->max_length <= uVar2) goto code_?;
    uVar2 = uVar2 + 1;
    *(undefined8 *)((longlong)&pVVar5->vector[0].x + lVar4) = uStack_8;
    *(undefined4 *)((longlong)&pVVar5->vector[0].z + lVar4) = uStack_9;
    piVar12 = &(this->fields)._version;
    *piVar12 = *piVar12 + 1;
    lVar4 = lVar4 + 0xc;
  } while( true );
}

