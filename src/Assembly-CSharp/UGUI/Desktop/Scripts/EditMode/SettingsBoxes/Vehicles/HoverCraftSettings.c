
/* Void BlueprintDataRetrieved() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings_BlueprintDataRetrieved
               (HoverCraftSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HoverCraftVisualization);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyConsumption);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_randomLeaveVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyUse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyStorage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_jumpHeight);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_turningSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_overrideHealth);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._.bluePrintData;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar1,(Object *)StringLiteral_overrideHealth,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      pDVar3 = (this->fields)._.bluePrintData;
      uStackX_8 = 0x43160000;
      pOVar4 = (Object *)FUN_?(uRam_?,&uStackX_8);
      if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar3,(Object *)StringLiteral_overrideHealth,pOVar4,(InsertionBehavior__Enum)in_R9
                 ,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ->klass->rgctx_data[0x22].method);
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields)._.bluePrintData;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar1,(Object *)StringLiteral_randomLeaveVehicle,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        pDVar3 = (this->fields)._.bluePrintData;
        uStackX_8 = 0;
        pOVar4 = (Object *)FUN_?(uRam_?,&uStackX_8);
        if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar3,(Object *)StringLiteral_randomLeaveVehicle,pOVar4,
                   (InsertionBehavior__Enum)in_R9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._.bluePrintData;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar1,(Object *)StringLiteral_speed,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (iVar2 < 0) {
          pDVar3 = (this->fields)._.bluePrintData;
          uStackX_8 = 8;
          pOVar4 = (Object *)FUN_?(uRam_?,&uStackX_8);
          if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar3,(Object *)StringLiteral_speed,pOVar4,(InsertionBehavior__Enum)in_R9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)(this->fields)._.bluePrintData;
        if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                            (pDVar1,(Object *)StringLiteral_jumpHeight,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             ->klass->rgctx_data[0x21].method);
          if (iVar2 < 0) {
            pDVar3 = (this->fields)._.bluePrintData;
            uStackX_8 = 0x40800000;
            pOVar4 = (Object *)FUN_?(uRam_?,&uStackX_8);
            if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
            in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (pDVar3,(Object *)StringLiteral_jumpHeight,pOVar4,
                       (InsertionBehavior__Enum)in_R9,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)(this->fields)._.bluePrintData;
          if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)0x0) {
            iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              (pDVar1,(Object *)StringLiteral_thrustersOn,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            if (iVar2 < 0) {
              pDVar3 = (this->fields)._.bluePrintData;
              uStackX_8 = CONCAT31(uStackX_8._1_3_,1);
              pOVar4 = (Object *)FUN_?(lRam_?,&uStackX_8);
              if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        (pDVar3,(Object *)StringLiteral_thrustersOn,pOVar4,
                         (InsertionBehavior__Enum)in_R9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
            }
            pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)(this->fields)._.bluePrintData;
            if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                           *)0x0) {
              iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                (pDVar1,(Object *)StringLiteral_turningSpeed,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 ->klass->rgctx_data[0x21].method);
              if (iVar2 < 0) {
                pDVar3 = (this->fields)._.bluePrintData;
                uStackX_8 = 0x4059999a;
                pOVar4 = (Object *)FUN_?(uRam_?,&uStackX_8);
                if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                goto code_?;
                in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          (pDVar3,(Object *)StringLiteral_turningSpeed,pOVar4,
                           (InsertionBehavior__Enum)in_R9,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
              }
              pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)(this->fields)._.bluePrintData;
              if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                  (pDVar1,(Object *)StringLiteral_thrustersSize,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                   ->klass->rgctx_data[0x21].method);
                if (iVar2 < 0) {
                  pDVar3 = (this->fields)._.bluePrintData;
                  uStackX_8 = 0x3f5f3b64;
                  pOVar4 = (Object *)FUN_?(uRam_?,&uStackX_8);
                  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                  goto code_?;
                  in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            (pDVar3,(Object *)StringLiteral_thrustersSize,pOVar4,
                             (InsertionBehavior__Enum)in_R9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                }
                pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)(this->fields)._.bluePrintData;
                if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                               *)0x0) {
                  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                    (pDVar1,(Object *)StringLiteral_thrustersColor,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                     ->klass->rgctx_data[0x21].method);
                  if (iVar2 < 0) {
                    pDVar3 = (this->fields)._.bluePrintData;
                    if (*(int *)&(TypeInfo__HoverCraftVisualization->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__HoverCraftVisualization);
                    }
                    TStack_5.colors =
                         (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).
                         colors;
                    TStack_5.alphas =
                         (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).
                         alphas;
                    toAdd = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
                            ThrustersColorSerializer_Serialize(&TStack_5,(MethodInfo *)0x0);
                    WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
                    ThrustersColorSerializer_FillInData(pDVar3,toAdd,(MethodInfo *)0x0);
                  }
                  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)(this->fields)._.bluePrintData;
                  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                 *)0x0) {
                    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                      (pDVar1,(Object *)StringLiteral_vehicleEnergyUse,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                       ->klass->rgctx_data[0x21].method);
                    uVar6 = uStackX_8;
                    lVar7 = lRam_?;
                    if (iVar2 < 0) {
                      pDVar3 = (this->fields)._.bluePrintData;
                      uStackX_8 = uStackX_8 & 0xffffff00;
                      if (*(int *)(lRam_? + 0x28) < 0) {
                        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                          pOVar4 = (Object *)FUN_?(lRam_?);
                          FUN_?(pOVar4 + 1,&uStackX_8,
                                        (longlong)*(int *)(lVar7 + 0xf8) + -0x10);
                          if (iRam_? != 0) {
                            in_R9 = 0xADDR;
                            uVar6 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
                            uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                            do {
                              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                              LOCK();
                              bVar11 = uVar9 == *puVar10;
                              if (bVar11) {
                                *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar11);
                          }
                        }
                        else {
                          pOVar4 = (Object *)0x0;
                        }
                      }
                      else {
                        pOVar4 = (Object *)(CONCAT44(uStackX_c,uVar6) & 0xffffffffffffff00);
                      }
                      if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                      goto code_?;
                      in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__TryInsert
                                (pDVar3,(Object *)StringLiteral_vehicleEnergyUse,pOVar4,
                                 (InsertionBehavior__Enum)in_R9,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                 ->klass->rgctx_data[0x22].method);
                    }
                    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)(this->fields)._.bluePrintData;
                    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                   *)0x0) {
                      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]
                              ::
                              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                        (pDVar1,(Object *)StringLiteral_vehicleEnergyStorage,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                         ->klass->rgctx_data[0x21].method);
                      if (iVar2 < 0) {
                        pDVar3 = (this->fields)._.bluePrintData;
                        uStackX_8 = 0x37;
                        pOVar4 = (Object *)FUN_?(uRam_?,&uStackX_8);
                        if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                        goto code_?;
                        in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__TryInsert
                                  (pDVar3,(Object *)StringLiteral_vehicleEnergyStorage,pOVar4,
                                   (InsertionBehavior__Enum)in_R9,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                   ->klass->rgctx_data[0x22].method);
                      }
                      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                *)(this->fields)._.bluePrintData;
                      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                     *)0x0) {
                        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,UnityEngine::UIElements::
                                StyleComplexSelector+PseudoStateData]::
                                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                          (pDVar1,(Object *)StringLiteral_vehicleEnergyConsumption,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                           ->klass->rgctx_data[0x21].method);
                        if (iVar2 < 0) {
                          pDVar3 = (this->fields)._.bluePrintData;
                          uStackX_8 = 6;
                          pOVar4 = (Object *)FUN_?(uRam_?,&uStackX_8);
                          if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                          goto code_?;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::
                          Dictionary_2_System_Object_System_Object__TryInsert
                                    (pDVar3,(Object *)StringLiteral_vehicleEnergyConsumption,pOVar4,
                                     (InsertionBehavior__Enum)
                                     CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                     ->klass->rgctx_data[0x22].method);
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
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Dictionary`2[System.Object,System.Object] FillDefaultBlueprintData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings::
HoverCraftSettings_FillDefaultBlueprintData(HoverCraftSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HoverCraftVisualization);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyConsumption);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_randomLeaveVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyUse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyStorage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_jumpHeight);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_turningSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_overrideHealth);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStackX_18 = 0x43160000;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_18);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
    return pDVar3;
  }
  uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_overrideHealth,pOVar1,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_18 = 0;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_18);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_randomLeaveVehicle,pOVar1,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_18 = 8;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_18);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_speed,
             pOVar1,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_18 = 0x40800000;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_18);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_jumpHeight
             ,pOVar1,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_18 = CONCAT31(uStackX_18._1_3_,1);
  pOVar1 = (Object *)FUN_?(lRam_?,&uStackX_18);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_thrustersOn,pOVar1,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_18 = 0x4059999a;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_18);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_turningSpeed,pOVar1,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_18 = 0x3f5f3b64;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_18);
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_thrustersSize,pOVar1,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_18;
  lVar7 = lRam_?;
  uStackX_18 = uStackX_18 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar1 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar1 + 1,&uStackX_18,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
    else {
      pOVar1 = (Object *)0x0;
    }
  }
  else {
    pOVar1 = (Object *)(CONCAT44(uStackX_1c,uVar6) & 0xffffffffffffff00);
  }
  uVar4 = CONCAT71((int7)(uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_vehicleEnergyUse,pOVar1,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_18 = 0x37;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_18);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_vehicleEnergyStorage,pOVar1,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_18 = 6;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_18);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_vehicleEnergyConsumption,pOVar1,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__HoverCraftVisualization->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__HoverCraftVisualization);
  }
  TStack_12.colors =
       (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).colors;
  TStack_12.alphas =
       (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).alphas;
  pDVar3 = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
           ThrustersColorSerializer_Serialize(&TStack_12,(MethodInfo *)0x0);
  WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
  ThrustersColorSerializer_FillInData
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pDVar3,(MethodInfo *)0x0);
  return (Dictionary_2_System_Object_System_Object_ *)this_00;
}


/* Color GetColorFromThrustersColor(ThrustersColor, Int32) */

