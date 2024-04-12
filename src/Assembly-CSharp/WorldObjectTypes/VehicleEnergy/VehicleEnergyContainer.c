
/* Void ConfirmPrediction(VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_ConfirmPrediction
               (VehicleEnergyContainer *this,VehicleEnergyRefill vehicleEnergyRefill,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).predictions;
  if (this_00 !=
      (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
    VehicleEnergy::VehicleEnergyRefillPrediction]::
    Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
              (this_00,vehicleEnergyRefill.spawnerId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
               (VehicleEnergyContainer *this,VehicleEnergyRefill vehicleEnergyRefill,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
                   );
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields).predictions;
  uStack_2 = vehicleEnergyRefill._4_4_;
  if (this_00 !=
      (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_ *)0x0
     ) {
    value.vehicleEnergyRefill._4_4_ = uStack_2;
    value.vehicleEnergyRefill.spawnerId =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
    ;
    value.vehicleEnergyRefill.amount = vehicleEnergyRefill.amount;
    value.timestamp = fVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
    VehicleEnergy::VehicleEnergyRefillPrediction]::
    Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Add
              (this_00,vehicleEnergyRefill.spawnerId,value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DoRefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_DoRefillEnergy
               (VehicleEnergyContainer *this,VehicleEnergyRefill vehicleEnergyRefill,
               MethodInfo *method)

{
  fVar1 = vehicleEnergyRefill.amount * (this->fields).originalEnergyStorage +
          (this->fields).energyStorage;
  pfVar2 = &(this->fields).originalEnergyStorage;
  (this->fields).energyStorage = fVar1;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
    (this->fields).energyStorage = (this->fields).originalEnergyStorage;
  }
  pAVar3 = (this->fields).OnRefill;
  if (pAVar3 != (Action *)0x0) {
    (*(pAVar3->fields)._._.invoke_impl)
              ((pAVar3->fields)._._.method_code,(pAVar3->fields)._._.method);
  }
  return;
}


/* Void DoRollback(Int32, VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_DoRollback
               (VehicleEnergyContainer *this,int32_t key,VehicleEnergyRefill vehicleEnergyRefill,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).energyStorage -
          vehicleEnergyRefill.amount * (this->fields).originalEnergyStorage;
  (this->fields).energyStorage = fVar1;
  if (fVar1 < 0.0) {
    (this->fields).energyStorage = 0.0;
  }
  this_00 = (this->fields).predictions;
  if (this_00 !=
      (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
    VehicleEnergy::VehicleEnergyRefillPrediction]::
    Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
              (this_00,key,
               MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
              );
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_FixedUpdate(VehicleEnergyContainer *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iVar6 = (this->fields).counter + 1;
  (this->fields).counter = iVar6;
  if (0x32 < iVar6) {
    (this->fields).counter = 0;
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_1
                           ((IEnumerable_1_KeyValuePair_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                             *)(this->fields).predictions,
                            System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_
                           );
    if (this_00 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__GetEnumerator__
                       );
    uStack_10 = 0;
    method_00 = (MethodInfo *)(pLVar8->_current).name;
    fVar11 = (pLVar8->_current).actualWidth;
    fVar12 = (pLVar8->_current).width;
    fVar13 = *(float *)&(pLVar8->_current).visible;
    uStack_1 = 1;
    fVar14 = (float)(pLVar8->_current).index;
    pOStack_15 = (Object *)&stack0xffffffa0;
    while( true ) {
      bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[TranslateSoundData]::
              List_1_T_Enumerator_TranslateSoundData__MoveNext
                        ((List_1_T_Enumerator_TranslateSoundData_ *)&stack0xffffffa0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__MoveNext__
                        );
      if (bVar16 == 0) break;
      fVar17 = 0.0;
      auStack_9._12_4_ = fVar14;
      auStack_9._16_4_ = method_00;
      auStack_9._20_4_ = fVar11;
      auStack_9._24_4_ = fVar12;
      auStack_9._28_4_ = fVar13;
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      fVar14 = fVar17;
      if (_UNK_? < fVar18 - (float)auStack_9._28_4_) {
        method_00 = (MethodInfo *)0x0;
        vehicleEnergyRefill._4_4_ = auStack_9._20_4_;
        vehicleEnergyRefill.spawnerId = auStack_9._16_4_;
        vehicleEnergyRefill.amount = (float)auStack_9._24_4_;
        fVar14 = (float)auStack_9._24_4_;
        VehicleEnergyContainer_DoRollback
                  (this,auStack_9._12_4_,vehicleEnergyRefill,(MethodInfo *)0x0);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffa0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__Dispose__
               ,method_00);
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void Init(VehicleEnergyContainerConfig) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_Init
               (VehicleEnergyContainer *this,VehicleEnergyContainerConfig config,MethodInfo *method)

{
  (this->fields)._UsingEnergy_k__BackingField = config.usingEnergy;
  fVar1 = (float)config.storage * _UNK_?;
  (this->fields).originalEnergyStorage = fVar1;
  (this->fields).energyStorage = fVar1;
  (this->fields).consumption = (float)config.consumption;
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_RefillEnergy
               (VehicleEnergyContainer *this,VehicleEnergyRefill vehicleEnergyRefill,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                   );
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  auStack_1 = (undefined1  [4])0x0;
  pMStack_2 = (Math__Class *)0x0;
  puStack_3 = (undefined *)0x0;
  pvStack_4 = (void *)0x0;
  pDVar5 = (this->fields).predictions;
  if (vehicleEnergyRefill.prediction == 0) {
    if (pDVar5 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                   *)0x0) {
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction]::
              Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__TryGetValue
                        (pDVar5,vehicleEnergyRefill.spawnerId,
                         (VehicleEnergyRefillPrediction *)auStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                        );
      if (bVar6 == 0) {
        return;
      }
      uStack_7 = CONCAT44(pMStack_2,auStack_1);
      fStack_8 = (float)puStack_3;
      if (auStack_1 == (undefined1  [4])vehicleEnergyRefill.spawnerId) {
        fStack_9 = (float)puStack_3;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          pMStack_2 = TypeInfo__System__Math;
          func_?();
        }
        if ((float)((uint)(fStack_9 - vehicleEnergyRefill.amount) & _UNK_?) < _UNK_?)
        {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                           );
            cRam_? = '\x01';
          }
          pDVar5 = (this->fields).predictions;
          if (pDVar5 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                      (pDVar5,vehicleEnergyRefill.spawnerId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                      );
            return;
          }
          goto code_?;
        }
      }
      fVar10 = (this->fields).energyStorage - fStack_8 * (this->fields).originalEnergyStorage;
      (this->fields).energyStorage = fVar10;
      if (0.0 <= fVar10) {
        return;
      }
      (this->fields).energyStorage = 0.0;
      return;
    }
  }
  else if (pDVar5 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                      *)0x0) {
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__ContainsKey
                      (pDVar5,vehicleEnergyRefill.spawnerId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__ContainsKey_int_
                      );
    if (bVar6 == 0) {
      if (cRam_? == '\0') {
        auStack_1 = (undefined1  [4])
                     &
                     MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
        ;
        func_?();
        cRam_? = '\x01';
      }
      fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pDVar5 = (this->fields).predictions;
      pvStack_11 = (void *)vehicleEnergyRefill.spawnerId;
      uStack_7 = vehicleEnergyRefill._4_8_;
      if (pDVar5 == (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                     *)0x0) goto code_?;
      value.timestamp = fStack_8;
      value.vehicleEnergyRefill = vehicleEnergyRefill;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
      VehicleEnergy::VehicleEnergyRefillPrediction]::
      Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Add
                (pDVar5,vehicleEnergyRefill.spawnerId,value,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
                );
      fVar10 = vehicleEnergyRefill.amount * (this->fields).originalEnergyStorage +
              (this->fields).energyStorage;
      pfVar12 = &(this->fields).originalEnergyStorage;
      (this->fields).energyStorage = fVar10;
      if (*pfVar12 <= fVar10 && fVar10 != *pfVar12) {
        (this->fields).energyStorage = (this->fields).originalEnergyStorage;
      }
      pAVar13 = (this->fields).OnRefill;
      if (pAVar13 != (Action *)0x0) {
        pvStack_11 = (pAVar13->fields)._._.method;
        pvStack_4 = (pAVar13->fields)._._.method_code;
        (*(pAVar13->fields)._._.invoke_impl)();
        return;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void RollbackPrediction(Int32) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_RollbackPrediction
               (VehicleEnergyContainer *this,int32_t spawnerId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                   );
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  pDVar2 = (this->fields).predictions;
  if (pDVar2 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                 *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__TryGetValue
                      (pDVar2,spawnerId,(VehicleEnergyRefillPrediction *)&stack0xffffffe0,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                      );
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      fVar1 = (this->fields).energyStorage - fVar1 * (this->fields).originalEnergyStorage;
      (this->fields).energyStorage = fVar1;
      if (fVar1 < 0.0) {
        (this->fields).energyStorage = 0.0;
      }
      pDVar2 = (this->fields).predictions;
      if (pDVar2 == (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
      VehicleEnergy::VehicleEnergyRefillPrediction]::
      Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                (pDVar2,spawnerId,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RollbackPrediction(VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_RollbackPrediction_1
               (VehicleEnergyContainer *this,VehicleEnergyRefill existingRefill,MethodInfo *method)

{
  fVar1 = (this->fields).energyStorage -
          existingRefill.amount * (this->fields).originalEnergyStorage;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Dictionary__
            );
  (this->fields).predictions =
       (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_ *)
       this_00;
  func_?(&(this->fields).predictions,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
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

