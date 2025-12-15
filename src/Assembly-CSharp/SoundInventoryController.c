
/* Void DebugPrintSound(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_DebugPrintSound
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Data_sound__url__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Pitch__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_no_volume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Volume__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_no_pitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_volume);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_no_volume;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)data,(Object *)StringLiteral_volume,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pSVar1 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,(Object *)StringLiteral_volume,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
    }
    pSVar3 = StringLiteral_no_pitch;
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)data,(Object *)StringLiteral_pitch,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pSVar3 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,(Object *)StringLiteral_pitch,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
    }
    values = (String__Array *)FUN_?(TypeInfo__System__String,6);
    if (values != (String__Array *)0x0) {
      FUN_?(values,0,StringLiteral_Data_sound__url__);
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,(Object *)StringLiteral_url,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar5 = 0;
      uVar6 = uVar5;
      if (pOVar4 != (Object *)0x0) {
        uVar6 = (*(pOVar4->klass->vtable).ToString.methodPtr)
                          (pOVar4,(pOVar4->klass->vtable).ToString.method);
      }
      FUN_?(values,1,uVar6);
      FUN_?(values,2,StringLiteral__Volume__);
      uVar6 = uVar5;
      if (pSVar1 != (String *)0x0) {
        uVar6 = (*(pSVar1->klass->vtable).ToString.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable).ToString.method);
      }
      FUN_?(values,3,uVar6);
      FUN_?(values,4,StringLiteral__Pitch__);
      if (pSVar3 != (String *)0x0) {
        uVar5 = (*(pSVar3->klass->vtable).ToString.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable).ToString.method);
      }
      FUN_?(values,5,uVar5);
      pSVar1 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar7 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar7,3,pSVar1);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_Initialize
               (SoundInventoryController *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<SoundTabInfo,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<SoundTabInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SoundInventoryController__PageTurned_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SoundInventoryController__TabSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SoundTabInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TabState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SoundInventoryController____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).settingsBase;
  if (pSVar1 != (SettingsBase *)0x0) {
    pSVar2 = (String *)0x0;
    uVar3 = 0;
    SettingsBase::SettingsBase_Initialize
              (pSVar1,woID,root,MVWorldObjectDocumentationType__Enum_SoundEmitter,(MethodInfo *)0x0)
    ;
    (this->fields).selectedTab = 1;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_01,woID,(MethodInfo *)0x0);
      if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
         (pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)(pMVar4->fields)._.data,
         pDVar5 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)0x0)) {
        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::StyleComplexSelector+PseudoStateData]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                           (pDVar5,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            ->klass->rgctx_data[0x21].method);
        if (iVar6 < 0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar5,(Object *)StringLiteral_url
                     ,(Object *)::StringLiteral__,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        SoundInventoryController_DebugPrintSound
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar5,(MethodInfo *)0x0);
        pSVar7 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDVar5,
                             (Object *)StringLiteral_url,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pSVar7 == (String *)0x0) {
          (this->fields).originalURL = (String *)0x0;
        }
        else {
          pSVar8 = pSVar2;
          if (pSVar7->klass == pSRam0000000182dbdde0) {
            pSVar8 = pSVar7;
          }
          if (pSVar8 == (String *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (this->fields).originalURL = pSVar8;
          pSVar8 = pSVar2;
          if (pSVar7->klass == pSRam0000000182dbdde0) {
            pSVar8 = pSVar7;
          }
          if (pSVar8 == (String *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&(this->fields).originalURL >> 0xc);
          lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar13 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        iVar15 = iRam_?;
        pSVar16 = (this->fields).audioUrls;
        if (pSVar16 != (StreamedAudioClipList *)0x0) {
          (this->fields).urls = (pSVar16->fields).urls;
          if (iVar15 != 0) {
            uVar10 = (uint)((ulonglong)&(this->fields).urls >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          pIVar17 = (this->fields).inventoryControllerPrefab;
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar18 = 
          InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
          ;
          pIVar17 = (InventoryController *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                              ((Object *)pIVar17,parent,0,
                               InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                              );
          bVar14 = iRam_? != 0;
          (this->fields).inventoryController = pIVar17;
          if (bVar14) {
            uVar10 = (uint)((ulonglong)&(this->fields).inventoryController >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          pIVar17 = (this->fields).inventoryController;
          if (pIVar17 != (InventoryController *)0x0) {
            pUVar19 = (pIVar17->fields).OnPageTurned;
            pDVar20 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
            FUN_?(pDVar20,this);
            pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pUVar19,pDVar20,(MethodInfo *)0x0);
            pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
            if (pDVar20 == (Delegate *)0x0) {
              (pIVar17->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
            }
            else {
              pUVar19 = (UnityAction_1_System_Int32_ *)
                        FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
              if (pUVar19 == (UnityAction_1_System_Int32_ *)0x0) {
                FUN_?(pDVar20,pUVar21);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              (pIVar17->fields).OnPageTurned = pUVar19;
              pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
              lVar11 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
              if (lVar11 == 0) {
                FUN_?(pDVar20,pUVar21);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)&(pIVar17->fields).OnPageTurned >> 0xc);
              lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
              do {
                uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
                puVar13 = (ulonglong *)(lVar11 + 0xADDR);
                LOCK();
                bVar14 = uVar12 == *puVar13;
                if (bVar14) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar14);
            }
            pIVar17 = (this->fields).inventoryController;
            if (pIVar17 != (InventoryController *)0x0) {
              pUVar19 = (pIVar17->fields).OnTabSelected;
              pDVar20 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
              FUN_?(pDVar20,this);
              pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pUVar19,pDVar20,(MethodInfo *)0x0);
              pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
              if (pDVar20 == (Delegate *)0x0) {
                (pIVar17->fields).OnTabSelected = (UnityAction_1_System_Int32_ *)0x0;
              }
              else {
                pUVar19 = (UnityAction_1_System_Int32_ *)
                          FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
                if (pUVar19 == (UnityAction_1_System_Int32_ *)0x0) {
                  FUN_?(pDVar20,pUVar21);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                (pIVar17->fields).OnTabSelected = pUVar19;
                pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                lVar11 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
                if (lVar11 == 0) {
                  FUN_?(pDVar20,pUVar21);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar10 = (uint)((ulonglong)&(pIVar17->fields).OnTabSelected >> 0xc);
                lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
                do {
                  uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
                  puVar13 = (ulonglong *)(lVar11 + 0xADDR);
                  LOCK();
                  bVar14 = uVar12 == *puVar13;
                  if (bVar14) {
                    *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar14);
              }
              pIVar17 = (this->fields).inventoryController;
              if (pIVar17 != (InventoryController *)0x0) {
                InventoryController::InventoryController_Initialize
                          (pIVar17,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
                pLVar22 = (this->fields).urls;
                if (pLVar22 != (List_1_StreamedAudioClipInfo_ *)0x0) {
                  lVar11 = 0x20;
                  do {
                    uVar10 = (uint)pSVar2;
                    if ((pLVar22->fields)._size <= (int)uVar10) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                      ,0);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__Dispose__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__get_Current__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<SoundViewItem>__GetEnumerator__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__UnityEngine__Object);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
                        LOCK();
                        UNLOCK();
                        FUN_?(&StringLiteral_url);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pIVar17 = (this->fields).inventoryController;
                      if ((pIVar17 != (InventoryController *)0x0) &&
                         (pLVar23 = InventoryController::
                                    InventoryController_GetComponentsOfSlotsWithType
                                              (pIVar17,
                                               System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                                              ), pLVar23 != (List_1_System_Object_ *)0x0)) {
                        if (iRam_? != 0) {
                          uVar10 = (uint)((ulonglong)&puStack_24 >> 0xc);
                          uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                          do {
                            uVar25 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                            puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                            LOCK();
                            bVar14 = uVar25 == *puVar13;
                            if (bVar14) {
                              *puVar13 = uVar25 | 1L << (uVar10 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar14);
                        }
                        ppLStack_26 = (List_1_System_Object_ **)
                                      ((ulonglong)(uint)(pLVar23->fields)._version << 0x20);
                        uStack_27 = 0;
                        lStack_28 = (longlong)ppLStack_26;
                        pSVar29 = (SoundViewItem *)0x0;
                        puStack_24 = (undefined *)0x0;
                        ppLStack_26 = &pLStack_30;
                        pLStack_30 = pLVar23;
                        while (bVar31 = mscorlib.dll::System::Collections::Generic::
                                        List`1[T]+Enumerator[System::Object]::
                                        List_1_T_Enumerator_System_Object__MoveNext
                                                  ((List_1_T_Enumerator_System_Object_ *)&pLStack_30
                                                   ,
                                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                                                  ), bVar31 != 0) {
                          if (pSVar29 == (SoundViewItem *)0x0) goto code_?;
                          SoundViewItem::SoundViewItem_UnsubscribePendingDownloads
                                    (pSVar29,(MethodInfo *)0x0);
                        }
                        pIVar17 = (this->fields).inventoryController;
                        if ((pIVar17 != (InventoryController *)0x0) &&
                           (pIVar32 = (pIVar17->fields).inventorySlots,
                           pIVar32 != (InventorySlots *)0x0)) {
                          InventorySlots::InventorySlots_Clear(pIVar32,(MethodInfo *)0x0);
                          pIVar17 = (this->fields).inventoryController;
                          uVar10 = (this->fields).selectedTab;
                          pDVar33 = (this->fields).tabs;
                          if ((pDVar33 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
                             (pOVar34 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32,System::Object]::
                                        Dictionary_2_System_Int32_System_Object__get_Item
                                                  ((Dictionary_2_System_Int32_System_Object_ *)
                                                   pDVar33,uVar10,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pOVar34 != (Object *)0x0)) {
                            uVar35 = *(uint *)((longlong)&pOVar34[2].klass + 4);
                            pDVar33 = (this->fields).tabs;
                            if ((pDVar33 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
                               (pOVar34 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32,System::Object]::
                                          Dictionary_2_System_Int32_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32_System_Object_ *)
                                                     pDVar33,(this->fields).selectedTab,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pOVar34 != (Object *)0x0)) {
                              uVar36 = FUN_?((float)*(int *)&pOVar34[2].klass /
                                                     (float)*(int *)&pOVar34[1].klass);
                              uVar37 = 1;
                              if (1 < (int)uVar36) {
                                uVar37 = uVar36;
                              }
                              if ((pIVar17 != (InventoryController *)0x0) &&
                                 (pTVar38 = (pIVar17->fields).tabMenu, pTVar38 != (TabMenuBase *)0x0))
                              {
                                (*(pTVar38->klass->vtable).__unknown_1.methodPtr)
                                          (pTVar38,(ulonglong)uVar10,(ulonglong)uVar35,
                                           (ulonglong)uVar37,
                                           (pTVar38->klass->vtable).__unknown_1.method);
                                pIVar32 = (pIVar17->fields).inventorySlots;
                                if (pIVar32 != (InventorySlots *)0x0) {
                                  InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                                            (pIVar32,uVar35,(pIVar17->fields).numberOfSlots,
                                             (MethodInfo *)0x0);
                                  pSVar7 = StringLiteral_url;
                                  pSVar2 = (this->fields).originalURL;
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__System__Convert);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pSVar1 = (this->fields).settingsBase;
                                  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                                    FUN_?();
                                  }
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__System__Convert);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                                    FUN_?();
                                  }
                                  pSVar2 = mscorlib.dll::System::Convert::Convert_ToString_1
                                                      ((Object *)pSVar2,(IFormatProvider *)0x0,
                                                       (MethodInfo *)0x0);
                                  if (pSVar1 != (SettingsBase *)0x0) {
                                    SettingsBase::SettingsBase_OnSettingChanged
                                              (pSVar1,pSVar7,(Object *)pSVar2,(MethodInfo *)0x0);
                                    pDVar39 = (this->fields).soundTabInfos;
                                    if (pDVar39 !=
                                        (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) {
                                      this_04 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                 *)mscorlib.dll::System::Collections::Generic::
                                                   Dictionary`2[System::Int32,System::Object]::
                                                   Dictionary_2_System_Int32_System_Object__get_Item
                                                             ((
                                                  Dictionary_2_System_Int32_System_Object_ *)pDVar39
                                                  ,(this->fields).selectedTab,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                                  );
                                      pDVar40 = (this->fields).categorysAmount;
                                      if (pDVar40 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)
                                      {
                                        iVar15 = FUN_?(pDVar40,(this->fields).selectedTab,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                                  );
                                        index = 0;
                                        if (iVar15 < 1) {
                                          return;
                                        }
                                        while (((pDVar33 = (this->fields).tabs,
                                                pDVar33 != (Dictionary_2_System_Int32_TabState_ *)0x0
                                                && (pTVar41 = (TabState *)
                                                              mscorlib.dll::System::Collections::
                                                              Generic::Dictionary`2[System::
                                                              Int32,System::Object]::
                                                                                                                            
                                                  Dictionary_2_System_Int32_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32_System_Object_ *)pDVar33,
                                                  (this->fields).selectedTab,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pTVar41 != (TabState *)0x0)) &&
                                               (pIVar42 = TabState::TabState_get_SlotRange
                                                                    (pTVar41,(MethodInfo *)0x0),
                                               pIVar42 != (Int32__Array *)0x0))) {
                                          if ((int)pIVar42->max_length == 0) {
code_?:
                                            FUN_?();
                                            pcVar9 = (code *)swi(3);
                                            (*pcVar9)();
                                            return;
                                          }
                                          if (pIVar42->vector[0] <= index) {
                                            if ((uint)pIVar42->max_length < 2)
                                            goto code_?;
                                            if (index < pIVar42->vector[1]) {
                                              pSVar29 = (this->fields).soundViewItemPrefab;
                                              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                           field_0x1c == 0) {
                                                FUN_?();
                                              }
                                              pSVar29 = (SoundViewItem *)
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Object::Object_1_Instantiate_4
                                                                  ((Object *)pSVar29,
                                                                                                                                      
                                                  SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                                  );
                                              if (this_04 !=
                                                  (
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                  *)0x0) {
                                                info = mscorlib.dll::System::Collections::Generic::
                                                       List`1[UnityEngine::UIElements::UIR::
                                                       EntryPreProcessor+AllocSize]::
                                                                                                              
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                                            (this_04,index,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                                  );
                                                pSVar2 = (this->fields).originalURL;
                                                this_05 = (UnityAction_1_System_Object_ *)
                                                          FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                                  );
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`1[System::Object]::
                                                UnityAction_1_System_Object___ctor
                                                          (this_05,(Object *)this,
                                                                                                                      
                                                  MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                                  ,(MethodInfo *)0x0);
                                                if (pSVar29 != (SoundViewItem *)0x0) {
                                                  SoundViewItem::SoundViewItem_Initialize
                                                            (pSVar29,(SoundTabInfo *)info,pSVar2,
                                                             (UnityAction_1_System_String_ *)this_05
                                                             ,(MethodInfo *)0x0);
                                                  pIVar17 = (this->fields).inventoryController;
                                                  item = UnityEngine.CoreModule.dll::UnityEngine::
                                                         Component::Component_get_gameObject
                                                                   ((Component *)pSVar29,
                                                                    (MethodInfo *)0x0);
                                                  if (pIVar17 != (InventoryController *)0x0) {
                                                    InventoryController::
                                                    InventoryController_AddObject
                                                              (pIVar17,item,
                                                               index % (this->fields).
                                                                       numberOfSlotsPrPage,
                                                               (MethodInfo *)0x0);
                                                    goto code_?;
                                                  }
                                                }
                                              }
                                              break;
                                            }
                                          }
code_?:
                                          index = index + 1;
                                          if (iVar15 <= index) {
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      FUN_?();
code_?:
                      FUN_?();
                      FUN_?();
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pOVar34 = (Object *)
                              FUN_?(
                                           TypeInfo__SoundInventoryController____c__DisplayClass13_0
                                           );
                    pLVar22 = (this->fields).urls;
                    if (pLVar22 == (List_1_StreamedAudioClipInfo_ *)0x0) break;
                    if ((uint)(pLVar22->fields)._size <= uVar10) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pSVar43 = (pLVar22->fields)._items;
                    if (pSVar43 == (StreamedAudioClipInfo__Array *)0x0) break;
                    if ((uint)pSVar43->max_length <= uVar10) {
                      FUN_?();
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar44 = *(longlong *)((longlong)pSVar43->vector + lVar11 + -0x20);
                    if (lVar44 == 0) break;
                    pSVar7 = *(String **)(lVar44 + 0x20);
                    if (pOVar34 == (Object *)0x0) break;
                    bVar14 = iRam_? != 0;
                    pOVar34[1].klass =
                         *(Object__Class **)
                          (*(longlong *)
                            ((longlong)((((this->fields).urls)->fields)._items)->vector +
                            lVar11 + -0x20) + 0x18);
                    if (bVar14) {
                      uVar35 = (uint)((ulonglong)(pOVar34 + 1) >> 0xc);
                      lVar44 = (ulonglong)((uVar35 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar12 = *(ulonglong *)(lVar44 + 0xADDR);
                        puVar13 = (ulonglong *)(lVar44 + 0xADDR);
                        LOCK();
                        bVar14 = uVar12 == *puVar13;
                        if (bVar14) {
                          *puVar13 = uVar12 | 1L << (uVar35 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar14);
                    }
                    pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)(this->fields).categoryToNameCombinations;
                    if (pDVar5 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                   *)0x0) break;
                    iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                       (pDVar5,(Object *)pSVar7,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                                        ->klass->rgctx_data[0x21].method);
                    if (iVar6 < 0) {
                      pDVar45 = (this->fields).categoryToNameCombinations;
                      if (pDVar45 == (Dictionary_2_System_String_System_Int32_ *)0x0) break;
                      pMVar18 = (MethodInfo *)CONCAT71((int7)((ulonglong)pMVar18 >> 8),2);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Int32]::Dictionary_2_System_Object_System_Int32__TryInsert
                                ((Dictionary_2_System_Object_System_Int32_ *)
                                 (this->fields).categoryToNameCombinations,(Object *)pSVar7,
                                 ((pDVar45->fields)._count - (pDVar45->fields)._freeCount) + 1,
                                 (InsertionBehavior__Enum)pMVar18,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                                 ->klass->rgctx_data[0x22].method);
                    }
                    pDVar45 = (this->fields).categoryToNameCombinations;
                    if (pDVar45 == (Dictionary_2_System_String_System_Int32_ *)0x0) break;
                    IVar46 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Int32Enum]::
                             Dictionary_2_System_Object_System_Int32Enum__get_Item
                                       ((Dictionary_2_System_Object_System_Int32Enum_ *)pDVar45,
                                        (Object *)pSVar7,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                       );
                    pDVar45 = (this->fields).categoryToNameCombinations;
                    pDVar47 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).tabs;
                    if (pDVar45 == (Dictionary_2_System_String_System_Int32_ *)0x0) break;
                    key = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Int32Enum]::
                          Dictionary_2_System_Object_System_Int32Enum__get_Item
                                    ((Dictionary_2_System_Object_System_Int32Enum_ *)pDVar45,
                                     (Object *)pSVar7,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                    );
                    if (pDVar47 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
                    iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Vector3]::
                             Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                       (pDVar47,key,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                        ->klass->rgctx_data[0x21].method);
                    if (iVar6 < 0) {
                      uVar35 = (this->fields).numberOfSlotsPrPage;
                      pTVar41 = (TabState *)FUN_?(TypeInfo__TabState);
                      uVar12 = (ulonglong)uVar35;
                      TabState::TabState__ctor(pTVar41,IVar46,pSVar7,uVar35,(MethodInfo *)0x0);
                      pDVar33 = (this->fields).tabs;
                      if (pDVar33 == (Dictionary_2_System_Int32_TabState_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar33,IVar46,
                                 (Object *)pTVar41,
                                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar12 >> 8),2),
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                                 ->klass->rgctx_data[0x22].method);
                      if (((pTVar41 == (TabState *)0x0) ||
                          (pIVar17 = (this->fields).inventoryController,
                          pIVar17 == (InventoryController *)0x0)) ||
                         (pTVar38 = (pIVar17->fields).tabMenu, pTVar38 == (TabMenuBase *)0x0)) break;
                      pMVar18 = (pTVar38->klass->vtable).__unknown.method;
                      (*(pTVar38->klass->vtable).__unknown.methodPtr)
                                (pTVar38,(ulonglong)IVar46,(pTVar41->fields).name);
                    }
                    pDVar47 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                             (this->fields).soundTabInfos;
                    if (pDVar47 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
                    iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Vector3]::
                             Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                       (pDVar47,IVar46,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                                        ->klass->rgctx_data[0x21].method);
                    if (iVar6 < 0) {
                      pDVar39 = (this->fields).soundTabInfos;
                      this_02 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                 *)FUN_?(
                                                TypeInfo__System__Collections__Generic__List<SoundTabInfo>
                                                );
                      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::
                      Metadata::__Il2CppFullySharedGenericType]::
                      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                (this_02,
                                 MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__
                                );
                      if (pDVar39 == (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar39,IVar46,
                                 (Object *)this_02,
                                 (InsertionBehavior__Enum)
                                 CONCAT71((int7)((ulonglong)pMVar18 >> 8),2),
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                                 ->klass->rgctx_data[0x22].method);
                    }
                    pDVar39 = (this->fields).soundTabInfos;
                    if (pDVar39 == (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) break;
                    pOVar48 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar39,IVar46,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                        );
                    this_03 = (Predicate_1_Object_ *)
                              FUN_?(TypeInfo__System__Func<SoundTabInfo,_bool>);
                    uVar3 = 0;
                    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                              (this_03,pOVar34,
                               MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                               ,(MethodInfo *)0x0);
                    bVar31 = System.Core.dll::System::Linq::Enumerable::Enumerable_All
                                       ((IEnumerable_1_System_Object_ *)pOVar48,
                                        (Func_2_Object_Boolean_ *)this_03,
                                        bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                                       );
                    if (bVar31 != 0) {
                      pDVar39 = (this->fields).soundTabInfos;
                      if (pDVar39 == (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) break;
                      pLVar23 = (List_1_System_Object_ *)
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32,System::Object]::
                                Dictionary_2_System_Int32_System_Object__get_Item
                                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar39,
                                           IVar46,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                          );
                      pOVar48 = (Object *)FUN_?(TypeInfo__SoundTabInfo);
                      if (pOVar48 == (Object *)0x0) break;
                      pOVar48[1].klass = pOVar34[1].klass;
                      func_?(pOVar48 + 1);
                      pOVar48[1].monitor = (MonitorData *)pSVar7;
                      func_?(&pOVar48[1].monitor);
                      pLVar22 = (this->fields).urls;
                      if (pLVar22 == (List_1_StreamedAudioClipInfo_ *)0x0) break;
                      lVar44 = FUN_?(pLVar22,pSVar2);
                      if (lVar44 == 0) break;
                      pOVar48[2].klass = *(Object__Class **)(lVar44 + 0x10);
                      func_?(pOVar48 + 2);
                      if (pLVar23 == (List_1_System_Object_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                (pLVar23,pOVar48,
                                 MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                                );
                    }
                    this_00 = (Dictionary_2_System_Int32_System_Single_ *)
                              (this->fields).categorysAmount;
                    if (this_00 == (Dictionary_2_System_Int32_System_Single_ *)0x0) break;
                    iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Single]::
                             Dictionary_2_System_Int32_System_Single__FindEntry
                                       (this_00,IVar46,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                        ->klass->rgctx_data[0x21].method);
                    pDVar40 = (this->fields).categorysAmount;
                    if (iVar6 < 0) {
                      if (pDVar40 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                      iVar6 = 1;
                      pMVar18 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
                      pIVar49 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                                ->klass->rgctx_data;
                    }
                    else {
                      if (pDVar40 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                      iVar15 = FUN_?(pDVar40,IVar46,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                            );
                      pMVar18 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
                      iVar6 = iVar15 + 1;
                      pIVar49 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                                ->klass->rgctx_data;
                    }
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                              (pDVar40,IVar46,iVar6,(InsertionBehavior__Enum)pMVar18,
                               pIVar49[0x22].method);
                    pDVar45 = (this->fields).categoryToNameCombinations;
                    pDVar33 = (this->fields).tabs;
                    if (pDVar45 == (Dictionary_2_System_String_System_Int32_ *)0x0) break;
                    IVar46 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Int32Enum]::
                             Dictionary_2_System_Object_System_Int32Enum__get_Item
                                       ((Dictionary_2_System_Object_System_Int32Enum_ *)pDVar45,
                                        (Object *)pSVar7,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                       );
                    if (pDVar33 == (Dictionary_2_System_Int32_TabState_ *)0x0) break;
                    pOVar34 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar33,IVar46,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                        );
                    if (pOVar34 == (Object *)0x0) break;
                    *(int *)&pOVar34[2].klass = *(int *)&pOVar34[2].klass + 1;
                    pSVar2 = (String *)(ulonglong)(uVar10 + 1);
                    pLVar22 = (this->fields).urls;
                    lVar11 = lVar11 + 8;
                  } while (pLVar22 != (List_1_StreamedAudioClipInfo_ *)0x0);
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_OnSettingChanged
               (SoundInventoryController *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).settingsBase;
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = mscorlib.dll::System::Convert::Convert_ToString_1
                       (value,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pSVar1 != (SettingsBase *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((((pSVar1->fields).woID != -1) && (key != (String *)0x0)) &&
       ((key->fields)._stringLength != 0)) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,(pSVar1->fields).woID,(MethodInfo *)0x0);
        if (wo == (MVWorldObjectClient *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar2 = 0;
        WorldObjectDataValidator::WorldObjectDataValidator_Validate
                  (wo,key,(Object *)value_00,(MethodInfo *)0x0);
        this_00 = (pSVar1->fields).result;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (this_00,(Object *)key,(Object *)value_00,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if (this_02 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,
                       (Object *)value_00,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                      (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
            return;
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_PageTurned
               (SoundInventoryController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetNewOriginalUrl(String) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_SetNewOriginalUrl
               (SoundInventoryController *this,String *url,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).originalURL = url;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).originalURL >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                  ,0,method);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundViewItem>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar6 = (this->fields).inventoryController;
  if ((pIVar6 != (InventoryController *)0x0) &&
     (pLVar7 = InventoryController::InventoryController_GetComponentsOfSlotsWithType
                          (pIVar6,
                           System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                          ), pLVar7 != (List_1_System_Object_ *)0x0)) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_8 >> 0xc);
      uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar3;
        if (bVar1) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar7->fields)._version << 0x20);
    uStack_10 = 0;
    LStack_11._8_8_ = pLStack_9;
    LStack_11._current = (Object *)0x0;
    uStack_8 = 0;
    pLStack_9 = &LStack_11;
    LStack_11._list = pLVar7;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_11,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                              ), bVar12 != 0) {
      if ((SoundViewItem *)LStack_11._current == (SoundViewItem *)0x0) goto code_?;
      SoundViewItem::SoundViewItem_UnsubscribePendingDownloads
                ((SoundViewItem *)LStack_11._current,(MethodInfo *)0x0);
    }
    pIVar6 = (this->fields).inventoryController;
    if ((pIVar6 != (InventoryController *)0x0) &&
       (pIVar13 = (pIVar6->fields).inventorySlots, pIVar13 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar13,(MethodInfo *)0x0);
      pIVar6 = (this->fields).inventoryController;
      uVar2 = (this->fields).selectedTab;
      pDVar14 = (this->fields).tabs;
      if ((pDVar14 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
         (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,uVar2,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              ), pOVar15 != (Object *)0x0)) {
        page = *(uint *)((longlong)&pOVar15[2].klass + 4);
        pDVar14 = (this->fields).tabs;
        if ((pDVar14 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
           (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,
                                 (this->fields).selectedTab,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                ), pOVar15 != (Object *)0x0)) {
          uVar16 = FUN_?((float)*(int *)&pOVar15[2].klass / (float)*(int *)&pOVar15[1].klass
                                );
          uVar17 = 1;
          if (1 < (int)uVar16) {
            uVar17 = uVar16;
          }
          if ((pIVar6 != (InventoryController *)0x0) &&
             (pTVar18 = (pIVar6->fields).tabMenu, pTVar18 != (TabMenuBase *)0x0)) {
            (*(pTVar18->klass->vtable).__unknown_1.methodPtr)
                      (pTVar18,(ulonglong)uVar2,(ulonglong)page,(ulonglong)uVar17,
                       (pTVar18->klass->vtable).__unknown_1.method);
            pIVar13 = (pIVar6->fields).inventorySlots;
            if (pIVar13 != (InventorySlots *)0x0) {
              InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                        (pIVar13,page,(pIVar6->fields).numberOfSlots,(MethodInfo *)0x0);
              key = StringLiteral_url;
              pSVar19 = (this->fields).originalURL;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Convert);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_00 = (this->fields).settingsBase;
              if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Convert);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                FUN_?();
              }
              pSVar19 = mscorlib.dll::System::Convert::Convert_ToString_1
                                  ((Object *)pSVar19,(IFormatProvider *)0x0,(MethodInfo *)0x0);
              if (this_00 != (SettingsBase *)0x0) {
                SettingsBase::SettingsBase_OnSettingChanged
                          (this_00,key,(Object *)pSVar19,(MethodInfo *)0x0);
                this_01 = (this->fields).soundTabInfos;
                if (this_01 != (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) {
                  this_02 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                       (this->fields).selectedTab,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                      );
                  pDVar20 = (this->fields).categorysAmount;
                  if (pDVar20 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                    iVar21 = FUN_?(pDVar20,(this->fields).selectedTab,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                          );
                    index = 0;
                    if (0 < iVar21) {
                      do {
                        pDVar14 = (this->fields).tabs;
                        if (((pDVar14 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
                            (this_03 = (TabState *)
                                       mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Int32,System::Object]::
                                       Dictionary_2_System_Int32_System_Object__get_Item
                                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar14
                                                  ,(this->fields).selectedTab,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                 ), this_03 == (TabState *)0x0)) ||
                           (pIVar22 = TabState::TabState_get_SlotRange(this_03,(MethodInfo *)0x0),
                           pIVar22 == (Int32__Array *)0x0)) goto code_?;
                        if ((int)pIVar22->max_length == 0) {
code_?:
                          FUN_?();
                          pcVar23 = (code *)swi(3);
                          (*pcVar23)();
                          return;
                        }
                        if (pIVar22->vector[0] <= index) {
                          if ((uint)pIVar22->max_length < 2) goto code_?;
                          if (index < pIVar22->vector[1]) {
                            pSVar24 = (this->fields).soundViewItemPrefab;
                            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            pSVar24 = (SoundViewItem *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_Instantiate_4
                                                ((Object *)pSVar24,
                                                 SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                                );
                            if (this_02 ==
                                (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                                0x0) goto code_?;
                            info = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                   UIElements::UIR::EntryPreProcessor+AllocSize]::
                                   List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                             (this_02,index,
                                              MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                             );
                            pSVar19 = (this->fields).originalURL;
                            this_04 = (UnityAction_1_System_Object_ *)
                                      FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                                  );
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Object]::UnityAction_1_System_Object___ctor
                                      (this_04,(Object *)this,
                                       MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                       ,(MethodInfo *)0x0);
                            if (pSVar24 == (SoundViewItem *)0x0) goto code_?;
                            SoundViewItem::SoundViewItem_Initialize
                                      (pSVar24,(SoundTabInfo *)info,pSVar19,
                                       (UnityAction_1_System_String_ *)this_04,(MethodInfo *)0x0);
                            pIVar6 = (this->fields).inventoryController;
                            item = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pSVar24,(MethodInfo *)0x0);
                            if (pIVar6 == (InventoryController *)0x0) goto code_?;
                            InventoryController::InventoryController_AddObject
                                      (pIVar6,item,index % (this->fields).numberOfSlotsPrPage,
                                       (MethodInfo *)0x0);
                          }
                        }
                        index = index + 1;
                      } while (index < iVar21);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_TabSelected
               (SoundInventoryController *this,int32_t tab,MethodInfo *method)

{
  if ((this->fields).selectedTab == tab) {
    return;
  }
  (this->fields).selectedTab = tab;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundViewItem>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryController;
  if ((pIVar1 != (InventoryController *)0x0) &&
     (pLVar2 = InventoryController::InventoryController_GetComponentsOfSlotsWithType
                          (pIVar1,
                           System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                          ), pLVar2 != (List_1_System_Object_ *)0x0)) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
    uStack_10 = 0;
    LStack_11._8_8_ = pLStack_9;
    LStack_11._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_9 = &LStack_11;
    LStack_11._list = pLVar2;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_11,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                              ), bVar12 != 0) {
      if ((SoundViewItem *)LStack_11._current == (SoundViewItem *)0x0) goto code_?;
      SoundViewItem::SoundViewItem_UnsubscribePendingDownloads
                ((SoundViewItem *)LStack_11._current,(MethodInfo *)0x0);
    }
    pIVar1 = (this->fields).inventoryController;
    if ((pIVar1 != (InventoryController *)0x0) &&
       (pIVar13 = (pIVar1->fields).inventorySlots, pIVar13 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar13,(MethodInfo *)0x0);
      pIVar1 = (this->fields).inventoryController;
      uVar3 = (this->fields).selectedTab;
      pDVar14 = (this->fields).tabs;
      if ((pDVar14 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
         (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,uVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              ), pOVar15 != (Object *)0x0)) {
        page = *(uint *)((longlong)&pOVar15[2].klass + 4);
        pDVar14 = (this->fields).tabs;
        if ((pDVar14 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
           (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,
                                 (this->fields).selectedTab,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                ), pOVar15 != (Object *)0x0)) {
          uVar16 = FUN_?((float)*(int *)&pOVar15[2].klass / (float)*(int *)&pOVar15[1].klass
                                );
          uVar17 = 1;
          if (1 < (int)uVar16) {
            uVar17 = uVar16;
          }
          if ((pIVar1 != (InventoryController *)0x0) &&
             (pTVar18 = (pIVar1->fields).tabMenu, pTVar18 != (TabMenuBase *)0x0)) {
            (*(pTVar18->klass->vtable).__unknown_1.methodPtr)
                      (pTVar18,(ulonglong)uVar3,(ulonglong)page,(ulonglong)uVar17,
                       (pTVar18->klass->vtable).__unknown_1.method);
            pIVar13 = (pIVar1->fields).inventorySlots;
            if (pIVar13 != (InventorySlots *)0x0) {
              InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                        (pIVar13,page,(pIVar1->fields).numberOfSlots,(MethodInfo *)0x0);
              key = StringLiteral_url;
              pSVar19 = (this->fields).originalURL;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Convert);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_00 = (this->fields).settingsBase;
              if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Convert);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                FUN_?();
              }
              pSVar19 = mscorlib.dll::System::Convert::Convert_ToString_1
                                  ((Object *)pSVar19,(IFormatProvider *)0x0,(MethodInfo *)0x0);
              if (this_00 != (SettingsBase *)0x0) {
                SettingsBase::SettingsBase_OnSettingChanged
                          (this_00,key,(Object *)pSVar19,(MethodInfo *)0x0);
                this_01 = (this->fields).soundTabInfos;
                if (this_01 != (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) {
                  this_02 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                       (this->fields).selectedTab,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                      );
                  pDVar20 = (this->fields).categorysAmount;
                  if (pDVar20 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                    iVar21 = FUN_?(pDVar20,(this->fields).selectedTab,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                          );
                    index = 0;
                    if (0 < iVar21) {
                      do {
                        pDVar14 = (this->fields).tabs;
                        if (((pDVar14 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
                            (this_03 = (TabState *)
                                       mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Int32,System::Object]::
                                       Dictionary_2_System_Int32_System_Object__get_Item
                                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar14
                                                  ,(this->fields).selectedTab,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                 ), this_03 == (TabState *)0x0)) ||
                           (pIVar22 = TabState::TabState_get_SlotRange(this_03,(MethodInfo *)0x0),
                           pIVar22 == (Int32__Array *)0x0)) goto code_?;
                        if ((int)pIVar22->max_length == 0) {
code_?:
                          FUN_?();
                          pcVar23 = (code *)swi(3);
                          (*pcVar23)();
                          return;
                        }
                        if (pIVar22->vector[0] <= index) {
                          if ((uint)pIVar22->max_length < 2) goto code_?;
                          if (index < pIVar22->vector[1]) {
                            pSVar24 = (this->fields).soundViewItemPrefab;
                            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            pSVar24 = (SoundViewItem *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_Instantiate_4
                                                ((Object *)pSVar24,
                                                 SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                                );
                            if (this_02 ==
                                (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                                0x0) goto code_?;
                            info = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                   UIElements::UIR::EntryPreProcessor+AllocSize]::
                                   List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                             (this_02,index,
                                              MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                             );
                            pSVar19 = (this->fields).originalURL;
                            this_04 = (UnityAction_1_System_Object_ *)
                                      FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                                  );
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Object]::UnityAction_1_System_Object___ctor
                                      (this_04,(Object *)this,
                                       MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                       ,(MethodInfo *)0x0);
                            if (pSVar24 == (SoundViewItem *)0x0) goto code_?;
                            SoundViewItem::SoundViewItem_Initialize
                                      (pSVar24,(SoundTabInfo *)info,pSVar19,
                                       (UnityAction_1_System_String_ *)this_04,(MethodInfo *)0x0);
                            pIVar1 = (this->fields).inventoryController;
                            item = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pSVar24,(MethodInfo *)0x0);
                            if (pIVar1 == (InventoryController *)0x0) goto code_?;
                            InventoryController::InventoryController_AddObject
                                      (pIVar1,item,index % (this->fields).numberOfSlotsPrPage,
                                       (MethodInfo *)0x0);
                          }
                        }
                        index = index + 1;
                      } while (index < iVar21);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_UpdateContent
               (SoundInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundViewItem>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryController;
  if ((pIVar1 != (InventoryController *)0x0) &&
     (pLVar2 = InventoryController::InventoryController_GetComponentsOfSlotsWithType
                          (pIVar1,
                           System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                          ), pLVar2 != (List_1_System_Object_ *)0x0)) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
    uStack_10 = 0;
    LStack_11._8_8_ = pLStack_9;
    LStack_11._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_9 = &LStack_11;
    LStack_11._list = pLVar2;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_11,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                              ), bVar12 != 0) {
      if ((SoundViewItem *)LStack_11._current == (SoundViewItem *)0x0) goto code_?;
      SoundViewItem::SoundViewItem_UnsubscribePendingDownloads
                ((SoundViewItem *)LStack_11._current,(MethodInfo *)0x0);
    }
    pIVar1 = (this->fields).inventoryController;
    if ((pIVar1 != (InventoryController *)0x0) &&
       (pIVar13 = (pIVar1->fields).inventorySlots, pIVar13 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar13,(MethodInfo *)0x0);
      pIVar1 = (this->fields).inventoryController;
      uVar3 = (this->fields).selectedTab;
      pDVar14 = (this->fields).tabs;
      if ((pDVar14 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
         (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,uVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              ), pOVar15 != (Object *)0x0)) {
        page = *(uint *)((longlong)&pOVar15[2].klass + 4);
        pDVar14 = (this->fields).tabs;
        if ((pDVar14 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
           (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,
                                 (this->fields).selectedTab,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                ), pOVar15 != (Object *)0x0)) {
          uVar16 = FUN_?((float)*(int *)&pOVar15[2].klass / (float)*(int *)&pOVar15[1].klass
                                );
          uVar17 = 1;
          if (1 < (int)uVar16) {
            uVar17 = uVar16;
          }
          if ((pIVar1 != (InventoryController *)0x0) &&
             (pTVar18 = (pIVar1->fields).tabMenu, pTVar18 != (TabMenuBase *)0x0)) {
            (*(pTVar18->klass->vtable).__unknown_1.methodPtr)
                      (pTVar18,(ulonglong)uVar3,(ulonglong)page,(ulonglong)uVar17,
                       (pTVar18->klass->vtable).__unknown_1.method);
            pIVar13 = (pIVar1->fields).inventorySlots;
            if (pIVar13 != (InventorySlots *)0x0) {
              InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                        (pIVar13,page,(pIVar1->fields).numberOfSlots,(MethodInfo *)0x0);
              key = StringLiteral_url;
              pSVar19 = (this->fields).originalURL;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Convert);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_00 = (this->fields).settingsBase;
              if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Convert);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                FUN_?();
              }
              pSVar19 = mscorlib.dll::System::Convert::Convert_ToString_1
                                  ((Object *)pSVar19,(IFormatProvider *)0x0,(MethodInfo *)0x0);
              if (this_00 != (SettingsBase *)0x0) {
                SettingsBase::SettingsBase_OnSettingChanged
                          (this_00,key,(Object *)pSVar19,(MethodInfo *)0x0);
                this_01 = (this->fields).soundTabInfos;
                if (this_01 != (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) {
                  this_02 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                       (this->fields).selectedTab,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                      );
                  pDVar20 = (this->fields).categorysAmount;
                  if (pDVar20 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                    iVar21 = FUN_?(pDVar20,(this->fields).selectedTab,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                          );
                    index = 0;
                    if (0 < iVar21) {
                      do {
                        pDVar14 = (this->fields).tabs;
                        if (((pDVar14 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
                            (this_03 = (TabState *)
                                       mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Int32,System::Object]::
                                       Dictionary_2_System_Int32_System_Object__get_Item
                                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar14
                                                  ,(this->fields).selectedTab,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                 ), this_03 == (TabState *)0x0)) ||
                           (pIVar22 = TabState::TabState_get_SlotRange(this_03,(MethodInfo *)0x0),
                           pIVar22 == (Int32__Array *)0x0)) goto code_?;
                        if ((int)pIVar22->max_length == 0) {
code_?:
                          FUN_?();
                          pcVar23 = (code *)swi(3);
                          (*pcVar23)();
                          return;
                        }
                        if (pIVar22->vector[0] <= index) {
                          if ((uint)pIVar22->max_length < 2) goto code_?;
                          if (index < pIVar22->vector[1]) {
                            pSVar24 = (this->fields).soundViewItemPrefab;
                            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            pSVar24 = (SoundViewItem *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_Instantiate_4
                                                ((Object *)pSVar24,
                                                 SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                                );
                            if (this_02 ==
                                (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                                0x0) goto code_?;
                            info = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                   UIElements::UIR::EntryPreProcessor+AllocSize]::
                                   List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                             (this_02,index,
                                              MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                             );
                            pSVar19 = (this->fields).originalURL;
                            this_04 = (UnityAction_1_System_Object_ *)
                                      FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                                  );
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Object]::UnityAction_1_System_Object___ctor
                                      (this_04,(Object *)this,
                                       MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                       ,(MethodInfo *)0x0);
                            if (pSVar24 == (SoundViewItem *)0x0) goto code_?;
                            SoundViewItem::SoundViewItem_Initialize
                                      (pSVar24,(SoundTabInfo *)info,pSVar19,
                                       (UnityAction_1_System_String_ *)this_04,(MethodInfo *)0x0);
                            pIVar1 = (this->fields).inventoryController;
                            item = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pSVar24,(MethodInfo *)0x0);
                            if (pIVar1 == (InventoryController *)0x0) goto code_?;
                            InventoryController::InventoryController_AddObject
                                      (pIVar1,item,index % (this->fields).numberOfSlotsPrPage,
                                       (MethodInfo *)0x0);
                          }
                        }
                        index = index + 1;
                      } while (index < iVar21);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* SoundInventoryController() */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController__ctor
               (SoundInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  bVar2 = iRam_? != 0;
  (this->fields).tabs = (Dictionary_2_System_Int32_TabState_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).tabs >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).soundTabInfos = (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).soundTabInfos >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar7 = (Dictionary_2_System_Int32_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  FUN_?(pDVar7,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__)
  ;
  bVar2 = iRam_? != 0;
  (this->fields).categorysAmount = pDVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).categorysAmount >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).categoryToNameCombinations = (Dictionary_2_System_String_System_Int32_ *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).categoryToNameCombinations >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

