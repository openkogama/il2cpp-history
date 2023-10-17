
/* Object GetBluePrintData(Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
         VehicleBaseSettings::VehicleBaseSettings_GetBluePrintData
                   (VehicleBaseSettings *this,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bluePrintData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    return pOVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleBaseSettings::VehicleBaseSettings_Initialize
               (VehicleBaseSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVVehicleBase__Class *)0x0;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    pMStack_1 = (MVVehicleBase__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar2,woID,(MethodInfo *)0x0);
    unaff_EDI = (MVVehicleBase__Class *)TypeInfo__MVWorldObjectSpawnerVehicle;
    if (pMStack_1 == (MVVehicleBase__Class *)0x0) {
      (this->fields).spawnerVehicle = (MVWorldObjectSpawnerVehicle *)0x0;
    }
    else {
      pMVar3 = (MVWorldObjectSpawnerVehicle__Class *)(pMStack_1->_0).image;
      if (((pMVar3->_1).typeHierarchyDepth <
           (TypeInfo__MVWorldObjectSpawnerVehicle->_1).typeHierarchyDepth) ||
         ((MVWorldObjectSpawnerVehicle__Class *)
          (pMVar3->_1).typeHierarchy
          [(TypeInfo__MVWorldObjectSpawnerVehicle->_1).typeHierarchyDepth - 1] !=
          TypeInfo__MVWorldObjectSpawnerVehicle)) goto code_?;
      (this->fields).spawnerVehicle = (MVWorldObjectSpawnerVehicle *)pMStack_1;
      pMVar3 = (MVWorldObjectSpawnerVehicle__Class *)(pMStack_1->_0).image;
      unaff_EDI = (MVVehicleBase__Class *)TypeInfo__MVWorldObjectSpawnerVehicle;
      if (((pMVar3->_1).typeHierarchyDepth <
           (TypeInfo__MVWorldObjectSpawnerVehicle->_1).typeHierarchyDepth) ||
         ((MVWorldObjectSpawnerVehicle__Class *)
          (pMVar3->_1).typeHierarchy
          [(TypeInfo__MVWorldObjectSpawnerVehicle->_1).typeHierarchyDepth - 1] !=
          TypeInfo__MVWorldObjectSpawnerVehicle)) goto code_?;
    }
    func_?(&(this->fields).spawnerVehicle);
    pMVar4 = (this->fields).spawnerVehicle;
    if (pMVar4 != (MVWorldObjectSpawnerVehicle *)0x0) {
      (this->fields).vehicleWoID = (pMVar4->fields)._.spawnWorldObjectID;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
        pMStack_1 = (MVVehicleBase__Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar2,(this->fields).vehicleWoID,(MethodInfo *)0x0);
        if (pMStack_1 == (MVVehicleBase__Class *)0x0) {
          (this->fields).vehicleBase = (MVVehicleBase *)0x0;
        }
        else {
          pMVar3 = (MVWorldObjectSpawnerVehicle__Class *)(pMStack_1->_0).image;
          unaff_EDI = TypeInfo__MVVehicleBase;
          if (((pMVar3->_1).typeHierarchyDepth < (TypeInfo__MVVehicleBase->_1).typeHierarchyDepth)
             || ((MVVehicleBase__Class *)
                 (pMVar3->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] !=
                 TypeInfo__MVVehicleBase)) goto code_?;
          (this->fields).vehicleBase = (MVVehicleBase *)pMStack_1;
          pMVar3 = (MVWorldObjectSpawnerVehicle__Class *)(pMStack_1->_0).image;
          unaff_EDI = TypeInfo__MVVehicleBase;
          if (((pMVar3->_1).typeHierarchyDepth < (TypeInfo__MVVehicleBase->_1).typeHierarchyDepth)
             || ((MVVehicleBase__Class *)
                 (pMVar3->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] !=
                 TypeInfo__MVVehicleBase)) goto code_?;
        }
        func_?(&(this->fields).vehicleBase);
        pMVar4 = (this->fields).spawnerVehicle;
        unaff_EDI = (MVVehicleBase__Class *)(this->fields).settingsBase;
        if (pMVar4 != (MVWorldObjectSpawnerVehicle *)0x0) {
          pMVar5 = (this->fields).vehicleBase;
          woID_00 = (pMVar4->fields)._.spawnWorldObjectID;
          if ((pMVar5 != (MVVehicleBase *)0x0) &&
             (documentationType =
                   (*(pMVar5->klass->vtable).get_DocumentationType.methodPtr)
                             (pMVar5,(pMVar5->klass->vtable).get_DocumentationType.method),
             unaff_EDI != (MVVehicleBase__Class *)0x0)) {
            SettingsBase::SettingsBase_Initialize
                      ((SettingsBase *)unaff_EDI,woID_00,root,documentationType,(MethodInfo *)0x0);
            (this->fields).bluePrintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
            func_?(&(this->fields).bluePrintData,0);
            pMVar4 = (this->fields).spawnerVehicle;
            if (pMVar4 != (MVWorldObjectSpawnerVehicle *)0x0) {
              if ((pMVar4->fields)._.spawnWorldObjectID == -1) {
                pDVar6 = (Dictionary_2_System_Object_System_Object_ *)
                         (*(this->klass->vtable).__unknown_1.methodPtr)
                                   (this,(this->klass->vtable).__unknown_1.method);
                (this->fields).bluePrintData = pDVar6;
                func_?(&(this->fields).bluePrintData,pDVar6);
                goto code_?;
              }
              pMVar5 = (this->fields).vehicleBase;
              if ((pMVar5 != (MVVehicleBase *)0x0) &&
                 (pDVar6 = (pMVar5->fields)._._._._.data,
                 pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
                bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::
                        Dictionary_2_System_Object_System_Object__TryGetValue
                                  (pDVar6,(Object *)StringLiteral_BlueprintData,
                                   (Object **)&pMStack_1,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                  );
                if (((bVar7 != 0) &&
                    (((pMStack_1 != (MVVehicleBase__Class *)0x0 &&
                      (pMVar3 = (MVWorldObjectSpawnerVehicle__Class *)(pMStack_1->_0).image,
                      (
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      ->_1).typeHierarchyDepth <= (pMVar3->_1).typeHierarchyDepth)) &&
                     ((Dictionary_2_System_Object_System_Object___Class *)
                      (pMVar3->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).typeHierarchyDepth - 1] ==
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     )))) && (pMStack_1 != (MVVehicleBase__Class *)0x0)) {
                  (this->fields).bluePrintData =
                       (Dictionary_2_System_Object_System_Object_ *)pMStack_1;
                  pMStack_1 = (MVVehicleBase__Class *)&(this->fields).bluePrintData;
                  func_?();
                }
                if ((this->fields).bluePrintData == (Dictionary_2_System_Object_System_Object_ *)0x0
                   ) {
                  pDVar6 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                  unaff_EDI = (MVVehicleBase__Class *)0x0;
                  if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                  goto code_?;
                  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                            ((ParameterOverride_1_System_Object_ *)pDVar6,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                            );
                  (this->fields).bluePrintData = pDVar6;
                  func_?(&(this->fields).bluePrintData,pDVar6);
                }
                pMStack_1 = (MVVehicleBase__Class *)this;
                (*(this->klass->vtable).__unknown_2.methodPtr)();
code_?:
                pMStack_1 = (MVVehicleBase__Class *)root;
                (*(this->klass->vtable).__unknown.methodPtr)(this);
                pAVar8 = (this->fields).OnInitialized;
                if (pAVar8 != (Action *)0x0) {
                  (*(pAVar8->fields)._._.invoke_impl)();
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pMStack_1 = extraout_EDX;
code_?:
  pMVar9 = pMStack_1;
  pMStack_1 = unaff_EDI;
  func_?(pMVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnVehicleEnergySettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleBaseSettings::VehicleBaseSettings_OnVehicleEnergySettingsOpen
               (VehicleBaseSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).vehicleEnergyForVehicleSettings;
  if (this_00 != (VehicleEnergyForVehicleSettings *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,1,(MethodInfo *)0x0);
      if ((
          TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
          ->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_01 = (this->fields).canvas;
      if (this_01 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (this_01,TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                           ->static_fields->VehicleEnergyEditingCanvasSize,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ResetCanvasSize() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleBaseSettings::VehicleBaseSettings_ResetCanvasSize
               (VehicleBaseSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).canvas;
  value = (Vector2)(*(this->klass->vtable).get_DefaultCanvasSize.methodPtr)
                             (this,(this->klass->vtable).get_DefaultCanvasSize.method);
  if (this_00 != (RectTransform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetCanvasSize(Vector2) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleBaseSettings::VehicleBaseSettings_SetCanvasSize
               (VehicleBaseSettings *this,Vector2 size,MethodInfo *method)

{
  this_00 = (this->fields).canvas;
  if (this_00 != (RectTransform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (this_00,size,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String SettingsKey(String) */

String * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
         VehicleBaseSettings::VehicleBaseSettings_SettingsKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_BlueprintData_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_BlueprintData_,key,(MethodInfo *)0x0);
  return pSVar1;
}


/* Vector2 get_DefaultCanvasSize() */

Vector2 Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
        VehicleBaseSettings::VehicleBaseSettings_get_DefaultCanvasSize
                  (VehicleBaseSettings *this,MethodInfo *method)

{
  VVar1.y = 700.0;
  VVar1.x = 800.0;
  return VVar1;
}

