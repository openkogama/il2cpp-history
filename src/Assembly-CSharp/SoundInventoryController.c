
/* Void DebugPrintSound(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_DebugPrintSound
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  this = data;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_url);
    func_?(&StringLiteral_Data_sound__url__);
    func_?(&StringLiteral__Pitch__);
    func_?(&StringLiteral_no_volume);
    func_?(&StringLiteral__Volume__);
    func_?(&StringLiteral_no_pitch);
    func_?(&StringLiteral_pitch);
    func_?(&StringLiteral_volume);
    cRam_? = '\x01';
  }
  TVar1.m_Index = (int32_t)StringLiteral_no_volume;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_volume,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 != 0) {
      TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                         (Object *)StringLiteral_volume,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    }
    data = (Dictionary_2_System_Object_System_Object_ *)StringLiteral_no_pitch;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,
                       (Object *)StringLiteral_pitch,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 != 0) {
      data = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,
                        (Object *)StringLiteral_pitch,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    }
    values = (String__Array *)func_?();
    pSVar3 = StringLiteral_Data_sound__url__;
    if (values != (String__Array *)0x0) {
      if (values->max_length != 0) {
        values->vector[0] = StringLiteral_Data_sound__url__;
        func_?(values->vector,pSVar3);
        TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,
                           (Object *)StringLiteral_url,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar4.m_Index == 0) {
          pSVar3 = (String *)0x0;
        }
        else {
          pSVar3 = (String *)
                   (**(code **)(*(int *)TVar4.m_Index + 0xd8))
                             (TVar4.m_Index,*(undefined4 *)(*(int *)TVar4.m_Index + 0xdc));
        }
        if (1 < values->max_length) {
          values->vector[1] = pSVar3;
          func_?(values->vector + 1,pSVar3);
          pSVar3 = StringLiteral__Volume__;
          if (2 < values->max_length) {
            values->vector[2] = StringLiteral__Volume__;
            func_?(values->vector + 2,pSVar3);
            if ((String *)TVar1.m_Index == (String *)0x0) {
              pSVar3 = (String *)0x0;
            }
            else {
              pSVar3 = (String *)
                       (*(code *)(((String *)TVar1.m_Index)->klass->vtable).ToString.method)
                                 (TVar1.m_Index,
                                  (((String *)TVar1.m_Index)->klass->vtable).CompareTo.methodPtr);
            }
            if (3 < values->max_length) {
              values->vector[3] = pSVar3;
              func_?(values->vector + 3,pSVar3);
              pSVar3 = StringLiteral__Pitch__;
              if (4 < values->max_length) {
                values->vector[4] = StringLiteral__Pitch__;
                func_?(values->vector + 4,pSVar3);
                if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  pSVar3 = (String *)0x0;
                }
                else {
                  pSVar3 = (String *)
                           (*(code *)(data->klass->vtable).ToString.method)
                                     (data,(data->klass->vtable).get_Item.methodPtr);
                }
                if (5 < values->max_length) {
                  values->vector[5] = pSVar3;
                  func_?(values->vector + 5,pSVar3);
                  pSVar3 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Debug);
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                            ((Object *)pSVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_Initialize
               (SoundInventoryController *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  this_05 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                   );
    func_?(&
                    bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                   );
    func_?(&TypeInfo__System__Func<SoundTabInfo,_bool>);
    func_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<SoundTabInfo>);
    in_stack_1 =
         &
         InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
    ;
    func_?();
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SoundInventoryController__PageTurned_int_);
    func_?(&MethodInfo__SoundInventoryController__TabSelected_int_);
    func_?(&TypeInfo__SoundTabInfo);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__TabState);
    func_?(&
                    MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                   );
    func_?(&TypeInfo__SoundInventoryController____c__DisplayClass13_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&StringLiteral_url);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    func_?();
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_SoundEmitter,(MethodInfo *)0x0
              );
    (this->fields).selectedTab = 1;
    this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    unaff_ESI = (SoundInventoryController *)woID;
    if (((this_06 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_06,woID,(MethodInfo *)0x0),
        unaff_ESI = (SoundInventoryController *)woID, pMVar2 == (MVWorldObject *)0x0)) ||
       (unaff_ESI = (SoundInventoryController *)(pMVar2->fields).data,
       unaff_ESI == (SoundInventoryController *)0x0)) goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_ESI,
                       (Object *)StringLiteral_url,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(Object *)StringLiteral_url,
                 (Object *)::StringLiteral__,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    SoundInventoryController_DebugPrintSound
              ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)unaff_ESI,
                       (Object *)StringLiteral_url,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar4.m_Index != 0) {
      TVar5.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
        TVar5 = TVar4;
      }
      if ((String *)TVar5.m_Index != (String *)0x0) {
        (this->fields).originalURL = (String *)TVar5.m_Index;
        TVar5.m_Index = 0;
        if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
          TVar5 = TVar4;
        }
        if (TVar5.m_Index != 0) goto code_?;
      }
      func_?();
      goto code_?;
    }
    (this->fields).originalURL = (String *)0x0;
code_?:
    func_?();
    pSVar6 = (this->fields).audioUrls;
    if (pSVar6 == (StreamedAudioClipList *)0x0) goto code_?;
    pLVar7 = (pSVar6->fields).urls;
    (this->fields).urls = pLVar7;
    func_?(&(this->fields).urls,pLVar7);
    unaff_ESI = (SoundInventoryController *)(this->fields).inventoryControllerPrefab;
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pIVar8 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)unaff_ESI,parent,0,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                       );
    (this->fields).inventoryController = pIVar8;
    func_?(&(this->fields).inventoryController,pIVar8);
    pIVar8 = (this->fields).inventoryController;
    if (pIVar8 == (InventoryController *)0x0) goto code_?;
    pUVar9 = (pIVar8->fields).OnPageTurned;
    pUVar10 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar10,(Object *)this,MethodInfo__SoundInventoryController__PageTurned_int_,
               (MethodInfo *)0x0);
    unaff_ESI = (SoundInventoryController *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
    if (unaff_ESI == (SoundInventoryController *)0x0) {
      (pIVar8->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?(&(pIVar8->fields).OnPageTurned);
      pIVar8 = (this->fields).inventoryController;
      if (pIVar8 != (InventoryController *)0x0) {
        pUVar9 = (pIVar8->fields).OnTabSelected;
        pUVar10 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar10,(Object *)this,MethodInfo__SoundInventoryController__TabSelected_int_,
                   (MethodInfo *)0x0);
        unaff_ESI = (SoundInventoryController *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
        if (unaff_ESI == (SoundInventoryController *)0x0) {
          (pIVar8->fields).OnTabSelected = (UnityAction_1_System_Int32_ *)0x0;
        }
        else {
          pUVar9 = (UnityAction_1_System_Int32_ *)func_?(unaff_ESI);
          if (pUVar9 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
          (pIVar8->fields).OnTabSelected = pUVar9;
          iVar11 = func_?(unaff_ESI);
          if (iVar11 == 0) goto code_?;
        }
        func_?(&(pIVar8->fields).OnTabSelected);
        pIVar8 = (this->fields).inventoryController;
        if (pIVar8 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Initialize
                    (pIVar8,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
          pLVar7 = (this->fields).urls;
          this = (SoundInventoryController *)0x0;
          unaff_ESI = (SoundInventoryController *)0x0;
          if (pLVar7 != (List_1_StreamedAudioClipInfo_ *)0x0) {
            while( true ) {
              if ((pLVar7->fields)._size <= (int)this) {
                SoundInventoryController_UpdateContent(this_05,(MethodInfo *)0x0);
                return;
              }
              woID = func_?(TypeInfo__SoundInventoryController____c__DisplayClass13_0);
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)woID,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1)
              ;
              in_stack_1 = (MethodInfo **)(this_05->fields).urls;
              unaff_ESI = this;
              if (((SoundInventoryController *)in_stack_1 == (SoundInventoryController *)0x0)
                 || (RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)in_stack_1,(int32_t)this,
                                         MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                                        ), unaff_ESI = this,
                    RVar12 == (RegexCharClass_SingleRange)0x0)) break;
              name = *(SoundInventoryController **)((int)RVar12 + 0x10);
              method_00 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_TextureId___Array
                           *)(this_05->fields).urls;
              unaff_ESI = name;
              if ((method_00 ==
                   (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_TextureId___Array
                    *)0x0) ||
                 ((RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)method_00,(int32_t)this,
                                       MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                                      ), RVar12 == (RegexCharClass_SingleRange)0x0 ||
                  (pOVar13 = *(Object__Class **)((int)RVar12 + 0xc), (Object *)woID == (Object *)0x0)
                  ))) break;
              ((Object *)(woID + 8))->klass = pOVar13;
              func_?((Object *)(woID + 8),pOVar13);
              pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (this_05->fields).categoryToNameCombinations;
              if (pDVar14 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
              break;
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (pDVar14,(Object *)name,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                                );
              if (bVar3 == 0) {
                this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)(this_05->fields).categoryToNameCombinations;
                if (this_01 ==
                    (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) break;
                iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                         UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                         Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                                   (this_01,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Count__
                                   );
                in_stack_1 = (MethodInfo **)name;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Int32]::Dictionary_2_System_Object_System_Int32__Add
                          ((Dictionary_2_System_Object_System_Int32_ *)this_01,(Object *)name,
                           iVar15 + 1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                          );
              }
              pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (this_05->fields).categoryToNameCombinations;
              if (pDVar14 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
              break;
              TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (pDVar14,(Object *)name,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                );
              pDVar16 = (this_05->fields).tabs;
              pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (this_05->fields).categoryToNameCombinations;
              if ((pDVar14 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
                 (TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,UnityEngine::UIElements::TextureId]::
                           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                     (pDVar14,(Object *)name,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                     ), pDVar16 == (Dictionary_2_System_Int32_TabState_ *)0x0))
              break;
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                ((Dictionary_2_System_Int32_System_Single_ *)pDVar16,TVar5.m_Index,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                );
              if (bVar3 == 0) {
                woID = (int32_t)TypeInfo__TabState;
                iVar15 = (this_05->fields).numberOfSlotsPrPage;
                this = (SoundInventoryController *)&UNK_?;
                unaff_ESI = (SoundInventoryController *)func_?();
                TabState::TabState__ctor
                          ((TabState *)unaff_ESI,TVar4.m_Index,(String *)name,iVar15,
                           (MethodInfo *)0x0);
                pDVar16 = (this_05->fields).tabs;
                if (((pDVar16 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
                    (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__Add
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,TVar4.m_Index,
                                (Object *)unaff_ESI,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                               ), unaff_ESI == (SoundInventoryController *)0x0)) ||
                   (pIVar8 = (this_05->fields).inventoryController,
                   pIVar8 == (InventoryController *)0x0)) break;
                method_00 = (((MulticastDelegate__Fields *)&(unaff_ESI->fields)._)->_).invoke_impl;
                in_stack_1 = (MethodInfo **)&UNK_?;
                InventoryController::InventoryController_AddTab
                          (pIVar8,TVar4.m_Index,(String *)method_00,(MethodInfo *)0x0);
              }
              pDVar17 = (this_05->fields).soundTabInfos;
              if (pDVar17 == (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) break;
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                ((Dictionary_2_System_Int32_System_Single_ *)pDVar17,TVar4.m_Index,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                                );
              if (bVar3 == 0) {
                unaff_ESI = (SoundInventoryController *)(this_05->fields).soundTabInfos;
                method_00 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_TextureId___Array
                             *)func_?(
                                              TypeInfo__System__Collections__Generic__List<SoundTabInfo>
                                              );
                mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
                __Il2CppFullySharedGenericType]::
                LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                          ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                           method_00,
                           MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__);
                if (unaff_ESI == (SoundInventoryController *)0x0) break;
                in_stack_1 = (MethodInfo **)&UNK_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          ((Dictionary_2_System_Int32_System_Object_ *)unaff_ESI,TVar4.m_Index,
                           (Object *)method_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                          );
              }
              pDVar17 = (this_05->fields).soundTabInfos;
              if (pDVar17 == (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) break;
              pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,TVar4.m_Index,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                  );
              unaff_ESI = (SoundInventoryController *)
                          func_?(TypeInfo__System__Func<SoundTabInfo,_bool>);
              mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                        ((Func_2_Object_Boolean_ *)unaff_ESI,(Object *)woID,
                         MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                         ,(MethodInfo *)0x0);
              bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_All
                                ((IEnumerable_1_System_Object_ *)pOVar18,
                                 (Func_2_Object_Boolean_ *)unaff_ESI,
                                 bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                                );
              if (bVar3 != 0) {
                pDVar17 = (this_05->fields).soundTabInfos;
                if (pDVar17 == (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) break;
                this_07 = (List_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,
                                     TVar5.m_Index,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                    );
                pOVar18 = (Object *)func_?(TypeInfo__SoundTabInfo);
                in_stack_1 = (MethodInfo **)&UNK_?;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          (pOVar18,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                pOVar13 = *(Object__Class **)(woID + 8);
                unaff_ESI = (SoundInventoryController *)TVar5.m_Index;
                if (pOVar18 == (Object *)0x0) break;
                pOVar18[1].klass = pOVar13;
                func_?(pOVar18 + 1,pOVar13);
                pOVar18[1].monitor = (MonitorData *)name;
                func_?(&pOVar18[1].monitor,name);
                this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (this_05->fields).urls;
                if ((this_02 ==
                     (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
                   (RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (this_02,(int32_t)this,
                                        MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                                       ), RVar12 == (RegexCharClass_SingleRange)0x0)) break;
                pOVar13 = *(Object__Class **)((int)RVar12 + 8);
                pOVar18[2].klass = pOVar13;
                func_?(pOVar18 + 2,pOVar13);
                if (this_07 == (List_1_System_Object_ *)0x0) break;
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          (this_07,pOVar18,
                           MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                          );
              }
              this_03 = (Dictionary_2_System_Int32_System_Single_ *)
                        (this_05->fields).categorysAmount;
              unaff_ESI = (SoundInventoryController *)TVar5.m_Index;
              if (this_03 == (Dictionary_2_System_Int32_System_Single_ *)0x0) break;
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                (this_03,TVar5.m_Index,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                );
              this_04 = (Dictionary_2_System_Int32_System_Object_ *)
                        (this_05->fields).categorysAmount;
              if (bVar3 == 0) {
                if (this_04 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__Add
                          ((Dictionary_2_System_Int32_System_Int32_ *)this_04,TVar5.m_Index,1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                          );
              }
              else {
                if (this_04 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (this_04,TVar5.m_Index,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                    );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__set_Item
                          ((Dictionary_2_System_Int32_System_Int32_ *)this_04,TVar5.m_Index,
                           (int32_t)((int)&pOVar18->klass + 1),
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                          );
              }
              pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (this_05->fields).categoryToNameCombinations;
              unaff_ESI = (SoundInventoryController *)(this_05->fields).tabs;
              if (((pDVar14 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                  || (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,UnityEngine::UIElements::TextureId]::
                              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                        (pDVar14,(Object *)name,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                        ), unaff_ESI == (SoundInventoryController *)0x0)) ||
                 (pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)unaff_ESI,
                                       TVar4.m_Index,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                      ), pOVar18 == (Object *)0x0)) break;
              pOVar18[2].klass = (Object__Class *)((int)&((pOVar18[2].klass)->_0).image + 1);
              this = (SoundInventoryController *)((int)&this->klass + 1);
              pLVar7 = (this_05->fields).urls;
              unaff_ESI = this;
              if (pLVar7 == (List_1_StreamedAudioClipInfo_ *)0x0) break;
            }
          }
        }
      }
      goto code_?;
    }
    pUVar9 = (UnityAction_1_System_Int32_ *)func_?(unaff_ESI);
    if (pUVar9 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    (pIVar8->fields).OnPageTurned = pUVar9;
    iVar11 = func_?(unaff_ESI);
    if (iVar11 != 0) goto code_?;
  }
code_?:
  func_?(unaff_ESI);
code_?:
  func_?(unaff_ESI);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_OnSettingChanged
               (SoundInventoryController *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  value_00 = mscorlib.dll::System::Convert::Convert_ToString(value,(MethodInfo *)0x0);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,(Object *)value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_PageTurned
               (SoundInventoryController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabs;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    this_01 = (TabState *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (this->fields).selectedTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    if (this_01 != (TabState *)0x0) {
      bVar1 = TabState::TabState_UpdatePage(this_01,dir,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        SoundInventoryController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetNewOriginalUrl(String) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_SetNewOriginalUrl
               (SoundInventoryController *this,String *url,MethodInfo *method)

{
  (this->fields).originalURL = url;
  func_?(&(this->fields).originalURL,url);
  SoundInventoryController_UpdateContent(this,(MethodInfo *)0x0);
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_TabSelected
               (SoundInventoryController *this,int32_t tab,MethodInfo *method)

{
  if ((this->fields).selectedTab != tab) {
    (this->fields).selectedTab = tab;
    SoundInventoryController_UpdateContent(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_UpdateContent
               (SoundInventoryController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__get_Current__
                   );
    func_?(&
                    System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<SoundViewItem>__GetEnumerator__)
    ;
    func_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_);
    func_?(&
                    SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    func_?(&StringLiteral_url);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pIVar6 = (this->fields).inventoryController;
  if ((pIVar6 != (InventoryController *)0x0) &&
     (this_04 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                InventoryController::InventoryController_GetComponentsOfSlotsWithType
                          (pIVar6,
                           System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                          ),
     this_04 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_04,
                        MethodInfo__System__Collections__Generic__List<SoundViewItem>__GetEnumerator__
                       );
    this_03 = pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffb8;
    while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb8,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                             ), bVar9 != 0) {
      if (this_03 == (RegexCharClass_SingleRange)0x0) goto code_?;
      SoundViewItem::SoundViewItem_UnsubscribePendingDownloads
                ((SoundViewItem *)this_03,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffb8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__Dispose__
               ,in_stack_10);
    uStack_1 = 0xffffffff;
    pIVar6 = (this->fields).inventoryController;
    if (pIVar6 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Clear(pIVar6,(MethodInfo *)0x0);
      pLStack_11 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).selectedTab;
      pIVar6 = (this->fields).inventoryController;
      pDVar12 = (this->fields).tabs;
      if ((pDVar12 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
         (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,
                              (this->fields).selectedTab,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                             ), pOVar13 != (Object *)0x0)) {
        currentPage = pOVar13[2].monitor;
        pDVar12 = (this->fields).tabs;
        if ((pDVar12 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
           ((pTVar14 = (TabState *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,
                                 (this->fields).selectedTab,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                ), pTVar14 != (TabState *)0x0 &&
            (maxPages = TabState::TabState_get_MaxPages(pTVar14,(MethodInfo *)0x0),
            pIVar6 != (InventoryController *)0x0)))) {
          InventoryController::InventoryController_SelectTab
                    (pIVar6,(int32_t)pLStack_11,(int32_t)currentPage,maxPages,(MethodInfo *)0x0);
          pSVar15 = (this->fields).originalURL;
          pLStack_11 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       StringLiteral_url;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Convert);
            cRam_? = '\x01';
          }
          this_00 = (this->fields).settingsBase;
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          pSVar15 = mscorlib.dll::System::Convert::Convert_ToString
                             ((Object *)pSVar15,(MethodInfo *)0x0);
          if (this_00 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged
                      (this_00,(String *)pLStack_11,(Object *)pSVar15,(MethodInfo *)0x0);
            this_01 = (this->fields).soundTabInfos;
            if (this_01 != (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) {
              pLStack_11 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                     ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                      (this->fields).selectedTab,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                     );
              this_02 = (Dictionary_2_System_Int32_System_Object_ *)(this->fields).categorysAmount;
              if (this_02 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                LStack_8._current =
                     (RegexCharClass_SingleRange)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               (this_02,(this->fields).selectedTab,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                               );
                slotIndex = 0;
                if (0 < (int)LStack_8._current) {
                  do {
                    pDVar12 = (this->fields).tabs;
                    if ((pDVar12 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
                       (pTVar14 = (TabState *)
                                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,System::Object]::
                                 Dictionary_2_System_Int32_System_Object__get_Item
                                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,
                                            (this->fields).selectedTab,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                           ), pTVar14 == (TabState *)0x0)) goto code_?;
                    bVar9 = TabState::TabState_SlotIndexIsInRange
                                      (pTVar14,slotIndex,(MethodInfo *)0x0);
                    if (bVar9 != 0) {
                      pSVar16 = (this->fields).soundViewItemPrefab;
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pSVar16 = (SoundViewItem *)
                                UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_Instantiate_4
                                          ((Object *)pSVar16,
                                           SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                          );
                      if (pLStack_11 ==
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                      goto code_?;
                      RStack_17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                  RegularExpressions::RegexCharClass+SingleRange]::
                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                            (pLStack_11,slotIndex,
                                             MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                            );
                      pSStack_18 = (this->fields).originalURL;
                      pUStack_19 = (UnityAction_1_System_String_ *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]
                      ::UnityAction_1_System_Object___ctor
                                ((UnityAction_1_System_Object_ *)pUStack_19,(Object *)this,
                                 MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                 ,(MethodInfo *)0x0);
                      if (pSVar16 == (SoundViewItem *)0x0) goto code_?;
                      SoundViewItem::SoundViewItem_Initialize
                                (pSVar16,(SoundTabInfo *)RStack_17,pSStack_18,pUStack_19,
                                 (MethodInfo *)0x0);
                      RStack_17 = (RegexCharClass_SingleRange)(this->fields).inventoryController;
                      item = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pSVar16,(MethodInfo *)0x0);
                      if (RStack_17 == (RegexCharClass_SingleRange)0x0) goto code_?;
                      InventoryController::InventoryController_AddObject
                                ((InventoryController *)RStack_17,item,
                                 slotIndex % (this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
                    }
                    slotIndex = slotIndex + 1;
                  } while (slotIndex < (int)LStack_8._current);
                }
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar20 = func_?();
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* SoundInventoryController() */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController__ctor
               (SoundInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  (this->fields).tabs = (Dictionary_2_System_Int32_TabState_ *)pDVar1;
  func_?(&(this->fields).tabs,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Dictionary__
            );
  (this->fields).soundTabInfos = (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)pDVar1;
  func_?(&(this->fields).soundTabInfos,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this->fields).categorysAmount = (Dictionary_2_System_Int32_System_Int32_ *)pDVar1;
  func_?(&(this->fields).categorysAmount,pDVar1);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  (this->fields).categoryToNameCombinations = (Dictionary_2_System_String_System_Int32_ *)this_00;
  func_?();
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

