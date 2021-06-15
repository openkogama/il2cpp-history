
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
               (CollectTheItemDropoffSettings *this,int32_t woID,GameObject *root,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pDVar1 = extraout_EDX;
  }
  else {
    pPVar2 = (PrefabPool *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,woID,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__MVBlueprintBase;
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    bVar3 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((((MVWorldObject__Class *)pPVar2->klass)->_1).naturalAligment < bVar3) ||
       ((MVBlueprintBase__Class *)
        (((MVWorldObject__Class *)pPVar2->klass)->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    this_03 = (PrefabPool *)0x0;
    if (bVar4) {
      this_03 = pPVar2;
    }
    if (this_03 == (PrefabPool *)0x0) goto code_?;
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
    Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
    if (this_01 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pDVar5 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_01,(Type *)StringLiteral_BlueprintData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    unaff_EDI = (MVBlueprintBase__Class *)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar5 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar5->klass->_1).naturalAligment < bVar3) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar5->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    this_04 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (bVar4) {
      this_04 = pDVar5;
    }
    if (this_04 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    unaff_EDI = (MVBlueprintBase__Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (this_04,(Type *)StringLiteral_ChildrenMap,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    this_02 = (SortedList_2_System_Single_System_Object_ *)func_?();
    if (unaff_EDI == (MVBlueprintBase__Class *)0x0) {
      capacity = (MVBlueprintBase__Class *)0x0;
code_?:
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
      SortedList_2_System_Single_System_Object___ctor_1
                (this_02,(int32_t)capacity,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                );
      unaff_EDI = (MVBlueprintBase__Class *)&UNK_?;
      _UNK_? = this_02;
      if (_UNK_? == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_Initialize
                (_UNK_?,(int32_t)this_01,(GameObject *)&UNK_?,
                 MVWorldObjectDocumentationType__Enum_CollectTheItem,(MethodInfo *)0x0);
      unaff_EDI = _UNK_?;
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_04,(Type *)StringLiteral_doOnce,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((unaff_EDI == (MVBlueprintBase__Class *)0x0) || (pPVar6 == (Pool *)0x0))
      goto code_?;
      if ((pPVar6->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar7 = (bool *)func_?();
        SettingsToggle::SettingsToggle_Initialize
                  ((SettingsToggle *)unaff_EDI,StringLiteral_doOnce,*pbVar7,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pIVar8 = (unaff_EDI->_0).image;
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((*(byte *)&pIVar8[4].assembly < bVar3) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         ((pIVar8[2].typeCount - 4) + (uint)bVar3 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    capacity = (MVBlueprintBase__Class *)0x0;
    if (bVar4) {
      capacity = unaff_EDI;
    }
    pDVar1 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (capacity != (MVBlueprintBase__Class *)0x0) goto code_?;
  }
  func_?(unaff_EDI,pDVar1);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::CollectTheItemDropoffSettings::
     CollectTheItemDropoffSettings_OnSettingChanged
               (CollectTheItemDropoffSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (this_01 !=
      (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_01,key,(CrossPlatformInputManager_VirtualButton *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_01,StringLiteral_ChildrenMap,
               (CrossPlatformInputManager_VirtualButton *)(this->fields).childMap,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this_00 = (this->fields).settingsBase;
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged
                (this_00,StringLiteral_BlueprintData,(Object *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

