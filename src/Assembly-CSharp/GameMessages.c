
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
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,pOVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,pOVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,pOVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return pDVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar4)();
  return pDVar1;
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (package,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?(pOVar1);
      iVar4 = *piVar3;
      pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (package,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar2 = CONCAT44(TypeInfo__MV__Common__AchievementType,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class ==
            (TypeInfo__MV__Common__AchievementType->_0).element_class) {
          piVar3 = (int32_t *)func_?(pOVar1);
          GVar5.achievementType = *piVar3;
          GVar5.playerId = iVar4;
          return GVar5;
        }
        goto code_?;
      }
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar6 = (code *)swi(3);
  GVar5 = (GameMessages_AchievementGetMessage)(*pcVar6)();
  return GVar5;
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
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,in_ECX & 0xffffff);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (package,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
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
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,in_ECX & 0xffffff);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (package,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
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
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,in_ECX & 0xffffff);
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (package,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
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
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (package,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (pSStack_3 != (String__Class *)0x0) {
      uVar4 = CONCAT44(TypeInfo__System__Int32,pSStack_3);
      if ((((Object__Class *)(pSStack_3->_0).image)->_0).element_class ==
          (TypeInfo__System__Int32->_0).element_class) {
        func_?();
        uStack_5 = 3;
        pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_5);
        pSVar6 = (String__Class *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (package,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pSStack_3 = (String__Class *)0x0;
        if (pSVar6 == (String__Class *)0x0) {
code_?:
          ppSVar7 = &pSStack_3;
          func_?();
          GVar8.userName = (String *)pSStack_3;
          GVar8.playerId = (int32_t)ppSVar7;
          return GVar8;
        }
        if ((String__Class *)(pSVar6->_0).image == TypeInfo__System__String) {
          pSStack_3 = pSVar6;
        }
        uVar4 = CONCAT44(TypeInfo__System__String,pSVar6);
        if (pSStack_3 != (String__Class *)0x0) {
          pSStack_3 = (String__Class *)0x0;
          if ((String__Class *)(pSVar6->_0).image == TypeInfo__System__String) {
            pSStack_3 = pSVar6;
          }
          uVar4 = CONCAT44(TypeInfo__System__String,pSVar6);
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

