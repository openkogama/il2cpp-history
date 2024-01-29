
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
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__InteractionData);
  }
  pCVar1 = this;
  cVar2 = (*(code *)(this->klass->vtable).CanHandle.method)
                    (this,interaction._16_4_,_interactionIsLocal,
                     (this->klass->vtable).HandleInteraction.methodPtr);
  if (cVar2 == '\0') {
    return 0;
  }
  this_00 = (pCVar1->fields)._._.worldObjectParent;
  this_01 = (MVPickupOwner *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  this = (ClientSideLogicInteractionHandler *)((uint)this & 0xffffff);
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__InteractionData);
  }
  value = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                    (&interaction,(MethodInfo *)0x0);
  if (this_01 != (MVPickupOwner *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,key,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if (this_00 != (MVWorldObjectClient *)0x0) {
      interaction.damage = 0.0;
      this = (ClientSideLogicInteractionHandler *)this_00;
      interactor = this_01;
      MVWorldObjectClient::MVWorldObjectClient_SendPackage
                (this_00,(Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
      return 1;
    }
  }
  interaction.damage = (float)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

