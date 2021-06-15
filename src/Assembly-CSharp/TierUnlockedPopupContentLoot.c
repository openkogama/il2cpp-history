
/* Int32 GetItemAmount() */

int32_t Assembly-CSharp.dll::TierUnlockedPopupContentLoot::
        TierUnlockedPopupContentLoot_GetItemAmount
                  (TierUnlockedPopupContentLoot *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  iStack_8 = 0;
  func_?();
  uStack_9 = 0xffffffff;
  piStack_10 = (int *)&stack0xffffff80;
  puStack_4 = &stack0xffffff80;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (piStack_10 = (int *)&stack0xffffff80, puStack_4 = &stack0xffffff80,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    piStack_10 = (int *)&stack0xffffff80;
    puStack_4 = &stack0xffffff80;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (GameTierShopRepository *)
              HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                        ((HoverCraftMotor *)this_00,(MethodInfo *)0x0);
    pDStack_11 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                 CONCAT31(pDStack_11._1_3_,(this->fields).unlockedGamePassTier);
    if (this_01 != (GameTierShopRepository *)0x0) {
      unaff_ESI = GameTierShopRepository::GameTierShopRepository_GetTierItemData
                            (this_01,(GamePassTier__Enum)pDStack_11,(MethodInfo *)0x0);
      this_02 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                func_?();
      pDStack_12 = this_02;
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                );
      pDStack_11 = this_02;
      if (unaff_ESI !=
          (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) {
        pDVar13 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                             *)&stack0xffffff8c,
                            (Dictionary_2_WinningConditionType_System_Object_ *)unaff_ESI,
                            MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                           );
        auStack_6._0_4_ = pDVar13->dictionary;
        auStack_6._4_4_ = pDVar13->next;
        auStack_6._8_4_ = pDVar13->stamp;
        auStack_6._12_4_ = (pDVar13->current).key;
        auStack_6._16_4_ = (pDVar13->current).value;
        uStack_1 = 0;
        while (cVar14 = func_?(), cVar14 != '\0') {
          KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_6,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                                );
          pCVar15 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
          if (pCVar15 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
          goto code_?;
          pOVar16 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (pCVar15,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          if (0 < (int)pOVar16) {
            this_03 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)func_?();
            if (this_03 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0)
            goto code_?;
            item = (MVWorldObjectClient *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (this_03,0,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                             );
            bVar17 = TierUnlockedPopupContentLoot_IsTierItemALootItem(this,item,(MethodInfo *)0x0);
            if (bVar17 != 0) {
              unaff_ESI = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *
                          )func_?();
              pOVar16 = (Object *)func_?();
              if (this_02 ==
                  (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::
              Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
              Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
                        ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this_02,
                         (MVWorldObjectDocumentationType__Enum)unaff_ESI,pOVar16,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                        );
            }
          }
        }
        iVar18 = 0;
        *piStack_10 = 0x8d;
        uStack_1 = 0xffffffff;
        func_?();
        if (*piStack_10 == 0x8d) {
          iVar18 = -1;
        }
        unaff_ESI = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
        pDStack_11 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
        if ((pDStack_12 !=
             (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) &&
           (this_04 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__get_Values
                                ((Dictionary_2_WinningConditionType_System_Object_ *)pDStack_12,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                                ),
           this_04 !=
           (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                      *)&stack0xffffff8c,this_04,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                    );
          uStack_1 = 2;
          while (cVar14 = func_?(), iVar19 = iStack_8, cVar14 != '\0') {
            pCVar15 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
            if (pCVar15 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
            goto code_?;
            pOVar16 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               (pCVar15,
                                MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                               );
            unaff_ESI = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                        ((int)&pOVar16->klass + (int)&unaff_ESI->klass);
            pDStack_11 = unaff_ESI;
          }
          piStack_10[iVar18 + 1] = 0xd6;
          uStack_1 = 0xffffffff;
          func_?();
          if (iVar19 == 0) {
            *unaff_FS_OFFSET = uStack_3;
            return (int32_t)unaff_ESI;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?(unaff_ESI,0);
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  iVar21 = (*pcVar20)();
  return iVar21;
}


/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentLoot::TierUnlockedPopupContentLoot_Initialize
               (TierUnlockedPopupContentLoot *this,GamePassTier__Enum unlockedGamePassTier,
               UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  (this->fields).unlockedGamePassTier = (uint8_t)unlockedGamePassTier;
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  format = TM::TM__(StringLiteral_x_0__IN_GAME_LOOT_UNLOCKED_,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._.titleText;
  unlockedGamePassTier = TierUnlockedPopupContentLoot_GetItemAmount(this,(MethodInfo *)0x0);
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&unlockedGamePassTier);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    onDisplayDoneCallback = (UnityAction *)TypeInfo__System__String;
    unlockedGamePassTier = (GamePassTier__Enum)&UNK_?;
    func_?();
  }
  onDisplayDoneCallback = (UnityAction *)0x0;
  unlockedGamePassTier = (GamePassTier__Enum)arg0;
  pSStack2 = mscorlib.dll::System::String::String_Format(format,arg0,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    pIStack3 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    onDisplayDoneCallback = (UnityAction *)&UNK_?;
    method = (MethodInfo *)pTVar1;
    (*(code *)(pTVar1->klass->vtable).set_text.method)();
    return;
  }
  pIStack3 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsTierItemALootItem(MVWorldObjectClient) */

bool Assembly-CSharp.dll::TierUnlockedPopupContentLoot::
     TierUnlockedPopupContentLoot_IsTierItemALootItem
               (TierUnlockedPopupContentLoot *this,MVWorldObjectClient *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (MVWorldObjectClient *)0x0) {
    pMVar1 = item->klass;
    bVar2 = (pMVar1->_1).naturalAligment;
    bVar3 = (TypeInfo__MVPickupItemBase->_1).naturalAligment;
    if ((bVar2 < bVar3) ||
       ((MVPickupItemBase__Class *)(pMVar1->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__MVPickupItemBase)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar5 = (MVWorldObjectClient *)0x0;
    if (bVar4) {
      pMVar5 = item;
    }
    if (pMVar5 == (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      if ((bVar3 <= bVar2) &&
         ((MVWorldObjectSpawnerVehicle__Class *)(pMVar1->_1).typeHierarchy[bVar3 - 1] ==
          TypeInfo__MVWorldObjectSpawnerVehicle)) {
        return item != (MVWorldObjectClient *)0x0;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}


/* Void UpdateItemAmountText() */

void Assembly-CSharp.dll::TierUnlockedPopupContentLoot::
     TierUnlockedPopupContentLoot_UpdateItemAmountText
               (TierUnlockedPopupContentLoot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  format = TM::TM__(StringLiteral_x_0__IN_GAME_LOOT_UNLOCKED_,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._.titleText;
  TierUnlockedPopupContentLoot_GetItemAmount(this,(MethodInfo *)0x0);
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::String::String_Format(format,arg0,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

