
/* MVVehicleEnergy+VehicleEnergyConfiguration CreateDefaultVehicleEnergyConfig() */

MVVehicleEnergy_VehicleEnergyConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
MVVehicleEnergy_CreateDefaultVehicleEnergyConfig
          (MVVehicleEnergy_VehicleEnergyConfiguration *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Vehicle_Energy);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->name = (String *)0x0;
  __return_storage_ptr__->spawnOption = 0;
  __return_storage_ptr__->spawnTime = 0;
  __return_storage_ptr__->energyAmount = 0;
  __return_storage_ptr__->name = StringLiteral_Vehicle_Energy;
  func_?(__return_storage_ptr__,StringLiteral_Vehicle_Energy);
  __return_storage_ptr__->spawnOption = 10;
  __return_storage_ptr__->spawnTime = 0xf;
  __return_storage_ptr__->energyAmount = 0x1e;
  return __return_storage_ptr__;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy_DeSelect
               (MVVehicleEnergy *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).RemoveSelectionBox.method)
            (this,(this->klass->vtable).RemovePreviewBox.methodPtr);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_Initialize(MVVehicleEnergy *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&StringLiteral_VehicleEnergyCubeModel);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  LayerUtil::LayerUtil_SetLayerRecursively_3
            ((this->fields)._._._.transform,StringLiteral_Default,StringLiteral_Player,
             (MethodInfo *)0x0);
  pMVar1 = MVVehicleEnergy_ReadWorldObjectData
                     ((MVVehicleEnergy_VehicleEnergyConfiguration *)&pSStack_2,this,
                      (MethodInfo *)0x0);
  iVar3 = pMVar1->spawnOption;
  iVar4 = pMVar1->spawnTime;
  iVar5 = pMVar1->energyAmount;
  pMVar6 = &(this->fields)._VehicleEnergyConfig_k__BackingField;
  pMVar6->name = pMVar1->name;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnOption = iVar3;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnTime = iVar4;
  (this->fields)._VehicleEnergyConfig_k__BackingField.energyAmount = iVar5;
  func_?(pMVar6,0);
  cubeModelBase =
       (MVCubeModelInstance *)
       MVBlueprintBase::MVBlueprintBase_GetChild
                 ((MVBlueprintBase *)this,StringLiteral_VehicleEnergyCubeModel,(MethodInfo *)0x0);
  if (cubeModelBase == (MVCubeModelInstance *)0x0) {
    func_?();
  }
  else {
    bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((bVar7 <= (cubeModelBase->klass->_1).naturalAligment) &&
       ((MVCubeModelInstance__Class *)(cubeModelBase->klass->_1).typeHierarchy[bVar7 - 1] ==
        TypeInfo__MVCubeModelInstance)) {
      pMStack_8 = (MVCubeModelInstance *)0x1;
      pMStack_9 = cubeModelBase;
      (*(code *)(cubeModelBase->klass->vtable).set_Visible.method)();
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffec,-5,-2,0,(MethodInfo *)0x0);
      pMStack_9 = (MVCubeModelInstance *)0x0;
      pMStack_8 = (MVCubeModelInstance *)((uint)pMStack_8 & 0xffff0000);
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&pMStack_9,2,6,3,(MethodInfo *)0x0);
      puVar10 = &UNK_?;
      pEVar11 = TypeInfo__EditableCubeModelWrapper;
      this_00 = (EditableCubeModelWrapper *)func_?();
      min.z = (int16_t)pEVar11;
      min._0_4_ = puVar10;
      max.z = (int16_t)pMStack_8;
      max._0_4_ = pMStack_9;
      EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                (this_00,cubeModelBase,min,max,0x14,(MethodInfo *)0x0);
      (this->fields).editableCubeModelWrapper = this_00;
      uStack12 = 0x104c;
      func_?();
      return;
    }
  }
  pMStack_8 = cubeModelBase;
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_OnDataUpdate(MVVehicleEnergy *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = MVVehicleEnergy_ReadWorldObjectData(&MStack_2,this,(MethodInfo *)0x0);
  iVar3 = pMVar1->spawnOption;
  iVar4 = pMVar1->spawnTime;
  iVar5 = pMVar1->energyAmount;
  pMVar6 = &(this->fields)._VehicleEnergyConfig_k__BackingField;
  pMVar6->name = pMVar1->name;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnOption = iVar3;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnTime = iVar4;
  (this->fields)._VehicleEnergyConfig_k__BackingField.energyAmount = iVar5;
  func_?(pMVar6,0);
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_OnEnterObject(MVVehicleEnergy *this,EditorStateMachine *e,MethodInfo *method)

{
  pMVar1 = (this->fields).vehicleEnergyObject;
  if (((pMVar1 != (MVVehicleEnergyObject *)0x0) &&
      (pVVar2 = (pMVar1->fields).vehicleEnergyVisuals, pVVar2 != (VehicleEnergyVisuals *)0x0)) &&
     (this_00 = (pVVar2->fields).rotateLocal, this_00 != (RotateLocal *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pEVar3 = (this->fields).editableCubeModelWrapper;
    if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
      bVar4 = (*(code *)(pEVar3->klass->vtable).OnEnterObject.method)(pEVar3);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_OnExitObject(MVVehicleEnergy *this,EditorStateMachine *e,MethodInfo *method)

{
  pMVar1 = (this->fields).vehicleEnergyObject;
  if (((pMVar1 != (MVVehicleEnergyObject *)0x0) &&
      (pVVar2 = (pMVar1->fields).vehicleEnergyVisuals, pVVar2 != (VehicleEnergyVisuals *)0x0)) &&
     (this_00 = (pVVar2->fields).rotateLocal, this_00 != (RotateLocal *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    pEVar3 = (this->fields).editableCubeModelWrapper;
    if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
      bVar4 = (*(code *)(pEVar3->klass->vtable).OnExitObject.method)(pEVar3);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* MVVehicleEnergy+VehicleEnergyConfiguration ReadWorldObjectData() */

MVVehicleEnergy_VehicleEnergyConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
MVVehicleEnergy_ReadWorldObjectData
          (MVVehicleEnergy_VehicleEnergyConfiguration *__return_storage_ptr__,MVVehicleEnergy *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_RespawnInterval);
    func_?(&StringLiteral_RespawnCount);
    func_?(&StringLiteral_VehicleEnergyName);
    func_?(&StringLiteral_VehicleEnergyAmount);
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pSStack_2 = (String *)0x0;
  pIStack_3 = (Int32__Class *)0x0;
  __return_storage_ptr__->name = (String *)0x0;
  __return_storage_ptr__->spawnOption = 0;
  __return_storage_ptr__->spawnTime = 0;
  __return_storage_ptr__->energyAmount = 0;
  pIStack_4 = (Int32__Class *)0x0;
  pIStack_5 = (Int32__Class *)0x0;
  if (bVar1) {
    func_?(&StringLiteral_Vehicle_Energy);
    cRam_? = '\x01';
  }
  pSVar6 = StringLiteral_Vehicle_Energy;
  func_?(&stack0xffffffdc,StringLiteral_Vehicle_Energy);
  __return_storage_ptr__->name = pSVar6;
  __return_storage_ptr__->spawnOption = 10;
  __return_storage_ptr__->spawnTime = 0xf;
  __return_storage_ptr__->energyAmount = 0x1e;
  pDVar7 = (this->fields)._.blueprintData;
  if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar7,(Object *)StringLiteral_VehicleEnergyName,(Object **)&pSStack_2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar8 != 0) && (pSStack_2 != (String *)0x0)) {
      pSVar6 = (String *)0x0;
      if (pSStack_2->klass == TypeInfo__System__String) {
        pSVar6 = pSStack_2;
      }
      if (pSVar6 != (String *)0x0) {
        __return_storage_ptr__->name = pSVar6;
        func_?();
      }
    }
    pDVar7 = (this->fields)._.blueprintData;
    if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (pDVar7,(Object *)StringLiteral_RespawnCount,(Object **)&pIStack_3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if ((bVar8 != 0) && (pIStack_3 != (Int32__Class *)0x0)) {
        pIVar9 = (Int32__Class *)(pIStack_3->_0).image;
        pIVar10 = (Int32__Class *)0x0;
        if (pIVar9 == TypeInfo__System__Int32) {
          pIVar10 = pIStack_3;
        }
        if (pIVar10 != (Int32__Class *)0x0) {
          pIStack_5 = pIStack_3;
          pIVar10 = TypeInfo__System__Int32;
          if ((pIVar9->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?();
          __return_storage_ptr__->spawnOption = *piVar11;
        }
      }
      pDVar7 = (this->fields)._.blueprintData;
      if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                          (pDVar7,(Object *)StringLiteral_RespawnInterval,(Object **)&pIStack_4,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                          );
        if ((bVar8 != 0) && (pIStack_4 != (Int32__Class *)0x0)) {
          pIVar9 = (Int32__Class *)(pIStack_4->_0).image;
          pIVar10 = (Int32__Class *)0x0;
          if (pIVar9 == TypeInfo__System__Int32) {
            pIVar10 = pIStack_4;
          }
          if (pIVar10 != (Int32__Class *)0x0) {
            pIStack_5 = pIStack_4;
            pIVar10 = TypeInfo__System__Int32;
            if ((pIVar9->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar11 = (int32_t *)func_?();
            __return_storage_ptr__->spawnTime = *piVar11;
          }
        }
        pDVar7 = (this->fields)._.blueprintData;
        if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                            (pDVar7,(Object *)StringLiteral_VehicleEnergyAmount,
                             (Object **)&pIStack_5,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                            );
          if ((bVar8 == 0) || (pIStack_5 == (Int32__Class *)0x0)) {
            return __return_storage_ptr__;
          }
          pIVar9 = (Int32__Class *)(pIStack_5->_0).image;
          pIVar10 = (Int32__Class *)0x0;
          if (pIVar9 == TypeInfo__System__Int32) {
            pIVar10 = pIStack_5;
          }
          if (pIVar10 == (Int32__Class *)0x0) {
            return __return_storage_ptr__;
          }
          pIVar10 = TypeInfo__System__Int32;
          if ((pIVar9->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            pIStack_4 = pIStack_5;
            piVar11 = (int32_t *)func_?();
            __return_storage_ptr__->energyAmount = *piVar11;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  pIStack_5 = extraout_ECX;
  pIVar10 = extraout_EDX;
code_?:
  pIStack_4 = pIVar10;
  func_?();
  pcVar12 = (code *)swi(3);
  pMVar13 = (MVVehicleEnergy_VehicleEnergyConfiguration *)(*pcVar12)();
  return pMVar13;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy_Select
               (MVVehicleEnergy *this,Color color,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).AddSelectionBox.method)
            (this,(this->klass->vtable).RemoveSelectionBox.methodPtr);
  return;
}


/* Void Spawned() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy_Spawned
               (MVVehicleEnergy *this,MethodInfo *method)

{
  MVVehicleEnergy_ToggleColliders(this,1,(MethodInfo *)0x0);
  pMVar1 = (this->fields).vehicleEnergyObject;
  if ((pMVar1 != (MVVehicleEnergyObject *)0x0) &&
     (pVVar2 = (pMVar1->fields).vehicleEnergyVisuals, pVVar2 != (VehicleEnergyVisuals *)0x0)) {
    if ((pVVar2->fields).particleSystemOn == 0) {
      return;
    }
    this_00 = (pVVar2->fields).particles;
    if ((this_00 != (ParticleSystem *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Taken() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy_Taken
               (MVVehicleEnergy *this,MethodInfo *method)

{
  MVVehicleEnergy_ToggleColliders(this,0,(MethodInfo *)0x0);
  pMVar1 = (this->fields).vehicleEnergyObject;
  if ((pMVar1 != (MVVehicleEnergyObject *)0x0) &&
     (pVVar2 = (pMVar1->fields).vehicleEnergyVisuals, pVVar2 != (VehicleEnergyVisuals *)0x0)) {
    if ((pVVar2->fields).particleSystemOn == 0) {
      return;
    }
    this_00 = (pVVar2->fields).particles;
    if ((this_00 != (ParticleSystem *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ToggleColliders(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_ToggleColliders(MVVehicleEnergy *this,bool val,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
  }
  pEVar4 = (this->fields).editableCubeModelWrapper;
  if (((pEVar4 != (EditableCubeModelWrapper *)0x0) &&
      (pMVar5 = (pEVar4->fields).cubeModelBase, pMVar5 != (MVCubeModelInstance *)0x0)) &&
     (pCVar6 = (pMVar5->fields)._.chunkInstances, pCVar6 != (ChunkInstances *)0x0)) {
    piVar7 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar6);
    uStack_1 = 1;
    while (piVar7 != (int *)0x0) {
      cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar7);
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        iVar9 = func_?(piVar7,TypeInfo__System__IDisposable);
        if (iVar9 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar9);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar7 == (int *)0x0) break;
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar11 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar12 = (undefined4 *)
                     (*piVar7 +
                     (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar10 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?(piVar7,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      piVar13 = (int *)(*(code *)*puVar12)(piVar7,puVar12[1]);
      uVar14 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                        ,piVar13);
      if (piVar13 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar13 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      iVar9 = func_?(piVar13);
      if (*(Collider **)(iVar9 + 0x1c) == (Collider *)0x0) break;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (*(Collider **)(iVar9 + 0x1c),val,(MethodInfo *)0x0);
    }
  }
  uVar14 = func_?();
code_?:
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateVehicleEnergyConfig() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_UpdateVehicleEnergyConfig(MVVehicleEnergy *this,MethodInfo *method)

{
  pMVar1 = MVVehicleEnergy_ReadWorldObjectData(&MStack_2,this,(MethodInfo *)0x0);
  iVar3 = pMVar1->spawnOption;
  iVar4 = pMVar1->spawnTime;
  iVar5 = pMVar1->energyAmount;
  pMVar6 = &(this->fields)._VehicleEnergyConfig_k__BackingField;
  pMVar6->name = pMVar1->name;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnOption = iVar3;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnTime = iVar4;
  (this->fields)._VehicleEnergyConfig_k__BackingField.energyAmount = iVar5;
  func_?(pMVar6,0);
  return;
}


/* MVVehicleEnergy(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
               (MVVehicleEnergy *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergyObject);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
code_?:
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,(pPVar1->fields).vehicleEnergyPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar3 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x9000;
    pMVar2 = (MVVehicleEnergyObject *)(this->fields)._._._.component;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    if (pMVar2 == (MVVehicleEnergyObject *)0x0) {
      (this->fields).vehicleEnergyObject = (MVVehicleEnergyObject *)0x0;
code_?:
      func_?();
      pMVar2 = (this->fields).vehicleEnergyObject;
      if ((pMVar2 != (MVVehicleEnergyObject *)0x0) &&
         (this_00 = (pMVar2->fields).vehicleEnergyVisuals, this_00 != (VehicleEnergyVisuals *)0x0))
      {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
        ppGVar5 = &(this->fields)._VehicleEnergyVisualsGameObject_k__BackingField;
        *ppGVar5 = pGVar4;
        func_?(ppGVar5,pGVar4);
        return;
      }
      goto code_?;
    }
    bVar6 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergyObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment < bVar6) ||
       ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergyObject))
    goto code_?;
    (this->fields).vehicleEnergyObject = pMVar2;
    bVar6 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergyObject->_1).naturalAligment;
    if ((bVar6 <= (((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy[bVar6 - 1] ==
        (Il2CppClass *)TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergyObject))
    goto code_?;
  }
  func_?(pMVar2);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVCubeModelInstance get_CubeModelInstance() */

MVCubeModelInstance *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
MVVehicleEnergy_get_CubeModelInstance(MVVehicleEnergy *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pEVar2 = (this->fields).editableCubeModelWrapper;
  if (pEVar2 != (EditableCubeModelWrapper *)0x0) {
    return (pEVar2->fields).cubeModelBase;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pMVar6 = (MVCubeModelInstance *)(*pcVar5)();
  return pMVar6;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
MVVehicleEnergy_get_DocumentationType(MVVehicleEnergy *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_VehicleEnergy;
}


/* MVVehicleEnergy+VehicleEnergyConfiguration get_VehicleEnergyConfig() */

MVVehicleEnergy_VehicleEnergyConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
MVVehicleEnergy_get_VehicleEnergyConfig
          (MVVehicleEnergy_VehicleEnergyConfiguration *__return_storage_ptr__,MVVehicleEnergy *this,
          MethodInfo *method)

{
  iVar1 = (this->fields)._VehicleEnergyConfig_k__BackingField.spawnOption;
  iVar2 = (this->fields)._VehicleEnergyConfig_k__BackingField.spawnTime;
  iVar3 = (this->fields)._VehicleEnergyConfig_k__BackingField.energyAmount;
  __return_storage_ptr__->name = (this->fields)._VehicleEnergyConfig_k__BackingField.name;
  __return_storage_ptr__->spawnOption = iVar1;
  __return_storage_ptr__->spawnTime = iVar2;
  __return_storage_ptr__->energyAmount = iVar3;
  return __return_storage_ptr__;
}


/* Void set_VehicleEnergyConfig(MVVehicleEnergy+VehicleEnergyConfiguration) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_set_VehicleEnergyConfig
               (MVVehicleEnergy *this,MVVehicleEnergy_VehicleEnergyConfiguration value,
               MethodInfo *method)

{
  pMVar1 = &(this->fields)._VehicleEnergyConfig_k__BackingField;
  pMVar1->name = value.name;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnOption = value.spawnOption;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnTime = value.spawnTime;
  (this->fields)._VehicleEnergyConfig_k__BackingField.energyAmount = value.energyAmount;
  func_?(pMVar1,0);
  return;
}


/* Void set_VehicleEnergyVisualsGameObject(GameObject) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_set_VehicleEnergyVisualsGameObject
               (MVVehicleEnergy *this,GameObject *value,MethodInfo *method)

{
  ppGVar1 = &(this->fields)._VehicleEnergyVisualsGameObject_k__BackingField;
  *ppGVar1 = value;
  func_?(ppGVar1,value);
  return;
}

