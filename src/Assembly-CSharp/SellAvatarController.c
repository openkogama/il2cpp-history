
/* Void Initialize(Int32, MVBody) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_Initialize
               (SellAvatarController *this,int32_t woID,MVBody *currentBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Update);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sell);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apMStack_1[0] = (MvAvatarMetaData *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields)._AvatarMetaDataWoMap_k__BackingField,
     pMVar4 != (MvAvatarMetaDataWoMap *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pMVar4->fields).avatarWOIDAvatarMetaData;
    if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,(Object **)apMStack_1,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                );
      iVar5 = iRam_?;
      (this->fields).body = currentBody;
      if (iVar5 != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).body >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
          iVar5 = iRam_?;
        } while (!bVar10);
      }
      (this->fields).metaData = apMStack_1[0];
      if (iVar5 != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).metaData >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pTVar11 = (this->fields).sellButtonText;
      (this->fields).woID = woID;
      if (apMStack_1[0] != (MvAvatarMetaData *)0x0) {
        key = StringLiteral_Update;
        if ((apMStack_1[0]->fields).isOnMarketPlace == 0) {
          key = StringLiteral_Sell;
        }
        TM::TM__(key,(MethodInfo *)0x0);
        if (pTVar11 != (Text *)0x0) {
          (*(pTVar11->klass->vtable).set_text.methodPtr)(pTVar11);
          this_01 = (this->fields).removeButton;
          if (((this_01 != (Button *)0x0) &&
              (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0),
              apMStack_1[0] != (MvAvatarMetaData *)0x0)) &&
             ((this_03 != (GameObject *)0x0 &&
              ((UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_03,(apMStack_1[0]->fields).isOnMarketPlace,(MethodInfo *)0x0),
               apMStack_1[0] != (MvAvatarMetaData *)0x0 &&
               (this_02 = (this->fields).nameField, this_02 != (InputField *)0x0)))))) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                      (this_02,(apMStack_1[0]->fields).name,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean IsSelectedBodyValid() */

bool Assembly-CSharp.dll::SellAvatarController::SellAvatarController_IsSelectedBodyValid
               (SellAvatarController *this,MethodInfo *method)

{
  if ((this->fields).metaData != (MvAvatarMetaData *)0x0) {
    return (((this->fields).metaData)->fields).canBeSoldOnMarketPlace;
  }
  return 0;
}


