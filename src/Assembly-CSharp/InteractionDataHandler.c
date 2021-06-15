
/* Boolean HandleInteraction(MVPickupOwner, InteractionData, Boolean) */

bool Assembly-CSharp.dll::InteractionDataHandler::InteractionDataHandler_HandleInteraction
               (InteractionDataHandler *this,MVPickupOwner *interactor,InteractionData interaction,
               bool interactionIsLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (interactionIsLocal == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)interactor,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((((pMVar2 == (MVNetworkGame *)0x0) ||
           (pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                               ((DayNightCycle *)pMVar2,(MethodInfo *)0x0),
           interactor == (MVPickupOwner *)0x0)) ||
          (this_00 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                     System.dll::System::Collections::Generic::
                     SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                     ::Single,System::Object]::
                     SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                               ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)interactor,(MethodInfo *)0x0),
          this_00 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0)) ||
         (actorNumber = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                        TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                        TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                  (this_00,(MethodInfo *)0x0), pSVar3 == (SkyParam *)0x0))
      goto code_?;
      interaction.impulse.x = 0.0;
      interaction.damage = (float)actorNumber;
      MVar4 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                        ((MVTeamManager *)pSVar3,(int32_t)actorNumber,(MethodInfo *)0x0);
      interaction.impulse.x = (float)(this->klass->vtable).CanHandle.methodPtr;
      interaction.damage = (float)this;
      MVar5 = (*(code *)(this->klass->vtable).get_Team.method)();
      if (MVar4 == MVar5) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                               ((DayNightCycle *)pMVar2,(MethodInfo *)0x0),
           pSVar3 == (SkyParam *)0x0)) goto code_?;
        iVar6 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)pSVar3,(MethodInfo *)0x0);
        bVar7 = 1 < iVar6;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        return 1;
      }
    }
    pMVar8 = (this->fields)._._.worldObjectParent;
    package = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)package,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    in_stack_9 = 0;
    key = (String *)func_?(TypeInfo__System__Byte,&stack0x00000023);
    value = (CrossPlatformInputManager_VirtualButton *)func_?(&interaction,0);
    if ((package != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)package,key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ), pMVar8 != (MVWorldObjectClient *)0x0)) {
      MVWorldObjectClient::MVWorldObjectClient_SendPackage(pMVar8,package,(MethodInfo *)0x0);
      return 1;
    }
  }
  else {
    pMVar8 = (this->fields)._._.worldObjectParent;
    if (pMVar8 != (MVWorldObjectClient *)0x0) {
      (*(code *)(pMVar8->klass->vtable).ReceiveInteractionPackage.method)
                (pMVar8,interaction.damage,interaction.impulse.x,interaction.impulse.y,
                 interaction.impulse.z,interaction._16_4_,0,
                 (pMVar8->klass->vtable).HandleInput.methodPtr);
      return 1;
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar1 = (*pcVar10)();
  return bVar1;
}


/* MVTeam get_Team() */

MVTeam__Enum
Assembly-CSharp.dll::InteractionDataHandler::InteractionDataHandler_get_Team
          (InteractionDataHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)this_01,(MethodInfo *)0x0);
    this_00 = (this->fields)._._.worldObjectParent;
    if (this_00 != (MVWorldObjectClient *)0x0) {
      actorNumber = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                    TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                              ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_00,
                               (MethodInfo *)0x0);
      if (this_02 != (SkyParam *)0x0) {
        MVar1 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                          ((MVTeamManager *)this_02,(int32_t)actorNumber,(MethodInfo *)0x0);
        return MVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  MVar1 = (*pcVar2)();
  return MVar1;
}

