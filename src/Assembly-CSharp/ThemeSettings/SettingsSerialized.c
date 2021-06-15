
/* Void CommitChanges() */

void Assembly-CSharp.dll::ThemeSettings::SettingsSerialized::SettingsSerialized_CommitChanges
               (SettingsSerialized *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WorldObjectClientRef_1_MVRoundCube_ *)(this->fields).worldObjectRef;
  if (this_00 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) {
    this_01 = WorldObjectClientRef`1[MVRoundCube]::
              WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                        (this_00,
                         MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__
                        );
    if (this_01 == (MVRoundCube *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID = (this_01->fields)._._._.id;
    woData = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)woData,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    value = ThemeWorldObject::ThemeWorldObject_get_SettingsData
                      ((ThemeWorldObject *)this_01,(MethodInfo *)0x0);
    if ((woData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)woData,StringLiteral_settings,(CrossPlatformInputManager_VirtualButton *)value
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ), this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                (this_02,worldObjectID,woData,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SettingsSerialized(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsSerialized::SettingsSerialized__ctor
               (SettingsSerialized *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>;
  this_00 = (List_1_ThemeAttributes_ThemeAttribute_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this_00,8,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  (this->fields)._.attributes = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef_2
                        (this_01,(int32_t)
                                 WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
                         ,
                         WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
                        );
    (this->fields).worldObjectRef = this_02;
    if (this_02 != (WorldObjectClientRef_1_ThemeWorldObject_ *)0x0) {
      this_03 = WorldObjectClientRef`1[MVRoundCube]::
                WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                          ((WorldObjectClientRef_1_MVRoundCube_ *)this_02,
                           MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__
                          );
      if (this_03 != (MVRoundCube *)0x0) {
        pDVar1 = ThemeWorldObject::ThemeWorldObject_get_SettingsData
                           ((ThemeWorldObject *)this_03,(MethodInfo *)0x0);
        (this->fields)._.settingsData = pDVar1;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

