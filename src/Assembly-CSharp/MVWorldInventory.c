
/* Void AddPrototype(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_AddPrototype
               (MVWorldInventory *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RuntimePrototypeCubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__MV__WorldObject__PrototypeDataParameters;
  uStackX_10 = 0;
  iVar2._0_2_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.attrs;
  iVar2._2_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.type;
  iVar2._3_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.field_0xb;
  if (iVar2 < 0) {
    if (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_1).field_0x6d & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters);
      FUN_?(pOVar3 + 1,&uStackX_10,(longlong)(int)(pPVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    else {
      pOVar3 = (Object *)0x0;
    }
  }
  else {
    pOVar3 = (Object *)((ulonglong)uStackX_11 << 8);
  }
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar3 != (Object *)0x0)) {
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar3,lRam_?);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    id = *(int32_t *)&pOVar3[1].klass;
    uStackX_10 = 1;
    pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStackX_10)
    ;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      scale = *(float *)&pOVar3[1].klass;
      uStackX_10 = 3;
      pOVar3 = (Object *)
               FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStackX_10);
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar3,lRam_?);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        authorProfileId = *(int32_t *)&pOVar3[1].klass;
        uStackX_10 = 2;
        pOVar3 = (Object *)
                 FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStackX_10);
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar3,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pBVar10 = TypeInfo__System__Byte;
        if (pOVar3 == (Object *)0x0) {
          data_00 = (Byte__Array *)0x0;
        }
        else {
          data_00 = (Byte__Array *)FUN_?(pOVar3,TypeInfo__System__Byte);
          if (data_00 == (Byte__Array *)0x0) {
            FUN_?(pOVar3,pBVar10);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        this_01 = (RuntimePrototypeCubeModel *)FUN_?(TypeInfo__RuntimePrototypeCubeModel);
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                  (this_01,id,authorProfileId,scale,data_00,(MethodInfo *)0x0);
        this_00 = (this->fields).runtimePrototypes;
        if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object *)this_01,
                     (InsertionBehavior__Enum)
                     CONCAT71((int7)((ulonglong)
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                                     ->klass >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                     ->klass->rgctx_data[0x22].method);
          pMVar11 = (this->fields).OnWorldInventoryChange;
          if (pMVar11 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
            (*(pMVar11->fields)._._.invoke_impl)
                      ((pMVar11->fields)._._.method_code,this,(pMVar11->fields)._._.method);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void AddRuntimePrototypeToDirty(RuntimePrototypeCubeModel) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_AddRuntimePrototypeToDirty
               (MVWorldInventory *this,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__Add_RuntimePrototypeCubeModel_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__Add_RuntimePrototypeCubeModel_
  ;
  pLVar2 = (this->fields).dirtyRPCM;
  if (pLVar2 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    pRVar4 = (pLVar2->fields)._items;
    if (pRVar4 != (RuntimePrototypeCubeModel__Array *)0x0) {
      uVar5 = (pLVar2->fields)._size;
      if (uVar5 < (uint)pRVar4->max_length) {
        (pLVar2->fields)._size = uVar5 + 1;
      }
      else {
        uVar5 = (pLVar2->fields)._size;
        FUN_?(pLVar2,uVar5 + 1,
                      (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pRVar4,unaff_RDI);
        pRVar4 = (pLVar2->fields)._items;
        (pLVar2->fields)._size = uVar5 + 1;
        if (pRVar4 == (RuntimePrototypeCubeModel__Array *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((uint)pRVar4->max_length <= uVar5) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = iRam_? != 0;
      pRVar4->vector[(int)uVar5] = rpcm;
      if (bVar7) {
        uVar5 = (uint)((ulonglong)(pRVar4->vector + (int)uVar5) >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* RuntimePrototypeCubeModel CreatePendingPrototype(Int32) */

RuntimePrototypeCubeModel *
Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_CreatePendingPrototype
          (MVWorldInventory *this,int32_t prototypeId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).runtimePrototypes;
  if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
    pRVar1 = (RuntimePrototypeCubeModel *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,prototypeId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                       );
    if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
      pRVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                         (pRVar1,1,(MethodInfo *)0x0);
      if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ILogger);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__)
          ;
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_prototypeId_is__1_which_means_th);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_pendingDeltaCubes_Count_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (pRVar1->fields).prototypeState = 1;
        (pRVar1->fields).prototypeId = -1;
        return pRVar1;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pRVar1 = (RuntimePrototypeCubeModel *)(*pcVar2)();
  return pRVar1;
}


