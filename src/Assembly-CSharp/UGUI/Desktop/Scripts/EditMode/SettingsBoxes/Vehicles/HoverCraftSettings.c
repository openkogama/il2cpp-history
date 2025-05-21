
/* Void BlueprintDataRetrieved() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings_BlueprintDataRetrieved
               (HoverCraftSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&TypeInfo__HoverCraftVisualization);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_thrustersColor);
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_randomLeaveVehicle);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_speed);
    func_?(&StringLiteral_vehicleEnergyStorage);
    func_?(&StringLiteral_jumpHeight);
    func_?(&StringLiteral_thrustersOn);
    func_?(&StringLiteral_thrustersSize);
    func_?(&StringLiteral_turningSpeed);
    func_?(&StringLiteral_overrideHealth);
    cRam_? = '\x01';
  }
  pHVar1 = this;
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._.bluePrintData;
  if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar2,(Object *)StringLiteral_overrideHealth,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      pDVar4 = (pHVar1->fields)._.bluePrintData;
      this = (HoverCraftSettings *)0x43160000;
      pOVar5 = (Object *)func_?(TypeInfo__System__Single,&this);
      if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar4,(Object *)StringLiteral_overrideHealth,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pHVar1->fields)._.bluePrintData;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (pDVar2,(Object *)StringLiteral_randomLeaveVehicle,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar3 == 0) {
        pDVar4 = (pHVar1->fields)._.bluePrintData;
        method = (MethodInfo *)&this;
        this = (HoverCraftSettings *)0x0;
        pOVar5 = (Object *)func_?();
        if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar4,(Object *)StringLiteral_randomLeaveVehicle,pOVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pHVar1->fields)._.bluePrintData;
      if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar2,(Object *)StringLiteral_speed,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar3 == 0) {
          pDVar4 = (pHVar1->fields)._.bluePrintData;
          method = (MethodInfo *)&this;
          this = (HoverCraftSettings *)0x8;
          pOVar5 = (Object *)func_?();
          if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar4,(Object *)StringLiteral_speed,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (pHVar1->fields)._.bluePrintData;
        if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (pDVar2,(Object *)StringLiteral_jumpHeight,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar3 == 0) {
            pDVar4 = (pHVar1->fields)._.bluePrintData;
            method = (MethodInfo *)&this;
            this = (HoverCraftSettings *)0x40800000;
            pOVar5 = (Object *)func_?();
            if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar4,(Object *)StringLiteral_jumpHeight,pOVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (pHVar1->fields)._.bluePrintData;
          if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              (pDVar2,(Object *)StringLiteral_thrustersOn,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar3 == 0) {
              pDVar4 = (pHVar1->fields)._.bluePrintData;
              method = (MethodInfo *)((int)&this + 3);
              this = (HoverCraftSettings *)CONCAT13(1,(int3)TypeInfo__System__Boolean);
              pOVar5 = (Object *)func_?();
              if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar4,(Object *)StringLiteral_thrustersOn,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
            }
            pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     (pHVar1->fields)._.bluePrintData;
            if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (pDVar2,(Object *)StringLiteral_turningSpeed,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar3 == 0) {
                pDVar4 = (pHVar1->fields)._.bluePrintData;
                method = (MethodInfo *)&this;
                this = (HoverCraftSettings *)0x4059999a;
                pOVar5 = (Object *)func_?();
                if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (pDVar4,(Object *)StringLiteral_turningSpeed,pOVar5,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
              }
              pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (pHVar1->fields)._.bluePrintData;
              if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                  (pDVar2,(Object *)StringLiteral_thrustersSize,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                  );
                if (bVar3 == 0) {
                  pDVar4 = (pHVar1->fields)._.bluePrintData;
                  method = (MethodInfo *)&this;
                  this = (HoverCraftSettings *)0x3f5f3b64;
                  pOVar5 = (Object *)func_?();
                  if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                  goto code_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar4,(Object *)StringLiteral_thrustersSize,pOVar5,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                }
                pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         (pHVar1->fields)._.bluePrintData;
                if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::TextureId]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                    (pDVar2,(Object *)StringLiteral_thrustersColor,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                    );
                  if (bVar3 == 0) {
                    pDVar4 = (pHVar1->fields)._.bluePrintData;
                    if ((TypeInfo__HoverCraftVisualization->_1).cctor_finished_or_no_cctor == 0) {
                      method = (MethodInfo *)TypeInfo__HoverCraftVisualization;
                      this = (HoverCraftSettings *)&UNK_?;
                      func_?();
                    }
                    toAdd = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
                            ThrustersColorSerializer_Serialize
                                      (TypeInfo__HoverCraftVisualization->static_fields->
                                       DefaultThrustersColor,(MethodInfo *)0x0);
                    WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
                    ThrustersColorSerializer_FillInData(pDVar4,toAdd,(MethodInfo *)0x0);
                  }
                  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           (pHVar1->fields)._.bluePrintData;
                  if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                  {
                    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::TextureId]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                      (pDVar2,(Object *)StringLiteral_vehicleEnergyUse,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                      );
                    if (bVar3 == 0) {
                      pDVar4 = (pHVar1->fields)._.bluePrintData;
                      method = (MethodInfo *)((int)&this + 3);
                      this = (HoverCraftSettings *)TypeInfo__System__Boolean;
                      pOVar5 = (Object *)func_?();
                      if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                      goto code_?;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (pDVar4,(Object *)StringLiteral_vehicleEnergyUse,pOVar5,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                );
                    }
                    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             (pHVar1->fields)._.bluePrintData;
                    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  0x0) {
                      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,UnityEngine::UIElements::TextureId]::
                              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                        (pDVar2,(Object *)StringLiteral_vehicleEnergyStorage,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                        );
                      if (bVar3 == 0) {
                        pDVar4 = (pHVar1->fields)._.bluePrintData;
                        method = (MethodInfo *)&this;
                        this = (HoverCraftSettings *)0x37;
                        pOVar5 = (Object *)func_?();
                        if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                        goto code_?;
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                  (pDVar4,(Object *)StringLiteral_vehicleEnergyStorage,pOVar5,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                  );
                      }
                      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               (pHVar1->fields)._.bluePrintData;
                      if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    0x0) {
                        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,UnityEngine::UIElements::TextureId]::
                                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                          (pDVar2,(Object *)StringLiteral_vehicleEnergyConsumption,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                          );
                        if (bVar3 == 0) {
                          pDVar4 = (pHVar1->fields)._.bluePrintData;
                          method = (MethodInfo *)&this;
                          this = (HoverCraftSettings *)0x6;
                          pOVar5 = (Object *)func_?();
                          if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                          goto code_?;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                    (pDVar4,(Object *)StringLiteral_vehicleEnergyConsumption,pOVar5,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                    );
                        }
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
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Dictionary`2[System.Object,System.Object] FillDefaultBlueprintData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings::
HoverCraftSettings_FillDefaultBlueprintData(HoverCraftSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__HoverCraftVisualization);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_randomLeaveVehicle);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_speed);
    func_?(&StringLiteral_vehicleEnergyStorage);
    func_?(&StringLiteral_jumpHeight);
    func_?(&StringLiteral_thrustersOn);
    func_?(&StringLiteral_thrustersSize);
    func_?(&StringLiteral_turningSpeed);
    func_?(&StringLiteral_overrideHealth);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_overrideHealth,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Single);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_randomLeaveVehicle,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_speed,
               pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_jumpHeight,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_thrustersOn,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_turningSpeed,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack_2 = (undefined *)0x3f5f3b64;
    ppuStack3 = &puStack_2;
    pSStack4 = TypeInfo__System__Single;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_thrustersSize,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_vehicleEnergyUse,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_vehicleEnergyStorage,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack5 = &stack0xffffffd8;
    pIStack6 = TypeInfo__System__Int32;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_vehicleEnergyConsumption,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__HoverCraftVisualization->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar7 = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
             ThrustersColorSerializer_Serialize
                       (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor,
                        (MethodInfo *)0x0);
    WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
    ThrustersColorSerializer_FillInData
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pDVar7,(MethodInfo *)0x0);
    return (Dictionary_2_System_Object_System_Object_ *)this_00;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pDVar7 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar8)();
  return pDVar7;
}


/* Color GetColorFromThrustersColor(ThrustersColor, Int32) */

