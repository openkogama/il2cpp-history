
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
  pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar3 = (MVWorldObjectSpawnerVehicle *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar2,woID,(MethodInfo *)0x0);
  if (pMVar3 == (MVWorldObjectSpawnerVehicle *)0x0) {
    (this->fields).spawnerVehicle = (MVWorldObjectSpawnerVehicle *)0x0;
code_?:
    unaff_ESI = (MVWorldObjectSpawnerVehicle__Class *)&(this->fields).spawnerVehicle;
    func_?(unaff_ESI,pMVar3);
    if (*(MVWorldObjectSpawnerVehicle **)unaff_ESI == (MVWorldObjectSpawnerVehicle *)0x0) {
code_?:
      func_?();
      pMVar3 = extraout_EDX;
    }
    else {
      (this->fields).vehicleWoID =
           ((*(MVWorldObjectSpawnerVehicle **)unaff_ESI)->fields)._.spawnWorldObjectID;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar3 = (MVWorldObjectSpawnerVehicle *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar2,(this->fields).vehicleWoID,(MethodInfo *)0x0);
      if (pMVar3 == (MVWorldObjectSpawnerVehicle *)0x0) {
        (this->fields).vehicleBase = (MVVehicleBase *)0x0;
code_?:
        unaff_EBX = (MVVehicleBase__Class *)&(this->fields).vehicleBase;
        func_?(unaff_EBX,pMVar3);
        this_00 = (this->fields).settingsBase;
        if (*(MVWorldObjectSpawnerVehicle **)unaff_ESI != (MVWorldObjectSpawnerVehicle *)0x0) {
          pMVar4 = *(MVVehicleBase **)unaff_EBX;
          woID_00 = ((*(MVWorldObjectSpawnerVehicle **)unaff_ESI)->fields)._.spawnWorldObjectID;
          if ((pMVar4 != (MVVehicleBase *)0x0) &&
             (documentationType =
                   (*(code *)(pMVar4->klass->vtable).get_DocumentationType.method)
                             (pMVar4,(pMVar4->klass->vtable).TraverseRecursiveTail.methodPtr),
             this_00 != (SettingsBase *)0x0)) {
            SettingsBase::SettingsBase_Initialize
                      (this_00,woID_00,root,documentationType,(MethodInfo *)0x0);
            unaff_EBX = (MVVehicleBase__Class *)&(this->fields).bluePrintData;
            *(Dictionary_2_System_Object_System_Object_ **)unaff_EBX =
                 (Dictionary_2_System_Object_System_Object_ *)0x0;
            func_?(unaff_EBX,0);
            if (*(MVWorldObjectSpawnerVehicle **)unaff_ESI != (MVWorldObjectSpawnerVehicle *)0x0) {
              if (((*(MVWorldObjectSpawnerVehicle **)unaff_ESI)->fields)._.spawnWorldObjectID == -1)
              {
                pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                         (*(code *)(this->klass->vtable).__unknown_1.method)
                                   (this,(this->klass->vtable).__unknown_2.methodPtr);
                *(Dictionary_2_System_Object_System_Object_ **)unaff_EBX = pDVar5;
                func_?(unaff_EBX,pDVar5);
code_?:
                pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)
                            (this->klass->vtable).__unknown_1.methodPtr;
                (*(code *)(this->klass->vtable).__unknown.method)(this,root);
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
                                   (Object **)&pDStack_1,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                  );
                if ((bVar7 != 0) &&
                   (pDStack_1 != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
                  pDVar8 = (Dictionary_2_System_Object_System_Object___Class *)(pDStack_1->_0).image
                  ;
                  bVar9 = (
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          ->_1).naturalAligment;
                  if (((bVar9 <= (pDVar8->_1).naturalAligment) &&
                      ((Dictionary_2_System_Object_System_Object___Class *)
                       (pDVar8->_1).typeHierarchy[bVar9 - 1] ==
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      )) && (pDStack_1 != (Dictionary_2_System_Object_System_Object___Class *)0x0))
                  {
                    *(Dictionary_2_System_Object_System_Object___Class **)unaff_EBX = pDStack_1;
                    func_?(unaff_EBX);
                  }
                }
                if (*(Dictionary_2_System_Object_System_Object_ **)unaff_EBX ==
                    (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  pDStack_1 = 
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ;
                  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                            (this_01,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                            );
                  *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    **)unaff_EBX = this_01;
                  func_?(unaff_EBX,this_01);
                }
                pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)
                            (this->klass->vtable).__unknown_3.methodPtr;
                (*(code *)(this->klass->vtable).__unknown_2.method)(this);
                goto code_?;
              }
            }
          }
        }
        goto code_?;
      }
      bVar9 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      unaff_EBX = TypeInfo__MVVehicleBase;
      if (((pMVar3->klass->_1).naturalAligment < bVar9) ||
         ((MVVehicleBase__Class *)(pMVar3->klass->_1).typeHierarchy[bVar9 - 1] !=
          TypeInfo__MVVehicleBase)) goto code_?;
      unaff_EBX = (MVVehicleBase__Class *)&(this->fields).vehicleBase;
      *(MVWorldObjectSpawnerVehicle **)unaff_EBX = pMVar3;
      bVar9 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      if ((bVar9 <= (pMVar3->klass->_1).naturalAligment) &&
         ((MVVehicleBase__Class *)(pMVar3->klass->_1).typeHierarchy[bVar9 - 1] ==
          TypeInfo__MVVehicleBase)) goto code_?;
    }
    func_?(pMVar3,TypeInfo__MVVehicleBase);
    pMVar3 = extraout_EDX_00;
  }
  else {
    bVar9 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
    unaff_ESI = TypeInfo__MVWorldObjectSpawnerVehicle;
    if (((pMVar3->klass->_1).naturalAligment < bVar9) ||
       ((MVWorldObjectSpawnerVehicle__Class *)(pMVar3->klass->_1).typeHierarchy[bVar9 - 1] !=
        TypeInfo__MVWorldObjectSpawnerVehicle)) goto code_?;
    unaff_ESI = (MVWorldObjectSpawnerVehicle__Class *)&(this->fields).spawnerVehicle;
    *(MVWorldObjectSpawnerVehicle **)unaff_ESI = pMVar3;
    bVar9 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
    unaff_EBX = (MVVehicleBase__Class *)TypeInfo__MVWorldObjectSpawnerVehicle;
    if ((bVar9 <= (pMVar3->klass->_1).naturalAligment) &&
       ((MVWorldObjectSpawnerVehicle__Class *)(pMVar3->klass->_1).typeHierarchy[bVar9 - 1] ==
        TypeInfo__MVWorldObjectSpawnerVehicle)) goto code_?;
  }
code_?:
  func_?(pMVar3,unaff_EBX);
  pMVar3 = extraout_EDX_01;
code_?:
  func_?(pMVar3,unaff_ESI);
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