/* Void GenerateAllDirty(Int32 ByRef) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_GenerateAllDirty
               (MVWorldInventory *this,int32_t *counter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).dirtyRPCM;
  if (pLVar1 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    index = (pLVar1->fields)._size - 1;
    if (-1 < (int)index) {
      lVar2 = (longlong)(int)index * 8 + 0x20;
      do {
        pLVar1 = (this->fields).dirtyRPCM;
        if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) goto code_?;
        if ((uint)(pLVar1->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pRVar4 = (pLVar1->fields)._items;
        if (pRVar4 == (RuntimePrototypeCubeModel__Array *)0x0) goto code_?;
        if ((uint)pRVar4->max_length <= index) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar5 = *(longlong *)((longlong)pRVar4->vector + lVar2 + -0x20);
        if (lVar5 == 0) goto code_?;
        if (*(int *)(lVar5 + 0x40) == 3) {
          this_00 = (RuntimePrototypeCubeModel *)FUN_?((this->fields).dirtyRPCM,index);
          if (this_00 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
          bVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateDirtyChunksAll
                            (this_00,counter,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            pLVar1 = (this->fields).dirtyRPCM;
            if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((List_1_System_Object_ *)pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                      );
          }
        }
        lVar2 = lVar2 + -8;
        index = index - 1;
      } while (-1 < (int)index);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean GenerateDirty(MeshGeneratePriority, Int32 ByRef) */

