
/* Boolean HandleInteraction(MVPickupOwner, InteractionData, Boolean) */

bool Assembly-CSharp.dll::InteractionDataHandler::InteractionDataHandler_HandleInteraction
               (InteractionDataHandler *this,MVPickupOwner *interactor,InteractionData interaction,
               bool interactionIsLocal,MethodInfo *method)

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
    cRam_? = '\x01';
  }
  if (interactionIsLocal == 0) {
    bVar1 = InteractionDataHandlerBase::InteractionDataHandlerBase_IsFriendlyFire
                      ((InteractionDataHandlerBase *)this,interactor,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 1;
    }
    pMVar2 = (this->fields)._._.worldObjectParent;
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      in_stack_3 = 0;
      key = (Object *)func_?(TypeInfo__System__Byte,&stack0x00000023);
      value = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                        (&interaction,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,key,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        MVWorldObjectClient::MVWorldObjectClient_SendPackage(pMVar2,this_00,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  else {
    pMVar2 = (this->fields)._._.worldObjectParent;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      (*(pMVar2->klass->vtable).ReceiveInteractionPackage.methodPtr)
                (pMVar2,interaction.damage,interaction.impulse.x,interaction.impulse.y,
                 interaction.impulse.z,interaction._16_4_,0,
                 (pMVar2->klass->vtable).ReceiveInteractionPackage.method);
      return 1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* MVTeam get_Team() */

MVTeam__Enum
Assembly-CSharp.dll::InteractionDataHandler::InteractionDataHandler_get_Team
          (InteractionDataHandler *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pMVar2 = (this->fields)._._.worldObjectParent, pMVar2 != (MVWorldObjectClient *)0x0)) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    MVar3 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                      (this_00,(pMVar2->fields)._.ownerActorNr,(MethodInfo *)0x0);
    return MVar3;
  }
  uVar4 = func_?(&stack0xfffffff4);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  MVar3 = (*pcVar5)();
  return MVar3;
}

