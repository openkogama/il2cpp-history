
/* Boolean HandleInteraction(MVPickupOwner, InteractionData, Boolean) */

bool Assembly-CSharp.dll::ClientSideNPCInteractionHandler::
     ClientSideNPCInteractionHandler_HandleInteraction
               (ClientSideNPCInteractionHandler *this,MVPickupOwner *interactor,
               InteractionData *interaction,bool interactionIsLocal,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = (this->klass->vtable).CanHandle.method;
  cVar2 = (*(this->klass->vtable).CanHandle.methodPtr)
                    (this,(ulonglong)interaction->interactionType,(ulonglong)interactionIsLocal,
                     pMVar1);
  if (cVar2 == '\0') {
    return 0;
  }
  bVar3 = InteractionDataHandlerBase::InteractionDataHandlerBase_IsFriendlyFire
                    ((InteractionDataHandlerBase *)this,interactor,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pHVar4 = (HashSet_1_System_ByteEnum_ *)(this->fields).unableToDamageNPCs;
    if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pHVar4 == (HashSet_1_System_ByteEnum_ *)0x0) goto DAT_?;
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar4,(uint)interaction->interactionType,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                      );
    if (bVar3 == 0) {
      pMVar5 = (this->fields)._._.worldObjectParent;
      pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      lVar7 = lRam_?;
      uStackX_20 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar8 + 1,&uStackX_20,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            lVar7 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar11 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
        }
        else {
          pOVar8 = (Object *)0x0;
        }
      }
      else {
        pOVar8 = (Object *)((ulonglong)uStackX_21 << 8);
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
        FUN_?();
      }
      pBVar13 = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                          (interaction,(MethodInfo *)0x0);
      if ((pDVar6 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                      *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar8,(Object *)pBVar13,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar1 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method), pMVar5 != (MVWorldObjectClient *)0x0)) {
        MVWorldObjectClient::MVWorldObjectClient_SendPackage
                  (pMVar5,(Dictionary_2_System_Object_System_Object_ *)pDVar6,(MethodInfo *)0x0);
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if ((pMVar14 != (MainCameraManager *)0x0) &&
           (this_00 = (pMVar14->fields).plingSound, this_00 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (this_00,(MethodInfo *)0x0);
          lVar7 = FUN_?();
          if ((lVar7 != 0) && (lVar7 = FUN_?(2,TypeInfo__IPlayModeUI,lVar7), lVar7 != 0)
             ) {
            FUN_?(3,TypeInfo__IGUICrossHair,lVar7);
            return 1;
          }
        }
      }
      goto DAT_?;
    }
  }
  pHVar4 = (HashSet_1_System_ByteEnum_ *)(this->fields).friendlyInteractions;
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pHVar4 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar4,(uint)interaction->interactionType,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Contains_MV__WorldObject__InteractionPackageType_
                      );
    if (bVar3 != 0) {
      pMVar5 = (this->fields)._._.worldObjectParent;
      pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      lVar7 = lRam_?;
      uStackX_20 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar8 + 1,&uStackX_20,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            lVar7 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar11 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
        }
        else {
          pOVar8 = (Object *)0x0;
        }
      }
      else {
        pOVar8 = (Object *)((ulonglong)uStackX_21 << 8);
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
        FUN_?();
      }
      pBVar13 = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                          (interaction,(MethodInfo *)0x0);
      if ((pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                      *)0x0) ||
         (pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    ->klass->rgctx_data[0x22].method,
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
         Dictionary_2_System_Object_System_Object__TryInsert
                   ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar8,(Object *)pBVar13,
                    (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar1 >> 8),2),pMVar1),
         pMVar5 == (MVWorldObjectClient *)0x0)) goto DAT_?;
      MVWorldObjectClient::MVWorldObjectClient_SendPackage
                (pMVar5,(Dictionary_2_System_Object_System_Object_ *)pDVar6,(MethodInfo *)0x0);
    }
    return 1;
  }
DAT_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar3 = (*pcVar15)();
  return bVar3;
}


/* ClientSideNPCInteractionHandler() */

void Assembly-CSharp.dll::ClientSideNPCInteractionHandler::ClientSideNPCInteractionHandler__ctor
               (ClientSideNPCInteractionHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_ByteEnum_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__HashSet__
            );
  if (pHVar1 != (HashSet_1_System_ByteEnum_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)
                            MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
                            ->klass >> 8),8);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__AddIfNotPresent
              (pHVar1,(ByteEnum__Enum)uVar2,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
               ->klass->rgctx_data[0x15].method);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__AddIfNotPresent
              (pHVar1,(ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),0x1b),
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
               ->klass->rgctx_data[0x15].method);
    bVar3 = iRam_? != 0;
    (this->fields).unableToDamageNPCs = (HashSet_1_MV_WorldObject_InteractionPackageType_ *)pHVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).unableToDamageNPCs >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pHVar1 = (HashSet_1_System_ByteEnum_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>
                          );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__HashSet__
              );
    if (pHVar1 != (HashSet_1_System_ByteEnum_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
      HashSet_1_System_ByteEnum__AddIfNotPresent
                (pHVar1,(ByteEnum__Enum)
                        CONCAT71((int7)((ulonglong)
                                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
                                        ->klass >> 8),0x1b),
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::InteractionPackageType>__Add_MV__WorldObject__InteractionPackageType_
                 ->klass->rgctx_data[0x15].method);
      bVar3 = iRam_? != 0;
      (this->fields).friendlyInteractions =
           (HashSet_1_MV_WorldObject_InteractionPackageType_ *)pHVar1;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).friendlyInteractions >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      bVar3 = cRam_? == '\0';
      (this->fields).team = 5;
      (this->fields)._._.findWorldObjectParent = 1;
      if (bVar3) {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