/* Void OnAddToMarketplace(Boolean) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnAddToMarketplace
               (SellAvatarController *this,bool added,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SellAvatarController__OnAddToMarketplace_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SellAvatarController____c___OnAddToMarketplace_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SellAvatarController____c___OnAddToMarketplace_b__11_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SellAvatarController____c__DisplayClass11_0___OnAddToMarketplace_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SellAvatarController____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SellAvatarController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Update);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_is_now_available_in_your_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_update_Avatar_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_put_Avatar_in_your_sho);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_need_to_be_level__0__to_plac);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_updated_in_your_shop_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SellAvatarController____c__DisplayClass11_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).OnMarketPlaceActionComplete;
    this_03 = (UnityAction_1_System_ByteEnum_ *)
              FUN_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_03,(Object *)this,MethodInfo__SellAvatarController__OnAddToMarketplace_bool_,
               (MethodInfo *)0x0);
    pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pMVar3,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar2->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    }
    else {
      pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?(pMVar3,TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar2->fields).OnMarketPlaceActionComplete = pMVar4;
      pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(pMVar2->fields).OnMarketPlaceActionComplete >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SellAvatarController____c);
    }
    this_04 = TypeInfo__SellAvatarController____c->static_fields->__9__11_0;
    if (this_04 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SellAvatarController____c);
      }
      pSVar12 = TypeInfo__SellAvatarController____c->static_fields->__9;
      this_04 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)pSVar12,
                 MethodInfo__SellAvatarController____c___OnAddToMarketplace_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SellAvatarController____c->static_fields->__9__11_0 = this_04;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__SellAvatarController____c->static_fields->__9__11_0 >>
                       0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar11,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (added == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
          (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
         (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar13 != (MVLocalPlayer *)0x0)) {
        iVar14 = (pMVar13->fields)._.level;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
          if (iVar14 < (pMVar2->fields)._MarketPlaceLevel_k__BackingField) {
            pSVar15 = TM::TM__(StringLiteral_You_need_to_be_level__0__to_plac,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar2 != (MVNetworkGame *)0x0) {
              aiStackX_20[0] = (pMVar2->fields)._MarketPlaceLevel_k__BackingField;
              arg0 = (Object *)FUN_?(uRam_?,aiStackX_20);
              PStack_16._arg0 = (Object *)0x0;
              PStack_16._arg1 = (Object *)0x0;
              PStack_16._arg2 = (Object *)0x0;
              PStack_16._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                        (&PStack_16,arg0,(MethodInfo *)0x0);
              PStack_17._arg0 = PStack_16._arg0;
              PStack_17._arg1 = PStack_16._arg1;
              PStack_17._arg2 = PStack_16._arg2;
              PStack_17._args = PStack_16._args;
              pOVar18 = (Object__Class *)
                        mscorlib.dll::System::String::String_FormatHelper
                                  ((IFormatProvider *)0x0,pSVar15,&PStack_17,(MethodInfo *)0x0);
              if (object != (Object *)0x0) {
                bVar10 = iRam_? != 0;
                object[1].klass = pOVar18;
                if (bVar10) {
                  uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
                  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                    LOCK();
                    bVar10 = uVar8 == *puVar9;
                    if (bVar10) {
                      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar10);
                }
code_?:
                pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                this_06 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          (this_06,object,
                           MethodInfo__SellAvatarController____c__DisplayClass11_0___OnAddToMarketplace_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pMVar19 = 
                UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                ;
                if ((
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  PStack_16._args = (Object__Array *)&UNK_?;
                  FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  LOCK();
                  UNLOCK();
                  PStack_16._args = (Object__Array *)&UNK_?;
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                               );
                  LOCK();
                  UNLOCK();
                  PStack_16._args = (Object__Array *)&UNK_?;
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                               );
                  LOCK();
                  UNLOCK();
                  if ((pMVar19->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    PStack_16._args = (Object__Array *)&UNK_?;
                    FUN_?(pMVar19);
                  }
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  PStack_16._args = (Object__Array *)&UNK_?;
                  FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                PStack_16._args = (Object__Array *)&UNK_?;
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_GetEventChain
                          (pGVar11,(IList_1_UnityEngine_Transform_ *)
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields
                                   ->s_InternalTransformList,(MethodInfo *)0x0);
                pLVar20 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar20 != (List_1_UnityEngine_Transform_ *)0x0) {
                  lVar7 = (longlong)(pLVar20->fields)._size;
                  uVar6 = 0;
                  if (0 < lVar7) {
                    lVar21 = 0;
                    lVar22 = 0x20;
                    do {
                      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                   field_0x1c == 0) {
                        PStack_16._args = (Object__Array *)&UNK_?;
                        FUN_?();
                      }
                      pLVar20 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                               s_InternalTransformList;
                      if (pLVar20 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                      if ((uint)(pLVar20->fields)._size <= uVar6) {
                        PStack_16._args = (Object__Array *)&UNK_?;
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      pTVar23 = (pLVar20->fields)._items;
                      if (pTVar23 == (Transform__Array *)0x0) goto code_?;
                      if ((uint)pTVar23->max_length <= uVar6) {
                        PStack_16._args = (Object__Array *)&UNK_?;
                        FUN_?();
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      this_02 = *(Component **)((longlong)pTVar23->vector + lVar22 + -0x20);
                      if (this_02 == (Component *)0x0) goto code_?;
                      PStack_16._args = (Object__Array *)&UNK_?;
                      pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject(this_02,(MethodInfo *)0x0);
                      PStack_16._args = (Object__Array *)&UNK_?;
                      bVar24 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                               ExecuteEvents_Execute_18
                                         (pGVar11,(BaseEventData *)0x0,this_06,
                                          (pMVar19->field7_0x38).rgctx_data[1].method);
                      if (bVar24 != 0) {
                        PStack_16._args = (Object__Array *)&UNK_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_02,(MethodInfo *)0x0);
                        return;
                      }
                      uVar6 = uVar6 + 1;
                      lVar21 = lVar21 + 1;
                      lVar22 = lVar22 + 8;
                    } while (lVar21 < lVar7);
                  }
                  return;
                }
code_?:
                PStack_16._args = (Object__Array *)&UNK_?;
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
          }
          else {
            pMVar25 = (this->fields).metaData;
            if (pMVar25 != (MvAvatarMetaData *)0x0) {
              pSVar15 = StringLiteral_Failed_to_update_Avatar_;
              if ((pMVar25->fields).isOnMarketPlace == 0) {
                pSVar15 = StringLiteral_Failed_to_put_Avatar_in_your_sho;
              }
              pOVar18 = (Object__Class *)TM::TM__(pSVar15,(MethodInfo *)0x0);
              if (object != (Object *)0x0) {
                bVar10 = iRam_? != 0;
                object[1].klass = pOVar18;
                if (bVar10) {
                  uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
                  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                    LOCK();
                    bVar10 = uVar8 == *puVar9;
                    if (bVar10) {
                      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar10);
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
    else {
      pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SellAvatarController____c);
      }
      this_05 = TypeInfo__SellAvatarController____c->static_fields->__9__11_1;
      if (this_05 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__SellAvatarController____c);
        }
        pSVar12 = TypeInfo__SellAvatarController____c->static_fields->__9;
        this_05 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_05,(Object *)pSVar12,
                   MethodInfo__SellAvatarController____c___OnAddToMarketplace_b__11_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SellAvatarController____c->static_fields->__9__11_1 = this_05;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&TypeInfo__SellAvatarController____c->static_fields->__9__11_1
                         >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar11,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_05,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      pMVar25 = (this->fields).metaData;
      if (pMVar25 != (MvAvatarMetaData *)0x0) {
        pSVar15 = StringLiteral_Avatar_updated_in_your_shop_;
        if ((pMVar25->fields).isOnMarketPlace == 0) {
          pSVar15 = StringLiteral_Avatar_is_now_available_in_your_;
        }
        pOVar18 = (Object__Class *)TM::TM__(pSVar15,(MethodInfo *)0x0);
        if (object != (Object *)0x0) {
          bVar10 = iRam_? != 0;
          object[1].klass = pOVar18;
          if (bVar10) {
            uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          this_01 = (this->fields).removeButton;
          if ((this_01 != (Button *)0x0) &&
             (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_01,(MethodInfo *)0x0),
             pGVar11 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar11,1,(MethodInfo *)0x0);
            pTVar26 = (this->fields).sellButtonText;
            pSVar15 = TM::TM__(StringLiteral_Update,(MethodInfo *)0x0);
            if (pTVar26 != (Text *)0x0) {
              (*(pTVar26->klass->vtable).set_text.methodPtr)
                        (pTVar26,pSVar15,(pTVar26->klass->vtable).set_text.method);
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnImageUploaded() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnImageUploaded
               (SellAvatarController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pIVar3 = (this->fields).nameField;
    iVar4 = (this->fields).woID;
    if (pIVar3 != (InputField *)0x0) {
      pMVar5 = (pMVar2->fields).operationRequests;
      value = (pIVar3->fields).m_Text;
      if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
        if (this_00 != (MaterialLoader *)0x0) {
          bVar6 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            return;
          }
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          aiStackX_18[0] = iVar4;
          value_00 = (Object *)FUN_?(uRam_?,aiStackX_18);
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            uVar7 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar8 = (undefined7)((ulonglong)method_00 >> 8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0x16,value_00,(InsertionBehavior__Enum)uVar7,method_00);
            uVar9 = CONCAT71(uVar8,0xa6);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0xa6,(Object *)value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pPVar10 = (pMVar5->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar10 != (PhotonPeer *)0x0) {
              (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                        (pPVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x36),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar10->klass->vtable).SendOperation.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnPop
               (SellAvatarController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SellAvatarController____c___OnPop_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SellAvatarController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SellAvatarController____c);
  }
  this_01 = TypeInfo__SellAvatarController____c->static_fields->__9__12_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SellAvatarController____c);
    }
    object = TypeInfo__SellAvatarController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__SellAvatarController____c___OnPop_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SellAvatarController____c->static_fields->__9__12_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__SellAvatarController____c->static_fields->__9__12_0 >>
                     0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnRemoveFromMarketplace(Boolean) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnRemoveFromMarketplace
               (SellAvatarController *this,bool added,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SellAvatarController__OnRemoveFromMarketplace_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SellAvatarController____c___OnRemoveFromMarketplace_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SellAvatarController____c__DisplayClass15_0___OnRemoveFromMarketplace_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SellAvatarController____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SellAvatarController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sell);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_removed_from_your_shop_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_remove_Avatar_from_you);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__SellAvatarController____c__DisplayClass15_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).OnMarketPlaceActionComplete;
    this_02 = (UnityAction_1_System_ByteEnum_ *)
              FUN_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_02,(Object *)this,
               MethodInfo__SellAvatarController__OnRemoveFromMarketplace_bool_,(MethodInfo *)0x0);
    pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pMVar3,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar2->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    }
    else {
      pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?(pMVar3,TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar2->fields).OnMarketPlaceActionComplete = pMVar4;
      pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(pMVar2->fields).OnMarketPlaceActionComplete >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SellAvatarController____c);
    }
    this_03 = TypeInfo__SellAvatarController____c->static_fields->__9__15_0;
    if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SellAvatarController____c);
      }
      object = TypeInfo__SellAvatarController____c->static_fields->__9;
      this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                 MethodInfo__SellAvatarController____c___OnRemoveFromMarketplace_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SellAvatarController____c->static_fields->__9__15_0 = this_03;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__SellAvatarController____c->static_fields->__9__15_0 >>
                       0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar11,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar12 = (Object__Class *)
              TM::TM__(StringLiteral_Failed_to_remove_Avatar_from_you,(MethodInfo *)0x0);
    if (object_00 != (Object *)0x0) {
      bVar10 = iRam_? != 0;
      object_00[1].klass = pOVar12;
      if (bVar10) {
        uVar6 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      if (added == 0) {
code_?:
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_04 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_04,object_00,
                   MethodInfo__SellAvatarController____c__DisplayClass15_0___OnRemoveFromMarketplace_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar13 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar13);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar11,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar14 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar7 = (longlong)(pLVar14->fields)._size;
          uVar6 = 0;
          if (0 < lVar7) {
            lVar15 = 0;
            lVar16 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar14 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar14->fields)._size <= uVar6) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pTVar17 = (pLVar14->fields)._items;
              if (pTVar17 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar17->max_length <= uVar6) {
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar17->vector + lVar16 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar11,(BaseEventData *)0x0,this_04,
                                  (pMVar13->field7_0x38).rgctx_data[1].method);
              if (bVar18 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar6 = uVar6 + 1;
              lVar15 = lVar15 + 1;
              lVar16 = lVar16 + 8;
            } while (lVar15 < lVar7);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pOVar12 = (Object__Class *)
                TM::TM__(StringLiteral_Avatar_removed_from_your_shop_,(MethodInfo *)0x0);
      bVar10 = iRam_? != 0;
      object_00[1].klass = pOVar12;
      if (bVar10) {
        uVar6 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      this_00 = (this->fields).removeButton;
      if ((this_00 != (Button *)0x0) &&
         (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0), pGVar11 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar11,0,(MethodInfo *)0x0);
        pTVar19 = (this->fields).sellButtonText;
        pSVar20 = TM::TM__(StringLiteral_Sell,(MethodInfo *)0x0);
        if (pTVar19 != (Text *)0x0) {
          (*(pTVar19->klass->vtable).set_text.methodPtr)
                    (pTVar19,pSVar20,(pTVar19->klass->vtable).set_text.method);
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnRemovePressed() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnRemovePressed
               (SellAvatarController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SellAvatarController__OnRemoveFromMarketplace_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SellAvatarController____c___OnRemovePressed_b__14_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SellAvatarController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SellAvatarController____c);
  }
  this_00 = TypeInfo__SellAvatarController____c->static_fields->__9__14_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SellAvatarController____c);
    }
    object = TypeInfo__SellAvatarController____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__SellAvatarController____c___OnRemovePressed_b__14_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SellAvatarController____c->static_fields->__9__14_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__SellAvatarController____c->static_fields->__9__14_0 >>
                     0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar6 != (MVGameControllerBase *)0x0) &&
     (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
    pMVar8 = (pMVar7->fields).OnMarketPlaceActionComplete;
    this_01 = (UnityAction_1_System_ByteEnum_ *)
              FUN_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    uVar3 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_01,(Object *)this,
               MethodInfo__SellAvatarController__OnRemoveFromMarketplace_bool_,(MethodInfo *)0x0);
    pMVar8 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar8,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar8 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar7->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    }
    else {
      pMVar9 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar8->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar9 = pMVar8;
      }
      if (pMVar9 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?(pMVar8,TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (pMVar7->fields).OnMarketPlaceActionComplete = pMVar9;
      pMVar9 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar8->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar9 = pMVar8;
      }
      if (pMVar9 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?(pMVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(pMVar7->fields).OnMarketPlaceActionComplete >> 0xc);
      uVar3 = (ulonglong)(uVar1 & 0x3f);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar11 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar11 | 1L << uVar3;
        }
        UNLOCK();
      } while (!bVar5);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
      pMVar12 = (pMVar7->fields).operationRequests;
      iVar13 = (this->fields).woID;
      if (pMVar12 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        aiStackX_18[0] = iVar13;
        value = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar14 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_02,0x16,value,(InsertionBehavior__Enum)CONCAT71((int7)(uVar3 >> 8),2),
                     method_00);
          pPVar15 = (pMVar12->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar15 != (PhotonPeer *)0x0) {
            (*(pPVar15->klass->vtable).SendOperation.methodPtr)
                      (pPVar15,CONCAT71((int7)((ulonglong)uVar14 >> 8),0x37),this_02,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar15->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnSellPressed() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnSellPressed
               (SellAvatarController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SellAvatarController__ScreenShotCallback_UnityEngine__Texture2D__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Screenshot_taken_successfully_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).metaData != (MvAvatarMetaData *)0x0) &&
     ((((this->fields).metaData)->fields).canBeSoldOnMarketPlace != 0)) {
    pIVar1 = (this->fields).nameField;
    if (pIVar1 == (InputField *)0x0) {
DAT_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar3 = (pIVar1->fields).m_Text;
    if ((pSVar3 != (String *)0x0) && ((pSVar3->fields)._stringLength != 0)) {
      this_00 = (this->fields).screenShooter;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__SellAvatarController__ScreenShotCallback_UnityEngine__Texture2D__System__String_
                 ,(MethodInfo *)0x0);
      if (this_00 == (AvatarScreenShooter *)0x0) goto DAT_?;
      AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
                (this_00,(Action_2_UnityEngine_Texture2D_String_ *)this_01,(this->fields).body,1,
                 StringLiteral_Screenshot_taken_successfully_,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ScreenShotCallback(Texture2D, String) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_ScreenShotCallback
               (SellAvatarController *this,Texture2D *texture,String *successMessage,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SellAvatarController__OnAddToMarketplace_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SellAvatarController____c___ScreenShotCallback_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SellAvatarController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pMVar4 = (pMVar2->fields).OnMarketPlaceActionComplete;
  this_00 = (UnityAction_1_System_ByteEnum_ *)
            FUN_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
  UnityAction_1_System_ByteEnum___ctor
            (this_00,(Object *)this,MethodInfo__SellAvatarController__OnAddToMarketplace_bool_,
             (MethodInfo *)0x0);
  pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pMVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
    (pMVar2->fields).OnMarketPlaceActionComplete =
         (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
  }
  else {
    pMVar5 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar4->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
      pMVar5 = pMVar4;
    }
    if (pMVar5 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      FUN_?(pMVar4,TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pMVar2->fields).OnMarketPlaceActionComplete = pMVar5;
    pMVar5 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar4->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
      pMVar5 = pMVar4;
    }
    if (pMVar5 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(pMVar2->fields).OnMarketPlaceActionComplete >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SellAvatarController____c);
  }
  this_01 = TypeInfo__SellAvatarController____c->static_fields->__9__9_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__SellAvatarController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SellAvatarController____c);
    }
    object = TypeInfo__SellAvatarController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__SellAvatarController____c___ScreenShotCallback_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SellAvatarController____c->static_fields->__9__9_0 = this_01;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&TypeInfo__SellAvatarController____c->static_fields->__9__9_0 >>
                     0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar11 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pIVar12 = (this->fields).nameField, pIVar12 != (InputField *)0x0)) {
    pMVar13 = (pMVar2->fields).operationRequests;
    value = (pIVar12->fields).m_Text;
    if (pMVar13 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if (this_02 != (MaterialLoader *)0x0) {
        bVar14 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_02,(MethodInfo *)0x0);
        if (bVar14 == 0) {
          return;
        }
        this_03 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_03,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        value_00 = (Object *)FUN_?(uRam_?,&stack0x00000018);
        if (this_03 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          uVar15 = CONCAT71((int7)((ulonglong)pMVar11 >> 8),2);
          pMVar11 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
          uVar16 = (undefined7)((ulonglong)pMVar11 >> 8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_03,0x16,value_00,(InsertionBehavior__Enum)uVar15,pMVar11);
          uVar17 = CONCAT71(uVar16,0xa6);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_03,0xa6,(Object *)value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar15 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pPVar18 = (pMVar13->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar18 != (PhotonPeer *)0x0) {
            (*(pPVar18->klass->vtable).SendOperation.methodPtr)
                      (pPVar18,CONCAT71((int7)((ulonglong)uVar17 >> 8),0x36),this_03,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar18->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* SellAvatarController() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController__ctor
               (SellAvatarController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).woID = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

