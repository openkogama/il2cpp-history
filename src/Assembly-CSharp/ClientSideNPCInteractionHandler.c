
/* Boolean HandleInteraction(MVPickupOwner, InteractionData, Boolean) */

bool Assembly-CSharp.dll::ClientSideNPCInteractionHandler::
     ClientSideNPCInteractionHandler_HandleInteraction
               (ClientSideNPCInteractionHandler *this,MVPickupOwner *interactor,
               InteractionData interaction,bool interactionIsLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
          CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                    ((CrossPlatformInputManager_VirtualAxis *)&interaction,(MethodInfo *)0x0);
  pCVar2 = this;
  cVar3 = (*(code *)(this->klass->vtable).CanHandle.method)
                    (this,bVar1,_interactionIsLocal,
                     (this->klass->vtable).HandleInteraction.methodPtr);
  if (cVar3 == '\0') {
    return 0;
  }
  bVar1 = InteractionDataHandlerBase::InteractionDataHandlerBase_IsFriendlyFire
                    ((InteractionDataHandlerBase *)pCVar2,interactor,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pHVar4 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(pCVar2->fields).unableToDamageNPCs;
    bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
            CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                      ((CrossPlatformInputManager_VirtualAxis *)&interaction,(MethodInfo *)0x0);
    this = (ClientSideNPCInteractionHandler *)CONCAT31(this._1_3_,bVar1);
    if (pHVar4 == (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) goto code_?;
    this = (ClientSideNPCInteractionHandler *)
           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
    ;
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (pHVar4,(NativeAdType__Enum)
                              MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                       ,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                      );
    if (bVar1 == 0) {
      interaction.impulse.x =
           (float)TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      pMVar5 = (pCVar2->fields)._._.worldObjectParent;
      interaction.damage = (float)&UNK_?;
      pMVar6 = (MVPickupOwner *)func_?();
      interaction.damage =
           (float)
           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
      ;
      this = (ClientSideNPCInteractionHandler *)&UNK_?;
      interactor = pMVar6;
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pMVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      interaction.damage = (float)((int)&this + 3);
      interactor = (MVPickupOwner *)TypeInfo__System__Byte;
      this = (ClientSideNPCInteractionHandler *)&UNK_?;
      pSVar7 = (String *)func_?();
      this = (ClientSideNPCInteractionHandler *)0x0;
      value = (CrossPlatformInputManager_VirtualButton *)func_?();
      if ((pMVar6 != (MVPickupOwner *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pMVar6,pSVar7,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    ), pMVar5 != (MVWorldObjectClient *)0x0)) {
        MVWorldObjectClient::MVWorldObjectClient_SendPackage
                  (pMVar5,(Dictionary_2_System_Object_System_Object_ *)pMVar6,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          interactor = (MVPickupOwner *)TypeInfo__MVGameControllerBase;
          this = (ClientSideNPCInteractionHandler *)&UNK_?;
          func_?();
        }
        interactor = (MVPickupOwner *)0x0;
        this = (ClientSideNPCInteractionHandler *)&UNK_?;
        pMVar6 = (MVPickupOwner *)
                 MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar6 != (MVPickupOwner *)0x0) {
          interaction.damage = 0.0;
          this = (ClientSideNPCInteractionHandler *)&UNK_?;
          interactor = pMVar6;
          MainCameraManager::MainCameraManager_PlayPlingSound
                    ((MainCameraManager *)pMVar6,(MethodInfo *)0x0);
          interaction.damage = 0.0;
          interactor = (MVPickupOwner *)&UNK_?;
          pIVar8 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
          if (pIVar8 != (IPlayModeUI *)0x0) {
            pIVar9 = pIVar8->klass;
            uVar10 = 0;
            uVar11._0_1_ = (pIVar9->_1).rank;
            uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
            if (uVar11 != 0) {
              do {
                if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
                    (Il2CppClass *)TypeInfo__IPlayModeUI) {
                  ppMVar12 = &(&(pIVar8->klass->vtable).GetCrossHair)
                              [pIVar9->interfaceOffsets[uVar10].offset].method;
                  goto code_?;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar11);
            }
            interaction.impulse.z = 2.8026e-45;
            interaction.impulse.y = (float)TypeInfo__IPlayModeUI;
            interaction.damage = (float)&UNK_?;
            interaction.impulse.x = (float)pIVar8;
            ppMVar12 = (MethodInfo **)func_?();
code_?:
            interaction.impulse.z = (float)ppMVar12[1];
            interaction.impulse.x = (float)&UNK_?;
            interaction.impulse.y = (float)pIVar8;
            interaction.impulse.z = (float)(*(code *)*ppMVar12)();
            if (interaction.impulse.z != 0.0) {
              interaction.impulse.y = (float)TypeInfo__IGUICrossHair;
              interaction.impulse.x = 4.2039e-45;
              interaction.damage = (float)&UNK_?;
              func_?();
              return 1;
            }
          }
        }
      }
      goto code_?;
    }
  }
  pHVar4 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(pCVar2->fields).friendlyInteractions;
  interaction.damage = (float)&interaction;
  interaction.impulse.x = 0.0;
  interactor = (MVPickupOwner *)&UNK_?;
  bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
          CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                    ((CrossPlatformInputManager_VirtualAxis *)interaction.damage,(MethodInfo *)0x0);
  this = (ClientSideNPCInteractionHandler *)CONCAT31(this._1_3_,bVar1);
  if (pHVar4 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    interaction.impulse.z =
         (float)
         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
    ;
    interaction.impulse.y = (float)this;
    interaction.damage = (float)&UNK_?;
    interaction.impulse.x = (float)pHVar4;
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (pHVar4,(NativeAdType__Enum)this,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                      );
    if (bVar1 == 0) {
      return 1;
    }
    pMVar5 = (pCVar2->fields)._._.worldObjectParent;
    package = (Dictionary_2_System_Object_System_Object_ *)func_?();
    interaction.impulse.z = (float)&UNK_?;
    interaction._16_4_ = package;
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)package,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (ClientSideNPCInteractionHandler *)((uint)this & 0xffffff);
    interaction._16_4_ = TypeInfo__System__Byte;
    interaction.impulse.z = (float)&UNK_?;
    pSVar7 = (String *)func_?();
    interaction.impulse.y = (float)&interaction;
    interaction.impulse.z = 0.0;
    interaction.impulse.x = (float)&UNK_?;
    pCVar2 = (ClientSideNPCInteractionHandler *)func_?();
    if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      interactor = (MVPickupOwner *)
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
      ;
      this = pCVar2;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)package,pSVar7,(CrossPlatformInputManager_VirtualButton *)pCVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (pMVar5 != (MVWorldObjectClient *)0x0) {
        interaction.impulse.z = 0.0;
        interaction.damage = (float)&UNK_?;
        interaction.impulse.x = (float)pMVar5;
        interaction.impulse.y = (float)package;
        MVWorldObjectClient::MVWorldObjectClient_SendPackage(pMVar5,package,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
code_?:
  interaction.impulse.z = 0.0;
  interaction.impulse.y = (float)&UNK_?;
  func_?();
  pcVar13 = (code *)swi(3);
  bVar1 = (*pcVar13)();
  return bVar1;
}


/* ClientSideNPCInteractionHandler() */

void Assembly-CSharp.dll::ClientSideNPCInteractionHandler::ClientSideNPCInteractionHandler__ctor
               (ClientSideNPCInteractionHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__HashSet__
            );
  if (pHVar1 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)pHVar1,
               MVOperationCodes__Enum_UpdatePrototypeScale,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)pHVar1,
               MVOperationCodes__Enum_WorldObjectRPCOperation,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
              );
    (this->fields).unableToDamageNPCs = (HashSet_1_MV_WorldObject_InteractionPackageType_ *)pHVar1;
    pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__HashSet__
              );
    if (pHVar1 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
      HashSet_1_MV_Common_MVOperationCodes__Add
                ((HashSet_1_MV_Common_MVOperationCodes_ *)pHVar1,
                 MVOperationCodes__Enum_WorldObjectRPCOperation,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
                );
      (this->fields).friendlyInteractions =
           (HashSet_1_MV_WorldObject_InteractionPackageType_ *)pHVar1;
      (this->fields).team = 5;
      VehicleEquipable::VehicleEquipable__ctor((VehicleEquipable *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

