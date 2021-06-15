
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
  this_00 = (pCVar2->fields)._._.worldObjectParent;
  package = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)package,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  this = (ClientSideLogicInteractionHandler *)((uint)this & 0xffffff);
  key = (String *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  value = (CrossPlatformInputManager_VirtualButton *)func_?(&interaction,0);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)package,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if (this_00 != (MVWorldObjectClient *)0x0) {
      interactor = (MVPickupOwner *)0x0;
      this = (ClientSideLogicInteractionHandler *)package;
      MVWorldObjectClient::MVWorldObjectClient_SendPackage(this_00,package,(MethodInfo *)0x0);
      return 1;
    }
  }
  interactor = (MVPickupOwner *)0x0;
  this = (ClientSideLogicInteractionHandler *)&UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}

