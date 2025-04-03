
/* Boolean HandleInteraction(MVPickupOwner, InteractionData, Boolean) */

bool Assembly-CSharp.dll::ClientSideNPCInteractionHandler::
     ClientSideNPCInteractionHandler_HandleInteraction
               (ClientSideNPCInteractionHandler *this,MVPickupOwner *interactor,
               InteractionData interaction,bool interactionIsLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                   );
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__InteractionData);
  }
  cVar1 = (*(code *)(this->klass->vtable).CanHandle.method)
                    (this,interaction._16_4_,_interactionIsLocal,
                     (this->klass->vtable).HandleInteraction.methodPtr);
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = InteractionDataHandlerBase::InteractionDataHandlerBase_IsFriendlyFire
                    ((InteractionDataHandlerBase *)this,interactor,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pHVar3 = (HashSet_1_System_ByteEnum_ *)(this->fields).unableToDamageNPCs;
    if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__InteractionData);
    }
    if (pHVar3 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar3,interaction._16_4_,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                      );
    if (bVar2 == 0) {
      pMVar4 = (this->fields)._._.worldObjectParent;
      pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (pDVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pOVar6 = (Object *)func_?(TypeInfo__System__Byte);
      if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__InteractionData);
      }
      pBVar7 = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                          (&interaction,(MethodInfo *)0x0);
      if ((pDVar5 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar6,(Object *)pBVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    ), pMVar4 != (MVWorldObjectClient *)0x0)) {
        MVWorldObjectClient::MVWorldObjectClient_SendPackage
                  (pMVar4,(Dictionary_2_System_Object_System_Object_ *)pDVar5,(MethodInfo *)0x0);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_00 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_PlayPlingSound(this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
          if ((pIVar8 != (IPlayModeUI *)0x0) &&
             (piVar9 = (int *)func_?(2,TypeInfo__IPlayModeUI,pIVar8),
             piVar9 != (int *)0x0)) {
            uVar10 = 0;
            uVar11 = *(ushort *)(*piVar9 + 0xb6);
            if (uVar11 != 0) {
              iVar12 = *(int *)(*piVar9 + 0x58);
              do {
                if (*(IGUICrossHair__Class **)(iVar12 + (uint)uVar10 * 8) == TypeInfo__IGUICrossHair
                   ) {
                  iVar12 = *(int *)(iVar12 + 4 + (uint)uVar10 * 8) + 0x1b;
                  (**(code **)(*piVar9 + iVar12 * 8))
                            (piVar9,*(undefined4 *)(*piVar9 + 4 + iVar12 * 8));
                  return 1;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar11);
            }
            puVar13 = (undefined4 *)func_?(piVar9,TypeInfo__IGUICrossHair,3);
            (*(code *)*puVar13)(piVar9,puVar13[1]);
            return 1;
          }
        }
      }
      goto code_?;
    }
  }
  pHVar3 = (HashSet_1_System_ByteEnum_ *)(this->fields).friendlyInteractions;
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__InteractionData);
  }
  if (pHVar3 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar3,interaction._16_4_,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                      );
    if (bVar2 == 0) {
      return 1;
    }
    pMVar4 = (this->fields)._._.worldObjectParent;
    pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pOVar6 = (Object *)func_?(TypeInfo__System__Byte);
    if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__InteractionData);
    }
    pBVar7 = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                        (&interaction,(MethodInfo *)0x0);
    if ((pDVar5 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)0x0) &&
       (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar6,(Object *)pBVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ), pMVar4 != (MVWorldObjectClient *)0x0)) {
      MVWorldObjectClient::MVWorldObjectClient_SendPackage
                (pMVar4,(Dictionary_2_System_Object_System_Object_ *)pDVar5,(MethodInfo *)0x0);
      return 1;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  bVar2 = (*pcVar14)();
  return bVar2;
}


/* ClientSideNPCInteractionHandler() */

void Assembly-CSharp.dll::ClientSideNPCInteractionHandler::ClientSideNPCInteractionHandler__ctor
               (ClientSideNPCInteractionHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__HashSet__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>
                   );
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_ByteEnum_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__HashSet__
            );
  if (pHVar1 != (HashSet_1_System_ByteEnum_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__System_Collections_Generic_ICollection_T__Add
              (pHVar1,8,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__System_Collections_Generic_ICollection_T__Add
              (pHVar1,0x1b,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
              );
    ppHVar2 = &(this->fields).unableToDamageNPCs;
    *ppHVar2 = (HashSet_1_MV_WorldObject_InteractionPackageType_ *)pHVar1;
    func_?(ppHVar2,pHVar1);
    pHVar1 = (HashSet_1_System_ByteEnum_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__HashSet__
              );
    if (pHVar1 != (HashSet_1_System_ByteEnum_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
      HashSet_1_System_ByteEnum__System_Collections_Generic_ICollection_T__Add
                (pHVar1,0x1b,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
                );
      ppHVar2 = &(this->fields).friendlyInteractions;
      *ppHVar2 = (HashSet_1_MV_WorldObject_InteractionPackageType_ *)pHVar1;
      func_?(ppHVar2,pHVar1);
      (this->fields).team = 5;
      (this->fields)._._.findWorldObjectParent = 1;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

