
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
      && (fVar1 = (this->fields).energyStorage, 0.0 < fVar1)) &&
     (fVar1 = fVar1 - (this->fields).consumption, (this->fields).energyStorage = fVar1, fVar1 < 0.0)
     ) {
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
  if (this_00 !=
      (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_ *)0x0
     ) {
    value.vehicleEnergyRefill.prediction = vehicleEnergyRefill.prediction;
    value.vehicleEnergyRefill._5_3_ = vehicleEnergyRefill._5_3_;
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoRefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
     VehicleEnergyContainer_DoRefillEnergy
               (VehicleEnergyContainer *this,VehicleEnergyRefill vehicleEnergyRefill,
               MethodInfo *method)

{
  fVar1 = (this->fields).originalEnergyStorage;
  fVar2 = fVar1 * vehicleEnergyRefill.amount + (this->fields).energyStorage;
  (this->fields).energyStorage = fVar2;
  if (fVar1 < fVar2) {
    (this->fields).energyStorage = fVar1;
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
          (this->fields).originalEnergyStorage * vehicleEnergyRefill.amount;
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
    this_00 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
               *)System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_1
                           ((IEnumerable_1_KeyValuePair_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                             *)(this->fields).predictions,
                            System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>_
                           );
    if (this_00 ==
        (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_ *)0x0
       ) {
      func_?();
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
             Interpreter::InstructionList+DebugView+InstructionView]::
             List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__GetEnumerator
                       (&LStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__GetEnumerator__
                       );
    uStack_10 = 0;
    method_00 = (MethodInfo *)(pLVar8->_current)._stackDepth;
    iVar11 = (pLVar8->_current)._continuationsDepth;
    pSVar12 = (pLVar8->_current)._name;
    pIVar13 = (pLVar8->_current)._instruction;
    uStack_1 = 1;
    pSVar14 = (String *)(pLVar8->_current)._index;
    pOStack_15 = (Object *)&stack0xffffffa0;
    while( true ) {
      bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[TranslateSoundData]::
              List_1_T_Enumerator_TranslateSoundData__MoveNext
                        ((List_1_T_Enumerator_TranslateSoundData_ *)&stack0xffffffa0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Collections::Generic::KeyValuePair<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>_>__MoveNext__
                        );
      if (bVar16 == 0) break;
      pSVar17 = (String *)0x0;
      LStack_9._current._index = (int32_t)pSVar14;
      LStack_9._current._stackDepth = (int32_t)method_00;
      LStack_9._current._continuationsDepth = iVar11;
      LStack_9._current._name = pSVar12;
      LStack_9._current._instruction = pIVar13;
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pSVar14 = pSVar17;
      if (_UNK_? < fVar18 - (float)LStack_9._current._instruction) {
        method_00 = (MethodInfo *)0x0;
        vehicleEnergyRefill._4_4_ = LStack_9._current._continuationsDepth;
        vehicleEnergyRefill.spawnerId = LStack_9._current._stackDepth;
        vehicleEnergyRefill.amount = (float)LStack_9._current._name;
        pSVar14 = LStack_9._current._name;
        VehicleEnergyContainer_DoRollback
                  (this,LStack_9._current._index,vehicleEnergyRefill,(MethodInfo *)0x0);
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
  uVar1 = vehicleEnergyRefill._4_4_;
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
  auStack_2 = (undefined1  [4])0x0;
  pMStack_3 = (Math__Class *)0x0;
  puStack_4 = (undefined *)0x0;
  pvStack_5 = (void *)0x0;
  pDVar6 = (this->fields).predictions;
  if (vehicleEnergyRefill.prediction == 0) {
    if (pDVar6 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                   *)0x0) {
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction]::
              Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__TryGetValue
                        (pDVar6,vehicleEnergyRefill.spawnerId,
                         (VehicleEnergyRefillPrediction *)auStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                        );
      if (bVar7 == 0) {
        return;
      }
      ppMStack_8 = (MethodInfo **)auStack_2;
      pMStack_9 = pMStack_3;
      fStack_10 = (float)puStack_4;
      if (auStack_2 == (undefined1  [4])vehicleEnergyRefill.spawnerId) {
        fStack_11 = (float)puStack_4;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          pMStack_3 = TypeInfo__System__Math;
          func_?();
        }
        if ((float)((uint)(fStack_11 - vehicleEnergyRefill.amount) & _UNK_?) < _UNK_?)
        {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                           );
            cRam_? = '\x01';
          }
          pDVar6 = (this->fields).predictions;
          if (pDVar6 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                      (pDVar6,vehicleEnergyRefill.spawnerId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                      );
            return;
          }
          goto code_?;
        }
      }
      fVar12 = (this->fields).energyStorage - (this->fields).originalEnergyStorage * fStack_10;
      (this->fields).energyStorage = fVar12;
      if (0.0 <= fVar12) {
        return;
      }
      (this->fields).energyStorage = 0.0;
      return;
    }
  }
  else if (pDVar6 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                      *)0x0) {
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__ContainsKey
                      (pDVar6,vehicleEnergyRefill.spawnerId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__ContainsKey_int_
                      );
    if (bVar7 == 0) {
      if (cRam_? == '\0') {
        auStack_2 = (undefined1  [4])
                     &
                     MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
        ;
        func_?();
        cRam_? = '\x01';
      }
      fStack_10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pDVar6 = (this->fields).predictions;
      pvStack_13 = (void *)vehicleEnergyRefill.spawnerId;
      ppMStack_8 = (MethodInfo **)uVar1;
      pMStack_9 = (Math__Class *)vehicleEnergyRefill.amount;
      fStack_11 = fStack_10;
      if (pDVar6 == (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                     *)0x0) goto code_?;
      value.timestamp = fStack_10;
      value.vehicleEnergyRefill = vehicleEnergyRefill;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
      VehicleEnergy::VehicleEnergyRefillPrediction]::
      Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Add
                (pDVar6,vehicleEnergyRefill.spawnerId,value,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Add_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction_
                );
      fVar12 = (this->fields).originalEnergyStorage;
      fVar14 = fVar12 * vehicleEnergyRefill.amount + (this->fields).energyStorage;
      (this->fields).energyStorage = fVar14;
      if (fVar12 < fVar14) {
        (this->fields).energyStorage = fVar12;
      }
      pAVar15 = (this->fields).OnRefill;
      if (pAVar15 != (Action *)0x0) {
        pvStack_13 = (pAVar15->fields)._._.method;
        pvStack_5 = (pAVar15->fields)._._.method_code;
        (*(pAVar15->fields)._._.invoke_impl)();
        return;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
      fVar1 = (this->fields).energyStorage - (this->fields).originalEnergyStorage * fVar1;
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
          (this->fields).originalEnergyStorage * existingRefill.amount;
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
  ppDVar1 = &(this->fields).predictions;
  *ppDVar1 = (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
              *)this_00;
  func_?(ppDVar1,this_00);
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

