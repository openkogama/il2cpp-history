
/* String GetRegPath(ApplicationDesc+RegistryKey) */

String * Assembly-CSharp.dll::RegistryScanner::RegistryScanner_GetRegPath
                   (ApplicationDesc_RegistryKey *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((key != (ApplicationDesc_RegistryKey *)0x0) &&
     (pSVar1 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)key,(MethodInfo *)0x0),
     pSVar1 != (String *)0x0)) {
    iVar2 = mscorlib.dll::System::String::String_IndexOf_2(pSVar1,0x5c,(MethodInfo *)0x0);
    key_00 = (Object__Array__Class *)
             mscorlib.dll::System::String::String_Substring_1(pSVar1,0,iVar2,(MethodInfo *)0x0);
    iVar2 = mscorlib.dll::System::String::String_IndexOf_2(pSVar1,0x5c,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
    iVar2 = mscorlib.dll::System::String::String_LastIndexOf(pSVar1,0x5c,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar4 = TypeInfo__System__String->static_fields->Empty;
    if (iVar3 < iVar2) {
      pSVar4 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar1,iVar3,iVar2 - iVar3,(MethodInfo *)0x0);
    }
    name = (MethodInfo *)
           mscorlib.dll::System::String::String_Substring(pSVar1,iVar2 + 1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__RegistryScanner->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RegistryScanner->_1).cctor_started == 0)) {
      func_?(TypeInfo__RegistryScanner);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__RegistryScanner->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RegistryScanner->_1).cctor_started == 0)) {
      func_?(TypeInfo__RegistryScanner);
    }
    this = (Dictionary_2_System_Type_Pool_ *)TypeInfo__RegistryScanner->static_fields->registerRoots
    ;
    if (this != (Dictionary_2_System_Type_Pool_ *)0x0) {
      this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (this,(Type *)key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>__get_Item_System__String_
                          );
      if (this_00 != (Pool *)0x0) {
        uVar5 = 0;
        this_01 = (MethodInfo *)
                  mscorlib.dll::Microsoft::Win32::RegistryKey::RegistryKey_OpenSubKey
                            ((RegistryKey *)this_00,pSVar4,(MethodInfo *)0x0);
        if (this_01 != (MethodInfo *)0x0) {
          key = (ApplicationDesc_RegistryKey *)0x0;
          pMVar6 = this_01;
          bVar7 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton::
                  CrossPlatformInputManager_VirtualButton_get_matchWithInputManager
                            ((CrossPlatformInputManager_VirtualButton *)0x0,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            key = (ApplicationDesc_RegistryKey *)&UNK_?;
            method = this_01;
            key = (ApplicationDesc_RegistryKey *)
                  mscorlib.dll::Microsoft::Win32::RegistryKey::RegistryKey_GetSubKeyNames
                            ((RegistryKey *)this_01,(MethodInfo *)0x0);
            iVar3 = 0;
            if ((String__Array *)key == (String__Array *)0x0) goto code_?;
            while( true ) {
              if (*(int *)&(key->fields).strictComparison <= iVar3) {
                return (String *)0x0;
              }
              pSVar1 = (String *)func_?();
              pRVar8 = mscorlib.dll::Microsoft::Win32::RegistryKey::RegistryKey_OpenSubKey
                                 ((RegistryKey *)this_01,pSVar1,(MethodInfo *)0x0);
              if ((pRVar8 == (RegistryKey *)0x0) ||
                 (pSVar1 = (String *)
                           MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                           KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                           KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                     ((KogamaSettingNumericBase_1_System_Single_ *)pRVar8,
                                      (MethodInfo *)0x0), pSVar1 == (String *)0x0))
              goto code_?;
              iVar2 = mscorlib.dll::System::String::String_LastIndexOf
                                (pSVar1,0x5c,(MethodInfo *)0x0);
              pSVar1 = mscorlib.dll::System::String::String_Substring
                                 (pSVar1,iVar2 + 1,(MethodInfo *)0x0);
              if ((pSVar1 == (String *)0x0) ||
                 ((pSVar1 = mscorlib.dll::System::String::String_ToLowerInvariant
                                      (pSVar1,(MethodInfo *)0x0), name == (MethodInfo *)0x0 ||
                  (pSVar4 = mscorlib.dll::System::String::String_ToLowerInvariant
                                      ((String *)name,(MethodInfo *)0x0), pSVar1 == (String *)0x0)))
                 ) goto code_?;
              this_01 = pMVar6;
              bVar7 = mscorlib.dll::System::String::String_StartsWith
                                (pSVar1,pSVar4,(MethodInfo *)0x0);
              if (bVar7 != 0) break;
              iVar3 = iVar3 + 1;
              pMVar6 = this_01;
            }
            uVar5 = 5;
            key_00 = TypeInfo__System__Object;
            args = (Object__Array *)func_?();
          }
          else {
            key = (ApplicationDesc_RegistryKey *)this_01;
            method = name;
            pRVar8 = mscorlib.dll::Microsoft::Win32::RegistryKey::RegistryKey_OpenSubKey
                               ((RegistryKey *)this_01,(String *)name,(MethodInfo *)0x0);
            if (pRVar8 == (RegistryKey *)0x0) {
              return (String *)0x0;
            }
            args = (Object__Array *)func_?();
          }
          if (args != (Object__Array *)0x0) {
            func_?(args,key_00);
            func_?(0,key_00);
            key = (ApplicationDesc_RegistryKey *)0x5c;
            uVar9 = func_?(TypeInfo__System__Char,&key);
            func_?(args,uVar9);
            func_?(1,uVar9);
            func_?(args,uVar5);
            func_?(2,uVar5);
            uVar5 = func_?(TypeInfo__System__Char,&stack0xfffffff0);
            func_?(args,uVar5);
            func_?(3,uVar5);
            func_?(args,name);
            func_?(4,name);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar1 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
            return pSVar1;
          }
          goto code_?;
        }
      }
      return (String *)0x0;
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar10)();
  return pSVar1;
}


