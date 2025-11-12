
/* Mesh CreateCylinder(Single, Single, Single, Int32, Int32, Int32, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::CylinderMesh::CylinderMesh_CreateCylinder
                 (float bottomRadius,float topRadius,float height,int32_t numSlices,
                 int32_t numStacks,int32_t numBottomCapRings,int32_t numTopCapRings,Color *color,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bottomRadius < _UNK_?) {
    bottomRadius = _UNK_?;
  }
  if (topRadius < _UNK_?) {
    topRadius = _UNK_?;
  }
  if (height < _UNK_?) {
    height = _UNK_?;
  }
  iVar1 = 3;
  if (2 < numSlices) {
    iVar1 = numSlices;
  }
  iVar2 = iVar1 + 1;
  iVar3 = 1;
  if (0 < numStacks) {
    iVar3 = numStacks;
  }
  iVar4 = iVar3 + 1;
  arrayLength = iVar2 * iVar4;
  pIVar5 = (IEnumerable_1_UnityEngine_Vector3_ *)
            FUN_?(TypeInfo__UnityEngine__Vector3,arrayLength);
  pIVar6 = (IEnumerable_1_UnityEngine_Vector3_ *)
            FUN_?(TypeInfo__UnityEngine__Vector3,arrayLength);
  this = (List_1_UnityEngine_Vector3_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  pLStack_7 = this;
  FUN_?(this,arrayLength,
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  pLStack_8 = (List_1_UnityEngine_Vector3_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  pMVar9 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_;
  FUN_?(pLStack_8,arrayLength);
  uVar10 = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_12._0_4_ = (pVVar11->zeroVector).x;
  uStack_12._4_4_ = (pVVar11->zeroVector).y;
  fStack_13 = (pVVar11->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar14 = (pVVar11->upVector).x;
  uVar15 = (pVVar11->upVector).y;
  uStack_16 = CONCAT44(uVar15,(float)uVar15 * height);
  fStack_17 = (float)uVar14 * height;
  fStack_18 = (pVVar11->upVector).z * height;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar19._0_4_ = (pVVar11->upVector).x;
  uVar19._4_4_ = (pVVar11->upVector).y;
  fVar20 = (pVVar11->upVector).z;
  fVar21 = uStack_12._4_4_;
  iStack_22 = 0;
  fVar23 = _UNK_? / (float)iVar1;
  fVar24 = _UNK_?;
  fStack_25 = fVar20;
  uStack_26 = uVar19;
  if (0 < iVar4) {
    lVar27 = 0;
    uVar28 = uStack_16;
    do {
      fVar29 = 0.0;
      fVar30 = (float)iStack_22 * (height / (float)iVar3) + fVar21;
      fVar31 = fVar30 / (float)uVar28;
      if ((0.0 <= fVar31) && (fVar29 = fVar31, fVar24 < fVar31)) {
        fVar29 = fVar24;
      }
      iVar32 = 0;
      fVar29 = fVar29 * (topRadius - bottomRadius) + bottomRadius;
      if (0 < iVar2) {
        uStack_33 = uStack_33 & 0xffffffff;
        puVar34 = (undefined8 *)((longlong)&pIVar5[2].klass + lVar27 * 0xc);
        do {
          uVar35 = FUN_?((float)iVar32 * fVar23 * _UNK_?);
          VStack_36.z = (float)FUN_?();
          VStack_36._0_8_ = CONCAT44((int)(uStack_33 >> 0x20),uVar35);
          uStack_33 = VStack_36._0_8_;
          pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&CStack_38,&VStack_36,pMVar9);
          uVar28._0_4_ = pVVar37->x;
          uVar28._4_4_ = pVVar37->y;
          fVar24 = pVVar37->z;
          if (pIVar6 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          if (*(uint *)&pIVar6[1].monitor <= uVar10) goto code_?;
          *(undefined8 *)((longlong)puVar34 + ((longlong)pIVar6 - (longlong)pIVar5)) = uVar28;
          *(float *)((longlong)puVar34 + ((longlong)pIVar6 - (longlong)pIVar5) + 8) = pVVar37->z;
          if (pIVar5 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          if (*(uint *)&pIVar5[1].monitor <= uVar10) goto code_?;
          uVar10 = uVar10 + 1;
          lVar27 = lVar27 + 1;
          iVar32 = iVar32 + 1;
          *puVar34 = CONCAT44((float)uVar19._4_4_ * fVar30 + fVar21 + (float)uVar28._4_4_ * fVar29,
                              (float)(undefined4)uVar19 * fVar30 + (float)uStack_12 +
                              (float)(undefined4)uVar28 * fVar29);
          *(float *)(puVar34 + 1) = fVar20 * fVar30 + fStack_13 + fVar24 * fVar29;
          puVar34 = (undefined8 *)((longlong)puVar34 + 0xc);
          uVar28 = uStack_16;
          fVar24 = _UNK_?;
        } while (iVar32 < iVar2);
      }
      iStack_22 = iStack_22 + 1;
      this = pLStack_7;
    } while (iStack_22 < iVar4);
  }
  if ((this != (List_1_UnityEngine_Vector3_ *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__InsertRange
                (this,(this->fields)._size,pIVar5,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 ->klass->rgctx_data[0x12].method),
     pLStack_8 != (List_1_UnityEngine_Vector3_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__InsertRange
              (pLStack_8,(pLStack_8->fields)._size,pIVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
               ->klass->rgctx_data[0x12].method);
    uVar10 = 0;
    this_00 = (List_1_System_Int32_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    pvVar39 = MethodInfo__System__Collections__Generic__List<int>__List_int_->klass->rgctx_data[3].
              rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar39 + 0x135) & 1) == 0) {
      pvVar39 = (void *)FUN_?(pvVar39);
    }
    pIVar40 = (Int32__Array *)FUN_?(pvVar39,100);
    bVar41 = iRam_? != 0;
    (this_00->fields)._items = pIVar40;
    if (bVar41) {
      uVar42 = (uint)((ulonglong)&this_00->fields >> 0xc);
      uVar43 = (ulonglong)((uVar42 & 0x1fffff) >> 6);
      do {
        uVar44 = *(ulonglong *)(uVar43 * 8 + 0xADDR);
        puVar45 = (ulonglong *)(uVar43 * 8 + 0xADDR);
        LOCK();
        bVar41 = uVar44 == *puVar45;
        if (bVar41) {
          *puVar45 = uVar44 | 1L << (uVar42 & 0x3f);
        }
        UNLOCK();
      } while (!bVar41);
    }
    pMVar9 = (MethodInfo *)FUN_?(TypeInfo__System__Int32,iVar3 * iVar1 * 6);
    iStackX_20 = 0;
    if (0 < iVar3) {
      lVar27 = 0;
      iVar32 = -iVar2;
      iVar4 = iVar2;
      do {
        if (0 < iVar1) {
          piVar46 = (int *)((longlong)&pMVar9->klass + lVar27 * 4 + 4);
          uVar42 = uVar10 + 2;
          lVar47 = lVar27;
          iVar48 = iVar4;
          do {
            if (pMVar9 == (MethodInfo *)0x0) goto code_?;
            if ((((*(uint *)&pMVar9->name <= uVar10) ||
                 (piVar46[-1] = iVar48 - iVar2, *(uint *)&pMVar9->name <= uVar42 - 1)) ||
                (*piVar46 = iVar48, *(uint *)&pMVar9->name <= uVar42)) ||
               ((*(int *)((longlong)&pMVar9->klass + (longlong)(int)uVar42 * 4) =
                      (1 - iVar2) + iVar48, *(uint *)&pMVar9->name <= uVar42 + 1 ||
                (*(int *)((longlong)&pMVar9->klass + (longlong)(int)uVar42 * 4 + 4) = iVar48,
                *(uint *)&pMVar9->name <= uVar42 + 2)))) goto code_?;
            uVar10 = uVar10 + 6;
            lVar27 = lVar47 + 6;
            piVar46 = piVar46 + 6;
            *(int *)((longlong)&pMVar9->return_type + (longlong)(int)uVar42 * 4) = iVar48 + 1;
            uVar49 = uVar42 + 3;
            uVar42 = uVar42 + 6;
            if (*(uint *)&pMVar9->name <= uVar49) goto code_?;
            iVar50 = (1 - iVar2) + iVar48;
            iVar48 = iVar48 + 1;
            *(int *)((longlong)&pMVar9->parameters + lVar47 * 4 + 4) = iVar50;
            lVar47 = lVar27;
          } while (iVar32 + iVar48 < iVar1);
        }
        iStackX_20 = iStackX_20 + 1;
        iVar32 = iVar32 - iVar2;
        iVar4 = iVar4 + iVar2;
      } while (iStackX_20 < iVar3);
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
    List_1_System_Int32__InsertRange
              (this_00,(this_00->fields)._size,(IEnumerable_1_System_Int32_ *)pMVar9,
               MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
               ->klass->rgctx_data[0x12].method);
    if (0 < numBottomCapRings) {
      iVar2 = iVar1 + 1;
      uVar42 = 0;
      iVar3 = iVar2 * (numBottomCapRings + 1);
      arrayLength = arrayLength + iVar3;
      pIVar5 = (IEnumerable_1_UnityEngine_Vector3_ *)
                FUN_?(TypeInfo__UnityEngine__Vector3,iVar3);
      pIVar6 = (IEnumerable_1_UnityEngine_Vector3_ *)
                FUN_?(TypeInfo__UnityEngine__Vector3,iVar3);
      uVar10 = _UNK_?;
      iStackX_20 = 0;
      lVar27 = 0;
      do {
        fVar29 = 0.0;
        fVar31 = (float)iStackX_20 / (float)numBottomCapRings;
        if ((0.0 <= fVar31) && (fVar29 = fVar31, fVar24 < fVar31)) {
          fVar29 = fVar24;
        }
        iVar3 = 0;
        fVar24 = fVar29 * (0.0 - bottomRadius) + bottomRadius;
        if (0 < iVar2) {
          puVar34 = (undefined8 *)((longlong)&pIVar6[2].klass + lVar27 * 0xc);
          do {
            uVar49 = FUN_?((float)iVar3 * fVar23 * _UNK_?);
            VStack_36.z = (float)FUN_?();
            VStack_36._0_8_ = ZEXT48(uVar49);
            pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)&CStack_38,&VStack_36,pMVar9);
            uVar51 = pVVar37->x;
            fVar29 = pVVar37->z;
            if (pIVar5 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if (*(uint *)&pIVar5[1].monitor <= uVar42) goto code_?;
            *(ulonglong *)(((longlong)pIVar5 - (longlong)pIVar6) + (longlong)puVar34) =
                 CONCAT44(pVVar37->y * fVar24 + fVar21,(float)uVar51 * fVar24 + (float)uStack_12);
            *(float *)(((longlong)pIVar5 - (longlong)pIVar6) + 8 + (longlong)puVar34) =
                 fVar29 * fVar24 + fStack_13;
            if (pIVar6 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if (*(uint *)&pIVar6[1].monitor <= uVar42) goto code_?;
            uVar42 = uVar42 + 1;
            *puVar34 = CONCAT44(uVar19._4_4_ ^ uVar10,(undefined4)uVar19 ^ uVar10);
            lVar27 = lVar27 + 1;
            *(uint *)(puVar34 + 1) = (uint)fVar20 ^ uVar10;
            iVar3 = iVar3 + 1;
            puVar34 = (undefined8 *)((longlong)puVar34 + 0xc);
          } while (iVar3 < iVar2);
        }
        iStackX_20 = iStackX_20 + 1;
        fVar24 = _UNK_?;
      } while (iStackX_20 < numBottomCapRings + 1);
      uVar10 = (pLStack_7->fields)._size;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__InsertRange
                (pLStack_7,uVar10,pIVar5,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 ->klass->rgctx_data[0x12].method);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__InsertRange
                (pLStack_8,(pLStack_8->fields)._size,pIVar6,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 ->klass->rgctx_data[0x12].method);
      uVar42 = 0;
      pMVar9 = (MethodInfo *)FUN_?(TypeInfo__System__Int32,iVar1 * numBottomCapRings * 6);
      iVar4 = 0;
      iVar3 = uVar10 + 1;
      uVar10 = ~uVar10;
      lVar27 = 0;
      do {
        if (0 < iVar1) {
          piVar46 = (int *)((longlong)&pMVar9->klass + lVar27 * 4 + 4);
          uVar49 = uVar42 + 2;
          lVar47 = lVar27;
          iVar32 = iVar3;
          do {
            if (pMVar9 == (MethodInfo *)0x0) goto code_?;
            if ((((*(uint *)&pMVar9->name <= uVar42) ||
                 (piVar46[-1] = iVar32 + -1, *(uint *)&pMVar9->name <= uVar49 - 1)) ||
                (*piVar46 = iVar32, *(uint *)&pMVar9->name <= uVar49)) ||
               ((*(int *)((longlong)&pMVar9->klass + (longlong)(int)uVar49 * 4) = iVar1 + iVar32,
                *(uint *)&pMVar9->name <= uVar49 + 1 ||
                (*(int *)((longlong)&pMVar9->klass + (longlong)(int)uVar49 * 4 + 4) =
                      iVar1 + iVar32, *(uint *)&pMVar9->name <= uVar49 + 2))))
            goto code_?;
            uVar42 = uVar42 + 6;
            lVar27 = lVar47 + 6;
            piVar46 = piVar46 + 6;
            *(int *)((longlong)&pMVar9->return_type + (longlong)(int)uVar49 * 4) = iVar32;
            uVar52 = uVar49 + 3;
            uVar49 = uVar49 + 6;
            if (*(uint *)&pMVar9->name <= uVar52) goto code_?;
            iVar48 = iVar32 + iVar2;
            iVar32 = iVar32 + 1;
            *(int *)((longlong)&pMVar9->parameters + lVar47 * 4 + 4) = iVar48;
            lVar47 = lVar27;
          } while ((int)(uVar10 + iVar32) < iVar1);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + iVar2;
        uVar10 = uVar10 - iVar2;
      } while (iVar4 < numBottomCapRings);
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__InsertRange
                (this_00,(this_00->fields)._size,(IEnumerable_1_System_Int32_ *)pMVar9,
                 MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                 ->klass->rgctx_data[0x12].method);
    }
    if (0 < numTopCapRings) {
      iVar3 = iVar1 + 1;
      uVar10 = 0;
      iVar2 = iVar3 * (numTopCapRings + 1);
      arrayLength = arrayLength + iVar2;
      pIVar5 = (IEnumerable_1_UnityEngine_Vector3_ *)
                FUN_?(TypeInfo__UnityEngine__Vector3,iVar2);
      pIVar6 = (IEnumerable_1_UnityEngine_Vector3_ *)
                FUN_?(TypeInfo__UnityEngine__Vector3,iVar2);
      uVar19 = uStack_26;
      fVar21 = fStack_17;
      fVar20 = _UNK_?;
      fVar24 = (float)uStack_16;
      lVar27 = 0;
      iStackX_8 = 0;
      do {
        fVar29 = _UNK_?;
        fVar31 = 0.0;
        fVar30 = (float)iStackX_8 / (float)numTopCapRings;
        if ((0.0 <= fVar30) && (fVar31 = fVar30, fVar20 < fVar30)) {
          fVar31 = fVar20;
        }
        iVar2 = 0;
        fVar31 = fVar31 * (0.0 - topRadius) + topRadius;
        if (0 < iVar3) {
          puVar34 = (undefined8 *)((longlong)&pIVar6[2].klass + lVar27 * 0xc);
          do {
            uVar42 = FUN_?((float)iVar2 * fVar23 * fVar29);
            VStack_36.z = (float)FUN_?();
            VStack_36._0_8_ = ZEXT48(uVar42);
            pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)&CStack_38,&VStack_36,pMVar9);
            uVar53 = pVVar37->x;
            fVar30 = pVVar37->z;
            if (pIVar5 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if (*(uint *)&pIVar5[1].monitor <= uVar10) goto code_?;
            *(ulonglong *)(((longlong)pIVar5 - (longlong)pIVar6) + (longlong)puVar34) =
                 CONCAT44(pVVar37->y * fVar31 + fVar24,(float)uVar53 * fVar31 + fVar21);
            *(float *)(((longlong)pIVar5 - (longlong)pIVar6) + 8 + (longlong)puVar34) =
                 fVar30 * fVar31 + fStack_18;
            if (pIVar6 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if (*(uint *)&pIVar6[1].monitor <= uVar10) goto code_?;
            uVar10 = uVar10 + 1;
            *puVar34 = uVar19;
            lVar27 = lVar27 + 1;
            *(float *)(puVar34 + 1) = fStack_25;
            iVar2 = iVar2 + 1;
            puVar34 = (undefined8 *)((longlong)puVar34 + 0xc);
          } while (iVar2 < iVar3);
        }
        iStackX_8 = iStackX_8 + 1;
      } while (iStackX_8 < numTopCapRings + 1);
      iVar2 = (pLStack_7->fields)._size;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__InsertRange
                (pLStack_7,iVar2,pIVar5,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 ->klass->rgctx_data[0x12].method);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__InsertRange
                (pLStack_8,(pLStack_8->fields)._size,pIVar6,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 ->klass->rgctx_data[0x12].method);
      uVar10 = 0;
      collection = (IEnumerable_1_System_Int32_ *)
                   FUN_?(TypeInfo__System__Int32,iVar1 * numTopCapRings * 6);
      iVar32 = 0;
      lVar27 = 0;
      iVar4 = -(iVar2 + iVar3);
      do {
        iVar2 = iVar2 + iVar3;
        if (0 < iVar1) {
          piVar46 = (int *)((longlong)&collection[2].klass + lVar27 * 4 + 4);
          uVar42 = uVar10 + 2;
          lVar47 = lVar27;
          iVar48 = iVar2;
          do {
            if (collection == (IEnumerable_1_System_Int32_ *)0x0) goto code_?;
            if ((((*(uint *)&collection[1].monitor <= uVar10) ||
                 (piVar46[-1] = iVar48 - iVar3, *(uint *)&collection[1].monitor <= uVar42 - 1)) ||
                (*piVar46 = iVar48, *(uint *)&collection[1].monitor <= uVar42)) ||
               ((*(int *)((longlong)&collection[2].klass + (longlong)(int)uVar42 * 4) =
                      iVar48 + (1 - iVar3), *(uint *)&collection[1].monitor <= uVar42 + 1 ||
                (*(int *)((longlong)&collection[2].klass + (longlong)(int)uVar42 * 4 + 4) = iVar48,
                *(uint *)&collection[1].monitor <= uVar42 + 2)))) {
code_?:
              FUN_?();
              pcVar54 = (code *)swi(3);
              pMVar55 = (Mesh *)(*pcVar54)();
              return pMVar55;
            }
            uVar10 = uVar10 + 6;
            lVar27 = lVar47 + 6;
            piVar46 = piVar46 + 6;
            *(int *)((longlong)&collection[2].monitor + (longlong)(int)uVar42 * 4) = iVar48 + 1;
            uVar49 = uVar42 + 3;
            uVar42 = uVar42 + 6;
            if (*(uint *)&collection[1].monitor <= uVar49) goto code_?;
            iVar50 = iVar48 + (1 - iVar3);
            iVar48 = iVar48 + 1;
            *(int *)((longlong)&collection[3].klass + lVar47 * 4 + 4) = iVar50;
            lVar47 = lVar27;
          } while (iVar48 + iVar4 < iVar1);
        }
        iVar32 = iVar32 + 1;
        iVar4 = iVar4 - iVar3;
      } while (iVar32 < numTopCapRings);
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__InsertRange
                (this_00,(this_00->fields)._size,collection,
                 MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                 ->klass->rgctx_data[0x12].method);
    }
    pMVar55 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar55,(MethodInfo *)0x0);
    pVVar56 = (Vector3__Array *)FUN_?(pLStack_7);
    if (pMVar55 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar55,pVVar56,(MethodInfo *)0x0);
      pVVar56 = (Vector3__Array *)FUN_?(pLStack_8);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                (pMVar55,pVVar56,(MethodInfo *)0x0);
      CStack_38.r = color->r;
      CStack_38.g = color->g;
      CStack_38.b = color->b;
      CStack_38.a = color->a;
      value = ColorEx::ColorEx_GetFilledColorArray(arrayLength,&CStack_38,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                (pMVar55,value,(MethodInfo *)0x0);
      pIVar40 = (Int32__Array *)
                FUN_?(this_00,MethodInfo__System__Collections__Generic__List<int>__ToArray__
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                (pMVar55,pIVar40,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                (pMVar55,0,(MethodInfo *)0x0);
      return pMVar55;
    }
  }
code_?:
  FUN_?();
  pcVar54 = (code *)swi(3);
  pMVar55 = (Mesh *)(*pcVar54)();
  return pMVar55;
}