Color * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
        HoverCraftSettings::HoverCraftSettings_GetColorFromThrustersColor
                  (Color *__return_storage_ptr__,ThrustersColor thrustersColor,int32_t pos,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (thrustersColor.alphas != (ThrustersColorAlphaKey__Array *)0x0) {
    if ((uint)pos < (thrustersColor.alphas)->max_length) {
      fVar2 = (thrustersColor.alphas)->vector[pos].alpha;
      if (thrustersColor.colors == (ThrustersColorColorKey__Array *)0x0) goto code_?;
      if ((uint)pos < (thrustersColor.colors)->max_length) {
        pTVar3 = (thrustersColor.colors)->vector + pos;
        fVar4 = (pTVar3->color).g;
        fVar5 = (pTVar3->color).b;
        __return_storage_ptr__->r = (pTVar3->color).r;
        __return_storage_ptr__->g = fVar4;
        __return_storage_ptr__->b = fVar5;
        __return_storage_ptr__->a = fVar2;
        return __return_storage_ptr__;
      }
    }
    puStack_1 = (undefined1 *)0x0;
    puStack_6 = (undefined *)func_?();
    func_?();
    pcVar7 = (code *)swi(3);
    pCVar8 = (Color *)(*pcVar7)();
    return pCVar8;
  }
code_?:
  uVar9 = func_?(&puStack_10);
  func_?(uVar9);
  pcVar7 = (code *)swi(3);
  pCVar8 = (Color *)(*pcVar7)();
  return pCVar8;
}