bool Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_GenerateDirty
               (MVWorldInventory *this,MeshGeneratePriority__Enum priority,int32_t *counter,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).dirtyRPCM;
  if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  index = (pLVar1->fields)._size - 1;
  if (-1 < (int)index) {
    lVar4 = (longlong)(int)index * 8 + 0x20;
    do {
      pLVar1 = (this->fields).dirtyRPCM;
      if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) goto code_?;
      if ((uint)(pLVar1->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      pRVar5 = (pLVar1->fields)._items;
      if (pRVar5 == (RuntimePrototypeCubeModel__Array *)0x0) goto code_?;
      if ((uint)pRVar5->max_length <= index) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      lVar6 = *(longlong *)((longlong)pRVar5->vector + lVar4 + -0x20);
      if (lVar6 == 0) goto code_?;
      if (*(MeshGeneratePriority__Enum *)(lVar6 + 0x40) == priority) {
        this_00 = (RuntimePrototypeCubeModel *)FUN_?((this->fields).dirtyRPCM,index);
        if (this_00 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        bVar3 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateDirtyChunks
                          (this_00,counter,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return 0;
        }
        pLVar1 = (this->fields).dirtyRPCM;
        if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                  );
      }
      lVar4 = lVar4 + -8;
      index = index - 1;
    } while (-1 < (int)index);
  }
  return 1;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_LateUpdate
               (MVWorldInventory *this,MethodInfo *method)

{
  aiStackX_8[0] = 1;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).dirtyRPCM;
  if (pLVar1 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    index = (pLVar1->fields)._size - 1;
    if (-1 < (int)index) {
      lVar2 = (longlong)(int)index * 8 + 0x20;
      do {
        pLVar1 = (this->fields).dirtyRPCM;
        if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) goto code_?;
        if ((uint)(pLVar1->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pRVar4 = (pLVar1->fields)._items;
        if (pRVar4 == (RuntimePrototypeCubeModel__Array *)0x0) goto code_?;
        if ((uint)pRVar4->max_length <= index) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar5 = *(longlong *)((longlong)pRVar4->vector + lVar2 + -0x20);
        if (lVar5 == 0) goto code_?;
        if (*(int *)(lVar5 + 0x40) == 3) {
          this_00 = (RuntimePrototypeCubeModel *)FUN_?((this->fields).dirtyRPCM,index);
          if (this_00 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
          bVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateDirtyChunksAll
                            (this_00,aiStackX_8,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            pLVar1 = (this->fields).dirtyRPCM;
            if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((List_1_System_Object_ *)pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                      );
          }
        }
        lVar2 = lVar2 + -8;
        index = index - 1;
      } while (-1 < (int)index);
    }
    bVar6 = MVWorldInventory_GenerateDirty
                      (this,MeshGeneratePriority__Enum_Medium,aiStackX_8,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      MVWorldInventory_GenerateDirty
                (this,MeshGeneratePriority__Enum_Low,aiStackX_8,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void NotifyWorldInventoryChange() */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_NotifyWorldInventoryChange
               (MVWorldInventory *this,MethodInfo *method)

{
  pMVar1 = (this->fields).OnWorldInventoryChange;
  if (pMVar1 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,this,(pMVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void OnReplaceWoPrototype(Int32, Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
               (MVWorldInventory *this,int32_t woId,int32_t worldInventoryId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<float>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<float>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pending_runtime_prototype_alread);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_protoTypeID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).pendingRuntimePrototypes;
  if (pDVar1 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__FindEntry
                    (pDVar1,woId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                     ->klass->rgctx_data[0x21].method);
  if (iVar2 < 0) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_02 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar3,woId,(MethodInfo *)0x0);
    if (this_02 == (MVCubeModelBase *)0x0) goto code_?;
    bVar4 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((this_02->klass->_1).naturalAligment < bVar4) ||
       ((MVCubeModelInstance__Class *)(this_02->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      FUN_?(this_02,TypeInfo__MVCubeModelInstance);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pRVar6 = (this_02->fields).prototypeCubeModel;
    if ((pRVar6 == (RuntimePrototypeCubeModel *)0x0) ||
       (pDVar7 = (this->fields).runtimePrototypes,
       pDVar7 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0))
    goto code_?;
    pRVar6 = (RuntimePrototypeCubeModel *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                        (pRVar6->fields).prototypeId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                       );
    if (pRVar6 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    NVar8 = (pRVar6->fields).PendingScaleUpdate;
    pRVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                       (pRVar6,0,(MethodInfo *)0x0);
    if (pRVar6 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar6->fields).prototypeId = worldInventoryId;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
              (pRVar6,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
    pDVar7 = (this->fields).runtimePrototypes;
    if (pDVar7 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    uVar9 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,worldInventoryId,(Object *)pRVar6,
               (InsertionBehavior__Enum)uVar9,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
               ->klass->rgctx_data[0x22].method);
    this_00 = (this_02->fields).prototypeCubeModel;
    if (this_00 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
              (this_00,woId,(MethodInfo *)0x0);
    MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel(this_02,pRVar6,(MethodInfo *)0x0);
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
              (pRVar6,this_02,(MethodInfo *)0x0);
    pDVar10 = (this_02->fields)._._.data;
    aiStackX_10[0] = worldInventoryId;
    pOVar11 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar10,(Object *)StringLiteral_protoTypeID,pOVar11,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  else {
    pDVar1 = (this->fields).pendingRuntimePrototypes;
    if (pDVar1 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    lVar12 = FUN_?(auStack_13,pDVar1,woId);
    pRVar6 = *(RuntimePrototypeCubeModel **)(lVar12 + 8);
    if (pRVar6 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    NVar8 = (pRVar6->fields).PendingScaleUpdate;
    (pRVar6->fields).prototypeId = worldInventoryId;
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).runtimePrototypes;
    if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_01,worldInventoryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      pDVar7 = (this->fields).runtimePrototypes;
      if (pDVar7 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,worldInventoryId,
                 (Object *)pRVar6,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                 ->klass->rgctx_data[0x22].method);
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                (pRVar6,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar3,woId,(MethodInfo *)0x0);
      if (pMVar14 == (MVWorldObjectClient *)0x0) goto code_?;
      pMVar15 = pMVar14->klass;
      bVar4 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar15->_1).naturalAligment < bVar4) ||
         ((MVCubeModelInstance__Class *)(pMVar15->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        FUN_?(pMVar14,TypeInfo__MVCubeModelInstance);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pDVar10 = (pMVar14->fields)._.data;
      aiStackX_10[0] = worldInventoryId;
      pOVar11 = (Object *)FUN_?(uRam_?,aiStackX_10);
      if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar10,(Object *)StringLiteral_protoTypeID,pOVar11,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar15 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Pending_runtime_prototype_alread,(MethodInfo *)0x0);
    }
    pDVar1 = (this->fields).pendingRuntimePrototypes;
    if (pDVar1 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,PendingPrototypeData]::
    Dictionary_2_System_Int32_PendingPrototypeData__Remove
              (pDVar1,woId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
              );
  }
  if (NVar8.hasValue != 0) {
    this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_03 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fStackX_c = NVar8.value;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototypeScale
              (this_03,worldInventoryId,fStackX_c,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnUpdatePrototypeEvent(Int32, Byte[]) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
               (MVWorldInventory *this,int32_t worldInventoryID,Byte__Array *worldInventoryData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).runtimePrototypes;
  if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
    rpcm = (RuntimePrototypeCubeModel *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldInventoryID,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                     );
    this_02 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_02,worldInventoryData,(MethodInfo *)0x0);
    if (rpcm != (RuntimePrototypeCubeModel *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_DecodeBytePacker
                (this_02,rpcm,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 != (GameSessionData *)0x0) {
        if ((pGVar1->fields).gameMode != 1) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar1 == (GameSessionData *)0x0) goto code_?;
          if ((pGVar1->fields).gameMode != 3) {
            pHStack_2 = (rpcm->fields).instances;
            if (pHStack_2 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)&pHStack_2 >> 0xc);
              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                LOCK();
                bVar7 = uVar5 == *puVar6;
                if (bVar7) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            lStack_8 = (ulonglong)(uint)(pHStack_2->fields)._version << 0x20;
            uStack_9 = 0;
            puStack_10 = (undefined *)lStack_8;
            uStack_11 = 0;
            pHStack_12 = pHStack_2;
            cVar13 = FUN_?(&pHStack_12,
                                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                 );
            if (cVar13 != '\0') {
              key = (int32_t)uStack_9;
              pMVar14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar14 != (MVWorldObjectClientManager *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                this_01 = (pMVar14->fields).worldObjects;
                if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,
                             (Object **)&stack0x00000010,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                            );
                  FUN_?();
                }
                FUN_?();
              }
              FUN_?();
              FUN_?();
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
        }
        return;
      }
code_?:
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnUpdatePrototypeScaleEvent(Int32, Single) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_OnUpdatePrototypeScaleEvent
               (MVWorldInventory *this,int32_t worldInventoryID,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).runtimePrototypes;
  if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldInventoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                        );
    if (pOVar1 != (Object *)0x0) {
      pOVar1[1].monitor = (MonitorData *)0x0;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__Dispose__
                      ,CONCAT44(in_XMM2_Db,scale),0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MVCubeModelInstance);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_2 = (undefined1  [8])0x0;
      puStack_3 = (undefined1 *)0x0;
      pMStack_4 = (MVCubeModelBase *)0x0;
      *(float *)&pOVar1[7].klass = scale;
      this_04 = (List_1_System_Object_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
                 MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
      pLVar5 = (List_1_System_Object_ *)pOVar1[6].monitor;
      pLStack_6 = this_04;
      if (pLVar5 != (List_1_System_Object_ *)0x0) {
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&pLStack_8 >> 0xc);
          uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        puStack_13 = (undefined1 *)((ulonglong)*(uint *)&pLVar5[1].fields._items << 0x20);
        uStack_14 = 0;
        puStack_15 = puStack_13;
        uStack_16 = 0;
        uStack_17 = 0;
        ppLStack_18 = &pLStack_19;
        pLStack_8 = pLVar5;
        pLStack_19 = pLVar5;
code_?:
        cVar20 = FUN_?(&pLStack_19,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                              );
        if (cVar20 != '\0') {
          key = (int32_t)uStack_16;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar21 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar21 != (MVGameControllerBase *)0x0) {
            pMVar22 = (pMVar21->fields).game;
            if (pMVar22 != (MVNetworkGame *)0x0) {
              if (((pMVar22->fields).worldNetwork != (WorldNetwork *)0x0) &&
                 (pMVar23 = (((pMVar22->fields).worldNetwork)->fields)._.worldObjectClientManager,
                 pMVar23 != (MVWorldObjectClientManagerNetwork *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOStackX_20 = (Object *)0x0;
                this_01 = (pMVar23->fields)._.worldObjects;
                if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
                goto code_?;
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        if (this_04 != (List_1_System_Object_ *)0x0) {
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)&pLStack_8 >> 0xc);
            uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          puStack_13 = (undefined1 *)((ulonglong)(uint)(this_04->fields)._version << 0x20);
          uStack_14 = 0;
          puStack_3 = puStack_13;
          pMStack_4 = (MVCubeModelBase *)0x0;
          uStack_17 = 0;
          ppLStack_18 = (List_1_System_Object_ **)auStack_2;
          pLStack_8 = this_04;
          auStack_2 = (undefined1  [8])this_04;
          while (bVar24 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Object]::List_1_T_Enumerator_System_Object__MoveNext
                                    ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__MoveNext__
                                    ), bVar24 != 0) {
            if (pMStack_4 == (MVCubeModelBase *)0x0) goto code_?;
            this_02 = (pMStack_4->fields).prototypeCubeModel;
            if (this_02 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RebuildChunks
                      (this_02,(MethodInfo *)0x0);
          }
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)&pLStack_8 >> 0xc);
            uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          puStack_13 = (undefined1 *)((ulonglong)(uint)(this_04->fields)._version << 0x20);
          uStack_14 = 0;
          puStack_3 = puStack_13;
          pMStack_4 = (MVCubeModelBase *)0x0;
          pLStack_8 = (List_1_System_Object_ *)0x0;
          puStack_13 = auStack_2;
          auStack_2 = (undefined1  [8])this_04;
          while( true ) {
            bVar24 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__MoveNext__
                               );
            this_03 = pMStack_4;
            if (bVar24 == 0) {
              return;
            }
            fVar25 = *(float *)&pOVar1[7].klass;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar27 = (pVVar26->oneVector).x;
            uVar28 = (pVVar26->oneVector).y;
            if (this_03 == (MVCubeModelBase *)0x0) break;
            pLStack_6 = (List_1_System_Object_ *)
                         CONCAT44((float)uVar28 * fVar25,(float)uVar27 * fVar25);
            fStack_29 = (pVVar26->oneVector).z * fVar25;
            (*(this_03->klass->vtable).set_Scale.methodPtr)
                      (this_03,&pLStack_6,(this_03->klass->vtable).set_Scale.method);
            MVCubeModelBase::MVCubeModelBase_ObjectLinkTransparency(this_03,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
      FUN_?();
      pcVar30 = (code *)swi(3);
      (*pcVar30)();
      return;
    }
  }
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
code_?:
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryGetValue
            ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,&pOStackX_20,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            );
  if (pOStackX_20 != (Object *)0x0) {
    pOVar31 = pOStackX_20->klass;
    bVar32 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((bVar32 <= (pOVar31->_1).naturalAligment) &&
        ((MVCubeModelInstance__Class *)(pOVar31->_1).typeHierarchy[(ulonglong)bVar32 - 1] ==
         TypeInfo__MVCubeModelInstance)) && (pOStackX_20 != (Object *)0x0)) {
      if (this_04 != (List_1_System_Object_ *)0x0) {
        bVar32 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if ((bVar32 <= (pOVar31->_1).naturalAligment) &&
           ((MVCubeModelInstance__Class *)(pOVar31->_1).typeHierarchy[(ulonglong)bVar32 - 1] ==
            TypeInfo__MVCubeModelInstance)) {
          FUN_?(this_04,pOStackX_20,
                        MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                       );
          goto code_?;
        }
        FUN_?(pOStackX_20);
      }
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      goto code_?;
    }
  }
  goto code_?;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void RemovePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_RemovePrototype
               (MVWorldInventory *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_remove_runtime_prototy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).runtimePrototypes;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Failed_to_remove_runtime_prototy;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pDVar5 = (this->fields).runtimePrototypes;
    if (pDVar5 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
      this_01 = (RuntimePrototypeCubeModel *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,id,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                          );
      if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Destroy(this_01,(MethodInfo *)0x0);
        pDVar5 = (this->fields).runtimePrototypes;
        if (pDVar5 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                    );
          pMVar6 = (this->fields).OnWorldInventoryChange;
          if (pMVar6 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
            (*(pMVar6->fields)._._.invoke_impl)
                      ((pMVar6->fields)._._.method_code,this,(pMVar6->fields)._._.method);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ReplaceWithPendingRuntimePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_ReplaceWithPendingRuntimePrototype
               (MVWorldInventory *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Add_int__PendingPrototypeData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_02 != (MVWorldObjectClientManager *)0x0) &&
     (this_03 = (MVCubeModelBase *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_02,woId,(MethodInfo *)0x0), this_03 != (MVCubeModelBase *)0x0)) {
    bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((this_03->klass->_1).naturalAligment < bVar1) ||
       ((MVCubeModelInstance__Class *)(this_03->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      FUN_?(this_03);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pRVar3 = (this_03->fields).prototypeCubeModel;
    if (pRVar3 != (RuntimePrototypeCubeModel *)0x0) {
      key = (pRVar3->fields).prototypeId;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (this->fields).runtimePrototypes;
      if (((this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) &&
          (pRVar4 = (RuntimePrototypeCubeModel *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                               ), pRVar4 != (RuntimePrototypeCubeModel *)0x0)) &&
         (pRVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                              (pRVar4,1,(MethodInfo *)0x0),
         pRVar4 != (RuntimePrototypeCubeModel *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ILogger);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__)
          ;
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_prototypeId_is__1_which_means_th);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_pendingDeltaCubes_Count_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (pRVar4->fields).prototypeState = 1;
        (pRVar4->fields).prototypeId = -1;
        (pRVar4->fields).PendingScaleUpdate = (pRVar3->fields).PendingScaleUpdate;
        (pRVar3->fields).PendingScaleUpdate.hasValue = 0;
        *(undefined3 *)&(pRVar3->fields).PendingScaleUpdate.field_0x1 = 0;
        (pRVar3->fields).PendingScaleUpdate.value = 0.0;
        pDVar5 = (pRVar3->fields).deltaCubes;
        if (pDVar5 != (DeltaCubes *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Clear__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar6 = (pDVar5->fields).cubeChange;
          if (pQVar6 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_
                         *)0x0) {
            if ((pQVar6->fields)._size != 0) {
              (pQVar6->fields)._size = 0;
            }
            piVar7 = &(pQVar6->fields)._version;
            *piVar7 = *piVar7 + 1;
            (pQVar6->fields)._head = 0;
            (pQVar6->fields)._tail = 0;
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
                      (pRVar3,woId,(MethodInfo *)0x0);
            MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                      (this_03,pRVar4,(MethodInfo *)0x0);
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                      (pRVar4,this_03,(MethodInfo *)0x0);
            pRVar3 = (this_03->fields).prototypeCubeModel;
            if (pRVar3 != (RuntimePrototypeCubeModel *)0x0) {
              uVar8 = (pRVar3->fields).prototypeId;
              if (iRam_? != 0) {
                uVar9 = (uint)((ulonglong)&pRStack_10 >> 0xc);
                puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar12 = *puVar11;
                  LOCK();
                  uVar13 = *puVar11;
                  if (uVar12 == uVar13) {
                    *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar12 != uVar13);
              }
              this_01 = (this->fields).pendingRuntimePrototypes;
              pRStack_10 = pRVar4;
              if (this_01 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
                PStack_14._0_8_ = ZEXT48(uVar8);
                PStack_14.pendingRuntimePrototype = pRVar4;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::
                Dictionary_2_System_Int32_PendingPrototypeData__TryInsert
                          (this_01,woId,&PStack_14,CONCAT31((int3)((uint)in_R9D >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Add_int__PendingPrototypeData_
                           ->klass->rgctx_data[0x22].method);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RequestWoMakeUniquePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_RequestWoMakeUniquePrototype
               (MVWorldInventory *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_already_pending_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_02,woId,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pMVar2 = pMVar1->klass;
      bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar2->_1).naturalAligment < bVar3) ||
         ((MVCubeModelInstance__Class *)(pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        FUN_?(pMVar1,TypeInfo__MVCubeModelInstance);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pMVar5 = pMVar1[1].klass;
      if ((pMVar5 != (MVWorldObjectClient__Class *)0x0) &&
         (this_00 = (this->fields).runtimePrototypes,
         this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)) {
        iVar6._0_2_ = (pMVar5->_0).byval_arg.attrs;
        iVar6._2_1_ = (pMVar5->_0).byval_arg.type;
        iVar6._3_1_ = (pMVar5->_0).byval_arg.field_0xb;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar6,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                           );
        if (pOVar7 != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pOVar7[6].monitor != (MonitorData *)0x0) {
            if (*(int *)(pOVar7[6].monitor + 0x20) == 1) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              pSVar8 = StringLiteral_The_CubeModel_is_already_unique;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Debug,0);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__ILogger);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Debug);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              pIVar9 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
              if (pIVar9 != (ILogger_1 *)0x0) {
                FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar9,0,pSVar8);
                return;
              }
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_01 = (this->fields).pendingRuntimePrototypes;
            if (this_01 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,PendingPrototypeData]::
                      Dictionary_2_System_Int32_PendingPrototypeData__FindEntry
                                (this_01,woId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                                 ->klass->rgctx_data[0x21].method);
              if (-1 < iVar6) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pSVar8 = StringLiteral_already_pending_;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Debug,0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__UnityEngine__ILogger);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Debug);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pIVar9 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
                if (pIVar9 != (ILogger_1 *)0x0) {
                  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar9,3,pSVar8);
                  return;
                }
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              MVWorldInventory_ReplaceWithPendingRuntimePrototype(this,woId,(MethodInfo *)0x0);
              pMVar10 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              if (pMVar10 != (MVNetworkGame_OperationRequests *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                this_03 = (Dictionary_2_System_Byte_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object___ctor
                          (this_03,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                aiStackX_10[0] = woId;
                pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_10);
                if (this_03 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                  method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                              ->klass->rgctx_data[0x22].method;
                  uVar11 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x17);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                            (this_03,0x17,pOVar7,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar2 >> 8),2),
                             method_00);
                  pPVar12 = (pMVar10->fields).peer;
                  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c ==
                      0) {
                    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                  }
                  if (pPVar12 != (PhotonPeer *)0x0) {
                    (*(pPVar12->klass->vtable).SendOperation.methodPtr)
                              (pPVar12,CONCAT71((int7)((ulonglong)uVar11 >> 8),0x17),this_03,
                               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                               SendReliable,(pPVar12->klass->vtable).SendOperation.method);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnpendRuntimePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_UnpendRuntimePrototype
               (MVWorldInventory *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_unpend_non_existing_cu);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_unpend_runtime_prototy);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_unpend_but_prev_protot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).pendingRuntimePrototypes;
  if (pDVar1 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__FindEntry
                    (pDVar1,woId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                     ->klass->rgctx_data[0x21].method);
  if (iVar2 < 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Trying_to_unpend_runtime_prototy,(MethodInfo *)0x0);
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_03 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_02,woId,(MethodInfo *)0x0);
    if (this_03 == (MVCubeModelBase *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Trying_to_unpend_non_existing_cu,(MethodInfo *)0x0);
    }
    else {
      bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((this_03->klass->_1).naturalAligment < bVar3) ||
         ((MVCubeModelInstance__Class *)(this_03->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        FUN_?(this_03);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pDVar1 = (this->fields).pendingRuntimePrototypes;
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).runtimePrototypes;
      if (pDVar1 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0)
      goto code_?;
      piVar5 = (int32_t *)FUN_?(auStack_6,pDVar1,woId);
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,*piVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Trying_to_unpend_but_prev_protot,(MethodInfo *)0x0);
      }
      else {
        pDVar1 = (this->fields).pendingRuntimePrototypes;
        this_01 = (this->fields).runtimePrototypes;
        if (pDVar1 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0)
        goto code_?;
        piVar5 = (int32_t *)FUN_?(auStack_6,pDVar1,woId);
        if (this_01 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
        goto code_?;
        pRVar7 = (RuntimePrototypeCubeModel *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,*piVar5,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                           );
        MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel(this_03,pRVar7,(MethodInfo *)0x0);
        pRVar7 = (this_03->fields).prototypeCubeModel;
        if (pRVar7 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                  (pRVar7,this_03,(MethodInfo *)0x0);
      }
    }
    pDVar1 = (this->fields).pendingRuntimePrototypes;
    if (pDVar1 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,PendingPrototypeData]::
    Dictionary_2_System_Int32_PendingPrototypeData__Remove
              (pDVar1,woId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
              );
  }
  return;
}


/* MVWorldInventory() */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory__ctor
               (MVWorldInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).runtimePrototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)this_00
  ;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pDVar6 = (Dictionary_2_System_Int32_PendingPrototypeData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>
                        );
  pEVar7 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
           EqualityComparer_1_System_Int32__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar7 != (EqualityComparer_1_System_Int32_ *)0x0) &&
     (bVar1 = iRam_? != 0,
     (pDVar6->fields)._comparer = (IEqualityComparer_1_System_Int32_ *)0x0, bVar1)) {
    uVar2 = (uint)((ulonglong)&(pDVar6->fields)._comparer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = iRam_? != 0;
  (this->fields).pendingRuntimePrototypes = pDVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).pendingRuntimePrototypes >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (List_1_RuntimePrototypeCubeModel_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).dirtyRPCM = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).dirtyRPCM >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