Color * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
        HoverCraftSettings::HoverCraftSettings_GetColorFromThrustersColor
                  (Color *__return_storage_ptr__,ThrustersColor *thrustersColor,int32_t pos,
                  MethodInfo *method)

{
  pTVar1 = thrustersColor->alphas;
  if (pTVar1 != (ThrustersColorAlphaKey__Array *)0x0) {
    if ((uint)pos < (uint)pTVar1->max_length) {
      pTVar2 = thrustersColor->colors;
      if (pTVar2 == (ThrustersColorColorKey__Array *)0x0) goto code_?;
      if ((uint)pos < (uint)pTVar2->max_length) {
        __return_storage_ptr__->a = pTVar1->vector[pos].alpha;
        pTVar3 = pTVar2->vector + pos;
        fVar4 = (pTVar3->color).g;
        fVar5 = (pTVar3->color).b;
        __return_storage_ptr__->r = (pTVar3->color).r;
        __return_storage_ptr__->b = fVar5;
        __return_storage_ptr__->g = fVar4;
        return __return_storage_ptr__;
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    pCVar7 = (Color *)(*pcVar6)();
    return pCVar7;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  pCVar7 = (Color *)(*pcVar6)();
  return pCVar7;
}


/* VehicleEnergyForVehicleSettingsConfig GetVehicleEnergySettingsConfig() */

VehicleEnergyForVehicleSettingsConfig *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings::
HoverCraftSettings_GetVehicleEnergySettingsConfig
          (VehicleEnergyForVehicleSettingsConfig *__return_storage_ptr__,HoverCraftSettings *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
               ->_1).field_0x1c == 0) {
    FUN_?(
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HoverCraftMotor);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_randomLeaveVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_jumpHeight);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_turningSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_overrideHealth);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_overrideHealth;
  pSVar2 = (this->fields).healthSlider;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
  pDVar3 = (this->fields)._.bluePrintData;
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar3,(Object *)StringLiteral_overrideHealth,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if ((pSVar2 != (SettingsSlider *)0x0) && (pOVar4 != (Object *)0x0)) {
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SettingsSlider::SettingsSlider_Initialize
                (pSVar2,pSVar1,*(float *)&pOVar4[1].klass,_UNK_?,_UNK_?,
                 (MethodInfo *)0x0);
      pSVar1 = StringLiteral_overrideHealth;
      pSVar6 = (this->fields).healthInputField;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_BlueprintData_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      pDVar3 = (this->fields)._.bluePrintData;
      if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar3,(Object *)StringLiteral_overrideHealth,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if ((pSVar6 != (SettingsInputFieldSlider *)0x0) && (pOVar4 != (Object *)0x0)) {
          if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar4,lRam_?);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                    (pSVar6,pSVar1,*(float *)&pOVar4[1].klass,(MethodInfo *)0x0);
          pSVar1 = StringLiteral_randomLeaveVehicle;
          pSVar2 = (this->fields).randomLeaveVehicleSlider;
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_BlueprintData_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pSVar1 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
          pDVar3 = (this->fields)._.bluePrintData;
          if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (pDVar3,(Object *)StringLiteral_randomLeaveVehicle,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            fVar7 = _UNK_?;
            if ((pSVar2 != (SettingsSlider *)0x0) && (pOVar4 != (Object *)0x0)) {
              if ((pOVar4->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar4,lRam_?);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar2,pSVar1,*(float *)&pOVar4[1].klass,0.0,_UNK_?,
                         (MethodInfo *)0x0);
              pSVar1 = StringLiteral_randomLeaveVehicle;
              pSVar6 = (this->fields).randomLeaveVehicleInputField;
              if (cRam_? == '\0') {
                FUN_?(&StringLiteral_BlueprintData_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pSVar1 = mscorlib.dll::System::String::String_Concat_4
                                  (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
              pDVar3 = (this->fields)._.bluePrintData;
              if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (pDVar3,(Object *)StringLiteral_randomLeaveVehicle,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if ((pSVar6 != (SettingsInputFieldSlider *)0x0) && (pOVar4 != (Object *)0x0)) {
                  if ((pOVar4->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar4,lRam_?);
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                            (pSVar6,pSVar1,*(float *)&pOVar4[1].klass,(MethodInfo *)0x0);
                  pSVar1 = StringLiteral_speed;
                  pSVar2 = (this->fields).speedSlider;
                  if (cRam_? == '\0') {
                    FUN_?(&StringLiteral_BlueprintData_);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                                      (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
                  pDVar3 = (this->fields)._.bluePrintData;
                  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__get_Item
                                        (pDVar3,(Object *)StringLiteral_speed,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
                    if (*(int *)&(TypeInfo__HoverCraftMotor->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pLVar8 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
                    if (((pLVar8 != (List_1_System_Single_ *)0x0) &&
                        (pSVar2 != (SettingsSlider *)0x0)) && (pOVar4 != (Object *)0x0)) {
                      if ((pOVar4->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar4,lRam_?);
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      SettingsSlider::SettingsSlider_Initialize_1
                                (pSVar2,pSVar1,*(int32_t *)&pOVar4[1].klass,1,
                                 (pLVar8->fields)._size,(MethodInfo *)0x0);
                      pSVar1 = StringLiteral_speed;
                      pSVar6 = (this->fields).speedInputField;
                      if (cRam_? == '\0') {
                        FUN_?(&StringLiteral_BlueprintData_);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                                          (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
                      pDVar3 = (this->fields)._.bluePrintData;
                      if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__get_Item
                                            (pDVar3,(Object *)StringLiteral_speed,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                            );
                        if ((pSVar6 != (SettingsInputFieldSlider *)0x0) &&
                           (pOVar4 != (Object *)0x0)) {
                          if ((pOVar4->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar4,lRam_?);
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                                    (pSVar6,pSVar1,(float)*(int *)&pOVar4[1].klass,
                                     (MethodInfo *)0x0);
                          pSVar1 = StringLiteral_jumpHeight;
                          pSVar2 = (this->fields).jumpHeightSlider;
                          if (cRam_? == '\0') {
                            FUN_?(&StringLiteral_BlueprintData_);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pSVar1 = mscorlib.dll::System::String::String_Concat_4
                                              (StringLiteral_BlueprintData_,pSVar1,
                                               (MethodInfo *)0x0);
                          pDVar3 = (this->fields)._.bluePrintData;
                          if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                            pOVar4 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Object,System::Object]::
                                      Dictionary_2_System_Object_System_Object__get_Item
                                                (pDVar3,(Object *)StringLiteral_jumpHeight,
                                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                );
                            minValue = _UNK_?;
                            if ((pSVar2 != (SettingsSlider *)0x0) && (pOVar4 != (Object *)0x0)) {
                              if ((pOVar4->klass->_0).element_class !=
                                  *(Il2CppClass **)(lRam_? + 0x40)) {
                                FUN_?(pOVar4,lRam_?);
                                pcVar5 = (code *)swi(3);
                                (*pcVar5)();
                                return;
                              }
                              SettingsSlider::SettingsSlider_Initialize
                                        (pSVar2,pSVar1,*(float *)&pOVar4[1].klass,0.0,
                                         _UNK_?,(MethodInfo *)0x0);
                              pSVar1 = StringLiteral_jumpHeight;
                              pSVar6 = (this->fields).jumpHeightInputField;
                              if (cRam_? == '\0') {
                                FUN_?(&StringLiteral_BlueprintData_);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pSVar1 = mscorlib.dll::System::String::String_Concat_4
                                                  (StringLiteral_BlueprintData_,pSVar1,
                                                   (MethodInfo *)0x0);
                              pDVar3 = (this->fields)._.bluePrintData;
                              if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                pOVar4 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Object,System::Object]::
                                          Dictionary_2_System_Object_System_Object__get_Item
                                                    (pDVar3,(Object *)StringLiteral_jumpHeight,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                if ((pSVar6 != (SettingsInputFieldSlider *)0x0) &&
                                   (pOVar4 != (Object *)0x0)) {
                                  if ((pOVar4->klass->_0).element_class !=
                                      *(Il2CppClass **)(lRam_? + 0x40)) {
                                    FUN_?(pOVar4,lRam_?);
                                    pcVar5 = (code *)swi(3);
                                    (*pcVar5)();
                                    return;
                                  }
                                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                                            (pSVar6,pSVar1,*(float *)&pOVar4[1].klass,
                                             (MethodInfo *)0x0);
                                  pSVar1 = StringLiteral_thrustersOn;
                                  this_00 = (this->fields).enginesOnToggle;
                                  if (cRam_? == '\0') {
                                    FUN_?(&StringLiteral_BlueprintData_);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                                                      (StringLiteral_BlueprintData_,pSVar1,
                                                       (MethodInfo *)0x0);
                                  pDVar3 = (this->fields)._.bluePrintData;
                                  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                    pOVar4 = mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Object,System::Object]::
                                              Dictionary_2_System_Object_System_Object__get_Item
                                                        (pDVar3,(Object *)StringLiteral_thrustersOn,
                                                                                                                  
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                    if ((this_00 != (SettingsToggle *)0x0) &&
                                       (pOVar4 != (Object *)0x0)) {
                                      if ((pOVar4->klass->_0).element_class !=
                                          *(Il2CppClass **)(lRam_? + 0x40)) {
                                        FUN_?(pOVar4,lRam_?);
                                        pcVar5 = (code *)swi(3);
                                        (*pcVar5)();
                                        return;
                                      }
                                      SettingsToggle::SettingsToggle_Initialize
                                                (this_00,pSVar1,*(bool *)&pOVar4[1].klass,
                                                 (MethodInfo *)0x0);
                                      pSVar1 = StringLiteral_turningSpeed;
                                      pSVar2 = (this->fields).turningSpeedSlider;
                                      if (cRam_? == '\0') {
                                        FUN_?(&StringLiteral_BlueprintData_);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                                                          (StringLiteral_BlueprintData_,pSVar1,
                                                           (MethodInfo *)0x0);
                                      pDVar3 = (this->fields)._.bluePrintData;
                                      if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0
                                         ) {
                                        pOVar4 = mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar3,(Object *)
                                                                    StringLiteral_turningSpeed,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                        fVar9 = _UNK_?;
                                        if ((pSVar2 != (SettingsSlider *)0x0) &&
                                           (pOVar4 != (Object *)0x0)) {
                                          if ((pOVar4->klass->_0).element_class !=
                                              *(Il2CppClass **)(lRam_? + 0x40)) {
                                            FUN_?(pOVar4,lRam_?);
                                            pcVar5 = (code *)swi(3);
                                            (*pcVar5)();
                                            return;
                                          }
                                          SettingsSlider::SettingsSlider_Initialize
                                                    (pSVar2,pSVar1,
                                                     *(float *)&pOVar4[1].klass * _UNK_?,
                                                     _UNK_?,_UNK_?,(MethodInfo *)0x0
                                                    );
                                          pSVar1 = StringLiteral_turningSpeed;
                                          pSVar6 = (this->fields).turningSpeedInputField;
                                          if (cRam_? == '\0') {
                                            FUN_?(&StringLiteral_BlueprintData_);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pSVar1 = mscorlib.dll::System::String::String_Concat_4
                                                              (StringLiteral_BlueprintData_,pSVar1,
                                                               (MethodInfo *)0x0);
                                          pDVar3 = (this->fields)._.bluePrintData;
                                          if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *
                                                        )0x0) {
                                            pOVar4 = mscorlib.dll::System::Collections::Generic::
                                                      Dictionary`2[System::Object,System::Object]::
                                                                                                            
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar3,(Object *)
                                                                    StringLiteral_turningSpeed,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                            if ((pSVar6 != (SettingsInputFieldSlider *)0x0) &&
                                               (pOVar4 != (Object *)0x0)) {
                                              if ((pOVar4->klass->_0).element_class !=
                                                  *(Il2CppClass **)(lRam_? + 0x40)) {
                                                FUN_?(pOVar4,lRam_?);
                                                pcVar5 = (code *)swi(3);
                                                (*pcVar5)();
                                                return;
                                              }
                                              SettingsInputFieldSlider::
                                              SettingsInputFieldSlider_Initialize_2
                                                        (pSVar6,pSVar1,
                                                         *(float *)&pOVar4[1].klass * fVar9,
                                                         (MethodInfo *)0x0);
                                              pSVar1 = StringLiteral_thrustersSize;
                                              pSVar2 = (this->fields).thrustersSizeSlider;
                                              if (cRam_? == '\0') {
                                                FUN_?(&StringLiteral_BlueprintData_);
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              pSVar1 = mscorlib.dll::System::String::
                                                        String_Concat_4(StringLiteral_BlueprintData_
                                                                        ,pSVar1,(MethodInfo *)0x0);
                                              pDVar3 = (this->fields)._.bluePrintData;
                                              if (pDVar3 != (
                                                  Dictionary_2_System_Object_System_Object_ *)0x0) {
                                                pOVar4 = mscorlib.dll::System::Collections::Generic
                                                          ::Dictionary`2[System::Object,System::
                                                          Object]::
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar3,(Object *)
                                                                    StringLiteral_thrustersSize,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                if ((pSVar2 != (SettingsSlider *)0x0) &&
                                                   (pOVar4 != (Object *)0x0)) {
                                                  if ((pOVar4->klass->_0).element_class !=
                                                      *(Il2CppClass **)(lRam_? + 0x40)
                                                     ) {
                                                    FUN_?(pOVar4,lRam_?);
                                                    pcVar5 = (code *)swi(3);
                                                    (*pcVar5)();
                                                    return;
                                                  }
                                                  SettingsSlider::SettingsSlider_Initialize
                                                            (pSVar2,pSVar1,
                                                             *(float *)&pOVar4[1].klass * fVar7,
                                                             minValue,_UNK_?,
                                                             (MethodInfo *)0x0);
                                                  pSVar1 = StringLiteral_thrustersSize;
                                                  pSVar6 = (this->fields).thrustersSizeInputField;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&StringLiteral_BlueprintData_);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pSVar1 = mscorlib.dll::System::String::
                                                            String_Concat_4(
                                                  StringLiteral_BlueprintData_,pSVar1,
                                                  (MethodInfo *)0x0);
                                                  pDVar3 = (this->fields)._.bluePrintData;
                                                  if (pDVar3 != (
                                                  Dictionary_2_System_Object_System_Object_ *)0x0) {
                                                    pOVar4 = mscorlib.dll::System::Collections::
                                                              Generic::Dictionary`2[System::
                                                              Object,System::Object]::
                                                                                                                            
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar3,(Object *)
                                                                    StringLiteral_thrustersSize,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                  if ((pSVar6 != (SettingsInputFieldSlider *)0x0) &&
                                                     (pOVar4 != (Object *)0x0)) {
                                                    if ((pOVar4->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar4,lRam_?);
                                                      pcVar5 = (code *)swi(3);
                                                      (*pcVar5)();
                                                      return;
                                                    }
                                                    SettingsInputFieldSlider::
                                                    SettingsInputFieldSlider_Initialize_2
                                                              (pSVar6,pSVar1,
                                                               *(float *)&pOVar4[1].klass * fVar7,
                                                               (MethodInfo *)0x0);
                                                    pTVar10 = WorldObjectTypes::HoverCraft::Shared::
                                                              ThrustersColorSerializer::
                                                              ThrustersColorSerializer_Deserialize
                                                                        ((ThrustersColor *)
                                                                         &fStack_11,
                                                                         (this->fields)._.
                                                                         bluePrintData,
                                                                         (MethodInfo *)0x0);
                                                    pIVar12 = (this->fields).thrustersColorImage1;
                                                    pTVar13 = pTVar10->colors;
                                                    pTVar14 = pTVar10->alphas;
                                                    if (*(int *)&(
                                                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                                                  ->_1).field_0x1c == 0) {
                                                    FUN_?();
                                                  }
                                                  if (pTVar14 != (ThrustersColorAlphaKey__Array *)0x0
                                                     ) {
                                                    if ((int)pTVar14->max_length == 0) {
code_?:
                                                      FUN_?();
                                                      pcVar5 = (code *)swi(3);
                                                      (*pcVar5)();
                                                      return;
                                                    }
                                                    if (pTVar13 != (ThrustersColorColorKey__Array *)
                                                                  0x0) {
                                                      if ((int)pTVar13->max_length == 0)
                                                      goto code_?;
                                                      fVar7 = pTVar13->vector[0].color.b;
                                                      if (pIVar12 != (Image *)0x0) {
                                                        fStack_11 = pTVar13->vector[0].color.r;
                                                        fStack_15 = pTVar13->vector[0].color.g;
                                                        fStack_16 = fVar7;
                                                        fStack_17 = pTVar14->vector[0].alpha;
                                                        (*(pIVar12->klass->vtable).set_color.
                                                          methodPtr)(pIVar12,fVar7,
                                                                     (pIVar12->klass->vtable).
                                                                     set_color.method);
                                                        pIVar12 = (this->fields).thrustersColorImage2
                                                        ;
                                                        if (pTVar14 != (ThrustersColorAlphaKey__Array
                                                                       *)0x0) {
                                                          if ((uint)pTVar14->max_length < 2)
                                                          goto code_?;
                                                          if (pTVar13 != (
                                                  ThrustersColorColorKey__Array *)0x0) {
                                                    if ((uint)pTVar13->max_length < 2)
                                                    goto code_?;
                                                    fVar7 = pTVar13->vector[1].color.b;
                                                    if (pIVar12 != (Image *)0x0) {
                                                      fStack_11 = pTVar13->vector[1].color.r;
                                                      fStack_15 = pTVar13->vector[1].color.g;
                                                      fStack_16 = fVar7;
                                                      fStack_17 = pTVar14->vector[1].alpha;
                                                      (*(pIVar12->klass->vtable).set_color.methodPtr)
                                                                (pIVar12,fVar7,
                                                                 (pIVar12->klass->vtable).set_color.
                                                                 method);
                                                      pIVar12 = (this->fields).thrustersColorImage3;
                                                      if (((uint)pTVar14->max_length < 3) ||
                                                         ((uint)pTVar13->max_length < 3))
                                                      goto code_?;
                                                      fVar7 = pTVar13->vector[2].color.b;
                                                      if (pIVar12 != (Image *)0x0) {
                                                        fStack_11 = pTVar13->vector[2].color.r;
                                                        fStack_15 = pTVar13->vector[2].color.g;
                                                        fStack_16 = fVar7;
                                                        fStack_17 = pTVar14->vector[2].alpha;
                                                        (*(pIVar12->klass->vtable).set_color.
                                                          methodPtr)(pIVar12,fVar7,
                                                                     (pIVar12->klass->vtable).
                                                                     set_color.method);
                                                        pIVar12 = (this->fields).thrustersColorImage4
                                                        ;
                                                        if (((uint)pTVar14->max_length < 4) ||
                                                           ((uint)pTVar13->max_length < 4))
                                                        goto code_?;
                                                        fVar7 = pTVar13->vector[3].color.b;
                                                        if (pIVar12 != (Image *)0x0) {
                                                          fStack_11 = pTVar13->vector[3].color.r;
                                                          fStack_15 = pTVar13->vector[3].color.g;
                                                          fStack_16 = fVar7;
                                                          fStack_17 = pTVar14->vector[3].alpha;
                                                          (*(pIVar12->klass->vtable).set_color.
                                                            methodPtr)(pIVar12,fVar7,
                                                                       (pIVar12->klass->vtable).
                                                                       set_color.method);
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
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings_OnColorEdited
               (HoverCraftSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).editingThrusterColor;
  if (iVar1 == 0) {
    pIVar2 = (this->fields).thrustersColorImage1;
  }
  else if (iVar1 == 1) {
    pIVar2 = (this->fields).thrustersColorImage2;
  }
  else if (iVar1 == 2) {
    pIVar2 = (this->fields).thrustersColorImage3;
  }
  else if (iVar1 == 3) {
    pIVar2 = (this->fields).thrustersColorImage4;
  }
  else {
    pIVar2 = (Image *)0x0;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar2 != (Image *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pIVar2->fields)._._._._._._._ != (void *)0x0) {
      pSVar3 = (this->fields).thrustersColorR;
      if ((pSVar3 != (SettingsSlider *)0x0) &&
         (pSVar4 = (pSVar3->fields).slider, pSVar4 != (Slider *)0x0)) {
        uVar5 = (*(pSVar4->klass->vtable).get_value.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable).get_value.method);
        pSVar3 = (this->fields).thrustersColorG;
        if ((pSVar3 != (SettingsSlider *)0x0) &&
           (pSVar4 = (pSVar3->fields).slider, pSVar4 != (Slider *)0x0)) {
          uVar6 = (*(pSVar4->klass->vtable).get_value.methodPtr)
                             (pSVar4,(pSVar4->klass->vtable).get_value.method);
          pSVar3 = (this->fields).thrustersColorB;
          if ((pSVar3 != (SettingsSlider *)0x0) &&
             (pSVar4 = (pSVar3->fields).slider, pSVar4 != (Slider *)0x0)) {
            uVar7 = (*(pSVar4->klass->vtable).get_value.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable).get_value.method);
            pSVar3 = (this->fields).thrustersColorAlpha;
            if ((pSVar3 != (SettingsSlider *)0x0) &&
               (pSVar4 = (pSVar3->fields).slider, pSVar4 != (Slider *)0x0)) {
              auStack_8._12_4_ =
                   (*(pSVar4->klass->vtable).get_value.methodPtr)
                             (pSVar4,(pSVar4->klass->vtable).get_value.method);
              auStack_8._4_4_ = uVar6;
              auStack_8._0_4_ = uVar5;
              auStack_8._8_4_ = uVar7;
              (*(pIVar2->klass->vtable).set_color.methodPtr)(pIVar2,auStack_8);
              pTVar9 = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
                        ThrustersColorSerializer_Deserialize
                                  ((ThrustersColor *)auStack_8,(this->fields)._.bluePrintData,
                                   (MethodInfo *)0x0);
              pTVar10 = pTVar9->colors;
              pTVar11 = pTVar9->alphas;
              uVar12 = (this->fields).editingThrusterColor;
              pSVar3 = (this->fields).thrustersColorAlpha;
              if ((pSVar3 != (SettingsSlider *)0x0) &&
                 (pSVar4 = (pSVar3->fields).slider, pSVar4 != (Slider *)0x0)) {
                fVar13 = (float)(*(pSVar4->klass->vtable).get_value.methodPtr)
                                          (pSVar4,(pSVar4->klass->vtable).get_value.method);
                uVar14 = (this->fields).editingThrusterColor;
                if (pTVar11 != (ThrustersColorAlphaKey__Array *)0x0) {
                  if ((uVar14 < (uint)pTVar11->max_length) &&
                     (fVar15 = pTVar11->vector[(int)uVar14].time, uVar12 < (uint)pTVar11->max_length))
                  {
                    pTVar11->vector[(int)uVar12].alpha = fVar13;
                    pTVar11->vector[(int)uVar12].time = fVar15;
                    uVar12 = (this->fields).editingThrusterColor;
                    uVar14 = (this->fields).editingThrusterColor;
                    if (pTVar10 == (ThrustersColorColorKey__Array *)0x0) goto code_?;
                    if (uVar14 < (uint)pTVar10->max_length) {
                      auStack_8._12_4_ = pTVar10->vector[(int)uVar14].time;
                      if (uVar12 < (uint)pTVar10->max_length) {
                        pTVar16 = pTVar10->vector + (int)uVar12;
                        (pTVar16->color).r = (float)uVar5;
                        (pTVar16->color).g = (float)uVar6;
                        *(undefined8 *)&(pTVar16->color).b = auStack_8._8_8_;
                        auStack_8._0_8_ = pTVar10;
                        auStack_8._8_8_ = pTVar11;
                        pTVar17 = (ThrustersColorAlphaKey__Array__Class *)
                                  WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
                                  ThrustersColorSerializer_Serialize
                                            ((ThrustersColor *)auStack_8,(MethodInfo *)0x0);
                        if (pTVar17 != (ThrustersColorAlphaKey__Array__Class *)0x0) {
                          if (iRam_? != 0) {
                            uVar12 = (uint)((ulonglong)&pTStack_18 >> 0xc);
                            uVar19 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
                            do {
                              uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
                              puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
                              LOCK();
                              bVar22 = uVar20 == *puVar21;
                              if (bVar22) {
                                *puVar21 = uVar20 | 1L << (uVar12 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar22);
                          }
                          pMStack_23 = (MonitorData *)
                                       (ulonglong)*(uint *)&(pTVar17->_0).byval_arg.field_0xc;
                          uStack_24 = 2;
                          uStack_25 = 0;
                          uStack_26 = 0;
                          pMStack_27 = pMStack_23;
                          pSStack_28 = (String *)0x0;
                          pOStack_29 = (Object *)0x0;
                          fStack_30 = 2.8026e-45;
                          fStack_31 = 0.0;
                          auStack_8._0_8_ = (ThrustersColorColorKey__Array *)0x0;
                          auStack_8._8_8_ = &stack0xffffffffffffff90;
                          pTStack_18 = pTVar17;
                          pTStack_32 = pTVar17;
                          while (bVar33 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[TKey,TValue]+Enumerator[System::Object,System
                                          ::Object]::
                                          Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                                    ((
                                                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                                  *)&stack0xffffffffffffff90,
                                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                                  ), value_00 = pOStack_29, pSVar34 = pSStack_28,
                                bVar33 != 0) {
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar35 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if (pMVar35 == (MVGameControllerBase *)0x0) goto code_?;
                            pMVar36 = (pMVar35->fields).game;
                            if (pMVar36 == (MVNetworkGame *)0x0) goto code_?;
                            this_00 = (pMVar36->fields).operationRequests;
                            worldObjectID = (this->fields)._.vehicleWoID;
                            str1 = (String *)0x0;
                            if (pSVar34 != (String *)0x0) {
                              if (pSVar34->klass == pSRam0000000182dbdde0) {
                                str1 = pSVar34;
                              }
                              if (str1 == (String *)0x0) goto code_?;
                            }
                            if (cRam_? == '\0') {
                              FUN_?(&StringLiteral_BlueprintData_);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pSVar34 = mscorlib.dll::System::String::String_Concat_4
                                                (StringLiteral_BlueprintData_,str1,(MethodInfo *)0x0
                                                );
                            if (this_00 == (MVNetworkGame_OperationRequests *)0x0)
                            goto code_?;
                            MVNetworkGame+OperationRequests::
                            MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                                      (this_00,worldObjectID,pSVar34,value_00,(MethodInfo *)0x0);
                          }
                          pMVar37 = (this->fields)._.vehicleBase;
                          if (pMVar37 != (MVVehicleBase *)0x0) {
                            (*(pMVar37->klass->vtable).OnDataUpdate.methodPtr)
                                      (pMVar37,(pMVar37->klass->vtable).OnDataUpdate.method);
                            (this->fields).editingThrusterColor = -1;
                            if (*(int *)&(
                                         TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                                         ->_1).field_0x1c == 0) {
                              FUN_?(
                                           TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                                           );
                            }
                            this_01 = (this->fields)._.canvas;
                            if (this_01 != (RectTransform *)0x0) {
                              value.y = (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                                         ->static_fields->NormalEditingCanvasSize).y;
                              value.x = (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                                         ->static_fields->NormalEditingCanvasSize).x;
                              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                              RectTransform_set_sizeDelta(this_01,value,(MethodInfo *)0x0);
                              obj = (this->fields).colorPicker;
                              if (obj != (GameObject *)0x0) {
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pvVar38 = (obj->fields)._.m_CachedPtr;
                                if (pvVar38 != (void *)0x0) {
                                  pcVar39 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar39 = (code *)FUN_?(&UNK_?),
                                     pcVar39 == (code *)0x0)) {
                                    uVar40 = func_?(&UNK_?);
                                    FUN_?(uVar40,0);
                                    pcVar39 = (code *)swi(3);
                                    (*pcVar39)();
                                    return;
                                  }
                                  pcRam_? = pcVar39;
                                  (*pcRam_?)(pvVar38,0);
                                  return;
                                }
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)obj,(MethodInfo *)0x0);
                                pcVar39 = (code *)swi(3);
                                (*pcVar39)();
                                return;
                              }
                            }
                          }
                        }
                        goto code_?;
                      }
                    }
                  }
                  FUN_?();
                  pcVar39 = (code *)swi(3);
                  (*pcVar39)();
                  return;
                }
              }
            }
          }
        }
      }
code_?:
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
      pcVar39 = (code *)swi(3);
      (*pcVar39)();
      return;
    }
  }
  return;
}


/* Void OnColorPressed(Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings_OnColorPressed
               (HoverCraftSettings *this,int32_t pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_alpha);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorG);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = (undefined *)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
  pTVar2 = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
           ThrustersColorSerializer_Deserialize
                     (aTStack_3,(this->fields)._.bluePrintData,(MethodInfo *)0x0);
  maxValue = _UNK_?;
  pTVar4 = pTVar2->colors;
  pTVar5 = pTVar2->alphas;
  if (pTVar4 != (ThrustersColorColorKey__Array *)0x0) {
    if ((uint)pTVar4->max_length <= (uint)pos) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar7._0_4_ = pTVar4->vector[pos].color.r;
    uVar7._4_4_ = pTVar4->vector[pos].color.g;
    value_00 = pTVar4->vector[pos].color.b;
    uStack_8 = uVar7;
    if (pTVar5 != (ThrustersColorAlphaKey__Array *)0x0) {
      if ((uint)pTVar5->max_length <= (uint)pos) goto code_?;
      pSVar9 = (this->fields).thrustersColorR;
      value = pTVar5->vector[pos].alpha;
      if (pSVar9 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar9,StringLiteral_colorR,(float)(undefined4)uVar7,0.0,_UNK_?,
                   (MethodInfo *)0x0);
        pSVar9 = (this->fields).thrustersColorG;
        if (pSVar9 != (SettingsSlider *)0x0) {
          fVar10 = uStack_8._4_4_;
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar9,StringLiteral_colorG,uStack_8._4_4_,0.0,maxValue,(MethodInfo *)0x0);
          pSVar9 = (this->fields).thrustersColorB;
          if (pSVar9 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar9,StringLiteral_colorB,value_00,0.0,maxValue,(MethodInfo *)0x0);
            pSVar9 = (this->fields).thrustersColorAlpha;
            if (pSVar9 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar9,StringLiteral_alpha,value,0.0,maxValue,(MethodInfo *)0x0);
              pIVar11 = (this->fields).colorPickerPreview;
              if (pIVar11 != (Image *)0x0) {
                uStack_8 = CONCAT44(fVar10,(undefined4)uVar7);
                fStack_12 = value_00;
                fStack_13 = value;
                (*(pIVar11->klass->vtable).set_color.methodPtr)(pIVar11,&uStack_8);
                (this->fields).editingThrusterColor = pos;
                if (*(int *)&(
                             TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                             ->_1).field_0x1c == 0) {
                  FUN_?(
                               TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                               );
                }
                this_00 = (this->fields)._.canvas;
                if (this_00 != (RectTransform *)0x0) {
                  value_01.y = (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                                ->static_fields->ColorEditingCanvasSize).y;
                  value_01.x = (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                                ->static_fields->ColorEditingCanvasSize).x;
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_sizeDelta(this_00,value_01,(MethodInfo *)0x0);
                  obj = (this->fields).colorPicker;
                  if (obj != (GameObject *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                    ,1,0);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (obj == (GameObject *)0x0) {
                      FUN_?();
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pvVar14 = (obj->fields)._.m_CachedPtr;
                    if (pvVar14 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pcVar6 = pcRam_?;
                    if (pcRam_? == (code *)0x0) {
                      pcVar6 = (code *)FUN_?(&UNK_?);
                      if (pcVar6 == (code *)0x0) {
                        uVar7 = func_?(&UNK_?);
                        FUN_?(uVar7,0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                    }
                    pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam_?)(pvVar14,1);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings_OnSettingChanged
               (HoverCraftSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_alpha);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_randomLeaveVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_jumpHeight);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_turningSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_overrideHealth);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_overrideHealth;
  if (key == (String *)0x0) {
    return;
  }
  if ((key->fields)._stringLength == 0) {
    return;
  }
  bVar2 = false;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
  if ((key == pSVar1) ||
     (((pSVar1 != (String *)0x0 && ((key->fields)._stringLength == (pSVar1->fields)._stringLength))
      && (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(key->fields)._firstChar,
                             (uint8_t *)&(pSVar1->fields)._firstChar,
                             (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar3 != 0)))) {
code_?:
    if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    afStackX_10[0] =
         mscorlib.dll::System::Convert::Convert_ToSingle_1
                   (value,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
    uVar5 = uRam_?;
code_?:
    value = (Object *)FUN_?(uVar5,afStackX_10);
  }
  else {
    pSVar1 = StringLiteral_randomLeaveVehicle;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_BlueprintData_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
    if ((key == pSVar1) ||
       (((pSVar1 != (String *)0x0 && ((key->fields)._stringLength == (pSVar1->fields)._stringLength)
         ) && (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(key->fields)._firstChar,
                                  (uint8_t *)&(pSVar1->fields)._firstChar,
                                  (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar3 != 0)))) goto code_?;
    pSVar1 = StringLiteral_speed;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_BlueprintData_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
    if ((key == pSVar1) ||
       (((pSVar1 != (String *)0x0 && ((key->fields)._stringLength == (pSVar1->fields)._stringLength)
         ) && (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(key->fields)._firstChar,
                                  (uint8_t *)&(pSVar1->fields)._firstChar,
                                  (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar3 != 0)))) {
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      afStackX_10[0] =
           (float)mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
      uVar5 = uRam_?;
      goto code_?;
    }
    pSVar1 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                       (StringLiteral_jumpHeight,(MethodInfo *)0x0);
    if ((key == pSVar1) ||
       (((pSVar1 != (String *)0x0 && ((key->fields)._stringLength == (pSVar1->fields)._stringLength)
         ) && (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(key->fields)._firstChar,
                                  (uint8_t *)&(pSVar1->fields)._firstChar,
                                  (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar3 != 0)))) goto code_?;
    pSVar1 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                       (StringLiteral_turningSpeed,(MethodInfo *)0x0);
    if ((key == pSVar1) ||
       (((pSVar1 != (String *)0x0 && ((key->fields)._stringLength == (pSVar1->fields)._stringLength)
         ) && (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(key->fields)._firstChar,
                                  (uint8_t *)&(pSVar1->fields)._firstChar,
                                  (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar3 != 0)))) {
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      afStackX_10[0] =
           mscorlib.dll::System::Convert::Convert_ToSingle_1
                     (value,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
      afStackX_10[0] = afStackX_10[0] / _UNK_?;
      uVar5 = uRam_?;
      goto code_?;
    }
    pSVar1 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                       (StringLiteral_thrustersSize,(MethodInfo *)0x0);
    if ((key == pSVar1) ||
       (((pSVar1 != (String *)0x0 && ((key->fields)._stringLength == (pSVar1->fields)._stringLength)
         ) && (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(key->fields)._firstChar,
                                  (uint8_t *)&(pSVar1->fields)._firstChar,
                                  (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar3 != 0)))) {
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      afStackX_10[0] =
           mscorlib.dll::System::Convert::Convert_ToSingle_1
                     (value,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
      afStackX_10[0] = afStackX_10[0] / _UNK_?;
      value = (Object *)FUN_?(uRam_?,afStackX_10);
      bVar2 = true;
    }
    else {
      pSVar1 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                         (StringLiteral_thrustersOn,(MethodInfo *)0x0);
      if ((key == pSVar1) ||
         (((pSVar1 != (String *)0x0 &&
           ((key->fields)._stringLength == (pSVar1->fields)._stringLength)) &&
          (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(key->fields)._firstChar,
                              (uint8_t *)&(pSVar1->fields)._firstChar,
                              (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar3 != 0)))) {
        bVar2 = true;
      }
      else {
        if ((key == StringLiteral_colorR) ||
           ((((StringLiteral_colorR != (String *)0x0 &&
              ((key->fields)._stringLength == (StringLiteral_colorR->fields)._stringLength)) &&
             (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(key->fields)._firstChar,
                                 (uint8_t *)&(StringLiteral_colorR->fields)._firstChar,
                                 (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar3 != 0)) ||
            ((key == StringLiteral_colorG ||
             ((((StringLiteral_colorG != (String *)0x0 &&
                ((key->fields)._stringLength == (StringLiteral_colorG->fields)._stringLength)) &&
               (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(key->fields)._firstChar,
                                   (uint8_t *)&(StringLiteral_colorG->fields)._firstChar,
                                   (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
               bVar3 != 0)) ||
              (((key == StringLiteral_colorB ||
                ((((StringLiteral_colorB != (String *)0x0 &&
                   ((key->fields)._stringLength == (StringLiteral_colorB->fields)._stringLength)) &&
                  (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                     ((uint8_t *)&(key->fields)._firstChar,
                                      (uint8_t *)&(StringLiteral_colorB->fields)._firstChar,
                                      (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
                  bVar3 != 0)) || (key == StringLiteral_alpha)))) ||
               (((StringLiteral_alpha != (String *)0x0 &&
                 ((key->fields)._stringLength == (StringLiteral_alpha->fields)._stringLength)) &&
                (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                   ((uint8_t *)&(key->fields)._firstChar,
                                    (uint8_t *)&(StringLiteral_alpha->fields)._firstChar,
                                    (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
                bVar3 != 0)))))))))))) {
          if ((this->fields).editingThrusterColor < 0) {
            return;
          }
          if (3 < (uint)(this->fields).editingThrusterColor) {
            return;
          }
          pSVar6 = (this->fields).thrustersColorR;
          pIVar7 = (this->fields).colorPickerPreview;
          if ((pSVar6 != (SettingsSlider *)0x0) &&
             (pSVar8 = (pSVar6->fields).slider, pSVar8 != (Slider *)0x0)) {
            uVar9 = (*(pSVar8->klass->vtable).get_value.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable).get_value.method);
            pSVar6 = (this->fields).thrustersColorG;
            if ((pSVar6 != (SettingsSlider *)0x0) &&
               (pSVar8 = (pSVar6->fields).slider, pSVar8 != (Slider *)0x0)) {
              uVar10 = (*(pSVar8->klass->vtable).get_value.methodPtr)
                                 (pSVar8,(pSVar8->klass->vtable).get_value.method);
              pSVar6 = (this->fields).thrustersColorB;
              if ((pSVar6 != (SettingsSlider *)0x0) &&
                 (pSVar8 = (pSVar6->fields).slider, pSVar8 != (Slider *)0x0)) {
                uStack_11 = (*(pSVar8->klass->vtable).get_value.methodPtr)
                                      (pSVar8,(pSVar8->klass->vtable).get_value.method);
                pSVar6 = (this->fields).thrustersColorAlpha;
                if ((pSVar6 != (SettingsSlider *)0x0) &&
                   ((pSVar8 = (pSVar6->fields).slider, pSVar8 != (Slider *)0x0 &&
                    (uStack_12 = (*(pSVar8->klass->vtable).get_value.methodPtr)
                                           (pSVar8,(pSVar8->klass->vtable).get_value.method),
                    pIVar7 != (Image *)0x0)))) {
                  uStack_13 = uVar9;
                  uStack_14 = uVar10;
                  (*(pIVar7->klass->vtable).set_color.methodPtr)
                            (pIVar7,&uStack_13,(pIVar7->klass->vtable).set_color.method);
                  return;
                }
              }
            }
          }
          goto code_?;
        }
        if (*(int *)&(
                     TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                     ->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_IsKey
                          (key,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          this_00 = (this->fields)._.settingsBase;
          if (this_00 == (SettingsBase *)0x0) goto code_?;
          SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value,(MethodInfo *)0x0);
        }
        else {
          this_01 = (this->fields)._.vehicleEnergyForVehicleSettings;
          if (this_01 == (VehicleEnergyForVehicleSettings *)0x0) goto code_?;
          value = VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_ValueToSend
                            (this_01,key,value,(MethodInfo *)0x0);
        }
      }
    }
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_02 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
    FUN_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
            (this_02,(this->fields)._.vehicleWoID,key,value,(MethodInfo *)0x0);
  if (bVar2) {
    pMVar16 = (this->fields)._.vehicleBase;
    if (pMVar16 == (MVVehicleBase *)0x0) goto code_?;
    (*(pMVar16->klass->vtable).OnDataUpdate.methodPtr)
              (pMVar16,(pMVar16->klass->vtable).OnDataUpdate.method);
  }
  return;
}


/* HoverCraftSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  pHVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings->
           static_fields;
  (pHVar3->NormalEditingCanvasSize).x = 690.0;
  (pHVar3->NormalEditingCanvasSize).y = 950.0;
  pHVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings->
           static_fields;
  (pHVar3->ColorEditingCanvasSize).x = 800.0;
  (pHVar3->ColorEditingCanvasSize).y = 700.0;
  uVar4 = _UNK_?;
  pHVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings->
           static_fields;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (pHVar3->VehicleEnergyForVehicleSettingsConfig).storageMinValue = _UNK_?;
  _UNK_? = uVar4;
  uVar2 = _UNK_?;
  (pHVar3->VehicleEnergyForVehicleSettingsConfig).storageMaxValue = uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (pHVar3->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue = _UNK_?;
  _UNK_? = uVar2;
  (pHVar3->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue = uVar5;
  return;
}


/* HoverCraftSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HoverCraftSettings::HoverCraftSettings__ctor(HoverCraftSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).editingThrusterColor = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Vector2 get_DefaultCanvasSize() */

Vector2 Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
        HoverCraftSettings::HoverCraftSettings_get_DefaultCanvasSize
                  (HoverCraftSettings *this,MethodInfo *method)

{
  VVar1.y = _UNK_?;
  VVar1.x = _UNK_?;
  return VVar1;
}

