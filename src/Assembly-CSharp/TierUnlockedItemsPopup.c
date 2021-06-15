
/* Void Initialize(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::TierUnlockedItemsPopup::TierUnlockedItemsPopup_Initialize
               (TierUnlockedItemsPopup *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  itemIndex = 0;
  if (tierShopData != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
    method_00 = (MethodInfo *)&UNK_?;
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                        ((Dictionary_2_WinningConditionType_System_Object_ *)tierShopData,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffbc,this_00,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                );
      uStack_1 = 0;
      while( true ) {
        cVar4 = func_?();
        if (cVar4 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        tierShopItemData = (List_1_MVWorldObjectClient_ *)func_?();
        pTVar5 = (this->fields).tierUnlockedItemElementPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pTVar5 = (TierUnlockedItemElement *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           ((XpBoostParticlePreviewer *)pTVar5,
                            TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                           );
        if ((pTVar5 == (TierUnlockedItemElement *)0x0) ||
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pTVar5,method_00), this_01 == (Transform *)0x0))
        break;
        method_00 = (MethodInfo *)(this->fields).itemElementContainer;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,(Transform *)method_00,0,(MethodInfo *)0x0);
        TierUnlockedItemElement::TierUnlockedItemElement_Initialize
                  (pTVar5,tierShopItemData,itemIndex,(MethodInfo *)0x0);
        itemIndex = itemIndex + 1;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

