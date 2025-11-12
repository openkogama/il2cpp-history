
/* Void ConfirmPrediction(VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_ConfirmPrediction
               (VehicleEnergyContainer *this,VehicleEnergyRefill *vehicleEnergyRefill,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
  ;
  pDVar2 = (this->fields).predictions;
  if (pDVar2 == (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                 *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = vehicleEnergyRefill->spawnerId;
  if ((pDVar2->fields)._buckets != (Int32__Array *)0x0) {
    pIVar5 = (pDVar2->fields)._comparer;
    uVar6 = uVar4;
    if (pIVar5 != (IEqualityComparer_1_System_Int32_ *)0x0) {
      pvVar7 = MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
        pvVar7 = (void *)FUN_?(pvVar7);
      }
      uVar6 = FUN_?(1,pvVar7,pIVar5,uVar4);
    }
    pIVar8 = (pDVar2->fields)._buckets;
    if (pIVar8 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = (int)(uVar6 & 0x7fffffff) % (int)pIVar8->max_length;
    if ((uint)pIVar8->max_length <= uVar9) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar10 = pIVar8->vector[(int)uVar9] - 1;
    uVar11 = 0xffffffff;
    while (uVar12 = uVar10, -1 < (int)uVar12) {
      pDVar13 = (pDVar2->fields)._entries;
      if (pDVar13 == (Dictionary_2_TKey_TValue_Entry_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___Array
                     *)0x0) goto code_?;
      if ((uint)pDVar13->max_length <= uVar12) goto code_?;
      if (pDVar13->vector[(int)uVar12].hashCode == (uVar6 & 0x7fffffff)) {
        pIVar14 = pMVar1->klass->rgctx_data;
        if ((pDVar2->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0) {
          pEVar15 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
                    EqualityComparer_1_System_Int32__get_Default(pIVar14[3].method);
          if (pEVar15 == (EqualityComparer_1_System_Int32_ *)0x0) goto code_?;
          cVar16 = (*(pEVar15->klass->vtable).__unknown.methodPtr)
                             (pEVar15,(ulonglong)(uint)pDVar13->vector[(int)uVar12].key,
                              (ulonglong)uVar4,(pEVar15->klass->vtable).__unknown.method);
        }
        else {
          pvVar7 = pIVar14[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
            FUN_?(pvVar7);
          }
          cVar16 = FUN_?();
        }
        if (cVar16 != '\0') {
          if ((int)uVar11 < 0) {
            pIVar8 = (pDVar2->fields)._buckets;
            if (pIVar8 == (Int32__Array *)0x0) goto code_?;
            if ((uint)pIVar8->max_length <= uVar9) goto code_?;
            pIVar8->vector[(int)uVar9] = pDVar13->vector[(int)uVar12].next + 1;
          }
          else {
            pDVar17 = (pDVar2->fields)._entries;
            if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___Array
                           *)0x0) goto code_?;
            if ((uint)pDVar17->max_length <= uVar11) goto code_?;
            pDVar17->vector[(int)uVar11].next = pDVar13->vector[(int)uVar12].next;
          }
          pDVar13->vector[(int)uVar12].hashCode = -1;
          pDVar13->vector[(int)uVar12].next = (pDVar2->fields)._freeList;
          piVar18 = &(pDVar2->fields)._freeCount;
          *piVar18 = *piVar18 + 1;
          piVar18 = &(pDVar2->fields)._version;
          *piVar18 = *piVar18 + 1;
          (pDVar2->fields)._freeList = uVar12;
          return;
        }
      }
      uVar11 = uVar12;
      uVar10 = pDVar13->vector[(int)uVar12].next;
    }
  }
  return;
}


/* Void Consume() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_Consume(VehicleEnergyContainer *this,MethodInfo *method)

{
  if (((((this->fields)._UsingEnergy_k__BackingField != 0) && ((this->fields).consumingEnergy != 0))
      && (0.0 < (this->fields).energyStorage)) &&
     (fVar1 = (this->fields).energyStorage - (this->fields).consumption,
     (this->fields).energyStorage = fVar1, fVar1 < 0.0)) {
    (this->fields).energyStorage = 0.0;
  }
  return;
}


/* Void DoPrediction(VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_DoPrediction
               (VehicleEnergyContainer *this,VehicleEnergyRefill *vehicleEnergyRefill,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  aVStack_3[0].timestamp = (float)(*pcRam_?)();
  aVStack_3[0].vehicleEnergyRefill.spawnerId = vehicleEnergyRefill->spawnerId;
  aVStack_3[0].vehicleEnergyRefill.prediction = vehicleEnergyRefill->prediction;
  aVStack_3[0].vehicleEnergyRefill._5_3_ = *(undefined3 *)&vehicleEnergyRefill->field_0x5;
  this_00 = (this->fields).predictions;
  aVStack_3[0].vehicleEnergyRefill.amount = vehicleEnergyRefill->amount;
  if (this_00 ==
      (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_ *)0x0
     ) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
  VehicleEnergy::VehicleEnergyRefillPrediction]::
  Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__TryInsert
            (this_00,vehicleEnergyRefill->spawnerId,aVStack_3,CONCAT31((int3)((uint)in_R9D >> 8),2)
             ,MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
              ->klass->rgctx_data[0x22].method);
  return;
}


/* Void DoRefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_DoRefillEnergy
               (VehicleEnergyContainer *this,VehicleEnergyRefill *vehicleEnergyRefill,
               MethodInfo *method)

{
  fVar1 = (this->fields).originalEnergyStorage * vehicleEnergyRefill->amount +
          (this->fields).energyStorage;
  pfVar2 = &(this->fields).originalEnergyStorage;
  (this->fields).energyStorage = fVar1;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
    (this->fields).energyStorage = (this->fields).originalEnergyStorage;
  }
  pAVar3 = (this->fields).OnRefill;
  if (pAVar3 != (Action *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar3->fields)._._.invoke_impl)
              ((pAVar3->fields)._._.method_code,(pAVar3->fields)._._.method);
    return;
  }
  return;
}


/* Void DoRollback(Int32, VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_DoRollback
               (VehicleEnergyContainer *this,int32_t key,VehicleEnergyRefill *vehicleEnergyRefill,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).energyStorage -
           vehicleEnergyRefill->amount * (this->fields).originalEnergyStorage;
  uVar2 = 0;
  (this->fields).energyStorage = fVar1;
  if (fVar1 < 0.0) {
    (this->fields).energyStorage = 0.0;
  }
  pMVar3 = 
  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
  ;
  pDVar4 = (this->fields).predictions;
  if (pDVar4 == (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                 *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pDVar4->fields)._buckets != (Int32__Array *)0x0) {
    pIVar6 = (pDVar4->fields)._comparer;
    uVar7 = key;
    if (pIVar6 != (IEqualityComparer_1_System_Int32_ *)0x0) {
      pvVar8 = MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
        pvVar8 = (void *)FUN_?(pvVar8);
      }
      uVar7 = FUN_?(1,pvVar8,pIVar6,key);
      uVar2 = extraout_XMM0_Da;
    }
    pIVar9 = (pDVar4->fields)._buckets;
    if (pIVar9 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = (int)(uVar7 & 0x7fffffff) % (int)pIVar9->max_length;
    if ((uint)pIVar9->max_length <= uVar10) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = pIVar9->vector[(int)uVar10] - 1;
    uVar12 = 0xffffffff;
    while (uVar13 = uVar11, -1 < (int)uVar13) {
      pDVar14 = (pDVar4->fields)._entries;
      if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___Array
                     *)0x0) goto code_?;
      if ((uint)pDVar14->max_length <= uVar13) goto code_?;
      if (pDVar14->vector[(int)uVar13].hashCode == (uVar7 & 0x7fffffff)) {
        pIVar6 = (pDVar4->fields)._comparer;
        pIVar15 = pMVar3->klass->rgctx_data;
        if (pIVar6 == (IEqualityComparer_1_System_Int32_ *)0x0) {
          pEVar16 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
                    EqualityComparer_1_System_Int32__get_Default(pIVar15[3].method);
          if (pEVar16 == (EqualityComparer_1_System_Int32_ *)0x0) goto code_?;
          cVar17 = (*(pEVar16->klass->vtable).__unknown.methodPtr)
                             (pEVar16,(ulonglong)(uint)pDVar14->vector[(int)uVar13].key,
                              (ulonglong)(uint)key,(pEVar16->klass->vtable).__unknown.method);
          uVar2 = extraout_XMM0_Da_02;
        }
        else {
          pvVar8 = pIVar15[1].rgctxDataDummy;
          iVar18 = pDVar14->vector[(int)uVar13].key;
          if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
            pvVar8 = (void *)FUN_?(pvVar8);
            uVar2 = extraout_XMM0_Da_00;
          }
          cVar17 = FUN_?(uVar2,pvVar8,pIVar6,iVar18,key);
          uVar2 = extraout_XMM0_Da_01;
        }
        if (cVar17 != '\0') {
          if ((int)uVar12 < 0) {
            pIVar9 = (pDVar4->fields)._buckets;
            if (pIVar9 == (Int32__Array *)0x0) goto code_?;
            if ((uint)pIVar9->max_length <= uVar10) goto code_?;
            pIVar9->vector[(int)uVar10] = pDVar14->vector[(int)uVar13].next + 1;
          }
          else {
            pDVar19 = (pDVar4->fields)._entries;
            if (pDVar19 == (Dictionary_2_TKey_TValue_Entry_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___Array
                           *)0x0) goto code_?;
            if ((uint)pDVar19->max_length <= uVar12) goto code_?;
            pDVar19->vector[(int)uVar12].next = pDVar14->vector[(int)uVar13].next;
          }
          pDVar14->vector[(int)uVar13].hashCode = -1;
          pDVar14->vector[(int)uVar13].next = (pDVar4->fields)._freeList;
          piVar20 = &(pDVar4->fields)._freeCount;
          *piVar20 = *piVar20 + 1;
          piVar20 = &(pDVar4->fields)._version;
          *piVar20 = *piVar20 + 1;
          (pDVar4->fields)._freeList = uVar13;
          return;
        }
      }
      uVar12 = uVar13;
      uVar11 = pDVar14->vector[(int)uVar13].next;
    }
  }
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_FixedUpdate(VehicleEnergyContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).counter;
  (this->fields).counter = iVar1 + 1;
  if (0x32 < iVar1 + 1) {
    (this->fields).counter = 0;
    pMVar2 = 
    System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_
    ;
    collection = (this->fields).predictions;
    if ((
        System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_
                   );
    }
    if (collection ==
        (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_ *)
        0x0) {
      s = (String *)func_?(&StringLiteral_source);
      pEVar3 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
      FUN_?(pEVar3,pMVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pvVar5 = (pMVar2->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
      pvVar5 = (void *)FUN_?(pvVar5);
    }
    this_00 = (List_1_KeyValuePair_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
               *)FUN_?(pvVar5);
    mscorlib.dll::System::Collections::Generic::List`1[KeyValuePair`2[System::Int32,WorldObjectTypes
    ::VehicleEnergy::VehicleEnergyRefillPrediction]]::
    List_1_KeyValuePair_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___ctor_1
              (this_00,(IEnumerable_1_KeyValuePair_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                        *)collection,(pMVar2->field7_0x38).rgctx_data[2].method);
    if (this_00 ==
        (List_1_KeyValuePair_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
         *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uStack_6 = 0;
    uStack_7 = 0;
    iStack_8 = (int32_t)this_00;
    iStack_9 = (int32_t)((ulonglong)this_00 >> 0x20);
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&iStack_8 >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar14 = uVar12 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    fVar15 = _UNK_?;
    uStack_16 = 0;
    fStack_17 = (float)(this_00->fields)._version;
    uStack_18 = 0;
    lStack_19 = (ulonglong)(uint)fStack_17 << 0x20;
    uStack_20 = 0;
    uStack_21 = 0;
    uStack_22 = 0;
    uStack_23 = 0;
    ppLStack_24 = &pLStack_25;
    pLStack_25 = this_00;
    while (cVar26 = FUN_?(&pLStack_25,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__MoveNext__
                                ), cVar26 != '\0') {
      key = (int32_t)uStack_20;
      fVar27 = uStack_21._4_4_;
      iStack_8 = (int32_t)uStack_20;
      iStack_9 = uStack_20._4_4_;
      uStack_16 = (undefined4)uStack_21;
      fStack_17 = uStack_21._4_4_;
      fVar28 = (float)uStack_22;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar29 = func_?(&UNK_?);
        FUN_?(uVar29,0);
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar30 = (float)(*pcRam_?)();
      if (fVar15 < fVar30 - fVar28) {
        VStack_31._4_4_ = uStack_16;
        VStack_31.spawnerId = iStack_9;
        VStack_31.amount = fVar27;
        VehicleEnergyContainer_DoRollback(this,key,&VStack_31,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Init(VehicleEnergyContainerConfig) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_Init
               (VehicleEnergyContainer *this,VehicleEnergyContainerConfig *config,MethodInfo *method
               )

{
  iVar1 = config->storage;
  (this->fields)._UsingEnergy_k__BackingField = config->usingEnergy;
  fVar2 = (float)iVar1 * _UNK_?;
  (this->fields).originalEnergyStorage = fVar2;
  (this->fields).energyStorage = fVar2;
  (this->fields).consumption = (float)config->consumption;
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_RefillEnergy
               (VehicleEnergyContainer *this,VehicleEnergyRefill *vehicleEnergyRefill,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).predictions;
  if (vehicleEnergyRefill->prediction == 0) {
    if (pDVar1 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                   *)0x0) {
      uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction]::
              Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__FindEntry
                        (pDVar1,vehicleEnergyRefill->spawnerId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar2 < 0) {
        return;
      }
      pDVar3 = (pDVar1->fields)._entries;
      if (pDVar3 != (Dictionary_2_TKey_TValue_Entry_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___Array
                     *)0x0) {
        if ((uint)pDVar3->max_length <= uVar2) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pVVar5 = &pDVar3->vector[(int)uVar2].value;
        fVar6 = (pVVar5->vehicleEnergyRefill).amount;
        if ((pVVar5->vehicleEnergyRefill).spawnerId == vehicleEnergyRefill->spawnerId) {
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((float)((uint)(fVar6 - vehicleEnergyRefill->amount) & _UNK_?) <
              _UNK_?) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar1 = (this->fields).predictions;
            key = vehicleEnergyRefill->spawnerId;
            if (pDVar1 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                           *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction]::
              Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                        (pDVar1,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                        );
              return;
            }
            goto code_?;
          }
        }
        fVar6 = (this->fields).energyStorage - fVar6 * (this->fields).originalEnergyStorage;
        (this->fields).energyStorage = fVar6;
        if (0.0 <= fVar6) {
          return;
        }
        (this->fields).energyStorage = 0.0;
        return;
      }
    }
  }
  else if (pDVar1 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                      *)0x0) {
    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__FindEntry
                      (pDVar1,vehicleEnergyRefill->spawnerId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar7 < 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      aVStack_9[0].timestamp = (float)(*pcRam_?)();
      aVStack_9[0].vehicleEnergyRefill.spawnerId = vehicleEnergyRefill->spawnerId;
      aVStack_9[0].vehicleEnergyRefill.prediction = vehicleEnergyRefill->prediction;
      aVStack_9[0].vehicleEnergyRefill._5_3_ = *(undefined3 *)&vehicleEnergyRefill->field_0x5;
      pDVar1 = (this->fields).predictions;
      aVStack_9[0].vehicleEnergyRefill.amount = vehicleEnergyRefill->amount;
      if (pDVar1 == (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
      VehicleEnergy::VehicleEnergyRefillPrediction]::
      Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__TryInsert
                (pDVar1,aVStack_9[0].vehicleEnergyRefill.spawnerId,aVStack_9,
                 CONCAT31((int3)((uint)in_R9D >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
                 ->klass->rgctx_data[0x22].method);
      fVar6 = vehicleEnergyRefill->amount * (this->fields).originalEnergyStorage +
               (this->fields).energyStorage;
      pfVar10 = &(this->fields).originalEnergyStorage;
      (this->fields).energyStorage = fVar6;
      if (*pfVar10 <= fVar6 && fVar6 != *pfVar10) {
        (this->fields).energyStorage = (this->fields).originalEnergyStorage;
      }
      pAVar11 = (this->fields).OnRefill;
      if (pAVar11 != (Action *)0x0) {
        (*(pAVar11->fields)._._.invoke_impl)
                  ((pAVar11->fields)._._.method_code,(pAVar11->fields)._._.method);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RollbackPrediction(Int32) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_RollbackPrediction
               (VehicleEnergyContainer *this,int32_t spawnerId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).predictions;
  if (pDVar1 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                 *)0x0) {
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__FindEntry
                      (pDVar1,spawnerId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                       ->klass->rgctx_data[0x21].method);
    if ((int)uVar2 < 0) {
      return;
    }
    pDVar3 = (pDVar1->fields)._entries;
    if (pDVar3 != (Dictionary_2_TKey_TValue_Entry_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___Array
                   *)0x0) {
      if ((uint)pDVar3->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar5 = pDVar3->vector[(int)uVar2].value.vehicleEnergyRefill.amount;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar5 = (this->fields).energyStorage - fVar5 * (this->fields).originalEnergyStorage;
      (this->fields).energyStorage = fVar5;
      if (fVar5 < 0.0) {
        (this->fields).energyStorage = 0.0;
      }
      pDVar1 = (this->fields).predictions;
      if (pDVar1 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
        VehicleEnergy::VehicleEnergyRefillPrediction]::
        Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                  (pDVar1,spawnerId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RollbackPrediction(VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_RollbackPrediction_1
               (VehicleEnergyContainer *this,VehicleEnergyRefill *existingRefill,MethodInfo *method)

{
  fVar1 = (this->fields).energyStorage -
          (this->fields).originalEnergyStorage * existingRefill->amount;
  (this->fields).energyStorage = fVar1;
  if (fVar1 < 0.0) {
    (this->fields).energyStorage = 0.0;
  }
  return;
}


/* VehicleEnergyContainer() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer__ctor(VehicleEnergyContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>
                           );
  pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
           EqualityComparer_1_System_Int32__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar2 != (EqualityComparer_1_System_Int32_ *)0x0) &&
     (bVar3 = iRam_? != 0,
     (pDVar1->fields)._comparer = (IEqualityComparer_1_System_Int32_ *)0x0, bVar3)) {
    uVar4 = (uint)((ulonglong)&(pDVar1->fields)._comparer >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  bVar3 = iRam_? != 0;
  (this->fields).predictions = pDVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).predictions >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
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
  return;
}


/* Single get_EnergyStatus() */

float Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
      VehicleEnergyContainer_get_EnergyStatus(VehicleEnergyContainer *this,MethodInfo *method)

{
  return (this->fields).energyStorage / (this->fields).originalEnergyStorage;
}


/* Boolean get_IsConsumingEnergy() */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_get_IsConsumingEnergy(VehicleEnergyContainer *this,MethodInfo *method)

{
  if ((this->fields)._UsingEnergy_k__BackingField == 0) {
    return 0;
  }
  return (this->fields).consumingEnergy;
}


/* Boolean get_OutOfEnergy() */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_get_OutOfEnergy(VehicleEnergyContainer *this,MethodInfo *method)

{
  if ((this->fields)._UsingEnergy_k__BackingField == 0) {
    return 0;
  }
  return (this->fields).energyStorage <= 0.0;
}