/* VehicleEnergyForVehicleSettingsConfig GetVehicleEnergySettingsConfig() */

VehicleEnergyForVehicleSettingsConfig *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings::
HoverCraftSettings_GetVehicleEnergySettingsConfig
          (VehicleEnergyForVehicleSettingsConfig *__return_storage_ptr__,HoverCraftSettings *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                   );
  }
  pHVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings->
           static_fields;
  iVar2 = (pHVar1->VehicleEnergyForVehicleSettingsConfig).storageMaxValue;
  iVar3 = (pHVar1->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue;
  iVar4 = (pHVar1->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue;
  __return_storage_ptr__->storageMinValue =
       (pHVar1->VehicleEnergyForVehicleSettingsConfig).storageMinValue;
  __return_storage_ptr__->storageMaxValue = iVar2;
  __return_storage_ptr__->consumptionMinValue = iVar3;
  __return_storage_ptr__->consumptionMaxValue = iVar4;
  return __return_storage_ptr__;
}


/* Void Initialize(GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings_Initialize
               (HoverCraftSettings *this,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__HoverCraftMotor);
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_randomLeaveVehicle);
    func_?(&StringLiteral_speed);
    func_?(&StringLiteral_jumpHeight);
    func_?(&StringLiteral_thrustersOn);
    func_?(&StringLiteral_thrustersSize);
    func_?(&StringLiteral_turningSpeed);
    func_?(&StringLiteral_overrideHealth);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_overrideHealth;
  this_01.m_Index = (int32_t)(this->fields).healthSlider;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_BlueprintData_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._.bluePrintData;
  if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar3 = func_?();
  }
  else {
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar2,(Object *)StringLiteral_overrideHealth,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
    if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
       || (TVar4.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar5 = (float *)func_?(TVar4.m_Index);
      SettingsSlider::SettingsSlider_Initialize
                ((SettingsSlider *)this_01.m_Index,pSVar1,*pfVar5,1.0,500.0,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_overrideHealth;
      this_01.m_Index = (int32_t)(this->fields).healthInputField;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_overrideHealth,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar5 = (float *)func_?(TVar4.m_Index);
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                ((SettingsInputFieldSlider *)this_01.m_Index,pSVar1,*pfVar5,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_randomLeaveVehicle;
      this_01.m_Index = (int32_t)(this->fields).randomLeaveVehicleSlider;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_randomLeaveVehicle,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar5 = (float *)func_?(TVar4.m_Index);
      SettingsSlider::SettingsSlider_Initialize
                ((SettingsSlider *)this_01.m_Index,pSVar1,*pfVar5,0.0,100.0,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_randomLeaveVehicle;
      this_01.m_Index = (int32_t)(this->fields).randomLeaveVehicleInputField;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_randomLeaveVehicle,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar5 = (float *)func_?(TVar4.m_Index);
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                ((SettingsInputFieldSlider *)this_01.m_Index,pSVar1,*pfVar5,(MethodInfo *)0x0);
      this_01.m_Index = (int32_t)StringLiteral_speed;
      this_00 = (this->fields).speedSlider;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,(String *)this_01.m_Index,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar2,(Object *)StringLiteral_speed,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if ((TypeInfo__HoverCraftMotor->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__HoverCraftMotor);
      }
      pLVar6 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
      if (((pLVar6 == (List_1_System_Single_ *)0x0) ||
          (maxValue = (pLVar6->fields)._size, this_00 == (SettingsSlider *)0x0)) ||
         (this_01.m_Index == 0)) goto code_?;
      pIVar7 = TypeInfo__System__Int32;
      if (*(Il2CppClass **)(*(int *)this_01.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar8 = (int32_t *)func_?(this_01.m_Index);
      SettingsSlider::SettingsSlider_Initialize_1
                (this_00,pSVar1,*piVar8,1,maxValue,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_speed;
      this_01.m_Index = (int32_t)(this->fields).speedInputField;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_speed,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar8 = (int32_t *)func_?(TVar4.m_Index);
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                ((SettingsInputFieldSlider *)this_01.m_Index,pSVar1,*piVar8,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_jumpHeight;
      this_01.m_Index = (int32_t)(this->fields).jumpHeightSlider;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_jumpHeight,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar5 = (float *)func_?(TVar4.m_Index);
      SettingsSlider::SettingsSlider_Initialize
                ((SettingsSlider *)this_01.m_Index,pSVar1,*pfVar5,0.0,20.0,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_jumpHeight;
      this_01.m_Index = (int32_t)(this->fields).jumpHeightInputField;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_jumpHeight,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar5 = (float *)func_?(TVar4.m_Index);
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                ((SettingsInputFieldSlider *)this_01.m_Index,pSVar1,*pfVar5,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_thrustersOn;
      this_01.m_Index = (int32_t)(this->fields).enginesOnToggle;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_thrustersOn,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Boolean,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Boolean->_0).element_class) goto code_?;
      pbVar9 = (bool *)func_?(TVar4.m_Index);
      SettingsToggle::SettingsToggle_Initialize
                ((SettingsToggle *)this_01.m_Index,pSVar1,*pbVar9,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_turningSpeed;
      this_01.m_Index = (int32_t)(this->fields).turningSpeedSlider;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_turningSpeed,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar5 = (float *)func_?(TVar4.m_Index);
      SettingsSlider::SettingsSlider_Initialize
                ((SettingsSlider *)this_01.m_Index,pSVar1,*pfVar5 * _UNK_?,5.0,60.0,
                 (MethodInfo *)0x0);
      pSVar1 = StringLiteral_turningSpeed;
      this_01.m_Index = (int32_t)(this->fields).turningSpeedInputField;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_turningSpeed,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar5 = (float *)func_?(TVar4.m_Index);
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                ((SettingsInputFieldSlider *)this_01.m_Index,pSVar1,*pfVar5 * _UNK_?,
                 (MethodInfo *)0x0);
      pSVar1 = StringLiteral_thrustersSize;
      this_01.m_Index = (int32_t)(this->fields).thrustersSizeSlider;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_thrustersSize,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar5 = (float *)func_?(TVar4.m_Index);
      SettingsSlider::SettingsSlider_Initialize
                ((SettingsSlider *)this_01.m_Index,pSVar1,*pfVar5 * _UNK_?,20.0,95.0,
                 (MethodInfo *)0x0);
      pSVar1 = StringLiteral_thrustersSize;
      this_01.m_Index = (int32_t)(this->fields).thrustersSizeInputField;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.bluePrintData;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_thrustersSize,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
      if (((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
         || (TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar5 = (float *)func_?(TVar4.m_Index);
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                ((SettingsInputFieldSlider *)this_01.m_Index,pSVar1,*pfVar5 * _UNK_?,
                 (MethodInfo *)0x0);
      TVar10 = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
               ThrustersColorSerializer_Deserialize
                         ((this->fields)._.bluePrintData,(MethodInfo *)0x0);
      this_01.m_Index = (int32_t)TVar10.alphas;
      pTVar11 = TVar10.colors;
      pIVar12 = (this->fields).thrustersColorImage1;
      if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings->
          _1).cctor_finished_or_no_cctor == 0) {
        func_?(
                       TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                       );
      }
      if ((ThrustersColorAlphaKey__Array *)this_01.m_Index == (ThrustersColorAlphaKey__Array *)0x0)
      goto code_?;
      if ((CancellationTokenSource *)((ThrustersColorAlphaKey__Array *)this_01.m_Index)->max_length
          != (CancellationTokenSource *)0x0) {
        if (pTVar11 != (ThrustersColorColorKey__Array *)0x0) {
          if (pTVar11->max_length == 0) goto code_?;
          if (pIVar12 != (Image *)0x0) {
            (*(code *)(pIVar12->klass->vtable).set_color.method)
                      (pIVar12,pTVar11->vector[0].color.r,pTVar11->vector[0].color.g,
                       pTVar11->vector[0].color.b,
                       (InputField *)
                       ((ThrustersColorAlphaKey__Array *)this_01.m_Index)->vector[0].alpha,
                       (pIVar12->klass->vtable).get_raycastTarget.methodPtr);
            pIVar12 = (this->fields).thrustersColorImage2;
            if (((CancellationTokenSource *)
                 ((ThrustersColorAlphaKey__Array *)this_01.m_Index)->max_length <
                 (CancellationTokenSource *)0x2) || (pTVar11->max_length < 2))
            goto code_?;
            if (pIVar12 != (Image *)0x0) {
              (*(code *)(pIVar12->klass->vtable).set_color.method)
                        (pIVar12,pTVar11->vector[1].color.r,pTVar11->vector[1].color.g,
                         pTVar11->vector[1].color.b,
                         ((ThrustersColorAlphaKey__Array *)this_01.m_Index)->vector[1].alpha,
                         (pIVar12->klass->vtable).get_raycastTarget.methodPtr);
              pIVar12 = (this->fields).thrustersColorImage3;
              if (((CancellationTokenSource *)
                   ((ThrustersColorAlphaKey__Array *)this_01.m_Index)->max_length <
                   (CancellationTokenSource *)0x3) || (pTVar11->max_length < 3))
              goto code_?;
              if (pIVar12 != (Image *)0x0) {
                (*(code *)(pIVar12->klass->vtable).set_color.method)
                          (pIVar12,pTVar11->vector[2].color.r,pTVar11->vector[2].color.g,
                           pTVar11->vector[2].color.b,
                           (String *)
                           ((ThrustersColorAlphaKey__Array *)this_01.m_Index)->vector[2].alpha,
                           (pIVar12->klass->vtable).get_raycastTarget.methodPtr);
                pIVar12 = (this->fields).thrustersColorImage4;
                if (((CancellationTokenSource *)
                     ((ThrustersColorAlphaKey__Array *)this_01.m_Index)->max_length <
                     (CancellationTokenSource *)0x4) || (pTVar11->max_length < 4))
                goto code_?;
                if (pIVar12 != (Image *)0x0) {
                  (*(code *)(pIVar12->klass->vtable).set_color.method)
                            (pIVar12,pTVar11->vector[3].color.r,pTVar11->vector[3].color.g,
                             pTVar11->vector[3].color.b,
                             ((ThrustersColorAlphaKey__Array *)this_01.m_Index)->vector[3].alpha,
                             (pIVar12->klass->vtable).get_raycastTarget.methodPtr);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?(uVar3);
  pIVar7 = extraout_ECX;
code_?:
  func_?(this_01.m_Index,pIVar7);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings_OnColorEdited
               (HoverCraftSettings *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  switch((this->fields).editingThrusterColor) {
  case 0:
    x = (this->fields).thrustersColorImage1;
    break;
  case 1:
    x = (this->fields).thrustersColorImage2;
    break;
  case 2:
    x = (this->fields).thrustersColorImage3;
    break;
  case 3:
    x = (this->fields).thrustersColorImage4;
    break;
  default:
    x = (Image *)0x0;
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 != 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  pSVar5 = (this->fields).thrustersColorR;
  if (pSVar5 != (SettingsSlider *)0x0) {
    fVar6 = SettingsSlider::SettingsSlider_get_Value(pSVar5,(MethodInfo *)0x0);
    pSVar5 = (this->fields).thrustersColorG;
    if (pSVar5 != (SettingsSlider *)0x0) {
      fVar7 = SettingsSlider::SettingsSlider_get_Value(pSVar5,(MethodInfo *)0x0);
      pSVar5 = (this->fields).thrustersColorB;
      if (pSVar5 != (SettingsSlider *)0x0) {
        fVar8 = SettingsSlider::SettingsSlider_get_Value(pSVar5,(MethodInfo *)0x0);
        pSVar5 = (this->fields).thrustersColorAlpha;
        if ((pSVar5 != (SettingsSlider *)0x0) &&
           (method_00 = (MethodInfo *)
                        SettingsSlider::SettingsSlider_get_Value(pSVar5,(MethodInfo *)0x0),
           x != (Image *)0x0)) {
          (*(code *)(x->klass->vtable).set_color.method)();
          thrustersColor =
               WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
               ThrustersColorSerializer_Deserialize
                         ((this->fields)._.bluePrintData,(MethodInfo *)0x0);
          pTVar9 = thrustersColor.alphas;
          pTVar10 = thrustersColor.colors;
          uVar11 = (this->fields).editingThrusterColor;
          pSVar5 = (this->fields).thrustersColorAlpha;
          if (pSVar5 != (SettingsSlider *)0x0) {
            fVar12 = SettingsSlider::SettingsSlider_get_Value(pSVar5,(MethodInfo *)0x0);
            uVar13 = (this->fields).editingThrusterColor;
            if (pTVar9 != (ThrustersColorAlphaKey__Array *)0x0) {
              if ((uVar13 < pTVar9->max_length) &&
                 (fVar14 = pTVar9->vector[uVar13].time, uVar11 < pTVar9->max_length)) {
                pTVar9->vector[uVar11].alpha = fVar12;
                pTVar9->vector[uVar11].time = fVar14;
                uVar11 = (this->fields).editingThrusterColor;
                if (pTVar10 == (ThrustersColorColorKey__Array *)0x0) goto code_?;
                if ((uVar11 < pTVar10->max_length) &&
                   (fVar12 = pTVar10->vector[uVar11].time, uVar11 < pTVar10->max_length)) {
                  pTVar15 = pTVar10->vector + uVar11;
                  (pTVar15->color).r = fVar6;
                  (pTVar15->color).g = fVar7;
                  (pTVar15->color).b = fVar8;
                  pTVar15->time = fVar12;
                  this_02 = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
                            ThrustersColorSerializer_Serialize(thrustersColor,(MethodInfo *)0x0);
                  if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    pDVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              UInt32,System::Object]::
                              Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                          *)&stack0xffffffbc,
                                         (Dictionary_2_System_UInt32_System_Object_ *)this_02,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                                        );
                    uStack_1 = 1;
                    value = (pDVar16->_current).value;
                    while (pMStack_17 = 
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          , bVar4 = mscorlib.dll::System::Collections::Generic::
                                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::
                                    Object]::
                                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                                *)&stack0xffffffa0,
                                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                              ), bVar4 != 0) {
                      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                          ((MethodInfo *)0x0);
                      method_00 = (MethodInfo *)(this->fields)._.vehicleWoID;
                      if (pMStack_17 != (MethodInfo *)0x0) {
                        pMVar18 = (MethodInfo *)0x0;
                        if ((String__Class *)pMStack_17->methodPointer == TypeInfo__System__String)
                        {
                          pMVar18 = pMStack_17;
                        }
                        pMStack_17 = pMVar18;
                        if (pMVar18 == (MethodInfo *)0x0) goto code_?;
                      }
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      keyPath = mscorlib.dll::System::String::String_Concat_3
                                          (StringLiteral_BlueprintData_,(String *)pMStack_17,
                                           (MethodInfo *)0x0);
                      if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                      pOVar19 = (Object *)&UNK_?;
                      MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                                (this_03,(int32_t)method_00,keyPath,value,(MethodInfo *)0x0);
                      value = pOVar19;
                    }
                    uStack_1 = 0xffffffff;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              ((Object *)&stack0xffffffa0,
                               (ExceptionArgument__Enum)
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                               ,method_00);
                    uStack_1 = 0xffffffff;
                    pMVar20 = (this->fields)._.vehicleBase;
                    if (pMVar20 != (MVVehicleBase *)0x0) {
                      (*(code *)(pMVar20->klass->vtable).OnDataUpdate.method)();
                      (this->fields).editingThrusterColor = -1;
                      if ((
                          TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                          ->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      this_00 = (this->fields)._.canvas;
                      if (this_00 != (RectTransform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_set_sizeDelta
                                  (this_00,TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                                           ->static_fields->NormalEditingCanvasSize,
                                   (MethodInfo *)0x0);
                        this_01 = (this->fields).colorPicker;
                        if (this_01 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (this_01,0,(MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                    }
                  }
                  goto code_?;
                }
              }
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  *(byte *)(unaff_EBX + 0x10) = *(byte *)(unaff_EBX + 0x10) | 0x44;
  *(byte *)(unaff_EBX + 0x10) = *(byte *)(unaff_EBX + 0x10) | 0x49;
  *(byte *)(unaff_EBX + 0x10) = *(byte *)(unaff_EBX + 0x10) | 0x4e;
  *(byte *)(unaff_EBX + 0x10) = *(byte *)(unaff_EBX + 0x10) | 0xcc;
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnColorPressed(Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings_OnColorPressed
               (HoverCraftSettings *this,int32_t pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                   );
    func_?(&StringLiteral_alpha);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_colorG);
    cRam_? = '\x01';
  }
  TVar1 = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
          ThrustersColorSerializer_Deserialize((this->fields)._.bluePrintData,(MethodInfo *)0x0);
  pTVar2 = TVar1.colors;
  if (pTVar2 != (ThrustersColorColorKey__Array *)0x0) {
    if (pTVar2->max_length <= (uint)pos) goto code_?;
    uVar3._0_4_ = pTVar2->vector[pos].color.r;
    uVar3._4_4_ = pTVar2->vector[pos].color.g;
    value = pTVar2->vector[pos].color.b;
    if (TVar1.alphas != (ThrustersColorAlphaKey__Array *)0x0) {
      if ((TVar1.alphas)->max_length <= (uint)pos) goto code_?;
      pSVar4 = (this->fields).thrustersColorR;
      if (pSVar4 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar4,StringLiteral_colorR,(float)(undefined4)uVar3,0.0,1.0,(MethodInfo *)0x0);
        pSVar4 = (this->fields).thrustersColorG;
        if (pSVar4 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar4,StringLiteral_colorG,(float)((ulonglong)uVar3 >> 0x20),0.0,1.0,
                     (MethodInfo *)0x0);
          pSVar4 = (this->fields).thrustersColorB;
          if (pSVar4 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar4,StringLiteral_colorB,value,0.0,1.0,(MethodInfo *)0x0);
            pSVar4 = (this->fields).thrustersColorAlpha;
            if (pSVar4 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar4,StringLiteral_alpha,0.0,0.0,1.0,(MethodInfo *)0x0);
              pIVar5 = (this->fields).colorPickerPreview;
              if (pIVar5 != (Image *)0x0) {
                (*(code *)(pIVar5->klass->vtable).set_color.method)();
                (this->fields).editingThrusterColor = pos;
                if ((
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                    ->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                this_00 = (this->fields)._.canvas;
                if (this_00 != (RectTransform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_sizeDelta
                            (this_00,TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                                     ->static_fields->ColorEditingCanvasSize,(MethodInfo *)0x0);
                  this_01 = (this->fields).colorPicker;
                  if (this_01 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_01,1,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings_OnSettingChanged
               (HoverCraftSettings *this,String *key,Object *value,MethodInfo *method)

{
  a = key;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                   );
    func_?(&StringLiteral_alpha);
    func_?(&StringLiteral_randomLeaveVehicle);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_speed);
    func_?(&StringLiteral_jumpHeight);
    func_?(&StringLiteral_thrustersOn);
    func_?(&StringLiteral_thrustersSize);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_colorG);
    func_?(&StringLiteral_turningSpeed);
    func_?(&StringLiteral_overrideHealth);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_overrideHealth;
  if (bVar1 != 0) {
    return;
  }
  key = (String *)0x0;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_BlueprintData_);
    cRam_? = '\x01';
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
  bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pSVar2 = StringLiteral_randomLeaveVehicle;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToSingle_1
                (value,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      goto code_?;
    }
    pSVar2 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                       (StringLiteral_speed,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pSVar2 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                         (StringLiteral_jumpHeight,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
      key = a;
      if (bVar1 == 0) {
        pSVar2 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                           (StringLiteral_turningSpeed,(MethodInfo *)0x0);
        bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pSVar2 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                             (StringLiteral_thrustersSize,(MethodInfo *)0x0);
          bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            pSVar2 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                               (StringLiteral_thrustersOn,(MethodInfo *)0x0);
            bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (a,StringLiteral_colorR,(MethodInfo *)0x0);
              if ((((bVar1 != 0) ||
                   (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                      (a,StringLiteral_colorG,(MethodInfo *)0x0), bVar1 != 0)) ||
                  (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                     (a,StringLiteral_colorB,(MethodInfo *)0x0), bVar1 != 0)) ||
                 (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                    (a,StringLiteral_alpha,(MethodInfo *)0x0), bVar1 != 0)) {
                if ((this->fields).editingThrusterColor < 0) {
                  return;
                }
                if (3 < (uint)(this->fields).editingThrusterColor) {
                  return;
                }
                pSVar4 = (this->fields).thrustersColorR;
                pIVar5 = (this->fields).colorPickerPreview;
                if (pSVar4 != (SettingsSlider *)0x0) {
                  SettingsSlider::SettingsSlider_get_Value(pSVar4,(MethodInfo *)0x0);
                  pSVar4 = (this->fields).thrustersColorG;
                  if (pSVar4 != (SettingsSlider *)0x0) {
                    SettingsSlider::SettingsSlider_get_Value(pSVar4,(MethodInfo *)0x0);
                    pSVar4 = (this->fields).thrustersColorB;
                    if (pSVar4 != (SettingsSlider *)0x0) {
                      fStack6 =
                           SettingsSlider::SettingsSlider_get_Value(pSVar4,(MethodInfo *)0x0);
                      pSVar4 = (this->fields).thrustersColorAlpha;
                      if ((pSVar4 != (SettingsSlider *)0x0) &&
                         (fStack7 =
                               SettingsSlider::SettingsSlider_get_Value(pSVar4,(MethodInfo *)0x0),
                         pIVar5 != (Image *)0x0)) {
                        func_?();
                        return;
                      }
                    }
                  }
                }
                goto code_?;
              }
              if ((
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                  ->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar1 = VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_IsKey
                                (a,(MethodInfo *)0x0);
              if (bVar1 == 0) {
                this_00 = (this->fields)._.settingsBase;
                if (this_00 == (SettingsBase *)0x0) goto code_?;
                SettingsBase::SettingsBase_OnSettingChanged(this_00,a,value,(MethodInfo *)0x0);
              }
              else {
                this_01 = (this->fields)._.vehicleEnergyForVehicleSettings;
                if (this_01 == (VehicleEnergyForVehicleSettings *)0x0) goto code_?;
                value = VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_ValueToSend
                                  (this_01,a,value,(MethodInfo *)0x0);
              }
            }
            else {
              key = (String *)0x1000000;
            }
          }
          else {
            if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?();
            }
            pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            mscorlib.dll::System::Convert::Convert_ToSingle_1
                      (value,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
            value = (Object *)func_?();
            key = (String *)0x1000000;
          }
          goto code_?;
        }
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToSingle_1
                  (value,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToSingle_1
                  (value,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
      }
      goto code_?;
    }
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
    key = (String *)&UNK_?;
    value = (Object *)func_?();
  }
  else {
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = (Convert__Class *)
               mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      provider = TypeInfo__System__Convert;
      func_?();
    }
    mscorlib.dll::System::Convert::Convert_ToSingle_1
              (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
code_?:
    value = (Object *)func_?();
  }
code_?:
  this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
              (this_02,(this->fields)._.vehicleWoID,a,value,(MethodInfo *)0x0);
    if (key._3_1_ == '\0') {
      return;
    }
    pMVar8 = (this->fields)._.vehicleBase;
    if (pMVar8 != (MVVehicleBase *)0x0) {
      (*(code *)(pMVar8->klass->vtable).OnDataUpdate.method)();
      return;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* HoverCraftSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                   );
    cRam_? = '\x01';
  }
  iVar1 = _UNK_?;
  iVar2 = _UNK_?;
  iVar3 = _UNK_?;
  iVar4 = _UNK_?;
  pHVar5 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings->
           static_fields;
  (pHVar5->NormalEditingCanvasSize).x = 690.0;
  (pHVar5->NormalEditingCanvasSize).y = 950.0;
  pHVar5 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings->
           static_fields;
  (pHVar5->ColorEditingCanvasSize).x = 800.0;
  (pHVar5->ColorEditingCanvasSize).y = 700.0;
  pHVar5 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings->
           static_fields;
  (pHVar5->VehicleEnergyForVehicleSettingsConfig).storageMinValue = iVar4;
  (pHVar5->VehicleEnergyForVehicleSettingsConfig).storageMaxValue = iVar3;
  (pHVar5->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue = iVar2;
  (pHVar5->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue = iVar1;
  return;
}


/* HoverCraftSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings__ctor(HoverCraftSettings *this,MethodInfo *method)

{
  (this->fields).editingThrusterColor = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Vector2 get_DefaultCanvasSize() */

Vector2 Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
        HoverCraftSettings::HoverCraftSettings_get_DefaultCanvasSize
                  (HoverCraftSettings *this,MethodInfo *method)

{
  VVar1.y = 950.0;
  VVar1.x = 690.0;
  return VVar1;
}

