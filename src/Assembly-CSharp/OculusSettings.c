
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::OculusSettings::OculusSettings_Initialize
               (OculusSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Oculus,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,woID,(MethodInfo *)0x0);
      (this->fields).target = (MVWorldObjectClient *)this_02;
      if (this_02 != (PrefabPool *)0x0) {
        this_03 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
        pSVar1 = (this->fields).rangeSlider;
        if (this_03 !=
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) {
          pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)this_03,(Type *)StringLiteral_Radius
                              ,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?();
          }
          fVar3 = mscorlib.dll::System::Convert::Convert_ToSingle_14
                            ((Object *)pPVar2,(MethodInfo *)0x0);
          if (pSVar1 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar1,StringLiteral_Radius,fVar3,5.0,40.0,(MethodInfo *)0x0);
            pSVar1 = (this->fields).aggresionSlider;
            pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               ((Dictionary_2_System_Type_Pool_ *)this_03,
                                (Type *)StringLiteral_Speed,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            fVar3 = mscorlib.dll::System::Convert::Convert_ToSingle_14
                              ((Object *)pPVar2,(MethodInfo *)0x0);
            if (pSVar1 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar1,StringLiteral_Speed,fVar3,10.0,50.0,(MethodInfo *)0x0);
              value = 100;
              bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                      WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                      KogamaSettingWrapperBase]::
                      Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                (this_03,StringLiteral_Lives,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar4 != 0) {
                pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   ((Dictionary_2_System_Type_Pool_ *)this_03,
                                    (Type *)StringLiteral_Lives,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
                  func_?();
                }
                value = mscorlib.dll::System::Convert::Convert_ToInt32_16
                                  ((Object *)pPVar2,(MethodInfo *)0x0);
              }
              pSVar1 = (this->fields).numOfLivesSlider;
              if (pSVar1 != (SettingsSlider *)0x0) {
                SettingsSlider::SettingsSlider_Initialize_1
                          (pSVar1,StringLiteral_Lives,value,1,100,(MethodInfo *)0x0);
                pSVar5 = (this->fields).numOfLivesInputSlider;
                if (pSVar5 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (pSVar5,StringLiteral_Lives,value,(MethodInfo *)0x0);
                  if (value == 100) {
                    pSVar5 = (this->fields).numOfLivesInputSlider;
                    if (pSVar5 == (SettingsInputFieldSlider *)0x0) goto code_?;
                    SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
                              (pSVar5,StringLiteral_u221E,(MethodInfo *)0x0);
                  }
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::OculusSettings::OculusSettings_OnSettingChanged
               (OculusSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = key;
  if (key == (String *)0x0) {
code_?:
    pSVar1 = (this->fields).settingsBase;
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    key = (String *)mscorlib.dll::System::Convert::Convert_ToSingle_14(value,(MethodInfo *)0x0);
    value_00 = (Object *)func_?(TypeInfo__System__Single,&key);
  }
  else {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (a,StringLiteral_Lives,(MethodInfo *)0x0);
    if (bVar2 == 0) goto code_?;
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    pSVar3 = (String *)mscorlib.dll::System::Convert::Convert_ToInt32_16(value,(MethodInfo *)0x0);
    if (pSVar3 == (String *)0x64) {
      this_00 = (this->fields).numOfLivesInputSlider;
      if (this_00 != (SettingsInputFieldSlider *)0x0) {
        SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
                  (this_00,StringLiteral_u221E,(MethodInfo *)0x0);
        this_02 = (Dictionary_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        woDataToRemove = this_02;
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        key = (String *)0x64;
        value_01 = (CrossPlatformInputManager_VirtualButton *)
                   func_?(TypeInfo__System__Int32,&key);
        if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)this_02,StringLiteral_Lives,value_01,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          this_01 = (this->fields).target;
          if ((this_01 != (MVWorldObjectClient *)0x0) &&
             (worldObjectID =
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0),
             this_03 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                      (this_03,(int32_t)worldObjectID,woDataToRemove,(MethodInfo *)0x0);
            pSVar1 = (this->fields).settingsBase;
            if (pSVar1 != (SettingsBase *)0x0) {
              SettingsBase::SettingsBase_RemoveData(pSVar1,a,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pSVar1 = (this->fields).settingsBase;
    key = pSVar3;
    value_00 = (Object *)func_?(TypeInfo__System__Int32,&key);
  }
  if (pSVar1 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(pSVar1,a,value_00,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

