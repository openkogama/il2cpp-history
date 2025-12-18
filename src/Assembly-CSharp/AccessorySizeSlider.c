
/* Void ChangeValue(Single) */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_ChangeValue
               (AccessorySizeSlider *this,float value,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float)(*(pSVar1->klass->vtable).get_value.methodPtr)
                             (pSVar1,(pSVar1->klass->vtable).get_value.method);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar1->klass->vtable).set_value.methodPtr)
              (pSVar1,fVar2 + value,(pSVar1->klass->vtable).set_value.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(AccessorySlotType, Int32) */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_Initialize
               (AccessorySizeSlider *this,AccessorySlotType__Enum accessorySlot,
               int32_t streamingAssetID,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)CONCAT44(in_register_00000084,streamingAssetID);
  player = (MVPlayer *)CONCAT44(in_register_00000014,accessorySlot);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessorySizeSlider___Initialize_b__7_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = cRam_? == '\0';
  (this->fields).accessorySlot = accessorySlot;
  if (bVar2) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar3 != (GameSessionData *)0x0) {
    if ((pGVar3->fields).gameMode == 2) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__AccessorySizeSlider___Initialize_b__7_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar1 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
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
        if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar1);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar4,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar5 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar6 = (longlong)(pLVar5->fields)._size;
        uVar7 = 0;
        if (0 < lVar6) {
          lVar8 = 0;
          lVar9 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar5 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar5->fields)._size <= uVar7) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar11 = (pLVar5->fields)._items;
            if (pTVar11 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar11->max_length <= uVar7) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar11->vector + lVar9 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar4,(BaseEventData *)0x0,this_02,
                               (pMVar1->field7_0x38).rgctx_data[1].method);
            if (bVar12 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 1;
            lVar9 = lVar9 + 8;
          } while (lVar8 < lVar6);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,pMVar1);
    if (extraout_RAX != 0) {
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        pMVar13 = (MVBody *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                           (this_01,*(int32_t *)(extraout_RAX + 0xa8),
                            MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                           );
        bVar2 = iRam_? != 0;
        (this->fields).avatarBody = pMVar13;
        if (bVar2) {
          uVar7 = (uint)((ulonglong)&(this->fields).avatarBody >> 0xc);
          uVar14 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
            puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
            LOCK();
            bVar2 = uVar15 == *puVar16;
            if (bVar2) {
              *puVar16 = uVar15 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        pSVar17 = (this->fields).slider;
        if ((this->fields).isInPreview == 0) {
          if (pMVar13 != (MVBody *)0x0) {
            if ((pMVar13->fields).previewBodyAccessoriesController ==
                (BodyAccessoriesController *)0x0) {
              this_03 = (pMVar13->fields).bodyAccessoriesController;
              if (this_03 == (BodyAccessoriesController *)0x0) goto DAT_?;
            }
            else {
              this_03 = (pMVar13->fields).previewBodyAccessoriesController;
            }
            fVar18 = BodyAccessoriesController::BodyAccessoriesController_GetScale
                               (this_03,(this->fields).accessorySlot,(MethodInfo *)0x0);
            if (pSVar17 != (Slider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pSVar17->klass->vtable).set_value.methodPtr)
                        (pSVar17,fVar18,(pSVar17->klass->vtable).set_value.method);
              return;
            }
          }
        }
        else if (pSVar17 != (Slider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar17->klass->vtable).set_value.methodPtr)
                    (pSVar17,(this->fields).defaultValue,(pSVar17->klass->vtable).set_value.method);
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize(MVBody) */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_Initialize_1
               (AccessorySizeSlider *this,MVBody *avatarBody,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).avatarBody = avatarBody;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarBody >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pSVar6 = (this->fields).slider;
  if ((this->fields).isInPreview == 0) {
    if (avatarBody != (MVBody *)0x0) {
      if ((avatarBody->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0)
      {
        this_00 = (avatarBody->fields).bodyAccessoriesController;
        if (this_00 == (BodyAccessoriesController *)0x0) goto code_?;
      }
      else {
        this_00 = (avatarBody->fields).previewBodyAccessoriesController;
      }
      fVar7 = BodyAccessoriesController::BodyAccessoriesController_GetScale
                        (this_00,(this->fields).accessorySlot,(MethodInfo *)0x0);
      if (pSVar6 != (Slider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar6->klass->vtable).set_value.methodPtr)
                  (pSVar6,fVar7,(pSVar6->klass->vtable).set_value.method);
        return;
      }
    }
  }
  else if (pSVar6 != (Slider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar6->klass->vtable).set_value.methodPtr)
              (pSVar6,(this->fields).defaultValue,(pSVar6->klass->vtable).set_value.method);
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_Reset
               (AccessorySizeSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Slider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Slider>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (Slider *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Slider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Slider>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).slider = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).slider >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void SyncScale() */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_SyncScale
               (AccessorySizeSlider *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarBody;
  pSVar2 = (this->fields).slider;
  if ((pSVar2 == (Slider *)0x0) ||
     ((*(pSVar2->klass->vtable).get_value.methodPtr)
                (pSVar2,(pSVar2->klass->vtable).get_value.method), pMVar1 == (MVBody *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  if ((pMVar1->fields).previewBodyAccessoriesController != (BodyAccessoriesController *)0x0) {
    return;
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
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
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    pOVar6 = (Object *)FUN_?(uRam_?,&stack0x00000008);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x81,pOVar6,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pOVar6 = (Object *)FUN_?(uRam_?,&stack0x00000008);
      uVar7 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x74,pOVar6,(InsertionBehavior__Enum)uVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pOVar6 = (Object *)FUN_?(uRam_?,&stack0x00000008);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar4 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x23);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x23,pOVar6,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),1),method_00);
      pPVar8 = (pMVar5->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar8 != (PhotonPeer *)0x0) {
        (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                  (pPVar8,CONCAT71((int7)((ulonglong)uVar4 >> 8),99),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar8->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ValueChanged() */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_ValueChanged
               (AccessorySizeSlider *this,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    size = (float)(*(pSVar1->klass->vtable).get_value.methodPtr)
                            (pSVar1,(pSVar1->klass->vtable).get_value.method);
    pMVar2 = (this->fields).avatarBody;
    slot = (this->fields).accessorySlot;
    if (pMVar2 != (MVBody *)0x0) {
      if ((pMVar2->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
        pBVar3 = (pMVar2->fields).bodyAccessoriesController;
        if (pBVar3 == (BodyAccessoriesController *)0x0) goto code_?;
        BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
                  (pBVar3,size,slot,(MethodInfo *)0x0);
        pBVar3 = (pMVar2->fields).bodyAccessoriesController;
      }
      else {
        pBVar3 = (pMVar2->fields).previewBodyAccessoriesController;
        if (pBVar3 == (BodyAccessoriesController *)0x0) goto code_?;
        BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
                  (pBVar3,size,slot,(MethodInfo *)0x0);
        pBVar3 = (pMVar2->fields).previewBodyAccessoriesController;
      }
      if (pBVar3 != (BodyAccessoriesController *)0x0) {
        accessoryData = (pBVar3->fields).accessoryData;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar4 = (pMVar2->fields).bodyClone;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
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
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pBVar4 != (BodyClone *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pBVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pBVar4 = (pMVar2->fields).bodyClone;
            if ((pBVar4 == (BodyClone *)0x0) ||
               (pBVar3 = (pBVar4->fields).bodyAccessoriesController,
               pBVar3 == (BodyAccessoriesController *)0x0)) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                      (pBVar3,accessoryData,(MethodInfo *)0x0);
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Initialize>b__7_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider__Initialize_b__7_0
               (AccessorySizeSlider *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessorySizeSlider__Initialize_MVBody_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MVBody>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<MVBody>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,MethodInfo__AccessorySizeSlider__Initialize_MVBody_,
             (MethodInfo *)0x0);
  if (x == (IGetCurrentBody *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGetCurrentBody) {
        pIVar5 = &pIVar2->vtable + pIVar2->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pIVar5 = (IGetCurrentBody__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,0,this_00,unaff_RDI)
  ;
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar5->GetCurrentBody).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,this_00,(pIVar5->GetCurrentBody).method,UNRECOVERED_JUMPTABLE);
  return;
}

