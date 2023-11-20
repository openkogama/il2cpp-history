
/* Dictionary`2[System.Object,System.Object] MakePlayerKilledMessage(Int32, Int32,
   PlayerKilledByType) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::GameMessages::GameMessages_MakePlayerKilledMessage
          (int32_t avatarId,int32_t killerId,PlayerKilledByType__Enum weaponType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStack_1[3] = 0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,auStack_1 + 3);
  iStack_3 = avatarId;
  pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,pOVar2,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    auStack_1[2] = 1;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,auStack_1 + 2);
    iStack_5 = killerId;
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,pOVar2,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    auStack_1[1] = 2;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,auStack_1 + 1);
    auStack_1[0] = (undefined1)weaponType;
    pOVar4 = (Object *)func_?(TypeInfo__System__Byte,auStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,pOVar2,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return (Dictionary_2_System_Object_System_Object_ *)this;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pDVar7 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar6)();
  return pDVar7;
}


/* GameMessages+AchievementGetMessage
   ParseAchievementGetMessage(Dictionary`2[System.Object,System.Object]) */

GameMessages_AchievementGetMessage
Assembly-CSharp.dll::GameMessages::GameMessages_ParseAchievementGetMessage
          (Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AchievementType);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)package,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar4 = (int32_t *)func_?(TVar2.m_Index);
      iVar5 = *piVar4;
      pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)package,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__MV__Common__AchievementType,TVar2.m_Index);
      if (TVar2.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
            (TypeInfo__MV__Common__AchievementType->_0).element_class) {
          piVar4 = (int32_t *)func_?(TVar2.m_Index);
          GVar6.achievementType = *piVar4;
          GVar6.playerId = iVar5;
          return GVar6;
        }
        goto code_?;
      }
    }
  }
  uVar3 = func_?();
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
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,in_ECX & 0xffffff);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)package,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
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
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,in_ECX & 0xffffff);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)package,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
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
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,in_ECX & 0xffffff);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)package,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
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
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pSStack_3 = (String__Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)package,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (pSStack_3 != (String__Class *)0x0) {
      uVar4 = CONCAT44(TypeInfo__System__Int32,pSStack_3);
      if (*(Il2CppClass **)(*(int *)pSStack_3 + 0x20) == (TypeInfo__System__Int32->_0).element_class
         ) {
        func_?();
        uStack_5 = 3;
        pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_5);
        TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)package,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pSStack_3 = (String__Class *)0x0;
        if (TVar6.m_Index == 0) {
code_?:
          ppSVar7 = &pSStack_3;
          func_?();
          GVar8.userName = (String *)pSStack_3;
          GVar8.playerId = (int32_t)ppSVar7;
          return GVar8;
        }
        if (*(String__Class **)TVar6.m_Index == TypeInfo__System__String) {
          pSStack_3 = (String__Class *)TVar6;
        }
        uVar4 = CONCAT44(TypeInfo__System__String,TVar6.m_Index);
        if (pSStack_3 != (String__Class *)0x0) {
          pSStack_3 = (String__Class *)0x0;
          if (*(String__Class **)TVar6.m_Index == TypeInfo__System__String) {
            pSStack_3 = (String__Class *)TVar6;
          }
          uVar4 = CONCAT44(TypeInfo__System__String,TVar6.m_Index);
          if (pSStack_3 != (String__Class *)0x0) goto code_?;
        }
      }
      goto code_?;
    }
  }
  uVar4 = func_?();
code_?:
  pSStack_3 = (String__Class *)((ulonglong)uVar4 >> 0x20);
  func_?((int)uVar4);
  pcVar9 = (code *)swi(3);
  GVar8 = (GameMessages_PlayerLeftMessage)(*pcVar9)();
  return GVar8;
}

