
/* Mesh CreateCylinder(Single, Single, Single, Int32, Int32, Int32, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::CylinderMesh::CylinderMesh_CreateCylinder(float bottomRadius,float topRadius,float height,int32_t numSlices,int32_t numStacks,int32_t numBottomCapRings,int32_t numTopCapRings,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_);
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
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
  fStackX_8 = bottomRadius;
  if (bottomRadius < 0.0001) {
    fStackX_8 = 0.0001;
  }
  fStackX_10 = topRadius;
  if (topRadius < 0.0001) {
    fStackX_10 = 0.0001;
  }
  if (height < 0.0001) {
    height = 0.0001;
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
  pIVar5 = (IEnumerable_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__UnityEngine__Vector3,arrayLength);
  pIVar6 = (IEnumerable_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__UnityEngine__Vector3,arrayLength);
  this = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  pLStack_7 = this;
  FUN_?(this,arrayLength,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  pLStack_8 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
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
  fVar23 = 360.0 / (float)iVar1;
  fStack_24 = fVar20;
  uStack_25 = uVar19;
  if (0 < iVar4) {
    lVar26 = 0;
    uVar27 = uStack_16;
    do {
      fVar28 = 0.0;
      fVar29 = (float)iStack_22 * (height / (float)iVar3) + fVar21;
      fVar30 = fVar29 / (float)uVar27;
      if ((0.0 <= fVar30) && (fVar28 = fVar30, 1.0 < fVar30)) {
        fVar28 = 1.0;
      }
      iVar31 = 0;
      fVar28 = fVar28 * (fStackX_10 - fStackX_8) + fStackX_8;
      if (0 < iVar2) {
        uStack_32 = uStack_32 & 0xffffffff;
        puVar33 = (undefined8 *)((longlong)&pIVar5[2].klass + lVar26 * 0xc);
        do {
          uVar34 = FUN_?((float)iVar31 * fVar23 * 0.017453292);
          VStack_35.z = (float)FUN_?();
          VStack_35._0_8_ = CONCAT44((int)(uStack_32 >> 0x20),uVar34);
          uStack_32 = VStack_35._0_8_;
          pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&CStack_37,&VStack_35,pMVar9);
          uVar27._0_4_ = pVVar36->x;
          uVar27._4_4_ = pVVar36->y;
          fVar30 = pVVar36->z;
          if (pIVar6 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          if (*(uint *)&pIVar6[1].monitor <= uVar10) goto code_?;
          *(undefined8 *)((longlong)puVar33 + ((longlong)pIVar6 - (longlong)pIVar5)) = uVar27;
          *(float *)((longlong)puVar33 + ((longlong)pIVar6 - (longlong)pIVar5) + 8) = pVVar36->z;
          if (pIVar5 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          if (*(uint *)&pIVar5[1].monitor <= uVar10) goto code_?;
          uVar10 = uVar10 + 1;
          lVar26 = lVar26 + 1;
          iVar31 = iVar31 + 1;
          *puVar33 = CONCAT44((float)uVar19._4_4_ * fVar29 + fVar21 + (float)uVar27._4_4_ * fVar28,(float)(undefined4)uVar19 * fVar29 + (float)uStack_12 + (float)(undefined4)uVar27 * fVar28);
          *(float *)(puVar33 + 1) = fVar20 * fVar29 + fStack_13 + fVar30 * fVar28;
          puVar33 = (undefined8 *)((longlong)puVar33 + 0xc);
          uVar27 = uStack_16;
        } while (iVar31 < iVar2);
      }
      iStack_22 = iStack_22 + 1;
      this = pLStack_7;
    } while (iStack_22 < iVar4);
  }
  if ((this != (List_1_UnityEngine_Vector3_ *)0x0) && (mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__InsertRange(this,(this->fields)._size,pIVar5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_->klass->rgctx_data[0x12].method), pLStack_8 != (List_1_UnityEngine_Vector3_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__InsertRange(pLStack_8,(pLStack_8->fields)._size,pIVar6,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_->klass->rgctx_data[0x12].method);
    uVar10 = 0;
    this_00 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    pvVar38 = MethodInfo__System__Collections__Generic__List<int>__List_int_->klass->rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar38 + 0x135) & 1) == 0) {
      pvVar38 = (void *)FUN_?(pvVar38);
    }
    pIVar39 = (Int32__Array *)FUN_?(pvVar38,100);
    bVar40 = iRam_? != 0;
    (this_00->fields)._items = pIVar39;
    if (bVar40) {
      uVar41 = (uint)((ulonglong)&this_00->fields >> 0xc);
      uVar42 = (ulonglong)((uVar41 & 0x1fffff) >> 6);
      do {
        uVar43 = *(ulonglong *)(uVar42 * 8 + 0xADDR);
        puVar44 = (ulonglong *)(uVar42 * 8 + 0xADDR);
        LOCK();
        bVar40 = uVar43 == *puVar44;
        if (bVar40) {
          *puVar44 = uVar43 | 1L << (uVar41 & 0x3f);
        }
        UNLOCK();
      } while (!bVar40);
    }
    pMVar9 = (MethodInfo *)FUN_?(TypeInfo__System__Int32,iVar3 * iVar1 * 6);
    iStackX_20 = 0;
    if (0 < iVar3) {
      lVar26 = 0;
      iVar31 = -iVar2;
      iVar4 = iVar2;
      do {
        if (0 < iVar1) {
          piVar45 = (int *)((longlong)&pMVar9->klass + lVar26 * 4 + 4);
          uVar41 = uVar10 + 2;
          lVar46 = lVar26;
          iVar47 = iVar4;
          do {
            if (pMVar9 == (MethodInfo *)0x0) goto code_?;
            if ((((*(uint *)&pMVar9->name <= uVar10) || (piVar45[-1] = iVar47 - iVar2, *(uint *)&pMVar9->name <= uVar41 - 1)) || (*piVar45 = iVar47, *(uint *)&pMVar9->name <= uVar41)) || ((*(int *)((longlong)&pMVar9->klass + (longlong)(int)uVar41 * 4) = (1 - iVar2) + iVar47, *(uint *)&pMVar9->name <= uVar41 + 1 || (*(int *)((longlong)&pMVar9->klass + (longlong)(int)uVar41 * 4 + 4) = iVar47, *(uint *)&pMVar9->name <= uVar41 + 2)))) goto code_?;
            uVar10 = uVar10 + 6;
            lVar26 = lVar46 + 6;
            piVar45 = piVar45 + 6;
            *(int *)((longlong)&pMVar9->return_type + (longlong)(int)uVar41 * 4) = iVar47 + 1;
            uVar48 = uVar41 + 3;
            uVar41 = uVar41 + 6;
            if (*(uint *)&pMVar9->name <= uVar48) goto code_?;
            iVar49 = (1 - iVar2) + iVar47;
            iVar47 = iVar47 + 1;
            *(int *)((longlong)&pMVar9->parameters + lVar46 * 4 + 4) = iVar49;
            lVar46 = lVar26;
          } while (iVar31 + iVar47 < iVar1);
        }
        iStackX_20 = iStackX_20 + 1;
        iVar31 = iVar31 - iVar2;
        iVar4 = iVar4 + iVar2;
      } while (iStackX_20 < iVar3);
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32__InsertRange(this_00,(this_00->fields)._size,(IEnumerable_1_System_Int32_ *)pMVar9,MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_->klass->rgctx_data[0x12].method);
    if (0 < numBottomCapRings) {
      iVar2 = iVar1 + 1;
      uVar10 = 0;
      iVar3 = iVar2 * (numBottomCapRings + 1);
      arrayLength = arrayLength + iVar3;
      pIVar5 = (IEnumerable_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar3);
      pIVar6 = (IEnumerable_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar3);
      iStackX_20 = 0;
      lVar26 = 0;
      do {
        fVar28 = 0.0;
        fVar30 = (float)iStackX_20 / (float)numBottomCapRings;
        if ((0.0 <= fVar30) && (fVar28 = fVar30, 1.0 < fVar30)) {
          fVar28 = 1.0;
        }
        iVar3 = 0;
        fVar28 = fVar28 * (0.0 - fStackX_8) + fStackX_8;
        if (0 < iVar2) {
          puVar44 = (ulonglong *)((longlong)&pIVar6[2].klass + lVar26 * 0xc);
          do {
            uVar41 = FUN_?((float)iVar3 * fVar23 * 0.017453292);
            VStack_35.z = (float)FUN_?();
            VStack_35._0_8_ = ZEXT48(uVar41);
            pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&CStack_37,&VStack_35,pMVar9);
            uVar50 = pVVar36->x;
            fVar30 = pVVar36->z;
            if (pIVar5 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if (*(uint *)&pIVar5[1].monitor <= uVar10) goto code_?;
            *(ulonglong *)(((longlong)pIVar5 - (longlong)pIVar6) + (longlong)puVar44) = CONCAT44(pVVar36->y * fVar28 + fVar21,(float)uVar50 * fVar28 + (float)uStack_12);
            *(float *)(((longlong)pIVar5 - (longlong)pIVar6) + 8 + (longlong)puVar44) = fVar30 * fVar28 + fStack_13;
            if (pIVar6 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if (*(uint *)&pIVar6[1].monitor <= uVar10) goto code_?;
            uVar10 = uVar10 + 1;
            *puVar44 = uVar19 ^ 0x8000000080000000;
            lVar26 = lVar26 + 1;
            *(float *)(puVar44 + 1) = -fVar20;
            iVar3 = iVar3 + 1;
            puVar44 = (ulonglong *)((longlong)puVar44 + 0xc);
          } while (iVar3 < iVar2);
        }
        iStackX_20 = iStackX_20 + 1;
      } while (iStackX_20 < numBottomCapRings + 1);
      uVar10 = (pLStack_7->fields)._size;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__InsertRange(pLStack_7,uVar10,pIVar5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_->klass->rgctx_data[0x12].method);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__InsertRange(pLStack_8,(pLStack_8->fields)._size,pIVar6,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_->klass->rgctx_data[0x12].method);
      uVar41 = 0;
      pMVar9 = (MethodInfo *)FUN_?(TypeInfo__System__Int32,iVar1 * numBottomCapRings * 6);
      iVar4 = 0;
      iVar3 = uVar10 + 1;
      uVar10 = ~uVar10;
      lVar26 = 0;
      do {
        if (0 < iVar1) {
          piVar45 = (int *)((longlong)&pMVar9->klass + lVar26 * 4 + 4);
          uVar48 = uVar41 + 2;
          lVar46 = lVar26;
          iVar31 = iVar3;
          do {
            if (pMVar9 == (MethodInfo *)0x0) goto code_?;
            if ((((*(uint *)&pMVar9->name <= uVar41) || (piVar45[-1] = iVar31 + -1, *(uint *)&pMVar9->name <= uVar48 - 1)) || (*piVar45 = iVar31, *(uint *)&pMVar9->name <= uVar48)) || ((*(int *)((longlong)&pMVar9->klass + (longlong)(int)uVar48 * 4) = iVar1 + iVar31, *(uint *)&pMVar9->name <= uVar48 + 1 || (*(int *)((longlong)&pMVar9->klass + (longlong)(int)uVar48 * 4 + 4) = iVar1 + iVar31, *(uint *)&pMVar9->name <= uVar48 + 2)))) goto code_?;
            uVar41 = uVar41 + 6;
            lVar26 = lVar46 + 6;
            piVar45 = piVar45 + 6;
            *(int *)((longlong)&pMVar9->return_type + (longlong)(int)uVar48 * 4) = iVar31;
            uVar51 = uVar48 + 3;
            uVar48 = uVar48 + 6;
            if (*(uint *)&pMVar9->name <= uVar51) goto code_?;
            iVar47 = iVar31 + iVar2;
            iVar31 = iVar31 + 1;
            *(int *)((longlong)&pMVar9->parameters + lVar46 * 4 + 4) = iVar47;
            lVar46 = lVar26;
          } while ((int)(uVar10 + iVar31) < iVar1);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + iVar2;
        uVar10 = uVar10 - iVar2;
      } while (iVar4 < numBottomCapRings);
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32__InsertRange(this_00,(this_00->fields)._size,(IEnumerable_1_System_Int32_ *)pMVar9,MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_->klass->rgctx_data[0x12].method);
    }
    if (0 < numTopCapRings) {
      iVar3 = iVar1 + 1;
      uVar10 = 0;
      iVar2 = iVar3 * (numTopCapRings + 1);
      arrayLength = arrayLength + iVar2;
      pIVar5 = (IEnumerable_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar2);
      pIVar6 = (IEnumerable_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar2);
      uVar19 = uStack_25;
      fVar20 = fStack_17;
      fVar21 = (float)uStack_16;
      lVar26 = 0;
      fStackX_8 = 0.0;
      do {
        fVar28 = 0.0;
        fVar30 = (float)(int)fStackX_8 / (float)numTopCapRings;
        if ((0.0 <= fVar30) && (fVar28 = fVar30, 1.0 < fVar30)) {
          fVar28 = 1.0;
        }
        iVar2 = 0;
        fVar28 = fVar28 * (0.0 - fStackX_10) + fStackX_10;
        if (0 < iVar3) {
          puVar44 = (ulonglong *)((longlong)&pIVar6[2].klass + lVar26 * 0xc);
          do {
            uVar41 = FUN_?((float)iVar2 * fVar23 * 0.017453292);
            VStack_35.z = (float)FUN_?();
            VStack_35._0_8_ = ZEXT48(uVar41);
            pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&CStack_37,&VStack_35,pMVar9);
            uVar52 = pVVar36->x;
            fVar30 = pVVar36->z;
            if (pIVar5 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if (*(uint *)&pIVar5[1].monitor <= uVar10) goto code_?;
            *(ulonglong *)(((longlong)pIVar5 - (longlong)pIVar6) + (longlong)puVar44) = CONCAT44(pVVar36->y * fVar28 + fVar21,(float)uVar52 * fVar28 + fVar20);
            *(float *)(((longlong)pIVar5 - (longlong)pIVar6) + 8 + (longlong)puVar44) = fVar30 * fVar28 + fStack_18;
            if (pIVar6 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if (*(uint *)&pIVar6[1].monitor <= uVar10) goto code_?;
            uVar10 = uVar10 + 1;
            *puVar44 = uVar19;
            lVar26 = lVar26 + 1;
            *(float *)(puVar44 + 1) = fStack_24;
            iVar2 = iVar2 + 1;
            puVar44 = (ulonglong *)((longlong)puVar44 + 0xc);
          } while (iVar2 < iVar3);
        }
        fStackX_8 = (float)((int)fStackX_8 + 1);
      } while ((int)fStackX_8 < numTopCapRings + 1);
      iVar2 = (pLStack_7->fields)._size;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__InsertRange(pLStack_7,iVar2,pIVar5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_->klass->rgctx_data[0x12].method);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3__InsertRange(pLStack_8,(pLStack_8->fields)._size,pIVar6,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_->klass->rgctx_data[0x12].method);
      uVar10 = 0;
      collection = (IEnumerable_1_System_Int32_ *)FUN_?(TypeInfo__System__Int32,iVar1 * numTopCapRings * 6);
      iVar31 = 0;
      lVar26 = 0;
      iVar4 = -(iVar2 + iVar3);
      do {
        iVar2 = iVar2 + iVar3;
        if (0 < iVar1) {
          piVar45 = (int *)((longlong)&collection[2].klass + lVar26 * 4 + 4);
          uVar41 = uVar10 + 2;
          lVar46 = lVar26;
          iVar47 = iVar2;
          do {
            if (collection == (IEnumerable_1_System_Int32_ *)0x0) goto code_?;
            if ((((*(uint *)&collection[1].monitor <= uVar10) || (piVar45[-1] = iVar47 - iVar3, *(uint *)&collection[1].monitor <= uVar41 - 1)) || (*piVar45 = iVar47, *(uint *)&collection[1].monitor <= uVar41)) || ((*(int *)((longlong)&collection[2].klass + (longlong)(int)uVar41 * 4) = iVar47 + (1 - iVar3), *(uint *)&collection[1].monitor <= uVar41 + 1 || (*(int *)((longlong)&collection[2].klass + (longlong)(int)uVar41 * 4 + 4) = iVar47, *(uint *)&collection[1].monitor <= uVar41 + 2)))) {
code_?:
              FUN_?();
              pcVar53 = (code *)swi(3);
              pMVar54 = (Mesh *)(*pcVar53)();
              return pMVar54;
            }
            uVar10 = uVar10 + 6;
            lVar26 = lVar46 + 6;
            piVar45 = piVar45 + 6;
            *(int *)((longlong)&collection[2].monitor + (longlong)(int)uVar41 * 4) = iVar47 + 1;
            uVar48 = uVar41 + 3;
            uVar41 = uVar41 + 6;
            if (*(uint *)&collection[1].monitor <= uVar48) goto code_?;
            iVar49 = iVar47 + (1 - iVar3);
            iVar47 = iVar47 + 1;
            *(int *)((longlong)&collection[3].klass + lVar46 * 4 + 4) = iVar49;
            lVar46 = lVar26;
          } while (iVar47 + iVar4 < iVar1);
        }
        iVar31 = iVar31 + 1;
        iVar4 = iVar4 - iVar3;
      } while (iVar31 < numTopCapRings);
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32__InsertRange(this_00,(this_00->fields)._size,collection,MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_->klass->rgctx_data[0x12].method);
    }
    pMVar54 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar54,(MethodInfo *)0x0);
    pVVar55 = (Vector3__Array *)FUN_?(pLStack_7);
    if (pMVar54 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar54,pVVar55,(MethodInfo *)0x0);
      pVVar55 = (Vector3__Array *)FUN_?(pLStack_8);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar54,pVVar55,(MethodInfo *)0x0);
      CStack_37.r = color->r;
      CStack_37.g = color->g;
      CStack_37.b = color->b;
      CStack_37.a = color->a;
      value = ColorEx::ColorEx_GetFilledColorArray(arrayLength,&CStack_37,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar54,value,(MethodInfo *)0x0);
      pIVar39 = (Int32__Array *)FUN_?(this_00,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar54,pIVar39,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar54,0,(MethodInfo *)0x0);
      return pMVar54;
    }
  }
code_?:
  FUN_?();
  pcVar53 = (code *)swi(3);
  pMVar54 = (Mesh *)(*pcVar53)();
  return pMVar54;
}

