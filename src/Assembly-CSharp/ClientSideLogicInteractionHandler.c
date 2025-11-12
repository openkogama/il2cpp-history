
/* Boolean CanHandle(InteractionPackageType, Boolean) */

bool Assembly-CSharp.dll::ClientSideLogicInteractionHandler::
     ClientSideLogicInteractionHandler_CanHandle
               (ClientSideLogicInteractionHandler *this,
               InteractionPackageType__Enum interactionPackageType,bool interactionIsLocal,
               MethodInfo *method)

{
  return interactionIsLocal == 0;
}


/* Boolean HandleInteraction(MVPickupOwner, InteractionData, Boolean) */

bool Assembly-CSharp.dll::ClientSideLogicInteractionHandler::
     ClientSideLogicInteractionHandler_HandleInteraction
               (ClientSideLogicInteractionHandler *this,MVPickupOwner *interactor,
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
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  cVar1 = (*(this->klass->vtable).CanHandle.methodPtr)
                    (this,(ulonglong)interaction->interactionType,interactionIsLocal,
                     (this->klass->vtable).CanHandle.method);
  if (cVar1 == '\0') {
    return 0;
  }
  this_00 = (this->fields)._._.worldObjectParent;
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  lVar2 = lRam_?;
  uStackX_20 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      key = (Object *)FUN_?(lRam_?);
      FUN_?(key + 1,&uStackX_20,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(key + 1) >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
    }
    else {
      key = (Object *)0x0;
    }
  }
  else {
    key = (Object *)((ulonglong)uStackX_21 << 8);
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                    (interaction,(MethodInfo *)0x0);
  if ((this_01 !=
       (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
        *)0x0) &&
     (method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ->klass->rgctx_data[0x22].method,
     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
     Dictionary_2_System_Object_System_Object__TryInsert
               ((Dictionary_2_System_Object_System_Object_ *)this_01,key,(Object *)value,
                (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),method_00),
     this_00 != (MVWorldObjectClient *)0x0)) {
    MVWorldObjectClient::MVWorldObjectClient_SendPackage
              (this_00,(Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
    return 1;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}

