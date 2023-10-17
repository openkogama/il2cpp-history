
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
  pSVar1 = StringLiteral_no_volume;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)data,
                       (Object *)StringLiteral_volume,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 != 0) {
      pSVar1 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,(Object *)StringLiteral_volume,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
    }
    data = (Dictionary_2_System_Object_System_Object_ *)StringLiteral_no_pitch;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this,
                       (Object *)StringLiteral_pitch,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 != 0) {
      data = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this,(Object *)StringLiteral_pitch,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    }
    values = (String__Array *)func_?();
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_Data_sound__url__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_Data_sound__url__,(values->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_Data_sound__url__;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_Data_sound__url__;
    func_?(values->vector,pSVar5);
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this,(Object *)StringLiteral_url,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar6 != (Object *)0x0) {
      pSVar5 = (String *)
               (*(pOVar6->klass->vtable).ToString.methodPtr)
                         (pOVar6,(pOVar6->klass->vtable).ToString.method);
      if ((pSVar5 == (String *)0x0) ||
         (iVar4 = func_?(pSVar5,(values->klass->_0).element_class), iVar4 != 0))
      goto code_?;
      goto code_?;
    }
    pSVar5 = (String *)0x0;
code_?:
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar5;
    func_?(values->vector + 1,pSVar5);
    if ((StringLiteral__Volume__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__Volume__,(values->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral__Volume__;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral__Volume__;
    func_?(values->vector + 2,pSVar5);
    if (pSVar1 != (String *)0x0) {
      pSVar1 = (String *)
               (*(pSVar1->klass->vtable).ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable).ToString.method);
      if ((pSVar1 == (String *)0x0) ||
         (iVar4 = func_?(pSVar1,(values->klass->_0).element_class), iVar4 != 0))
      goto code_?;
      goto code_?;
    }
    pSVar1 = (String *)0x0;
code_?:
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar1;
    func_?(values->vector + 3,pSVar1);
    if ((StringLiteral__Pitch__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__Pitch__,(values->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar1 = StringLiteral__Pitch__;
    if (values->max_length < 5) goto code_?;
    values->vector[4] = StringLiteral__Pitch__;
    func_?(values->vector + 4,pSVar1);
    if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pSVar1 = (String *)0x0;
code_?:
      if (5 < values->max_length) {
        values->vector[5] = pSVar1;
        func_?(values->vector + 5,pSVar1);
        pSVar1 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pSVar1 = (String *)
             (*(data->klass->vtable).ToString.methodPtr)(data,(data->klass->vtable).ToString.method)
    ;
    if ((pSVar1 == (String *)0x0) ||
       (iVar4 = func_?(pSVar1,(values->klass->_0).element_class), iVar4 != 0))
    goto code_?;
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_Initialize
               (SoundInventoryController *this,int32_t woID,GameObject *root,MethodInfo *method)

{
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
    func_?(&
                    InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                   );
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
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_SoundEmitter,(MethodInfo *)0x0
              );
    (this->fields).selectedTab = 1;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_03 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_03,woID,(MethodInfo *)0x0), pMVar1 != (MVWorldObject *)0x0)) &&
       (pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pMVar1->fields).data,
       pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar2,(Object *)StringLiteral_url,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar3 == 0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)StringLiteral_url,
                   (Object *)::StringLiteral__,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      SoundInventoryController_DebugPrintSound
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(MethodInfo *)0x0);
      pSVar4 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                          (Object *)StringLiteral_url,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pSVar4 == (String *)0x0) {
        (this->fields).originalURL = (String *)0x0;
code_?:
        func_?();
        pSVar5 = (this->fields).audioUrls;
        if (pSVar5 != (StreamedAudioClipList *)0x0) {
          (this->fields).urls = (pSVar5->fields).urls;
          func_?();
          pIVar6 = (this->fields).inventoryControllerPrefab;
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pIVar6 = (InventoryController *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                             ((Object *)pIVar6,parent,0,
                              InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                             );
          (this->fields).inventoryController = pIVar6;
          func_?();
          pIVar6 = (this->fields).inventoryController;
          if ((pIVar6 != (InventoryController *)0x0) &&
             (pUVar7 = (UnityAction_1_System_Int32Enum_ *)func_?(),
             pUVar7 != (UnityAction_1_System_Int32Enum_ *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (pUVar7,(Object *)this,MethodInfo__SoundInventoryController__PageTurned_int_,
                       (MethodInfo *)0x0);
            pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)this,(Delegate *)pUVar7,(MethodInfo *)0x0);
            if (pDVar8 == (Delegate *)0x0) {
              (pIVar6->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
            }
            else {
              pUVar9 = (UnityAction_1_System_Int32_ *)func_?();
              if (pUVar9 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
              (pIVar6->fields).OnPageTurned = pUVar9;
              iVar10 = func_?();
              if (iVar10 == 0) goto code_?;
            }
            func_?();
            pIVar6 = (this->fields).inventoryController;
            if ((pIVar6 != (InventoryController *)0x0) &&
               (pUVar7 = (UnityAction_1_System_Int32Enum_ *)func_?(),
               pUVar7 != (UnityAction_1_System_Int32Enum_ *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
              UnityAction_1_System_Int32Enum___ctor
                        (pUVar7,(Object *)this,
                         MethodInfo__SoundInventoryController__TabSelected_int_,(MethodInfo *)0x0);
              pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)this,(Delegate *)pUVar7,(MethodInfo *)0x0);
              if (pDVar8 == (Delegate *)0x0) {
                (pIVar6->fields).OnTabSelected = (UnityAction_1_System_Int32_ *)0x0;
              }
              else {
                pUVar9 = (UnityAction_1_System_Int32_ *)func_?();
                if (pUVar9 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
                (pIVar6->fields).OnTabSelected = pUVar9;
                iVar10 = func_?();
                if (iVar10 == 0) goto code_?;
              }
              func_?();
              pIVar6 = (this->fields).inventoryController;
              if (pIVar6 != (InventoryController *)0x0) {
                InventoryController::InventoryController_Initialize
                          (pIVar6,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
                pLVar11 = (this->fields).urls;
                index_01 = (undefined *)0x0;
                if (pLVar11 != (List_1_StreamedAudioClipInfo_ *)0x0) {
                  while( true ) {
                    index_00 = TypeInfo__SoundInventoryController____c__DisplayClass13_0;
                    if ((pLVar11->fields)._size <= (int)index_01) {
                      SoundInventoryController_UpdateContent(this,(MethodInfo *)0x0);
                      return;
                    }
                    pOVar12 = (Object *)func_?();
                    if (pOVar12 == (Object *)0x0) break;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                              (pOVar12,ExceptionArgument__Enum_obj,unaff_EBX);
                    pLVar13 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              (this->fields).urls;
                    if ((pLVar13 ==
                         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                       || (RVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                    ::RegularExpressions::RegexCharClass+SingleRange]::
                                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                              (pLVar13,(int32_t)index_01,
                                               MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                                              ), RVar14 == (RegexCharClass_SingleRange)0x0)) break;
                    pOVar15 = *(Object **)((int)RVar14 + 0x10);
                    pLVar13 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              (this->fields).urls;
                    if ((pLVar13 ==
                         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                       || (RVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                    ::RegularExpressions::RegexCharClass+SingleRange]::
                                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                              (pLVar13,(int32_t)index_00,
                                               MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                                              ), RVar14 == (RegexCharClass_SingleRange)0x0)) break;
                    pOVar12[1].klass = *(Object__Class **)((int)RVar14 + 0xc);
                    func_?();
                    pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                             (this->fields).categoryToNameCombinations;
                    if (pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
                    break;
                    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,GUILoginHandler+PlanetData]::
                            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                      (pDVar2,pOVar15,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                                      );
                    if (bVar3 == 0) {
                      this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                 *)(this->fields).categoryToNameCombinations;
                      if (this_01 ==
                          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)0x0) break;
                      iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text
                               ::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                                         (this_01,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Count__
                                         );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar15,
                                 (Object *)(iVar16 + 1),
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                                );
                    }
                    pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                              (this->fields).categoryToNameCombinations;
                    if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
                    pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__get_Item
                                        (pDVar17,pOVar15,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                        );
                    pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                             (this->fields).tabs;
                    method_00 = (MethodInfo *)(this->fields).categoryToNameCombinations;
                    if ((method_00 == (MethodInfo *)0x0) ||
                       (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__get_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)method_00,
                                             (Object *)pDVar17,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                            ),
                       pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0))
                    break;
                    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,GUILoginHandler+PlanetData]::
                            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                      (pDVar2,pOVar15,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                      );
                    if (bVar3 == 0) {
                      iVar16 = (this->fields).numberOfSlotsPrPage;
                      this_04 = (TabState *)func_?();
                      if (this_04 == (TabState *)0x0) break;
                      TabState::TabState__ctor
                                (this_04,(int32_t)pOVar12,(String *)pDVar17,iVar16,(MethodInfo *)0x0
                                );
                      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).tabs;
                      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (pDVar17,pOVar12,(Object *)this_04,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                                );
                      pIVar6 = (this->fields).inventoryController;
                      if (pIVar6 == (InventoryController *)0x0) break;
                      InventoryController::InventoryController_AddTab
                                (pIVar6,(int32_t)pOVar12,(this_04->fields).name,(MethodInfo *)0x0);
                    }
                    pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                             (this->fields).soundTabInfos;
                    if (pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
                    break;
                    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,GUILoginHandler+PlanetData]::
                            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                      (pDVar2,pOVar12,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                                      );
                    if (bVar3 == 0) {
                      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                                (this->fields).soundTabInfos;
                      this_05 = (LowLevelList_1_System_Object_ *)func_?();
                      if ((this_05 == (LowLevelList_1_System_Object_ *)0x0) ||
                         (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]
                          ::LowLevelList_1_System_Object___ctor
                                    (this_05,
                                     MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__
                                    ), pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0))
                      break;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (pDVar17,pOVar12,(Object *)this_05,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                                );
                    }
                    pDVar18 = (this->fields).soundTabInfos;
                    if (pDVar18 == (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) break;
                    pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar18,
                                         (Int32Enum__Enum)pOVar12,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                        );
                    this_06 = (Func_2_Object_Boolean_ *)func_?();
                    if (this_06 == (Func_2_Object_Boolean_ *)0x0) break;
                    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                              (this_06,(Object *)&UNK_?,
                               MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                               ,(MethodInfo *)0x0);
                    unaff_EBX = 
                    bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                    ;
                    bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_All
                                      ((IEnumerable_1_System_Object_ *)pOVar15,this_06,
                                       bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                                      );
                    if (bVar3 != 0) {
                      pDVar18 = (this->fields).soundTabInfos;
                      if (pDVar18 == (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar18,
                                 (Int32Enum__Enum)pOVar12,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                );
                      pOVar15 = (Object *)func_?();
                      if (pOVar15 == (Object *)0x0) break;
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                (pOVar15,ExceptionArgument__Enum_obj,method_00);
                      index = pOVar15[1].klass;
                      pOVar15[1].klass = index;
                      func_?();
                      pOVar15[1].monitor = (MonitorData *)&UNK_?;
                      func_?();
                      pLVar13 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )(this->fields).urls;
                      if ((pLVar13 ==
                           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                         || (RVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Text::RegularExpressions::RegexCharClass+SingleRange]::
                                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                (pLVar13,(int32_t)index,
                                                 MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                                                ), RVar14 == (RegexCharClass_SingleRange)0x0))
                      break;
                      pOVar15[2].klass = *(Object__Class **)((int)RVar14 + 8);
                      func_?();
                      if (pLVar13 ==
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                      break;
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)pLVar13,pOVar15,
                                 MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                                );
                    }
                    pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                             (this->fields).categorysAmount;
                    if (pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
                    break;
                    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,GUILoginHandler+PlanetData]::
                            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                      (pDVar2,pOVar12,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                      );
                    pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                              (this->fields).categorysAmount;
                    if (bVar3 == 0) {
                      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (pDVar17,pOVar12,(Object *)0x1,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                                );
                    }
                    else {
                      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
                      pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__get_Item
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar17,
                                           (Int32Enum__Enum)pOVar12,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                          );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                (pDVar17,pOVar12,(Object *)((int)&pOVar15->klass + 1),
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                                );
                    }
                    pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                              (this->fields).categoryToNameCombinations;
                    this_02 = (this->fields).tabs;
                    if (((pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
                        (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,System::Object]::
                                   Dictionary_2_System_Object_System_Object__get_Item
                                             (pDVar17,(Object *)pDVar2,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                             ),
                        this_02 == (Dictionary_2_System_Int32_TabState_ *)0x0)) ||
                       (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02
                                             ,(Int32Enum__Enum)pOVar12,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                            ), pOVar12 == (Object *)0x0)) break;
                    pOVar12[2].klass = (Object__Class *)((int)&((pOVar12[2].klass)->_0).image + 1);
                    index_01 = &UNK_?;
                    pLVar11 = (this->fields).urls;
                    if (pLVar11 == (List_1_StreamedAudioClipInfo_ *)0x0) break;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pSVar19 = (String *)0x0;
        if (pSVar4->klass == TypeInfo__System__String) {
          pSVar19 = pSVar4;
        }
        if (pSVar19 != (String *)0x0) {
          (this->fields).originalURL = pSVar19;
          pSVar19 = (String *)0x0;
          if (pSVar4->klass == TypeInfo__System__String) {
            pSVar19 = pSVar4;
          }
          if (pSVar19 != (String *)0x0) goto code_?;
        }
        func_?();
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
         (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar12,
                              (this->fields).selectedTab,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                             ), pOVar13 != (Object *)0x0)) {
        currentPage = pOVar13[2].monitor;
        pDVar12 = (this->fields).tabs;
        if ((pDVar12 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
           ((pTVar14 = (TabState *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar12,
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
                           Int32Enum,System::Object]::
                           Dictionary_2_System_Int32Enum_System_Object__get_Item
                                     ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                                      (this->fields).selectedTab,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                     );
              this_02 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                        (this->fields).categorysAmount;
              if (this_02 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
                LStack_8._current =
                     (RegexCharClass_SingleRange)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
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
                                 Int32Enum,System::Object]::
                                 Dictionary_2_System_Int32Enum_System_Object__get_Item
                                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar12,
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
                      if ((pUStack_19 == (UnityAction_1_System_String_ *)0x0) ||
                         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                          Object]::UnityAction_1_System_Object___ctor
                                    ((UnityAction_1_System_Object_ *)pUStack_19,(Object *)this,
                                     MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                     ,(MethodInfo *)0x0), pSVar16 == (SoundViewItem *)0x0))
                      goto code_?;
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
  this_00 = (Dictionary_2_System_Int32_TabState_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
    (this->fields).tabs = this_00;
    func_?(&(this->fields).tabs,this_00);
    this_01 = (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>
                             );
    if (this_01 != (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Dictionary__
                );
      (this->fields).soundTabInfos = this_01;
      func_?(&(this->fields).soundTabInfos,this_01);
      this_02 = (Dictionary_2_System_Int32_System_Int32_ *)
                func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
      if (this_02 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
        (this->fields).categorysAmount = this_02;
        func_?(&(this->fields).categorysAmount,this_02);
        this_03 = (Dictionary_2_System_String_System_Int32_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                                 );
        if (this_03 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                    );
          (this->fields).categoryToNameCombinations = this_03;
          func_?(&(this->fields).categoryToNameCombinations,this_03);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                    ((Transform *)this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