/* RegistryKey GetRoot(String) */

RegistryKey *
Assembly-CSharp.dll::RegistryScanner::RegistryScanner_GetRoot(String *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__RegistryScanner->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__RegistryScanner->_1).cctor_started == 0)) {
    func_?(TypeInfo__RegistryScanner);
  }
  this = (Dictionary_2_System_Type_Pool_ *)TypeInfo__RegistryScanner->static_fields->registerRoots;
  if (this != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this,(Type *)root,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>__get_Item_System__String_
                       );
    return (RegistryKey *)pPVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pRVar3 = (RegistryKey *)(*pcVar2)();
  return pRVar3;
}


/* Void RegistrySearch(ApplicationDesc) */

void Assembly-CSharp.dll::RegistryScanner::RegistryScanner_RegistrySearch
               (ApplicationDesc *appDesc,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (appDesc != (ApplicationDesc *)0x0) {
    iVar2 = 0x10;
    while (pAVar3 = (appDesc->fields).associatedRegistryKeys,
          pAVar3 != (ApplicationDesc_RegistryKey__Array *)0x0) {
      if ((int)pAVar3->max_length <= (int)uVar1) {
        return;
      }
      if (pAVar3 == (ApplicationDesc_RegistryKey__Array *)0x0) break;
      if (pAVar3->max_length <= uVar1) {
        uVar4 = func_?(0,0);
        func_?(uVar4);
        break;
      }
      key = *(ApplicationDesc_RegistryKey **)((int)pAVar3->vector + iVar2 + -0x10);
      if ((((uint)(TypeInfo__RegistryScanner->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__RegistryScanner->_1).cctor_started == 0)) {
        func_?(TypeInfo__RegistryScanner);
      }
      pSVar5 = RegistryScanner_GetRegPath(key,(MethodInfo *)0x0);
      if (pSVar5 != (String *)0x0) {
        this = (HackingToolDetector_HackingToolReport *)
               func_?(TypeInfo__HackingToolDetector__HackingToolReport);
        HackingToolDetector+HackingToolReport::HackingToolDetector_HackingToolReport__ctor_2
                  (this,appDesc,key,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
          func_?(TypeInfo__HackingToolDetector);
        }
        HackingToolDetector::HackingToolDetector_Report(this,(MethodInfo *)0x0);
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 4;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void StartScan(ApplicationDesc[]) */

void Assembly-CSharp.dll::RegistryScanner::RegistryScanner_StartScan
               (ApplicationDesc__Array *banList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (banList != (ApplicationDesc__Array *)0x0) {
    ppAVar2 = banList->vector;
    while( true ) {
      if ((int)banList->max_length <= (int)uVar1) {
        return;
      }
      if (banList->max_length <= uVar1) break;
      appDesc = *ppAVar2;
      if ((((uint)(TypeInfo__RegistryScanner->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__RegistryScanner->_1).cctor_started == 0)) {
        func_?(TypeInfo__RegistryScanner);
      }
      RegistryScanner_RegistrySearch(appDesc,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      ppAVar2 = ppAVar2 + 1;
    }
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* RegistryScanner() */

void Assembly-CSharp.dll::RegistryScanner::RegistryScanner__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
          *)func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>__Dictionary__
            );
  if ((((uint)(TypeInfo__Microsoft__Win32__Registry->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Microsoft__Win32__Registry->_1).cctor_started == 0)) {
    func_?();
  }
  if (this != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this,StringLiteral_HKEY_CLASSES_ROOT,
               (CrossPlatformInputManager_VirtualButton *)
               TypeInfo__Microsoft__Win32__Registry->static_fields->ClassesRoot,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>__Add_System__String__Microsoft__Win32__RegistryKey_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this,StringLiteral_HKEY_CURRENT_CONFIG,
               (CrossPlatformInputManager_VirtualButton *)
               TypeInfo__Microsoft__Win32__Registry->static_fields->CurrentConfig,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>__Add_System__String__Microsoft__Win32__RegistryKey_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this,StringLiteral_HKEY_CURRENT_USER,
               (CrossPlatformInputManager_VirtualButton *)
               TypeInfo__Microsoft__Win32__Registry->static_fields->CurrentUser,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>__Add_System__String__Microsoft__Win32__RegistryKey_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this,StringLiteral_HKEY_DYN_DATA,
               (CrossPlatformInputManager_VirtualButton *)
               TypeInfo__Microsoft__Win32__Registry->static_fields->DynData,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>__Add_System__String__Microsoft__Win32__RegistryKey_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this,StringLiteral_HKEY_LOCAL_MACHINE,
               (CrossPlatformInputManager_VirtualButton *)
               TypeInfo__Microsoft__Win32__Registry->static_fields->LocalMachine,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>__Add_System__String__Microsoft__Win32__RegistryKey_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this,StringLiteral_HKEY_PERFORMANCE_DATA,
               (CrossPlatformInputManager_VirtualButton *)
               TypeInfo__Microsoft__Win32__Registry->static_fields->PerformanceData,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>__Add_System__String__Microsoft__Win32__RegistryKey_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this,StringLiteral_HKEY_USERS,
               (CrossPlatformInputManager_VirtualButton *)
               TypeInfo__Microsoft__Win32__Registry->static_fields->Users,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_Microsoft::Win32::RegistryKey>__Add_System__String__Microsoft__Win32__RegistryKey_
              );
    TypeInfo__RegistryScanner->static_fields->registerRoots =
         (Dictionary_2_System_String_Microsoft_Win32_RegistryKey_ *)this;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

