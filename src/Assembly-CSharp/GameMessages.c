
/* Dictionary`2[System.Object,System.Object] MakePlayerKilledMessage(Int32, Int32,
   PlayerKilledByType) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::GameMessages::GameMessages_MakePlayerKilledMessage
          (int32_t avatarId,int32_t killerId,PlayerKilledByType__Enum weaponType,MethodInfo *method)

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
  auStack_2[3] = 0;
  pSVar3 = (String *)func_?(TypeInfo__System__Byte,auStack_2 + 3);
  iStack_4 = avatarId;
  pCVar5 = (CrossPlatformInputManager_VirtualButton *)
           func_?(TypeInfo__System__Int32,&iStack_4);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    auStack_2[2] = 1;
    pSVar3 = (String *)func_?(TypeInfo__System__Byte,auStack_2 + 2);
    iStack_6 = killerId;
    pCVar5 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&iStack_6);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    auStack_2[1] = 2;
    pSVar3 = (String *)func_?(TypeInfo__System__Byte,auStack_2 + 1);
    auStack_2[0] = (undefined1)weaponType;
    pCVar5 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Byte,auStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar3,pCVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return pDVar1;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar7)();
  return pDVar1;
}


/* GameMessages+AchievementGetMessage
   ParseAchievementGetMessage(Dictionary`2[System.Object,System.Object]) */

GameMessages_AchievementGetMessage
Assembly-CSharp.dll::GameMessages::GameMessages_ParseAchievementGetMessage
          (Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)package,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
    if (pPVar2 != (Pool *)0x0) {
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar4 = (int32_t *)func_?(pPVar2);
      iVar5 = *piVar4;
      pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)package,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__MV__Common__AchievementType,pPVar2);
      if (pPVar2 != (Pool *)0x0) {
        if ((pPVar2->klass->_0).element_class ==
            (TypeInfo__MV__Common__AchievementType->_0).element_class) {
          piVar4 = (int32_t *)func_?(pPVar2);
          GVar6.achievementType = *piVar4;
          GVar6.playerId = iVar5;
          return GVar6;
        }
        goto code_?;
      }
    }
  }
  uVar3 = func_?(0);
code_?:
  func_?(uVar3);
  pcVar7 = (code *)swi(3);
  GVar6 = (GameMessages_AchievementGetMessage)(*pcVar7)();
  return GVar6;
}


/* GameMessages+CheckpointMessage ParseCheckpointMessage(Dictionary`2[System.Object,System.Object])
    */

GameMessages_CheckpointMessage
Assembly-CSharp.dll::GameMessages::GameMessages_ParseCheckpointMessage
          (Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,in_ECX & 0xffffff);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)package,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        return (GameMessages_CheckpointMessage)*piVar2;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  GVar4.playerID = (*pcVar3)();
  return (GameMessages_CheckpointMessage)GVar4.playerID;
}


/* GameMessages+CollectibleMessage
   ParseCollectibleMessage(Dictionary`2[System.Object,System.Object]) */

GameMessages_CollectibleMessage
Assembly-CSharp.dll::GameMessages::GameMessages_ParseCollectibleMessage
          (Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,in_ECX & 0xffffff);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)package,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        return (GameMessages_CollectibleMessage)*piVar2;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  GVar4.playerId = (*pcVar3)();
  return (GameMessages_CollectibleMessage)GVar4.playerId;
}


/* GameMessages+PlayerJoinMessage ParsePlayerJoinMessage(Dictionary`2[System.Object,System.Object])
    */

GameMessages_PlayerJoinMessage
Assembly-CSharp.dll::GameMessages::GameMessages_ParsePlayerJoinMessage
          (Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,in_ECX & 0xffffff);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)package,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        return (GameMessages_PlayerJoinMessage)*piVar2;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  GVar4.playerId = (*pcVar3)();
  return (GameMessages_PlayerJoinMessage)GVar4.playerId;
}


/* GameMessages+PlayerLeftMessage ParsePlayerLeftMessage(Dictionary`2[System.Object,System.Object])
    */

GameMessages_PlayerLeftMessage
Assembly-CSharp.dll::GameMessages::GameMessages_ParsePlayerLeftMessage
          (Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (package == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)package,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
    if (pPVar2 == (Pool *)0x0) goto code_?;
    if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar4 = (int32_t *)func_?(pPVar2);
    iVar5 = *piVar4;
    pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
    pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)package,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pPVar2 = (Pool *)0x0;
    if (pPVar6 == (Pool *)0x0) {
code_?:
      GVar7.userName = (String *)pPVar2;
      GVar7.playerId = iVar5;
      return GVar7;
    }
    if ((String__Class *)pPVar6->klass == TypeInfo__System__String) {
      pPVar2 = pPVar6;
    }
    if (pPVar2 != (Pool *)0x0) goto code_?;
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar8 = (code *)swi(3);
  GVar7 = (GameMessages_PlayerLeftMessage)(*pcVar8)();
  return GVar7;
}

