
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_AddModifier
               (AvatarInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 == (MVNetworkGame *)0x0) {
code_?:
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this_01 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
    mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this_01,0x19,(MethodInfo *)0x0);
    if (this_01 == (BitArray *)0x0) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_01,0,1,(MethodInfo *)0x0);
    bVar2 = (*(code *)(this->klass->vtable).HasModifierEffect.method)
                      (this,0xb,(this->klass->vtable).HandleModifierEffect.methodPtr);
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_01,4,bVar2,(MethodInfo *)0x0);
    bVar2 = (*(code *)(this->klass->vtable).HasModifierEffect.method)
                      (this,0xb,(this->klass->vtable).HandleModifierEffect.methodPtr);
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_01,6,bVar2,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                      (this_01,type,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      MVInteractable::MVInteractable_AddModifier
                ((MVInteractable *)this,type,id,additionalModifers,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Single DamageShield(Single) */

float Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DamageShield
                (AvatarInteractable *this,float amount,MethodInfo *method)

{
  if (amount < 0.0) {
    return amount;
  }
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                               (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
    pMVar1 = (this->fields)._.shield;
    if ((float)fVar2 < amount) {
      if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                   (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
        pMVar1 = (this->fields)._.shield;
        if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          (*(code *)(pMVar1->klass->vtable).set_Value.method)(pMVar1,0,pMVar1->klass[1]._0.image);
          return amount - (float)fVar2;
        }
      }
    }
    else if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                 (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
      (*(code *)(pMVar1->klass->vtable).set_Value.method)
                (pMVar1,(float)fVar2 - amount,pMVar1->klass[1]._0.image);
      return 0.0;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}


/* Void DieFromBeingStuck() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromBeingStuck
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pSVar3 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar2,(MethodInfo *)0x0);
      pDVar4 = GameMessages::GameMessages_MakePlayerKilledMessage
                         ((int32_t)pSVar3,(int32_t)pSVar3,PlayerKilledByType__Enum_Crushed,
                          (MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar5,MVGameMsgType__Enum_AvatarKilled,pDVar4,(MethodInfo *)0x0);
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pSVar3 = (String *)func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
            NamedThemeAttribute_1_UnityEngine_Color__get_Name
                      ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar2,(MethodInfo *)0x0);
            pCVar6 = (CrossPlatformInputManager_VirtualButton *)func_?();
            if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar4,pSVar3,pCVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pBVar7 = TypeInfo__System__Byte;
              pSVar3 = (String *)func_?();
              pCVar6 = (CrossPlatformInputManager_VirtualButton *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar4,pSVar3,pCVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pSVar3 = (String *)func_?();
              pCVar6 = (CrossPlatformInputManager_VirtualButton *)
                       func_?(TypeInfo__MV__Common__PlayerKilledByType);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar4,pSVar3,pCVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
                func_?(TypeInfo__NotificationController);
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_Kill,pDVar4,(MethodInfo *)0x0);
              this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(pBVar7->_0).methods;
              if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
                bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::
                        Api::NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                                  (this_00,0xe,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar8 == 0) {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar5 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar5,NotificationType__Enum_Kill,pDVar4,(MethodInfo *)0x0);
                }
                this_01 = (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)
                          (pBVar7->_0).typeMetadataHandle;
                if (this_01 != (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)0x0) {
                  System.Core.dll::System::Action`3[Single,Object,MV::Common::PlayerKilledByType]::
                  Action_3_Single_Object_MV_Common_PlayerKilledByType__Invoke
                            (this_01,1000.0,(Object *)0x0,PlayerKilledByType__Enum_Crushed,
                             MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Invoke_float__MVPlayer__MV__Common__PlayerKilledByType_
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DieFromFalling() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromFalling
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pSVar3 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar2,(MethodInfo *)0x0);
      pDVar4 = GameMessages::GameMessages_MakePlayerKilledMessage
                         ((int32_t)pSVar3,(int32_t)pSVar3,PlayerKilledByType__Enum_FallOffWorld,
                          (MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar5,MVGameMsgType__Enum_AvatarKilled,pDVar4,(MethodInfo *)0x0);
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pSVar3 = (String *)func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
            NamedThemeAttribute_1_UnityEngine_Color__get_Name
                      ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar2,(MethodInfo *)0x0);
            pCVar6 = (CrossPlatformInputManager_VirtualButton *)func_?();
            if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar4,pSVar3,pCVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pBVar7 = TypeInfo__System__Byte;
              pSVar3 = (String *)func_?();
              pCVar6 = (CrossPlatformInputManager_VirtualButton *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar4,pSVar3,pCVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pSVar3 = (String *)func_?();
              pCVar6 = (CrossPlatformInputManager_VirtualButton *)
                       func_?(TypeInfo__MV__Common__PlayerKilledByType);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar4,pSVar3,pCVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
                func_?(TypeInfo__NotificationController);
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_Kill,pDVar4,(MethodInfo *)0x0);
              this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(pBVar7->_0).methods;
              if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
                bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::
                        Api::NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                                  (this_00,10,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar8 == 0) {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar5 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar5,NotificationType__Enum_Kill,pDVar4,(MethodInfo *)0x0);
                }
                this_01 = (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)
                          (pBVar7->_0).typeMetadataHandle;
                if (this_01 != (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)0x0) {
                  System.Core.dll::System::Action`3[Single,Object,MV::Common::PlayerKilledByType]::
                  Action_3_Single_Object_MV_Common_PlayerKilledByType__Invoke
                            (this_01,1000.0,(Object *)0x0,PlayerKilledByType__Enum_FallOffWorld,
                             MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Invoke_float__MVPlayer__MV__Common__PlayerKilledByType_
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DieFromRespawn(MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromRespawn
               (AvatarInteractable *this,MVPlayer *damageDealer,PlayerKilledByType__Enum damageType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.health;
  if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                               (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
    pMVar1 = (this->fields)._.health;
    if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      (*(code *)(pMVar1->klass->vtable).set_Value.method)(pMVar1,0,pMVar1->klass[1]._0.image);
      this_00 = (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)(this->fields).OnDamageTaken
      ;
      if (this_00 != (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)0x0) {
        System.Core.dll::System::Action`3[Single,Object,MV::Common::PlayerKilledByType]::
        Action_3_Single_Object_MV_Common_PlayerKilledByType__Invoke
                  (this_00,(float)fVar2,(Object *)damageDealer,damageType,
                   MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Invoke_float__MVPlayer__MV__Common__PlayerKilledByType_
                  );
      }
      AvatarInteractable_DoKilledNotification(this,(MVPlayer *)0x0,damageType,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DieFromStuck() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromStuck
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pSVar3 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar2,(MethodInfo *)0x0);
      pDVar4 = GameMessages::GameMessages_MakePlayerKilledMessage
                         ((int32_t)pSVar3,(int32_t)pSVar3,PlayerKilledByType__Enum_Crushed,
                          (MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar5,MVGameMsgType__Enum_AvatarKilled,pDVar4,(MethodInfo *)0x0);
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pSVar3 = (String *)func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
            NamedThemeAttribute_1_UnityEngine_Color__get_Name
                      ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar2,(MethodInfo *)0x0);
            pCVar6 = (CrossPlatformInputManager_VirtualButton *)func_?();
            if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar4,pSVar3,pCVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pBVar7 = TypeInfo__System__Byte;
              pSVar3 = (String *)func_?();
              pCVar6 = (CrossPlatformInputManager_VirtualButton *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar4,pSVar3,pCVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pSVar3 = (String *)func_?();
              pCVar6 = (CrossPlatformInputManager_VirtualButton *)
                       func_?(TypeInfo__MV__Common__PlayerKilledByType);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar4,pSVar3,pCVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
                func_?(TypeInfo__NotificationController);
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_Kill,pDVar4,(MethodInfo *)0x0);
              this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(pBVar7->_0).methods;
              if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
                bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::
                        Api::NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                                  (this_00,0xe,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar8 == 0) {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar5 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar5,NotificationType__Enum_Kill,pDVar4,(MethodInfo *)0x0);
                }
                this_01 = (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)
                          (pBVar7->_0).typeMetadataHandle;
                if (this_01 != (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)0x0) {
                  System.Core.dll::System::Action`3[Single,Object,MV::Common::PlayerKilledByType]::
                  Action_3_Single_Object_MV_Common_PlayerKilledByType__Invoke
                            (this_01,1000.0,(Object *)0x0,PlayerKilledByType__Enum_Crushed,
                             MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Invoke_float__MVPlayer__MV__Common__PlayerKilledByType_
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DoKilledNotification(MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DoKilledNotification
               (AvatarInteractable *this,MVPlayer *damageDealer,
               PlayerKilledByType__Enum defaultDamageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  weaponType = CONCAT31((int3)((uint)in_stack_1 >> 8),(undefined1)defaultDamageType);
  if (damageDealer == (MVPlayer *)0x0) {
    pAVar2 = (this->fields).lastDamageSource;
    if (pAVar2 == (AvatarInteractable_DamageSource *)0x0) goto code_?;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((_UNK_? < fVar3 - (pAVar2->fields).time) ||
       (pAVar2 = (this->fields).lastDamageSource, pAVar2 == (AvatarInteractable_DamageSource *)0x0))
    {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
      pSVar6 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar5,(MethodInfo *)0x0);
    }
    else {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (((_UNK_? < fVar3 - (pAVar2->fields).time) ||
          (pAVar2 = (this->fields).lastDamageSource,
          pAVar2 == (AvatarInteractable_DamageSource *)0x0)) ||
         (this_00 = (pAVar2->fields).shooter, this_00 == (MVPlayer *)0x0)) goto code_?;
      pSVar6 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
      pAVar2 = (this->fields).lastDamageSource;
      if (((pAVar2 == (AvatarInteractable_DamageSource *)0x0) ||
          (fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0), _UNK_? < fVar3 - (pAVar2->fields).time))
         || (pAVar2 = (this->fields).lastDamageSource,
            pAVar2 == (AvatarInteractable_DamageSource *)0x0)) goto code_?;
      weaponType = CONCAT31((int3)(weaponType >> 8),(pAVar2->fields).damageType);
    }
  }
  else {
    pSVar6 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)damageDealer,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 != (MVLocalPlayer *)0x0)) {
    avatarId = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar5,(MethodInfo *)0x0);
    pDVar7 = GameMessages::GameMessages_MakePlayerKilledMessage
                       ((int32_t)avatarId,(int32_t)pSVar6,weaponType,(MethodInfo *)0x0);
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar8 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                (pMVar8,MVGameMsgType__Enum_AvatarKilled,pDVar7,(MethodInfo *)0x0);
      pDVar7 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pSVar6 = (String *)func_?();
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 != (MVLocalPlayer *)0x0)) {
        ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
        NamedThemeAttribute_1_UnityEngine_Color__get_Name
                  ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar5,(MethodInfo *)0x0);
        pCVar9 = (CrossPlatformInputManager_VirtualButton *)func_?();
        if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar7,pSVar6,pCVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar6 = (String *)func_?();
          pCVar9 = (CrossPlatformInputManager_VirtualButton *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar7,pSVar6,pCVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar6 = (String *)func_?();
          item = &stack0xfffffff9;
          pCVar9 = (CrossPlatformInputManager_VirtualButton *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar7,pSVar6,pCVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
            func_?();
          }
          NotificationController::NotificationController_OnNotificationReceived
                    (NotificationType__Enum_Kill,pDVar7,(MethodInfo *)0x0);
          this_01 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
                    (this->fields).KillNotificationBlacklist;
          if (this_01 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
            bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                    NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                              (this_01,(NativeAdType__Enum)item,
                               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                              );
            if (bVar10 == 0) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                 ((MethodInfo *)0x0);
              if (pMVar8 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
              MVNetworkGame+OperationRequests::
              MVNetworkGame_OperationRequests_PostNotificationOperation
                        (pMVar8,NotificationType__Enum_Kill,pDVar7,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Single GetBoostedHealth(Single) */

float Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_GetBoostedHealth
                (AvatarInteractable *this,float defaultHealth,MethodInfo *method)

{
  return (this->fields).boostedHealthMultiplier * defaultHealth;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_HandleMoveHit
               (AvatarInteractable *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_01 = moveHit.hit.interactionFlags._4_4_;
  if (moveHit.hit.interactionFlags._4_4_ == (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0)
  goto code_?;
  puVar1 = &UNK_?;
  pAVar2 = moveHit.hit.interactionFlags._4_4_;
  pOVar3 = AddDotsToTruncatedText+<Start>c__Iterator0::
           AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                     (moveHit.hit.interactionFlags._4_4_,(MethodInfo *)0x0);
  if ((pOVar3 != (Object *)0x0) && (pOVar3 == (Object *)0x18)) {
    unaff_EDI = (MethodInfo *)0x1a;
    pAVar2 = (AddDotsToTruncatedText_Start_c_Iterator0 *)&UNK_?;
    cVar4 = (*(code *)(this->klass->vtable).HasModifierEffect.method)();
    if (cVar4 == '\0') {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 == (MVNetworkGame *)0x0) goto code_?;
      this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_02,(MethodInfo *)0x0)
      ;
      if (this_03 ==
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0) goto code_?;
      in_stack_5 =
           (RuntimeEventManager *)
           System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     (this_03,(MethodInfo *)0x0);
      if (in_stack_5 == (RuntimeEventManager *)0x0) goto code_?;
      pAVar2 = (AddDotsToTruncatedText_Start_c_Iterator0 *)0x42200000;
      in_stack_6 = moveHit.hit._60_4_;
      puVar1 = (undefined *)moveHit.hit.interactionFlags;
      in_stack_7 = &UNK_?;
      voxelHit.point.y = moveHit.hit.point.y;
      voxelHit.point.x = moveHit.hit.point.x;
      voxelHit.point.z = moveHit.hit.point.z;
      voxelHit.normal.x = moveHit.hit.normal.x;
      voxelHit.normal.y = moveHit.hit.normal.y;
      voxelHit.normal.z = moveHit.hit.normal.z;
      voxelHit.cubePos.x = moveHit.hit.cubePos.x;
      voxelHit.cubePos.y = moveHit.hit.cubePos.y;
      voxelHit.cubePos.z = moveHit.hit.cubePos.z;
      voxelHit._30_2_ = moveHit.hit._30_2_;
      voxelHit.face = moveHit.hit.face;
      voxelHit.isCubeHit = moveHit.hit.isCubeHit;
      voxelHit._37_3_ = moveHit.hit._37_3_;
      voxelHit.woId = moveHit.hit.woId;
      voxelHit.cube = moveHit.hit.cube;
      voxelHit.distance = moveHit.hit.distance;
      voxelHit.collider = moveHit.hit.collider;
      voxelHit.transform = moveHit.hit.transform;
      voxelHit._60_4_ = in_stack_6;
      voxelHit.interactionFlags._0_4_ = puVar1;
      voxelHit.interactionFlags._4_4_ = 0x42200000;
      in_stack_8 = moveHit._60_4_;
      in_stack_9 = moveHit.hit.point.x;
      in_stack_10 = moveHit.hit.point.y;
      in_stack_11 = moveHit.hit.point.z;
      in_stack_12 = moveHit.hit.normal.x;
      in_stack_13 = moveHit.hit.normal.y;
      in_stack_14 = moveHit.hit.normal.z;
      in_stack_15 = moveHit.hit.cubePos._0_4_;
      in_stack_16 = (undefined *)moveHit.hit._28_4_;
      in_stack_17 = (SpawnRoleDataMediator *)moveHit.hit.face;
      in_stack_18 =
           (Action_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)moveHit.hit._36_4_;
      in_stack_19 =
           (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
           moveHit.hit.woId;
      in_stack_20 = (MethodInfo *)moveHit.hit.cube;
      in_stack_21 = (undefined *)moveHit.hit.distance;
      in_stack_22 = (MethodInfo *)moveHit.hit.collider;
      in_stack_23 = (AvatarInteractable *)moveHit.hit.transform;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (in_stack_5,voxelHit,0.0,unaff_EDI);
    }
  }
  pOStack_24 = AddDotsToTruncatedText+<Start>c__Iterator0::
               AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
  puStack_25 = (undefined *)0xffffffff;
  pAStack_26 = this;
  (*(code *)(this->klass->vtable).AddModifier.method)();
  if (pOVar3 == (Object *)0x0) {
    puVar27 = &stack0x00000008;
    puVar28 = auStack_29;
    for (iVar30 = 0x24; iVar30 != 0; iVar30 = iVar30 + -1) {
      *puVar28 = *puVar27;
      puVar27 = puVar27 + 1;
      puVar28 = puVar28 + 1;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pMStack_31 == (MVMaterial *)0x0) goto code_?;
    in_stack_6 = &UNK_?;
    pPVar32 = MVMaterial::MVMaterial_get_PhysicalProperties(&PStack_33,pMStack_31,(MethodInfo *)0x0);
    fStack_34 = fStack_35;
    fStack_36 = pPVar32->friction;
    fStack_37 = pPVar32->bouncyness;
    fStack_38 = pPVar32->softness;
    fStack_39 = pPVar32->staticFriction;
    pAVar2 = (AddDotsToTruncatedText_Start_c_Iterator0 *)&stack0xffffff68;
    fStack_40 = fStack_36 * fStack_35;
    puVar1 = &UNK_?;
    fVar41 = (float10)func_?();
    fStack_42 = (float)fVar41;
    cStack_43 = fStack_42 < _UNK_?;
    if (_UNK_? <= fStack_42) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        pAVar2 = (AddDotsToTruncatedText_Start_c_Iterator0 *)&UNK_?;
        func_?();
      }
      in_stack_19 =
           (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
           MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
      if (in_stack_19 ==
          (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0)
      goto code_?;
      in_stack_18 =
           (Action_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)&UNK_?;
      this_04 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          (in_stack_19,(MethodInfo *)0x0);
      if (this_04 ==
          (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
      goto code_?;
      in_stack_20 = (MethodInfo *)&UNK_?;
      in_stack_22 =
           (MethodInfo *)
           mscorlib.dll::System::Collections::Generic::
           Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
           Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                     (this_04,
                      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                     );
      if (in_stack_22 == (MethodInfo *)0x0) goto code_?;
      in_stack_6 = (undefined *)0x0;
      in_stack_23 = (AvatarInteractable *)0x3f800000;
      in_stack_21 = &UNK_?;
      ReviveState::ReviveState_SuppressSafeSpotSaving
                ((ReviveState *)in_stack_22,1.0,(MethodInfo *)0x0);
    }
    if ((((_UNK_? <= fStack_40) && (_UNK_? <= fStack_34)) &&
        (_UNK_? < fStack_36)) && (cStack_43 != '\0')) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        pAVar2 = (AddDotsToTruncatedText_Start_c_Iterator0 *)&UNK_?;
        func_?();
      }
      in_stack_17 =
           MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
      if (in_stack_17 == (SpawnRoleDataMediator *)0x0) goto code_?;
      in_stack_16 = &UNK_?;
      in_stack_19 =
           (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
           System.Core.dll::System::Linq::Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft
           ::Json::Schema::JsonSchemaType]::
           Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                     ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                       *)in_stack_17,(MethodInfo *)0x0);
      if (in_stack_19 ==
          (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0)
      goto code_?;
      in_stack_18 =
           (Action_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)&UNK_?;
      in_stack_20 =
           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
      ;
      iVar44 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                        ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                          *)in_stack_19,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                        );
      if ((iVar44 == 1) &&
         (this_05 = (Action_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                    (this->fields).OnNewSafePosition,
         this_05 != (Action_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)) {
        in_stack_17 = (SpawnRoleDataMediator *)&UNK_?;
        obj.m_DelagateState = (Object *)moveHit.positionTouchingHit.x;
        obj.m_DelagateCallback = (SendOrPostCallback *)in_stack_45;
        obj.m_WaitHandle = (ManualResetEvent *)moveHit.positionTouchingHit.y;
        in_stack_20 = (MethodInfo *)moveHit.positionTouchingHit.x;
        in_stack_21 = (undefined *)moveHit.positionTouchingHit.y;
        in_stack_22 =
             MethodInfo__System__Action<UnityEngine::Vector3>__Invoke_UnityEngine__Vector3_;
        mscorlib.dll::System::Action`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::
        Action_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Invoke
                  (this_05,obj,
                   MethodInfo__System__Action<UnityEngine::Vector3>__Invoke_UnityEngine__Vector3_);
        in_stack_18 = this_05;
        in_stack_19 = in_stack_45;
      }
    }
  }
  if ((this->fields).canWallJumpAnySurfaces != 0) {
    pAVar2 = (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0;
    puVar1 = (undefined *)0xffffffff;
    in_stack_6 = (undefined *)0x5;
    in_stack_22 = (MethodInfo *)&UNK_?;
    in_stack_23 = this;
    (*(code *)(this->klass->vtable).AddModifier.method)();
  }
  this_00 = (this->fields).materialHitHandler;
  if (this_00 != (InteractableMaterialHitHandler *)0x0) {
    uVar46 = 0;
    puVar27 = &stack0x00000008;
    puVar28 = &uStack_47;
    for (iVar30 = 0x24; iVar30 != 0; iVar30 = iVar30 + -1) {
      *puVar28 = *puVar27;
      puVar27 = puVar27 + 1;
      puVar28 = puVar28 + 1;
    }
    moveHit_00.impactVelocity.z = (float)in_stack_7;
    auVar48 = in_stack_49._0_12_;
    auVar50 = in_stack_49._12_12_;
    auVar51 = in_stack_49._24_12_;
    auVar52 = in_stack_49._36_12_;
    moveHit_00.positionTouchingHit.x = (float)auVar48._0_4_;
    moveHit_00.positionTouchingHit.y = (float)auVar48._4_4_;
    moveHit_00.positionTouchingHit.z = (float)auVar48._8_4_;
    moveHit_00.moveDirection.x = (float)auVar50._0_4_;
    moveHit_00.moveDirection.y = (float)auVar50._4_4_;
    moveHit_00.moveDirection.z = (float)auVar50._8_4_;
    moveHit_00.elipsoidNormal.x = (float)auVar51._0_4_;
    moveHit_00.elipsoidNormal.y = (float)auVar51._4_4_;
    moveHit_00.elipsoidNormal.z = (float)auVar51._8_4_;
    moveHit_00.slopeNormal.x = (float)auVar52._0_4_;
    moveHit_00.slopeNormal.y = (float)auVar52._4_4_;
    moveHit_00.slopeNormal.z = (float)auVar52._8_4_;
    moveHit_00.impactVelocity.x = (float)in_stack_49._48_4_;
    moveHit_00.impactVelocity.y = (float)in_stack_49._52_4_;
    moveHit_00._60_4_ = in_stack_5;
    moveHit_00.hit.point.x = (float)in_stack_8;
    moveHit_00.hit.point.y = in_stack_9;
    moveHit_00.hit.point.z = in_stack_10;
    moveHit_00.hit.normal.x = in_stack_11;
    moveHit_00.hit.normal.y = in_stack_12;
    moveHit_00.hit.normal.z = in_stack_13;
    moveHit_00.hit.cubePos._0_4_ = in_stack_14;
    moveHit_00.hit.cubePos.z = (int16_t)in_stack_15;
    moveHit_00.hit._30_2_ = SUB42(in_stack_15,2);
    moveHit_00.hit.face = (int32_t)in_stack_16;
    moveHit_00.hit._36_4_ = in_stack_17;
    moveHit_00.hit.woId = (int32_t)in_stack_18;
    moveHit_00.hit.cube = (Cube *)in_stack_19;
    moveHit_00.hit.distance = (float)in_stack_20;
    moveHit_00.hit.collider = (Collider *)in_stack_21;
    moveHit_00.hit.transform = (Transform *)in_stack_22;
    moveHit_00.hit._60_4_ = in_stack_23;
    moveHit_00.hit.interactionFlags._0_4_ = in_stack_6;
    moveHit_00.hit.interactionFlags._4_4_ = puVar1;
    moveHit_00.material = (MVMaterial *)pAVar2;
    moveHit_00._140_4_ = uVar46;
    InteractableMaterialHitHandler::InteractableMaterialHitHandler_HandleHit
              (this_00,moveHit_00,unaff_EDI);
    return;
  }
code_?:
  func_?();
  pcVar53 = (code *)swi(3);
  (*pcVar53)();
  return;
}


/* Void HandlePoisonResistBoost() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_HandlePoisonResistBoost
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.poisonResist = 0.0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = (PrefabPool *)
                 MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      this_01 != (PrefabPool *)0x0)) &&
     (this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_01,(MethodInfo *)0x0), this_02 != (ObjectiveArrow *)0x0)) {
    bVar1 = BoostController::BoostController_TryGetActiveBoost
                      ((BoostController *)this_02,BoostType__Enum_PoisonResistPercentage,
                       (Boost **)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (this_02 != (ObjectiveArrow *)0x0) {
      pOStack2 = Boost::Boost_get_Value((Boost *)this_02,(MethodInfo *)0x0);
      uVar3 = CONCAT44(TypeInfo__System__Int32,pOStack2);
      if (pOStack2 != (Object *)0x0) {
        if ((pOStack2->klass->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar4 = (int *)func_?();
          (this->fields)._.poisonResist = (float)*piVar4 / _UNK_?;
          return;
        }
        goto code_?;
      }
    }
  }
  pOStack2 = (Object *)0x0;
  uVar3 = func_?();
code_?:
  _puStack00000018 = uVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable`1[System.Single],
   MVRuntimeDataVariable`1[System.Int32], MVRuntimeDataVariableClampedFloat,
   WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_Init
               (AvatarInteractable *this,MVRuntimeDataVariable *runtimeDataModifiers,
               MVRuntimeDataVariable_1_System_Single_ *health,
               MVRuntimeDataVariable_1_System_Int32_ *maxHealth,
               MVRuntimeDataVariableClampedFloat *shield,
               WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = skillDataManager;
  MVInteractable::MVInteractable_Init
            ((MVInteractable *)this,runtimeDataModifiers,health,maxHealth,shield,skillDataManager,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (this_01 != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (this_01,StringLiteral_DamageReduction,(MethodInfo *)0x0);
    fVar2 = _UNK_?;
    if (bVar1 != 0) {
      skillDataManager = (WorldObjectSkillDataManager *)0x0;
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (this_01,StringLiteral_DamageReduction,(MethodInfo *)0x0);
      fVar2 = (float)(100 - iVar3) / _UNK_?;
    }
    if (this != (AvatarInteractable *)0x0) {
      (this->fields).damageMultiplier = fVar2;
      bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                        (this_01,StringLiteral_CanWallJumpAnySurface,(MethodInfo *)0x0);
      this_00 = (this->fields).materialHitHandler;
      packages = (this->fields).hitPackages;
      (this->fields).canWallJumpAnySurfaces = bVar1;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_00 != (InteractableMaterialHitHandler *)0x0) {
        method = (MethodInfo *)0x0;
        skillDataManager = (WorldObjectSkillDataManager *)parent;
        InteractableMaterialHitHandler::InteractableMaterialHitHandler_Initialize
                  (this_00,packages,parent,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          in_stack_4 = TypeInfo__MVGameControllerBase;
          in_stack_5 = &UNK_?;
          func_?();
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar6 != (MVNetworkGame *)0x0) &&
           (pPVar7 = (PrefabPool *)
                     MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
           pPVar7 != (PrefabPool *)0x0)) {
          pOVar8 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                             (pPVar7,(MethodInfo *)0x0);
          pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar9,(Object *)this,
                     MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__,
                     (MethodInfo *)0x0);
          if (pOVar8 != (ObjectiveArrow *)0x0) {
            BoostController::BoostController_SubscribeToBoostChanged
                      ((BoostController *)pOVar8,BoostType__Enum_ExtraHealthFloatMultiplier,
                       (Action *)pUVar9,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            (this->fields).boostedHealthMultiplier = 1.0;
            skillDataManager = (WorldObjectSkillDataManager *)0x0;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar6 != (MVNetworkGame *)0x0) &&
                (pPVar7 = (PrefabPool *)
                          MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
                pPVar7 != (PrefabPool *)0x0)) &&
               (pOVar8 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                   (pPVar7,(MethodInfo *)0x0), pOVar8 != (ObjectiveArrow *)0x0)) {
              bVar1 = BoostController::BoostController_TryGetActiveBoost
                                ((BoostController *)pOVar8,
                                 BoostType__Enum_ExtraHealthFloatMultiplier,
                                 (Boost **)&skillDataManager,(MethodInfo *)0x0);
              if (bVar1 != 0) {
                if ((skillDataManager == (WorldObjectSkillDataManager *)0x0) ||
                   (pOVar10 = Boost::Boost_get_Value((Boost *)skillDataManager,(MethodInfo *)0x0),
                   pOVar10 == (Object *)0x0)) goto code_?;
                if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class
                   ) goto code_?;
                piVar11 = (int *)func_?();
                (this->fields).boostedHealthMultiplier =
                     (float)*piVar11 / _UNK_? + _UNK_?;
              }
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar6 != (MVNetworkGame *)0x0) &&
                 (pPVar7 = (PrefabPool *)
                           MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
                 pPVar7 != (PrefabPool *)0x0)) {
                pOVar8 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                   (pPVar7,(MethodInfo *)0x0);
                pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar9,(Object *)this,
                           MethodInfo__AvatarInteractable__HandlePoisonResistBoost__,
                           (MethodInfo *)0x0);
                if (pOVar8 != (ObjectiveArrow *)0x0) {
                  BoostController::BoostController_SubscribeToBoostChanged
                            ((BoostController *)pOVar8,BoostType__Enum_PoisonResistPercentage,
                             (Action *)pUVar9,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?(_UNK_?);
                    cRam_? = '\x01';
                  }
                  (this->fields)._.poisonResist = 0.0;
                  skillDataManager = (WorldObjectSkillDataManager *)0x0;
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (((pMVar6 != (MVNetworkGame *)0x0) &&
                      (pPVar7 = (PrefabPool *)
                                MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar6,(MethodInfo *)0x0), pPVar7 != (PrefabPool *)0x0))
                     && (pOVar8 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                            (pPVar7,(MethodInfo *)0x0),
                        pOVar8 != (ObjectiveArrow *)0x0)) {
                    bVar1 = BoostController::BoostController_TryGetActiveBoost
                                      ((BoostController *)pOVar8,
                                       BoostType__Enum_PoisonResistPercentage,
                                       (Boost **)&skillDataManager,(MethodInfo *)0x0);
                    if (bVar1 == 0) {
                      return;
                    }
                    if ((skillDataManager != (WorldObjectSkillDataManager *)0x0) &&
                       (pOVar10 = Boost::Boost_get_Value((Boost *)skillDataManager,(MethodInfo *)0x0)
                       , pOVar10 != (Object *)0x0)) {
                      if ((pOVar10->klass->_0).element_class ==
                          (TypeInfo__System__Int32->_0).element_class) {
                        piVar11 = (int *)func_?();
                        (this->fields)._.poisonResist = (float)*piVar11 / _UNK_?;
                        return;
                      }
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeSkills(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_InitializeSkills
               (AvatarInteractable *this,WorldObjectSkillDataManager *skillDataManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_DamageReduction,(MethodInfo *)0x0);
    fVar2 = _UNK_?;
    if (bVar1 != 0) {
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_DamageReduction,(MethodInfo *)0x0);
      fVar2 = (float)(100 - iVar3) / _UNK_?;
    }
    if (this != (AvatarInteractable *)0x0) {
      (this->fields).damageMultiplier = fVar2;
      bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                        (skillDataManager,StringLiteral_CanWallJumpAnySurface,(MethodInfo *)0x0);
      (this->fields).canWallJumpAnySurfaces = bVar1;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsGroundedSafely(MVControllerColliderHit) */

bool Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_IsGroundedSafely
               (AvatarInteractable *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (moveHit.hit.interactionFlags._4_4_ != (MVMaterial *)0x0) {
    pPVar1 = MVMaterial::MVMaterial_get_PhysicalProperties
                       (&PStack_2,moveHit.hit.interactionFlags._4_4_,(MethodInfo *)0x0);
    fStack_3 = moveHit.slopeNormal.x;
    fStack_4 = pPVar1->friction;
    fStack_5 = pPVar1->bouncyness;
    fStack_6 = pPVar1->softness;
    fStack_7 = pPVar1->staticFriction;
    fStack_8 = fStack_4 * moveHit.slopeNormal.x;
    fVar9 = (float10)func_?(&moveHit.slopeNormal.z,0);
    fStack_10 = (float)fVar9;
    bVar11 = fStack_10 < _UNK_?;
    if (bVar11) {
code_?:
      if (((fStack_8 < _UNK_?) || (fStack_3 < _UNK_?)) ||
         (fStack_4 <= _UNK_?)) {
        bVar11 = false;
      }
      return bVar11;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
              MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (this_00 !=
        (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0) {
      this_01 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          (this_00,(MethodInfo *)0x0);
      if (this_01 !=
          (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
        this_02 = (ReviveState *)
                  mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                            (this_01,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                            );
        if (this_02 != (ReviveState *)0x0) {
          ReviveState::ReviveState_SuppressSafeSpotSaving(this_02,1.0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_OnDestroy
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pPVar3 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pPVar3 != (PrefabPool *)0x0)) {
    pOVar4 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(pPVar3,(MethodInfo *)0x0);
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,unaff_EDI,MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__,
               (MethodInfo *)0x0);
    if (pOVar4 != (ObjectiveArrow *)0x0) {
      BoostController::BoostController_UnSubscribeToBoostChanged
                ((BoostController *)pOVar4,BoostType__Enum_ExtraHealthFloatMultiplier,
                 (Action *)pUVar5,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pPVar3 = (PrefabPool *)
                   MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pPVar3 != (PrefabPool *)0x0)) {
        pOVar4 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                           (pPVar3,(MethodInfo *)0x0);
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)&UNK_?,
                   MethodInfo__AvatarInteractable__HandlePoisonResistBoost__,(MethodInfo *)0x0);
        if (pOVar4 != (ObjectiveArrow *)0x0) {
          BoostController::BoostController_UnSubscribeToBoostChanged
                    ((BoostController *)pOVar4,BoostType__Enum_PoisonResistPercentage,
                     (Action *)pUVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RestoreShield(Single) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_RestoreShield
               (AvatarInteractable *this,float restoredShieldAmount,MethodInfo *method)

{
  MVInteractable::MVInteractable_RestoreShield
            ((MVInteractable *)this,restoredShieldAmount,(MethodInfo *)0x0);
  this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnShieldReplenished;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetupBoostedHealthMultiplier() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_SetupBoostedHealthMultiplier
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).boostedHealthMultiplier = 1.0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = (PrefabPool *)
                 MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      this_01 != (PrefabPool *)0x0)) &&
     (this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_01,(MethodInfo *)0x0), this_02 != (ObjectiveArrow *)0x0)) {
    bVar1 = BoostController::BoostController_TryGetActiveBoost
                      ((BoostController *)this_02,BoostType__Enum_ExtraHealthFloatMultiplier,
                       (Boost **)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (this_02 != (ObjectiveArrow *)0x0) {
      pOStack2 = Boost::Boost_get_Value((Boost *)this_02,(MethodInfo *)0x0);
      uVar3 = CONCAT44(TypeInfo__System__Int32,pOStack2);
      if (pOStack2 != (Object *)0x0) {
        if ((pOStack2->klass->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar4 = (int *)func_?();
          (this->fields).boostedHealthMultiplier = (float)*piVar4 / _UNK_? + _UNK_?;
          return;
        }
        goto code_?;
      }
    }
  }
  pOStack2 = (Object *)0x0;
  uVar3 = func_?();
code_?:
  _puStack00000018 = uVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TakeDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_TakeDamage
               (AvatarInteractable *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (_UNK_? < amount) {
    bVar1 = MVInteractable::MVInteractable_IgnoreDamage
                      ((MVInteractable *)this,damageDealer,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
  }
  else {
    bVar1 = MVInteractable::MVInteractable_IgnoreHealing
                      ((MVInteractable *)this,damageDealer,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pMVar2 = (this->fields)._.health;
    if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    (*(code *)(pMVar2->klass->vtable).get_Value.method)
              (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
    pMVar3 = (this->fields)._.maxHealth;
    if (pMVar3 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
    pIVar4 = (pMVar3->klass->vtable).set_Value.methodPtr;
    iVar5 = (*(code *)(pMVar3->klass->vtable).get_Value.method)(pMVar3);
    if ((float)iVar5 <= (float)pIVar4) {
      fVar6 = (float10)(*(code *)(this->klass->vtable).HandleModifierEffect.method)
                                 (this,0x14,0,(this->klass->vtable).ClearModifiers.methodPtr);
      fVar7 = (float)fVar6;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).RestoreShield.method)(this,fVar8 * fVar7);
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 == (MVNetworkGame *)0x0) goto code_?;
  bVar1 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_01,(MethodInfo *)0x0);
  if ((bVar1 != 0) &&
     (cVar9 = (*(code *)(this->klass->vtable).HasModifierEffect.method)(this,10), cVar9 == '\0')) {
    fVar6 = (float10)(*(code *)(this->klass->vtable).HandleModifierEffect.method)
                               (this,6,0x3f800000,(this->klass->vtable).ClearModifiers.methodPtr);
    fVar7 = (this->fields).damageMultiplier * (float)(fVar6 * (float10)amount);
    if (0.0 <= fVar7) {
      pMVar10 = (this->fields)._.shield;
      if (pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
      fVar6 = (float10)(*(code *)(pMVar10->klass->vtable).get_Value.method)
                                 (pMVar10,(pMVar10->klass->vtable).set_Value.methodPtr);
      pMVar10 = (this->fields)._.shield;
      if ((float)fVar6 < fVar7) {
        if (pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
        (*(code *)(pMVar10->klass->vtable).get_Value.method)
                  (pMVar10,(pMVar10->klass->vtable).set_Value.methodPtr);
        pMVar10 = (this->fields)._.shield;
        if (pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
        pIVar11 = pMVar10->klass[1]._0.image;
        (*(code *)(pMVar10->klass->vtable).set_Value.method)(pMVar10,0);
        fVar7 = fVar7 - (float)pIVar11;
      }
      else {
        if (pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
        fVar6 = (float10)(*(code *)(pMVar10->klass->vtable).get_Value.method)
                                   (pMVar10,(pMVar10->klass->vtable).set_Value.methodPtr);
        (*(code *)(pMVar10->klass->vtable).set_Value.method)
                  (pMVar10,(float)fVar6 - fVar7,pMVar10->klass[1]._0.image);
        fVar7 = 0.0;
      }
    }
    pMVar2 = (this->fields)._.health;
    if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    (*(code *)(pMVar2->klass->vtable).get_Value.method)
              (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
    pMVar2 = (this->fields)._.health;
    if ((this->fields)._.maxHealth == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
      fVar6 = (float10)(*(code *)(pMVar2->klass->vtable).get_Value.method)
                                 (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
      pMVar12 = pMVar2->klass;
      fVar8 = (float)fVar6 - fVar7;
      pIVar11 = pMVar12[1]._0.image;
    }
    else {
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
      (*(code *)(pMVar2->klass->vtable).get_Value.method)
                (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
      pMVar3 = (this->fields)._.maxHealth;
      if (pMVar3 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
      pIVar4 = (pMVar3->klass->vtable).set_Value.methodPtr;
      iVar5 = (*(code *)(pMVar3->klass->vtable).get_Value.method)(pMVar3);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                         ((float)pIVar4 - fVar7,0.0,(float)iVar5,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._.health;
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
      pMVar12 = pMVar2->klass;
      pIVar11 = pMVar12[1]._0.image;
    }
    (*(code *)(pMVar12->vtable).set_Value.method)(pMVar2,fVar8,pIVar11);
    if (damageDealer != (MVPlayer *)0x0) {
      this_02 = (ScaleAnimationBase *)func_?(TypeInfo__AvatarInteractable__DamageSource);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,in_stack_13);
      (this_02->fields)._._._._.m_CachedPtr = damageDealer;
      *(char *)&(this_02->fields).state = (char)damageType;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this_02->fields).originalScale.x = fVar8;
      (this->fields).lastDamageSource = (AvatarInteractable_DamageSource *)this_02;
    }
    this_00 = (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)(this->fields).OnDamageTaken;
    if (this_00 != (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)0x0) {
      System.Core.dll::System::Action`3[Single,Object,MV::Common::PlayerKilledByType]::
      Action_3_Single_Object_MV_Common_PlayerKilledByType__Invoke
                (this_00,fVar7,(Object *)damageDealer,damageType,
                 MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Invoke_float__MVPlayer__MV__Common__PlayerKilledByType_
                );
    }
    pMVar2 = (this->fields)._.health;
    if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
code_?:
      func_?(0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    fVar6 = (float10)(*(code *)(pMVar2->klass->vtable).get_Value.method)
                               (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
    if (((float)fVar6 <= 0.0) && (0.0 < (float)pMVar2)) {
      AvatarInteractable_DoKilledNotification(this,damageDealer,damageType,(MethodInfo *)0x0);
    }
  }
  return;
}


/* AvatarInteractable() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable__ctor
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AvatarInteractable__DamageSource->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__AvatarInteractable__DamageSource->_1).cctor_started == 0)) {
    func_?(TypeInfo__AvatarInteractable__DamageSource);
  }
  (this->fields).lastDamageSource = TypeInfo__AvatarInteractable__DamageSource->static_fields->none;
  (this->fields).boostedHealthMultiplier = 1.0;
  (this->fields).damageMultiplier = 1.0;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__HashSet__
            );
  if (this_00 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)this_00,
               MVOperationCodes__Enum_TransferOwnership,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)this_00,
               MVOperationCodes__Enum_UpdateInventorySlots,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)this_00,MVOperationCodes__Enum_RemoveLink,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)this_00,
               MVOperationCodes__Enum_RemoveWorldObjectDataPartial,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    (this->fields).KillNotificationBlacklist = (HashSet_1_MV_Common_PlayerKilledByType_ *)this_00;
    pMVar1 = (MaterialHitPackage__Array *)func_?(TypeInfo__MaterialHitPackage,2);
    if (pMVar1 == (MaterialHitPackage__Array *)0x0) goto code_?;
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    pPVar3 = PrefabPool::PrefabPool_get_PoisonParticles(pPVar2,(MethodInfo *)0x0);
    uStack_4 = 0;
    func_?(&uStack_4,4,pPVar3,0);
    if (pMVar1->max_length != 0) {
      pMVar1->vector[0].PackageType = (int32_t)uStack_4;
      pMVar1->vector[0].ParticlePrefab = uStack_4._4_4_;
      pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar2 != (PrefabPool *)0x0) {
        pPVar3 = PrefabPool::PrefabPool_get_PoisonParticles(pPVar2,(MethodInfo *)0x0);
        func_?(&stack0xffffffec,0x14,pPVar3,0);
        if (1 < pMVar1->max_length) {
          pMVar1->vector[1].PackageType = 0;
          pMVar1->vector[1].ParticlePrefab = (ParticleSystem *)0x0;
          (this->fields).hitPackages = pMVar1;
          this_01 = (InteractableMaterialHitHandler *)func_?();
          InteractableMaterialHitHandler::InteractableMaterialHitHandler__ctor
                    (this_01,(MethodInfo *)0x0);
          (this->fields).materialHitHandler = this_01;
          MVInteractable::MVInteractable__ctor((MVInteractable *)this,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar5 = func_?(0);
  func_?(uVar5);
code_?:
  uVar5 = func_?();
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AvatarInteractable+DamageSource get_LastDamageSource() */

AvatarInteractable_DamageSource *
Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_get_LastDamageSource
          (AvatarInteractable *this,MethodInfo *method)

{
  pAVar1 = (this->fields).lastDamageSource;
  if (pAVar1 == (AvatarInteractable_DamageSource *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    pAVar1 = (AvatarInteractable_DamageSource *)(*pcVar2)();
    return pAVar1;
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar3 - (pAVar1->fields).time <= _UNK_?) {
    return (this->fields).lastDamageSource;
  }
  return (AvatarInteractable_DamageSource *)0x0;
}

