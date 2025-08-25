
/* Boolean CanWinningConditionBeFullfilledForTeam(MVTeam) */

bool Assembly-CSharp.dll::FlagWinningCondition::
     FlagWinningCondition_CanWinningConditionBeFullfilledForTeam
               (FlagWinningCondition *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = FlagWinningCondition_GetClosestFlags(this,team,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
    return 0 < (pLVar1->fields)._size;
  }
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* List`1[MVWorldObjectClient] GetClosestFlags(MVTeam) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_GetClosestFlags
          (FlagWinningCondition *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVFlag);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_02 != (MVWorldObjectClientManager *)0x0) &&
     (this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                          (this_02,WorldObjectType__Enum_Flag,(MethodInfo *)0x0),
     this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    index = (this_03->fields)._size;
    while( true ) {
      do {
        do {
          do {
            index = index + -1;
            if (index < 0) {
              return (List_1_MVWorldObjectClient_ *)this_03;
            }
            RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_03,index,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              );
          } while (RVar1 == (RegexCharClass_SingleRange)0x0);
          if ((*(byte *)(*(int *)RVar1 + 0xb8) < (TypeInfo__MVFlag->_1).naturalAligment) ||
             (*(MVFlag__Class **)
               (*(int *)(*(int *)RVar1 + 100) + -4 +
               (uint)(TypeInfo__MVFlag->_1).naturalAligment * 4) != TypeInfo__MVFlag)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          RVar3.First = 0;
          RVar3.Last = 0;
          if (bVar2) {
            RVar3 = RVar1;
          }
        } while (RVar3 == (RegexCharClass_SingleRange)0x0);
        if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)((int)RVar3 + 0x58)
            == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                            ((int)RVar3 + 0x58),(Object *)StringLiteral_team,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
      } while (bVar4 == 0);
      this_00 = *(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                 ((int)RVar3 + 0x58);
      if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
      TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_team,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar6 == (MVNetworkGame *)0x0) ||
          (this_01 = (pMVar6->fields).teamManager, this_01 == (MVTeamManager *)0x0)) ||
         (iVar7 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0),
         TVar5.m_Index == 0)) break;
      if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
          (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) goto code_?;
      puVar8 = (undefined4 *)func_?();
      if (((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*puVar8 != this_00) ||
         (iVar7 < 2)) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)this_03,index,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                  );
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pLVar10 = (List_1_MVWorldObjectClient_ *)(*pcVar9)();
  return pLVar10;
}


/* Void InitializeGameUI(RectTransform) */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_InitializeGameUI
               (FlagWinningCondition *this,RectTransform *lobbyState,MethodInfo *method)

{
  FlagWinningCondition_UpdateFlagGraphics(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) && (pMVar2 != (MVLocalPlayer *)0x0)) &&
       (this_00 = (pMVar1->fields).gameStatCounterManager, this_00 != (GameStatCounterManager *)0x0)
       ) {
      MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                (this_00,GameStatCounterType__Enum_Flag,(pMVar2->fields)._._Team_k__BackingField,
                 (pMVar2->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
      lobbyState_00 =
           (RectTransform *)(this->klass->vtable).CanWinningConditionBeFullfilledForTeam.methodPtr;
      (*(code *)(this->klass->vtable).UpdateValue.method)();
      WinningConditionBase::WinningConditionBase_InitializeGameUI
                ((WinningConditionBase *)this,lobbyState_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RoundEndReset() */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_RoundEndReset
               (FlagWinningCondition *this,MethodInfo *method)

{
  pTVar1 = (this->fields).score;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral______);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral______,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    WinningConditionBase::WinningConditionBase_RoundEndReset
              ((WinningConditionBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_Update
               (FlagWinningCondition *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  fVar1 = (float10)func_?();
  if ((float)fVar1 == _UNK_?) {
    FlagWinningCondition_UpdateFlagGraphics(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateFlagGraphics() */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_UpdateFlagGraphics
               (FlagWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      pLVar2 = FlagWinningCondition_GetClosestFlags
                         (this,(pMVar1->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
      if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
        pGVar3 = (this->fields).graphics;
        if ((pLVar2->fields)._size == 0) {
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            return;
          }
        }
        else if (pGVar3 != (GameObject *)0x0) {
          bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar3,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            pGVar3 = (this->fields).graphics;
            if (pGVar3 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,1,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateValue(Int32) */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_UpdateValue
               (FlagWinningCondition *this,int32_t newValue,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    pTVar3 = (this->fields).score;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) && (pMVar2 != (MVLocalPlayer *)0x0)) &&
       (this_00 = (pMVar1->fields).gameStatCounterManager, this_00 != (GameStatCounterManager *)0x0)
       ) {
      score = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                        (this_00,GameStatCounterType__Enum_Flag,
                         (pMVar2->fields)._._Team_k__BackingField,
                         (pMVar2->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
      pSStack4 =
           WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                     (score,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
      if (pTVar3 != (Text *)0x0) {
        pIStack5 = (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        pTStack6 = pTVar3;
        (*(code *)(pTVar3->klass->vtable).set_text.method)();
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* GameStatCounterType get_StatType() */

GameStatCounterType__Enum
Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_get_StatType
          (FlagWinningCondition *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),2);
}


/* Boolean get_WinningConditionAbleToBeFulfilled() */

bool Assembly-CSharp.dll::FlagWinningCondition::
     FlagWinningCondition_get_WinningConditionAbleToBeFulfilled
               (FlagWinningCondition *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      bVar2 = (*(code *)(this->klass->vtable).CanWinningConditionBeFullfilledForTeam.method)
                        (this,(pMVar1->fields)._._Team_k__BackingField);
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}

