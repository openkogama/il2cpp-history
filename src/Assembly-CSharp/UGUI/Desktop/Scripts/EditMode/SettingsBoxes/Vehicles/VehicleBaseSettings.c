
/* Object GetBluePrintData(Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
         VehicleBaseSettings::VehicleBaseSettings_GetBluePrintData
                   (VehicleBaseSettings *this,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).bluePrintData;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    return (Object *)TVar1.m_Index;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar3)();
  return pOVar4;
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = (MVWorldObjectSpawnerVehicle *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,woID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectSpawnerVehicle *)0x0) {
      (this->fields).spawnerVehicle = (MVWorldObjectSpawnerVehicle *)0x0;
    }
    else {
      if (((pMVar2->klass->_1).naturalAligment <
           (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment) ||
         ((MVWorldObjectSpawnerVehicle__Class *)
          (pMVar2->klass->_1).typeHierarchy
          [(TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment - 1] !=
          TypeInfo__MVWorldObjectSpawnerVehicle)) goto code_?;
      (this->fields).spawnerVehicle = pMVar2;
      if (((pMVar2->klass->_1).naturalAligment <
           (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment) ||
         ((MVWorldObjectSpawnerVehicle__Class *)
          (pMVar2->klass->_1).typeHierarchy
          [(TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment - 1] !=
          TypeInfo__MVWorldObjectSpawnerVehicle)) goto code_?;
    }
    func_?(&(this->fields).spawnerVehicle);
    pMVar2 = (this->fields).spawnerVehicle;
    if (pMVar2 != (MVWorldObjectSpawnerVehicle *)0x0) {
      (this->fields).vehicleWoID = (pMVar2->fields)._.spawnWorldObjectID;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = (MVWorldObjectSpawnerVehicle *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,(this->fields).vehicleWoID,(MethodInfo *)0x0);
        if (pMVar2 == (MVWorldObjectSpawnerVehicle *)0x0) {
          (this->fields).vehicleBase = (MVVehicleBase *)0x0;
        }
        else {
          if (((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVVehicleBase->_1).naturalAligment)
             || ((MVVehicleBase__Class *)
                 (pMVar2->klass->_1).typeHierarchy
                 [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] != TypeInfo__MVVehicleBase))
          goto code_?;
          (this->fields).vehicleBase = (MVVehicleBase *)pMVar2;
          if (((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVVehicleBase->_1).naturalAligment)
             || ((MVVehicleBase__Class *)
                 (pMVar2->klass->_1).typeHierarchy
                 [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] != TypeInfo__MVVehicleBase))
          goto code_?;
        }
        func_?(&(this->fields).vehicleBase);
        pMVar3 = (this->fields).spawnerVehicle;
        this_00 = (this->fields).settingsBase;
        if (pMVar3 != (MVWorldObjectSpawnerVehicle *)0x0) {
          pMVar4 = (this->fields).vehicleBase;
          woID_00 = (pMVar3->fields)._.spawnWorldObjectID;
          if ((pMVar4 != (MVVehicleBase *)0x0) &&
             (documentationType =
                   (*(code *)(pMVar4->klass->vtable).get_DocumentationType.method)
                             (pMVar4,(pMVar4->klass->vtable).TraverseRecursiveTail.methodPtr),
             this_00 != (SettingsBase *)0x0)) {
            SettingsBase::SettingsBase_Initialize
                      (this_00,woID_00,root,documentationType,(MethodInfo *)0x0);
            (this->fields).bluePrintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
            func_?(&(this->fields).bluePrintData,0);
            pMVar3 = (this->fields).spawnerVehicle;
            if (pMVar3 != (MVWorldObjectSpawnerVehicle *)0x0) {
              if ((pMVar3->fields)._.spawnWorldObjectID == -1) {
                pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                         (*(code *)(this->klass->vtable).__unknown_1.method)
                                   (this,(this->klass->vtable).__unknown_2.methodPtr);
                (this->fields).bluePrintData = pDVar5;
                func_?(&(this->fields).bluePrintData,pDVar5);
code_?:
                (*(code *)(this->klass->vtable).__unknown.method)(this);
                pAVar6 = (this->fields).OnInitialized;
                if (pAVar6 != (Action *)0x0) {
                  (*(pAVar6->fields)._._.invoke_impl)();
                }
                return;
              }
              pMVar4 = (this->fields).vehicleBase;
              if ((pMVar4 != (MVVehicleBase *)0x0) &&
                 (pDVar5 = (pMVar4->fields)._._._._.data,
                 pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
                bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::
                        Dictionary_2_System_Object_System_Object__TryGetValue
                                  (pDVar5,(Object *)StringLiteral_BlueprintData,
                                   (Object **)&stack0xfffffff8,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                  );
                if (((bVar7 != 0) &&
                    (((pMVar2 != (MVWorldObjectSpawnerVehicle *)0x0 &&
                      ((
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment <= (pMVar2->klass->_1).naturalAligment)) &&
                     ((Dictionary_2_System_Object_System_Object___Class *)
                      (pMVar2->klass->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment - 1] ==
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     )))) && (pMVar2 != (MVWorldObjectSpawnerVehicle *)0x0)) {
                  (this->fields).bluePrintData = (Dictionary_2_System_Object_System_Object_ *)pMVar2
                  ;
                  func_?();
                }
                if ((this->fields).bluePrintData == (Dictionary_2_System_Object_System_Object_ *)0x0
                   ) {
                  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                            (this_01,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                            );
                  (this->fields).bluePrintData =
                       (Dictionary_2_System_Object_System_Object_ *)this_01;
                  func_?(&(this->fields).bluePrintData);
                }
                (*(code *)(this->klass->vtable).__unknown_2.method)();
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  value = (Vector2)(*(code *)(this->klass->vtable).get_DefaultCanvasSize.method)
                             (this,(this->klass->vtable).__unknown.methodPtr);
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

