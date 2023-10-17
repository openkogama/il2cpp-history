
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
    cRam_? = '\x01';
  }
  this_00 = this;
  cVar1 = (*(this->klass->vtable).CanHandle.methodPtr)
                    (this,interaction._16_4_,_interactionIsLocal,
                     (this->klass->vtable).CanHandle.method);
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = InteractionDataHandlerBase::InteractionDataHandlerBase_IsFriendlyFire
                    ((InteractionDataHandlerBase *)this_00,interactor,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pHVar3 = (HashSet_1_System_ByteEnum_ *)(this_00->fields).unableToDamageNPCs;
    if (pHVar3 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar3,interaction._16_4_,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                      );
    if (bVar2 == 0) {
      this = (ClientSideNPCInteractionHandler *)
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      pMVar4 = (this_00->fields)._._.worldObjectParent;
      pDVar5 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        this = (ClientSideNPCInteractionHandler *)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
        ;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pDVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        this = (ClientSideNPCInteractionHandler *)((int)&this + 3);
        pOVar6 = (Object *)func_?();
        pBVar7 = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                           (&interaction,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar5,pOVar6,(Object *)pBVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if (pMVar4 != (MVWorldObjectClient *)0x0) {
          MVWorldObjectClient::MVWorldObjectClient_SendPackage(pMVar4,pDVar5,(MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (this_01 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_PlayPlingSound(this_01,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              this = (ClientSideNPCInteractionHandler *)&TypeInfo__MVGameControllerBase;
              func_?();
              cRam_? = '\x01';
            }
            this = (ClientSideNPCInteractionHandler *)
                   TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
            if ((this != (ClientSideNPCInteractionHandler *)0x0) &&
               (this = (ClientSideNPCInteractionHandler *)func_?(2),
               this != (ClientSideNPCInteractionHandler *)0x0)) {
              func_?(3);
              return 1;
            }
          }
        }
      }
      goto code_?;
    }
  }
  pHVar3 = (HashSet_1_System_ByteEnum_ *)(this_00->fields).friendlyInteractions;
  if (pHVar3 != (HashSet_1_System_ByteEnum_ *)0x0) {
    this = (ClientSideNPCInteractionHandler *)
           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
    ;
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar3,interaction._16_4_,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                      );
    if (bVar2 == 0) {
      return 1;
    }
    interaction.impulse.x =
         (float)TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    pMVar4 = (this_00->fields)._._.worldObjectParent;
    interaction.damage = (float)&UNK_?;
    pDVar5 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this = (ClientSideNPCInteractionHandler *)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
      ;
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (ClientSideNPCInteractionHandler *)((int)&this + 3);
      pOVar6 = (Object *)func_?();
      pBVar7 = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                         (&interaction,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar5,pOVar6,(Object *)pBVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (pMVar4 != (MVWorldObjectClient *)0x0) {
        this = (ClientSideNPCInteractionHandler *)0x0;
        MVWorldObjectClient::MVWorldObjectClient_SendPackage(pMVar4,pDVar5,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
code_?:
  this = (ClientSideNPCInteractionHandler *)&UNK_?;
  func_?();
  pcVar8 = (code *)swi(3);
  bVar2 = (*pcVar8)();
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
  pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>
                          );
  if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__HashSet__
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x8,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x1b,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
              );
    (this->fields).unableToDamageNPCs = (HashSet_1_MV_WorldObject_InteractionPackageType_ *)pHVar1;
    func_?(&(this->fields).unableToDamageNPCs,pHVar1);
    pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>
                            );
    if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (pHVar1,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__HashSet__
                );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__Add
                ((HashSet_1_System_Object_ *)pHVar1,(Object *)0x1b,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
                );
      (this->fields).friendlyInteractions =
           (HashSet_1_MV_WorldObject_InteractionPackageType_ *)pHVar1;
      func_?(&(this->fields).friendlyInteractions,pHVar1);
      (this->fields).team = 5;
      MVComponent::MVComponent__ctor((MVComponent *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

