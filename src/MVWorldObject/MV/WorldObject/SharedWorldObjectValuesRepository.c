
/* Dictionary`2[System.Object,System.Object] AdvancedGhostData() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
SharedWorldObjectValuesRepository_AdvancedGhostData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,StringLiteral_RespawnInterval,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return pDVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar1;
}


/* Dictionary`2[System.Object,System.Object] GetValues(WorldObjectType) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
SharedWorldObjectValuesRepository_GetValues
          (WorldObjectType__Enum worldObjectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository);
  }
  pDVar1 = TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->static_fields->values;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_Dictionary_2_System_Object_System_Object_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            WorldObjectType,System::Object]::
            Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)pDVar1,
                       worldObjectType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                      );
    if (bVar2 == 0) {
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      return pDVar3;
    }
    if ((((uint)(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar1 = TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->static_fields->values;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
      WorldObjectType,System::Object]::
      Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__get_Item
                ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)pDVar1,
                 worldObjectType,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_MV__WorldObject__WorldObjectType_
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pDVar3 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable
                         (in_stack_4,pDVar3,(MethodInfo *)0x0);
      return pDVar3;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
  return pDVar3;
}


/* Dictionary`2[System.Object,System.Object] SentryGun() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
SharedWorldObjectValuesRepository_SentryGun(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,StringLiteral_RespawnInterval,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return pDVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar1;
}


/* SharedWorldObjectValuesRepository() */

void MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
     SharedWorldObjectValuesRepository__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_WorldObject_WorldObjectType_Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Dictionary__
            );
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pCVar2 = (CrossPlatformInputManager_VirtualButton *)
           func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (pDVar1 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                 *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (pDVar1,StringLiteral_RespawnInterval,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if (this != (Dictionary_2_MV_WorldObject_WorldObjectType_Dictionary_2_System_Object_System_Object_
                 *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
      WorldObjectType,System::Object]::
      Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__Add
                ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)this,
                 WorldObjectType__Enum_AdvancedGhost,(Object *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar1 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pCVar2 = (CrossPlatformInputManager_VirtualButton *)func_?();
      if (pDVar1 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (pDVar1,StringLiteral_RespawnInterval,pCVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
        WorldObjectType,System::Object]::
        Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__Add
                  ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)this,
                   WorldObjectType__Enum_SentryGun,(Object *)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                  );
        TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->static_fields->values = this;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

