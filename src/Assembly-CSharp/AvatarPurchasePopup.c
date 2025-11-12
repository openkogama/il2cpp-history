
/* Void Initialize(RawImage, AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarPurchasePopup::AvatarPurchasePopup_Initialize
               (AvatarPurchasePopup *this,RawImage *image,AvatarRepositoryItem *item,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).item = item;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).item >> 0xc);
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
  pTVar6 = (this->fields).avatarGoldCost;
  if ((((item != (AvatarRepositoryItem *)0x0) &&
       (pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&(item->fields).priceGold,(MethodInfo *)0x0),
       pTVar6 != (Text *)0x0)) &&
      ((*(pTVar6->klass->vtable).set_text.methodPtr)
                 (pTVar6,pSVar7,(pTVar6->klass->vtable).set_text.method), image != (RawImage *)0x0))
     && (pRVar8 = (this->fields).avatarImage, pRVar8 != (RawImage *)0x0)) {
    pTVar9 = (image->fields).m_Texture;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object,pTVar9,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pTVar10 = (pRVar8->fields).m_Texture;
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
    if (pTVar9 != (Texture *)0x0 || pTVar10 != (Texture *)0x0) {
      if (pTVar9 == (Texture *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pTVar10 == (Texture *)0x0) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        bVar1 = (pTVar10->fields)._.m_CachedPtr == (void *)0x0;
      }
      else if (pTVar10 == (Texture *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar1 = (pTVar9->fields)._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar1 = pTVar10 == pTVar9;
      }
      if (!bVar1) {
        bVar1 = iRam_? != 0;
        (pRVar8->fields).m_Texture = pTVar9;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(pRVar8->fields).m_Texture >> 0xc);
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
        (*(pRVar8->klass->vtable).SetVerticesDirty.methodPtr)
                  (pRVar8,(pRVar8->klass->vtable).SetVerticesDirty.method);
        (*(pRVar8->klass->vtable).SetMaterialDirty.methodPtr)
                  (pRVar8,(pRVar8->klass->vtable).SetMaterialDirty.method);
      }
    }
    return;
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnPurchaseClicked() */

void Assembly-CSharp.dll::AvatarPurchasePopup::AvatarPurchasePopup_OnPurchaseClicked
               (AvatarPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarPurchasePopup___OnPurchaseClicked_b__4_0_UnityEngine__EventSystems__IPurchaseAvatar__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseAvatar>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarPurchasePopup___OnPurchaseClicked_b__4_0_UnityEngine__EventSystems__IPurchaseAvatar__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseAvatar>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseAvatar>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>_
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
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar9 = (pLVar3->fields)._items;
        if (pTVar9 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar9->max_length <= uVar5) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar9->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <OnPurchaseClicked>b__4_0(IPurchaseAvatar, BaseEventData) */

void Assembly-CSharp.dll::AvatarPurchasePopup::AvatarPurchasePopup__OnPurchaseClicked_b__4_0
               (AvatarPurchasePopup *this,IPurchaseAvatar *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).item;
  if (x == (IPurchaseAvatar *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPurchaseAvatar) {
        pIVar6 = &pIVar3->vtable + pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar6 = (IPurchaseAvatar__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IPurchaseAvatar,0);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->PurchaseAvatar).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,pAVar1,(pIVar6->PurchaseAvatar).method,UNRECOVERED_JUMPTABLE);
  return;
}

