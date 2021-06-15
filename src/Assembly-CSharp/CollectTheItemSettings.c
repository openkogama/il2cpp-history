
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::CollectTheItemSettings::CollectTheItemSettings_Initialize
               (CollectTheItemSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

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
code_?:
    func_?(unaff_EDI,pDVar1);
  }
  else {
    pMVar2 = (MVBlueprintBase *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,woID,(MethodInfo *)0x0);
    if (pMVar2 == (MVBlueprintBase *)0x0) goto code_?;
    bVar3 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
       ((MVBlueprintBase__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    this_01 = (MVBlueprintBase *)0x0;
    if (bVar4) {
      this_01 = pMVar2;
    }
    if (this_01 == (MVBlueprintBase *)0x0) goto code_?;
    this_02 = MVBlueprintBase::MVBlueprintBase_GetChild
                        (this_01,StringLiteral_CollectableInstance,(MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
    this_03 = (PrefabPool *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
    pDVar5 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
    if (pDVar5 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pDVar5 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar5,(Type *)StringLiteral_BlueprintData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
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
    this_05 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (bVar4) {
      this_05 = pDVar5;
    }
    if (this_05 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_05,(Type *)StringLiteral_ChildrenMap,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      this_04 = (SortedList_2_System_Single_System_Object_ *)func_?();
      if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        capacity = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
        System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
        SortedList_2_System_Single_System_Object___ctor_1
                  (this_04,(int32_t)capacity,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                  );
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)&UNK_?;
        _UNK_? = this_04;
        if (_UNK_? == (SettingsBase *)0x0) goto code_?;
        SettingsBase::SettingsBase_Initialize
                  (_UNK_?,0,(GameObject *)0x0,
                   MVWorldObjectDocumentationType__Enum_CollectTheItem,(MethodInfo *)0x0);
        unaff_EDI = _UNK_?;
        pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_05,(Type *)StringLiteral_hasIndicator,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if ((unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
           (pPVar6 == (Pool *)0x0)) goto code_?;
        if ((pPVar6->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          pbVar7 = (bool *)func_?();
          SettingsToggle::SettingsToggle_Initialize
                    ((SettingsToggle *)unaff_EDI,StringLiteral_hasIndicator,*pbVar7,
                     (MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      pIVar8 = (unaff_EDI->_0).image;
      bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((*(byte *)&pIVar8[4].assembly < bVar3) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           ((pIVar8[2].typeCount - 4) + (uint)bVar3 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      capacity = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (bVar4) {
        capacity = unaff_EDI;
      }
      pDVar1 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (capacity != (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      goto code_?;
    }
  }
  func_?();
  pMVar2 = extraout_EDX_00;
code_?:
  func_?(pMVar2);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::CollectTheItemSettings::CollectTheItemSettings_OnSettingChanged
               (CollectTheItemSettings *this,String *key,Object *value,MethodInfo *method)

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

