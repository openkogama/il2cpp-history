
/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_IsKey
               (String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_vehicleEnergyStorage);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_vehicleEnergyUse;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_BlueprintData_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality(key,pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_vehicleEnergyStorage;
  if (bVar2 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_op_Equality(key,pSVar1,(MethodInfo *)0x0);
    pSVar1 = StringLiteral_vehicleEnergyConsumption;
    if (bVar2 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::String::String_op_Equality(key,pSVar1,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 1;
}


/* Void OnSavePressed() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_OnSavePressed
               (VehicleEnergyForVehicleSettings *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,0,(MethodInfo *)0x0);
    pVVar1 = (this->fields).vehicleBaseSettings;
    if (pVVar1 != (VehicleBaseSettings *)0x0) {
      this_00 = (pVVar1->fields).canvas;
      value = (Vector2)(*(pVVar1->klass->vtable).get_DefaultCanvasSize.methodPtr)();
      if (this_00 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_Start
               (VehicleEnergyForVehicleSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_vehicleEnergyStorage);
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).vehicleBaseSettings;
  if (pVVar1 != (VehicleBaseSettings *)0x0) {
    puVar2 = (undefined4 *)
             (*(pVVar1->klass->vtable).__unknown_3.methodPtr)
                       (&pOStack_3,pVVar1,(pVVar1->klass->vtable).__unknown_3.method);
    pSVar4 = StringLiteral_vehicleEnergyUse;
    pOStack_3 = (Object *)*puVar2;
    iStack_5 = puVar2[1];
    iStack_6 = puVar2[2];
    iStack_7 = puVar2[3];
    this_00 = (this->fields).vehicleEnergyOnToggle;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_BlueprintData_);
      cRam_? = '\x01';
    }
    pSStack_8 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
    pSVar4 = StringLiteral_vehicleEnergyUse;
    pVVar1 = (this->fields).vehicleBaseSettings;
    if (pVVar1 != (VehicleBaseSettings *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
        cRam_? = '\x01';
      }
      pDVar9 = (pVVar1->fields).bluePrintData;
      if (pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar9,(Object *)pSVar4,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar11 = CONCAT44(TypeInfo__System__Boolean,pOVar10);
        if ((this_00 != (SettingsToggle *)0x0) && (pOVar10 != (Object *)0x0)) {
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pOStack_3 = pOVar10;
          pbVar12 = (bool *)func_?();
          SettingsToggle::SettingsToggle_Initialize(this_00,pSStack_8,*pbVar12,(MethodInfo *)0x0);
          pSVar4 = StringLiteral_vehicleEnergyStorage;
          pVVar1 = (this->fields).vehicleBaseSettings;
          if (pVVar1 != (VehicleBaseSettings *)0x0) {
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
              cRam_? = '\x01';
            }
            pDVar9 = (pVVar1->fields).bluePrintData;
            if (pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar9,(Object *)pSVar4,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              uVar11 = CONCAT44(TypeInfo__System__Int32,pOVar10);
              if (pOVar10 != (Object *)0x0) {
                if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class
                   ) goto code_?;
                pOStack_3 = pOVar10;
                piVar13 = (int32_t *)func_?();
                pSVar4 = StringLiteral_vehicleEnergyStorage;
                pSVar14 = (this->fields).storageSlider;
                iVar15 = *piVar13;
                if (cRam_? == '\0') {
                  func_?(&StringLiteral_BlueprintData_);
                  cRam_? = '\x01';
                }
                pSVar4 = mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
                if (pSVar14 != (SettingsSlider *)0x0) {
                  SettingsSlider::SettingsSlider_Initialize_1
                            (pSVar14,pSVar4,iVar15,(int32_t)pOStack_3,iStack_5,(MethodInfo *)0x0);
                  pSVar4 = StringLiteral_vehicleEnergyStorage;
                  pSVar16 = (this->fields).storageInputField;
                  if (cRam_? == '\0') {
                    func_?(&StringLiteral_BlueprintData_);
                    cRam_? = '\x01';
                  }
                  pSVar4 = mscorlib.dll::System::String::String_Concat_3
                                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
                  if (pSVar16 != (SettingsInputFieldSlider *)0x0) {
                    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                              (pSVar16,pSVar4,iVar15,(MethodInfo *)0x0);
                    pSVar4 = StringLiteral_vehicleEnergyConsumption;
                    pVVar1 = (this->fields).vehicleBaseSettings;
                    if (pVVar1 != (VehicleBaseSettings *)0x0) {
                      if (cRam_? == '\0') {
                        func_?(&
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                        cRam_? = '\x01';
                      }
                      pDVar9 = (pVVar1->fields).bluePrintData;
                      if (pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Object]::
                                 Dictionary_2_System_Object_System_Object__get_Item
                                           (pDVar9,(Object *)pSVar4,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                           );
                        uVar11 = CONCAT44(TypeInfo__System__Int32,pOVar10);
                        if (pOVar10 != (Object *)0x0) {
                          if ((pOVar10->klass->_0).element_class !=
                              (TypeInfo__System__Int32->_0).element_class) goto code_?;
                          pOStack_3 = pOVar10;
                          piVar13 = (int32_t *)func_?();
                          pSVar4 = StringLiteral_vehicleEnergyConsumption;
                          pSVar14 = (this->fields).consumptionSlider;
                          iVar15 = *piVar13;
                          if (cRam_? == '\0') {
                            func_?(&StringLiteral_BlueprintData_);
                            cRam_? = '\x01';
                          }
                          pSVar4 = mscorlib.dll::System::String::String_Concat_3
                                              (StringLiteral_BlueprintData_,pSVar4,
                                               (MethodInfo *)0x0);
                          if (pSVar14 != (SettingsSlider *)0x0) {
                            SettingsSlider::SettingsSlider_Initialize_1
                                      (pSVar14,pSVar4,iVar15,iStack_6,iStack_7,(MethodInfo *)0x0);
                            pSVar4 = StringLiteral_vehicleEnergyConsumption;
                            pSVar16 = (this->fields).consumptionInputField;
                            if (cRam_? == '\0') {
                              func_?(&StringLiteral_BlueprintData_);
                              cRam_? = '\x01';
                            }
                            pSVar4 = mscorlib.dll::System::String::String_Concat_3
                                                (StringLiteral_BlueprintData_,pSVar4,
                                                 (MethodInfo *)0x0);
                            if (pSVar16 != (SettingsInputFieldSlider *)0x0) {
                              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                        (pSVar16,pSVar4,iVar15,(MethodInfo *)0x0);
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
          }
        }
      }
    }
  }
  uVar11 = func_?();
code_?:
  func_?(uVar11);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Object ValueToSend(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
         VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_ValueToSend
                   (VehicleEnergyForVehicleSettings *this,String *key,Object *value,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_vehicleEnergyStorage);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_vehicleEnergyUse;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_BlueprintData_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality(key,pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_vehicleEnergyStorage;
  if (bVar2 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_op_Equality(key,pSVar1,(MethodInfo *)0x0);
    pSVar1 = StringLiteral_vehicleEnergyConsumption;
    if (bVar2 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::String::String_op_Equality(key,pSVar1,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return value;
      }
    }
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
    pOVar3 = (Object *)func_?();
    return pOVar3;
  }
  return value;
}


/* VehicleEnergyForVehicleSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                   );
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
           ->static_fields;
  (pVVar1->VehicleEnergyEditingCanvasSize).x = 800.0;
  (pVVar1->VehicleEnergyEditingCanvasSize).y = 700.0;
  return;
}

