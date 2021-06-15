
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TriggerCubeSettings::TriggerCubeSettings_Initialize
               (TriggerCubeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_TriggerCube,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,woID,(MethodInfo *)0x0);
      if (this_02 != (PrefabPool *)0x0) {
        this_03 = (Dictionary_2_System_Type_Pool_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
        pSVar1 = (this->fields).ScaleX;
        if (this_03 != (Dictionary_2_System_Type_Pool_ *)0x0) {
          pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_03,(Type *)StringLiteral_scaleX,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if ((pSVar1 != (SettingsSlider *)0x0) && (pPVar2 != (Pool *)0x0)) {
            if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
            goto code_?;
            pfVar3 = (float *)func_?();
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar1,StringLiteral_scaleX,*pfVar3,0.5,20.0,(MethodInfo *)0x0);
            pSVar4 = (this->fields).ScaleXInput;
            pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               (this_03,(Type *)StringLiteral_scaleX,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if ((pSVar4 != (SettingsInputFieldSlider *)0x0) && (pPVar2 != (Pool *)0x0)) {
              if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
              goto code_?;
              pfVar3 = (float *)func_?();
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                        (pSVar4,StringLiteral_scaleX,*pfVar3,(MethodInfo *)0x0);
              pSVar1 = (this->fields).ScaleY;
              pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 (this_03,(Type *)StringLiteral_scaleY,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if ((pSVar1 != (SettingsSlider *)0x0) && (pPVar2 != (Pool *)0x0)) {
                if ((pPVar2->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar3 = (float *)func_?();
                SettingsSlider::SettingsSlider_Initialize
                          (pSVar1,StringLiteral_scaleY,*pfVar3,0.5,20.0,(MethodInfo *)0x0);
                pSVar4 = (this->fields).ScaleYInput;
                pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   (this_03,(Type *)StringLiteral_scaleY,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if ((pSVar4 != (SettingsInputFieldSlider *)0x0) && (pPVar2 != (Pool *)0x0)) {
                  if ((pPVar2->klass->_0).element_class !=
                      (TypeInfo__System__Single->_0).element_class) goto code_?;
                  pfVar3 = (float *)func_?();
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                            (pSVar4,StringLiteral_scaleY,*pfVar3,(MethodInfo *)0x0);
                  pSVar1 = (this->fields).ScaleZ;
                  pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                     (this_03,(Type *)StringLiteral_scaleZ,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  if ((pSVar1 != (SettingsSlider *)0x0) && (pPVar2 != (Pool *)0x0)) {
                    if ((pPVar2->klass->_0).element_class !=
                        (TypeInfo__System__Single->_0).element_class) goto code_?;
                    pfVar3 = (float *)func_?();
                    SettingsSlider::SettingsSlider_Initialize
                              (pSVar1,StringLiteral_scaleZ,*pfVar3,0.5,20.0,(MethodInfo *)0x0);
                    pSVar4 = (this->fields).ScaleZInput;
                    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                       (this_03,(Type *)StringLiteral_scaleZ,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    if ((pSVar4 != (SettingsInputFieldSlider *)0x0) && (pPVar2 != (Pool *)0x0)) {
                      if ((pPVar2->klass->_0).element_class ==
                          (TypeInfo__System__Single->_0).element_class) {
                        pfVar3 = (float *)func_?();
                        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                                  (pSVar4,StringLiteral_scaleZ,*pfVar3,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::TriggerCubeSettings::TriggerCubeSettings_OnSettingChanged
               (TriggerCubeSettings *this,String *key,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsBase;
  if (pSVar1 == (SettingsBase *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((pSVar1->fields).woID != -1) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        wo = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(pSVar1->fields).woID,(MethodInfo *)0x0);
        if (wo == (MVWorldObjectClient *)0x0) {
          return;
        }
        if ((((uint)(TypeInfo__WorldObjectDataValidator->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__WorldObjectDataValidator->_1).cctor_started == 0)) {
          func_?();
          wo = (MVWorldObjectClient *)&UNK_?;
        }
        WorldObjectDataValidator::WorldObjectDataValidator_Validate(wo,key,value,(MethodInfo *)0x0);
        pDVar4 = (pSVar1->fields).result;
        if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                              *)pDVar4,key,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          pDVar4 = (pSVar1->fields).result;
          if (bVar3 == 0) {
            if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)pDVar4,key,(CrossPlatformInputManager_VirtualButton *)value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          else {
            if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      ((Dictionary_2_System_String_Theme_ *)pDVar4,key,(Theme *)value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                     *)func_?();
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if (this_01 !=
              (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      (this_01,key,(CrossPlatformInputManager_VirtualButton *)value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            (**(code **)(iRam_? + 0x178))();
            return;
          }
        }
      }
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

