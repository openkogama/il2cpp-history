
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
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    cRam_? = '\x01';
  }
  if (interactionIsLocal == 0) {
    bVar1 = InteractionDataHandlerBase::InteractionDataHandlerBase_IsFriendlyFire
                      ((InteractionDataHandlerBase *)this,interactor,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 1;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVAvatarRemote);
      cRam_? = '\x01';
    }
    pMVar2 = (MVAvatar *)(this->fields)._._.worldObjectParent;
    if (pMVar2 != (MVAvatar *)0x0) {
      if (((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVAvatarRemote->_1).naturalAligment) ||
         ((MVAvatarRemote__Class *)
          (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarRemote->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarRemote)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this_00 = (MVAvatar *)0x0;
      if (bVar3) {
        this_00 = pMVar2;
      }
      if ((this_00 != (MVAvatar *)0x0) &&
         (bVar1 = MVAvatar::MVAvatar_IsInMode
                            (this_00,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0), bVar1 != 0)) {
        return 1;
      }
    }
    pMVar4 = (this->fields)._._.worldObjectParent;
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    in_stack_5 = 0;
    key = (Object *)func_?(TypeInfo__System__Byte,&stack0x00000023);
    if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__InteractionData);
    }
    value = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                      (&interaction,(MethodInfo *)0x0);
    if ((this_01 !=
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0) && (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_01,key,
                             (Object *)value,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            ), pMVar4 != (MVWorldObjectClient *)0x0)) {
      MVWorldObjectClient::MVWorldObjectClient_SendPackage
                (pMVar4,(Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
      return 1;
    }
  }
  else {
    pMVar4 = (this->fields)._._.worldObjectParent;
    if (pMVar4 != (MVWorldObjectClient *)0x0) {
      (*(code *)(pMVar4->klass->vtable).ReceiveInteractionPackage.method)
                (pMVar4,interaction.damage,interaction.impulse.x,interaction.impulse.y,
                 interaction.impulse.z,interaction._16_4_,0,
                 (pMVar4->klass->vtable).HandleInput.methodPtr);
      return 1;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar1 = (*pcVar6)();
  return bVar1;
}


/* Boolean IsDead(InteractionData) */

bool Assembly-CSharp.dll::InteractionDataHandler::InteractionDataHandler_IsDead
               (InteractionDataHandler *this,InteractionData interaction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarRemote);
    cRam_? = '\x01';
  }
  pMVar1 = (MVAvatar *)(this->fields)._._.worldObjectParent;
  if (pMVar1 != (MVAvatar *)0x0) {
    if (((pMVar1->klass->_1).naturalAligment < (TypeInfo__MVAvatarRemote->_1).naturalAligment) ||
       ((MVAvatarRemote__Class *)
        (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVAvatarRemote->_1).naturalAligment - 1] !=
        TypeInfo__MVAvatarRemote)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    this_00 = (MVAvatar *)0x0;
    if (bVar2) {
      this_00 = pMVar1;
    }
    if (this_00 != (MVAvatar *)0x0) {
      bVar3 = MVAvatar::MVAvatar_IsInMode(this_00,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return 0;
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

