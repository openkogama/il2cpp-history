
/* Void AddChild(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingsCollectionBase::KogamaSettingsCollectionBase_AddChild
               (KogamaSettingsCollectionBase *this,KogamaSettingWrapperBase *kogamaSetting,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((kogamaSetting != (KogamaSettingWrapperBase *)0x0) &&
     (this_00 = (this->fields).children,
     this_00 !=
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,(kogamaSetting->fields).key,
               (CrossPlatformInputManager_VirtualButton *)kogamaSetting,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_System__String__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* KogamaSettingsCollectionBase CopyWithOutChildren(KogamaSettingsCollectionBase) */

KogamaSettingsCollectionBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingsCollectionBase::KogamaSettingsCollectionBase_CopyWithOutChildren
          (KogamaSettingsCollectionBase *this,KogamaSettingsCollectionBase *parent,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.key;
  this_00 = (ScaleAnimationBase *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                           );
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
  ;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  (this_00->fields).originalScale.x = (float)this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).state = (int32_t)parent;
  (this_00->fields)._._._._.m_CachedPtr = pSVar1;
  return (KogamaSettingsCollectionBase *)this_00;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingsCollectionBase::KogamaSettingsCollectionBase_ToString
                   (KogamaSettingsCollectionBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.key;
  args = (Object__Array *)func_?(TypeInfo__System__Object,0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_3(pSVar1,args,(MethodInfo *)0x0);
  return pSVar1;
}


/* KogamaSettingsCollectionBase(String, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingsCollectionBase::KogamaSettingsCollectionBase__ctor
               (KogamaSettingsCollectionBase *this,String *key,
               KogamaSettingsCollectionBase *kogamaSettingsCollection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
  ;
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  (this->fields).children = this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._._Parent_k__BackingField = kogamaSettingsCollection;
  (this->fields)._.key = key;
  return;
}

